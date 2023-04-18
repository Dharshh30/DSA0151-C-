#include<iostream>
using namespace std;
int main(){
	string str1,str2;
	cout<<"enter a username:"<<endl;
	cin>>str1;
	cout<<"renter the username:"<<endl;
	cin>>str2;
	if(str1==str2){
		cout<<"username is valid:"<<endl;
	}
	else{
		cout<<"username is not valid:"<<endl;
	}
	}