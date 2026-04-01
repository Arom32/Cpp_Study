#include<iostream>

int main(void){
    int a,b;
    while(true){
        std::cin >> a >> b;
        if(a==0&&b==0){return 0;}
        
        std::cout << a+b << "\n";        
    }
    
    return 0;
}