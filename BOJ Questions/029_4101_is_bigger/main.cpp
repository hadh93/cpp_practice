//
// Created by Thomas Ha on 1/2/24.
//

#include "main.h"
#include "iostream"
using namespace std;
int main(){
    long a, b;
    cin >> a >> b;
    while (a != 0 && b != 0){
        if ( a > b ){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
        cin >> a >> b;
    }
    return 0;
}
