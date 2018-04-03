//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Mar. 6, 2017
// C1A7E1_DetermineElapsedTime.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// description: This file contains a function called DetermineElapsedTime,
// that computes the time difference between the start and end times. The
// function has two parameters, eaching pointing to a type MyTime structure
// that store the start and end times, respectively. If the end time is less
// than or equal to the start time, the end time is considered as time for
// the next day in the calculation for elapsed time.
//

#include "C1A7E1_MyTime.h"

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;

struct MyTime *DetermineElapsedTime(const MyTime *start, const MyTime *end)
{
    static struct MyTime elapsed;
    
    //compute difference in seconds, minutes, and hours between start and end time
    elapsed.seconds = end->seconds - start->seconds;
    elapsed.minutes = end->minutes - start->minutes;
    elapsed.hours = end->hours - start->hours;
    
    //if second in end time is less than start time; convert one minute to seconds and add to elapsed
    if (elapsed.seconds < 0)
    {
        --elapsed.minutes;
        elapsed.seconds += SECONDS_PER_MINUTE;
    }
    
    //if minute in end time is less than start time; convert one hour to minutes and add to elapsed
    if (elapsed.minutes < 0)
    {
        --elapsed.hours;
        elapsed.minutes += MINUTES_PER_HOUR;
    }
    
    //if hour in end time is less than start time; convert one day to hours and add to elapsed
    if (elapsed.hours < 0)
    {
        elapsed.hours += HOURS_PER_DAY;
    }
    
    //if end and start times are euqal, consider end time as time from the next day
    if (elapsed.seconds == 0 && elapsed.minutes == 0 && elapsed.hours == 0)
    {
        elapsed.hours += HOURS_PER_DAY;
    }
    return(&elapsed);
}
