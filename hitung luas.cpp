#include <iostream>
using namespace std;

int main(){
	int pilihan;
	int a;
	int t;
	int p;
	int l;
	int luas;
	
	cout<<"1. hitung luas persegi\n";
	cout<<"2. hitung luas segitiga\n";
	cin>>pilihan;
	
	switch(pilihan){
		case 1:
			cout<<"masukkan a";
			cin>>a;
			cout<<"masukkan t";
			cin>>t;
			cout<<0.5*a*t<<"cm^2";
			break;
		case 2:
			cout<<"masukkan p";
			cin>>p;
			cout<<"masukkan l";
			cin>>l;
			cout<<p*l<<"cm^2";
			break;
		default :
			cout<<"input salah";
	}
}
