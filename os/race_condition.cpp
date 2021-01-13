//
// Created by daisuke on 2021/01/11.
//
#include<iostream>
#include "race_condition.h"
#include<thread>
#include<chrono>

void draces(std::string str){
    for(int i = 0; i<str.length();i++){
        std::cout<<str[i];
    }
    std::cout<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
}
