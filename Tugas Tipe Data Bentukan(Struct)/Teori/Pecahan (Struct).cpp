#include<iostream>
#include<string>

using namespace std;

struct pecahan
{
	int pemb, peny;
};

int main()
{
	pecahan pec1;
	pecahan pec2;
	pecahan pec3;
	char operate;
	
	cout << "Pecahan 1" << endl;
	cout << "Input Pembilang : "; cin >> pec1.pemb;
	cout << "input Penyebut : "; cin >> pec1.peny;
	
	cout << endl;
	cout << "(+) " << "(-) " << "(*) " << "(/)" << endl;
	cout << "Pilih Opertor : "; cin >> operate;
	
	cout << endl;
	cout << "Pecahan 2" << endl;
	cout << "Input Pembilang : "; cin >> pec2.pemb;
	cout << "input Penyebut : "; cin >> pec2.peny;
	
	switch(operate)
	{
		case '+':
			if(pec1.peny == pec2.peny)
			{
				pec3.pemb = pec1.pemb + pec2.pemb;
				pec3.peny = pec2.peny;
			} else
			{
				pec3.pemb = (pec1.pemb*pec2.peny) + (pec1.peny*pec2.pemb);
				pec3.peny = pec1.peny*pec2.peny;
			}
			break;
		case '-':
			if(pec1.peny == pec2.peny)
			{
				pec3.pemb = pec1.pemb - pec2.pemb;
				pec3.peny = pec2.peny;
			} else
			{
				pec3.pemb = (pec1.pemb*pec2.peny) - (pec1.peny*pec2.pemb);
				pec3.peny = pec1.peny*pec2.peny;
			}
			break;
		case '*':
			pec3.pemb = pec1.pemb*pec2.pemb;
			pec3.peny = pec1.peny*pec2.peny;
			break;
		case '/':
			pec3.pemb = pec1.pemb*pec2.peny;
			pec3.peny = pec1.peny*pec2.pemb;
			break;	
	}
	cout << endl;
	
	cout << "Operasi  : ";
	cout << "(" << pec1.pemb << "/" << pec1.peny << ")" << " " << operate << " " << "(" << pec2.pemb << "/" << pec2.peny << ")";
	
	cout << endl;
	cout << "Hasil    : " << pec3.pemb << "/" << pec3.peny;
}
