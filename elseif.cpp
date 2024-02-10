#include <iostream>

int main(){
    int num;
    std::cout<<"enter the number:";
    std::cin>>num;
    
    if(num>0){
        std::cout<<"You entered the positive value:"<< num << std::endl;
    }
    else if(num<0){
        std::cout<<"You entered the negative value:"<< num <<std::endl;
    }
    else{
    std::cout <<"You entered 0"<< std::endl;
    }
    
    return 0;
    
}