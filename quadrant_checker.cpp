#include <iostream>
using namespace std;

int main(){
    float x,y;
    cout << "Enter 'x' coordinate : ";
    cin >> x;
    cout << "Enter 'y' coordinate : ";
    cin >> y;

    if (x>0 && y>0){
        cout << "You are in first quadrant";
    }
    else if(x<0 && y>0){
        cout << "You are in second quadrant";
    }
    else if(x<0 && y<0){
        cout << "Your are in third quadrant";
    }
    else if(x>0 && y<0){
        cout << "You are in fourth quadrant";
    }
    else if (x==0 && y==0){
        cout<<"You are in third quadrant";
    }
    else {
        cout << "You are on a borderline";
    }
}
