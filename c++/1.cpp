//password strength checker
#include <iostream>
#include <string>
using namespace std;

string passwordstrengthchecker(const string& password) {
    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;
    int n = password.length();
    string specialChars = "!@#$%^&*()-+";

    for (auto ch : password) {
        if (islower(ch)) hasLower = true;
        else if (isupper(ch)) hasUpper = true;
        else if (isdigit(ch)) hasDigit = true;
        else if (specialChars.find(ch) != string::npos) hasSpecial = true;
    }

    int totalconditionslength = hasLower + hasUpper + hasDigit + hasSpecial;
    int passwordlength = n;

    if (passwordlength >= 6 && totalconditionslength >= 3) {
        return "Strong";
    } else if (passwordlength >= 6 && totalconditionslength == 2) {
        return "Moderate";
    } else {
        return "Weak";
    }
}

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;

    string strength = passwordstrengthchecker(password);
    cout << "Password Strength: " << strength << endl;

    if (strength == "Weak") {
        cout << "Tips to improve your password strength:\n";
        cout << "1. Use at least 6 characters.\n";
        cout << "2. Include lowercase and uppercase letters.\n";
        cout << "3. Add digits and special characters.\n";
    }

    return 0;
}
