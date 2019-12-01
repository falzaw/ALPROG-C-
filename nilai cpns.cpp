#include <iostream>
using namespace std;
int main(){
	int TIU;
	int TWK;
	int TKP;
		
	cout<<"PROGRAM MENENTUKAN KELULUSAN TES CPNS"<<"\nMasukkan nilai TIU anda : ";
	cin>>TIU;
	cout<<"Masukkan nilai TWK anda : ";
	cin>>TWK;
	cout<<"Masukkan nilai TKP anda : ";
	cin>>TKP;
	cout<<"Nilai total anda : "<<TIU+TKP+TWK;
	
	if (TIU >=80 and TWK>=100 and TKP>=140){
		cout<<"\nSelamat, anda lulus tes CPNS";
	} else {
		cout<<"\nMaaf, anda belum lulus tes CPS";
	}
	return 0;
}
