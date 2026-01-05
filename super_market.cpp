#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int id;
    string name;
    int quantity;
    double price;
};

void showLowStock(Product arr[],  int size)
{
    for(int i=0; i<size; i++){
        if(arr[i].quantity < 5){
            cout<<"--The low stock products--\n";
            cout <<arr[i].name<< endl;
        }
    }

}

int main()
{
    int size=3;
    Product inventory[size];
    for(int i=0; i < size; i++){
        Product new_struct;
        cout<<"Enter the Id: ";
        cin >> new_struct.id;
        cout<<"Enter the name of the product: ";
        cin >> new_struct.name;
        cout<<"Enter the quantity: ";
        cin >> new_struct.quantity;
        cout<<"Enter the price: ";
        cin >> new_struct.price;
        inventory[i] = new_struct;
    }
    for(int i=0; i<size; i++){
        double t;
        t = inventory[i].quantity * inventory[i].price;
        cout << "Total value for each enventory: "<<t<<endl;
    }

    showLowStock(inventory, size);

    return 0;
}