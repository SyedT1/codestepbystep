#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string tr[2]={"false","true"};
bool reco(string x){
	if(x.length()==1){
	  return true;
	}
	if(tolower(x[0])==tolower(x[x.length()-1])){
	    return x.length()==2?true:reco(x.substr(1,x.length()-2));
	}else{
	   return false;
	}
}
 
int main(){
	string m;cin>>m;
	cout<<tr[reco(m)]<<'\n';
	return 0;
}
