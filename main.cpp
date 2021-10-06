#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    //initialization
    string prod_name = "";
    string cashier_name = "";
    int prod_qty = 0;
    float prod_price = 0.0;
    float amount_due = 0.0;

    //get the current system time
    time_t today = time(0);
    char* today_readable = ctime(&today);


    //input
    cout << "Art's Store Point of Sales System" << endl;
    cout << "Enter the cashier's name: ";
    getline(cin, cashier_name);
    cout << "Enter product name: ";
    getline(cin, prod_name);
    cout << "Enter unit price: ";
    cin >> prod_price;
    cout << "Enter Qty sold: ";
    cin >> prod_qty;

    system("cls");

    //process
    amount_due = prod_price * prod_qty;

    //output
    cout << "============Purchase Receipt==============" << endl;
    cout << "\t     Art's Store" << endl;
    cout << "\t     Point of Sales" << endl;
    cout << "\n";

    cout << "Transaction date: "<< today_readable <<endl;
    cout << "Cashier's name: " << cashier_name <<endl;
    cout << "\n";

    cout << "Product          QTY   Unit Price   Amount" << endl;
    cout << prod_name << "\t\t" << prod_qty << "\t\t" << prod_price << "\t"
    << amount_due << endl;
    cout << "==========================================" << endl;
    cout << "\t\tTotal amount due: PHP " << amount_due << endl;

    return 0;
}
