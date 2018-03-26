// Sum of all the multiples of 3 or 5

#include <iostream>

using namespace std;

uint64_t sumN(uint64_t n) {
	return (n * (n+1))/2;
}

uint64_t sumDivisibleBy(uint64_t num, uint64_t upto) {
	uint64_t linearUpto = (upto-1)/num;
	return (num * sumN(linearUpto));
}

int main() {
	uint64_t inp;
	cin >> inp;
	uint64_t sum = (sumDivisibleBy(3, inp) + sumDivisibleBy(5, inp)) - sumDivisibleBy(15, inp); 
	cout << sum << endl;
}
