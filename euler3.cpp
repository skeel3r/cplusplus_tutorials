#include <iostream>
using namespace std;
int myFlag = 0;
int long i = 0;
int t = 0;

int main(){
	while(myFlag == 0){
		t = 0;
		for(int j = 0; j < 21; j++){
			t += (i%j);
		}

		if(t == 0){
			myFlag = 1;
			cout << i;
		}
		i++;
	}
}

