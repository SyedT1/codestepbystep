#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
using namespace std;
void hoursWorked(string x){
	ifstream file;
	file.open(x);
    int mxm = 0,mxe = 0;
    while(file.good()){
        int n = 0;
        string l,ln;
        getline(file,l);
        stringstream str(l);
        while(str >> ln){
            ++n;
            if(n==1){
                if(mxe < int(ln.size())){
                   mxe = int(ln.size());    
                }
            }
            if(n==2){
                if(mxm < int(ln.size())){
                    mxm = int(ln.size());
                }
            }
        }
    }
    file.close();
    file.open(x);
	while(file.good()){
		string l,ln;
		getline(file,l);
        if(int(l.size())<1){
            continue;
        }
		stringstream str(l);
		int n = 0,up = 0;
		float avg = 0.0;
		string ID,name;
		while(str >> ln){
             ++n;
             if(n==1){
                ID = ln;
             }else if(n==2){
             	name = ln;
             }else{
             	avg += stof(ln);
             	up++;
             }
		}
		cout<<name<<string(mxm-int(name.size())+2,' ')<<"(ID# "<<string(mxe-int(ID.size()),' ')<<ID<<") worked "<<fixed<<setprecision(1)<<avg<<" hours ("<<fixed<<setprecision(2)<<avg/up<<"/day)\n";
	}
    file.close();
}






