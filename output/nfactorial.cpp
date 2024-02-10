#include <iostream>

int main(){
    long mul, num;
     mul =1;

    std::cout<<"Enter the value:";
    std::cin>>num;

    if(num<0)
        std::cout<<"Number entered is negative and negative factorials does'nt exits.";
    
    else {
    for(int i=1; i<=num; ++i){
        mul *= i;
    } std::cout<<num<<"! = "<<mul; }
    return 0;
}