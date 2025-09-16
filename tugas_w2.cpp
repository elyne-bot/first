#include <iostream>
#include <iomanip> 
using namespace std;
	int main ()
	{
	int a1, a2, a3, a4, a5, a6, a7, a8, a9;
		cout<<"Masukan data matriks baris 1 (pisahkan dengan spasi): ";
		cin>>a1>>a2>>a3;
		cout<<"Masukan data matriks baris 2 (pisahkan dengan spasi): ";
		cin>>a4>>a5>>a6;
	
		cout<<"Masukan data matriks baris 3 (pisahkan dengan spasi): ";
		cin>>a7>>a8>>a9;
		cout<<endl;
		cout<<"Data yang Anda masukan: "<<endl<<endl;
		cout<<a1<<setw(10)<<a2<<setw(10)<<a3<<endl<<endl;
		cout<<a4<<setw(10)<<a5<<setw(10)<<a6<<endl<<endl;
		cout<<a7<<setw(10)<<a8<<setw(10)<<a9;
	}