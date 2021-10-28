#include<iostream>

using namespace std;

int main(){
	char huruf[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int i,j;
	
	for (i=0; i < 26; i++)
	{
		cout<<"";
		for (j=i; j < 26; j++)
		{
			cout<<huruf[j]<<" ";
		} cout<<"\n\n";
	}
	cin.get();
	return 0;
}
