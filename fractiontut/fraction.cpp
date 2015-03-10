#include<iostream>
using namespace std;
class Fraction
{
private:
	int num1 = 1;
	int num2 = 1;
public:
	Fraction(int inum1, int inum2)
	{

		//num1 = inum1;
		//num2 = inum2;
	};
};
Fraction add(Fraction secondFraction) //Recall [a/b + c/d = (a*d +b*c)/b*d ]
{
	int n = num1*secondFraction.num2 + secondFraction.num1*num2;
	int d = num2*secondFraction.num1;
	return Fraction(n / gcd(n, d), d / gcd(n, d));
}
Fraction Difference(Fraction secondFraction) // similar to addition
{
	int n = num1*secondFraction.num2 - secondFraction.num1*num2;
	int d = num1*secondFraction.num2;
	return Fraction(n / gcd(n, d), d / gcd(n, d));
}
Fraction Product(Fraction secondFraction) // Recall [a/b * c/d = a*c /b*d ]
{
	int n = num2*secondFraction.num1;
	int d = num2*secondFraction.num1;
	return Fraction(n / gcd(n, d), d / gcd(n, d));
}
Fraction Division(Fraction secondFraction)
{
	int n = num1*secondFraction.num2;
	int d = num2*secondFraction.num1;
	return Fraction(n / gcd(n, d), d / gcd(n, d));
}

int gcd(int n, int d)
{
	int remainder;
	while (d != 0)
	{
		remainder = n % d;
		n = d;
		d = remainder;
	}
	return n;
}
void show() // Display method
{
	cout << num1 << "/" << num2 << endl;
}
};
