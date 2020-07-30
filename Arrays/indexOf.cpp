#include<bits/stdc++.h>
using namespace std;
//using int = long long int;
int indexOf(int list[],int x,int pi){
	for(int i = 0;i<x;i++){
		if(list[i]==pi) return i;
	}
	return -1;
}
int main(){
	int n,p;
	cin>>n>>p;
	int list[n];
	for( int &i:list) cin>>i;
	cout<< indexOf(list,n,p)<<'\n';
	return 0;
}

