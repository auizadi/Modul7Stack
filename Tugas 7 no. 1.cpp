#include<iostream>
#include<conio.h>

using namespace std;

int top = -1, z[30];

void push(int nilai){
	if(top == 29 ){
		cout << "\nStack Penuh";
	}else{
		top++;
		z[top] = nilai;
	}
}
	
	
void pop()
{
	if(top == -1){
		cout << "\nStack Kosong";
	}else{
		top--;
	}
}

void show(){
	if(top == -1){
		cout << "\nTidak ada Yang Ditampilkan";
	}else{
		cout << "array adalah : ";
			for(int i = 0; i <= top; i++){
				cout << "  " <<z[i];  
			}
	}
}
int main(){
	int val, pil;
		do{
			cout <<"\n1. PUSH\n2. POP\n3. DISPLAY"<<endl;
			cout<<"masukkan Pilihan : ";
			cin>>pil;
			system("cls");
			if(pil == 1){
				cout<<"Masukkan Kalimat : ";
				cin>>val;
				push(val);
			}
			if(pil == 2){
				pop();
			}
			if(pil == 3){
				show();
			}
		}while(pil != 4);
}

