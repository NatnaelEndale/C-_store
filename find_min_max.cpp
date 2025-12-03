# include <iostream>
using namespace std;

void getMinMax(int a, int b, int c, int & minvalue, int & maxValue){
    if (a >= b && a >= c){
        maxValue = a;
    }
    else if(b >= a && b >= c){
        maxValue = b;}
    else if(c >= a && c >= b){
        maxValue = c;}
    if (a <= b && a <= c){
        minvalue = a;
    }
    else if(b <= a && b <= c){
        minvalue = b;}
    else if(c <= a && c <= b){
        minvalue = c;}
}

int main(){
    int num1 = 5;
    int num2 = 5;
    int num3 = 2;
    int max_, min_;

    getMinMax(num1, num2, num3, min_, max_);

    cout<< "Minumum number is: "<<min_<<"\n";
    cout<< "Maximum number is: "<<max_<<"\n";

    return 0;

}