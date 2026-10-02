#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <complex>
#include <string>

#include "Services/helper.cpp"

using namespace std;

/**
 *
 * @return
 */
int main() {
    string currentPath = "C:/users/testUser";
    do {
        constexpr char pathTerminator = '>';
        cout << currentPath + pathTerminator << " ";
        string input;
        cin >> input;
        
    } while (true);

    return EXIT_SUCCESS;
}