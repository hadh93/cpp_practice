//
// Created by hoond on 2023-08-13.
//

#include "main.h"
#include <iostream>
using namespace std;
int main(){
    int h, m, duration;
    cin >> h >> m;
    cin >> duration;
    while (duration > 60){
        h += 1;
        duration -= 60;
    }
    m += duration;
    if (m >= 60){
        h += 1;
        m -= 60;
    }
    if (h >= 24){
        h -= 24;
    }
    cout << h << " " << m << endl;

    return 0;
}