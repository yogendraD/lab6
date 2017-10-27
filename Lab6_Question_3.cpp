#include<iostream>
using namespace std;

int main()
{
   int arr[4];
   for(int i=0 ; i<4 ; i++)
   {
       cout << "Enter the element : ";
       cin >> arr[i];
   }

   cout << "Index Method\n";
   for(int j=0 ; j<4 ; j++)
       cout << arr[j] << "\n";

   cout << "Pointer Method\n";
   int *p;
   for(int k=0 ; k<4 ; k++)
   {
       p = &arr[k];
       cout << *p << "\n";
   }
}
