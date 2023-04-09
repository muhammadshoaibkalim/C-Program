/* This program inputs five floating point values in an array and 
displays the values in reverse order in which the user has entered.*/
#include <iostream>
using namespace std;
int main()
{
     float arr[5];
     cout << "Enter five floating-point values: ";
     
     for(int i=0; i<5; i++)
	 {
         cin >> arr[i];
	 }
    
     cout << "Values in reverse order:" <<endl;
     for(int i=4; i>=0; i--){
         cout<<arr[i]<< " ";
     }
     
     return 0;
}

