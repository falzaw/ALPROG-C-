#include <iostream>
using namespace std;

int main(){
	int umur;
	
	
	cout<<"Masukkan umur";
	cin>>umur;
	
	if (umur >=0 && umur <=1){
		cout<<"Bayi";
	}else if (umur >1 && umur <=3){
		cout<<"Batita";
	}else if (umur >3 && umur <=5){
		cout<<"Anak-anak";
	}else if (umur >5 && umur <=12){
		cout<<"Remaja";
	}else if (umur >12 && umur <=17){
		cout<<"Remaja";
	}else if (umur >17 && umur <=30){
		cout<<"Pemuda";
	}else if (umur >30 && umur <=60){
		cout<<"Dewasa";
	}else if (umur>60){
		cout<<"Lansia";
	}else if (umur <0){
		cout<<"Invalid";
	}
	return 0;
}
