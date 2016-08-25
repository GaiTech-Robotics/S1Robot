#include <s1_base_controller/subSpeedpubOdom.h>
class SubscribeAndPublish;

int main(int argc, char **argv)
{
  //Initiate ROS
  ros::init(argc, argv, "odometry_publisher");

  //Create an object of class SubscribeAndPublish that will take care of everything
  SubscribeAndPublish SAPObject;

  ros::spin();

  return 0;
}
