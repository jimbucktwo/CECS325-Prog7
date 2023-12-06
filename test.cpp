#include <iostream>
#include <vector>
#include "bigint.h"
#include <string>
using namespace std;

int main()
{
    BigInt test(123);
    BigInt test2("456");
    cout << test << endl;
    cout << test2;
    cout << test[0];
}
