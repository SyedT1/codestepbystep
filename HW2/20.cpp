bool V(char c){
    if(c >= 'A' && c<='Z'){
       if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
           return true;
       }else{
           return false;
       }
    }
    else if(c>='a' && c<='z'){
       if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
           return true;
       }else{
           return false;
       }
    }
    return false;
}
void vowelStats(string x){
    ifstream file;
    file.open(x);
    string l;
    float average = 0.0;
    int lines = 0,max = 0;
    while(file.good()){
       lines++;
       int vow = 0;
       getline(file,l);
        if(file.eof()){
            lines--;
            break;
        }
       if(int(l.size())>max){
           max = int(l.size());
       }
       average += int(l.size());
        for(char c:l){
        	if(V(c)){
        		vow++;
        	}
        }
        cout<<"Line "<<lines<<" has "<<int(l.size())<<" chars and "<<vow<<" vowels\n";
   }
   cout<<lines<<" lines; longest = "<<max<<", average = "<<average/lines<<'\n';
}
    


