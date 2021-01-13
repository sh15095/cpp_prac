#include <iostream>
#include<thread>
#include<chrono>
#include "race_condition.h"
#include "data_races.h"
//#include<string>



int main() {
    int x{3};
    std::thread t{ hello, std::ref(x), "Suneet"};
    std::thread t1{hello2 , "Hello Guys!"};
    std::cout << "Hello, World!" << std::endl;
    std::thread t2{draces, "aPang"};
    std::thread t3(draces, "abc");
    std::thread t4(draces, "xyz");
    std::thread t5(draces, "fgh");
    std::thread t6(draces, "123");
    t.join();
    t1.join();
    t2.join();
    t3.join();
    t4.join();t5.join();t6.join();
    return 0;
}