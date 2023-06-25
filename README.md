A summary of the script:

    1. The script includes necessary libraries and a user-defined class called `StringCounter` from the "StringCounter.h" header file.
    2. The `fileMapper()` function reads a text file named "CS210_Project_Three_Input_File.txt" and counts the frequency of each word using an instance of the `StringCounter` class. It returns the `StringCounter` object containing the word frequencies.
    3. The `printNumbers()` function retrieves the word frequencies by calling `fileMapper()` and prints each word and its frequency on the console.
    4. The `printHistogram()` function retrieves the word frequencies by calling `fileMapper()`. It then prints a histogram representation of each word and its frequency using asterisks on the console.
    5. The `printSearch()` function allows the user to input a search word. It retrieves the word frequencies by calling `fileMapper()` and prints the frequency of the searched word on the console.
    6. The `printFile()` function retrieves the word frequencies by calling `fileMapper()` and writes the word-frequency pairs to an output file named "frequency.dat".
    7. The `menu()` function presents a menu to the user with options to perform various operations. It validates user input and executes the corresponding function based on the chosen option. It continues to display the menu until the user chooses the "exit" option.
    8. The `main()` function calls the `menu()` function to start the program. After the user exits the menu, it calls the `printFile()` function to save the word-frequency pairs to the output file. Finally, it returns 0 to indicate successful execution.


Positive aspects
    1. Modularity: Have divided your code into multiple functions, each responsible for a specific task. This modular approach enhances code readability and maintainability.
    2. Exception handling: Have implemented exception handling using try-catch blocks to catch and handle potential exceptions. This helps in gracefully handling errors and displaying meaningful error messages to the user.
    3. Encapsulation: Have encapsulated the word counting functionality within the StringCounter class. This allows for better organization of code and reusability of the word counting logic.
    4. User interaction: The menu() function provides a user-friendly menu interface with clear instructions for the available options. It validates user input to ensure that only valid options are accepted.
    5. File handling: have effectively utilized file input/output operations (ifstream and ofstream) to read from and write to files. The printFile() function writes the word-frequency pairs to an output file named "frequency.dat".Proper use of standard libraries: You have made use of standard C++ libraries such as iostream, map, string, fstream, and sstream appropriately to achieve the desired functionality.
Possible improvements

    1. Error handling: Have implemented exception handling but, it would be beneficial to provide more specific error messages. Instead of simply outputting the exception's `what()` message, you could provide more descriptive error messages that guide the user on how to resolve the issue. This would make your code more user-friendly and help in troubleshooting.
    2. Input validation: In the `printSearch()` function, after reading the search word using `std::cin`, it would be a good idea to validate the input. Ensure that the user has provided a valid search word and handle cases where the input is empty or contains whitespace. Additionally, sanitizing the input to prevent any potential security vulnerabilities, such as SQL injection or code injection.
    3. Memory management: The `fileMapper()` function returns a `StringCounter` object by value. If the `StringCounter` class contains a large amount of data, returning by value can lead to unnecessary copying and memory overhead. Could use a smart pointer.
    4. File existence check: Before attempting to open the input file ("CS210_Project_Three_Input_File.txt") in the `fileMapper()` function, it would be prudent to check if the file exists. If the file does not exist or cannot be opened, you can provide a more informative error message to the user. This helps in handling potential file-related errors and prevents unexpected behavior.
    5. Performance optimization: Currently, the `fileMapper()` function reads the input file line by line and processes each word individually. Depending on the size of the input file, this approach may not be the most efficient.
    6. Robustness: Although the `menu()` function validates the user's input for the menu options, it does not handle non-numeric input gracefully. If the user enters a non-numeric value, the program will throw an exception. It would be better to handle this case explicitly and prompt the user to enter a valid numeric option.
    7. Code organization: Organizing your code into separate header and source files. Move the function declarations to a header file (e.g., "MenuFunctions.h") and the corresponding function definitions to a source file (e.g., "MenuFunctions.cpp"). This separation enhances code readability, modularity, and reusability.# cs210
