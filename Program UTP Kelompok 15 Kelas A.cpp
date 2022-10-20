//Kelompok 15 Kelas A
//Annisa Citra Pratiwi (2217051008)
//Candra Wijaya (2217051020)
//David Mel Gibson (2217051120)

#include <iostream>
#include <conio.h>
using namespace std;

//tipe data (yg di deklarasi)
	int jenis;
	long int bayar,harga;
	string jjenis;
	char x;
	float kg,kembalian;
	int c=0;
	void header();
	void final();
	void divider();
	
//fungsi
void header (){
	cout<<"   __________________________________________________________  \n";	
	cout<<"  |..........................................................| \n";
	cout<<"  |                  TOKO IKAN MBAK CITRA                    | \n";
	cout<<"  |     Sedia Semua Jenis Ikan, Kami Layani Sepenuh Hati     | \n";
	cout<<"  |..........................................................| \n";
	cout<<"  |__________________________________________________________| \n";
}

//fungsi
void divider(){
	cout<<".........................................\n";
}

void final(){
	cout<<"Jenis Ikan \t: "<<jjenis<<endl;
	cout<<"Banyak Ikan \t: "<<kg<<" kg"<<endl;
	cout<<"Harga \t\t: "<<harga<<endl;
}

int main(){
	//array dan perulangan
	string info[2]={"Lokasi :","Jl. Basudewo 10 Kupang Kota."};
	for(char i=0; i<2; i++){
		cout<<info[i]<<endl;
	}
	//array
	int nominal[5]={35000,38000,50000,27000,36000};
	pilihan :
		header();
		cout<<endl;
		cout <<"\n Kami Menyediakan Ikan :"<<endl;
		cout <<"	1. Ikan Lele\n";
		cout <<"	2. Ikan Mas\n";
		cout <<"	3. Ikan Gurame\n";
		cout <<"	4. Ikan Nila\n";
		cout <<"	5. Ikan Patin\n";
		divider();
		
		cout <<"\n(/) . Pilih Ikan Yang Akan Kamu Beli : ";
		cin >> jenis;
		
		divider();
		cout<<" \nBerapa Kilo yang mau dibeli :";
		cin >> kg;
		//percabangan
		if(jenis==1){
				system("cls");
				header();
				jjenis ="Ikan Lele";
				cout<<"Struk Pembelian : "<<jjenis;
				nominal[0];
				//operator
				harga = kg*nominal[0];
			}
			
			else if(jenis==2){
				system("cls");
				header();
				jjenis="Ikan Mas";
				cout<<"\nStruk Pembelian : "<<jjenis;
				nominal[1];
				harga = kg*nominal[1];
			}
			
			else if(jenis==3){
				system("cls");
				header();
				jjenis = "Ikan Gurame";
				cout<<"\nStruk Pembelian : "<<jjenis;
				nominal[2];
				harga = kg*nominal[2];
			}
				
			else if(jenis==4){
				system("cls");
				header();
				jjenis="Ikan Nila";
				cout<<"\nStruk Pembelian : "<<jjenis;
				nominal[3];
				harga = kg*nominal[3];
			}
				
			else if(jenis==5){
				system("cls");
				header ();
				jjenis="ikan Patin";
				cout<<"\nStruk Pembelian : "<<jjenis;
				nominal[4];
				harga = kg*nominal[4];
			}
			
			else{
				system("cls");
				header();
				cout<<"\nMaaf Ikan Yang Anda Pilih Tidak Tersedia\n";
				system("pause");
				system("cls");
				goto pilihan;
		}
		cout<<endl<<endl;
		//ini ada 3 fungsi yang dipanggil
		divider();
		final ();
		divider();
		cout<<"Uang Anda\t: Rp. ";
		cin>>bayar;
	
		//operator
		kembalian=bayar-harga;
	
		//percabangan
		if(bayar>=harga){
		cout<<"Kembalian \t: Rp. "<<kembalian<<endl;
		divider();
		cout<<endl;
			
	}	else if(bayar<harga){
		system("cls");
		header();
		cout<<"\n Maaf Uang Anda Tidak Cukup."<<endl;
		cout<<" Pulang Dulu ya, Ambil duit lagi.\n\n";
		system("pause");
		system("cls");
		goto pilihan;
	}
		
		do{
			cout<<"Terimakasih Telah Berbelanja!\n";
			c++;
		}while(c<2);
		
		cout<<"\nIngin Membeli lagi (y/t) : "; cin>>x;
		if(x =='y'||x=='Y'){
			system("cls");
			goto pilihan;
		}else{
			system("cls");
			header();
			cout<<"\n\nTerimakasih Telah Berbelanja!\n";
			cout<<"Ditunggu Pembelian Selanjutnya...\n";
			getch();
		}
		return 0;		
}
