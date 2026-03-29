#include<iostream>

int main(void){
    short h, m;
    
    std::cin >> h >> m ;
    
    if( m < 45 ){
        h-- ;
        m = m+60-45;
        if (h < 0) {  
            h = 23;
        }
    }
    else{
        m = m-45;
    }
    
    std :: cout << h << " " << m;
    
    return 0;
}