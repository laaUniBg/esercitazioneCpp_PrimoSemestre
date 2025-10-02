#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int a, b, c;

  cout << "Inserisci a: ";
  cin >> a;
  cout << "Inserisci b: ";
  cin >> b;
  cout << "Inserisci c: ";
  cin >> c;

  if(a<b) {
    if(c<a)         { cout << c << " " << a << " " << b << endl; }
    else if(c<b)    { cout << a << " " << c << " " << b << endl; }
    else            { cout << a << " " << b << " " << c << endl; }
  } else {
    if(a<c)         { cout << b << " " << a << " " << c << endl; }
    else if(b<c)    { cout << b << " " << c << " " << a << endl; }
    else            { cout << c << " " << b << " " << a << endl; }
  }

  return 0;
}