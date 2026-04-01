#include<iostream>

int main(void){
    unsigned int x,a,n,b;
    unsigned int sum = 0;

    std::cin >> x >> n;
      
    for(int i=0; i<n; i++){
        std::cin >> a >> b;
        sum += a*b;
    }
    
    if(sum==x){
        std::cout << "Yes";
    }
    else {
        std::cout << "No";
    }
    return 0;
}