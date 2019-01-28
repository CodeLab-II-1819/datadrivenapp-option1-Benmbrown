#include <iostream> 
#include <fstream> 
#include <string>

using namespace std;

int main() {
	int choice;
	cout << "Welcome to the data driven app. Please select an option" << endl;
	cout << endl;
	cout << " 1 Count tweets" << endl;
	cout << " 2 Count tweets mentioning the word money" << endl;
	cout << " 3 Count tweets mentioning the word politics" << endl;
	cout << " 4 Print tweets with the word uber" << endl;
	cout << " 5 Print tweets with the word Paris" << endl;
	cout << " 6 Print tweets with the word DreamWorks" << endl;
	cout << " 7 Print tweets with the words Star Wars" << endl;
	cout << " 8 Print tweets with the words video games" << endl;
	cout << " 9 Print tweets with the word sport" << endl;
	cout << "10 Print tweets with the word films" << endl;
		cin >> choice;

		
			ifstream infile;
		infile.open("sampleTweets.csv");

		int count = 0;
		string line;
		if (infile.good()) {
			while (!infile.eof()) {
				getline(infile, line);
				count++;

			}
			infile.close();
		}
		else {
			cout << "File error" << endl;


		}
		cout << "Data set has" << count << "tweets." << endl;







	system("pause");

	return 0;

}