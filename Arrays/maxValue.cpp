#include<bits/stdc++.h>
using namespace std;
//using int = long long int;
int maxValue(int list[],int x){
	return *max_element(list,list+x);
}
int main(){
	int n;
	cin>>n;
	int list[n];
	for( int &i:list) cin>>i;
	cout<<maxValue(list,n)<<'\n';
	return 0;
}
