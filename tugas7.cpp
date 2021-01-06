include <iostream>
//menerapkan fungsi matematika dasar

using namespace std;

//deklarasi konversi total detik ke jam, menit, detik
int jam();
//deklarasi konversi jam, menit, detik ke total detik
int total_detik();
//deklarasi header
void header();

int main(){
	int j,m,d,td,sm;
	header();
	
	total_detik();
	jam();
	return 0;
}

void header(){
	//header
	cout <<"nama : Diah Ayu Lestari"<< endl;
	cout <<"NPM : 20.14.1.0015"<< endl;
	cout <<"kelas : 1B"<< endl;
	cout <<"tugas : 7"<< endl;
	cout <<"-------------------------------------------------------"<< endl;
	cout <<"Function Konversi jam , menit menjadi total detik \n";
	cout <<"& function konversi total detik ke jam, menit, detik"<<endl;
	cout <<"-------------------------------------------------------"<< endl;
}
//function konversi total detik ke jam, menit, detik 
int jam(){
	cout <<"-------------------------------------------------------" endl;
	cout <<"Masukan Waktu total Detik : "; cin>> td;
	cout <<"-------------------------------------------------------" endl;
	//rumus konversi
	j = (double) td / 3600;
	sm = td % 3600;
	m = (double) sm / 60;
	d = sm % 60;
	cout <<"-------------------------------------------------------" endl;
	cout <<"hasil konversi detik ke jam : "<<j<<"jam"<<":"<<m<<"menit "<<":"<<d<<"detik"<< endl;
	cout <<"-------------------------------------------------------" endl;
	return td;
}
//functin konversi jam, menit, detik, ke total detik
int total_detik(){
	int j, m, d, td;
	cout <<"-------------------------------------------------------" endl;
	cout <<"Masukan jam : ";
	cin >> j;
	cout << "-------------------------------------------------------" endl;
	cout<<" Masukan menit : ";
	cin >> m;
	cout <<"-------------------------------------------------------" endl;
	cout << "Masukan detik : ";
	cin >> d;
	cout <<"-------------------------------------------------------" endl;
	td = j * 3600 + m * 60 + d;
	cout <<"Hasil konversi ke total detik : "<< td<< endl;
	cout <<"-------------------------------------------------------" endl;
	return td;
}
	
