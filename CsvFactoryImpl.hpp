#ifndef _CSV_FACTORY_IMPL_HPP_
#define _CSV_FACTORY_IMPL_HPP_

#include "CsvFactory.hpp"

namespace Csv {

class CsvFactoryExt : public CsvFactory
{
public:
    CsvFactoryExt() {}
    virtual ~CsvFactoryExt() throw() {}

 public:
    static std::auto_ptr<CsvFactory> create();

};

}

#endif