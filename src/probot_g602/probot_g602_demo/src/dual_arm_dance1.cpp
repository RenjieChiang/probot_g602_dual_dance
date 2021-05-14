//
// Created by tianbot on 5/4/21.
//

#include <ros/ros.h>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/robot_trajectory/robot_trajectory.h>
//#include "probot_g602_demo/leader_control.h"
#include "leader_control.h"

//todo here :topio message .h file can not normally be found , so copy to this directory

int main(int argc, char **argv) {
    ros::init(argc, argv, "dance_leader");
    ros::AsyncSpinner spinner(1);
    spinner.start();

    ros::NodeHandle nh;
    ros::Publisher Leader_control = nh.advertise<probot_g602_demo::leader_control>("/leader_control", 10);

    moveit::planning_interface::MoveGroupInterface arm("manipulator");
    //获取终端link的名称
    std::string end_effector_link = arm.getEndEffectorLink();

    //设置目标位置所使用的参考坐标系
    std::string reference_frame = "base_link";
    arm.setPoseReferenceFrame(reference_frame);

    //当运动规划失败后，允许重新规划
    arm.allowReplanning(true);

    //设置位置(单位：米)和姿态（单位：弧度）的允许误差
    arm.setGoalPositionTolerance(0.001);
    arm.setGoalOrientationTolerance(0.01);

    //设置允许的最大速度和加速度
    arm.setMaxAccelerationScalingFactor(0.5);
    arm.setMaxVelocityScalingFactor(0.5);

    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = 0.0;
    int maxtries = 100;   //最大尝试规划次数
    int attempts = 0;     //已经尝试规划次数

//    sleep(10);
//------------------------------------------------------------------------------------------
    // 控制机械臂先回到初始化位置
    arm.setNamedTarget("home");

    // call the message to follower
    uint8_t group = 0;
    probot_g602_demo::leader_control my_control_msg0;
    my_control_msg0.dance_group_number = group;
    my_control_msg0.ready2next = true;
    Leader_control.publish(my_control_msg0);
    ROS_INFO("Move now !!!!! leader call the follower!!!!!!");
    //Leader Move!
//    sleep(1);
    moveit::planning_interface::MoveGroupInterface::Plan my_plan_leader;
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # 0 complete !!!!!");
    sleep(1);


// --------------------------------------------------------------------------------------------------
    // dance group :#1 ---- bring up1!
    arm.setMaxAccelerationScalingFactor(0.3);
    arm.setMaxVelocityScalingFactor(0.3);
    group = 1;
    probot_g602_demo::leader_control my_control_msg1;
    my_control_msg1.dance_group_number = group;
    my_control_msg1.ready2next = true;
    Leader_control.publish(my_control_msg1);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
//    double targetPose1[6] = {20./180*3.14, 40./180*3.14, 10./180*3.14, 0./180*3.14, 130./180*3.14, 0./180*3.14,};
    std::vector<double> joint_group_positions1 = {20./180*3.14, 40./180*3.14, 10./180*3.14, 0./180*3.14, 130./180*3.14, 0./180*3.14};
//    std::vector<double> joint_group_positions1(6);
//    joint_group_positions1[0] = targetPose1[0];
//    joint_group_positions1[1] = targetPose1[1];
//    joint_group_positions1[2] = targetPose1[2];
//    joint_group_positions1[3] = targetPose1[3];
//    joint_group_positions1[4] = targetPose1[4];
//    joint_group_positions1[5] = targetPose1[5];

    arm.setJointValueTarget(joint_group_positions1);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # 1 complete !!!!!");
//    sleep(1);

    // --------------------------------------------------------------------------------------------------
    // dance group :#2 ---- bring up2!
    arm.setMaxAccelerationScalingFactor(0.3);
    arm.setMaxVelocityScalingFactor(0.3);
    group = 2;
    probot_g602_demo::leader_control my_control_msg2;
    my_control_msg2.dance_group_number = group;
    my_control_msg2.ready2next = true;
    Leader_control.publish(my_control_msg2);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions2 = {-20./180*3.14, 20./180*3.14, 50./180*3.14, 0./180*3.14, 110./180*3.14, 20./180*3.14};
    arm.setJointValueTarget(joint_group_positions2);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # 2 complete !!!!!");
//    sleep(1);

    // --------------------------------------------------------------------------------------------------
    // dance group :#3 ---- bring up3!
    arm.setMaxAccelerationScalingFactor(0.3);
    arm.setMaxVelocityScalingFactor(0.3);
    group = 3;
    probot_g602_demo::leader_control my_control_msg3;
    my_control_msg3.dance_group_number = group;
    my_control_msg3.ready2next = true;
    Leader_control.publish(my_control_msg3);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions3 = {0./180*3.14, 0./180*3.14, 90./180*3.14, 0./180*3.14, 90./180*3.14, 40./180*3.14};
    arm.setJointValueTarget(joint_group_positions3);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # 3 complete !!!!!");
//    sleep(1);
usleep(500000);



    // --------------------------------------------------------------------------------------------------
    // dance group :#4 ---- wave arm!
    arm.setMaxAccelerationScalingFactor(0.5);
    arm.setMaxVelocityScalingFactor(0.5);
    group = 4;
    probot_g602_demo::leader_control my_control_msg4;
    my_control_msg4.dance_group_number = group;
    my_control_msg4.ready2next = true;
    Leader_control.publish(my_control_msg4);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions4 = {42./180*3.14, 33./180*3.14, -22./180*3.14, 70./180*3.14, 145./180*3.14, 20./180*3.14};
    arm.setJointValueTarget(joint_group_positions4);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);
