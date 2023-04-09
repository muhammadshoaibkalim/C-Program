
/*
Write a program that show max number in an array.
*/
#include<iostream>
using namespace std ;
int main(){
	int a[5]={2,4,6,7,8},max=a[0];
	// here let it consider becasue the first number it is.so initially it is our max number.
	
	for(int i=0;i<5;i++)
{
	if(a[i]>max){
		max=a[i];
		
	}

}
cout<<"The maximum number is :"<<max;
 return 0;
 
}

