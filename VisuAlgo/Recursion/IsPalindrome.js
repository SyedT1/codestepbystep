function f(i="racecar"){
  if(i.length==1) return true;
  else if(i.charAt(0)==i.charAt(i.length-1)){
  if(i.length==2) return true;
  else{
    return f(i.substr(1,i.length-2));
  }
 }
 else return false;
}
