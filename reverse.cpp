#include <iostream>
#include <string>

using namespace std;

string reverse(string palavra) {
    string transf = "";
    for (int i = palavra.length(); i >= 0; i--) {
        transf += palavra[i];
    }
    return transf;
}

int main() {
  cout << reverse("target");
}
