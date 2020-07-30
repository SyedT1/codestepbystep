#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string  collapseSequences(string x,char c){
   if(x.size()==0) return "";
   else if(x.size()==1) return x;
   else{
   	  if(x[0]==x[1] && x[0]==c){
   	  	 x.erase(x.begin());
   	  	 return collapseSequences(x,c);
   	  }else{
   	  	 char ik = x[0];
   	  	 x.erase(x.begin());
   	  	 return ik+collapseSequences(x,c);
   	  }
   }
}
int main(){
	string x;
	char c;
	cin>>x>>c;
	cout<< collapseSequences(x,c)<<'\n';
  return 0;
}
