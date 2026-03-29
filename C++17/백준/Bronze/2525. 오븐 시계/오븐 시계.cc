#include<iostream>

int main(void){
    int a,b,c;
    std::cin >> a >> b;
    std::cin >> c;
    
    int sumM = a*60 + b + c;
    
    int endH = (sumM/60)%24;
    int endM = sumM % 60;
   
    std::cout << endH << " " << endM << std::endl;
    
    return 0;
}