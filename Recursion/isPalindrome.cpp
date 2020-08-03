#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
bool isPalindrome(string x){
	if(x.length()==1){
	  return true;
	}
	if(tolower(x[0])==tolower(x[x.length()-1])){
	    return x.length()==2?true:isPalindrome(x.substr(1,x.length()-2));
	}else{
	   return false;
	}
}
 
int main(){
	string m;cin>>m;
	cout<<isPalindrome(m)<<'\n';
	return 0;
}
