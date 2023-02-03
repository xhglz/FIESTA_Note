#include "Fiesta.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "FIESTA");
    ros::NodeHandle node("~");

    // 实例化了一个模板类 fiesta，在构造函数中实现具体的功能
    // 确定点云格式（点云或深度图）位姿格式（pose 或 odom）
    // 入参 ROS 节点
    fiesta::Fiesta<sensor_msgs::PointCloud2::ConstPtr, geometry_msgs::TransformStamped::ConstPtr> esdf_map(node);
    
    ros::spin();
    return 0;
}
