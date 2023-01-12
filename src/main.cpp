#include <iostream>
using namespace std;

void showMen() {
     cout<< "**********MENU*********"<< endl;
     cout<< "1. Check Balance"<< endl;
     cout<< "2. Deposit"  << endl;
     cout<< "3. Withdraw"  << endl;
     cout<< "4. Exit"  << endl;
     cout<< "************************"  << endl;
}
int main()
{
    //check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    do{
    showMen();
    cout <<"Option:";
    cin >> option;
    // cls is windows specific, the euquivalent on linux is clear, change this if on Linux
    system("cls");
    switch(option) {
        case 1: cout << "Balance is: " <<balance <<" $ " << endl; break;
        case 2: cout << ":Deposit amount:";
             double depositAmount;
             cin >> depositAmount;
             balance += depositAmount;
             break;
        case 3: cout <<  "Withdraw amount:";
             double withdrawAmount;
             cin >> withdrawAmount;
             if (withdrawAmount <= balance)
                 balance -= withdrawAmount;
             else
                cout << "Not enough money" << endl;
             break;

        }
    } while (option!=4);

    // This is writing to a file called 0 on linux 
    system("pause>0");
}
