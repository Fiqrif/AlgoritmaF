#include <iostream>
using namespace std;

int main(){
	/*int n;
	cout << "Masukkan Banyak Array : "; cin >> n;
	cout <<endl;
	int data[n];
	int a;  // mingisikan nilai ke dalam element array
	
	for(a=1;a<=n;a++){
		cout<<"MASUKKAN NILAI ARRAY ("<<a<<") = "; cin >> data[a];
	}
	cout<<endl;

	cout << "Menampilkan data Array diatas"<<endl<<endl;
	
	for(int b=1;b<=n;b++){
		cout<<"DATA NILAI ARRAY ("<<b<<") = "<<data[b]<<endl;
	}*/
	
    /*string a;
    cout<<"Masukan string = ";cin>>a;
    cout<<endl;
    for(int b=0;b<a.length();b++){
    	cout<<"string index ke-"<<b<<" = "<<a[b]<<endl;
    }*/
    
    //########################################################
    
    cout << "\tProgram Menambahkan Array"<<endl;
    
    int n;
	cout << "Masukkan Banyak Data : "; cin >> n;
	cout <<endl;
	int data[n];
	int a;  // mingisikan nilai ke dalam element array
	
	for(a=0;a<n;a++){
		cout<<"Masukkan Angka ke-"<<a+1<<" = "; cin >> data[a];
	}
	cout<<endl;
	
	cout << "--------------------------------"<<endl;
	cout << "Array sebelum ditambahkan"<<endl;
	cout << "[";
	for(int b=0;b<n;b++){
		cout<<data[b] << ",";
	}
	cout << "]";
	cout << endl;
	cout << "--------------------------------"<<endl;
	
	cout << "Array setelah ditambahkan"<<endl;
	cout << "[";
	for(int c=0;c<n;c++){
		data[c]+=data [c-1];
	}
	for(int c=0;c<n;c++){
		cout<<data[c] << ",";
	}
	cout << "]";
	
	/*int n;
	cout << "Masukkan Banyak Data : "; cin >> n;
	
	int data[n];
	int a;
	int total=0, ntinggi=0, nrendah=1000, rata;
	for (a=0; a<n; a++){
		cout<<"Tinggi Mahasiswa ke-"<<a+1<<" = "; cin >> data[a];
			total=total+data[a];
			if (ntinggi<data[a]){
			ntinggi=data[a];
			}
			if (nrendah>data[a]) {
			nrendah=data[a];
			}
	}
	cout <<endl<<endl;
	
	cout << "Data Tinggi Mahasiswa Semester 1"<<endl<<endl;
	for(int b=0;b<n;b++){
		cout<<"Tinggi Mahasiswa ke-"<<b+1<<" = "<<data[b]<<endl;
	}
	rata = total/n;
	cout <<endl;
	cout << "Rata-ratanya adalah : "<<rata<<endl;
	cout << "Tinggi Mahasiswa Tertinggi adalah : "<<ntinggi<<endl;
	cout << "Tinggi Mahasiswa Terendah adalah : "<<nrendah<<endl;
	cout <<endl;*/
	
	int jml;
	cout << "Masukkan Banyak Data : "; cin >>jml;
	cout <<endl;
	string nama [jml];
	int point [jml];
	for (int a=0; a<jml; a++){
		cout <<"Data ke-"<<a+1<<endl;
		cout << "Masukkan Nama : "; cin>>nama[a];
		cout << "Masukkan Point : "; cin >> point[a];
		cout <<endl;
	}
	cout << "\n\nGrafik Data\n";
	cout << "-----------------\n";
	for (int b=0; b<jml ;b++){
		cout << "Data ke-"<<b+1<<" "<<nama[b]<< " : ";
		for (int c = 0; c<point[b]; c++){
			cout << "*";	
		}
	cout << endl;
	}
return 0;
}
