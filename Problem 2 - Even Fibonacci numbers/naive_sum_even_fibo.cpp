#include <iostream>

using namespace std;

uint64_t fibonacci(uint64_t n) {
	uint64_t a=0,
		 b=1,
		 c=0;
	for(uint64_t i=1; i<n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main() {
	uint64_t upto;
	cin >> upto;
	uint64_t sum = 0;
	uint64_t i=1;

	while(true) {
		uint64_t temp = fibonacci(i);
		if(temp >= upto)
			break;

		if(!(temp % 2))
			sum += temp;

		i++;
	}

	cout << sum << endl;
}
