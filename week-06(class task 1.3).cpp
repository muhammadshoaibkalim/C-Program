/*
Write a C++ program that sets array ith location value to i+100.
Display the values assigned to odd index values of array.
*/
#include <iostream>
using namespace std;
int main(){ 
   int j;
   int a[100];
   cout<<" The odd number are :"<<endl;
   for(int i=0;i<100;i++)
  {
  j=i+100;
  if(j%2!= 0)
  cout<<" "<<j<<endl; 
  }
   return 0;
}
