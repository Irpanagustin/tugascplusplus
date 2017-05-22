#include <iostream>
using namespace std;

int main()
{
	{{cout<<"====================================================="<<endl;
	cout<<"======Program Pencarian Data Array Sequential========"<<endl;
	
	cout<<"====================================================="<<endl<<endl;
	}}(menampilkan)
	
	int n,bil_cari,Data[10];( int =tipedatanya integer,datanya 10
	int i,ketemu;(
	
	cout<<" Inputan Jumlah Data Dalam Array:";cin>>n;cout<<endl;( menampilkankalimat,memanggil n)
	for(int c=0;c<n; c++)( untuk mengulang jika int c=0; dan c lebihkecildari n)
	{
	
	
	cout<<" Elemen Data Array Ke - "<<c<<" = ";cin>>Data[c];
	}

	i=0;
	cout<<" \n\n Inputkan Bilangan Yang Dicari = ";cin>>bil_cari;
	ketemu = 0;
	
	while((i<10)&&(ketemu==0))( mengulang jika kondsi pd While msh bnR,jika i lbih kecil dri 10,
	dan bernilai benar maka ketemu sama denagn 0)
	{
		if(Data[i] == bil_cari)( jika kondisi bernilai benar, dan data  pada i sama denagan bilangan yang dicari)
		{
			ketemu=1;(maka ketemu 1)
			cout<<" \n Pencarian Sequential "<<bil_cari<<" Ada pada indek-" <<i;(akan menampilkan pencarian sequential
			ada pada indek)
		}
		else
			i=i+1;(selain i sama dengan i tambah 1)
	}
	if(ketemu == 1)(maka ketemu 1
		cout<<"\n Data ada dalam Array"<<endl;
	else
		cout<<"\n Data tidal ada dalam Array"<<endl;
}
catatan: jika user memasukan bilangan yang dicari diluar dari elemen data array yang ada maka,
 program akan menampilkan output bahwa data tidak ada pada larik(Array).