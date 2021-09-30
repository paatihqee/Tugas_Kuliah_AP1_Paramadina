#include <iostream>

using namespace std;

int main(){
	
	float a, b, c, x;
	
	cout << "MENGHITUNG RATA-RATA NILAI" << endl;
	cout << "\n";
	
	cout << "masukkan nilai Tugas = ";
	cin >> a; // a adalah variabel nilai tugas
	cout << "\n";
	
	cout << "masukkan nilai UTS = "; 
	cin >> b; // b adalah variabel nilai uts
	cout << "\n";
	
	cout << "masukkan nilai UAS = ";
	cin >> c; // c adalah variabel nilai uas
	cout << "\n";
	
	x = (a+b+c)/3; // x adalah variabel nilai rata-rata 
	
	cout << "Rata-ratanya adalah " << x << endl;
	
	
	cin.get();
	return 0;
}
