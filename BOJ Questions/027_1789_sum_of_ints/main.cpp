//
// Created by Thomas Ha on 9/23/23.
//

#include "main.h"
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long N;
    cin >> N;
    long ans =0;
    long x = sqrt(2*N);
    for (long i=x; i>= 1; i--){
        if (i*i +i <= 2*N){
            ans = i;
            break;
        }
    }
    return 0;
}
