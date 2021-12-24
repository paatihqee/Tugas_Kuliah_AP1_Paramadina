#include <iostream>
#include <iomanip>
using namespace std;

void sblm_convert(char pw[], int length)
{
    cout << "Sebelum konversi : ";
    for (int i = 0; i < length; i++)
    {
        cout << pw[i];
    }
}

void converter_pw(char pw[], int length)
{
    cout << "Sesudah konversi : ";
    for(int i = 0; i < length; i++)
    {
        if(pw[i] == 'A' || pw[i] == 'a' || pw[i] == 'I' || pw[i] == 'i' || pw[i] == 'U' || pw[i] == 'u' || pw[i] == 'E' || pw[i] == 'e' || pw[i] == 'O' || pw[i] == 'o')
        {
            pw[i] = '0';
        } else
        {
            pw[i] = '1';
        }
        cout << pw[i];
    }
}


int main()
{
    int length;
    cout << "= = = = = PROGRAM KONVERSI PASSWORD = = = = =" << endl;
    cout << endl;
    
    cout << "Note: 1. Input panjang karakter terlebih dahulu" << endl;
    cout << "      2. Input password anda per karakter!" << endl;
    cout << "      3. Akhiri input dengan tanda titik(.)" << endl;
    cout << endl;
    
    cout << "Input panjang karakter untuk password anda : ";
    cin >> length;
    char pw[length];
    for (int i = 0; i < length; i++)
    {
        cout << "Input karakter : ";
        cin >> pw[i];
    }
    cout << endl;
    
    sblm_convert(pw, length);
    cout << endl;
    converter_pw(pw, length);
    
    return 0;
}
