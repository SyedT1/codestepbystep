#include<bits/stdc++.h>
using namespace std;
//using int = long long int;
string starString (int p){
	if(p<0) throw p;
    if(p==0) return "*";
    else return  starString (p-1) +  starString (p-1);
}
int main(){
	int n;
    try{
    	cin>>n;
    	cout<<starString(n)<<'\n';
    }catch(int x){
    	cerr<<"int exception\n";
    	return 1;
    }
    return 0;
}
