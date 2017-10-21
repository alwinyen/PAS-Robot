#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/Imu.h"
#include "serial/serial.h"
#include <sstream>
#include <rosbag/bag.h>

int main(int argc, char **argv)
{

  ros::init(argc, argv, "Imu_talker");


  ros::NodeHandle n;


  ros::Publisher chatter_pub = n.advertise<sensor_msgs::Imu>("imu/data_raw", 1000);

  rosbag::Bag Imu_bag("Imu_bag.bag", rosbag::bagmode::Write);


  ros::Rate loop_rate(31.5);
  std::string port = "/dev/ttyACM0";
  uint32_t baudrate = 115200;
  serial::Serial mySerial;
  mySerial.setPort(port);
  mySerial.setBaudrate(baudrate);
  mySerial.open();

  int count = 0;
  while (ros::ok())
  {

sensor_msgs::Imu imu_msg;

imu_msg.header.stamp = ros::Time::now();
imu_msg.header.frame_id = "/base_link";

std::string line;
line = mySerial.readline(1024, "\n");
mySerial.flush();
ROS_INFO("%s", line.c_str());
char *pch;
pch = std::strtok(&line[0], " ");
std::string number;
double data[6] = {0};
int count = 0;
while(pch != NULL)
{
    number = pch;
    data[count] = atof(number.c_str());
    pch = std::strtok(NULL, " ");
    count++;
}     

float angvel_conversion = .005*3.1415/180.0;
float linacc_conversion = .00025*9.8;

imu_msg.angular_velocity.x = data[0]*angvel_conversion;
imu_msg.angular_velocity.y = data[1]*angvel_conversion;
imu_msg.angular_velocity.z = data[2]*angvel_conversion;
imu_msg.linear_acceleration.x = data[3]*linacc_conversion;
imu_msg.linear_acceleration.y = data[4]*linacc_conversion;
imu_msg.linear_acceleration.z = data[5]*linacc_conversion;

chatter_pub.publish(imu_msg);
Imu_bag.write("Imu", ros::Time::now(), imu_msg);

ros::spinOnce();

loop_rate.sleep();

 }

 Imu_bag.close();
 return 0;
 }
