#include <iostream>
using namespace std;

typedef struct
{
	string nim;
	string nama;
	float ipk;
} mahasiswa;

int main(){
	//kamus
	int N;
	
	cout << " Masukan Berapa Banyak Nilai Siswa :  ";
	cin >> N;
	
	mahasiswa mhs[N];
	
	for (int i = 0; i<N; ++i){
	
	
	cout << " NIM Mahasiwa ke " << i+1 << " : ";
	cin >> mhs[i].nim;
	cout << " Nama Mahasiswa " << i+1 << " : ";
	cin >> mhs[i].nama;
	cout << " Nilai IPK " << i+1 << " : ";
	cin >> mhs[i].ipk;
	cout << endl;
	
		
	}
		

	
	cout << " =================================" << endl;
	cout << "|   NIM    |   Nama    |   IPK   |" <<endl;
	cout << " =================================" <<endl;
	
	for (int i = 0; i < N; ++i)
	{
		cout << "|      " << mhs[i].nim << "|      " << mhs[i].nama << "    |   "<<mhs[i].ipk <<endl;
	}
	return 0;
}