#include <iostream>
using namespace std;

int main(){
	
	/*int pilihan;
	float harga;
	int lama;
	float tagihan;
	float pajak;
	float total;
	float pajak_kamar;
	
	cout << "==== Pemesanan Kamar HOTEL ANONIM ===="<<endl;
	cout << " 1. Standart Room\n 2. Superior Room\n 3. Deluxe Room\n 4. Suite Room\n 5. Singgle Room"<<endl;
	cout <<endl;
	
	cout << "Masukkan Pilihan Kamar Anda = "; cin >> pilihan;
	switch (pilihan){
		case 1 :
			cout << "Standart Room";
			harga = 150000;
		break;
		case 2 :
			cout << "Superior Room";
			harga = 490000;
		break;
		case 3 :
			cout << "Deluxe Room";
			harga = 750000;
		break;
		case 4 :
			cout << "Suite Room";
			harga = 1550000;
		break;
		case 5 :
			cout << "Singgle Room";
			harga = 700000;
		break;
		default :
			cout << "Pesanan Error";
	exit(0);
	}
	cout << " Rp. "<<harga<<" /Hari"<<endl;
	cout << "Berapa Lama = "; cin >> lama;
	cout <<endl;
	
	cout << "RINCIAN TAGIHAN"<<endl;
	cout << "Durasi Penyewaan : "<<lama<<" Hari"<<endl;
	tagihan = harga*lama;
	cout << "Tagihan Kamar : Rp. " <<tagihan<<endl;
	pajak = tagihan*0.1;
	cout << "Pajak : Rp. " <<pajak<< " (10%)"<<endl;
	pajak_kamar = harga*0.1;
	total = lama*(harga+pajak_kamar);
	cout << "Total Tagihan Kamar : Rp. "<<total<<endl;*/
	
	/*int pilihan;
	float harga;
	float nominal;
	float total;
	
	cout << "=== Mini Pertamino ==="<<endl;
	cout << "1. Petromax Turbo \n2. Petromax \n3. Petrolute"<<endl;
	cout << "Masukkan Pilihan Anda : "; cin >> pilihan;
	switch (pilihan){
		case 1 :
			cout << "Petromax Turbo";
			harga = 25000;
		break;
		case 2 :
			cout << "Petromax";
			harga = 18000;
		break;
		case 3 :
			cout << "Petrolute";
			harga = 14000;
		break;
		default :
			cout << "Pilihan Tidak Tersedia"<<endl;
	exit (0);
	}
	cout << " Harga : "<<harga<<" /Liter"<<endl;
	cout<<endl;
	
	cout << "Masukkan Nominal Yang Anda Inginkan : "; cin >> nominal;
	total = nominal/harga;
	cout << "Total Yang Anda Dapatkan : "<<total<< " Liter";*/
	
	int menu;
	int sambal;
	float harga;
	int porsi;
	float total;
	float pembayaran;
	float kembalian;
	
	cout << "==== Menu Warunk Kconk ==="<<endl;
	cout << "1. Ayam Geprek+Nasi \n2. Ayam Bakar+Nasi \n3. Ayam Laos+Nasi"<<endl;
	cout << "Pilihan Menu : "; cin >> menu;
	cout <<endl;
	cout << "1. Sambal Hijau \n2. Sambal Tomat \n3. Sambal Garam"<<endl;
	cout << "Pilihan Sambal : "; cin >> sambal;
	cout <<endl;
	
	switch (menu){
		case 1 :
			cout << "Ayam Geprek+Nasi ";
			harga = 10000;
		break;
		case 2 :
			cout << "Ayam Bakar+Nasi ";
			harga = 10000;
		break;
		case 3 :
			cout << "Ayam Laos+Nasi ";
			harga = 10000;
		break;
	default :
		cout << "Menu Tidak Tersedia";
	exit(0);
	}
	switch (sambal){
		case 1 :
			cout << " Sambal Hijau";
		break;
		case 2 :
			cout << " Sambal Tomat";
		break;
		case 3 :
			cout << " Sambal Garam";
		break;
	default :
		cout << "Sambal TidaK Tersedia";
	exit (0);
	}
	cout <<endl;
	cout << "Dengan Harga "<<harga<<endl;
	cout <<endl;
	
	cout << "Masukkan Berapa Porsi : "; cin >> porsi; 
	cout <<endl;
	
	cout << "=== Rincian Pemesanan ==="<<endl;
	cout << "Porsi Yang Anda Pesan : "<<porsi<<endl;
	total = porsi*harga;
	cout << "Total Yang Harus Dibayar : Rp. "<<total<<endl;
	cout << "Pembayaran : "; cin >> pembayaran;
	kembalian = pembayaran-total;
	cout << "Kembalian : Rp. "<<kembalian<<endl;
	cout <<endl;
	
	cout << "\tSelamat Makan:)";
return 0;
}
