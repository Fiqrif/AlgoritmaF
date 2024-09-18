#include <iostream>
using namespace std;

/*int volumebalok (int a, b, c){
	int volume;
	volume = a*b*c;
	return volume;
}*/

/*double hitung (){
	return (72*11);
}*/

/*int hasil (int x){
	int hasil;
	cin >> x;
	hasil = x+x;
	return hasil;
}
string hasil (string x){
	return x;
}*/

double vbola(double r=82, double phi=3.14){
	double vol=(4/3)*phi*r*r*r;
	return vol;
}
double vsetbola (){
	return 0.5*(4/3)*3.14*82*82*82;
}

void tampilhasil(string nama, string nim, char jk){
    cout << " ----BIODATA MAHASISWA---- \n";
    cout << " NAMA : " << nama << endl;
    cout << " NIM  : " << nim << endl;
    cout << " JENIS KELAMIN : " << jk << endl;
}

/*float hitung_fungsi(float x) {
    return 8*x*x - 3*x + 5;
}*/

int main (){
	//cout <<volume;
	
	/*cout << "Nilai yang terdapat dalam fungsi : ";
	cout << hitung();*/
	
	/*cout << hasil (3)<<endl;
	cout << hasil ("Lab. RPL")<<endl;*/
	
	int pil;
	cout << "Pilihan (1/2) : "; cin >> pil;
	switch (pil){
		case 1 : 	
			cout << "bola "<< vbola();
		break;
		case 2 :
			cout << "Setengah "<< vsetbola();
		break;
	}
	
        /*string nama, nim;
        char jk;

        cout << " ----Inputan Biodata Mahasiswa---- \n";
        cout << "NAMA : ";
        cin >> nama;
        cout << "NIM  : ";
        cin >> nim;
        cout << "JENIS KELAMIN ( P/L ): ";
        cin >> jk;
        tampilhasil(nama, nim, jk);*/

    /*float x = 72;
    cout << "Nilai fungsi f(x)=8x^2-3x+5 , x = " << x << " adalah " << hitung_fungsi(x) << endl;*/

return 0;
}
