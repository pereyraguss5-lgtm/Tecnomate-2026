#include <iostream>
using namespace std;

long long potenciaModular(long long b, long long p, long long m){
    long long res = 1 % m;
    b = b % m;
    while (p > 0){
        if (p % 2 == 1) res = (res * b) % m;
        b = (b * b) % m;
        p = p / 2;
    }
    return res;
}

int main(){
    long long b, p, m;
    while (cin >> b >> p >> m){
        cout << potenciaModular(b, p, m) << endl;
    }
    return 0;
}
