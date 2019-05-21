#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main ()

{
cout<< "enter 10 numbers"<< endl;
double digits [10], sum=0 , ave, smallest,largest;

for (int a=1; a<=10; a++)

{
cout << "number "<< a << ":" << endl;
cin >> digits [a];
}

for (int a=1; a<=10; a++)
{
sum = sum + digits [a];
}

largest = digits [1];
smallest = digits [1];

for (int a=1; a<=10; a++)
{
if (digits [a] > largest)
 largest = digits[a];

if (digits [a] < smallest)
 smallest = digits [a];
}

cout << " " << endl;

ave = sum / 10;
cout<< "the total sum of all 10 numbers is: "<< sum << endl;
cout<< "the average of all 10 numbers is: "<< sum / 10 << endl;
cout<< "the smallest of all numbers is: "<< smallest<< endl;
cout<< "the largest of all numbers is: "<< largest << endl;

getch();
return 0;
}
