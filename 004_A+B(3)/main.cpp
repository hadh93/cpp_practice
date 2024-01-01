//
// Created by Thomas Ha on 1/1/24.
//

#include "main.h"
#include <iostream>
using namespace std;

int main(){
    long N;
    long A, B;
    cin >> N;

    for (int i=0; i < N; i++){
        cin >> A >> B;
        cout << A+B << endl;
    }

    return 0;
}