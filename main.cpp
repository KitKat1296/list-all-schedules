/* File: main.cpp
 * --------------
 * Yu Personal Project
 */

#include <iostream>
#include "console.h"
#include "testing/SimpleTest.h"
using namespace std;

/*
 * Brings up testing menu.
 */
int main() {
    if (runSimpleTests(SELECTED_TESTS)) {
        return 0;
    }
    cout << "All done, exiting" << endl;
    return 0;
}