//sleep(1);


    // --------------------------------------------------------------------------------------------------
    // dance group :#5 ---- wave arm!
    arm.setMaxAccelerationScalingFactor(0.2);
    arm.setMaxVelocityScalingFactor(0.2);
    group = 5;
    probot_g602_demo::leader_control my_control_msg5;
    my_control_msg5.dance_group_number = group;
    my_control_msg5.ready2next = true;
    Leader_control.publish(my_control_msg5);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions5 = {46./180*3.14, -72./180*3.14, 48./180*3.14, -27./180*3.14, 98./180*3.14, 50./180*3.14};
    arm.setJointValueTarget(joint_group_positions5);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);


    // --------------------------------------------------------------------------------------------------
    // dance group :#6 ---- wave arm !
    arm.setMaxAccelerationScalingFactor(0.5);
    arm.setMaxVelocityScalingFactor(0.5);
    group = 6;
    probot_g602_demo::leader_control my_control_msg6;
    my_control_msg6.dance_group_number = group;
    my_control_msg6.ready2next = true;
    Leader_control.publish(my_control_msg6);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions6 = {45./180*3.14, -72./180*3.14, 101./180*3.14, -67./180*3.14, 27./180*3.14, 80./180*3.14};
    arm.setJointValueTarget(joint_group_positions6);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);


    // --------------------------------------------------------------------------------------------------
    // dance group :#7 ---- wave arm!
    group = 7;
    probot_g602_demo::leader_control my_control_msg7;
    my_control_msg7.dance_group_number = group;
    my_control_msg7.ready2next = true;
    Leader_control.publish(my_control_msg7);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions7 = {23./180*3.14, -44./180*3.14, 21./180*3.14, -127./180*3.14, 65./180*3.14, 30./180*3.14};
    arm.setJointValueTarget(joint_group_positions7);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);
