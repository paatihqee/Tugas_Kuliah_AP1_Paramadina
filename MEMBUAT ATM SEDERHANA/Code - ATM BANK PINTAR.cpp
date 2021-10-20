// PROGRAM C++ ATM BANK PINTAR
// Saldo Utama Rp. 6.000.000
// PIN Anda adalah 777888
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

// Global Variabel
long saldo = 6000000;
int nopin, choice, a, b;
char confirm;

// Tampilan Homepage
void homescreen()
{
	
	printf ("                 ___________________________________________ \n");
	printf ("                 |                                         | \n");
	printf ("                 |             SELAMAT DATANG DI           | \n");
	printf ("                 |              ATM BANK PINTAR            | \n");
	printf ("                 |_________________________________________| \n\n\n");
	
}

// Tampilan Menu Jika PIN Benar
void menu()
{
	
	printf ("                 ___________________________________________ \n");
	printf ("                 |                                         | \n");
	printf ("                 |            MENU TRANSAKSI ANDA          | \n");
	printf ("                 |               1. Cek Saldo              | \n");
	printf ("                 |               2. Tarik Tunai            | \n");
	printf ("                 |               3. Setor Tunai            | \n");
	printf ("                 |               4. Keluar                 | \n");
	printf ("                 |_________________________________________| \n\n\n");
	
}

// Tampilan Jika PIN Salah
void pinSalah()
{
	
	printf ("                 ___________________________________________ \n");
	printf ("                 |                                         | \n");
	printf ("                 |             PIN ANDA SALAH !            | \n");
	printf ("                 |       TERIMAKASIH TELAH BERKUNJUNG      | \n");
	printf ("                 |_________________________________________| \n\n\n");
	
}

// Tampilan Ketika Keluar atau Transaksi selesai
void afterTransaction()
{
	
	system("cls");
	printf ("                 ___________________________________________ \n");
	printf ("                 |                                         | \n");
	printf ("                 |      TERIMAKASIH TELAH BERTRANSAKSI     | \n");
	printf ("                 |     SILAKAN AMBIL KEMBALI KARTU ANDA    | \n");
	printf ("                 |_________________________________________| \n\n\n");
	
}

// function untuk ceksaldo
void cekSaldo()
{
	
	cout << "Saldo Anda adalah Rp. " << saldo << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	
}

// function untuk tarik tunai
int penarikan(int a)
{
	
	int saldo1;
	cout << "Masukkan Nominal Tarik Tunai : Rp. "; cin >> a;
	saldo1 = saldo - a;
	if (a < saldo){
		cout << "Transaksi Anda Berhasil !" << endl;
		cout << "Maka Saldo Anda menjadi Rp. " << saldo1 <<endl;
	} else {
		cout << "Saldo Anda Tidak Mencukupi" << endl;
		cout << "Transaksi Anda Tidak Berhasil !" << endl;
	}
	
	cout << "--------------------------------------------------------------------------" << endl;
	return saldo1;
	
}

// function untuk setor tunai atau menabung
int penambahan(int b)
{
	
	int saldo2;
	cout << "Masukkan Nominal Setoran : Rp. "; cin >> b;
	saldo2 = saldo + b;
	cout << "Transaksi Anda Berhasil !" << endl;
	cout << "Maka Saldo Anda menjadi Rp. " << saldo2 <<endl;
	cout << "--------------------------------------------------------------------------" << endl;
	return saldo2;
	
}

// function untuk login dengan menggunakan PIN
void access()
{
	
	if (nopin == 777888){
		system ("cls");
		menu();
		cout << "Pilih Menu anda : "; cin >> choice;
		printf("\n\n");
	} else {
		system ("cls");
		pinSalah();
	}
	
}


int main()
{
	system ("color 17");
	
	homescreen();
	cout << "Masukkan PIN ATM Anda : "; cin >> nopin;
	access();
	
	switch(choice){
				case 1:
					cekSaldo();
					cout << "Klik Apapun ! "; cin >> confirm;
					system("cls");
					afterTransaction();
					break;
				case 2:
					penarikan(a);
					cout << "Klik Apapun ! "; cin >> confirm;
					system("cls");
					afterTransaction();
					break;
				case 3:
					penambahan(b);
					cout << "Klik Apapun ! "; cin >> confirm;
					system("cls");
					afterTransaction();
					break;
				case 4:
					afterTransaction();
					break;
			}
	_getche();
	return 0;	
}
