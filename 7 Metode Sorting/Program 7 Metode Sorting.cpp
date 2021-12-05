#include<iostream>
using namespace std;

void menu()
{
	cout << "Menu Sorting :" << endl;
	cout << "1. Insertion Sort" << endl;
	cout << "2. Maximum Sort" << endl;
	cout << "3. Bubble Sort" << endl;
	cout << "4. Quick Sort" << endl;
	cout << "5. Minimum Sort" << endl;
	cout << "6. Shell Sort" << endl;
	cout << "7. Merge short" << endl;
	cout << "8. Keluar" << endl;
}

void insertion_sort(int array[], int length)
{
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
	}
}

void maximum_sort(int array[], int length, int u)
{
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
	}
}

void bubble_sort(int array[], int length)
{
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
	}
}

int partisi(int array[], int min, int max)
{
	int pivot = array[max];
	int i = (min - 1);
	
	for(int j = min; j <= max-1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			int temp;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	int temp;
	temp = array[i+1];
	array[i+1] = array[max];
	array[max] = temp;
	return (i+1);
}

void quick_sort(int array[], int min, int max)
{
	if (min < max)
	{
		int p = partisi(array, min, max);
		quick_sort(array, min, p-1);
		quick_sort(array, p+1, max);
	}
}

void minimum_sort(int array[], int length, int u)
{
	for(int i = 0; i <= length-2; i++)
	{
		int imin = 0;
		for(int j = 1; j <= u; j++)
		{
			if(array[j] > array[imin])
			{
				imin = j;
			}
		}
		int temp;
		temp = array[u];
		array[u] = array[imin];
		array[imin] = temp;
		u--;
	}
}

void shell_sort(int array[], int length)
{
	for (int i = length/2; i > 0; i=i/2)
	{
		for(int x = i; x < length; x++)
		{
			for(int y = x-i; y >= 0; y-=i)
			{
				if(array[y+i] < array[y])
				{
					int temp;
					temp = array[y+i];
					array[y+i] = array[y];
					array[y] = temp;
				}
			}
		}
	}
}

void merge(int array[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
	
    for (i = 0; i < n1; i++)
        L[i] = array[l + i];
    for (j = 0; j < n2; j++)
        R[j] = array[m + 1 + j];
	
	i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
        	i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
}
	
void mergeSort(int array[], int l, int r)
{
	if (l < r)
    {
    	int m = (l+r-1) / 2;	
		mergeSort(array, l, m);
		mergeSort(array, m + 1, r);
		merge(array, l, m, r);
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
				quick_sort(array, 0, length);
				break;
			case 5:
				minimum_sort(array, length, u);
				break;
			case 6:
				shell_sort(array, length);
				break;
			case 7:
				mergeSort(array, 0, length);
				break;
			case 8:
				cout << "Anda Telah Keluar!" << endl;
				cout << "Terimakasih :)" << endl;
				break;
		}
		
		cout << endl;
		if(pilih != 8)
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
