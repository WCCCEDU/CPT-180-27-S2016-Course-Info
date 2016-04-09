#include <iostream>
#include <string>
#include <fstream>
#include "config_reader_lib/reader.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;

int main(int argc, char *argv[]) {

    if (static_cast<string>(argv[1]) == "init") {

        config_lib::config write;

        while (write.name == "") {
            cout << "Enter your name: ";
            getline(cin, write.name);
        }

        while (write.email == "") {
            cout << "Enter your e-mail: ";
            getline(cin, write.email);
        }

        while (write.cypher == "") {
            cout << "Enter your cypher: ";
            getline(cin, write.cypher);
        }

        while (write.timezone_offset == "") {
            cout << "Enter you timezone offset: ";
            getline(cin, write.timezone_offset);
        }

        cout << "Enter your file path: ";
        getline(cin, write.file_path);
        if (write.file_path == "") {
            write.file_path = "knownrecipients.txt";
        }


        config_lib::write_config(write.file_path, write);

    } else if (static_cast<string>(argv[1]) == "edit") {

        config_lib::config read;
        if (static_cast<string>(argv[2]) == "name") {
            ifstream inFile;
            inFile.open(read.file_path);

            ofstream outFile;
            outFile.open(read.file_path);

            inFile >> read.name;
            inFile >> read.email;
            inFile >> read.cypher;
            inFile >> read.timezone_offset;
            inFile >> read.file_path;

            cout << "Enter a new name: " << endl;
            getline(cin, read.name);


            outFile << read.name << endl;
            outFile << read.email << endl;
            outFile << read.cypher << endl;
            outFile << read.timezone_offset << endl;
            outFile << read.file_path << endl;

            inFile.close();
            inFile.close();

        } else if (static_cast<string>(argv[2]) == "email") {
            ifstream inFile;
            inFile.open(read.file_path);

            ofstream outFile;
            outFile.open(read.file_path);

            inFile >> read.name;
            inFile >> read.email;
            inFile >> read.cypher;
            inFile >> read.timezone_offset;
            inFile >> read.file_path;


            cout << "Enter a new email: " << endl;
            getline(cin, read.email);


            outFile << read.name << endl;
            outFile << read.email << endl;
            outFile << read.cypher << endl;
            outFile << read.timezone_offset << endl;
            outFile << read.file_path << endl;

            inFile.close();
            inFile.close();

        } else if (static_cast<string>(argv[2]) == "cypher") {
            ifstream inFile;
            inFile.open(read.file_path);

            ofstream outFile;
            outFile.open(read.file_path);

            inFile >> read.name;
            inFile >> read.email;
            inFile >> read.cypher;
            inFile >> read.timezone_offset;
            inFile >> read.file_path;

            cout << "Enter a new cypher: " << endl;
            getline(cin, read.cypher);


            outFile << read.name << endl;
            outFile << read.email << endl;
            outFile << read.cypher << endl;
            outFile << read.timezone_offset << endl;
            outFile << read.file_path << endl;

            inFile.close();
            inFile.close();

        } else if (static_cast<string>(argv[2]) == "timezone") {
            ifstream inFile;
            inFile.open(read.file_path);

            ofstream outFile;
            outFile.open(read.file_path);

            inFile >> read.name;
            inFile >> read.email;
            inFile >> read.cypher;
            inFile >> read.timezone_offset;
            inFile >> read.file_path;

            cout << "Enter a new timezone offset: " << endl;
            getline(cin, read.timezone_offset);


            outFile << read.name << endl;
            outFile << read.email << endl;
            outFile << read.cypher << endl;
            outFile << read.timezone_offset << endl;
            outFile << read.file_path << endl;

            inFile.close();
            inFile.close();


        }

        return 0;
    }
}
