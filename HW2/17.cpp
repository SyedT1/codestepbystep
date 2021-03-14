#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
void wordStatsPlus(string s) {
	ifstream file;
	file.open(s);
	if (!file.is_open()) {
		cout << "Error, bad input file.";
	} else {
		int lines = 0, words = 0, alp[220] = {}, word_len = 0;
		while (file.good()) {
			++lines;
			string ln, p;
			getline(file, ln);
			stringstream wrd(ln);
			while (wrd >> p) {
				if (int(p.size()) < 1) {
					continue;
				}
                words++;
				word_len += int(p.size());
				for (char c : p) {
					if (c >= 'A' && c <= 'Z') {
						c = char(c + 32);
					}
					if (c >= 'a' && c <= 'z')alp[int(c)]++;
				}
			}
		}
        lines--;
		int sm = 0;
		for (int i = 0; i < 220; i++) {
			if (alp[i] > 0)sm++;
		}
		cout << "Total lines = " << lines << '\n';
		cout << "Total words = " << words << '\n';
		cout << "Total unique letters = " << sm << " (" << int((sm / 26.0) * 100) << "% of alphabet)" << '\n';
		cout << "Average words/line = " << words / (lines * 1.0) << '\n';
		cout << "Average word length = " << word_len / (words * 1.0) << '\n';
	}
}








