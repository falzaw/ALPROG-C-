#include <iostream>
using namespace std;
int main(){
	int pilihan;
	int bayar,harga,potongan_harga,total,total_harga,total_harga1,kembalian;
	float diskon,diskon1,diskon2;
	cout<<"1.Jus apel :Rp.25000\n";
	cout<<"2.Jus mangga :Rp.20000\n";
	cout<<"3.Jus strawberry :Rp.29000\n";
	cout<<"4.Jus semangka :Rp.27000\n";
	cout<<"5.Jus alpukat :Rp.28000\n";
	cin>>pilihan;
	switch (pilihan){
		case 1:
			cout<<"Jus apel=Rp.25000\n"<<"potongan harga=20000\n";
				harga=25000;
				potongan_harga=20000;
				total=harga-potongan_harga;
			cout<<"total harga=Rp."<<total<<"\n";
			cout<<"jumlah bayar=";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian=Rp."<<kembalian;
			break;
		case 2:
			cout<<"Jus mangga=Rp.20000\n"<<"jumlah bayar=\t";
			cin>>bayar;
			cout<<"kembalian = \tRp."<<bayar - 20000;
			break;
		case 3:
			cout<<"Jus strawberry=Rp.29000\n"<<"diskon=50%\n";
				harga=25000;
				diskon=0.5;
				total=harga*diskon;
			cout<<"total harga=Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian=Rp."<<kembalian;
			break;
		case 4:
			cout<<"Jus semangka=Rp.27000\n"<<"jumlah bayar=\t";
			cin>>bayar;
			cout<<"kembalian=\tRp."<<bayar - 27000;
			break;
		case 5:
			cout<<"Jus alpukat=Rp.28000\n"<<"diskon 20% + 30%\n";
				harga=28000;
				diskon1=0.3;
				diskon2=0.2;
				total_harga1=harga*diskon1;
				total_harga=total_harga1*diskon2;
			cout<<"total harga=Rp."<<total<<"\n";
			cout<<"jumlah bayar=";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian=Rp."<<kembalian;
			break;
		default:
			cout<<"No Result";
	
	}
}
