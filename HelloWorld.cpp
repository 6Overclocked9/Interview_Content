#include <iostream>

int32_t sum(int32_t,int32_t);

int main(){
    int32_t  num1,num2;
    std::cout << "Enter Two Numbers :" ;
    std::cin>>num1>>num2;
    std::cout<<"Sum:"<<sum(num1,num2);
    return 0;
}

int32_t sum(int32_t a,int32_t b){
    return a+b;
}