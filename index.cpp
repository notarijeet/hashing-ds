//Maps(maps,unordered_maps,multi-maps);   
/*
Given N strings, Print unique strings
in lexiogrphaical order with their
frequency
N<=10^5;
|S|<=100
*/
#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> m){
    cout<<m.size()<<endl;
    for(auto &p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
int main() {
    //1. inbuild implementation
    //2. time complexity
    //3. valid key dataypes;
    unordered_maps<int,string> m;
    m[1]="abc";//o(1);
    m[5]="cdc";
    m[3]="acd";
    m[6]="a";
    m[5]="cde";
    unordered_maps<string,int> mc;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mc[s]++;
    }
    for(auto &pe:mc){
        cout<<pe.first<<" "<<pe.second<<endl;
        
    }
    //maps;
    map<string,int> ma;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        ma[s]++;
    }
    for(auto &p:ma){
        cout<<p.first<<" "<<p.second<<endl;
    }
	map<int,string> m;
	m[1]="abc";//o(log(n));
	m[5]="cdc";
	m[3]="acd";
	m.insert({4,"afg"});
	print(m);
	auto it= m.find(3);//o(log(n));
	if(it==m.end()){
	    cout<<"NO value";
	}
	else{
	    cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	return 0;
	map<int,int> mp;
	mp.insert({2,3});
	mp.insert({3,4});
	mp.insert({4,5});
	map<int,int> ::iterator it;
	for(it = mp.begin();it!=mp.end();it++){
	    cout<<(*it).first<<" "<<(*it).second<<endl;
	    
	}
	map<int,string>::iterator it;
	for(it=m.begin();it!=m.end();++it){
	    cout<<(*it).first<<" "<<(*it).second<<endl;
	}


}
