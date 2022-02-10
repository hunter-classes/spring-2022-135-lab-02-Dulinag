#include <iostream>
using namespace std;


int main (){


int fib[60], i;

fib[0] = 0;
fib[1] = 1;

for (i = 2; i < 60; i++){

  fib[i] = fib[i-1] + fib[i-2];

}


for (int f = 0; f < 60; f++){
  cout << fib[f]<<"\n";
}



  return 0;
}
