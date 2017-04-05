#include <iostream>
#include <fstream>
using namespace std;

int main(){
ifstream inStream;

	inStream.open("names.txt");
  
  
int nameScore =0;  
for (int i=0;i<line.length();i++)
{
  char letter = line[i];
  nameScore += (int) letter - 64;
}
totalscore += nameScore;



	cout << "the sum total of all the name score is: " << endl;
  

#include <iostream>
#include <fstream>
#include <sstream>
using std::stringstream;



using namespace std;


int main()
{

	ifstream inStream;
	ofstream outStream;


	inStream.open("names.txt");

	outStream.open("sortednames.txt");


	string one;

	inStream >> one;

	outStream << one;



	

	cout << "the sum total of all the name score is: " << one << endl;


	cin >> one;

	return 0;
}
