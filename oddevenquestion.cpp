#include <iostream>
int main (){
    int num;

std::cout<<"Enter the value:";
std::cin>>num;

if(num%2==0){
    std::cout<<"The number entered is even" <<std::endl;
}
else {
    std::cout<<"The number entered is odd" <<std::endl;
}
return 0;
}