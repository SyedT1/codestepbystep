#include<bits/stdc++.h>
using namespace std;
//using int = long long int;
int  countUnique(int list[],int x){
	int rep[1000]={},uniq = 0;
	for(int i = 0;i<x;i++){
		if(rep[list[i]]) continue;
		uniq++;
		rep[list[i]]++;
	}
	return uniq;
}
int main(){
	int n;
	cin>>n;
	int list[n];
	for( int &i:list) cin>>i;
	cout<< countUnique(list,n)<<'\n';
	return 0;
}
