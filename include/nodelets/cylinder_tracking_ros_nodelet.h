#ifndef CYLINDERTRACKINGROSNODELET_H
#define CYLINDERTRACKINGROSNODELET_H
#include <nodelet/nodelet.h>
#include "cylinder_tracking_ros.h"

namespace shape_detection_fitting
{
class CylinderTrackingRosNodelet: public nodelet::Nodelet
{

public:
    CylinderTrackingRosNodelet(){}
    ~CylinderTrackingRosNodelet(){}
    virtual void onInit();
    boost::shared_ptr<CylinderTrackingROS> inst_;

};

}


#endif // CYLINDERTRACKINGROSNODELET_H
