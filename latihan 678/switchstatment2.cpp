#include <iostream>

using namespace std;

// Program switch statmenet

//I.S Program menunggu memasukan data

//F.S Program menampilkan Data sesuai operasi logika



int main () {

	//Kamus

	int nilai;



	//Program memasukan nilai

	cout << "Masukan Nilai RAPORT: ";

	cin >> nilai; //menginput ke "nilai"



	//Tugas Pemilihan

	switch (nilai) {

	case 7: cout << "Kurang" << endl;

		break;

	

	case 8: cout << "cukup" << endl;

		break;

	

	case 9: cout << "Bagus" << endl;

		break;

	

	case 10: cout << "Sangatbagus" << endl;

		break;

	//Bila tidak ada yang cocok

	default : cout << "Tidak ada nilai" << endl;

}

	//Akhir Program

	return 0;

}