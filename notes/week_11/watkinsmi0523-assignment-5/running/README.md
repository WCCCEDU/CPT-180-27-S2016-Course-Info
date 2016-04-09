### Assignment 5
##### Structured Data (Refactor Assignment)
Structures make it so much easier to organize and consume data. Let's think how a structure could be employed to improve you Config File Generator and Config Reader Library.

In our Reader Library you consumed your config file into an array and returned its pointer to your Driver project. Instead of returning an array of loosely associated values you could have returned a `struct` if you knew what a `struct` was at the time.

The same is true of your Config File Generator it could take advantage of many structures. Your config file could be read into a `struct` but also some things like `timezone` could be stored in an `enum` so you can easily validate data the user provides.

##### Here is what you will build:
###### A better Config Reader and Config Generator

1. You will refactor your `ConfigReader` Library to return a `struct` pointer instead of an string* (string pointer)
  - Your struct should match the fields in your file

    ```txt
    first_name
    last_name
    timezone
    ...
    ```
  - The definition for your struct should be kept in the libraries .h file so you can use it in your ConfigGenerator without redefining it there.
  - You will write a config file writer function that takes your `struct` as an argument and exposes the function as a prototype in your .h file
  - You might consider renaming your namespace since you are not longer a config reader but this is optional. The signature for this function might look a little like this
    - `bool writeConfig(std::string path, configStruct data)`
      - This will write the data in the struct to the path given.
      - This will return a `true` if the file is written successfully.
      - This will return `false` if the file cannot be opened or written to.
2. You will refactor your `Config File Generator` to take advantage of your Config reader library
  - It will rely on the `ConfigReader` to read a file path you define as a const in your Generator
  - When performing `Init` and `Edit` operations your Generator should employ the same struct as your `ConfigReader` for keeping track of your data.
  - Utilize the `ConfigReader`'s new writer function to save your file to the file system after init or edit.
3. Organize your project files
  - Put your `ConfigGenerator` project in the `config_generator` folder of this project
  - Put your `ConfigReader` library project in the `config_reader_lib` folder
  - Push and open PR
