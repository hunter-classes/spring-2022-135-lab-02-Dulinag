#include <iostream>
using namespace std;

int main(){


int myData[10], i, pos, v;



  for (i = 0; i < 10; i++){

    myData[i] = 1;


  }

do
{

  for (i = 0; i < 10; i++){

    cout << myData[i] <<"  ";

  }
  cout << endl;

  cout << "input index: "<<endl;
  cin >> pos;

  cout << "input value: "<< endl;
  cin >> v;
  cout<< endl;

if ((pos >= 0) && (pos < 10)){
  myData[pos] = v;

}


}
  while ((pos >= 0) && (pos < 10));

    //



  return 0;

}
