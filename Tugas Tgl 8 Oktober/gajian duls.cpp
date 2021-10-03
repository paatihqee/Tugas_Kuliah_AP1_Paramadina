#include <iostream>
#include <math.h>
using namespace std;

int main() { // tugas no4: program menghitung gaji karyawan
	float golongan, jam_masuk, jam_pulang, lama_kerja, lama_kerja_sebulan, jam_lembur, jumlah_gaji1, jumlah_gaji2;
	string nama;
	
	cout << "Masukkan Nama Karyawan : " << endl;
	getline(cin, nama); // nama karyawan yang bisa diinput lebih dari satu kata (*thanks to kak ghif atas ilmunya)
	
	cout << endl;
	
	cout << "Jam Masuk Karyawan : " << endl;
	cin >> jam_masuk; // jam masuk karyawan dengan format 24 jam
	cout << "Jam Pulang Karyawan : " << endl;
	cin >> jam_pulang; // jam pulang karyawan dengan format 24 jam
	
	cout << endl;
	
	//rumus yang saya bentuk
	lama_kerja = jam_pulang-jam_masuk; // lama kerja karyawan dalam sehari
	lama_kerja_sebulan = 26*lama_kerja; // lama kerja karyawan jika ditotal dalam sebulan (asumsikan ssetiap hari minggu libur)
	
	cout << "Maka Lama Kerja Saudara " << nama << " adalah " << lama_kerja << " jam/hari" << endl;
	cout << "atau "<< lama_kerja_sebulan << " jam/bulan" << endl;
	
	jam_lembur = lama_kerja_sebulan-150; // jika total jam kerja perbulannya > 150 jam, maka lebihnya dianggap lembur
	
	// agar ketika menampilkan jam lembur, tidak menampilkan hasil yang negatif(-)
	if (jam_lembur >= 0){
		cout << "Dengan Jam lembur Sebanyak " << jam_lembur << " jam/bulan" << endl;
	} else {
		cout << "Dengan Jam lembur Sebanyak 0(nol) jam/bulan" << endl;
	}
	
	cout << endl;
	
	cout << "Pilih Golongan Karyawan (1, 2, 3, 4, atau 5) : " << endl; // jenis golongan yang mempengaruhi perhitungan gaji karyawan
	cin >> golongan;
	
	cout << endl;
	// rumus yang saya bentuk dari melihat pola pada tabel
	jumlah_gaji1 = 1000000*golongan; // rumus gaji karyawan jika jam kerja < 150 jam/bulan
	jumlah_gaji2 = (1000000*golongan)+(jam_lembur*golongan*10000); // rumus gaji karyawan jika jam kerja > 150 jam/bulan
	
	//proses perhitungan gaji karyawan dimulai dari sini
	if (26*lama_kerja < 150){
		cout << "Maka Gaji Saudara " << nama << " adalah Rp. " << fixed << jumlah_gaji1 << endl;
	} else {
		cout << "Maka Gaji Saudara " << nama << " adalah Rp. " << fixed << jumlah_gaji2 << endl;
	}
	
	cin.get();
	return 0;
}
