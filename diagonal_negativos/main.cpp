#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, somanegativos;
    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[N][N];

    for(int i = 0; i < N; i++){
        for(int j=0; j < N; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "Diagonal Principal: " << endl;
    for(int i = 0; i < N; i++){
        cout << mat[i][i] << " " ;
        }

    somanegativos = 0;
    for(int i = 0; i < N; i ++){
        for(int j = 0; j < N; j ++){
            if(mat[i][j] < 0){
                somanegativos++;
            }
        }
    }

    cout << endl << "Quantidade de negativos: " << somanegativos << endl;
    return 0;
}
