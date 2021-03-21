string recurs(string x)
{
    if (x.length() == 1)
    {
        return x;
    }
    // aaaaaajjam
    // m 
    char l = x[0];
    string ans = recurs(&x[1]);
    if(ans[0]!=l){
        return l+ans;
    }else{
        return ans;
    }
}
