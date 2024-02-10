#include <iostream>

int main(){
    int a, b, c;

std::cout<<"a=" && std::cin>>a;
std::cout<<"b=" && std::cin>>b;
std::cout<<"c=" && std::cin>>c;


if(a>=b && a>=c){
  std::cout<<"Biggest value is"<< a<<std::endl;
}else if(b>=c && b>=a){
 std::cout <<"Biggest value is"<< b<<std::endl;
}else{
    std::cout<<"biggest value is "<< c<<std::endl;
}return 0;

}