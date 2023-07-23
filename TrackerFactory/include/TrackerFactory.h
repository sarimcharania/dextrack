#ifndef TRACKER_FACTORY_H
#define TRACKER_FACTORY_H

#include<iostream.h>

class TrackerFactory 
{
    public:
        static oTracker* getTracker(std::string sVehicleType);

}    

    

#endif