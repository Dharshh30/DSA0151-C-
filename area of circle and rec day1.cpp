#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float length, width, area,radius;

  cout << "Enter length and width of triangle: ";
  cin >> length >> width ;

  area= length* width;
  cout << "Area = " << area << endl;

  return 0;
}