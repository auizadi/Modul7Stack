#include<iostream>
using namespace std;

int main(){
	string kal;
	int n, x;
	bool palindrome = true;
	
	cout << "Program Palindrome" << endl;
	cout<<endl;
	cout << "Masukkan Kata / Kalimat : ";
	getline(cin, kal);
	n = kal.length();
	
		for(x = 0; x < n; x++){
			if(kal[x] != kal[n-x-1]){
				palindrome = false;
				break;
			}
		}
		cout << "Hasil : ";
			if(palindrome == true){
				cout << "Kalimat / Kata Tersebut adalah Palindrome";
			}else{
				cout << "Kalimat / Kata Tersebut Bukan Palindrome";
			}
}
