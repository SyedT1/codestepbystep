function f(x=2345){
   if(x==0) return 0;
   if(x&1){
      return 0+f((x*205)>>11);
   }
   return f((x*205)>>11)*10+(x%10);
}
