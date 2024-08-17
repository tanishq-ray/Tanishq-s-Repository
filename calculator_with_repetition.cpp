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

