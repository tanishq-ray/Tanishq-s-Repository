#include <iostream>
using namespace std;

int main(){
    //the discount dealer
    cout << "Melvald's General Store";
    cout << endl;
    string name;
    float amt,dis,final_amt;
    cout << "Enter customer name : ";
    cin >> name;
    cout << endl;
    cout << "Enter amount : ";
    cin >> amt;
    cout << endl;

    if(amt>=100){
        dis = 20; 
        cout << "Discount of " << dis << "% applied!!";
        cout << endl;
    }
    else if(amt>=50 && amt<100){
        dis = 10;
        cout << "Discount of " << dis << "% applied!!";
        cout << endl;
    }
    else{
        cout << "No discount applied";
    }
    final_amt = amt - ((amt*dis)/100);
    cout << "Final price after applying discount is : " << final_amt;

}
