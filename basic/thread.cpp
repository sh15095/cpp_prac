#include<iostream>
#include<thread>

void hello(){
    std::cout<<"Hey Everyone"<<std::endl;
}

int main(){
    std::thread t{hello};
    return 0;
}