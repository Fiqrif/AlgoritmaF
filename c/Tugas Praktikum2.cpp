#include <iostream>
using namespace std;
#define phi 3.14

int main () {
	
	/*cout << "........................................" <<endl;
	cout << " \tProgram Menghitung Volume" <<endl;
	cout << " \t  Bola & Setengah Bola" <<endl;
	cout << "........................................" <<endl;
	cout <<endl;
	
	int r;
	float a;
	float b;
	
	cout << "Masukkan Jari-Jari Bola = "; cin>>r;
	cout <<endl;
	
	a = 4 * phi * r * r;
	cout << "Volume Bola = " <<a <<" cm"<<endl; 
	cout <<endl;
	
	b = 2 * phi * r * r;
	cout << "Volume Setengah Bola = " <<b <<" cm"<<endl;
	cout << endl;*/
	
	/*int c, f;
	float r, k;
	
	cout << "\t---------------------------" <<endl;
	cout << "\t   PROGRAM KONVERSI SUHU" <<endl;
	cout << "\t---------------------------" <<endl;
	
	cout << "Masukkan suhu (Celcius) = "; cin>>c; 
	cout <<endl;
	f = (9.0/5.0)*c + 32;
	cout << "Jadi,\t"<< c <<" derajat Celcius = " << f <<" derajat Fahrenheit" <<endl;
	
	r = 4.0/9.0*(f - 32);
	cout <<"\t" << f << " derajat Fahrenheit = " << r << " derajat Reamur" <<endl;
	
	k = 5.0/4.0*r + 273;
	cout <<"\t" << r << " derajat Reamur = " << k << " derajat Kelvin" <<endl;*/
	
	cout << "\t***************************" <<endl;
	cout << "\t PROGRAM MENGHITUNG VOLUME" <<endl;
	cout << "\t***************************" <<endl;
	
	cout << "\t--------------" <<endl;
	cout << "\t Volume Balok" <<endl;
	cout << "\t--------------" <<endl;
	cout << endl;
	int p, l, t;
	int vb;
	
	cout << "Masukkan Panjang = "; cin>>p;
	cout << "Masukkan Lebar = "; cin>>l;
	cout << "Masukkan Tinggi = "; cin>>t;
	cout <<endl;
	
	vb = p*l*t;
	cout << "Volume Balok Adalah = " <<vb; 
	cout <<endl;
	
	cout <<endl;
	cout << "\t----------------" <<endl;
	cout << "\t  Volume Kubus" <<endl;
	cout << "\t----------------" <<endl;
	cout <<endl;
	int s;
	int vk;
	
	cout << "Masukkan Sisi = "; cin>>s;
	cout <<endl;
	
	vk=s*s*s;
	cout << "Volume Kubus Adalah = " <<vk;
	cout <<endl;
	
	cout <<endl;
	cout << "\t-------------------------------" <<endl;
	cout << "\t Volume Bola dan Setengah Bola" <<endl;
	cout << "\t-------------------------------" <<endl;
	cout <<endl;
	int r;
	float a;
	float b;
	
	cout << "Masukkan Jari-Jari Bola = "; cin>>r;
	cout <<endl;
	
	a = 4 * phi * r * r;
	cout << "Volume Bola = " <<a <<" cm"<<endl; 
	cout <<endl;
	
	b = 2 * phi * r * r;
	cout << "Volume Setengah Bola = " <<b <<" cm"<<endl;
	cout << endl;
return 0;
}
