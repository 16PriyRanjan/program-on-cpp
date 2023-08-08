#include <iostream>
using namespace std;
void reverseName(char* name) {
    // Find the length of the name
    int length = 0;
    while (name[length] != '\0') {
        length++;
    }
    
    // Reverse the name
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char name[MAX_LENGTH];
    
    cout << "Enter your name: ";
    cin.getline(name, MAX_LENGTH);
    
    reverseName(name);
    
    cout << "Reversed name: " << name << endl;
    
    return 0;
}

