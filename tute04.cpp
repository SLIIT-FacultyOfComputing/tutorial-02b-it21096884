/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
/*/
long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}*/

//c++ using

#include <iostream>
long Factorial(int no);
long nCr(int n, int r);

int main()
{
	int n, r;
	std::cout << "Enter a value for n ";
	std::cin >> n;
	std::cout << "Enter a value for r ";
	std::cin >> r;
	std::cout << "nCr = ";
	std::cout << nCr(n, r);
	std::cout << std::endl;
  

}
long Factorial(int no)
{
	int lno;

	for (int i = no; i >= 1; i--)
	 {
		lno = lno * i;
		
     }
	return lno;
}

long nCr(int n, int r)
{
	double nCr;
	int fac1,fac2,fac3;

	 fac = 1;
	for (int i = n; i >= 1; i--) {
		fac = fac * i;
	}
	fac3 = 1;
	for (int i=r ;i >= 1; i--) {
		fac3 = fac3 * i;
	}

	fac2 = 1;
	for (int i = n-r; i >= 1; i--) {
		fac2 = fac2 * i;
	}

	double nCr = fac1 / fac3 * fac2;
	 
	return nCr;
}

