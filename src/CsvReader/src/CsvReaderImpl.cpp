#include "CsvReaderImpl.hpp"
#include "CsvConstants.hpp"
#include "CsvTypeDef.hpp"

#include <fstream>
#include <sstream>

namespace Csv {

class CsvReaderImpl : public CsvReaderExt
{
public:
    CsvReaderImpl() {
    }

    virtual ~CsvReaderImpl() throw() {
    }

    virtual void read(const std::string& filename, CsvSheet& csvSheet) {
        std::ifstream in(filename);
        if (in.fail()) {
            return;
        }

        StrVec record;
        while (in.good()) {
            record.clear();
            readRecord(in, Csv::CHAR_COMMA, record);
        }
        in.close();
    }

protected:
    void readRecord(std::istream &in, char delimiter, StrVec& record) {
        std::stringstream ss;
        bool inquotes = false;
        while (in.good()) {
            char c = in.get();
            if (!inquotes && c==Csv::CHAR_QUOTE) {          // beginquotechar
                inquotes = true;
            }
            else if (inquotes && c==Csv::CHAR_QUOTE) {      // quotechar
                if (in.peek() == Csv::CHAR_QUOTE) {         // 2 consecutive quotes resolve to 1
                    ss << (char)in.get();
                }
                else {
                    inquotes = false;
                }
            }
            else if (!inquotes && c==delimiter) {           // end of field
                record.push_back(ss.str());
                ss.str("");
            }
            else if (!inquotes && (c=='\r' || c=='\n')) {
                if (in.peek() == '\n') {
                    in.get();
                }
                record.push_back(ss.str());
                return;
            }
            else {
                ss << c;
            }
        }

        record.push_back(ss.str());
    }
};

//==========================================
// CsvReaderExt::create
//==========================================
std::auto_ptr<CsvReader> CsvReaderExt::create() {
    return std::auto_ptr<CsvReader>(new CsvReaderImpl());
}

}