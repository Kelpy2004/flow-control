#include <iostream>

int main(){
    int num;

    std::cout<<"Enter the value:";
    std::cin>> num;

    if (num !=0){   // OUTER CONDITION

        if(num>0){   //INNER CONDITION
        std::cout<<"The positive value is:" <<num<<std::endl;
        }
        else{ //INNER CONDITION
            std::cout<<"The negative value is:" <<num<<std::endl;

        }  //HERE WE CLOSED IF BRACKET 
        }
        else{  //OUTER CONDITION
             std::cout<<"The entered value is 0 and is neither positive nor positive" <<std::endl;

            }
        
         return 0;
        }