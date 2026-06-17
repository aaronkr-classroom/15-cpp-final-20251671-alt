#include <algorithm>
#include <vector>

#include "Grad.h"

istream& read_hw(istream& in, vector<double>& hw);

istream& Grad::read(istream& in) {
    Core::read_common(in);
    in >> toeic;       // 토익 점수 입력
    read_hw(in, homework);
    return in;
}

double Grad::grade() const {
    return min(Core::grade(), toeic);
}