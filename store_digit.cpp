# include <iostream>
# include <vector>
using namespace std;


vector <int> extractDigit(int num){
    static vector<int> digits;
    if (num == 0) return {};
    int digit = num % 10;
    digits =  extractDigit(num / 10);
    digits.push_back(digit);

    return digits;
}

int main(){
    int number;
    cout<< "Enter a number: ";
    cin>>number;
    vector <int> arr = extractDigit(number);
    int size = arr.size();
    for(int i = 0; i < size; i++){
        cout << arr[i] << "\n";
    }



    return 0;
}
