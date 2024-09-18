#include <iostream>
using namespace std;

int main (){
	
	/*char i = 'A';
	while (i<='F'){
		cout << i << " ";
		i+=2;
		if (i == 'E'){
			i = 'D';
		}
	}*/
	
	/*char i = 'G';
	do {
		cout << " " << i--;
	}
	while (i>='A');*/
	
	/*int a;
	for (a=1; a<=10; a++){
		if (a==2 || a==5 || a==7){
			continue;
		}
	cout << a << " ";
	}*/
	
	/*int a=1;
	while (a<=9){
		a++;
		if (a==2 || a==5 || a==7){
			continue;
		}
		cout << a << " ";
	}*/
	
	//Latihan
	

	/*int n;
	int a = 0, b = 1, c, d=1;
	
	cout << "Deretan FIBONACI" <<endl;
	cout << "Masukkan Angka : "; cin >> n;
	
	while (d<=n){
		cout << " | "<< a << " "<< "| ";
	a=b+c;
	b=c;
	c=a;
	d++;
	}*/
	

	int a = 22;
	cout << "a.";
	while (a>=-20){
		cout << " "<<a;
		a-=5;
		if (a==7){
			a-=7;
		}
	}
	cout <<endl;
	
	char b = 'F';
	cout << "b.";
	while (b<='R'){
		cout << " "<<b;
	b++;
	b+=2;
	}
	cout <<endl;
	
	char c = 'Y';
	cout << "c. ";
	while (c>='E'){
		cout << c << " "<< "\n";
		cout << "   ";
	c-=5;
	}
	cout <<endl;
	
	int d = 4;
	int g = 1;
	char h = 'd';	
	cout << "d. ";
	while (d <= 14){
		cout << d <<" "<< h <<" ";
		d+=g;
		h+=g;
		g++; 
	}
	cout <<endl;
	
	int e = -20;
	cout << "e. ";
	while (e <= 13){
	e+=3;
	if (e==-20 || e==-14 || e==-8 || e==-2 || e==1 || e==4 || e==10 || e==16){
		continue;
	}
	cout << e << " ";
	}
	cout <<endl;
	
	char f = 'K';
	int i = 4;
	int j = 2;
	int k = 1;
	cout << "f. ";
	while (i<=14){
		cout << f << " " << i << " ";
		f-=j;
		i+=k;
		k++;
	}
	
return 0;
}
