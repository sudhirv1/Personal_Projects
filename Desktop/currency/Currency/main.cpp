//
//  main.cpp
//  Currency Converter
//
//  Created by Sudhir Venkat on 7/30/21.
//

#include <iostream>
using namespace std;

//int main(int argc, const char * argv[])
void menu(){
    cout << "Enter your Amount in USD" << endl << endl <<"$";
    double amount;
    cin >> amount;
    cout << endl << "Choose which currency you wish to convert to" << endl << endl;
    cout << "1. Pounds" << endl << "2. Euros" << endl << "3. Yen" << endl << "4. Yuan" << endl << endl;
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        int rateChoice;
        cout << endl << "Enter 1 for standard rate, Enter 2 to create your own" << endl << endl;
        cin >> rateChoice;
        if(rateChoice == 1) {
            cout << endl;
            cout<< "£" << amount * .72 << " Pounds Sterling" << endl;
        }
        if(rateChoice == 2) {
            double newRate;
            cout << "Enter rate" << endl;
            cin >> newRate;
            cout << endl;
            cout<< "£" << amount * newRate << " Pounds Sterling" << endl;
        }
    }
    
    if(choice == 2) {
        int rateChoice;
        cout << endl << "Enter 1 for standard rate, Enter 2 to create your own" << endl << endl;
        cin >> rateChoice;
        if(rateChoice == 1) {
            cout << endl;
            cout<< "€" << amount * .84 << " Euros" << endl;
        }
        if(rateChoice == 2) {
            double newRate;
            cout << "Enter rate" << endl;
            cin >> newRate;
            cout << endl;
            cout<< "€" << amount * newRate << " Euros" << endl;
        }
    }
    
    if(choice == 3) {
        int rateChoice;
        cout << endl << "Enter 1 for standard rate, Enter 2 to create your own" << endl << endl;
        cin >> rateChoice;
        if(rateChoice == 1) {
            cout << endl;
            cout<< "¥" << amount * 109.33 << " Yen" << endl;
        }
        if(rateChoice == 2) {
            double newRate;
            cout << "Enter rate" << endl;
            cin >> newRate;
            cout << endl;
            cout<< "¥" << amount * newRate << " Yen" << endl;
        }
    }
    
    if(choice == 4) {
        int rateChoice;
        cout << endl << "Enter 1 for standard rate, Enter 2 to create your own" << endl << endl;
        cin >> rateChoice;
        cout << endl;
        if(rateChoice == 1) {
            cout<< "¥" << amount * 6.46 << " Yuan" << endl;
        }
        if(rateChoice == 2) {
            double newRate;
            cout << "Enter rate" << endl;
            cin >> newRate;
            cout << endl;
            cout<< "¥" << amount * newRate << " Yuan" << endl;
        }
    }
}

int main(){
    int startOption;
    cout<< "Welome to currency convertor, enter 1 to continue or press 0 to exit" << endl << endl;
    cin >> startOption;
    if(startOption == 0) {
        return 0;
    }
    if(startOption == 1) {
        while(startOption == 1) {
            menu();
            cout << "----------------------------------------------------------" << endl;
            cout << "To do another conversion enter 1, else enter anything else" << endl;
            cin>> startOption;
        }
    }
}
