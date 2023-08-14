//
// Created by hoond on 2023-08-14.
//

#include "main.h"
#include <iostream>
using namespace std;
int main(){
    string a,b;
    char op;
    cin >> a;
    cin >> op;
    cin >> b;
    if (op == '+'){
        if (a.length() >= b.length()){
            a[a.length()-1 - (b.length()-1)] = char(int(a[a.length()-1 - (b.length()-1)]) + 1);
            cout << a << endl;
        } else{
            b[b.length()-1 - (a.length()-1)] = char(int(b[b.length()-1 - (a.length()-1)]) + 1);
            cout << b << endl;
        }

    } else if (op == '*'){
        for (int i=0; i< b.length()-1; i++){
            a += '0';
        }
        cout << a << endl;
    }
    return 0;
}