//
// Created by hoond on 2023-08-07.
//

#include "main.h"
#include <iostream>

using namespace std;

int main(){
    int A, B;
    std::cin >> A >> B;

    // A/B 연산 결과를 정수로 계산
    long long numerator = A;
    long long denominator = B;

    // 소수점 이동
    long long integralPart = numerator / denominator;
    long long remainder = numerator % denominator;
    std::cout << integralPart << ".";

    // 소수점 아래 31자리까지 출력
    for (int i = 0; i < 31; ++i) {
        remainder *= 10;
        if (remainder / denominator == 0){
            return 0;
        }
        std::cout << remainder / denominator;
        remainder %= denominator;
    }
    return 0;
}