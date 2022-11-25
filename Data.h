//
// Created by Samuel Cho on 11/11/19.
//

#ifndef DATA_H
#define DATA_H

#include "string"
#include "vector"

using namespace std;
class Data {
private:
    int rNum;
    string brand;
    string variety;
    string style;
    string country;
    double stars;
public:
    Data(int r=0, string b="", string v="", string sty="", string c="", double str=0);
    bool operator<(Data &rhs) const;
    bool operator>(Data &rhs) const;
    bool operator==(Data &rhs) const;
    friend ostream& operator<<(ostream& os, const Data &rhs);

};


#endif //DATA_H
