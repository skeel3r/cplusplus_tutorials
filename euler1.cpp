#include <iostream>

using namespace std;
int long total = 0;
int i = 0;
int main(){
	while(i < 1000){
		if(i % 3 == 0 || i % 5 == 0){
			total += i;
		}
		cout << i << "\n";
		cout << total << "\n";
		i++;
	}
}
