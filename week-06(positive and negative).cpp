/*
Write a program that in which count the positive and negative number in array.
*/
#include<iostream>
using namespace std;
int main(){
	int a[9]={3,4,5,6,-3,-4,-5,-9,-2};
	int count_positive=0,count_negative=0;
	for(int i=0;i<9;i++){
		if(a[i]>0){
			count_positive++;
		}
		else if(a[i]<0){
			count_negative++;
		}
		
	}
	cout<<"The positive number  are :"<<count_positive<<endl;
	cout<<" The negative number are :"<<count_negative;
	return 0;
}
