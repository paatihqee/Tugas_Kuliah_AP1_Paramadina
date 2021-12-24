#include <iostream>
#include <string>
using namespace std;

void prosesHitung(string hari[], string name, int masuk, int pulang, int m_tot, int p_tot, int jamKerja, int gaji)
{
	cout << "Input Jam Kerja (Format 24 Jam)" << endl << endl;
	m_tot = 0;
	p_tot = 0;
	for (int i = 0; i < 6; i++)
	{
    	cout << "Hari " << hari[i] << endl;
    	cout << "Jam Masuk : ";
    	cin >> masuk;
    	cout << "Jam Pulang : ";
    	cin >> pulang;
    	cout << endl;
    	m_tot = m_tot + masuk;
    	p_tot = p_tot + pulang;
	}
	jamKerja = (p_tot - m_tot) - ((13 - 12) * 6); //total jam kerja dalam 6 hari dikurangi jam istirahat
	cout << "Total jam kerja dalam seminggu : " << jamKerja << " jam" << endl;
	cout << "Dengan jam lembur sebanyak : " << jamKerja - 48 << " jam" << endl;
	
	if(jamKerja == 48) // 48 adalah 8 jam x 6 hari 
	{
	    gaji = 200000;
	} else if(jamKerja > 48)
	{
	    gaji = ((jamKerja - 48) * 30000) + 200000;
	}
	cout << "Gaji saudara " << name << " sebesar : Rp." << gaji << endl;
}

int main() 
{
	string hari[6]={"Senin", "Selasa", "Rabu", "Kamis", "Jum'at", "Sabtu"};
	string name;
	int masuk, pulang, jamKerja, gaji;
	int m_tot, p_tot;
	
    cout << "MESIN KALKULASI GAJI KARYAWAN" << endl;
    cout << endl;
    
    cout << "Nama Karyawan : ";
    getline(cin, name);
    cout << endl;
    
    prosesHitung(hari, name, masuk, pulang, m_tot, p_tot, jamKerja, gaji);
    
    return 0;
}
