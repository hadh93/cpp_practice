//
// Created by hoond on 2023-08-23.
//

#include "main.h"
#include <iostream>
using namespace std;
int main(){
    int temp;
    int score;
    score = 0;
    for (int i=0; i< 5; i++){
        cin >> temp;
        if (temp <= 40){
            score += 40;
        } else {
            score += temp;
        }
    }
    score /= 5;
    cout << score;
    return 0;
}