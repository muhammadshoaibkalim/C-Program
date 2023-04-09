
/*
Write a program that show minimum number in an array.
*/
#include<iostream>
using namespace std ;
int main(){
	int a[5]={2,4,6,7,8},min=a[8];
	// here let it consider becasue the first number it is.so initially it is our max number.
	
	for(int i=0;i<5;i++)
{
	if(a[i]<min){
		min=a[i];
		
	}

}
cout<<"The minimum number is :"<<min;
 return 0;
 
}

