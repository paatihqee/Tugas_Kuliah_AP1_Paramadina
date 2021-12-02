#include <iostream>
using namespace std;

struct nextday {
	int hari, bulan, tahun;
};

int main(){
	
	nextday tgl1, tgl2;
	int plus, minus, opsi;
	char choice;
	
	do {
		system("cls");
		cout << endl << "[ P R O G R A M   N E X T D A Y ]" << endl;
		cout << endl;
	
		cout << "Masukkan Tanggal Pertama" << endl;
		cout << "a. Tanggal  : "; cin >> tgl1.hari;
		cout << "b. Bulan    : "; cin >> tgl1.bulan;
		cout << "c. Tahun    : "; cin >> tgl1.tahun;
	
		if (tgl1.hari==29 && tgl1.bulan==2 && (tgl1.tahun%4)!=0)
		{
			cout << "Maaf, tidak ada tanggal tersebut dalam kalender" << endl;
			cout << endl;
			
			cout << "Kembali ke beranda? (y/n) ";
			cin >> choice;
			cout << "==================================================" << endl;
		} else if (tgl1.hari>=32)
		{
			cout << "Maaf, tidak ada tanggal tersebut dalam kalender" << endl;
			cout << endl;
			
			cout << "Kembali ke beranda? (y/n) ";
			cin >> choice;
			cout << "==================================================" << endl;
		} else if (tgl1.bulan > 12 || tgl1.bulan <= 0)
		{
			cout << "Maaf, tidak ada tanggal tersebut dalam kalender" << endl;
			cout << endl;
			
			cout << "Kembali ke beranda? (y/n) ";
			cin >> choice;
			cout << "==================================================" << endl;
		} else
		{
			cout << "Tanggal yang anda input adalah : ";
			cout << tgl1.hari << "-" << tgl1.bulan << "-" << tgl1.tahun << endl;
	
			cout << endl;
		
			cout << "Modifikasi Tanggal?" << endl;
			cout << "1. Tambah" << endl;
			cout << "2. Batal" << endl;
			cout << "Pilih menu modifikasi : ";
			cin >> opsi;
	
			switch(opsi)
			{
				case 1:
					cout << "Jumlah hari yang ditambahkan : ";
					cin >> plus;
					tgl2.hari = tgl1.hari + plus;
					tgl2.bulan = tgl1.bulan;
					tgl2.tahun = tgl1.tahun;
					if (tgl1.hari == 30)
					{
						if (tgl1.bulan <= 7)
						{
							if ((tgl1.bulan%2)==0)
							{
								tgl2.hari = 0 + plus;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							} else 
							{
								int plus1;
								plus1 = plus-1;
								tgl2.hari = 0 + plus1;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
								if (plus == 1)
								{
									tgl2.hari = tgl1.hari + plus;
									tgl2.bulan = tgl1.bulan;
									tgl2.tahun = tgl1.tahun;
								}
							}
						} else if (tgl1.bulan > 7)
						{
							if ((tgl1.bulan%2)==0)
							{
								int plus1;
								plus1 = plus-1;
								tgl2.hari = 0 + plus1;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
								if (plus == 1)
								{
									tgl2.hari = tgl1.hari + plus;
									tgl2.bulan = tgl1.bulan;
									tgl2.tahun = tgl1.tahun;
								}
							} else
							{
								tgl2.hari = 0 + plus;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							}
						}
					} else if (tgl1.hari == 31)
					{
						if (tgl1.bulan <= 7)
						{
							if ((tgl1.bulan%2) != 0)
							{
								tgl2.hari = 0 + plus;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							}
						} else
						{
							if ((tgl1.bulan%2)==0 && tgl1.bulan != 12)
							{
								tgl2.hari = 0 + plus;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							} else if (tgl1.bulan == 12)
							{
								tgl2.hari = 0 + plus;
								tgl2.bulan = 1;
								tgl2.tahun = tgl1.tahun + 1;
							}
						}
					}
				
					if (tgl1.bulan <= 7)
					{
						if ((tgl1.bulan%2)==0 && tgl1.bulan != 2)
						{
							int a;
							a = 30 - tgl1.hari;
							if (plus > a)
							{
								int plus1;
								plus1 = plus - a;
								tgl2.hari = 0 + plus1;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							}
						} else if ((tgl1.bulan%2)!=0)
						{
							int a;
							a = 31 - tgl1.hari;
							if (plus > a)
							{
								int plus1;
								plus1 = plus - a;
								tgl2.hari = 0 + plus1;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							}
						} else if (tgl1.bulan == 2)
						{
							int a;
							a = 28 - tgl1.hari;
							if (plus > a)
							{
								int plus1;
								plus1 = plus - a;
								tgl2.hari = 0 + plus1;
								tgl2.bulan = tgl2.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							}
						}	
					} else
					{
						if ((tgl1.bulan%2)==0 && tgl1.bulan != 12)
						{
							int a;
							a = 31 - tgl1.hari;
							if (plus > a)
							{
								int plus1;
								plus1 = plus - a;
								tgl2.hari = 0 + plus1;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							}
						} else if ((tgl1.bulan%2)!=0)
						{
							int a;
							a = 30 - tgl1.hari;
							if (plus > a)
							{
								int plus1;
								plus1 = plus - a;
								tgl2.hari = 0 + plus1;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							}
						} else if (tgl1.bulan == 12)
						{
							int a;
							a = 31 - tgl1.hari;
							if (plus > a)
							{
								int plus1;
								plus1 = plus - a;
								tgl2.hari = 0 + plus1;
								tgl2.bulan = 1;
								tgl2.tahun = tgl1.tahun + 1;
							}
						}
					}
				
					if ((tgl1.tahun%4)==0)
					{
						if (tgl1.bulan==2)
						{
							if (tgl1.hari==29)
							{
								tgl2.hari = 0 + plus;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							}
							int a;
							a = 29 - tgl1.hari;
							if (plus > a)
							{
								int plus1;
								plus1 = plus - a;
								tgl2.hari = 0 + plus1;
								tgl2.bulan = tgl1.bulan + 1;
								tgl2.tahun = tgl1.tahun;
							}
						}
					}
					cout << endl;
	
					cout << "Hasil modifikasi tanggal anda : ";
					cout << tgl2.hari << "-" << tgl2.bulan << "-" << tgl2.tahun << endl;
						
					cout << endl;
			
					cout << "Kembali ke beranda? (y/n) ";
					cin >> choice;
					cout << "==================================================" << endl;
					break;
				case 2:
					cout << endl;
			
					cout << "Kembali ke beranda? (y/n) ";
					cin >> choice;
					cout << "==================================================" << endl;
					break;
			}
		}
	} while (choice == 'y' || choice == 'Y');
	
	cout << endl;
	
	system("cls");
	cout << "= = = = = Program Ditutup = = = = =" << endl;
	cout << "          Terimakasih :)           " << endl;
	
	cin.get();
	return 0;
}
