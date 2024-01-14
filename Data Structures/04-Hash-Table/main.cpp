//
// Created by hoond on 2024-01-14.
//
// FIXME: table must be implemented


#include "main.h"
#include <iostream>
#define MAX_TABLE 5

using namespace std;

int hash(const char *str){
    int hash = 401;
    int c;
    while (*str != '\0'){
        hash = ((hash << 4) + (int)(*str)) % MAX_TABLE;
        str++;
    }
    return hash % MAX_TABLE;
}

int main(){

    return 0;
}