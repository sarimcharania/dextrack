#include <TrackerFactory.h>

Tracker* TrackerFactory::getTracker(const std::string sTrackerType)
{
    Tracker* pTracker;

    if (sTrackerType == "icg")
    {
        // pTracker = new IcgTracker()
    }
    else if (sTracker == "visp_hybrid")
    {
        // pTracker = new VispHybridTracker()
    }
    else
    {
        // pTracker = new DefaultTracker()
    }

    return pTracker;
}