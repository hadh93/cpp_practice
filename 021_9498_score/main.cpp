//
// Created by hoond on 2023-08-18.
//

#include "main.h"
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n >= 90 && n <= 100){
        cout << "A" << endl;
    } else if ( n >= 80 ){
        cout << "B" << endl;
    } else if ( n >= 70 ){
        cout << "C" << endl;
    } else if ( n >= 60 ){
        cout << "D" << endl;
    } else {
        cout << "F" << endl;
    }
    return 0;
}