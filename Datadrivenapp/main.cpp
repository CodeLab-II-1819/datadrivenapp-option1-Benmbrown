#include <iostream> 
#include <fstream> // Include fstream so I can actually call and read in the sample tweets file.
#include <string> // Allow string variables

using namespace std;
void displaymenu(); // Function to deploy menu with options.

int main() {
	displaymenu(); // Calling the function.
	int choice; // An integer variable called choice. This will be for the user input.
	
	
		cin >> choice; // User input. Select a number. 

		if (choice == 1) { // An if statement for when the 1st option is selected.

			cout << "You have selected count tweets" << endl; // Letting the user know what option they've selected.

			ifstream infile; // Input file stream. Can read the information from the sample tweets file.
			infile.open("sampleTweets.csv"); // The correct name of the file in my folder.

			int count = 0; // A variable to count lines.
			string line; // A variable to temp store line.
			if (infile.good()) { // This checks to make sure the file is ready.
				while (!infile.eof()) { // This will loop until the end of the file.
					getline(infile, line); // This will get each line of the file and then assign to the line string.
					count++; // Increments count on each loop

				}
				infile.close(); // This will close the file once finished.
			}
			else { // Else statement.
				cout << "File error" << endl; // An output statement will display file error if it cant be read.


			}
			cout << "Data set has " << count << "tweets." << endl; // This will output how many tweets are in the data set.
			

		}

		else if (choice == 2) { // An else if statement for when option 2 is selected. 
			cout << "You have selected option 2" << endl; // Output statment telling the user what they've selected.
			ifstream infile; // Input file stream. Can read the information from the sample tweets file.
			infile.open("sampleTweets.csv"); // The correct name of the file in my folder.

			if (infile.fail()) { // An if statement to check for a successful opening.
				cerr << "Error opening file" << endl;  // Cerr = standard output stream for errors.
				exit(1);

			}

			string item; // String called item.
			int count = 0; // Variable to count lines.

			while (!infile.eof()) { // This will loop until the end of the file.
				infile >> item;
				if (item == "money") { // if statment saying if item is equal to money it will search for the word money in the csv file.
					count++; // Increment count on each loop for the word money.
				}
			}

			cout << count << " times the word money was found" << endl; // Output statement letting the user know how many times the word money was mentioned. It takes a bit of time to load. But money was found 38 times.
			

		}
		else if (choice == 3) { // An else if statement when option 3 is selected.
			cout << "You have selected option 3" << endl; // Output statement letting the user know they've selected option 3.
			ifstream infile;// Input file stream. Can read the information from the sample tweets file.
			infile.open("sampleTweets.csv"); // Name of file in my folder.

			if (infile.fail()) { // An if statement to check for a successful opening.
				cerr << "Error opening file" << endl; // Cerr = standard output stream for errors.
				exit(1);

			}

			string item; // String called item.
			int count = 0; // Variable to count lines.

			while (!infile.eof()) { // This will loop until the end of the file.
				infile >> item;
				if (item == "politics") { //if statment saying if item is equal to politics it will search for the word politics in the csv file.
					count++; // Increment count on each loop for the word politics.
					
				}
			}

			cout << count << " times the word politics was found" << endl; // An ouput statement letting the user know how many times the word politics was found in the sample tweets csv file. Should be 17 times the word was found.
		}


		

		else if (choice == 4) { // else if statement with the 4th option on the menu to print tweets mentioning the word "Uber"
			string temp; // String to temp store line read in by the file.
			ifstream infile; // Read in.
			infile.open("sampleTweets.csv"); // File name in folder.
		
			if (infile.good()) { // Check if the file is open.
				while (!infile.eof()) { // This while statement will loop through to the end of the file.
					getline(infile,temp); // This gets the line and then assigns it to the temp string.
					if (temp.find("Uber") != std::string::npos) { // if statement to find the word Uber before the end of the string. Should display the tweets.

						cout << "Found Uber in the line. \"" <<temp << "\"" << endl; // Output statement saying Uber was found in the line, then it will display the tweets mentioning the word Uber.
					}
				}
			}
			
			
		}
		else if (choice == 5) { // else if statement with the 5th option on the menu to print tweets mentioning the word "Paris"
			string temp; // String to temp store line that is read in by the file.
			ifstream infile; // Read in.
			infile.open("sampleTweets.csv"); // File name in folder.

			if (infile.good()) { // Check if the file is open.
				while (!infile.eof()) { // This will loop through to the end of the file.
					getline(infile, temp); // This gets the line and then assigns it to the temp string.
					if (temp.find("Paris") != std::string::npos) { // if statement to find the word Paris before the end of the string. Should display the tweets.

						cout << "Found Paris in the line.  \"" << temp << "\"" << endl; // Output statement saying Paris was found in the line, then it will display the tweets mentioning the word Paris.
					}
				}
			}

		}
		
		else if (choice == 6) { // else if statement with the 6th option on the menu to print tweets mentioning the word "DreamWorks"
			string temp; // String to temp store line that is read in by the file.
			ifstream infile; // Read in.
			infile.open("sampleTweets.csv"); // File name in folder.

			if (infile.good()) { // This will check if the file is open.
				while (!infile.eof()) { // This statement will loop through to the end of the file.
					getline(infile, temp); // This gets the line then assigns it to the temp string.
					if (temp.find("DreamWorks") != std::string::npos) { // if statement to find the word DreamWorks before the end of the string. Should display the tweets.

						cout << "Found Dreamworks in the line.  \"" << temp << "\""  << endl; // Output statement saying DreamWorks was found in the line, then it will display the tweets mentioning the word DreamWorks.
					}
				}
			}

		}
		else if (choice == 7) { // An else with the 7th option on the menu to print tweets mentioning the words "Star Wars"
		string temp; // String to temp store line that is read in by the file.
		ifstream infile; // Read in.
		infile.open("sampleTweets.csv"); // File name in folder.

		if (infile.good()) { // This will check if the file is open.
			while (!infile.eof()) { // This statement will loop through to the end of the file.
				getline(infile, temp); // This gets the line then assigns it to the temp string.
				if (temp.find("Star Wars") != std::string::npos) { // if statement to find the words Star Wars before the end of the string. Should display the tweets.

					cout << "Found Star Wars in the line.  \"" << temp << "\"" << endl; // Output statement saying Star Wars was found in the line, then it will display the tweets mentioning the words Star Wars;
				}
			}
		}

		}
		else if (choice == 8) { // 8th option on the menu to print tweets mentioning the date 15th December 2016.
		string temp; // String to temp store the line that is read in by the file.
		ifstream infile; // Read in.
		infile.open("sampleTweets.csv"); // File name in folder.

		if (infile.good()) { // This will check if the file is open.
			while (!infile.eof()) { // This statement will loop through to the end of the file.
				getline(infile, temp); // This gets the line then assigns it to the temp string.
				if (temp.find("15/12/2016") != std::string::npos) { // if statement to find the tweets mentioning the date 15th December 2016. Should display the tweets.

					cout << "15/12/2016.  \"" << temp << "\"" << endl; // Output statement saying the date has been found in the line, then it will display all of the tweets related to the date.
				}
			}
		}

		}
		else if (choice == 9) { // 9th option on the menu to print tweets mentioning the word "@Sport"
		string temp; // String to temp store the line that is read in by the file.
		ifstream infile; // Read in.
		infile.open("sampleTweets.csv"); // File name in folder.

		if (infile.good()) { // This will check if the file is open.
			while (!infile.eof()) { // This statement will loop through to the end of the file. 
				getline(infile, temp); // This gets the line then assigns it to the temp string.
				if (temp.find("@Sport") !=std::string::npos) { // if statement to find tweets mentioning the word @Sport. Should display the tweets.

					cout << "@Sport in the line.   \"" << temp << "\""  << endl; // Output statement saying the word has been found in the line, then it will display the tweets.
				}
			}
		}

		}
		else if (choice == 10) { // 10th option on the menu to print tweets mentioning the dates in April 2015.
		string temp; // String to temp store the line that is read in by the file.
		ifstream infile; // Read in.
		infile.open("sampleTweets.csv"); // File name in folder.

		if (infile.good()) { // This will check if the file is open.
			while (!infile.eof()) { // This statement will loop through to the end of the file.
				getline(infile, temp); // This gets the line then assigns it to the temp string.
				if (temp.find("04/2015") !=std::string::npos) { // if statement to find tweets from April 2015. 
					
					cout << "04/2015 in the line.  \"" << temp << "\"" << endl; // Output statement saying the dates have been found, then it will display all of the tweets from April 2015.
				}
			}
		}

		}

		if (choice == 11) { // if statement that if option 11 is selected it will close the app.
			cout << "Exiting the app thank you" << endl; // Output statement.
			return 0; // End of program.
		}
		else if (choice == 12) { // else if statement for when option 12 is selected it wil rerun the program.
			cout << "Rerunning the program" << endl; // Output statement.
			return main(); // Will rerun the program.
		}

		

		cout << endl; // Line break.
		cout << "Would you like to select another option by rerunning the program or exit the app? 11 or 12?" << endl; // After the selectd option has displayed all it's results. The user will see at the bottom an output statement asking if they would like to leave or rerun the program. 11 to leave. 12 to rerun.
		cin >> choice; // User input.
		if (choice == 11) { // if statement that if option 11 is selected it will close the app.
			cout << "Exiting the app, thank you." << endl; // Output statement.
			return 0; // End of program.
		}
		else if (choice == 12) { // else if statement for when option 12 is selected it will rerun the program.
			cout << "Rerunning the program." << endl; // Ouput statement.
			return main(); // Will rerun the program.
		}
		



		system("pause"); // Keep console open.

		return 0; // End of program.

}
void displaymenu() // Function called display menu.
{
	cout << "Welcome to the data driven app. Please select an option" << endl; // Output statement.
	cout << endl; // Line break.
	cout << " 1 Count tweets" << endl; // Output statement for the option to count tweets.
	cout << " 2 Count tweets mentioning the word money" << endl; // Output statement for the option to count tweets mentioning the word money.
	cout << " 3 Count tweets mentioning the word politics" << endl; // Output statement for the option to count tweets mentioning the word politics.
	cout << " 4 Print tweets with the word Uber" << endl; // Output statement for the option to print all the tweets with the word Uber in them.
	cout << " 5 Print tweets with the word Paris" << endl; // Output statement for the option to print all the tweets with the word Paris in them.                 
	cout << " 6 Print tweets with the word DreamWorks" << endl; // Output statement for the option to print all the tweets with the word DreamWorks in them.
	cout << " 7 Print tweets with the words Star Wars" << endl; // Output statement for the option to print all tweets with the words Star Wars in them.
	cout << " 8 Print tweets from 15/12/2016" << endl; // Output statement for the option to print all tweets that are from the 15th December 2016.
	cout << " 9 Print tweets with the word @Sport" << endl; // Output statement for the option to print all tweets with the word @Sport in them.
	cout << " 10 Print tweets from April 2015" << endl; // Output statement for the option to print all tweets that are from April 2015.
	cout << " 11 to exit the app" << endl; // Output statement with the option to exit the app.
	cout << " 12 to rerun the program" << endl; // Output statement with the option to rerun the program.

}


