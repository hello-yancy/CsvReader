#include "CsvFactoryImpl.hpp"
#include "CsvSheetImpl.hpp"
#include "CsvReaderImpl.hpp"

namespace Csv {

class CsvFactoryImpl : public CsvFactoryExt
{
public:
    CsvFactoryImpl() {
    }

    virtual ~CsvFactoryImpl() throw() {
    }

    virtual std::auto_ptr<CsvSheet> createCsvSheet() {
        return CsvSheetExt::create();
    }

    virtual std::auto_ptr<CsvReader> createCsvReader() {
        return CsvReaderExt::create();
    }
};

//==========================================
// CsvFactoryExt::create
//==========================================
std::auto_ptr<CsvFactory> CsvFactoryExt::create() {
    return std::auto_ptr<CsvFactory>(new CsvFactoryImpl());
}

}