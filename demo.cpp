#include <cstdio>
#include <iostream>
#include "BigNumber.h"
using namespace std;
typedef class BigNumber B_int;

int main()
{
    char in_1[10000], in_2[10000];
    cout << "a = ";
    while (scanf("%s", in_1) != EOF)
    {
        cout << "b = ";
        scanf("%s", in_2);
        B_int a = in_1;
        B_int b = in_2;
        B_int out;
        cout << "a + b = ";
        out = a + b;
        out.print();
        cout << "a - b = ";
        out = a - b;
        out.print();
        cout << "a * b = ";
        out = a * b;
        out.print();
        cout << "a / b = ";
        out = a / b;
        out.print();
        cout << "a % b = ";
        out = a % b;
        out.print();
        cout << "a = ";
    }
    return 0;
}