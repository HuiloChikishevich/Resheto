#include <iostream>

using namespace std;

int pow(int a,int k)
 {
    if (k==0)
        return 1;
    else if (k==1)
        return a;
    else if (k % 2 == 0 )
        return pow( a * a, k/2);
    else
        return pow( a * a, k /2)*a;
 }

int main() {
	int a, n = 0;
	cin >> a;
	cin >> n;
	pow (a, n);

	cout << pow(a,k);
}

