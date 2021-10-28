#include <iostream>

using namespace std;

int main()
{
	float x = 1;
	float y = 0;
	float z = 0;
	char ready;
	
	cout << "Menghitung Hasil Dari S" << endl;
	cout << "\nS = 1 - (1/2) + (1/3) - (1/4) + ... + (1/999) - (1/1000) = ?" << endl;
	cout << "\nAre You Ready? "; cin>>ready;
	
	for (int i = 1; i <= 1000; i++){
		
		if (i % 2){
			y += + (1 / x);
			
		} else{
			y += - (1 / x);
			
		} y = z + y;
		x++;
	} cout << "\nS = " << y << endl;
}
