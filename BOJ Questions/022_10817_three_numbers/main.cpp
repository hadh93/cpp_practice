//
// Created by Thomas Ha on 8/22/23.
//

#include "main.h"
#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b){
        if (b > c){
            cout << b << endl;
        } else {
            if (a > c) {
                cout << c << endl;
            } else{
                cout << a << endl;
            }
        }
    } else {// b가 더 큼
        if (a > c){
            cout << a << endl;
        } else{
            if (b > c){
                cout << c << endl;
            } else{
                cout << b << endl;
            }
        }
    }
    return 0;
}