#include <iostream>

using namespace std;

//PROGRAM PERHITUNGAN ANGKA KELAHIRAN

//E-LEARNING DO WHILE

int main () {

//Kamus

  int i = 2016;

//ALGORITMA

do

   {

      // Kamus

       int j = 160;

       do

       {

          //OUTPUT DATA

           cout << "TAHUN : " << i << " ANGKA KELAHIRAN : " << j << endl;

           j--;

       }while(j > 151);

i--;

   }while(i > 2010);



   return 0;

}