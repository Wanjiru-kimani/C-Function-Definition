#include<iostream>
#include<cmath>
using namespace std;

//Function prototypes
float addition(int x, int y);
double simple_interest(int principle, float rate, int time);
int multiply(int a, int b); //New function prototype

int main() {
	float sum, interest, suml;
	int product;
	
	//Function calls
	sum= addition(20, 30);
	suml= addition(220, 430);
	interest= simple_interest(6000, 0.5, 3);
	product= multiply(8, 9); //New function call
	
	//Output results
	cout<< "Sum: "<<sum <<endl;
	cout<< "Sum: "<<suml<<endl;
	cout<< "Simple Interest: " << interest <<endl;
	cout<< "Product: " << product <<endl; //Output of multiply function
	
	return 0;
}

//Function definitions
float addition(int x, int y) {
	float sum;
	sum = x + y;
	return sum;
}

double simple_interest(int principle, float rate, int time) {
	double interest;
	interest = principle * rate * time;
	return interest;
}

int multiply(int a, int b) {
	return a * b;
}
