function f(x = 2, y = 3){
    if(x==0||y==0) return 0;
    if(x<y){
      var temp = x;
      x  = y;
      y = temp;
    }
    return x%y==0?y:f(y,x%y);
}
