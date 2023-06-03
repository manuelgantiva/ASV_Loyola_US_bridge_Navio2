#!/usr/bin/env python3

import rospy
from std_msgs.msg import String

class TestNode:
    def __init__(self):
        rospy.init_node('test_node_sus', anonymous=True)
        self.subscriber = rospy.Subscriber('test_topic', String, self.callback)
        rospy.loginfo("Test Node Suscriber has been started")
        self.run()

    def callback(self, message):
        rospy.loginfo("Received message: %s", message.data)

    def run(self):
        rospy.spin()

if __name__ == '__main__':
    try:
        node = TestNode()
    except rospy.ROSInterruptException:
        pass