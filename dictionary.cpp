#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	map<int , string> m;
	int phone;
	for(int i = 0 ; i < 5 ; i++){
		string name;
		cout<<"Enter phone number and name"<<endl;
		cin>>phone>>name;
		m[phone] = name;
	}
	cout<<"Enter the phone number"<<endl;
	cin>>phone;
	cout<<m[phone]<<endl;
	return 0;
}