#ifndef _CSV_FACTORY_HPP_
#define _CSV_FACTORY_HPP_

#include "CsvSheet.hpp"
#include "CsvReader.hpp"
#include <memory>

namespace Csv {

class CsvFactory
{
public:
    CsvFactory() {}
    virtual ~CsvFactory() throw() {}

    virtual std::auto_ptr<CsvSheet> createCsvSheet() = 0;
    virtual std::auto_ptr<CsvReader> createCsvReader() = 0;

};

}


#endif