#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double y, n, d, x;

    cout << "Masukkan y: ";
    cin >> y;
    cout << "Masukkan n: ";
    cin >> n;
    cout << "Masukkan d: ";
    cin >> d;

    x = fmod(pow(y, d), n);
    cout << "\n-> x = " << (int)x << "\n\n";

    system("pause");
}