#include <iostream>

// First method: brute force
int multiple() {
    /* 
    we iterate through every element from 0 to 1000 to check
    whether or not they are divisible by 3 & 5. If they are, 
    we increment the counter by 1.
    */
    int count = 0;
    for (int i=0; i<1000; i++) {
        if (i%3==0 || i%5==0) {
            count += i;
        }
    }
    
    return count;
};

int main() {
    std::cout << multiple() << std::endl;
    return 0;
}


// Second method: seperate the %
// We only iterate through numbers that satisfy our requirements.
/*
int multiple() {
    int count = 0;

    for (int i=3; i<1000; i+=3) {
        if (i%3==0) {
            count += i;
        }
    }
    
    for (int i=5; i<1000; i+=5) {
        if (i%3==0) continue;
        else if (i%5==0) count += i;
    }
    
    return count;
};

int main() {
    std::cout<< multiple() << std::endl;
    return 0;
}
*/
