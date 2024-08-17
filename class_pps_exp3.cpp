#include <iostream>
using namespace std;

int main() {
	/*int a,b,c;
	cout << "Enter three numbers : \n";
	cin >> a >> b >>c;

	if (a>b && c>a || b>a && a>c){
	    cout << "The middle number is : " << a;
	}
	else if (b>a && c>b || a>b && b>c){
	    cout << "The middle number is : " << b;
	}
	else {
	    cout << "The middle number is : " << c;
	}*/

	/*   float a,b,c,d,x,y;
	cout << "With comparison to ax^2 + bx + c = 0 , enter the values of a,b,c: \n";
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	cout << "Enter c : ";
	cin >> c;

	d = b*b-4*a*c;

	if(d>0){
	   cout << "Roots of the equation are real and unique : "<<endl;
	   cout << endl;
	   x = (-b+sqrt(d))/(2*a);
	   y = (-b-sqrt(d))/(2*a);
	   cout << "First root : " << x <<endl;
	   cout << "Second root : " << y << endl;
	   }
	else if(d==0){
	   cout << "Roots are real and equal : ";
	   x = (-b/2*a);
	   cout << "Both roots are : " << x;
	}
	else{
	   cout << "Roots are imaginary : ";
	   x = -b/(2*a);
	   y = sqrt(-d/(2*a));
	   cout << "Real part of root is : " << x << endl;
	   cout << "Imaginary part of root is : " << y;


	}
	*/
	/*#include <iostream>
	using namespace std;
	int main(){
	    float units,total_amt,dis,dis_amt,final_amt;
	    units = 25;
	    total_amt = 100 + (units*10);

	    if (total_amt<=200){
	        dis = 0;
	    }
	    else if (total_amt>200 && total_amt<=500){

	        dis = 5;
	    }
	    else if (total_amt>500 && total_amt<=800){
	        dis = 10;
	    }
	    else if(total_amt >800 && total_amt <= 1100){
	        dis = 15;
	    }
	    else {
	        dis = 20;
	    }
	    dis_amt = (total_amt *dis)/100;
	    final_amt = total_amt - dis_amt;

	    cout << "============ YOUR BILL ============"<<endl;
	    cout << "Units consumed : "<<units << endl;
	    cout << "Base amount (fixed) : 100"<< endl;
	    cout << "Total Bill Calculated : "<< total_amt<< endl;
	    cout << "Discount applied : "<<dis<<"%"<< endl;
	    cout << "Discount amount calculated : " <<dis_amt<< endl;
	    cout << "Final bill amount after discount : " << total_amt << " - " << dis_amt << " = " << final_amt<< endl;
	}
	*/
//   Uppercase letters ('A' to 'Z') with ASCII codes 65 to 90.
//Lowercase letters ('a' to 'z') with ASCII codes 97 to 122
	/*   char txt;
	   cout << "Enter a single character : " ;
	   cin >> txt;
	   // converting into owercase
	   txt = tolower(txt);
	   if (txt >= '0' && txt <= '9'){
	       cout << "Integer entered !! ";
	   }
	   else if ((txt >= 'a' && txt <= 'z') || (txt >= 'A' && txt <= 'Z')){
	       switch(txt){
	           case 'a':
	           case 'e':
	           case 'i':
	           case 'o':
	           case 'u':
	               cout << "Entered character is a vowel!!";
	               break;
	           default :
	               cout << "Entered character is a consonant!!";
	               break;
	       }
	   }
	   else{
	       cout << "Special character entered!!";
	   }
	*/
/*
	float base,height,length,width,radius,area,pi=3.14;
	int opt;

	cout << "======================== Area calculator programme ======================== ";
	cout << endl << endl;


	cout << "Choose the option for desired shape : \n";
	cout << "(1) Triangle\n";
	cout << "(2) Rectangle\n";
	cout << "(3) Circle\n";
	cout << "(4) Sphere\n";
	cout << "Enter your choice : ";
	cin >> opt;
	int i=2,j=2;
	while(i==2) {
		if(j==2) {
			switch (opt) {
			case 1:
				cout << endl;
				cout << "Chosen shape : TRIANGLE\n";
				cout << "Enter the base of triangle : ";
				cin >> base;
				cout << "Enter height of triangle : ";
				cin >> height;

				area = (base*height)/2;
				cout << "Calculated area of triangle is : " << area <<endl;

				cout << "(1)EXIT        (2)CONTINUE\n" ;
				cin >> j;
				if (j==1) {
					j=0;
				}
				else if(j==2) {
					cout << "Enter your choice :  ";
					cout << endl << endl;
					cout << "Choose the option for desired shape : \n";
					cout << "(1) Triangle\n";
					cout << "(2) Rectangle\n";
					cout << "(3) Circle\n";
					cout << "(4) Sphere\n";
					cout << "Enter your choice : ";
					cin >> opt;
					break;
				}
				break;
			case 2 :
				cout << endl;
				cout << "Chosen shape : RECTANGLE\n";
				cout << "Enter the length of rectangle : ";
				cin >> length;
				cout << "Enter width of rectangle : ";
				cin >> width;

				area = length*width;
				cout << "Calculated area of rectangle is : " << area <<endl;
					cout << "(1)EXIT        (2)CONTINUE\n" ;
				cin >> j;
				if (j==1) {
					j=0;
				}
				else if(j==2) {
					cout << "Enter your choice :  ";
					cout << endl << endl;
					cout << "Choose the option for desired shape : \n";
					cout << "(1) Triangle\n";
					cout << "(2) Rectangle\n";
					cout << "(3) Circle\n";
					cout << "(4) Sphere\n";
					cout << "Enter your choice : ";
					cin >> opt;
					break;
				}
				break;
			case 3 :
				cout << endl;
				cout << "Chosen shape : CIRCLE\n";
				cout << "Enter the radius of circle : " ;
				cin >> radius;
				area = pi*radius*radius;
				cout << "Calculated area of circle is : " << area <<endl;
				cout << "(1)EXIT        (2)CONTINUE\n" ;
				cin >> j;
				if (j==1) {
					j=0;
				}
				else if(j==2) {
					cout << "Enter your choice :  ";
					cout << endl << endl;
					cout << "Choose the option for desired shape : \n";
					cout << "(1) Triangle\n";
					cout << "(2) Rectangle\n";
					cout << "(3) Circle\n";
					cout << "(4) Sphere\n";
					cout << "Enter your choice : ";
					cin >> opt;
					break;
				}
				break;
			case 4:
				cout << endl;
				cout << "Chosen shape : SPHERE\n";
				cout << "Enter the radius of sphere : ";
				cin >> radius;
				area = 4*pi*radius*radius;
				cout << "Calculated area of sphere is : " << area <<endl;
					cout << "(1)EXIT        (2)CONTINUE\n" ;
				cin >> j;
				if (j==1) {
					j=0;
				}
				else if(j==2) {
					cout << "Enter your choice :  ";
					cout << endl << endl;
					cout << "Choose the option for desired shape : \n";
					cout << "(1) Triangle\n";
					cout << "(2) Rectangle\n";
					cout << "(3) Circle\n";
					cout << "(4) Sphere\n";
					cout << "Enter your choice : ";
					cin >> opt;
					break;
				}
				break;
			default:
				cout << "Invalid choice !! Please enter correct choice...." <<endl;
					cout << "(1)EXIT        (2)CONTINUE\n" ;
				cin >> j;
				if (j==1) {
					j=0;
				}
				else if(j==2) {
					cout << "Enter your choice :  ";
					cout << endl << endl;
					cout << "Choose the option for desired shape : \n";
					cout << "(1) Triangle\n";
					cout << "(2) Rectangle\n";
					cout << "(3) Circle\n";
					cout << "(4) Sphere\n";
					cout << "Enter your choice : ";
					cin >> opt;
					break;
				}
				break;
			}

		}
		else if(j==0) {
			"Thanks for using the calculator!!!";
			break;
		}


	}

*/

	/*
	    char opt;
	    cout << "Simple calculator!!\n";
	    float n1,n2;
	    cout << "Enter first number : ";
	    cin >> n1;
	    cout << "Enter second number : ";
	    cin >> n2;
	    cout << "Choose your operation - : ";
	    cin>>opt;

	    switch(opt){
	        case '+':
	            cout << "Sum of the numbers is : " << n1+n2;
	            break;
	        case '-':
	            cout << "Diffrence of the numbers is : " << n1-n2;
	            break;
	        case '*':
	            cout << "Product of the numbers is : " << n1*n2;
	            break;
	        case '/':
	            cout << "Division of the numbers is : " << n1/n2;
	            break;
	    }

	    */

	// sales amount programme
	/*  float sales_amt,dis,dis_amt;
	  cout<< "Enter the sales amount : ";
	  cin >> sales_amt;
	  if (sales_amt>5000){
	      dis = 12;
	  }
	  else {
	      dis = 7;
	  }

	  dis_amt = (sales_amt*dis)/100;
	  cout << "discount amount applied is : " << dis_amt << endl;
	  cout << "Final price after discount is : " << sales_amt-dis_amt;

	  */
	/*
	int year;
	cout << "Enter year : ";
	cin >> year;

	if (year%100==0){
	    if(year%400==0){
	        cout << "Leap year";
	    }
	    else{
	        cout <<"Not a leap year";
	    }
	}
	else if (year%4==0){
	    cout << "Year is leap";
	}
	else {
	    cout << "Year is not leap";
	}
	}

	*/
	/*   char txt;
	   cout << "Enter a character : ";
	   cin >> txt;
	   cout << "Before change : "<<txt << endl;
	   if (txt>='a' && txt <='z'){
	       cout << "Character is in lowercase"<<endl;
	       txt = toupper(txt);
	   }
	   else if(txt>='A' && txt <= 'Z'){
	       cout << "Character is in uppercase"<<endl;
	       txt = tolower(txt);
	   }
	   cout << "After change : "<<txt;
	   */

	// int num;
	// cout << "Enter number : ";
	// cin >> num;

	// if (num%3==0 && num%5!=0){
	//     cout << "THREE!!!!";
	// }
	// else if (num%5==0 && num%3!=0){
	//     cout "FIVE";
	// }
	// else if {
	//     cout "BOTH";
	// }
	// else{
	//     cout "NONE";
	// }
}
