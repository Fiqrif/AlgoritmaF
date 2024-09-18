#include <iostream>
using namespace std;

int main (){
	
	/*cout << "\t## Program Perpangkatan 3 ##"<<endl;
	
	
	int a, n;
	int b=3, total=0;
	
	cout << "Masukkan Suku ke-";
	cin >> n;
	cout <<endl;
	
	for (a = 1; a<=n; a++){
		cout << b << " ";
		b = b*3;
		total = total+b/3;
		}
		cout <<endl;
		cout <<endl;
		
		cout << "Total Semua Suku = "<< total;*/
		
	/*int pilihan, data;
	int honda, yamaha, kawasaki, ktm;
	int a, b, c, d;
	
	cout << "DATA BULANAN PENJUALAN KENDARAAN"<<endl;
	cout <<endl;
	
	cout << "1. HONDA \n2. YAMAHA \n3. KAWASAKI \n4. KTM"<<endl;
	cout << "Your Choice? : ";
	cin >> pilihan;
	cout <<endl;
	
	cout << "======================================================"<<endl;
	cout <<endl;
	
	switch (pilihan){
		case 1 :
			cout << "Input Data Kendaraan HONDA : ";
			cin >> honda;
			for (a = 1; a <= honda; a++){
				cout << "Pembeli ke - "<< a << " = ";
				cin >> data;
			}
			break;
		case 2 :
			cout << "Input Data Kendaraan YAMAHA : ";
			cin >> yamaha;
			for (b = 1; b <= yamaha; b++){
				cout << "Pembeli ke - "<< b << " = ";
				cin >> data;
			}
			break;
		case 3 :
			cout << "Input Data Kendaraan KAWASAKI : ";
			cin >> kawasaki;
			for (c = 1; c <= kawasaki; c++){
				cout << "Pembeli ke - "<< c << " = ";
				cin >> data;
			}
			break;
		case 4 :
			cout << "Input Data Kendaraan KTM : ";
			cin >> ktm;
			for (d = 1; d <= ktm; d++){
				cout << "Pembeli ke - "<< d << " = ";
				cin >> data;
			}
			break;
	}*/
	
	int pilihan;
	int genap, ganjil, prima, prima1;
	int bil;
	
	cout << "\tPROGRAM MACAM-MACAM BILANGAN"<<endl;
	cout <<endl;
	
	cout << "1. GENAP \n2. GANJIL \n3. PRIMA"<<endl;
	cout << "Masukkan Pilihan Anda = ";
	cin >> pilihan;
	cout <<endl;
	
	cout << "========================================"<<endl;
	cout <<endl;
	
	switch (pilihan){
		case 1 :
			cout << "Bilangan Genap 1-100"<<endl;
			cout <<endl;
			for (genap = 0; genap <= 100; genap+=2){
				cout << genap << " ";
			}
		break;
		case 2 :
			cout << "Bilangan Ganjil 1-100"<<endl;
			cout <<endl;
			for (ganjil = 1; ganjil <= 100; ganjil-=2){
				cout << ganjil << " ";
			}
			break;
		case 3 :
			cout << "Bilangan Prima 1-100"<<endl;
			cout <<endl;
			for (prima = 1; prima <=100; prima++){
				bil = 0;
				for (prima1 = 1; prima1<=prima; prima1++){
					if (prima%prima1==0){
						bil+=1;
					}
				}
				if (bil==2){
					cout << prima << " ";
				}
			}
			break;
	}
	
return 0;
}
