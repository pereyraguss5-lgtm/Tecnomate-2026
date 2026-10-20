#include <iostream>
using namespace std;

void mostrarJohnson(int q, int n)
{
    if (n > 2 * q - 1){
        cout << "Nro no valido" << endl;
        return;
    }
    if (n <= q){
        for (int i = 0; i < q - n; i++) cout << '0';
        for (int i = 0; i < n; i++) cout << '1';
    }
    else{
        for (int i = 0; i < 2 * q - n; i++) cout << '1';
        for (int i = 0; i < n - q; i++) cout << '0';
    }
    cout << endl;
}

int main(){
    int k, q, n;
    cin >> k;
    for (int caso = 0; caso < k; caso++){
        cin >> q >> n;
        mostrarJohnson(q, n);
    }
    return 0;
}
