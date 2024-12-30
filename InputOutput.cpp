//
// Created by Aung Naing Thu on 12/14/2024.
//
#include "iostream"
using namespace std;

int main() {
    cout << "Please enter your name: ";
    string name;
    getline(cin, name);

    while (name.empty()) {
        cout << "Please enter your name: ";
        getline(cin, name);
    }

    cout << "Hello " << name << "!" << endl;
    return 0;
}
