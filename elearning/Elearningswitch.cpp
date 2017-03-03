
#include <iostream>

using namespace std;



//Tugas e-learning Nested Switch

// Program Input Data

int main () {

//Kamus

int Merk, Kualitas;

//Algoitma

//

cout << "!!--------Daftar Product Televisi--------!!" << endl;

cout << "1. Sharp" << endl;

cout << "2. Samsung" << endl;

cout << "3. Toshiba" << endl;

cout << "4. Akira" << endl;

cout << "Masukan pilihan :" ;

cin >> Merk;

//

cout << "!!-------Kualitas-------!!" << endl;

cout << "1. Kualitas Bagus" << endl;

cout << "2. Kualitas Sedang" << endl;

cout << "3. Kualitas Cukup" << endl;

cout << "4. Kualitas Standar" << endl;

cout << "Masukan pilihan :" ;

cin >> Kualitas;



switch (Merk) {

  case 1  :  cout << "--------Sharp-------" << endl;

switch (Kualitas) {

  case 1  :  cout << "Harga : Rp.4.000.000,- Keatas" << endl;break;

  case 2  :  cout << "Harga : Rp.2.500.000,- Keatas" << endl;break;

  case 3  :  cout << "Harga : Rp.2.000.000,- Keatas" << endl;break;

  case 4  :  cout << "Harga : Rp.1.500.000,- Keatas" << endl;break;

}

break;

case 2  :  cout << "-------Samsung------" << endl;

switch (Kualitas) {

  case 1  :  cout << "Harga : Rp.4.500.000,- Keatas" << endl;break;

  case 2  :  cout << "Harga : Rp.2.500.000,- Keatas" << endl;break;

  case 3  :  cout << "Harga : Rp.1.500.000,- Keatas" << endl;break;

  case 4  :  cout << "Harga : Rp.1.000.000,- Keatas" << endl;break;

}

break;

case 3  :  cout << "-------Toshiba------" << endl;

switch (Kualitas) {

  case 1  :  cout << "Harga : Rp.4.000.000,- Keatas" << endl;break;

  case 2  :  cout << "Harga : Rp.2.500.000,- Keatas" << endl;break;

  case 3  :  cout << "Harga : Rp.2.00.000,- Keatas" << endl;break;

  case 4  :  cout << "Harga : Rp.1.500.000,- Keatas" << endl;break;

}

break;

case 4  :  cout << "-------Akira------" << endl;

switch (Kualitas) {

  case 1  :  cout << "Harga : Rp.2.500.000,- Keatas" << endl;break;

  case 2  :  cout << "Harga : Rp.2.000.000,- Keatas" << endl;break;

  case 3  :  cout << "Harga : Rp.1.500.000,- Keatas" << endl;break;

  case 4  :  cout << "Harga : Rp.1.000.000,- Keatas" << endl;break;

}

break;

default : cout << "Salah Input" << endl;

}



 return 0;

}