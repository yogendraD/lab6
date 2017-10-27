#include<iostream>
using namespace std;

int main()
{
    int i;
    double d;
    float f;
    char c;

    cout << "Enter an integer value : ";
    cin >> i;
    int *ip;
    ip = &i;

    cout << "Enter a double value : ";
    cin >> d;
    double *dp;
    dp = &d;

    cout << "Enter a float value : ";
    cin >> f;
    float *fp;
    fp = &f;

    cout << "Enter a character : ";
    cin >> c;
    char *cp;
    cp = &c;

    cout << "Size of integer variable = " << sizeof(i) << "  Size of integer pointer variable = " << sizeof(ip);
    cout << "\nSize of double variable = " << sizeof(d) << "  Size of double pointer variable = " << sizeof(dp);
    cout << "\nSize of float variable = " << sizeof(f) << "  Size of float pointer variable = " << sizeof(fp);
    cout << "\nSize of character variable = " << sizeof(c) << "  Size of character pointer variable = " << sizeof(cp);
}
