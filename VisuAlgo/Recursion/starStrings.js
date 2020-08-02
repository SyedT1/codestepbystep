function f(x = 4){
   if(x==0) return "*";
   else return f(x-1)+f(x-1);
}
