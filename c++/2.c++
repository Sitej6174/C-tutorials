//Enhanced Password Strength Checker
#include <iostream>
#include <string>
using namespace std;

string passwordStrengthChecker(const string& password) {
    bool hasLower = false, hasUpper = false;
    int digitCount = 0, specialCount = 0;
    int n = password.length();
    string specialChars = "!@#$%^&*()-+";

    // Count occurrences of each character type
    for (auto ch : password) {
        if (islower(ch)) hasLower = true;
        else if (isupper(ch)) hasUpper = true;
        else if (isdigit(ch)) digitCount++;
        else if (specialChars.find(ch) != string::npos) specialCount++;
    }

    // Check minimum length requirement
    if (n < 8) {
        return "Weak - Password must be at least 8 characters";
    }

    // Check for strong password: 8+ chars, 3+ special, 2+ digits, upper and lower case
    if (n >= 8 && specialCount >= 3 && digitCount >= 2 && hasLower && hasUpper) {
        return "Strong";
    }
    // Moderate: meets minimum length but missing some requirements
    else if (n >= 8 && specialCount >= 2 && digitCount >= 1 && (hasLower || hasUpper)) {
        return "Moderate";
    }
    // Weak: meets length but lacks other requirements
    else {
        return "Weak";
    }
}

void displayRequirements() {
    cout << "\n=== Password Requirements ===" << endl;
    cout << "1. Minimum 8 characters" << endl;
    cout << "2. At least 3 special characters (!@#$%^&*()-+)" << endl;
    cout << "3. At least 2 digits (0-9)" << endl;
    cout << "4. At least 1 lowercase letter (a-z)" << endl;
    cout << "5. At least 1 uppercase letter (A-Z)" << endl;
    cout << "===========================\n" << endl;
}

void analyzePassword(const string& password) {
    bool hasLower = false, hasUpper = false;
    int digitCount = 0, specialCount = 0;
    string specialChars = "!@#$%^&*()-+";

    for (auto ch : password) {
        if (islower(ch)) hasLower = true;
        else if (isupper(ch)) hasUpper = true;
        else if (isdigit(ch)) digitCount++;
        else if (specialChars.find(ch) != string::npos) specialCount++;
    }

    cout << "\n--- Password Analysis ---" << endl;
    cout << "Length: " << password.length() << " characters ";
    if (password.length() >= 8) cout << "✓" << endl;
    else cout << "✗ (Need at least 8)" << endl;

    cout << "Special characters: " << specialCount << " ";
    if (specialCount >= 3) cout << "✓" << endl;
    else cout << "✗ (Need at least 3)" << endl;

    cout << "Digits: " << digitCount << " ";
    if (digitCount >= 2) cout << "✓" << endl;
    else cout << "✗ (Need at least 2)" << endl;

    cout << "Lowercase letters: " << (hasLower ? "Yes ✓" : "No ✗") << endl;
    cout << "Uppercase letters: " << (hasUpper ? "Yes ✓" : "No ✗") << endl;
    cout << "------------------------\n" << endl;
}

int main() {
    string password;
    
    displayRequirements();

    // Loop until user enters a password with at least 8 characters
    while (true) {
        cout << "Enter your password (minimum 8 characters): ";
        cin >> password;

        if (password.length() < 8) {
            cout << "\n❌ Error: Password must be at least 8 characters long!" << endl;
            cout << "You entered " << password.length() << " character(s). Please try again.\n" << endl;
            continue;
        }
        break;
    }

    // Analyze and display password strength
    analyzePassword(password);
    
    string strength = passwordStrengthChecker(password);
    cout << "🔒 Password Strength: " << strength << endl;

    if (strength.find("Weak") != string::npos || strength == "Moderate") {
        cout << "\n💡 Tips to improve your password:" << endl;
        cout << "• Ensure you have at least 3 special characters (!@#$%^&*()-+)" << endl;
        cout << "• Include at least 2 digits (0-9)" << endl;
        cout << "• Use both lowercase (a-z) and uppercase (A-Z) letters" << endl;
        cout << "• Consider making it longer for extra security" << endl;
        cout << "\nExample of a strong password: MyP@ssw0rd#2024!" << endl;
    } else {
        cout << "\n✅ Great! Your password meets all security requirements." << endl;
    }

    return 0;
}