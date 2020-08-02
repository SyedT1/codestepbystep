f(b = 2, p = 4){
  if(p==0){
     return 1;
  }
  if(p%2==1){
     return b*f(b*b,p>>=1);
  }else{
     return f(b*b,p>>=1);
  }
}
