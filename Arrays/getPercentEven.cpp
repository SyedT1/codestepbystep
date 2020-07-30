#include<bits/stdc++.h>
using namespace std;
//using int = long long int;
double getPercentEven(int list[],int x){
	if(x==0) return 0.0;
	int evo = 0;
	for(int i = 0;i<x;i++)  if(!(list[i]&1)) evo++;
	return (evo/double(x))*100;
}
int main(){
	int n;
	cin>>n;
	int list[n];
	for( int &i:list) cin>>i;
	cout<<getPercentEven(list,n)<<'\n';
	return 0;
}
