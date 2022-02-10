#include <iostream>
using namespace std;

int main(){

  int c;

  int n;
  cout<< "enter a number"<<endl;
  cin >> n;


 while (n < 0 or n > 100){

   cout << "re enter number"<< endl;
   cin >> n;


 }
n = n * n;
cout << "number squared : "<<  n << endl;


return 0;

}
