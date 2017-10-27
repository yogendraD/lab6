#include<iostream>
using namespace std;

int main()
{
   int s;
   cout << "Enter size of string : ";
   cin >> s;
   s++;
   char name[s];
   cout << "Enter name : ";
   cin >> name;

   cout << "Index Method\n";
   for(int i=0 ; i<s ; i++)
       cout << name[i] << "\n";

   cout << "Pointer Method\n";
   char *p;
   for(int j=0 ; j<s ; j++)
   {
       p = &name[j];
       cout << *p << "\n";
   }
}
