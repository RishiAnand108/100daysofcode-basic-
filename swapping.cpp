#include<iostream>
using namespace std;

int main()
{
   int a,b,temp;
   cout << "Enter the Number";
   cin >> a;
   cout << "Enter the Number";
   cin >> b;
   temp=a;
   a=b;
   b=temp;
   cout << "after swapping a =" << a << ",b = "<< b ;
   return 0;
}