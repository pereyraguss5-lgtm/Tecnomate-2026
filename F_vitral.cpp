#include <iostream>
#include <iomanip>
using namespace std;

double areaInterior(double l){
    return l * l / 5.0;
}

int main(){
    int t;
    double l;
    cin >> t;
    cout << fixed << setprecision(2);
    for (int i = 0; i < t; i++){
        cin >> l;
        cout << areaInterior(l) << endl;
    }
    return 0;
}
