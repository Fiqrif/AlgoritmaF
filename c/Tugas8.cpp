#include <iostream>
using namespace std;

/*int vprismasgtg (int t, int la){
	int vol1;
	vol1 = la*t;
	return vol1;
}
int vlimassgempat (int t2, int la2){
	int vol2;
	vol2 = la2*t2;
	return vol2;
}

int vtabung (int t3, int la3){
	int vol3;
	vol3 = la3*t3;
	return vol3;
}

int vlimassgtg (int t4, int la4){
	int vol4;
	vol4 = la4*t4;
	return vol4;
}*/

void kotak(int x) {
    for (int b = 1; b <= x; b++){
        for (int a = 1; a <= x; a++){
            if(b == 1 || b == x || a == 1 || a == x)
                cout << x << "  ";
            else
                cout << "   ";
        }
        cout << endl;
    }
}

/*void gajipbulan (int gaji, int bulan, int total){
	total = gaji*bulan;
	cout << "Total Gaji Anda : "<<total;
}*/

int main (){
	/*int pilihan;
	char ulang;
	
	do{
	cout << "==== MENCARI VOLUME BANGUM RUANG ===="<<endl<<endl;
	cout << "[1] Prisma segitiga\n";
	cout << "[2] Limas Segiempat\n";
	cout << "[3] Tabung\n";
	cout << "[4] Limas Segitiga\n";
	cout << "[5] EXIT\n";
	cout << "Pilih Perhitungan : "; cin >> pilihan;
	cout << "-------------------------------------"<<endl;
	
	
	switch (pilihan){
		case 1 : 
			int la1, t1;
			cout << "Masukkan Luas Alas : ";cin >> la1;
			cout << "Masukkan Tinggi : "; cin >> t1;
			cout << "Volume : "<<vprismasgtg(la1,t1);
		break;
		
		case 2 : 
			int la2, t2;
			cout << "Masukkan Luas Alas : ";cin >> la2;
			cout << "Masukkan Tinggi : "; cin >> t2;
			cout << "Volume : "<<vlimassgempat(la2,t2);
		break;
		
		case 3 : 
			int la3, t3;
			cout << "Masukkan Luas Alas : ";cin >> la3;
			cout << "Masukkan Tinggi : "; cin >> t3;
			cout << "Volume : "<<vtabung(la3,t3);
		break;
		
		case 4 : 
			int la4, t4;
			cout << "Masukkan Luas Alas : ";cin >> la4;
			cout << "Masukkan Tinggi : "; cin >> t4;
			cout << "Volume : "<<vlimassgtg(la4,t4);
		break;
		
		case 5 :
			cout << "TERIMA KASIH";
		break;
		}
	}
	while (pilihan>5);*/

	int s;
	cout << "Masukkan jumlah sisi : "; cin >> s;
	kotak(s);

	/*int gaji, bulan, total;
	cout << "=== PROGRAM MENGHITUNG GAJI ==="<<endl;
	cout <<endl;
	cout << "Masukkan Gaji Anda : "; cin>>gaji;
	cout << "Masukkan Berapa Bulan? : "; cin>>bulan;
	gajipbulan (gaji, bulan, total);*/
return 0;
}
