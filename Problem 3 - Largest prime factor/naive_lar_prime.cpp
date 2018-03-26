#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(uint64_t num) {
	if (num <= 1) return false;
	if (num == 2) return true;
	if (!(num%2)) return false;

	bool prime = true;
	for(int i=3; i <= floor(sqrt(num)); i+=2)
		if(!(num%i)) {
			prime = false;
			break;
		}
	return prime;
}

int main() {
	uint64_t num;
	cin >> num;

	uint64_t larPrim;

	if(isPrime(num))
		larPrim = num;
	else
		for(uint64_t i=num/2; i>1; --i) {
			if(!(num%i)) {
				if(isPrime(i)) {
					larPrim = i;
					break;
				}
			}
		}

	cout << larPrim << endl;
}
