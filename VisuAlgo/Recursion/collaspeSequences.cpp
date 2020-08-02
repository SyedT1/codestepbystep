function f(x = "buruuuap", y = 'u'){
    if(x.length==1)return x.charAt(0);
    else{
      if(x.charAt(0)==x.charAt(1) && x.charAt(0)==y){
          return f(x.substr(1,x.length-1),y);
      }
      else return x.charAt(0)+f(x.substr(1,x.length-1),y);
    }
}
