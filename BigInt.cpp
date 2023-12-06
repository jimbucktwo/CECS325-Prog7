// Jimmy Tran 028343131
// Class (CECS 325-02)
// Prog 7 BigInt
// 12/5/23
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.
#include "bigint.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//constructor

BigInt::BigInt() {
    digits.push_back(0);
}

BigInt::BigInt(int n) {
    char digit;
    while (n>9)
    {
        digit = n%10;
        n /= 10;
        digits.push_back(digit);
    }
    digit = n;
    digits.push_back(digit);
}

BigInt::BigInt(string s) {
    for (int i = s.length() - 1; i >= 0; i--) {
        digits.push_back(s[i] - 48);
    }
}

int BigInt::operator[](int n){
    try {
        if (n >= 0 || n < digits.size()) {
            return digits[n];
        } else {
            throw n;
        }
    }
    catch (int num) {
        cout << "index out of range";
    }
}

BigInt BigInt::operator+(BigInt n) {
    int digit = 0;
    int carry = 0;
    while (digit <= digits.size() - 1 && digit <= n.size() - 1){

    }
}

BigInt BigInt::operator++() {

}

BigInt BigInt::operator++(int n) {

}

BigInt BigInt::operator*(BigInt n) {

}

BigInt BigInt::half() {

}

bool BigInt::isOdd() {

}

bool BigInt::isEven() {

}

bool BigInt::operator==(BigInt) {

}

bool BigInt::operator<(BigInt) {

}

ostream & operator<<(ostream & out, const BigInt & b) {
    for (int i = b.digits.size() - 1; i >= 0; i--) {
        out << (int)b.digits[i];
    }
    return out;
}