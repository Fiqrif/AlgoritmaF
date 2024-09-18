#include <iostream>
using namespace std;

int main(){
    /*int n = 5;
    for (int a = 1; a <= n; a++){
        for(int b=1; b<=2*n-1; b++){
            if(a == 1 || b == a || b == (2*n-a)){
                cout << a << " ";
            }
			else{
                cout<<"  ";
            }
        }
        cout << endl;
    }*/
    
	for (int x=1; x<=5; x++){
		for (int y=1; y<= 6-x; y++){
			cout << y <<" ";
		}
		cout << endl;
	}
	for (int x=1; x<=5; x++){
		for (int y=1; y<=x; y++){
			cout << x << " ";
		}
		cout<<endl;
	}

	
	/*for (int a=1, x=1; a<=5;a++,x+=2){
		for (int b=5;b>a;b--)cout << "   ";
		for (int c=1;c<=x;c++)cout << " * ";
		cout <<endl;
	}
	cout <<"\t";
	int baris=6, kolom=6;
    for (int i = 1; i <= baris; i++){
    	for (int j = 1; j <= kolom; j++){
    		  cout<< "* ";                
       }
       cout << endl;
       cout <<"\t";
	}*/
return 0;
}
