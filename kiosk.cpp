#include <iostream>
#include <vector>
using namespace std;

void clearScreen() {
#if _WIN32
    system("cls");
#else 
    system("clear");
#endif
}

void displayMenu(const vector<string>& menuItems,
                 const vector<double>& menuPrices) {
    cout << "=============================\n";
    cout << "         M E N U\n";
    cout << "=============================\n\n";
    for(int i = 0; i < menuItems.size(); i++) {
        cout << i << " - "
             << menuItems[i]
             << " - Php"
             << menuPrices[i] << endl;
    }
}

string ADMIN_PASSCODE = "6767";

int login(string& passcode) {
    int role;
    string input;

    cout << "[1] User   [2] Admin   [3] Shutdown\n";
    cout << "Enter choice: ";
    cin >> role;

    if(role == 2) {
        cout << "Enter Admin Passcode: ";
        cin >> input;
        if(input != passcode) return 0;
    }
    return role;  
}

void adminMenu(vector<string>& menuItems,
               vector<double>& menuPrices,
               string& passcode) {
    int choice;
    do {
        clearScreen();
        cout << "1. View Menu\n";
        cout << "2. Add New Menu Item\n";
        cout << "3. Update Password\n";
        cout << "4. Exit\n";
        cin >> choice;

        if (choice == 1) {
            clearScreen();
            displayMenu(menuItems, menuPrices);
            int pause;
            cout << "Press Any Number To Return: ";
            cin >> pause;
        }
        if(choice == 2) {
            string newItem; double newPrice;
            cin.ignore();
            cout << "Enter item name: ";
            getline(cin, newItem);
            cout << "Enter price: ";
            cin >> newPrice;
            menuItems.push_back(newItem);
            menuPrices.push_back(newPrice);
        } 
        
        if (choice == 3) {
            clearScreen();
            string newPasscode;
            cout << "Enter new passcode: ";
            cin >> newPasscode;
            passcode = newPasscode;
            cout << "New passcode set!" << endl;
            int pause;
            cout << "Press Any Number To Return: ";
            cin >> pause;
        }

        if (choice != 4) {
            clearScreen();
        }

    } while(choice != 4);
}

