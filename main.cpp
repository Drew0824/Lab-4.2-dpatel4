#include <iostream>
using namespace std;

int main()
{
  double AT_BATS;
  cout << "Enter the number of at bats:\n";
  cin >> AT_BATS;



	double HITS;
  cout << "Enter the number of hits:\n";
  cin >> HITS;
  
  double batAvg;
  batAvg = HITS / AT_BATS;	// an assignment statement 
	cout << "The batting average is " << batAvg << endl;	// output the result

}