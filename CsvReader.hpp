#ifndef _CSV_READER_HPP_
#define _CSV_READER_HPP_

#include "CsvSheet.hpp"
#include <string>

namespace Csv {

class CsvReader
{
public:
    CsvReader() {}
    virtual ~CsvReader() throw() {}

    virtual void read(const std::string& filename, CsvSheet& csvSheet) = 0;

};

}


#endif