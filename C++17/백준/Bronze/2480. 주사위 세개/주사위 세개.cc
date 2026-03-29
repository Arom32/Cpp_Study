#include<iostream>
#include <algorithm>

int main(void){
    short d1, d2, d3;
    int prize;
    std::cin >> d1 >>d2 >>d3 ;
    
    if(d1==d2&&d2==d3){
       prize = 10000 + (d1*1000);
    }  
    else if(d1==d2||d1==d3){
        prize = 1000 + (d1*100);
    }
    else if(d2==d3){
        prize = 1000 + (d2*100);
    }
    else{
        prize = std::max({d1,d2,d3})* 100;
    }
   
    std::cout << prize;

    return 0;
}