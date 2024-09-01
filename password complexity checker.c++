#include <iostream>

using namespace std;

int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;

    int length = password.length(),uppercase = 0,lowercase = 0,numbers = 0,specialChars = 0;
    
    for (char c : password) {
        if (isupper(c)) uppercase++;
        else if (islower(c)) lowercase++;
        else if (isdigit(c)) numbers++;
        else if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%') specialChars++;
    }
    
    cout << "Password Strength:" << endl;
    cout << "Length: " << length << endl;
    cout << "Uppercase Letters: " << uppercase << endl;
    cout << "Lowercase Letters: " << lowercase << endl;
    cout << "Numbers: " << numbers << endl;
    cout << "Special Characters: " << specialChars << endl;

    if (length < 8) cout << "Password is too short. Aim for at least 8 characters." << endl;
    if (uppercase == 0) cout << "Add at least one uppercase letter." << endl;
    if (lowercase == 0) cout << "Add at least one lowercase letter." << endl;
    if (numbers == 0) cout << "Add at least one number." << endl;
    if (specialChars == 0) cout << "Add at least one special character (!, @, #, etc.)." << endl;

    int score = 0;
    if (length >= 8) score++;
    if (uppercase > 0) score++;
    if (lowercase > 0) score++;
    if (numbers > 0) score++;
    if (specialChars > 0) score++;

    cout << "Password Strength Score: " << score << "/5" << endl;

    return 0;
}
