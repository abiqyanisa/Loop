#include <iostream>
#include <windows.h>

using namespace std;

int waktu=0;

int main(){
	
	int i;
	
	for(int i=10; i>=0 ; i--){
		cout << "waktu : ";
		cout << i;
		Sleep(1000);
		system("cls");
		
		if(i==0){
		cout << "WAKTU HABIS" << endl;
		}
	}
}
