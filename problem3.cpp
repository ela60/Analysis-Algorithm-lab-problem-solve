#include <iostream>
#include <string>

using namespace std;

int shortestLengthAfterBombs(const string& s) {
    string result;
    bool bombed = false;

    for (size_t i = 0; i < s.length(); ) {
        if (i + 1 < s.length() && (s[i] == 'A' && s[i + 1] == 'B' || s[i] == 'B' && s[i + 1] == 'B')) {
            bombed = true;
            i += 2;
        } else {
            result += s[i];
            i++;
        }
    }

    if (bombed) {
        return shortestLengthAfterBombs(result);
    }

    return result.length();
}

void solve(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int shortestLength = shortestLengthAfterBombs(s);
    cout << "Shortest length of the string: " << shortestLength << endl;

}

int main() {
   int t;
   cin >> t;
   while (t--)
   {
     solve();
   }

    return 0;
}
