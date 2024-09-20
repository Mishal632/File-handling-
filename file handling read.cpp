#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myfile("this.txt");
    string line;
    int lineCount = 0;

    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            lineCount++;
        }
        myfile.close();
        cout << "Number of lines: " << lineCount << endl;
    } else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}