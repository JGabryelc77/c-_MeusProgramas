#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y, trocaValores, somaImpares;

    cout << "Digite dois numeros:" << endl;
    cin >> x >> y;

    trocaValores = 0;
    if(x > y){
        trocaValores = x;
        x = y;
        y = trocaValores;
    }

    somaImpares = 0;
    for(int i = x + 1; i < y; i++){
        if(i % 2 != 0){
            somaImpares = somaImpares + i;
        }
    }
    cout << "SOMA DOS IMPARES = " << somaImpares << endl;

    return 0;
}
