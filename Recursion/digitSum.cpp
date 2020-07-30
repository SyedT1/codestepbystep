#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll digitSum(ll x){
	if(x==0){
		return 0;
	}else{
		return (x%10)+digitSum(x/10);
	}
}
int main(){
	ll p;
	cin>>p;
	cout<<(p<0?(-1)*digitSum(p):digitSum(p))<<'\n';
	return 0;
}
