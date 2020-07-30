#include<bits/stdc++.h>
using namespace std;
//using int = long long int;
int gcd(int x,int y){
	if(x<y) swap(x,y);
	if(y<=0) throw y;
	return x%y==0?y:gcd(y,x%y);
}
int main(){
	int a,b;
	try{
	 cin>>a>>b;
	 cout<<gcd(a,b)<<'\n';
	}
	catch(int x){
		cerr<<"int exception\n";
	}
	return 0;
}
