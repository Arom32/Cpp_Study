#include<iostream>

int main(void){
    short n;
    std::cin >> n ;
    
    for(int i=0; i < n/4 ; i++ ){
        std::cout<<"long ";
    }
    std::cout<<"int";
    
    return 0;
}