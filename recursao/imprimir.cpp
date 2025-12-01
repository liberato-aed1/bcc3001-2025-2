#include <iostream>

using namespace std;

void print_iterativo(int n){
  for (int i = 1; i <= n ; i++) {
    cout << i << " ";
  }
}

void print_recursivo(int n) {
  if (n < 1) return;

  
  print_recursivo(n-1);
  cout << n << " ";
  
}


int main() {
  print_iterativo(10);
  cout << endl;
  print_recursivo(10);
  return 0;  
}