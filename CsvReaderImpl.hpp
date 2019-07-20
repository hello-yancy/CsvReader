#ifndef _CSV_READER_IMPL_HPP_
#define _CSV_READER_IMPL_HPP_

#include "CsvReader.hpp"
#include <memory>

namespace Csv {

class CsvReaderExt : public CsvReader
{
public:
    CsvReaderExt() {}
    virtual ~CsvReaderExt() throw() {}

 public:
 	static std::auto_ptr<CsvReader> create();

};

}

#endif