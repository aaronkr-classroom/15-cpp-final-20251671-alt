#include "Intl.h"
#include "read_hw.h"

#include <string>

using namespace std;

istream& Intl::read(istream& in) {
    Core::read_common(in);
    in >> midterm >> final;

    string dummy;
    getline(in, dummy);   // 🔥 개행 제거

    read_hw(in, homework);  // 🔥 일단 다 homework로 받기

    if (!homework.empty()) {
        toeic = homework.back();  // 마지막 값
        homework.pop_back();
    }
    else {
        toeic = 0;
    }

    return in;
}

double Intl::grade() const {
    return 0.8 * Core::grade() + 0.2 * toeic;
}