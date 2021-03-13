int printMostCommonName(string x){
    ifstream file;
    file.open(x);
    if(file.is_open()){
        
        int m = 0;
        while(file.good()){
            string s,l;
            getline(file,s);
            stringstream str(s);
            while(str >> l){
               if(l[0]>='A' && l[0]<='Z'){
                   m++;
               }
            }
        }
        //file.close();
        int a = 0;
        string los[m];
        ifstream filo;
        filo.open(x);
        while(filo.good()){
            string s,l;
            getline(filo,s);
            stringstream str(s);
            while(str >> l){
                if(l[0]>='A' && l[0]<='Z'){
                    los[a++] = l;
                }
            }
        }
         string frequent = los[0];
        for(int i = 0;i<m-1;i++){
            for(int j = i+1;j<m;j++){
                if(los[j] < los[i]){
                    string milo = los[j];
                    los[j] = los[i];
                    los[i] = milo;
                }
            }
        }
        int dis = 0,max = 1;

        for(int i = 0;i<m;i++){
           int rep = 0;
           string lob = "";
           while(i<m-1 && los[i]==los[i+1]){
               rep++;
               lob=los[i];
               i++;
           }
           if(max < rep){
               frequent = lob;
               max = rep+1;
           }
           dis++;
        }
        cout<<"Most common name: "<<frequent<<", "<<max<<'\n';
        return dis;
    }
    file.close();
    return 0;
   // cout<<"Most common name: "<<los[0]<<'\n';
   
}

