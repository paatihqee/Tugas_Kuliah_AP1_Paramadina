#include<iostream>

using namespace std;

int main(){
	int array[20], n, X, ketemu;
	cout << "[MENGISI NILAI PADA ARRAY]" << endl << endl;
	
	for (int i = 0; i < 20; i++){
		cout << "Silakan isi nilai array ke " << i+1 << " : ";
		cin >> n;
		array[i] = n;
	}
	
	cout << "[MENCARI NILAI PADA ARRAY]" << endl << endl;
	cout << "Masukkan nilai yang dicari : ";
	cin >> X;
	
	for (int i = 0; i < 20; i++){
		if (array[i] == X){
			ketemu = 1;
			cout << "Nilai ditemukan dan terletak pada indeks ke " << i+1;
		} 
	}
	if (ketemu == 0){
		cout << "Nilai tidak ditemukan pada indeks berapapun!";
	}
	
	cin.get();
	return 0;
}
