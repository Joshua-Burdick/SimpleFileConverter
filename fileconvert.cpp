#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string filename, type, read;
    ifstream inFile;
    ofstream outFile;

    cout << "Enter the name of the file to open: ";
    getline(cin, filename);

    cout << "Enter the file type to convert to: ";
    getline(cin, type);

    inFile.open(filename);
   
    filename = filename.substr(0, filename.find('.')); //remove the file extension

    outFile.open(filename + "." + type);

    while (!inFile.eof()) {
        getline(inFile, read);
        
        outFile << read << "\n";
    }
}
