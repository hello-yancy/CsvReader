#include "CsvReaderImpl.hpp"

namespace Csv {

class CsvReaderImpl : public CsvReaderExt
{
public:
    CsvReaderImpl() {
    }

    virtual ~CsvReaderImpl() throw() {
    }

 public:
 	static std::auto_ptr<CsvReader> create();

};

//==========================================
// CsvReaderExt::create
//==========================================
std::auto_ptr<CsvReader> CsvReaderExt::create() {
	return std::auto_ptr<CsvReader>(new	CsvReaderImpl());
}

}