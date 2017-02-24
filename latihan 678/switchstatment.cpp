#include <iostream>

using namespace std;

// Program Switch Statment

//I.S Program menunggu memasukan data

//F.S Program menampilkan Data sesuai operasi logika



int main () {

	//Kamus

	char nama;



	//Menampilkan Pertanyaan untuk di isi

	cout << "Masukan Alfabet awal nama anda: ";

	cin >> nama; //Input data ke "nama"



	//Tugas Pemilihan

	switch (nama) {

	case 'D' : cout << "nama saya Dimas" << endl;

		break;

	

	case 'K' : cout << "nama saya Kenzie" << endl;

		break;

	

	case 'M' : cout << "nama saya Mira" << endl;

		break;

	

	case 'A' : cout << "nama saya Azis" << endl;

		break;

	//Bila tidak ada yang cocok

	default : cout << "Tidak ada nama" << endl;

}

	//Akhir Program

	return 0;

}