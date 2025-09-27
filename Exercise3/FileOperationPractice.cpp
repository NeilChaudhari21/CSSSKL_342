#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    ifstream infile;
    infile.open("textfile1.txt");

    if (!infile.is_open()) {
        cerr << "Didn't open file.";
        exit(-1);
    }
    else {
        int num;
        while (infile >> num) {
            infile >> num;
            cout << num << endl;
        }

        infile.close();

    }

}