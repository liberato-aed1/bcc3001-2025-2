#include <iostream>

using namespace std;

int fat_iterativo(int n) {
  int fatorial = 1;
  for (int i = n; i >=1; i--){
    fatorial = fatorial * i;
  }
  return fatorial;
}

int fat_recursivo(int n) {
  if (n == 1) return 1;
  return  n * fat_recursivo(n-1);
}


int main() {
  cout << fat_iterativo(5);
  cout << endl;
  cout << fat_recursivo(5);
  
  return 0;  
}