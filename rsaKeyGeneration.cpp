#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main(){
	double p, q, n, d, phi, e;
	
	cout << "Masukkan bilangan prima p: ";
	cin >> p;
	cout << "Masukkan bilangan prima q: ";
	cin >> q;
	
	n = p * q;
	cout << "n = " << p << " x " << q << " = " << n << "\n";
	phi = (p-1)*(q-1);
	cout << "phi(" << n << ") = (" << p << "-1) x (" << q << "-1) = " << phi << "\n";
	cout << "Public Exponent e = ";
	for(int i = 1; i < phi-1; i++){
		if(gcd(i, phi) == 1){
			cout << i << "  ";
		}
	} printf("\n");
	cout << "Pilih satu bilangan public eksponen: ";
	cin >> e;
	
	for(int i = 1; i < INT16_MAX; i++){
		if(fmod((e * i), phi) == 1){
			d = i;
			cout << "Private key d = " << d << "\n\n";
			break;
		}
	}

	cout << "Public Key = (" << n << ", " << e << ")\n";
	cout << "Private Key = " << d << "\n\n";
	
	system("pause");
}