#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    vector<Contact> directory;
    int choice;
    string searchName;

    cout << "=== Digital Contacts Directory ===" << endl;

    while (true) {
        cout << "\n1. Add Contact\n2. Search Contact\n3. Exit\nChoice: ";
        cin >> choice;

        if (choice == 3) break;

        if (choice == 1) {
            Contact newContact;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, newContact.name);
            cout << "Enter Phone: ";
            cin >> newContact.phone;
            directory.push_back(newContact);
            cout << "Contact saved successfully!" << endl;
        } 
        else if (choice == 2) {
            cout << "Enter Name to Search: ";
            cin.ignore();
            getline(cin, searchName);
            bool found = false;
            for (const auto& c : directory) {
                if (c.name == searchName) {
                    cout << "Found! Phone: " << c.phone << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Contact not found!" << endl;
        }
    }
    return 0;
}
