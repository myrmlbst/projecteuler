#include <iostream>

int evenfibsum(int limit) {
    int prev = 1; 
    int curr = 2;
    int sum = 2;
    
    while (curr <= limit) {
        curr = prev + curr;
        prev = curr - prev;
        
        if (curr % 2 == 0) sum += curr;
    }
    return sum;
}

int main() {
    int limit = 4000000;
    std::cout << "Sum = " << evenfibsum(limit) << std::endl;
    return 0;
}