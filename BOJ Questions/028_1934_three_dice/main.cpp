//
// Created by hoond on 2024-05-07.
//

#include "main.h"
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if (a == b && b == c){
        cout << 10000 + a * 1000 << endl;
    } else if (a == b || b == c || c == a) {
        if (a == b){
            cout << 1000 + a * 100 << endl;
        } else if (b==c){
            cout << 1000 + b * 100 << endl;
        } else{
            cout << 1000 + c * 100 << endl;
        }
    } else{
        if ( a > b && a > c){
            cout << a * 100 << endl;
        } else if (b > c && b > a){
            cout << b * 100 << endl;
        } else{
            cout << c * 100 << endl;
        }
    }
    return 0;
}