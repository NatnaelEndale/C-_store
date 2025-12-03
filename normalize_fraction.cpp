# include <iostream>
using namespace std;

void reduceFraction(int&numerator, int&denominator, int f){
    numerator = numerator / f;
    denominator = denominator / f;

}

int main(){
    int numna = 8;
    int denomi = 9;
    int min;
    if (numna < denomi){
        min = numna;
    } else min = denomi;

    for(int i=min; i > 0; i--){
        if(numna % i ==0 && denomi % i == 0){
            reduceFraction(numna, denomi, i);
        }
    }

    cout << "numenator is: "<< numna<<"\n";
    cout << "denominator is: "<< denomi<<"\n";

    return 0;
}