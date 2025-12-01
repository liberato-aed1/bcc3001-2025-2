#include <iostream>

using namespace std;


int fibo_iterativo(int n){
    int a = 0;
    int b = 1;
    int fibo = 0;

    for (int i=1; i <= n; i++){
        fibo = a + b;
         a = b;
         b = fibo;   
    }
    return fibo;
}
int fibo_recursiva(int n){
  if (n <= 1) return 1;
  return fibo_recursiva(n-1) + fibo_recursiva(n-2);
}

int main() {
  // 1,1,2,3,5,8,13

  cout << fibo_iterativo(7);
  cout << endl;
  cout << fibo_recursiva(7);
  
  
  return 0;  
}