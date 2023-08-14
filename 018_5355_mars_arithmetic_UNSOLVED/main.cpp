//
// Created by hoond on 2023-08-14.
//

#include "main.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n;
    string input;

    cin >> n;
    getline(cin, input);
    istringstream iss(input);
    vector<string> tokens;
    string token;
    while (iss>> token){
        tokens.push_back(token);
    }



    return 0;
}