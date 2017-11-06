/** Standard deviation calculator
 *
 * Martina Nunvarova
 * 25/9/2017
 */


//include libraries
#include <iostream>
#include <iomanip>
#include <math.h>

//namespace
using namespace std;

//main fn
int main()
{
    //array of suffixes for prompt: Enter the 0"th" number:
    char suffix[4][3]={"th","st","nd","rd"};
    //array of entered values
    int vals[10] = {0};
    //average and the std deviation
    double avg=0,stddev=0;

    //loop and ask for numbers
    for (int i=1;i<=10;i++) {
        //display prompt
        cout << "please enter the "<<i<<suffix[i>3?0:i]<<" value: ";
        //read in the value
        cin >> vals[i-1];
        //calculate AVG on the fly.
        avg+=vals[i-1]/10.0;
    }

    //another cycling through input nrs to calculate the SUM in denominator of std. dev.
    for (int i=0;i<10;i++)
        stddev+=(vals[i]-avg)*(vals[i]-avg);

    //set decimal point precision
    cout.precision(3);
    //display the result in fixed format decimal point and flush buffer
    cout << "The standard deviation for the above entered numbers is: "<<fixed<< sqrt(stddev/9.0) << endl;

    //return to OS no errors
    return 0;
}
