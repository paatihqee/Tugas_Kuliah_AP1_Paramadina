#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Masukan panjang pola: ";
	cin >> n;

	cout << "\nPola 1\n";

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << " *" ;
		}
		cout << endl;
	}

	cout << "\nPola 2\n";

	for(int i = 1; i <= n; i++){
		for(int j = n; j >= i; j--){
			cout << " *" ;
		}
		cout << endl;
	}
	
	cin.get();
	return 0;
}
