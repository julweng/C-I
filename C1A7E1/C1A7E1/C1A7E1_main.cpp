//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Mar. 6, 2017
// C1A7E1_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: compute elapsed time
// description: This program prompts the user to enter three sets of
// space-separated start and end times in the 2-digit military time
// format such as 08:00:05. Each time a set of stop and end times is
// entered, the program calls the DetermineElapsedTime function to
// compute the elapsed time from the start to the end time.
//

#include <iostream>
#include <iomanip>
#include "C1A7E1_MyTime.h"

struct MyTime *DetermineElapsedTime(const MyTime *start, const MyTime *end);

using namespace std;

const int ENTRY_LIMIT = 3;

int main()
{   //set up fill character for the time output format
    cout << setfill('0');
    for (int num_of_entries = 0; num_of_entries < ENTRY_LIMIT; ++num_of_entries)
    {
        char delim1, delim2;
        struct MyTime start, end, *elapsed;
        
        //prompt user to enter start anad stop times
        cout << "Enter the start and stop times: ";
        cin >> start.hours >> delim1 >> start.minutes >> delim2 >> start.seconds
            >> end.hours >> delim1 >> end.minutes >> delim2 >> end.seconds;
        
        //compute elased time between user-entered start and stop times
        elapsed = DetermineElapsedTime(&start, &end);
        
        //print result
        cout << "\nThe time elapsed from "
             << setw(2) << start.hours << delim1 << setw(2) << start.minutes << delim2
             << setw(2) << start.seconds << " to " << setw(2) << end.hours << delim1
             << setw(2) << end.minutes << delim2 << setw(2) << end.seconds << " is "
             << setw(2) << elapsed->hours << delim1 << setw(2) << elapsed->minutes
             << delim2 << setw(2) << elapsed->seconds << "\n";
    }
    return 0;
}
