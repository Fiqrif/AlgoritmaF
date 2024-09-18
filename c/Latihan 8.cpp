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

float vbola(float r=82, float phi=3.14){
	float vol=(4/3)*phi*r*r*r;
	return vol;
}
float vsetbola (){
	return ((1/2)*(4/3)*3.14*82*82*82);
}

int main (){
	//cout <<volume;
	
	/*cout << "Nilai yang terdapat dalam fungsi : ";
	cout << hitung();*/
	
	/*cout << hasil (3)<<endl;
	cout << hasil ("Lab. RPL")<<endl;*/
	
	cout << vbola();
	cout <<endl;
	cout << vsetbola();
return 0;
}
