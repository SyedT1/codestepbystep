void flipLines(string x){
    
  int n = 0;
	ifstream file;
	file.open(x);
    if(file.is_open()){
        string line;
        while (file.good()) {
            n++;
            string s = "", t = "";
            getline(file, s);
            getline(file, t);
            if (file.eof()) {
                for (char &c : s) {
                    if (c >= 'a' && c <= 'z') {
                        c = char(c & 223);
                    }
                }
                cout << s << '\n';
                break;
            }
            for (char &c : t) {
                if (c >= 'a' && c <= 'z') {
                    c = char(c & 223);
                }
            }
            cout << t << '\n';
            if (s.length() > 0) {
                for (char &c : s) {
                    if (c >= 'A' && c <= 'Z') {
                        c = char(c | 32);
                    }
                }
            }
            cout << s << '\n';
            //}

        }
    }else{
        cout<<"Unable to open input file \""<<x<<"\"!";
    }
}





