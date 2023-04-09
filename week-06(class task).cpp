/*
Write a programe in which take numbers from user and then reverse of the given number.
*/
#include<iostream>
using namespace std;
int main(){
	int a[5];
    for(int i=1;i<5;i++){
    	cout<<"Enter the Number :"<<i+0<<" : ";
    	cin>>a[i];
	}
	cout<<"Reverse order : \n ";
	for(int i=4;i>=0;i--){
		cout<<a[i];
	}
}
