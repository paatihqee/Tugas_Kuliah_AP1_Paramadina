#include<iostream>

using namespace std;

int main()
{
	int num;
	cout<<"menghitung faktorial dari: "; cin>>num;
	cout<<num<<"! = ";
	int result=1;
	int a=1;
	do{
		result=result*num;
		if(num != a){
			cout<<num<<" x ";
		} else {
			cout<<num<<" = ";
		}
		num--;
	}while(num>=a);
	cout<<result;
	
	return 0;
}
