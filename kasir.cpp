#include <iostream>
using namespace std;
int main(){
	int pilihan;
	int bayar,harga,potongan_harga,total,total_harga,total_harga1,kembalian,jumlah;
	cout<<"1.Jus apel :Rp.25000\n";
	cout<<"2.Jus mangga :Rp.20000\n";
	cout<<"3.Jus strawberry :Rp.29000\n";
	cout<<"4.Jus semangka :Rp.27000\n";
	cout<<"5.Jus alpukat :Rp.28000\n";
	cin>>pilihan;
	switch (pilihan){
		case 1:
			cout<<"Jus apel\n";
				harga=25000;
			cout<<"jumlah =";
			cin>>jumlah;
				total=harga*jumlah;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;
		case 2:
			cout<<"Jus mangga\n";
				harga=20000;
			cout<<"jumlah =";
			cin>>jumlah;
				total=harga*jumlah;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;
		case 3:
			cout<<"Jus strawberry\n";
				harga=29000;
			cout<<"jumlah =";
			cin>>jumlah;
				total=harga*jumlah;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;
		case 4:
			cout<<"Jus semangka\n";
				harga=27000;
			cout<<"jumlah =";
			cin>>jumlah;
				total=harga*jumlah;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;	
		case 5:
			cout<<"Jus alpukat\n";
				harga=28000;
			cout<<"jumlah =";
			cin>>jumlah;
				total=harga*jumlah;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;
		default:
			cout<<"No Result";	
	}
}
