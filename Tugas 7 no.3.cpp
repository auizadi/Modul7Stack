#include<iostream>
#include<string.h>
#include<stdio.h>
#include<windows.h>

using namespace std;

main()
{
	char kata[20];
	int makstum, x;
	
	cout << "Masukkan Kalimat : ";
	gets(kata);
	makstum = strlen(kata);
	
	cout<<endl;
	cout<<endl;
	
	cout << "Kalimat : "<<kata;
	cout << "\nDibalik Menjadi : ";
		for(x = makstum; x >= 0; x--){
			char tump = kata[x];
			cout << tump;
			
		}
}
