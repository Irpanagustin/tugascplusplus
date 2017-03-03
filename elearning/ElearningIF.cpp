#include <iostream>

using namespace std;



//Tugas e-learning



//Kamus



int main() {



  int a, b;

  cout << "!!----Pengukuran Berat Badan----!!" << endl;

  cout << "1. Pria" << endl;

  cout << "2. Wanita" << endl;

  cout << "Masukan pilihan :" ;

  cin >> a;

  cout << "Masukan berat badan :" ;

  cin >> b;



  if (a == 1) {

    if (b >= 65 ) { cout << "--Normal--" << endl;}

    else { cout << "--Kurus--" << endl;}

    }

  if (a == 2) {

    if (b >= 55 ) { cout << "--Normal--" << endl;}

    else { cout << "--Kurus--" << endl;}

    }

return 0;



}