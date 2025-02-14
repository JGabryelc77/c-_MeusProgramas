#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y;

    cout << "Digite dois numeros: " << endl;
    cin >> x;
    cin >> y;
    cout << (x > y ? "DECRESCENTE!\n" : (y > x ? "CRESCENTE!\n" : ""));

    while(x != y){
        cout << "Digite outros dois numeros: " << endl;
        cin >> x;
        cin >> y;
        cout << (x > y ? "DECRESCENTE!\n" : (y > x ? "CRESCENTE!\n" : ""));
    }

    return 0;
}
