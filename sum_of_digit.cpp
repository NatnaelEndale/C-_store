# include <iostream>
using namespace std;

int extractAdd(int num){
    static int sum=0;
    if (num == 0) return sum;
    int digit = num % 10;
    extractAdd(num/10);
    sum += digit;
}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>> number;

    cout<<"The sum of the digits is: "<<extractAdd(number)<<endl;
    
    return 0;

}