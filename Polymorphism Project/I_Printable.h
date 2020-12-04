#ifndef I_PRINTABLE_H_
#define I_PRINTABLE_H_
#include <iostream>

class I_Printable
{
friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:
    I_Printable() {  };
    virtual void print(std::ostream &os) const = 0; // all classes will override this VF
    virtual ~I_Printable() = default;
};

#endif // I_PRINTABLE_H_