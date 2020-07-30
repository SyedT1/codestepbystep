#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll evenDigits(ll x){
	if(x==0) return 0;
	if(x&1){
		return 0+evenDigits(x/10);
	}
    return evenDigits(x/10)*10+(x%10);
}
int main(){
	ll n;
	cin>>n;
	cout<<(evenDigits(n))<<'\n';
	return 0;
}
