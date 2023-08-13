//
// Created by hoond on 2023-08-11.
//

#include "main.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    auto now = std::chrono::system_clock::now();

    time_t now_time = chrono::system_clock::to_time_t(now);
    tm* seoul_time = localtime(&now_time);
    cout << put_time(seoul_time, "%Y-%m-%d") << endl;
    return 0;
}