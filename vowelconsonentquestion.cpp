#include <iostream>

int main(){
char c;
std::cout<<"Enter the value:";
std::cin>>c;

if(c=='a' || c=='e' || c=='i' || c=='o' ||c=='u'){
std::cout <<c<<" is a vowel"<< std::endl;
}
else if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
    std::cout<<c<<" is a vowel"<<std::endl;
}
else{
    std::cout<<c<<" is a consonant" << std::endl;

}return 0;
}