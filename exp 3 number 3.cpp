#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main ()

{
char a[9999];
int b,c;

cout << "enter any characters (without space): "<< endl;
cin >> a;

b= strlen(a);

for (c=b; c>=0; c--)

{
cout <<a[c];
}

cout << " " << endl;

cout << "the size of the array is: " << b << endl;

getch();
return 0;

}
