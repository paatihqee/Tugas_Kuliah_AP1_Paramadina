#include<iostream>
#include<string>
using namespace std;

struct pst
{
    string nama;
    int nil1, nil2, nil3;
};

float* averageNil(float nilx[], pst peserta[])
{
    for(int i = 0; i < 3; i++)
    {
        nilx[i] = (0.2*peserta[i].nil1) + (0.3*peserta[i].nil2) + (0.5*peserta[i].nil3);
    }
    
    return nilx;
}

void champions(string juara[], float nilx[], pst peserta[])
{
    averageNil(nilx, peserta);
    cout << "Rekap Nilai Peserta" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "Nilai dari " << peserta[i].nama << " : " << nilx[i] << endl;
    }
    cout << endl;
    cout << "Penetapan Juara" << endl;
    if(nilx[0] > nilx[1])
    {
       if(nilx[1] > nilx[2])
       {
           cout << juara[0] << " : " << peserta[0].nama << endl;
           cout << juara[1] << " : " << peserta[1].nama << endl;
           cout << juara[2] << " : " << peserta[2].nama << endl;
       } else if(nilx[1] < nilx[2])
       {
           if(nilx[0] > nilx[1])
           {
               cout << juara[0] << " : " << peserta[0].nama << endl;
               cout << juara[1] << " : " << peserta[2].nama << endl;
               cout << juara[2] << " : " << peserta[1].nama << endl;
           } else if(nilx[0] < nilx[1])
           {
               cout << juara[0] << " : " << peserta[2].nama << endl;
               cout << juara[1] << " : " << peserta[0].nama << endl;
               cout << juara[2] << " : " << peserta[1].nama << endl;
           }
       }
    } else if(nilx[0] < nilx[1])
    {
        if(nilx[0] > nilx[2])
        {
            cout << juara[0] << " : " << peserta[1].nama << endl;
            cout << juara[1] << " : " << peserta[0].nama << endl;
            cout << juara[2] << " : " << peserta[2].nama << endl;
        } else if(nilx[0] < nilx[2])
        {
            if(nilx[1] > nilx[2])
            {
                cout << juara[0] << " : " << peserta[1].nama << endl;
                cout << juara[1] << " : " << peserta[2].nama << endl;
                cout << juara[2] << " : " << peserta[0].nama << endl;
            } else if(nilx[1] < nilx[2])
            {
                cout << juara[0] << " : " << peserta[2].nama << endl;
                cout << juara[1] << " : " << peserta[1].nama << endl;
                cout << juara[2] << " : " << peserta[0].nama << endl;
            }
        }
    }
}

int main()
{
    cout << "= = = = = DATA HASIL LOMBA DAN PENENTUAN JUARA = = = = =" << endl;
    cout << endl;
    cout << "Tersisa 3 Peserta Pada Putaran Akhir" << endl;
    cout << endl;

    pst peserta[3]; //3 peserta
    float nilx[3];
    string juara[3] = {"Juara 1", "Juara 2", "Juara 3"};
    cout << endl;
    
    cout << "Input Perolehan Nilai" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "Nama Peserta  : "; cin >> peserta[i].nama;
        cout << "Nilai Tahap 1 : "; cin >> peserta[i].nil1;
        cout << "Nilai Tahap 2 : "; cin >> peserta[i].nil2;
        cout << "Nilai Final   : "; cin >> peserta[i].nil3;
        cout << endl;
    }
    averageNil(nilx, peserta);
    champions(juara, nilx, peserta);
    
    return 0;
}
