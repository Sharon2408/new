#include <iostream>
#include <cmath>
double Pi = 3.14;
double calculateArea(double rad)
{
return Pi * pow(rad, 2);
}
double calculatePerimeter(double rad)
{
return 2 * Pi * rad;
}
double calculateDiagonal(double rad)
{
return 2 * rad;
}
int main()
{
double rad;
std::cout << "Enter the radius of the circle: ";
std::cin >> rad;
std::cout << "Area of the circle with radius " << rad << " is: "
<< calculateArea(rad) << std::endl;
std::cout << "Perimeter of the circle with radius " << rad <<
" is: " << calculatePerimeter(rad) << std::endl;
std::cout << "Diagonal of the circle with radius " << rad << "  is: "
<< calculateDiagonal(rad) << std::endl;
return 0;
}

