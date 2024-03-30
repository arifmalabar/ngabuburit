#include <iostream>
using namespace std;
class Kendaraan {
	public :
		string bahan_bakar;
		
		virtual void showSpek()
		{}
};
class Mobil : public Kendaraan {
	public :
		string merk, warna, jml_roda;
		Mobil()
		{
			this->merk = "Freed";
			this->warna = "Abu Abu";
			this->jml_roda = 4;
			this->bahan_bakar = "Bensin";
		}
		void showSpek()
		{
			cout<<"Merk "<<this->merk<<endl;
			cout<<"Warna "<<this->warna<<endl;
			cout<<"Jumlah roda "<<this->jml_roda<<endl;
			cout<<"Bahan bakar "<<this->bahan_bakar<<endl;
		}
		void berjalanMaju(){
			cout<<"Mobil "<<merk<<" berjalan maju"<<endl;
		}
		void berjalanMundur(){
			cout<<"Mobil "<<merk<<" berjalan mundur"<<endl;
		}
		void belokKiri(){
			cout<<"belok kiri"<<endl;
		}
		void belokKanan(){
			cout<<"Belok kanan"<<endl;
		}
};
int main()
{
	bool status = true;
	Mobil data[10];
	int ke = 0;
	do{
		Mobil avanza = Mobil();
		char pilih;
		cout<<"SELAMAT DATANG DI APLIKASI"<<endl<<endl;
		cout<<"Masukan merk mobil ";
		cin>>avanza.merk;
		cout<<"Masukan warna mobil ";
		cin>>avanza.warna;
		cout<<"Masukan jenis bahan bakar ";
		cin>>avanza.bahan_bakar;
		cout<<endl;
		
		avanza.showSpek();
		
		cout<<"Apakah anda ingin menginput lagi (Y/N)";
		cin>>pilih;
		cout<<endl;
		switch(pilih) {
			case 'Y':
				status = true;
			break;
			case 'N':
				status = false;
				cout<<"Anda mengakhiri aplikasi"<<endl;
			break;
			default :
				status = false;
				cout<<"Error perintah tidak ditemukan"<<endl;
			break;
		}
		data[ke] = avanza;
		ke++;
	} while(status);
	cout<<"Total data yang diinput "<<ke<<endl;
	for(int i = 0; i < ke; i++)
	{
		Mobil dt = data[i];
		cout<<"Merk "<<dt.merk<<endl;
		cout<<"Warna "<<dt.warna<<endl;
		cout<<"Jumlah roda "<<dt.jml_roda<<endl;
		cout<<"Bahan bakar "<<dt.bahan_bakar<<endl;
		cout<<endl;
	}
}
