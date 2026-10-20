#include <iostream>
#include <iomanip>
using namespace std;

int mcd(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int a, b, g;
    cin >> a >> b >> g;

    int d = mcd(mcd(a, b), g);
    double minutos = 1.0 / d;

    cout << "Minutos Transcurridos: " << fixed << setprecision(2) << minutos << endl;
    return 0;
}
