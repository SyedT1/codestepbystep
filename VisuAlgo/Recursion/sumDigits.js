f(x=2345){
 if(x==0){
  return 0;
 }else{
 return (x%10)+f((x* 205) >> 11); // 205/2048 is nearly the same as /10
 }
}
