#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct mhs
{
	string nama, matkul, status;
	int nim, uts, uas, tugas;
	char indeks;
};

float* average(float rerata[], mhs mhswa[])
{
    for(int i = 0; i < 5; i++)
    {
        rerata[i] = (mhswa[i].uts * 0.3) + (mhswa[i].uas * 0.3) + (mhswa[i].tugas * 0.3);
    }
    return rerata;
}

void indeksNIlai(float rerata[], mhs mhswa[])
{
    average(rerata, mhswa);
    for(int i = 0; i < 5; i++)
    {
        if(rerata[i] >= 90)
        {
            mhswa[i].indeks = 'A';
        }else if(rerata[i] >= 80 && rerata[i] < 90)
        {
            mhswa[i].indeks = 'B';
        }else if(rerata[i] >= 70 && rerata[i] < 80)
		{
			mhswa[i].indeks = 'C';
		}else if(rerata[i] >= 60 && rerata[i] < 70)
		{
			mhswa[i].indeks = 'D';
		}else if(rerata[i] < 60)
		{
		    mhswa[i].indeks = 'E';
		}else if ( rerata[i] < 0 || rerata[i] > 100)
		{
			break;
		}
    }
}

void statusMhs(float rerata[], mhs mhswa[])
{
    average(rerata, mhswa);
    for(int i = 0; i < 5; i++)
    {
        if(rerata[i] >= 60)
        {
            mhswa[i].status = "LULUS";
        }else if(rerata[i] < 60)
        {
            mhswa[i].status = "TIDAK LULUS";
        }
    }
}

void tabel(float rerata[], mhs mhswa[])
{
    average(rerata, mhswa);
    indeksNIlai(rerata, mhswa);
    statusMhs(rerata, mhswa);
    cout << "==================================================================================================" << endl;
    cout << "|    NIM    |     Nama     | Mata Kuliah | UTS | UAS | Tugas | Rata-rata | Indeks |    Status    |" << endl;
    cout << "==================================================================================================" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "| " << setiosflags(ios::left) << setw(10) << mhswa[i].nim << "|";
        cout << " " << setiosflags(ios::left) << setw(13) << mhswa[i].nama << "|";
        cout << " " << setiosflags(ios::left) << setw(12) << mhswa[i].matkul << "|";
        cout << " " << setiosflags(ios::left) << setw(4) << mhswa[i].uts << "|";
        cout << " " << setiosflags(ios::left) << setw(4) << mhswa[i].uas << "|";
        cout << " " << setiosflags(ios::left) << setw(6) << mhswa[i].tugas << "|";
        cout << " " << setiosflags(ios::left) << setw(10) << rerata[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(7) << mhswa[i].indeks << "|";
        cout << " " << setiosflags(ios::left) << setw(13) << mhswa[i].status << "|";
        cout << "\n==================================================================================================" << endl;
    }
}

int main()
{
    mhs mhswa[5];
    float rerata[5];
    cout << "= = = = = = PROGRAM DATA NILAI MAHASISWA = = = = = =" << endl << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nama        : "; cin >> mhswa[i].nama;
        cout << "NIM         : "; cin >> mhswa[i].nim;
        cout << "Mata kuliah : "; cin >> mhswa[i].matkul;
        cout << "Nilai UTS   : "; cin >> mhswa[i].uts;
        cout << "Nilai UAS   : "; cin >> mhswa[i].uas;
        cout << "Nilai Tugas : "; cin >> mhswa[i].tugas;
        cout << "==============================================================" << endl;
    }
    tabel(rerata, mhswa);
    cout << endl;
    
    return 0;
}
