#include <iostream>
#include <cmath>
double PI = 3.14;
double calculateArea(double radius)
{
return PI * pow(radius, 2);
}
double calculatePerimeter(double radius)
{
return 2 * PI * radius;
}
double calculateDiagonal(double radius)
{
return 2 * radius;
}
int main()
{
double radius;
std::cout << "Enter the radius of the circle: ";
std::cin >> radius;
std::cout << "Area of the circle with radius " << radius << " is: "
<< calculateArea(radius) << std::endl;
std::cout << "Perimeter of the circle with radius " << radius << "
is: " << calculatePerimeter(radius) << std::endl;
std::cout << "Diagonal of the circle with radius " << radius << "
is: " << calculateDiagonal(radius) << std::endl;
return 0;
}

