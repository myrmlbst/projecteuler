#include <iostream>
#include <numeric>

int main() {
	long long smallestMultiple(int n);
	std::cout << smallestMultiple(20) << "\n";
    return 0;
}

long long smallestMultiple(int n) {
    // least common multiple of all integers processed
	long long lm = 1;

	// each step updates the running LCM to include the next integer
	for (int i=2; i<=n; i++) {
        lm = std::lcm(lm, static_cast<long long>(i));
    }
	return lm;
}