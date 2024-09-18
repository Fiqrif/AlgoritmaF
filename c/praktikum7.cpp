#include <iostream>
using namespace std;

int main (){
	/*int x, y;
	for (x=1;x<=5;x++){//baris 
		for (y=5;y<=x;y++){//kolom
			cout << x;
		}
		cout << endl;
		}*/
	
	//a	
	cout << "a.\t";
	char a, b;
	for (a='E';a>='A';a--){
		for (b='E';b>=a;b--){
			cout << b;
		}
		cout << endl;
		cout <<"\t";
	}
	
	//b	
    cout << endl;
    cout << "b.\t";
    int n = 5;
    for (int i = n; i >= 1; i--) {
    	for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
    for (int j = i; j <= 2 * i-1; j++) {
        cout << i << " ";
    }
    cout << endl;
    cout <<"\t";
    }
    
    //c
    cout << endl;
    cout << "c.\t";
    int baris=5, kolom=5;
    for (int i = 1; i <= baris; i++){
    	for (int j = 1; j <= kolom; j++){
    		if(i == 1 || i == baris || j==1 || j == kolom)
    		  cout<<"* ";                
    	    else
    	      cout<<"  "; 
       }
       cout << endl;
       cout <<"\t";
	}
	
	//d
	cout << endl;
	cout << "d.\t";
    int m = 4; int hitung = 1; baris = 1;
    while (baris <= m) { 
		kolom = 1;
		while (kolom <= baris) { 
			cout << hitung << " "; 
			++hitung;
			++kolom;
		}
		cout << endl;
		++baris;
		cout <<"\t";
	}
		
	/*cout << "Opsi 1\n";
	for (int a=1, x=1; a<=5;a++,x+=2){
		for (int b=5;b>a;b--)cout << "   ";
		for (int c=1;c<=x;c++)cout << " * ";
		cout <<endl;
	}
	
	cout << "Opsi 2\n";
	for (int a=1, x=1; a<=5;a++,x+=2){
		for (int b=5;b>a;b--)cout << "   ";
		for (int c=1;c<=x;c++)cout << " "<<x<<" ";
		cout <<endl;
	}*/
		
	/*int c=5;
	for (int i = c; i >= 1; i--){
		for (int j = 0; j < c - i; j++)
			cout << "  ";
		for (int j = 1; j<=2*i-1; j++)
			cout <<i<< " ";
		cout <<endl; 
	}*/
return 0;	
}
