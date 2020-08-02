#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string  collapseSequences(string x,char c){
   if(x.length()==0) return "";
   else if(x.length()==1) return x;
   else{
   	  if(x[0]==x[1] && x[0]==c){
   	  	 return collapseSequences(x.substr(1,x.length()-1),c);
   	  }else{
   	  	 return x[0]+collapseSequences(x.substr(1,x.length()-1),c);
   	  }
   }
}
int main(){
	char c;
	string x;
	cin>>x>>c;
	cout<< collapseSequences(x,c)<<'\n';
        return 0;
}