//    sleep(1);


    // --------------------------------------------------------------------------------------------------
    // dance group :#8 ---- wave arm!
    arm.setMaxAccelerationScalingFactor(0.3);
    arm.setMaxVelocityScalingFactor(0.3);
    group = 8;
    probot_g602_demo::leader_control my_control_msg8;
    my_control_msg8.dance_group_number = group;
    my_control_msg8.ready2next = true;
    Leader_control.publish(my_control_msg8);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions8 = {0./180*3.14, -29./180*3.14, 29./180*3.14, 0./180*3.14, 90./180*3.14, -150./180*3.14};
    arm.setJointValueTarget(joint_group_positions8);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);
    sleep(1);

    // dance group :#19 ---- twist - twist
    arm.setMaxAccelerationScalingFactor(0.8);
    arm.setMaxVelocityScalingFactor(0.8);
    group = 19;
    probot_g602_demo::leader_control my_control_msg19;
    my_control_msg19.dance_group_number = group;
    my_control_msg19.ready2next = true;
    Leader_control.publish(my_control_msg19);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    for (int i = 0; i < 1; ++i) {
        std::vector<double> joint_group_positions19 = {-42./180*3.14, 0./180*3.14, -29./180*3.14, -38./180*3.14, 160./180*3.14, -53./180*3.14};
        arm.setJointValueTarget(joint_group_positions19);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
        std::vector<double> joint_group_positions19_1 = {0./180*3.14, 38./180*3.14, -35./180*3.14, 2./180*3.14, 115./180*3.14, -95./180*3.14};
        arm.setJointValueTarget(joint_group_positions19_1);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
        arm.setJointValueTarget(joint_group_positions19);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);

        std::vector<double> joint_group_positions19_2 = {42./180*3.14, -3./180*3.14, -27./180*3.14, 38./180*3.14, 162./180*3.14, -129./180*3.14};
        arm.setJointValueTarget(joint_group_positions19_2);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
        arm.setJointValueTarget(joint_group_positions19_1);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
        arm.setJointValueTarget(joint_group_positions19_2);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
        ROS_INFO("Move  group # %d complete %d!!!!!", group, i);

    }
