#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll power(ll b,ll p){
	if(p==0){
		return 1;
	}
	if(p%2==1){
		return b*power(b*b,p/2);
	}else{
		return power(b*b,p/2);
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b)<<'\n';
    return 0;
}
