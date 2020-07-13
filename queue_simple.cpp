#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char** argv) {
	queue<int> angka;
	
	angka.push(2);
	angka.push(5);
	angka.push(8);
	
	while(!angka.empty()){
			cout << angka.front()<<" ";
			angka.pop();
	}
	return 0;
}
