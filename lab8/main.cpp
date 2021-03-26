//
//  main.cpp
//  графы
//
//  Created by pavel on 12.02.2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    short v,r;
    cin >> v >> r;
    bool matrix[v][v];
    
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            matrix[i][j] = 0;}
    }
    
    for(int i = 0; i < r; i++ ){                            // ЗАДАН список ребер - начало и конец
        short a,b;                                          // поэтому мы читаем и запоняем единицей
        cin >> a >> b;
        matrix[a - 1][b - 1] = 1;
    }
     
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
