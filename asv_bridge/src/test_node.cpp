#include <ros/ros.h>
#include <std_msgs/String.h>

class TestNode
{
public:
    TestNode()
    {
        ros::NodeHandle nh;
        publisher = nh.advertise<std_msgs::String>("test_topic", 10);
        ros::Rate rate(1);
        ROS_INFO("Test Node Publisher has been started");
        this->publishMessage(rate);
    }

    void publishMessage(ros::Rate rate)
    {
        while (ros::ok())
        {
            std_msgs::String msg;
		    msg.data = "Hi, this is Node Test";
            //ROS_INFO("Publishing message: %s", msg.data.c_str());
            publisher.publish(msg);
            rate.sleep();
        }
    }

private:
    ros::Publisher publisher;
};

int main(int argc, char **argv)
{
    ros::init(argc, argv, "test_node_pub",ros::init_options::AnonymousName);
    TestNode node;
    return 0;
}