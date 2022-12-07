#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double e, n, x, y;

    cout << "Masukkan pesan x = ";
    cin >> x;
    cout << "Masukkan e: ";
    cin >> e;
    cout << "Masukkan n: ";
    cin >> n;
    
    y = fmod(pow(x, e), n);
    cout << "\n-> y = " << (int)y << "\n\n";

    system("pause");
}