usleep(500000);
/*
    // --------------------------------------------------------------------------------------------------
    // dance group :#9 ---- front-square-1
    arm.setMaxAccelerationScalingFactor(0.8);
    arm.setMaxVelocityScalingFactor(0.8);
    group = 9;
    probot_g602_demo::leader_control my_control_msg9;
    my_control_msg9.dance_group_number = group;
    my_control_msg9.ready2next = true;
    Leader_control.publish(my_control_msg9);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions9 = {0./180*3.14, -20./180*3.14, -40./180*3.14, 0./180*3.14, 150./180*3.14, 0./180*3.14};
    arm.setJointValueTarget(joint_group_positions9);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);

    // --------------------------------------------------------------------------------------------------
    // dance group :#10 ---- front-square-2
    group = 10;
    probot_g602_demo::leader_control my_control_msg10;
    my_control_msg10.dance_group_number = group;
    my_control_msg10.ready2next = true;
    Leader_control.publish(my_control_msg10);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    geometry_msgs::Pose start_pose10 = arm.getCurrentPose(end_effector_link).pose;
    std::vector<geometry_msgs::Pose> waypoints10;
    waypoints10.push_back(start_pose10);
    geometry_msgs::Pose pose10 = start_pose10;
    pose10.position.x = 0.3;
    pose10.position.y = 0.45;
    pose10.position.z = 0.6;
    waypoints10.push_back(pose10);
    pose10.position.z = 0.25;
    waypoints10.push_back(pose10);
    waypoints10.push_back(start_pose10);

    moveit_msgs::RobotTrajectory trajectory10;
    while(fraction < 1.0 && attempts < maxtries)
    {
        fraction = arm.computeCartesianPath(waypoints10, eef_step, jump_threshold, trajectory10);
        attempts++;
        if(attempts % 10 == 0)
            ROS_INFO("Still trying after %d attempts...", attempts);
    }
    if(fraction == 1)
    {
        ROS_INFO("Path computed successfully. Moving the arm. # %d",group);
        // 生成机械臂的运动规划数据
        my_plan_leader.trajectory_ = trajectory10;
        // 执行运动
        arm.execute(my_plan_leader);
    }
    else ROS_INFO("Path planning failed with only %0.6f success after %d attempts.", fraction, maxtries);
    ROS_INFO("Move  group # %d complete !!!!!", group);
    usleep(500000);

    // --------------------------------------------------------------------------------------------------
    // dance group :#11 ---- front-square-3
    group = 11;
    probot_g602_demo::leader_control my_control_msg11;
    my_control_msg11.dance_group_number = group;
    my_control_msg11.ready2next = true;
    Leader_control.publish(my_control_msg11);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    geometry_msgs::Pose start_pose11 = arm.getCurrentPose(end_effector_link).pose;
    std::vector<geometry_msgs::Pose> waypoints11;
    waypoints11.push_back(start_pose11);
    geometry_msgs::Pose pose11 = start_pose11;
    pose11.position.x = 0.3;
    pose11.position.y = -0.45;
    pose11.position.z = 0.6;
    waypoints11.push_back(pose11);
    pose11.position.z = 0.25;
    waypoints11.push_back(pose11);
    waypoints11.push_back(start_pose11);
    fraction = 0.0;
    attempts = 0;

    moveit_msgs::RobotTrajectory trajectory11;
    while(fraction < 1.0 && attempts < maxtries)
    {
        fraction = arm.computeCartesianPath(waypoints11, eef_step, jump_threshold, trajectory11);
        attempts++;
        if(attempts % 10 == 0)
            ROS_INFO("Still trying after %d attempts...", attempts);
    }
    if(fraction == 1)
    {
        ROS_INFO("Path computed successfully. Moving the arm. # %d",group);
        // 生成机械臂的运动规划数据
        my_plan_leader.trajectory_ = trajectory11;
        // 执行运动
        arm.execute(my_plan_leader);
    }
    else ROS_INFO("Path planning failed with only %0.6f success after %d attempts.", fraction, maxtries);

    ROS_INFO("Move  group # %d complete !!!!!", group);
*/

    // --------------------------------------------------------------------------------------------------
    // dance group :#12 ---- circle
    arm.setMaxAccelerationScalingFactor(0.8);
    arm.setMaxVelocityScalingFactor(0.8);
    group = 12;
    probot_g602_demo::leader_control my_control_msg12;
    my_control_msg12.dance_group_number = group;
    my_control_msg12.ready2next = true;
    Leader_control.publish(my_control_msg12);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions12 = {-60./180*3.14, -35./180*3.14, -10./180*3.14, -65./180*3.14, 160./180*3.14, 0./180*3.14};
    arm.setJointValueTarget(joint_group_positions12);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);

    // --------------------------------------------------------------------------------------------------
    // dance group :#13 ---- circle
    arm.setMaxAccelerationScalingFactor(0.8);
    arm.setMaxVelocityScalingFactor(0.8);
    group = 13;
    probot_g602_demo::leader_control my_control_msg13;
    my_control_msg13.dance_group_number = group;
    my_control_msg13.ready2next = true;
    Leader_control.publish(my_control_msg13);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions13 = {0./180*3.14, -60./180*3.14, -25./180*3.14, 0./180*3.14, 185./180*3.14, 0./180*3.14};
    arm.setJointValueTarget(joint_group_positions13);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);

    // --------------------------------------------------------------------------------------------------
    // dance group :#14 ---- circle
    arm.setMaxAccelerationScalingFactor(0.8);
    arm.setMaxVelocityScalingFactor(0.8);
    group = 14;
    probot_g602_demo::leader_control my_control_msg14;
    my_control_msg14.dance_group_number = group;
    my_control_msg14.ready2next = true;
    Leader_control.publish(my_control_msg14);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions14 = {60./180*3.14, -35./180*3.14, -10./180*3.14, 65./180*3.14, 160./180*3.14, 10./180*3.14};
    arm.setJointValueTarget(joint_group_positions14);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);

    // dance group :#15 ---- circle
    arm.setMaxAccelerationScalingFactor(0.8);
    arm.setMaxVelocityScalingFactor(0.8);
    group = 15;
    probot_g602_demo::leader_control my_control_msg15;
    my_control_msg15.dance_group_number = group;
    my_control_msg15.ready2next = true;
    Leader_control.publish(my_control_msg15);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions15 = {60./180*3.14, 20./180*3.14, 10./180*3.14, 100./180*3.14, 150./180*3.14, -110./180*3.14};
    arm.setJointValueTarget(joint_group_positions15);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);

    // dance group :#16 ---- circle
    arm.setMaxAccelerationScalingFactor(0.8);
    arm.setMaxVelocityScalingFactor(0.8);
    group = 16;
    probot_g602_demo::leader_control my_control_msg16;
    my_control_msg16.dance_group_number = group;
    my_control_msg16.ready2next = true;
    Leader_control.publish(my_control_msg16);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions16 = {0./180*3.14, 0./180*3.14, 90./180*3.14, 0./180*3.14, 90./180*3.14, 0./180*3.14};
    arm.setJointValueTarget(joint_group_positions16);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!! #1", group);
    std::vector<double> joint_group_positions16_1 = {-60./180*3.14, 20./180*3.14, 10./180*3.14, -100./180*3.14, 150./180*3.14, -90./180*3.14};
    arm.setJointValueTarget(joint_group_positions16_1);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);



    group = 17;
    probot_g602_demo::leader_control my_control_msg17;
    my_control_msg17.dance_group_number = group;
    my_control_msg17.ready2next = true;
    Leader_control.publish(my_control_msg17);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    ROS_INFO("Move  group # %d complete !!!!! #2", group);
    std::vector<double> joint_group_positions16_2 = {-60./180*3.14, -35./180*3.14, -10./180*3.14, -65./180*3.14, 160./180*3.14, 10./180*3.14};
    arm.setJointValueTarget(joint_group_positions16_2);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!! #3", group);
    std::vector<double> joint_group_positions16_3 = {60./180*3.14, -35./180*3.14, -10./180*3.14, 65./180*3.14, 160./180*3.14, 10./180*3.14};
    arm.setJointValueTarget(joint_group_positions16_3);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!! #4", group);
    arm.setJointValueTarget(joint_group_positions16);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);
