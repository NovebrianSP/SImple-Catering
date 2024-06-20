#include <iostream>
#include <string>
using namespace std;

int paket, tipe, hargaPaket[5]={2250000, 2150000, 2400000, 70000, 65000}, hargaItem=150000;
char confirm;
string inputNama;

void pilihTipe()
{
	int i, j;
	string tipe[2][2]={{"Partai Besar", ": Promo Diskon 15% (Khusus Pemesanan Event)"}, {"Perorangan",": Pilihan per item dan Paket Hemat"}};
	cout<<"============ PEMILIHAN MENU PEMBELIAN ============\n";
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cout<<tipe[i][j]<<" ";
		}
		cout<<endl;
	}
}

void hai(string nama=" ")
{
	cout<<nama;
}

void menu()
{
	cout<<"Silahkan masukkan nama anda : ";cin>>inputNama;
	system("CLS");
	cout<<"============ PEMILIHAN MENU PAKET ============\n";
	cout<<"Selamat Datang ";hai(inputNama);cout<<" di layanan Andesta Katering \n";
	cout<<"berikut Paket menu yang dapat dipilih : \n"<<"1.Paket 1 (2250000)\n2.Paket 2 (2150000)\n3.Paket 3 (2400000)\n";
	cout<<"Silahkan pilih paket menu yang ingin anda pesan : ";
}

void paket1()
{
	cout<<"Paket ini berisikan menu sebagai berikut : \n";
	cout<<"1.Gulai Ayam \n2.Tumis Brokoli dan Bakso \n3.Sop Matahari \n4.Paket Minum Es Teh & Es Buah \n\n";
}

void paket2()
{
	cout<<"Paket ini berisikan menu sebagai berikut : \n";
	cout<<"1.Sate Ayam \n2.Kwetiaw \n3.Soto Ayam \n4.paket minum Es Teh \n\n";
}

void paket3()
{
	cout<<"Paket ini berisikan menu sebagai berikut : \n";
	cout<<"1.Nasi Goreng Spesial \n2.Ayam Panggang \n3.Sapi Lada Hitam \n4.paket minum Es Teh, Es Buah & Es Krim \n\n";
}

void paketHemat1()
{
	cout<<"\n1. Paket Garinx ini berisikan menu sebagai berikut : \n";
	cout<<"4 porsi nasi lauk ayam goreng+telur orak arik & 4 gelas es teh \n";
}

void paketHemat2()
{
	cout<<"2. Paket Kebut ini berisikan menu sebagai berikut : \n";
	cout<<"4 porsi nasi lauk rendang+perkedel & 4 gelas es teh \n";
}

void menuPerItem()
{
	cout<<"Silahkan masukkan nama anda : ";cin>>inputNama;
	system("CLS");
	cout<<"============ PILIHAN MENU YANG DAPAT DIBELI ===========\n";
	cout<<"Selamat Datang ";hai(inputNama);cout<<" di layanan Andesta Katering \n";
	cout<<"PILIHAN MENU MAKANAN : \n";
	cout<<"1. Ayam Goreng \n2. Telur Orak Arik \n3. Opor \n4. Rendang \n";
	cout<<"PILIHAN MENU MINUMAN : \n";
	cout<<"1. Es Teh\n2. Es Jeruk\n3. Jus Buah\n";
	cout<<"PILIHAN MENU PAKET HEMAT : \n";
	cout<<"1. Paket Garinx (70000)\n2. Paket Kebut (65000)\n\n";
	
}

