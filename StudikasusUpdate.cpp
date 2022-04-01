#include <iostream>
using namespace std;

int main()
{
	int i, j, total, jenis, jumlah, jarak, harga, ongkir, potkir, potmak, subtotal;
	float diskon;
	int pilih;
	int totmak=0;
	string ulang;
		cout<<"--- Welcome Rumah Makan Barokah ---"<<endl;
	cout<<"\tDelivery only!!!!!"<<endl;
	do{
	cout<<"Pilihan menu : "<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"|1. Ayam geprek  | Rp 21.000|"<<endl;
	cout<<"|2. Ayam goreng  | Rp 17.000|"<<endl;
	cout<<"|3. Udang goreng | Rp 19.000|"<<endl;
	cout<<"|4. Cumi goreng  | Rp 20.000|"<<endl;
	cout<<"|5. Ayam bakar   | Rp 25.000|"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"Masukkan pilihan: ";cin>>pilih;
	cout<<"Masukkan jumlah pesanan anda : ";cin>>jumlah;
	switch (pilih){
		case 1:
			total = 21000*jumlah;
			break;
		case 2:
			total = 17000*jumlah;
			break;
		case 3:
			total = 19000*jumlah;
			break;
		case 4:
			total = 20000*jumlah;
			break;
		case 5:
			total = 25000*jumlah;
			break;
	}
	cout<<"Anda ingin memesan lagi? (y/t) : ";cin>>ulang;
	totmak += total;

	}
	while (ulang=="y");
	cout<<"Anda sudah selesai memesan."<<endl;
	
	cout<<"Jarak rumah anda dari resto (KM) : ";cin>>jarak;
	cout<<endl;
	if(jarak<=3){
		ongkir=15000;		
	}
	else {
		ongkir=25000;
	}
	
	
	if(totmak>150000){
		potmak=8000;
		potkir=ongkir-8000;
		diskon=totmak*0.35;
	}
	else if(totmak>50000){
		potmak=5000;
		potkir=ongkir-5000;
		diskon=totmak*0.15;
	}
	else if(totmak>25000){
		potmak=3000;
		potkir=ongkir-3000;
	}

	subtotal=totmak-diskon;
	
	cout<<"_-_- STRUK WARUNG MAKAN BAROKAH -_-_"<<endl;
	cout<<"           DELIVERY ONLY            "<<endl;
	cout<<"     Lynsychansk, 12P, Ukraina      "<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<" Pembayaran Anda   : Rp "<<endl;
	cout<<" Total Harga       : Rp "<<totmak<<endl;
	cout<<" Diskon Makanan    : Rp "<<diskon<<endl;
	cout<<" Biaya Pengiriman  : Rp "<<ongkir<<endl;
	cout<<" Diskon pengiriman : Rp "<<potmak<<endl;
	cout<<" Subtotal          : Rp "<<subtotal<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"     TERIMAKASIH TELAH BERBELANJA   "<<endl;
	
}
