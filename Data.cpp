
#include "Data.h"
#include "Stack.h"
#include "ostream"
#include "iostream"
#include "sstream"
#include "fstream"

// FINISH ME

Data::Data(int r, string b, string v, string sty, string c, double str) {
    rNum = r;
    brand = b;
    variety = v;
    style = sty;
    country = c;
    stars = str;
}

bool Data::operator<(Data &rhs) const {
    if (rNum < rhs.rNum) {
        return true;
    } else {
        return false;
    }
}

bool Data::operator>(Data &rhs) const {
    if (rNum > rhs.rNum) {
        return true;
    } else {
        return false;
    }
}

bool Data::operator==(Data &rhs) const {
    if (rNum == rhs.rNum) {
        return true;
    } else {
        return false;
    }
}

ostream& operator<<(ostream &os, const Data &rhs) {
    os << rhs.rNum <<", " << rhs.brand <<", " << rhs.variety <<", " << rhs.style <<", " << rhs.country <<", " << rhs.stars << endl;
    return os;
}
