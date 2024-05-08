# include <iostream>
# include <fstream>
using namespace std;

int main() {
    cout << "What would you like to name your file?";
    
    string mystring;
    string input_file_name;
    cin >> input_file_name;

	mystring = "Hello World from ";
	string complete_file_name;
	complete_file_name = input_file_name + ".txt";

	ofstream new_file (complete_file_name);
	if (new_file.is_open()) {
		new_file << mystring << input_file_name << "\n";
		new_file.close();
	}
	else {
		cout << "something went wrong!";
		return 1;
	}

    return 0;
}
