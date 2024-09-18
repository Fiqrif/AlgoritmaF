#include <iostream>
using namespace std;

void garis(){
	cout << "======================================\n";
}

void mahasiswa(int jml, int nim[], string nama[], int nilai[]){
	for (int a=0; a<jml; a++){
		cout << "Mahasiswa Ke-"<<a+1<<endl;
		cout << "Masukkan Nama : "; cin >> nama[a];
		cout << "Masukkan NIM : "; cin >> nim[a];
		cout << "Masukkan Nilai : "; cin >> nilai[a];
		cout << endl;
	}
}

void data(int jml, int nim[], string nama[], int nilai[]){
	char grade;
	for (int b=0; b<jml; b++){
		if (nilai[b]<=100){
			grade = 'A';
		}
		else if (nilai[b]<=85){
			grade = 'B';
		}
		else if (nilai[b]<=65){
			grade = 'C';
		}
		else if (nilai[b]<=45){
			grade = 'D';
		}
		else {
			grade = 'E';
		}
		cout << b+1 << "\t" << nim[b] << "\t" << nama[b] << "\t" << nilai[b] << "\t" << grade<<endl;
	}
}

int main(){
	/*int jml;
	cout << "Masukkan Jumlah Mahasiswa : "; cin >> jml;
	garis();
	int nilai[jml], nim[jml];
	string nama[jml];
	mahasiswa(jml, nim, nama, nilai);
	cout <<endl;
	cout << "\tDAFTAR NILAI MAHASISWA"<<endl<<endl;
	garis();
	cout << "NO\tNIM\tNAMA\tNILAI\tGRADE"<<endl;
	garis();
	data(jml, nim, nama, nilai);
	cout<<endl;
	garis();*/
	
	/*int r, p;
    cout << "Berapa Banyak Ruangan : "; cin >> r;
    cout << "Berapa Banyak Pasien setiap Ruangan : "; cin >> p;
    cout << endl;
    string nama[r][p], sttsPasien[r][p]; int s[r][p], d[r][p];
    for(int a = 0; a < r; a++) {
        cout << "Data Ruangan ke-" << a+1 << endl;
        for(int b = 0; b < p; b++) {
            cout << "Pasien ke-" << b+1 << endl;
            cout << "Nama Pasien : "; cin >> nama[a][b];
            cout << "Tekanan Darah Sistolik : "; cin >> s[a][b];
            cout << "Tekanan Darah Diastolik : "; cin >> d[a][b];
            if(s[a][b] > 140 && d[a][b] > 80) {
                sttsPasien[a][b] = "HIPERTENSI";
            } else if(s[a][b] < 90 && d[a][b] < 60) {
                sttsPasien[a][b] = "HIPOTENSI";
            } else if(s[a][b] < 140 && d[a][b] > 60) {
                sttsPasien[a][b] = "NORMAL";
            }
        }
        cout << endl;
    }
    cout << endl;

    cout << "\tOUTPUT DATA PASIEN\n";
    cout << "-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -\n";
    cout << "NO\tNAMA\t\tSISTOLIK\tDIASTOLIK\tSTATUS\n";
    cout << "-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -";
    for(int a = 0; a < r; a++) {
        cout << "\nData Ruangan ke-" << a+1 << endl;
        cout << "-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -" << endl;
        for(int b = 0; b < p; b++) {
            cout << b+1 << "\t" << nama[a][b] << "\t\t" << s[a][b] << "mmHg" << "\t\t" << d[a][b] << "mmHg" << "\t\t" << sttsPasien[a][b] << "\n";
        }
    }*/
    
    int n;
    cout << "Masukkan Banyak Mahasiswa : "; cin >> n;
    garis();
    
    int nilai[n], total=0, rata;
    for (int a=0; a<n; a++){
    	cout << "Masukkan Nilai Mahasiswa ke- "<<a+1<< " : "; cin >> nilai[a];
    	total+=nilai[a];
	}
	
	garis();
	cout <<endl;
	cout << "\tData Nilai Mahasiswa"<<endl<<endl;
	garis();
	for (int b=0; b<n; b++){
		cout << "Mahasiswa ke- "<<b+1<<" Memiliki Nilai : "<<nilai[b]<<endl;
	}
	garis();
	rata=total/n;
	cout << "Rata-ratanya Adalah : "<<rata;
return 0;
}
