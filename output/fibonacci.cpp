#include <iostream>

int main(){
    int n, a=0,b=1, nextterm=0;
    
    std::cout<<"Number of terms: ";
    std::cin>>n;

    for(int i=1; i<=n; ++i){
        if (i==1){
        std::cout<<a<<" , ";
        continue;
    } if(i==2){
    std::cout<<b<<" , ";
    continue;
} nextterm = a+b;
a=b;
b=nextterm;
std::cout<<nextterm<< " , ";
continue;
} return 0;
    }