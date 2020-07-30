#include<bits/stdc++.h>
using namespace std;
int numUnique(int list[],int x){
	int uniq = 0;
	for(int i = 0;i<x;i++){
		while(list[i]==list[i+1] && i<x-1) ++i;
		uniq++;
	}
	return uniq;
}
int main(){
	int n;
	cin>>n;
	int list[n];
	for( int &i:list) cin>>i;
	cout<<numUnique(list,n)<<'\n';
	return 0;
}
