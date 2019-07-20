#include "CsvFactoryImpl.hpp"

namespace Csv {

class CsvFactoryImpl : public CsvFactoryExt
{
public:
    CsvFactoryImpl() {
    }

    virtual ~CsvFactoryImpl() throw() {
    }

    virtual std::auto_ptr<CsvSheet> createCsvSheet() {

    }

    virtual std::auto_ptr<CsvReader> createCsvReader() {
    }
};

//==========================================
// CsvFactoryExt::create
//==========================================
std::auto_ptr<CsvFactory> CsvFactoryExt::create() {
	return std::auto_ptr<CsvFactory>(new CsvFactoryImpl());
}

}