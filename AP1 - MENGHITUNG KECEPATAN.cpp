#include <iostream>

using namespace std;

int main(){
	float s, t, v;
	
	cout << "MENGHITUNG KECEPATAN \n";
	cout << "\n";
	
	cout << "silahkan masukkan nilai jarak (s) = ";
	cin >> s; // s adalah variabel jarak
	cout << "\n";
	
	cout<<"silahkan masukkan nilai waktu (t) = ";
	cin >> t; // t adalah variabel waktu
	cout << "\n";
	
	v = s/t; // v adalah variabel keccepatan
	
	cout <<"kecepatannya (v) adalah = "<< v << " km/jam"<< endl;
	
	cin.get();
	return 0;
}
