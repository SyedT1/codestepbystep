function f(x=2345){
   if(n==0){
    return 0;
   }else{
       return (n%10)+f((n%10)?n-(n%10):n/10);
   }
}
