#include <iostream>

int main(){
    int n, sum;
    sum =0;

std::cout<<"Enter the number"<<std::endl;
std::cin>> n;

for(int i=1; i<=n; ++i){
    sum+=i; } // += is a+b


std::cout<<"sum of n natural number = " <<sum<<std::endl;
return 0;


}