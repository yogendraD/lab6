#include<iostream>
using namespace std;

int main()
{
    int a=2,b=3;
    int *p;
    p = &a;
    b = a;
    cout << "a = " << a << "\nb = " << b << "\n*p = " << *p;
}
