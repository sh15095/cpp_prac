//
// Created by daisuke on 2021/01/11.
//
#include<iostream>
#include "data_races.h"
#include<thread>
#include<chrono>

void hello(int num, std::string str){
    num += 2;
    std::cout<<"Hey Suneet "<<num<<str<<std::endl;
}

void hello2(std::string str){
    std::cout<<str<<std::endl;
}

void hello3(int num){
    std::this_thread::sleep_for(std::chrono::seconds(num));
    std::cout<<"Hey Suneet "<< num<< "\n";
}
