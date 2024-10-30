#include <iostream>

int largestPrimeFactor(long long num) {
    for (int i=2; i<(num/2); i++) {
        if(!(num%i) && num>0) {
        num = num/i;      
      }
    }
    return num;
}

int main() {
    int long long num;
    std::cout << "Input number: ";
    std::cin >> num;
    std::cout << "The largest prime factor of " << num << " is " << largestPrimeFactor(num);
    return 0;
}
