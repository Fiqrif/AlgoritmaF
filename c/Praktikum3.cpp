#include <iostream>
using namespace std;

int main (){
	
	/*int	usia;
	cout << "Berapa usia Anda : ";
	cin >> usia;
	if (usia < 17){
		cout<<"Anda belum memenuhi syarat mengendarai kendaraan";
	}*/
	
	/*int bilangan;
	char huruf;
	
	cout <<"Masukkan sebuah bilangan bulat : ";
	cin >> bilangan;
	
	if ((bilangan >0) && (bilangan <10)){
		cout << bilangan << " lebih besar dari nol " << bilangan << " dan lebih kecil dari sepuluh";
	}
	
	cout <<endl <<endl;
	
	cout << "Masukkan Sebuah Huruf : ";
	cin >> huruf;
	if ((huruf == 'A') || (huruf == 'a') ||
	    (huruf == 'I') || (huruf == 'i') ||
		(huruf == 'U') || (huruf == 'u') ||
		(huruf == 'E') || (huruf == 'e') ||
		(huruf == 'O') || (huruf == 'o'))
		{
			cout << huruf << " adalah salah satu huruf vokal";
			
		}*/
	
	
	/*int n;
	cout << "Masukkan Nilai Anda : ";
	cin >> n;
	
	if (n >=60){
		cout << "Anda Lulus";
	}
	else {
		cout << "Anda Tidak Lulus";
	}*/
	
	int bil;
	cout << "Masukkan sebuah bilangan bulat : ";
	cin >> bil;
	
	if (bil > 0){
		cout << bil << " adalah bilangan POSITIF";
	}
	else if (bil < 0){
		cout << bil << " adalah bilangan NEGATIF";
	}
	else {
		cout << "Anda memasukkan bilangan NOL";
	}
	return 0;
}
