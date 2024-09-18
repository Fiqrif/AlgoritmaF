#include <iostream>
using namespace std;

int main (){
	/*int nohari;
	cout << "Masukkan nomor hari (1...7) : ";
	cin >> nohari;
	
	switch (nohari) {
		case 1 :
			cout << "Hari ke- "<<nohari<<" adalah MINGGU";
		break;
		case 2 :
			cout << "Hari ke- "<<nohari<<" adalah SENIN";
		break; 
		case 3 :
			cout << "Hari ke- "<<nohari<<" adalah SELASA";
		break; 
		case 4 :
			cout << "Hari ke- "<<nohari<<" adalah RABU";
		break;
		case 5 :
			cout << "Hari ke- "<<nohari<<" adalah KAMIS";
		break;
		case 6 :
			cout << "Hari ke- "<<nohari<<" adalah JUMAT";
		break;
		case 7 :
			cout << "Hari ke- "<<nohari<<" adalah SABTU";
		break;
	default :
		cout << "Tidak terdapat nama hari ke-" <<nohari;
	}*/
	
	
	int jarak;
	cout<< "\t Menentukan Ongkir"<<endl;
	cout<< "Masukkan Jarak : ";
	cin>>jarak;
	
	switch (jarak){
		case 1 ... 3:
			cout << "Jaraknya adalah "<<jarak<< " ongkir anda 6000";
		break;
		case 4 ... 7:
			cout << "Jaraknya adalah "<<jarak<< " ongkir anda 10000";
		break;
		case 8 ... 12:
			cout << "Jaraknya adalah "<<jarak<< " ongkir anda 12000";
		break;
		default :
			cout << "Jarak tidak diketahui";
	} 
return 0;
}
