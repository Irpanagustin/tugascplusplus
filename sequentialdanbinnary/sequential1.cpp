#include <iostream>
using namespace std;

int main()
{
	cout<<"====================================================="<<endl;
	cout<<"======Program Pencarian Data Array Sequential========"<<endl;
	
	cout<<"====================================================="<<endl<<endl;
	
	int n,bil_cari,Data[10];
	int i,ketemu;
	
	cout<<" Inputan Jumlah Data Dalam Array:";cin>>n;cout<<endl;
	for(int c=0;c<n; c++)
	{
	
	
	cout<<" Elemen Data Array Ke - "<<c<<" = ";cin>>Data[c];
	}

	i=0;
	cout<<" \n\n Inputkan Bilangan Yang Dicari = ";cin>>bil_cari;
	ketemu = 0;
	
	while((i<10)&&(ketemu==0))
	{
		if(Data[i] == bil_cari)
		{
			ketemu=1;
			cout<<" \n Pencarian Sequential "<<bil_cari<<" Ada pada indek-" <<i;
		}
		else
			i=i+1;
	}
	if(ketemu == 1)
		cout<<"\n Data ada dalam Array"<<endl;
	else
		cout<<"\n Data tidal ada dalam Array"<<endl;
}