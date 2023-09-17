//
// Created by Thomas Ha on 9/17/23.
//

#include "main.h"
#include <iostream>
using namespace std;
int main(){
    int N, i;
    i = 2;
    cin >> N;
    while (N != 1){
        if (N%i == 0){
            cout << i << endl;
            N /= i;
            i=2;
        } else{
            i++;
        }
    }
    return 0;
}