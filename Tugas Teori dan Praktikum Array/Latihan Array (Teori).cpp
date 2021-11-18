#include<iostream>

using namespace std;

int array[100], dataN, jumlah, cari, ketemu, temp;
float sum = 0;

void mengisi(){
	for (int i = 0; i < 5; i++){
		cout << "Masukkan nilai pada array : "; cin >> dataN;
		array[i] = dataN;
	}
}

void nilaisama(){
	for(int i = 0; i < 5; i++){
		jumlah = 0;
		for(int j = 0; j < 5; j++){
			if (array[i] == array[j]){
				jumlah++;
			}
		}
	
	if(array[i] != array[i-1])
	cout << "Nilai :"<< array[i] << " : Jumlahnya : " << jumlah <<endl;
	}
}

void sum_avg(){
	for (int i = 0; i < 5; i++){
		dataN = array[i];
		sum = sum + array[i];
	}
	float avg = sum/5;
	cout << "Total nilai array adalah " << sum << " dengan rata-rata " << avg << endl;
}

void menampilkan(){
	for (int i = 0; i < 5; i++){
		dataN = array[i];
		cout << "Data array ke-" << i+1 << " adalah : " << array[i] << endl;
	}
}

int main(){
	cout << "[Mengisi Array]" << endl << endl;
	mengisi();
	
	cout << "\n=================================================" << endl;
	cout << "\n[Mengecek nilai yang sama pada array]" << endl << endl;
	nilaisama();
	
	cout << "\n=================================================" << endl;
	cout << "\n[Total dan rata-rata nilai array]" << endl << endl;
	sum_avg();
	
	cout << "\n=================================================" << endl;
	cout << "\n[Menampilkan array]" << endl << endl;
	menampilkan();
	
	cin.get();
	return 0;
}
