#include "I_Printable.h"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj)
{
    obj.print(os); // obj.print(reference to the output stream)
    return os;
}

virtual void I_Printable::print(std::ostream &os) const
{
    std::cout << os << std::endl;
}

virtual I_Printable::~I_Printable()
{
    std::cout << "I_Printable destructor" <<std::endl;
}