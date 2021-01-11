#include <iostream>
#include<thread>
#include<chrono>
//#include<string>

void Suneet();

void hello(){
    std::cout<<"Hey Suneet \n";
}

void hello2(std::string str){
    std::cout<<str<<std::endl;
}

void hello3(int num){
    std::this_thread::sleep_for(std::chrono::seconds(num));
    std::cout<<"Hey Suneet "<< num<< "\n";
}

int main() {

    std::thread t{ hello };
    std::thread t1{hello2 , "Hello Guys!"};
    std::cout << "Hello, World!" << std::endl;
    std::thread t2{hello3, 1};
    std::thread t3{hello3, 20};
    std::thread t4{hello3, 30};

    t.join();
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    return 0;
}