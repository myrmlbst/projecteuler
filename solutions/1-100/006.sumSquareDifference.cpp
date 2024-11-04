#include <iostream>
#include <cmath>

/*
To find the difference between the sum of squares and square of sums, 
we first need to find what these two numbers are. each operation was 
implemented in its own function, and the difference is found in the
main function.

in sumOfSquares, we iterate through each number and add

in squareOfSums, we iterate through each number (0-100) and add each 
number with the one before it.
*/

int sumOfSquares(int num) {
    int sum = 0;
    for (int i=1; i<=num; i++) {
        sum += (i*i);
    }
    return sum;
}

int squareOfSums(int num) {
    int sum = 0;
    for (int i=1; i<=num; i++) {
        sum += i;
    }
    return sum*sum;
}

int main() {
    int det = 100; // determinant integer (the limit)
    std::cout << "The sum of the squares of " << det << 
                " is: " << sumOfSquares(det) << std::endl <<
                "The square of the sum of " << det <<
                " is: " << squareOfSums(det) << std::endl;
  
    int difference = abs(sumOfSquares(det) - squareOfSums(det));            
    std::cout << "\nThe difference is: \n" << squareOfSums(det) << " - " << sumOfSquares(det) << " = " << difference; 
    
    return 0;
}
