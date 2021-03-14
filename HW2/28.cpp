bool hasMirrorTwice(int _a[],int x,int _b[],int y){
	int _fnd = 0;
    for(int i = 0;i<=x-y;i++){
    	int l = i,_sm = 0;
        for(int j = y-1;j>=0;j--){
           if(_b[j]==_a[l]){
              l++;
              _sm++;
           }
        }
        if(_sm==y){
        	_fnd++;
        	if(_fnd==2){
        		return true;
        	}
        }
    }
    return false;
}
