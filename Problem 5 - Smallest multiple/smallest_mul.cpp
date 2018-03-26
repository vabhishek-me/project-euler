#include <iostream>

using namespace std;

uint64_t eGCD(uint64_t n1, uint64_t n2) {
	if(n2 == 0)
		return n1;
	else
		return eGCD(n2, n1%n2);
}

uint64_t lcm(uint64_t n1, uint64_t n2) {
	if(n1==0 || n2==0)
		return 0;
	return (n1*n2)/eGCD(n1, n2);
}

int main() {
	uint64_t upto;
	cin >> upto;

	uint64_t a = 1;
	uint64_t b = 2;
	for(uint64_t i=2; i<=upto; i++) {
		b = lcm(a,b);
		a = i+1;
	}
	cout << b << endl;
}
