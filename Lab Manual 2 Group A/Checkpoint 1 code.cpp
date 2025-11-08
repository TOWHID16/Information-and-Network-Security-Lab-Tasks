#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";

    
    for (int shift = 0; shift < 26; ++shift) {
        string plain = "";

        for (char c : cipher) {
            if (isalpha(c)) {
                
                char p = ((c - 'a' - shift + 26) % 26) + 'a';
                plain += p;
            } else {
                plain += c; 
            }
        }

        cout << "Shift " << shift << ": " << plain << endl;
    }

    return 0;
}
