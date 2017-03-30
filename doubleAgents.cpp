#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main(){
	int n;
	cin>>n;
	int total(0);
	unordered_set<string> s;
	while(n--){
		int m;
		cin>>m;
		total += m;
		while(m--){
			string temp;
			cin>>temp;
			s.insert(temp);
		}
	}
	int distinct = s.size();
	cout<<distinct<<endl;
	cout<<total-distinct<<endl;
	return 0;
}