#include <iostream>
#include <string>
using namespace std;

int jml_huruf(char *text) {
 int panjang = 0;
 while (*(text++) != '\0')
  panjang++;
  
 return panjang;
}


int main() {
 char string[100];
 cout << "Input kata = \t";
 cin.getline(string, 100);
 cout << "Banyaknya Huruf = \t: " << jml_huruf(string);

 return 0;
}
