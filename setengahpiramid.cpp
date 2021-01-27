#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
void batas(){
	cout<<"----------------------------------"<<endl;
}
int main()
{
	int i,j;
	system ("color f4");
	cout<<"  MEMBUAT SETENGAH PIRAMID"<<endl;
	cout<<"MENGGUNAKAN PENGULANGAN (FOR)"<<endl;
	batas();
	for(i=0; i<=6; i++){
		for(j=0; j<i; j++){
		cout<<"*";
		}
		cout<<endl;
	}
	batas();
	
	getch();
	return 0;
	
}
