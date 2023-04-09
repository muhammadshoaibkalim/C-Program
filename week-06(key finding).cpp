/*
Write a program that in which find key in the given element in array.
*/
#include<iostream>
using namespace std;
int main(){
	int a[10]={2,3,41,12,15,16,13,19,18,4};
	int key;
	cout<<"Enter the key :";
	cin>>key;
	for(int i=0; i<10;i++){
		if(key==a[i]){
			cout<<"Element is found at :"<<i<<endl;
			
		}
		else{
			cout<<"Key is not found.";
			
		}
	}
}
