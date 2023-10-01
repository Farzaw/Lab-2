#include <iostream>
#include <cmath>

using namespace std;

double Double_Fact(double Variable);
double t(double x);
double Expression(double y);

int main()
{
	double y;

	cin >> y;
	cout << Expression(y);

	return 0;
}

double t (double x)
{
	double Fir_Answer = 0, Sec_Answer = 0;

	for (int k = 0; k <= 10; k++)
		Fir_Answer += pow(x, 2*k+1)/Double_Fact(2 * k + 1);

	for (int k = 0; k <= 10; k++)
		Sec_Answer += pow(x, 2*k)/Double_Fact(2 * k);

	return Fir_Answer/Sec_Answer;
}

double Double_Fact(double Variable)
{
	double Foo_Answer = 1;

	while (Variable > 0)
	{
		Foo_Answer *= Variable;
		Variable = Variable - 2;
	}
	return Foo_Answer;
}

double Expression(double y)
{
	return (7 * t(0.25) + 2 * t(1 + y)) / 6 - t(y * y - 1);
}