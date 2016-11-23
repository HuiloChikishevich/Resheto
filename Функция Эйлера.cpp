#include <iostream>


using namespace std;

void Eulers_formula(int n) {
	int x[n];
	int y = n;
	for (int i = 0; i < n; i++) {
		x[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = n; j > 0; j--) {
			if (n%j == 0 & x[i]%j== 0)  {
				if (j != 1) {
					y--;
				}
				break;
			}
		}
	}
	cout << y;

}

int main() {
	int n;
	cin >> n;
	Eulers_formula(n);
	return 0;
}
