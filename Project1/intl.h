#ifndef GUARD_Grad_h
#define GUARD_Grad_h

#include <iostream>
#include "Core.h"

using namespace std;

class Grad : public Core {
public:
    Grad() : toeic(0) { }
    Grad(istream& is) { read(is); }

    double grade() const;
    istream& read(istream&);

private:
    double toeic;      // 토익 점수
    Grad* clone() const { return new Grad(*this); }
};

#endif