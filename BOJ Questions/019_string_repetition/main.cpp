//
// Created by hoond on 2023-08-14.
//

#include "main.h"
#include <iostream>
using namespace std;
int main(){
    int n, rep_n;
    string s;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> rep_n >> s;
        for (char j : s){
            for (int k=0; k < rep_n; k++){
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}