#include <iostream>
#include <unistd.h>
using namespace std;
// Defining our variables as short as we don't need big values so we're saving up storage and using less RAM
short int i = 1;
short int j;

// Making the function for counting
void Count()
{
  // Printing the "i" integer
  cout << i << endl;
  // Increasing the integer by 1
  i++;
  // Waiting for 1 second
  sleep(1);
}

// Running our main function
int main()
{
  cout << "Specify a number: ";
  // Getting the given "j" integer
  cin >> j;
  // If the given integer is greater than 100, return this
  if (j > 100)
  {
    cout << "You can't give a number higher than 100, please try again" << endl;
  }
  else
  {
    cout << "Counting..." << endl;
    // The "Count" function will run as long as the "i" integer is smaller than the given "j"
    while (i < j + 1)
    {
      Count();
    }
  }
  // Exiting the process
  return 0;
}