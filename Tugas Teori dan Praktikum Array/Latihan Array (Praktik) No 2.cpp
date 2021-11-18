#include<iostream>

using namespace std;

int main(){
	char array[15] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
	int down = 4;
	int down2 = 4;
	int vokal, jumlah;
	
	cout << "NILAI PADA ARRAY :" << endl << endl;
	for (int i = 0; i < 15; i++){
		cout << "[";
		cout << array[i];
		cout << "] ";
	}
	cout << "\n\n";
	
	cout << "a). TAMPILAN ARRAY PERTAMA :" << endl << endl;
	for (int i = 0; i < 15; i++){
		cout << array[i];
		cout << " ";
		if (i == down)
		{
			cout << "\n\n";
			down += 5;
		}
	} 
	cout << "\n";
	
	cout << "b). TAMPILAN ARRAY KEDUA :" << endl << endl;
	
	cout << "masih bingung kak... mohon bimbingannya ya" << endl;
	
	cout << "\n\n";
	
	cout << "c). MENAMPILKAN HURUF VOCAL :" << endl << endl;
	for (int i = 0; i < 15; i++){
		switch(array[i]){
			case 'A':
				cout << array[i];
				cout << " ";
				break;
			case 'I':
				cout << array[i];
				cout << " ";
				break;
			case 'U':
				cout << array[i];
				cout << " ";
				break;
			case 'E':
				cout << array[i];
				cout << " ";
				break;
			case 'O':
				cout << array[i];
				cout << " ";
				break;
		}
	}
	cout << "\n\n";
	
	cout << "d). MENAMPILKAN HURUF KONSONAN :" << endl << endl;
	for (int i = 0; i < 15; i++){
		switch(array[i]){
			case 'A':
				continue;
			case 'I':
				continue;
			case 'U':
				continue;
			case 'E':
				continue;
			case 'O':
				continue;
		}
		cout << array[i] << " ";
	}
	cout << "\n\n";
	
	cout << "e). KEMUNCULLAN SETIAP HURUF" << endl << endl;
	for(int i = 0; i < 15; i++){
		jumlah = 0;
		for(int j = 0; j < 15; j++){
			if (array[i] == array[j]){
				jumlah++;
			}
		}
	
	if(array[i] != array[i-1])
	cout << "Huruf :"<< array[i] << " : Jumlahnya : " << jumlah <<endl;
	}
	
	cin.get();
	return 0;
}
