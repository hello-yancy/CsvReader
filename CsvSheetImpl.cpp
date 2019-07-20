#include "CsvSheetImpl.hpp"

namespace Csv {

class CsvSheetImpl : public CsvSheetExt
{
public:
    CsvSheetImpl() {
    }

    virtual ~CsvSheetImpl() throw() {
    }

 public:
 	static std::auto_ptr<CsvSheet> create();

};

//==========================================
// CsvSheetExt::create
//==========================================
std::auto_ptr<CsvSheet> CsvSheetExt::create() {
	return std::auto_ptr<CsvSheet>(new	CsvSheetImpl());
}

}