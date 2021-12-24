#include <iostream>
using namespace std;

int main()
{
	int gundu = 100;
	int tmn_adil = 3;
	
	cout << "Adil mempunyai " << gundu << " kelereng\n";
	cout << "Adil memiliki " << tmn_adil << " orang teman\n";
	
	cout << endl;
	
	cout << "Masing-masing teman adil diberi kelereng sebanyak: " << gundu/tmn_adil << " kelereng\n";
	cout << "Adil menyimpan sisanya sebanyak: " << gundu%tmn_adil << " kelereng\n";
	
	cin.get();
	return 0;
}
