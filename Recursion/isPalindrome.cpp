#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string tr[2]={"false","true"};
bool reco(string x){
	if(x.size()==1){
	  return 1;
	}
	if(tolower(x[0])==tolower(x[ll(x.size()-1)])){
	    if(x.size()==2)return true;
	    else{
	      x.erase(x.begin());
	      return reco(x.substr(0,x.size()-1));
	    }
	}else return false;
}
 
int main(){
	string m;
	cin>>m;
	cout<<tr[reco(m)]<<'\n';
	return 0;
}
