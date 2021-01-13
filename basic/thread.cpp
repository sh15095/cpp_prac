#include <iostream>


void hello(){
    int num;
    std::cout<<"Hey! What is your favorite number: "<<std::endl;
    std::cin>>num;
    std::cout<<"Interesting! "<<num<<" is my favorite number too, lol. \n";
}

//int main(){
//    std::thread t{hello};
//    return 0;
//}

