#include<bits/stdc++.h>
using namespace std;
//using int = long long int;
void print(int list[],int x){
	for(int i = 0;i<x;i++){
		cout<<"element ["<<i<<"] is "<<list[i]<<'\n';
	}
}
int main(){
	int n;
	cin>>n;
	int list[n];
	for( int &i:list) cin>>i;
	print(list,n);
	return 0;
}
