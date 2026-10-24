#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const float PI = 3.14;
    float R, side, CA, SA, sum; // R : radius , side : the side of the square , CA :circle area , SA : square area 
    cout << "pls inter the radius of the circle : ";
    cin >> R;
    cout << "pls inter the side of the square : ";
    cin >> side;
    CA = PI * pow(R, 2);
    SA = pow(side, 2);
    sum = CA + SA;
    cout << "The area of the circle = " << CA << endl;
    cout << "The area of the square = " << SA << endl;
    cout << "The sum of the two areas = " << sum << endl;
}