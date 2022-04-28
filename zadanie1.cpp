#include <iostream>
using namespace std;
int main()
{
int p = 2;
int n = 0;
int lp = 0;
cout << "Podaj swoja liczbę" << endl;
cin >> n;

while (lp < n) {

for (int d = 2; d <= p - 1; d++)
{
if (p % d == 0)
{
bool c = true;
p++;
return 0;
}
}
bool c1 = false;
cout << p << endl;
lp++;
p++;
break;
}
}