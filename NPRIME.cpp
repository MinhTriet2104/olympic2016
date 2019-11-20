#include <fstream>
using namespace std;

bool isPrime(int toCheck) {
	if (toCheck == 2) return true;
	if (toCheck < 2) return false;

	if (toCheck % 2) {
		for (int i = 3; i <= toCheck / i; i += 2) {
			if (toCheck % i == 0) return false;
		}
		return true;
	} else return false;
}

int main() {
	ifstream docFile;
	ofstream ghiFile;
	int n;

	docFile.open("NPRIME.INP");
	ghiFile.open("NPRIME.OUT");
	docFile >> n;

	int p, pMinus, pPlus;
	for (int i = 0; i < n; i++) {
		docFile >> p;
		pMinus = p - 1;
		pPlus = p + 1;
		if (isPrime(p) || isPrime(pMinus) || isPrime(pPlus)) {
			i != n - 1 ? ghiFile << 1 << endl : ghiFile << 1;
		} else {
			i != n - 1 ? ghiFile << 0 << endl : ghiFile << 0;
		}
	}
	
	return 0;
}