void userMenu(const vector<string>& menuItems,
              const vector<double>& menuPrices) {
    int index;
    int choice;
    vector<string> receiptItems;

    vector<double> receiptPrices;

    vector<int> receiptQuantities; 


    
    do {
        clearScreen();

        cout<< "Order Kiosk Machine - Diwata Pares Overload Naga"<<endl;
        cout<< "1. View Menu\n";
        cout<< "2. Add Item to Receipt\n";
        cout<< "3. Remove Item from Receipt\n";
        cout<< "4. View Receipt\n";
        cout<< "5. Exit\n";
        cout<< "Enter Choice: ";
        cin >> choice;

        if(choice == 1) {
            clearScreen();
            displayMenu(menuItems, menuPrices);

            cout<<"Press Any Number To Return: ";
            cin >> index;
        }
        else if(choice == 2 ){
            clearScreen();
            displayMenu(menuItems, menuPrices);

            cout<< "Enter item number to Add: ";
            cin >> index;

            if (index >= 0 && index < menuItems.size()) {
                int n;
                cout<<"How many items would you like to order? ";
                cin >> n;

                
                if (n > 0) {

                    // When adding an item — check for duplicates first:
                    bool found = false;
                    for(int i = 0; i < receiptItems.size(); i++) {
                        if(receiptItems[i] == menuItems[index]) {
                            receiptQuantities[i] += n; // merge !
                            found = true;
                            break;
                        }
                    }
                    if(!found) {
                        receiptItems.push_back(menuItems[index]);
                        receiptPrices.push_back(menuPrices[index]);
                        receiptQuantities.push_back(n);
                    }
                    cout << "Items added!"<<endl;
                }
                else {
                    cout<< "Invalid quantity."<<endl;
                }

            } else {
                cout << "Invalid Input. "<<endl;
            }

            cout<<"Press Any Number To Return: ";
            cin >> choice;

        }
        else if(choice == 3) {
            clearScreen();
            int idx;
            if (receiptItems.empty()) {
                cout <<"Receipt is empty :<"<<endl;
            }
            else {
                for(int i = 0; i < receiptItems.size(); i++) {
                    cout << i << " - " << receiptQuantities[i] << "x " << receiptItems[i]
                         << " - Php" << receiptQuantities[i] * receiptPrices[i] << endl;
                }

                cout << endl << "1. Clear All Items" << endl;
                cout << "2. Remove Specific Item" << endl;
                cout << "Enter choice: ";
                int removeChoice;
                cin >> removeChoice;

                if (removeChoice == 1) {
                    receiptItems.clear();
                    receiptPrices.clear();
                    receiptQuantities.clear();
                    cout << "Cleared all receipt items!" << endl;
                }
                else if (removeChoice == 2) {
                    cout << endl << "Enter item number to remove: ";
                    cin >> idx;

                    if (idx >= 0 && idx < receiptItems.size()) {
                        if (receiptQuantities[idx] > 1) {
                            cout << "1. Reduce quantity by 1" << endl;
                            cout << "2. Remove item entirely" << endl;
                            cout << "Enter choice: ";
                            int choice2;
                            cin >> choice2;

                            if (choice2 == 1) {
                                receiptQuantities[idx]--;
                                cout << "Quantity reduced by 1." << endl;
                            } 
                            else if (choice2 == 2) {
                                receiptItems.erase(receiptItems.begin() + idx);
                                receiptPrices.erase(receiptPrices.begin() + idx);
                                receiptQuantities.erase(receiptQuantities.begin() + idx);
                                cout << "Item removed entirely." << endl;
                            } 
                            else {
                                cout << "Invalid choice." << endl;
                            }
                        } 
                        else {
                            receiptItems.erase(receiptItems.begin() + idx);
                            receiptPrices.erase(receiptPrices.begin() + idx);
                            receiptQuantities.erase(receiptQuantities.begin() + idx);
                            cout << "Item removed." << endl;
                        }
                    } 
                    else {
                        cout << "Invalid item number." << endl;
                    }
                }
                else {
                    cout << "Invalid choice." << endl;
                }

                cout << "Press Any Number To Return: ";
                cin >> idx;
            }
        }
        else if(choice == 4) {
            clearScreen();

            int total = 0;                     // always have a total variable
            if(receiptItems.empty()) {
                cout <<"No Items Ordered."<<endl;
            }
            else {
                for(int i = 0; i < receiptItems.size(); i++) {
                    int subtotal = receiptQuantities[i] * receiptPrices[i];
                    cout<<receiptQuantities[i]<< "x - "<<receiptItems[i]
                        << " - Php"<<subtotal<<endl;
                    total += subtotal;
                }
                cout<<"Total: Php"<<total<<endl;

                // prompt only when there are items
                cout << "Do you want to checkout and pay? (Y/N): ";
                char checkout;
                cin >> checkout;

                if(checkout == 'Y' || checkout == 'y') {
                    double payment;
                    do {
                        cout << "Enter payment amount: ";
                        cin >> payment;
                        if(payment < total)
                            cout << "Insufficient. Please enter at least " << total << endl;
                    } while(payment < total);

                    double change = payment - total;
                    cout << "Change: " << change << endl;

                    // Clear receipt after successful payment
                    receiptItems.clear();
                    receiptPrices.clear();
                    receiptQuantities.clear();
                }
            }

            int pause;
            cout<<"Press Any Number To Return: ";
            cin>>pause;
        }
    } while(choice != 5);

    clearScreen();
    cout<<"THANK YOU CUSTOMER i love u :p, u da real food!";
    int pause;
    cout<<"\nPress Any Number To Return: ";
    cin>>pause;
}

int main() {
    vector<string> menuItems = {"Burger","Fries","Coke","Chicken"};
    vector<double> menuPrices = {99, 49, 39, 129};
    string adminPasscode = "6767";

    while(true) {
        int role = login(adminPasscode);
        if(role == 1) userMenu(menuItems, menuPrices);
        else if(role == 2) adminMenu(menuItems, menuPrices, adminPasscode);
        else if(role == 3) { break; } // shutdown
        else { cout << "Access Denied.\n"; break; }
    }
    return 0;
}