sleep(1);
    //todo :change group16 to 2 group and increase one msg pub, so it can move together


    // dance group :#17 ---- twist - twist
   /*
    arm.setMaxAccelerationScalingFactor(0.8);
    arm.setMaxVelocityScalingFactor(0.8);
    group = 17;
    probot_g602_demo::leader_control my_control_msg17;
    my_control_msg17.dance_group_number = group;
    my_control_msg17.ready2next = true;
    Leader_control.publish(my_control_msg17);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    std::vector<double> joint_group_positions17 = {0./180*3.14, 40./180*3.14, -10./180*3.14, 0./180*3.14, 55./180*3.14, 50./180*3.14};
    arm.setJointValueTarget(joint_group_positions17);
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    ROS_INFO("Move  group # %d complete !!!!!", group);
*/
    // dance group :#18 ---- twist - twist
    arm.setMaxAccelerationScalingFactor(0.8);
    arm.setMaxVelocityScalingFactor(0.8);
    group = 18;
    probot_g602_demo::leader_control my_control_msg18;
    my_control_msg18.dance_group_number = group;
    my_control_msg18.ready2next = true;
    Leader_control.publish(my_control_msg18);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    for (int i = 0; i < 1; ++i) {
//        std::vector<double> joint_group_positions18 = {30./180*3.14, 30./180*3.14, -6./180*3.14, -80./180*3.14, 15./180*3.14, 60./180*3.14};
//        arm.setJointValueTarget(joint_group_positions18);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
//        std::vector<double> joint_group_positions18_1 = {0./180*3.14, 38./180*3.14, -6./180*3.14, 0./180*3.14, 50./180*3.14, 0./180*3.14};
//        arm.setJointValueTarget(joint_group_positions18_1);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
//        arm.setJointValueTarget(joint_group_positions18);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);

        std::vector<double> joint_group_positions18_2 = {-35./180*3.14, 25./180*3.14, -3./180*3.14, 80./180*3.14, 7./180*3.14, -60./180*3.14};
//        arm.setJointValueTarget(joint_group_positions18_2);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
//        arm.setJointValueTarget(joint_group_positions18_1);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
        arm.setJointValueTarget(joint_group_positions18_2);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);

        ROS_INFO("Move  group # %d complete %d!!!!!", group, i);
    }

//    std::vector<double> joint_group_positions18 = {30./180*3.14, 30./180*3.14, -6./180*3.14, -80./180*3.14, 15./180*3.14, 60./180*3.14};
//    arm.setJointValueTarget(joint_group_positions18);
//    arm.plan(my_plan_leader);
//    arm.execute(my_plan_leader);
//    std::vector<double> joint_group_positions18_2 = {-35./180*3.14, 25./180*3.14, -3./180*3.14, 80./180*3.14, 7./180*3.14, -60./180*3.14};
//    arm.setJointValueTarget(joint_group_positions18_2);
//    arm.plan(my_plan_leader);
//    arm.execute(my_plan_leader);
//    ROS_INFO("Move  group # %d complete !!!!!", group);
//    ROS_INFO("Move  group # %d complete !!!!!", group);

