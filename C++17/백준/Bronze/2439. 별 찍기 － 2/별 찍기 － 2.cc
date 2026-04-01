#include <iostream>

int main(void){    
    int t;    
    std::cin >> t;
    
    for(int i = 1; i <= t; i++ ){
        std::cout << std::string(t-i, ' '); 
        std::cout << std::string(i, '*') << "\n";
    }
    
    return 0;
}