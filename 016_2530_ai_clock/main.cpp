//
// Created by hoond on 2023-08-13.
//

#include "main.h"
#include <iostream>
using namespace std;
int main(){
    int h, m, s, duration;
    cin >> h >> m >> s;
    cin >> duration;
    m += duration/60;
    s += duration%60;
    if (s >= 60){
        m += 1;
        s -= 60;
    }
    h += m/60;
    m %= 60;
    if (h >= 24){
        h %= 24;
    }
    cout << h << " " << m << " " << s << endl;
    return 0;
}