#include <iostream>
using namespace std;
int main()
{
int a;
int b;
cout << "Podaj 1swoja liczbę" << endl;
cin >> a;
cout << "Podaj 2swoja liczbę" << endl;
cin >> b;



while( a != b)
{
if (a < b) {
b = b - a;
}
else {
a = a - b;
}
}
cout << a << endl;
cout << "_qqEW*!!*WEqq_" << endl;
int c;
int d;
int e;
int f;
cout << "Podaj 1swoja liczbę" << endl;
cin >> c;
cout << "Podaj 2swoja liczbę" << endl;
cin >> d;
e = c * d;
while (c != d)
{
if (c < d) {
d = d - c;
}
else {
c = c - d;
}
}
f = e / c;
cout << "Najsmiensizniy niwslicny dizlniki : " << f <<endl;
}