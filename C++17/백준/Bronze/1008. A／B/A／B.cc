#include <iostream>

int main(void) {
    double a, b;
    std::cin >> a >> b;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(10); 
    std::cout << a / b;
    
    return 0;
}