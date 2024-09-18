#include <iostream>
using namespace std;

int main (){
	
	/*int pilihan;
	int tb_laki, tb_perempuan;
	int bb_laki, bb_perempuan;
	
	
	cout << "PROGRAM HITUNG BERAT BADAN IDEAL" <<endl;
	cout << "1. Lelaki \n2. Perempuan" <<endl;
	cout << "Apa Jenis Kelamin Anda? (1/2) : "; cin >> pilihan;

	if (pilihan == 1){
		cout << "=== LELAKI ==="<<endl;
		cout << "Masukkan Tinggi Badan Anda : "; cin >> tb_laki;
		bb_laki = (tb_laki-100)-((tb_laki-100)*0.10);
		cout << "Berat Badan Ideal Anda Adalah " << bb_laki <<" Kg"; 
	}
	else if (pilihan == 2){
		cout << "=== PEREMPUAN ==="<<endl;
		cout << "Masukkan Tinggi Badan Anda : "; cin >> tb_perempuan;
		bb_perempuan = (tb_perempuan-100)-((tb_perempuan-100)*0.15);
		cout << "Berat Badan Ideal Anda Adalah " << bb_perempuan <<" Kg";
	}
	else {
		cout << "Error anda salah memilih jenis kelamin";
	}*/
	
	/*string nama;
	int nilai;
	
	cout << " == PROGRAM PEMBERIAN GRADE NILAI == "<<endl;
	cout << "Masukkan Nama : "; cin >> nama;
	cout << "Masukkan Nilai : "; cin >> nilai;
	
	if (nilai <=9){
		cout << "F Belajar Lagi "<<nama << ", Tetap Semangat!!!"; 
	}
	else if (nilai <=19){
		cout << "E Belajar Lagi "<<nama << ", Tetap Semangat!!!";
	}
	else if (nilai <=39){
		cout << "D Belajar Lagi "<<nama << ", Tetap Semangat!!!";
	}
	else if (nilai <=59){
		cout << "C Selamat "<<nama << " Nilai Cukup";
	}
	else if (nilai <=79){
		cout << "B Selamat "<<nama << " Nilai Baik";
	}
	else if (nilai <=100){
		cout << "A Selamat "<<nama << " Nilai Sempurna";
	}
	else {
		cout << "Error Masukkan Nilai 0-100";
	}*/
	
	int saldo;
	int ongkos;
	int pilihan;
	
	cout << " === PROGRAM PEMBAYARAN DAN PENGISIAN SALDO TOL === " <<endl;
	cout <<endl;
	cout << "Masukkan Saldo Anda : "; cin >> saldo;
	cout << "Masukkan Ongkos Tol : "; cin >> ongkos;
	
	if (saldo < ongkos){
		cout << "Silakan Isi Saldo Anda" <<endl;
		cout << "1. Minimarket \n2. Pos TOL" <<endl;
		cout << "Pilih Isi Saldo (1/2) : "; cin >> pilihan;
		if (pilihan == 1){
			cout << "Pengsisian Saldo Telah Selesai di Minimarket, Silakan Lanjutkan Pembayaran";
		}
		else if (pilihan == 2){
			cout << "Pengisian Saldo Telah Selesai di Pos Tol, Silakan Lanjutkan Pembayaran";
		}
		else {
			cout << "Saldo Anda Belum Terisi, Pilih Tempat Pengisian Saldo";
		}
		
	}
	else {
		cout << "Pembayaran Selesai Dilakukan, Dapat Melanjutkan Perjalanan";
	}

return 0;
} 
