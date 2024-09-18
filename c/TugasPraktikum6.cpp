#include <iostream>
using namespace std;

int main (){
	
	cout << "===== 2318072 || MUHAMAD FIQRI FIRMANSYAH =====";
	cout <<endl <<endl;
	
	int a, b;
	cout << "Masukkan Nilai Kelipatan : "; cin >> a;
	cout << "Masukkan Nilai Akhir : "; cin >> b;
	cout <<endl;
	
	cout << "----- Hasil Output -----";
	cout <<endl <<endl;
	
	int n=1;
	while (n<=b){
		if(n%a==0){
			cout << '*';
		}
		else {
			cout << n;
		}
	cout << " ";	
	n++;
	}
	
	
	/*cout << "\tKONVERSI JAM"<<endl<<endl;

	int jam = 1, menit, detik;
	
	do {
		menit = jam*60;
		detik = menit*60;
		cout << jam << " Jam "<< menit << " Menit "<< detik << " Detik " <<endl;
		jam+=1;
	}
	while (jam<=10);*/
	
	/*int a = 1, n;
	int nilai, total, rata;
	
	cout << "===== MENGHITUNG RATA-RATA ====="<<endl;
	cout <<endl;
	
	cout << "Masukkan Jumlah Mahasiswa : "; cin >> n;
	cout <<endl;
	
	while (a<=n){
		cout << "Masukkan Nilai Mahasiswa ke-"<<a<<" : "; cin >> nilai;
		a++;
		total += nilai;
	}
	cout <<endl;
	cout <<"==================================="<<endl;
	cout <<endl;
	
	rata = total/n;
	cout << "Nilai Rata-ratanya Adalah : "<<rata;*/
	
return 0;
}
