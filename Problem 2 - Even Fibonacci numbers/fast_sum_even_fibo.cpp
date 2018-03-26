#include <iostream>

using namespace std;

uint64_t sumEvenFibo(uint64_t maxFibo) {
	uint64_t a=1,
		 b=1,
		 c=2; // first even fibo

	uint64_t sum = 0;

	while(c < maxFibo) {
		sum += c;
		a = b + c;
		b = c + a;
		c = a + b;
	}

	return sum;
}

int main() {
	uint64_t upto;
	cin >> upto;
	cout << sumEvenFibo(upto) << endl;
}
