//hashing;
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	//creation;
	unordered_map<string, int> m;
	
	//insertion;
	pair<string,int> p=make_pair("babbar",1);
	m.insert(p);
	
	
	//2;
	pair<string,int> pair2("love",2);
	m.insert(pair2);
	
	//3;
	m["mera"] =1;
	m["mera"]=2;
	
	//searching;
	cout<<m["mera"]<<endl;
	cout<<m.at("babbar")<<endl;
	cout<<m.at("love")<<endl;
	
	cout<<m.count("babbar")<<endl;
	
	


}
