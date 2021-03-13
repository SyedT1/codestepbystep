float averageValueInFile(string s){
   int n = 0;
   float sm = 0.0;
   string l;
   ifstream file;
   file.open(s);
   if(!file.is_open()){
     return sm;
   }else{
   	  while(file.good()){
   	  	getline(file,l);
   	  	//cout<<l<<' ';
   	  	string sparse;
   	 	stringstream no(l);
   	  	while(no >> sparse){
   	  		float loa;
   	  		stringstream la;
   	  		la << sparse;
   	  		la >> loa;
   	  		if(la.eof()){
                n++;
   	  			sm+=loa;
   	  		}
   	  	}
   	  }
   }
   file.close();
   return int(sm)==0?0.0:sm/n;
}
