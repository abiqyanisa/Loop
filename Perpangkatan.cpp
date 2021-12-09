#include <iostream>
#include <math.h> 							//function pow

using namespace std;

float perpangkatan(float a, float b){
	
	float hasil=1;
	
	for(int i=0; i<b; i++){
		hasil = hasil*a;
	}
	return hasil;
  
}

int main(){
	cout << perpangkatan(2,3) << endl; 		//perpangkatan dengan looping
	cout << pow(2,3) << endl; 				    //perpangkatan dengan pow
}
