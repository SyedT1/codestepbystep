#include<bits/stdc++.h>
using namespace std;
//using int = long long int;
int findRange(int list[],int x){
	return (*max_element(list,list+x) - *min_element(list,list+x))+1;
}
int main(){
	int n;
	cin>>n;
	int list[n];
	for( int &i:list) cin>>i;
	cout<<findRange(list,n)<<'\n';
	return 0;
}
