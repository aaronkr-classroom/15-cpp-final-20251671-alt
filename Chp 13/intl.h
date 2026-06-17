#ifndef GUARD_Intl_h
#define GUARD_Intl_h

#include "Core.h"

class Intl : public Core {
public:
    Intl() : toeic(0) { }
    Intl(std::istream& is) { read(is); }

    double grade() const;
    std::istream& read(std::istream&);

private:
    double toeic;
    Intl* clone() const { return new Intl(*this); }
};

#endif