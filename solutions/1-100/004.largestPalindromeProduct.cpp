#include <iostream>
#include <string>

bool isPalindrome(int prod) {
    std::string str = std::to_string(prod);
    std::reverse(str.begin(),str.end());
    
    if (str == std::to_string(prod)) return true;
    
    return false;
}

int main() {
    int res = -1;
    
    for (int i=990; i>99; i-=11) {
        for (int j=999; j>99; j--) {
            int prod = i * j;
          
            if (prod>res && isPalindrome(prod)) {
                res = prod;
                break;
            }
            if (prod<res) break;
        }
    }
    
    std::cout << res;
    return 0;
}