#include<bits/stdc++.h>
using namespace std;
//using int = long long int;
int countDuplicates(int list[],int x){
	int dup = 0;
	set<int>co;
	for(int i = 0;i<x;i++){
		if(co.count(list[i])){dup++;continue;}
		co.insert(list[i]);
	}
	return dup;
}
int main(){
	int n;
	cin>>n;
	int list[n];
	for( int &i:list) cin>>i;
	cout<<countDuplicates(list,n)<<'\n';
	return 0;
}
