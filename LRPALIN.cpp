#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream docFile;
	ofstream ghiFile;

	string s;
	docFile.open("LRPALIN.INP");
	ghiFile.open("LRPALIN.OUT");
	getline(docFile, s);
	
	int n;
	docFile >> n;
	int l, r;
	bool check;
	for (int i = 0; i < n; i++) {
		docFile >> l >> r;
		l--;
		r--;
		check = true;
		while (l <= r) {
			if (s[l] != s[r]) {
				i != n - 1 ? ghiFile << 0 << endl : ghiFile << 0;
				check = false;
				break;
			}
			l++;
			r--;
		}
		if (check) i != n - 1 ? ghiFile << 1 << endl : ghiFile << 1;
	}

	docFile.close();
	ghiFile.close();
	return 0;
}