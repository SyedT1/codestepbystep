#include<bits/stdc++.h>
using namespace std;
//using ll = long long int;
int sumOfSquares(int x){
	if(x<0) throw x;
	return x>0? (x*x)+sumOfSquares(x-1):0;
}
int main(){
	int n;
	try {
	  cin>>n;
      cout << sumOfSquares(n) << '\n';
    } catch (int x) {
     cerr << "int exception" << '\n';
   }
   return 0;
}
