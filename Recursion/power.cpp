#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll power(ll b,ll p){
	return p==0?1:(p%2?b:1)*power(b*b,p/2);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b)<<'\n';
        return 0;
}