int main()
{
	pilihTipe();
	cout<<"Masukkan Pilihan Pembelian (1/2) = ";cin>>tipe;
	cout<<endl;
	
	if(tipe==1)
	{
		menu();
		cin>>paket;cout<<endl;
		
		if(paket==1)
		{
			paket1();
			int diskon = hargaPaket[0]*0.15;
			int total = hargaPaket[0]-diskon;
			
			cout<<"Anda akan membeli paket 1, apakah anda ingin melanjutkan transaksi ? (Y/N) : ";
			cin>>confirm;cout<<endl;
			if(confirm=='y' || confirm=='Y')
			{
				cout<<"Harga paket : "<<hargaPaket[0]<<"\nDiskon 15% : "<<diskon<<endl;
				cout<<"Total pembayaran sebesar Rp."<<total<<" atas nama ";hai(inputNama);cout<<endl<<endl;
			}
			
			else
			{
				cout<<endl;
			}
		}
	
		else if(paket==2)
		{
			paket2();
			int diskon = hargaPaket[1]*0.15;
			int total = hargaPaket[1]-diskon;
			
			cout<<"Anda akan membeli paket 2, apakah anda ingin melanjutkan transaksi ? (Y/N) : ";
			cin>>confirm;cout<<endl;
			if(confirm=='y' || confirm=='Y')
			{
				cout<<"Harga paket : "<<hargaPaket[1]<<"\nDiskon 15% : "<<diskon<<endl;
				cout<<"Total pembayaran sebesar Rp."<<total<<" atas nama ";hai(inputNama);cout<<endl<<endl;
			}
			
			else
			{
				cout<<endl;
			}
		}
	
		else if(paket==3)
		{
			paket3();
			int diskon = hargaPaket[2]*0.15;
			int total = hargaPaket[2]-diskon;
			
			cout<<"Anda akan membeli paket 3, apakah anda ingin melanjutkan transaksi ? (Y/N) : ";
			cin>>confirm;cout<<endl;
			if(confirm=='y' || confirm=='Y')
			{
				cout<<"Harga paket : "<<hargaPaket[2]<<"\nDiskon 15% : "<<diskon<<endl;
				cout<<"Total pembayaran sebesar Rp."<<total<<" atas nama ";hai(inputNama);cout<<endl<<endl;
			}
			
			else
			{
				cout<<endl;
			}
		}
	
		else 
		{
			cout<<"Maaf kode yang anda inputkan tidak memiliki indeks paket menu \n";
		}
	}
	
	else if(tipe==2)
	{
		int a, b, hitung;
		menuPerItem();
		int pilih;
		cout<<"Kami menyediakan pilihan pembelian per item dan paket hemat \n";
		cout<<"Silahkan Pilih Menu Pembelian (1/2) : ";cin>>pilih;
		
		if(pilih==1)
		{
			cout<<"Silahkan pilih menu makanan yang ingin dibeli (masukkan nomor makanan) : ";cin>>a;
			cout<<"Silahkan pilih menu minuman yang ingin dibeli (masukkan nomor minuman) : ";cin>>b;
			
			if (a==true || b==true)
			{
				cout<<"Total pembayaran sebesar : "<<hargaItem<<" atas nama : ";hai(inputNama);cout<<endl;
			}
			
			else
			{
				cout<<"Maaf menu yang anda inputkan tidak terdaftar \n";
			}
		}
		
		if(pilih==2)
		{
			int paket;
			paketHemat1();cout<<endl;paketHemat2();cout<<endl;
			cout<<"Pilih menu paket anda (1/2) : ";cin>>paket;
			
			if(paket==1)
			{
				cout<<endl<<"Total pembayaran pesanan atas nama ";hai(inputNama);cout<<" sejumlah : "<<hargaPaket[3]<<endl;
			}
			
			else if(paket==2)
			{
				cout<<endl<<"Total pembayaran pesanan atas nama ";hai(inputNama);cout<<" sejumlah : "<<hargaPaket[4]<<endl;
			}
		}
	}
	
	else
	{
		cout<<"Maaf menu yang anda inputkan tidak terdaftar \n";
	}
	
	cout<<"Terimakasih sudah menggunakan layanan kami \n"<<"============ ANDESTA KATERING ============";
	
	return 0;
}
