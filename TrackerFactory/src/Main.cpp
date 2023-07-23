/*
Main File
*/

#include <TrackerFactory.h>

int main()
{
    Tracker* oTracker = TrackerFactory.getTracker("test_tracker");

    return 0;
}