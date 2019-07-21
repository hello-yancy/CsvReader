#ifndef _CSV_SHEET_IMPL_HPP_
#define _CSV_SHEET_IMPL_HPP_

#include "CsvSheet.hpp"
#include <memory>

namespace Csv {

class CsvSheetExt : public CsvSheet
{
public:
    CsvSheetExt() {}
    virtual ~CsvSheetExt() throw() {}

 public:
    static std::auto_ptr<CsvSheet> create();

};

}

#endif