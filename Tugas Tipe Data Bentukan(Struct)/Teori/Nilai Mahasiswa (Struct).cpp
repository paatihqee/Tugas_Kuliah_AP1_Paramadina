#include<iostream>
#include<string>

using namespace std;

struct mhs
{
	string nama;
	int nim, nilai;
	char indeks;
};

int main()
{
	mhs mhsTI[21];
	
	cout << "= = = = = = PROGRAM DATA NILAI MAHASISWA = = = = = =" << endl << endl;
	for(int i = 0; i < 21; i++)
	{
		cout << "Nama Mahasiswa  : "; cin >> mhsTI[i].nama;
		cout << "NIM Mahasiswa   : "; cin >> mhsTI[i].nim;
		cout << "Nilai Mahasiswa : "; cin >> mhsTI[i].nilai;
		cout << endl;
	}
	
	
	for(int i = 0; i < 21; i++)
	{
		if(mhsTI[i].nilai >= 90)
		{
			mhsTI[i].indeks = 'A';
		} else if (mhsTI[i].nilai >= 80 && mhsTI[i].nilai < 90)
		{
			mhsTI[i].indeks = 'B';
		} else if (mhsTI[i].nilai >= 70 && mhsTI[i].nilai < 80)
		{
			mhsTI[i].indeks = 'C';
		} else if (mhsTI[i].nilai < 70)
		{
			mhsTI[i].indeks = 'D';
		} else if ( mhsTI[i].nilai < 0 || mhsTI[i].nilai > 100)
		{
			break;
		}
	}
	
	cout << "= = = = = Nilai dan Indeks Kelulusan Setiap Mahasiswa = = = = = =" << endl;
	for(int i = 0; i < 21; i++)
	{
		cout << mhsTI[i].nama << " : " << mhsTI[i].indeks << endl;
		cout << "Dengan Nilai : " << mhsTI[i].nilai << endl;
		cout << endl;
	}
	
	cout << "= = = = = = Mahasiswa Dengan Nilai Tertinggi = = = = = =" << endl;
	int max;
	max = mhsTI[0].nilai;
	for(int i = 0; i < 21; i++)
	{
		if(max < mhsTI[i].nilai)
		{
			max = mhsTI[i].nilai;
		}
	}
	
	for(int i = 0; i < 21; i++)
	{
		if (mhsTI[i].nilai == max)
		{
			cout << mhsTI[i].nama << endl;
			cout << "Nilai : " << mhsTI[i].nilai << " dan Indeks Kelulusan: " << mhsTI[i].indeks << endl;
		}
	}
	
	cin.get();
	return 0;
}
