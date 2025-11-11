#include <iostream>
using namespace std;
int check_leap (int year){
    if (year % 4 == 0) {
        if (year % 100 == 0){
            if (year % 400 == 0){return 1;}
            else {return 0;}
        }
        else{return 1;}
    }
    else {
        return 0;}
    // return 0;
}

int main() 
{
    int year;
    cout << "Enter the year: ";
    cin >> year;
    int result;
    result = check_leap(year);
    if (result == 1){
        cout << "It's leap year!"<< endl;
    }else {cout << "It's not leap year!"<< endl;}

    return 0;
}
