#include <iostream>

using namespace std;
int long oldTerm = 1;
int long newTerm = 2;
int long total = 0;
int long temp = 0;

int main(){
	while(newTerm < 4000000){
		if(newTerm % 2 == 0){
			total += newTerm;
		}
		cout << total << "\n";
		temp = newTerm;
		newTerm += oldTerm;
		oldTerm = temp;
	}
}
