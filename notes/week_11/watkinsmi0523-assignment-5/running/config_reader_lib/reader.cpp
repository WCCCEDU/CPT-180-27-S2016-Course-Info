
#include <string>
#include "reader.h"
#include <fstream>

namespace config_lib {
    config read_config(string config_file_path) {
        config arr;

        ifstream inFile(config_file_path);

        //    int count = 0;
        //    string line;
        //    for (count = 0; getline(inFile, line); ++count);
        //
        //    inFile.close();

        //inFile.open(config_file_path);

        getline(inFile, arr.name);
        getline(inFile, arr.email);
        getline(inFile, arr.cypher);
        getline(inFile, arr.timezone_offset);
        arr.file_path = config_file_path;


        inFile.close();

        return arr;

    }

    bool write_config(string config_file_path, config write) {
        ofstream outFile;
        outFile.open(config_file_path);
        if (outFile.is_open()) {
            outFile << write.name;
            outFile << write.email;
            outFile << write.cypher;
            outFile << write.timezone_offset;
            outFile << write.file_path;
        }

        outFile.close();
        return true;
    }
}
