#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float F, i, j, n, P, q;
	system ("color d");
	
	printf ("Tabungan anda 3 tahun yang akan datang adalah sebesar... \n");
	printf ("Rp. 56700000 (Lima Puluh Enam Juta Tujuh Ratus Ribu Rupiah) \n");
	printf ("\n");
	
	printf ("Untuk menghitung tabungan anda saat ini, silahkan... \n");
	printf ("Input besaran bunga (%)= ");
	cin >> j; // j adalah bunga dalam bentuk bilangan bulat perseratus (dalam bentuk persen)
	i = j/100; // i J adalah bunga dalam bentuk decimal
	printf ("\n");
	
	printf ("Input periode pembungaan : \n");
	printf ("pilih '3' untuk pertahun \n");
	printf ("pilih '6' untuk persemester \n");
	printf ("Pembungaan setiap = ");
	cin >> n;
	printf ("\n");
	
	F = 56700000; // F adalah salda akhir (dalam hal ini adalah saldo 3 tahun mendatang)
	q = pow((1+i), n); // q adalah suatu permisalan dari operasi (1+i)^n dan n adalah periode pembungaan
	P = F/q; // P adalah saldo awal yang ingin dicari 
	
	printf ("Maka, tabungan anda saat ini adalah Rp. ");
	cout << fixed << P << endl;
	
	cin.get();
	return 0;
}
