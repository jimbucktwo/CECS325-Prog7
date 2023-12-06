// Jimmy Tran 028343131
// Class (CECS 325-02)
// Prog 7 BigInt
// 12/5/23
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#ifndef bigint.h
#define bigint.h
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class BigInt {
    private:
        vector<char> digits;
    public:
        BigInt();
        BigInt(int);
        BigInt(string);
        int operator[] (int);

        int size();
        BigInt operator+(BigInt);
        BigInt operator++();
        BigInt operator++(int);
        BigInt operator*(BigInt);

        BigInt half();
        bool isOdd();
        bool isEven();
        bool operator==(BigInt);
        bool operator<(BigInt);

        friend ostream & operator<<(ostream &, const BigInt &);
};


#endif