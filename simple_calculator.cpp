#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int opt;
	cout << "Enter your choice : \n";
	cout << "(1) Addition                 (2) Subtraction\n";
	cout << "(3) Multiplication           (4) Division\n";
	cout << "(5) Square                   (6) Square root\n";
	cout << "(7) Cube                     (8) Cube root\n";
	cout << "(9) Modulus (Remainder)      (10) Reciprocal\n";
	cout << "(11) Sine(angle)             (12) Cosine(angle)\n";
	cout << "(13) Tangent(angle)                     \n";
	cout << endl;
	cin >> opt;
//declaration of some extra variables
	int i,j,sum=0,diff,mult=1,quot,number,modulus,temporary,rem;
	float num,theta;
	switch (opt) {
	case 1:
		cout << "Enter positive numbers to add (enter 0 to stop adding)\n";
		cin >> i;
		while (i!=0) {
			sum = sum+i;
			cin >> i;
		}
		cout << "Calculated sum is : " <<sum;
		break;
	case 2:
		int a,b;
		cout << "Enter positive numbers to substract\n ";
		cout << "Enter first number : ";
		cin >> a;
		cout << "Enter second number : ";
		cin >> b;
		diff = a-b;
		cout << "The calculated diffrence is : " << diff;
		break;
	case 3:
		cout << "Enter positive numbers to multiply (enter 0 to stop multiplying)\n";
		cin >> j;
		while(j>0) {
		mult = mult * j;
		cin >> j;
	}
	cout << "Calculated product is : " << mult;
	break;
case 4:
		int c,d;
		cout << "Enter positive numbers to divide\n ";
		cout << "Enter first number : ";
		cin >> c;
		cout << "Enter second number : ";
		cin >> d;
		if(d==0) {
			cout << "Division by 0 is invalid!!!";
		}
		else {
			quot = c/d;
			cout << "The calculated quotient is : " << quot << endl;
		}
	break;
case 5:
		cout << "Enter number to find square of : \n";
		cin >> num;
		cout << "Square of the number is : " << pow(num,2);
		break;
	case 6:
			cout << "Enter number to find square root of : \n";
			cin >> num;
			if (num<0) {
				cout<<"Unable to find sqr root of negative numbers";
			}
			else {
				cout << "Square of the number is : " << sqrt(num);
				}
		break;
	case 7:
			cout << "Enter number to find cube of : \n";
			cin >> num;
			cout << "Cube of the number is : " << pow(num,3);
			break;
	case 8:
			cout << "Enter number to find cube root of : \n";
			cin >> num;
				if (num<0) {
				cout<<"Unable to find cube root of negative numbers";
			        }
    			else {
    				cout << "Square of the number is : " << cbrt(num);
    				}
		break;
	case 9:
	    cout << "With comparison to  A % B : ";
	    cout << "Enter the value of A : ";
	    cin >> number;
	    cout << "Enter the value of B : ";
	    cin >> temporary;
	    modulus = number%temporary;
	    cout << "The calculated remainder is : " << modulus;
	    break;
	    
	 case 10:
	    cout << "Enter the number to take reciprocal of : ";
	    cin  >> num;
	    //float reciprocal = (1/num);
	    cout << "Reciprocal of " << num << " : " << "1/" << num << " = " << 1/num;
	    break;
	    
	 case 11: 
	    //float theta;
	    cout << "Enter the angle in radians : ";
	    cin >> theta;
	    cout << "The value of angle in Sine function is : " << sin(theta);
	    break;
	   
	 case 12: 
	    //float theta;
	    cout << "Enter the angle in radians : ";
	    cin >> theta;
	    cout << "The value of angle in Cosine function is : " << cos(theta);
	    break;
	    
	 case 13: 
	    //float theta;
	    cout << "Enter the angle in radians : ";
	    cin >> theta;
	    cout << "The value of angle in Tangent function is : " << tan(theta);
	    break;
	}
}
