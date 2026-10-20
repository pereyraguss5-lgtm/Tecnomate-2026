#include <iostream>
using namespace std;

long long contarVentanas(long long a, long long b){
    long long cont = 0;
    if (a < b){
        long long aux = a;
        a = b;
        b = aux;
    }
    while (b > 0){
        cont += a / b;
        long long r = a % b;
        a = b;
        b = r;
    }
    return cont;
}

int main(){
    long long ancho, alto;
    while (cin >> ancho >> alto){
        cout << contarVentanas(ancho, alto) << endl;
    }
    return 0;
}