//    // dance group :#19 ---- twist - twist
//    arm.setMaxAccelerationScalingFactor(0.8);
//    arm.setMaxVelocityScalingFactor(0.8);
//    group = 19;
//    probot_g602_demo::leader_control my_control_msg19;
//    my_control_msg19.dance_group_number = group;
//    my_control_msg19.ready2next = true;
//    Leader_control.publish(my_control_msg19);
//    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
//    for (int i = 0; i < 1; ++i) {
//        std::vector<double> joint_group_positions19 = {-42./180*3.14, 0./180*3.14, -29./180*3.14, -38./180*3.14, 160./180*3.14, -53./180*3.14};
//        arm.setJointValueTarget(joint_group_positions19);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
//        std::vector<double> joint_group_positions19_1 = {0./180*3.14, 38./180*3.14, -35./180*3.14, 2./180*3.14, 115./180*3.14, -95./180*3.14};
//        arm.setJointValueTarget(joint_group_positions19_1);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
//        arm.setJointValueTarget(joint_group_positions19);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
//
//        std::vector<double> joint_group_positions19_2 = {42./180*3.14, -3./180*3.14, -27./180*3.14, 38./180*3.14, 162./180*3.14, -129./180*3.14};
//        arm.setJointValueTarget(joint_group_positions19_2);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
//        arm.setJointValueTarget(joint_group_positions19_1);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
//        arm.setJointValueTarget(joint_group_positions19_2);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
//        ROS_INFO("Move  group # %d complete %d!!!!!", group, i);
//
//    }



    // dance group :#20 ---- twist - twist
    arm.setMaxAccelerationScalingFactor(0.8);
    arm.setMaxVelocityScalingFactor(0.8);
    group = 20;
    probot_g602_demo::leader_control my_control_msg20;
    my_control_msg20.dance_group_number = group;
    my_control_msg20.ready2next = true;
    Leader_control.publish(my_control_msg20);
    ROS_INFO("Move  group # %d now !!!!! leader call the follower!!!!!!", group);
    for (int i = 0; i < 1; ++i) {
        std::vector<double> joint_group_positions20 = {90./180*3.14, 35./180*3.14, -25./180*3.14, 95./180*3.14, 150./180*3.14, -230./180*3.14};
        arm.setJointValueTarget(joint_group_positions20);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
        std::vector<double> joint_group_positions20_1 = {150./180*3.14, 40./180*3.14, -53./180*3.14, 96./180*3.14, 192./180*3.14, -255./180*3.14};
        arm.setJointValueTarget(joint_group_positions20_1);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);

        std::vector<double> joint_group_positions20_2 = {108./180*3.14, 36./180*3.14, -51./180*3.14, 87./180*3.14, 151./180*3.14, -230./180*3.14};
        arm.setJointValueTarget(joint_group_positions20_2);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
        arm.setJointValueTarget(joint_group_positions20_1);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
//        arm.setJointValueTarget(joint_group_positions20_2);
//        arm.plan(my_plan_leader);
//        arm.execute(my_plan_leader);
    }
    for (int i = 0; i < 1; ++i) {
        std::vector<double> joint_group_positions20_3 = {-148./180*3.14, 40./180*3.14, -51./180*3.14, 92./180*3.14, -5./180*3.14, -255./180*3.14};
        arm.setJointValueTarget(joint_group_positions20_3);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
        std::vector<double> joint_group_positions20_4 = {-108./180*3.14, 31./180*3.14, -45./180*3.14, 103./180*3.14, 34./180*3.14, -125./180*3.14};
        arm.setJointValueTarget(joint_group_positions20_4);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
        arm.setJointValueTarget(joint_group_positions20_3);
        arm.plan(my_plan_leader);
        arm.execute(my_plan_leader);
        ROS_INFO("Move  group # %d complete %d!!!!!", group, i);
    }



//    std::vector<double> joint_group_positions19 = {-35./180*3.14, 25./180*3.14, -3./180*3.14, 80./180*3.14, 7./180*3.14, -60./180*3.14};
//    arm.setJointValueTarget(joint_group_positions19);
//    arm.plan(my_plan_leader);
//    arm.execute(my_plan_leader);
//    ROS_INFO("Move  group # %d complete !!!!!", group);
sleep(2);
    arm.setNamedTarget("home");
    arm.plan(my_plan_leader);
    arm.execute(my_plan_leader);
    Leader_control.publish(my_control_msg0);
    sleep(3);
    return 0;
}