//
// Created by hoond on 2023-08-10.
//

#include "main.h"
#include <iostream>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    for (int i = 1; i < t+1; i++){
        cin >> a >> b;
        cout << "Case #" << i << ": " << a+b << endl;
    }
    return 0;
}