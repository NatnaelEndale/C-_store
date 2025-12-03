# include <iostream>
using namespace std;

void sort_value(int & a, int & b){
    int t;
    if(a > b){
        t = a;
        a = b;
        b = t;
    }
}

int main(){
    int num1 = 2;
    int num2 = 2;
    cout << "Order before sorting"<<"\n";
    cout<<num1<<", "<<num2<<"\n";
    sort_value(num1, num2);
    cout << "Order after sorting"<<"\n";
    cout<<num1<<", "<<num2<<"\n";


    return 0;

}