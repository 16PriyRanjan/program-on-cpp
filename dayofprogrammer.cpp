#include <iostream>
using namespace std;

string dayOfProgrammer(int year) {
    string result;
    if (year == 1918) {
        // Special case for transition year 1918
        result = "26.09.1918";
    } else if ((year < 1918 && year % 4 == 0) || 
               (year > 1918 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))) {
        // Check if it's a leap year in both Julian and Gregorian calendars
        result = "12.09." + to_string(year);
    } else {
        // For non-leap years
        result = "13.09." + to_string(year);
    }
    return result;
}

int main() {
    int year;
    cin >> year;
    string result = dayOfProgrammer(year);
    cout << result << endl;
    return 0;
}

