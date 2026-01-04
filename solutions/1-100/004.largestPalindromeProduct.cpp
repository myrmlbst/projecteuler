#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int prod) {
    string str = to_string(prod);
    reverse(str.begin(),str.end());
    
    if (to_string(prod) == str) {
        return true;
    }
    
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
    
    cout << res;
}