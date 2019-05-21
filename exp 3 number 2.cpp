#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main()

{

int provincea [7] , provinceb [7] , provincec [7];
cout << "enter the temperature of province a for the whole week:"<< endl;
for (int a=1; a<=7; a++)
{
cout << "province a (day "<< a << "): " ;
cin >> provincea [a];
}

cout<< " " << endl;

cout<< "enter the temperature of province b for the whole week:"<< endl;
for (int b=1; b<=7; b++)
{
cout << "province b (day " << b << "): ";
cin >> provinceb [b];
}

cout << " " << endl;

cout << "enter the temperature of province c for the whole week:"<< endl;
for (int c=1; c<=7; c++)
{
cout << "province c (day "<< c << "): ";
cin >> provincec [c];
}

cout << " " << endl;

cout << "the temperature of all the provinces: "<< endl;
for (int d=1; d<=7; d++)
{
cout << "province a (day "<< d << "): "<< provincea[d] << endl;
}

cout << " "<< endl;

for (int e=1; e<=7; e++)
{
cout << "province b (day "<< e << "): "<< provinceb[e] << endl;
}

cout << " "<< endl;

for (int f=1; f<=7; f++)
{
cout << "province c (day "   << f << "): "<< provincec[f] << endl;
}


getch();
return 0;

}
