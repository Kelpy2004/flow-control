#include <iostream>

int main(){

    int a;
    std::cout <<"Enter the value:"<< std::endl;
    std::cin >> a;
    if (a>0){
        std::cout<<"Value is integer:" <<a<< std::endl;
    }
        else{
            std::cout<<"You entered a negative value:" <<a;
        }
    
    
    return 0;
    
}