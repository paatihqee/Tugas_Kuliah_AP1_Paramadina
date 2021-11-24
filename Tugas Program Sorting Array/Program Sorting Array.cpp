#include<iostream>
using namespace std;

void menu()
{
	cout << "Menu Sorting :" << endl;
	cout << "1. Insertion Sort" << endl;
	cout << "2. Maximum Sort" << endl;
	cout << "3. Bubble Sort" << endl;
	cout << "4. Keluar" << endl;
}

void insertion_sort(int array[], int length)
{
	cout << "Proses Sorting Insertion Sort: " << endl;
	for(int i = 0; i < length; i++)
	{
		int temp, x;
		bool bukan;
		temp = array[i];
		x = i - 1;
		bukan = false;
		while(x >= 0 && !bukan)
		{
			if(temp < array[x])
			{
				array[x+1] = array[x];
				x=x-1;
			}
			else
			{
				bukan = true;
			}
		}
		array[x+1] = temp;
		for(int l = 0; l < length; l++)
		{
			cout << array[l] << " | ";
		}
		cout << endl;
	}
}

void maximum_sort(int array[], int length, int u)
{
	cout << "Proses sorting Maximum Sort: " << endl;
	for(int i = 0; i <= length-2; i++)
	{
		int imaks = 0;
		for(int j = 1; j <= u; j++)
		{
			if(array[j] > array[imaks])
			{
				imaks = j;
			}
		}
		int temp;
		temp = array[u];
		array[u] = array[imaks];
		array[imaks] = temp;
		u--;
		for(int l = 0; l < length; l++)
		{
			cout << array[l] << " | ";
		}
		cout << endl;
	}
}

void bubble_sort(int array[], int length)
{
	cout << "Proses Sorting Bubble Sort: " << endl;
	for(int i = 1; i < length; i++)
	{
		for(int j = 0; j < length-i; j++)
		{
			int temp;
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
		for(int l = 0; l < length; l++)
		{
			cout << array[l] << " | ";
		}
		cout << endl;
	}
}

int main()
{
	int array[100], length, pilih;
	char quest;
	
	cout << "= - = - = PROGRAM SORTING ARRAY = - = - =" << endl;
	cout << "      Isi Data Array Terlebih Dahulu     " << endl;
	
	cout << endl;
	cout << "Masukkan Jumlah Array Yang Diinginkan : ";
	cin >> length;
	int u = length - 1;
	
	cout << endl;
	
	for(int i = 0; i < length; i++)
	{
		cout << "Input Data Ke-" << i+1 << " : ";
		cin >> array[i];
	}
	cout << endl;
	
	cout << "Data Anda Sebelum Sorting : " << endl;
	for(int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	
	cout << endl;
	do
	{
		menu();
		cout << "Pilih Menu Sorting : ";
		cin >> pilih;
	
		cout << endl;
		switch(pilih)
		{
			case 1:
				insertion_sort(array, length);
				break;
			case 2:
				maximum_sort(array, length, u);
				break;
			case 3:
				bubble_sort(array, length);
				break;
			case 4:
				cout << "Anda Telah Keluar!" << endl;
				cout << "Terimakasih :)" << endl;
				break;
		}
		
		cout << endl;
		if(pilih != 4)
		{
			cout << "Hasil Sorting : " << endl;
			for(int i = 0; i < length; i++)
			{
				cout << array[i] << " ";
			}
			cout << endl << endl;

			cout << "Kembali Ke Menu ? (y/n) : ";
			cin >> quest;
			cout << endl;
		}
		if(quest == 'n')
		{
			cout << "Anda Telah Keluar!" << endl;
			cout << "Terimakasih :)" << endl;
		}
	} while (quest == 'y');
	
	cin.get();
	return 0;
}
