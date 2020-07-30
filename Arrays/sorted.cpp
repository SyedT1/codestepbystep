#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
bool tf[2]={"false","true"};
bool sorted(double list[],ll x){
	for(ll i = 1;i<x;i++) if(!( list[i]> list[i-1])) return false;
	return true;
}
int main(){
	ll n;
	cin>>n;
	double list[n];
	for(double &i:list) cin>>i;
	cout<<tf[sorted(list,n)]<<'\n';
	return 0;
}
