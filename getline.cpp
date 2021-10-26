#include<iostream>

using namespace std;

int main(){
	cout<<"Capturing string datatype \n";
	string myName;
	
	cout<<"Input your full names \n";
	//cin >>myName;
	cout<<endl;
	getline(cin,  myName);
	cout<<" Hey Your name using cin>> is: "<<myName<<endl;
	cout<<" Hey Your name using getline function()is: "<<myName<<endl;
	
	return 0;
}
