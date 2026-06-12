#include <iostream>
#include <string>

using namespace std;

// Function to encrypt text using a basic Caesar Cipher shift
string encryptData(string text, int shift) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i]))
            result += char(int(text[i] + shift - 65) % 26 + 65);
        else if (islower(text[i]))
            result += char(int(text[i] + shift - 97) % 26 + 97);
        else
            result += text[i]; // Keep spaces and punctuation the same
    }
    return result;
}

int main() {
    string message = "Secure This Data";
    int shiftKey = 4;
    
    cout << "Original Message: " << message << "\n";
    cout << "Encrypted Message: " << encryptData(message, shiftKey) << "\n";
    
    return 0;
}
