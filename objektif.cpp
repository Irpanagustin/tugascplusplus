#include <iostream>
using namespace std;

//I.S program menunggu masukan angka
//F.S program menampilkan angka yang sudah diproses

int main (){
	//kamus
	int jmlmhs = 0, mhsl = 0, mhstl =0;
	//jmlmhs = Jumlah Mahasiswa, mhsl = Mahasiswa Lulus, mhstl = Mahasiswa Tidak Lulus
	float IP, total = 0, rata;
	cout << "masukan nilai IP: ";
	cin >> IP;
	while(IP > -999){
		if(IP>0 && IP<=4){
			jmlmhs++;
			total = total + IP;
			if(IP>=2.75){
				mhsl++;
			}else{
				mhstl++;
			}
		}
		cout << "masukan nilai IP: ";
		cin>> IP;
		
	}

	
	
	cout << endl;
	cout << "Jumlah Mahasiswa = " <<jmlmhs << endl;
	cout << "Jumlsh Mahasiswa Lulus = " << mhsl << endl;
	cout << "Jumlah Mahasiswa Tidak Lulus = " << mhstl << endl;
	rata = total / jmlmhs;
	cout << "rata - rata IP = " << rata;
	return 0;
}