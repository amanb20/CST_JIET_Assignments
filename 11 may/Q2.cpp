#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(5);
	a.push_back(6);
	a.push_back(8);
	a.push_back(9);
int i,p,mi=INT_MAX, ma=INT_MIN;
sort(a.begin(),a.end());
for(i=1;i<a.size();++i){
p=a[i]^a[i-1];
if(mi>p){
mi=p;
}
if(ma<p){
ma=p;
}
}

cout<<"min xor:"<<mi<<endl;
cout<<"max xor:"<<ma<<endl;
}

