#include <iostream>
using namespace std;

int main(){
	int angka[10] = {0, 1, 3, 4, 5, 6, 7, 8, 9} ,cari;
	bool ketemu;
	
	cout << "Urutan Angka = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9" << endl;
	cout << "Masukan Angka Yang dicari : ";
	cin >> cari;
	
	int i = 0;
	int j = 9;
	int k = (i+j) / 2;
	
	while ( i <= j) {
		if (angka[k] == cari){
			cout << " Data ditemukan ";
			break;
		}
		else if ( angka[k] < cari)
		{
			i = k + 1;
		} else {
			j = k - 1;
		}
		k = (i+j) / 2;
	}
	if ( i < j ){
		cout << "Data Tidak Ditemukan";
	}
	return 0;
}