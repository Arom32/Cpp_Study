#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void){
    short t;
    int a,b;
    
    cin >> t;
    
    for(int i = 0; i < t ; i++){
        cin >> a >> b;
        cout << a+b << endl;       
    } 
    
    return 0;
}