function f(i="racecar"){
  if(i.length==1) return true;
  else if(i.charAt(0)==i.charAt(i.length-1)){
  if(i.length==2) return true;
  else{
    var n = i.length-1;
    return f(i.substr(1,n-1));
  }
 }
 else return false;
}
