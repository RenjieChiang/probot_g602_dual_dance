//
// Created by tianbot on 5/4/21.
//

#include <ros/ros.h>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/robot_trajectory/robot_trajectory.h>
//#include "probot_g602_demo/leader_control.h"
#include "leader_control.h"

//todo here : message .h file can not normally be found , so copy to this directory

//todo : version 0507 using CLASS!!

class Follower
{
private:
    moveit::planning_interface::MoveGroupInterface arm;
    std::string end_effector_link;
    std::string reference_frame;

public:
    Follower();
    void FollowerCallback(const probot_g602_demo::leader_control::ConstPtr &msg);
    ~Follower()= default;
};

Follower::Follower() : arm("manipulator")
{
//    moveit::planning_interface::MoveGroupInterface arm("manipulator");

    //获取终端link的名称
    end_effector_link = arm.getEndEffectorLink();

    //设置目标位置所使用的参考坐标系
    reference_frame = "base_link";
    arm.setPoseReferenceFrame(reference_frame);

    //当运动规划失败后，允许重新规划
    arm.allowReplanning(true);

    //设置位置(单位：米)和姿态（单位：弧度）的允许误差
    arm.setGoalPositionTolerance(0.001);
    arm.setGoalOrientationTolerance(0.01);

    //设置允许的最大速度和加速度
    arm.setMaxAccelerationScalingFactor(0.5);
    arm.setMaxVelocityScalingFactor(0.5);

}

void Follower::FollowerCallback(const probot_g602_demo::leader_control::ConstPtr &msg)
{
//    ROS_INFO("Follower 1 MOVE!!!! %d", msg->dance_group_number);
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    double fraction = 0.0;
    int maxtries = 100;   //最大尝试规划次数
    int attempts = 0;     //已经尝试规划次数

    ROS_INFO("Follower 1 callback.............");
    if (msg->ready2next == true)
    {
        switch (msg->dance_group_number)
        {
            case 0:
            {
                // 控制机械臂先回到初始化位置
                arm.setNamedTarget("home");
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1;
                if (                arm.plan(my_plan_follower1) == moveit::planning_interface::MoveItErrorCode::SUCCESS)
                {
                    ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                } else                 ROS_INFO("Follower 1 MOVE!! wrong !!!! %d", msg->dance_group_number);
//                arm.move();
                arm.execute(my_plan_follower1);
                ROS_INFO("Move  group # 0 complete !!!!!");
                break;
            }

            case 1:
            {
                arm.setMaxAccelerationScalingFactor(0.3);
                arm.setMaxVelocityScalingFactor(0.3);
                double targetPose[6] = {20./180*3.14, 40./180*3.14, 10./180*3.14, 0./180*3.14, 130./180*3.14, 0./180*3.14,};
                std::vector<double> joint_group_positions(6);
                joint_group_positions[0] = targetPose[0];
                joint_group_positions[1] = targetPose[1];
                joint_group_positions[2] = targetPose[2];
                joint_group_positions[3] = targetPose[3];
                joint_group_positions[4] = targetPose[4];
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                joint_group_positions[5] = targetPose[5];
                arm.setJointValueTarget(joint_group_positions);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1;
                arm.plan(my_plan_follower1);
                arm.execute(my_plan_follower1);
                ROS_INFO("Move  group # 1 complete !!!!!");

//                ROS_INFO("Follower 1 MOVE!!!! %d case1", msg->dance_group_number);
//                arm.move();
                break;
            }
            case 2:
            {
                arm.setMaxAccelerationScalingFactor(0.3);
                arm.setMaxVelocityScalingFactor(0.3);
                std::vector<double> joint_group_positions2 = {-20./180*3.14, 20./180*3.14, 50./180*3.14, 0./180*3.14, 110./180*3.14, 20./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions2);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_2;
                arm.plan(my_plan_follower1_2);
                arm.execute(my_plan_follower1_2);
                ROS_INFO("Move  group # 2 complete !!!!!");
//                sleep(1);
                break;
            }
            case 3:
            {
                arm.setMaxAccelerationScalingFactor(0.3);
                arm.setMaxVelocityScalingFactor(0.3);
                std::vector<double> joint_group_positions3 = {0./180*3.14, 0./180*3.14, 90./180*3.14, 0./180*3.14, 90./180*3.14, 40./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions3);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_3;
                arm.plan(my_plan_follower1_3);
                arm.execute(my_plan_follower1_3);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 4:
            {
                arm.setMaxAccelerationScalingFactor(0.5);
                arm.setMaxVelocityScalingFactor(0.5);
                std::vector<double> joint_group_positions4 = {-42./180*3.14, 33./180*3.14, -22./180*3.14, 110./180*3.14, 35./180*3.14, 20./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions4);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_4;
                arm.plan(my_plan_follower1_4);
                arm.execute(my_plan_follower1_4);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 5:
            {
                arm.setMaxAccelerationScalingFactor(0.2);
                arm.setMaxVelocityScalingFactor(0.2);
                std::vector<double> joint_group_positions5 = {-46./180*3.14, -72./180*3.14, 48./180*3.14, 27./180*3.14, 98./180*3.14, 50./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions5);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_5;
                arm.plan(my_plan_follower1_5);
                arm.execute(my_plan_follower1_5);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 6:
            {
                arm.setMaxAccelerationScalingFactor(0.5);
                arm.setMaxVelocityScalingFactor(0.5);
                std::vector<double> joint_group_positions6 = {-45./180*3.14, -72./180*3.14, 101./180*3.14, 67./180*3.14, 27./180*3.14, 80./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions6);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_6;
                arm.plan(my_plan_follower1_6);
                arm.execute(my_plan_follower1_6);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 7:
            {
                std::vector<double> joint_group_positions7 = {-23./180*3.14, -44./180*3.14, 21./180*3.14, 127./180*3.14, 65./180*3.14, 30./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions7);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_7;
                arm.plan(my_plan_follower1_7);
                arm.execute(my_plan_follower1_7);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 8:
            {
                arm.setMaxAccelerationScalingFactor(0.3);
                arm.setMaxVelocityScalingFactor(0.3);
                std::vector<double> joint_group_positions8 = {0./180*3.14, -29./180*3.14, 29./180*3.14, 0./180*3.14, 90./180*3.14, -150./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions8);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_8;
                arm.plan(my_plan_follower1_8);
                arm.execute(my_plan_follower1_8);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 9:
            {
                arm.setMaxAccelerationScalingFactor(0.8);
                arm.setMaxVelocityScalingFactor(0.8);
                std::vector<double> joint_group_positions9 = {0./180*3.14, -20./180*3.14, -40./180*3.14, 0./180*3.14, 150./180*3.14, 0./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions9);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_9;
                arm.plan(my_plan_follower1_9);
                arm.execute(my_plan_follower1_9);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 10:
            {
                geometry_msgs::Pose start_pose10 = arm.getCurrentPose(end_effector_link).pose;
                std::vector<geometry_msgs::Pose> waypoints10;
                waypoints10.push_back(start_pose10);
                geometry_msgs::Pose pose10 = start_pose10;
                pose10.position.x = 0.3;
                pose10.position.y = -0.45;
                pose10.position.z = 0.6;
                waypoints10.push_back(pose10);
                pose10.position.z = 0.25;
                waypoints10.push_back(pose10);
                waypoints10.push_back(start_pose10);
                moveit_msgs::RobotTrajectory trajectory10;
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_10;
                while(fraction < 1.0 && attempts < maxtries)
                {
                    fraction = arm.computeCartesianPath(waypoints10, eef_step, jump_threshold, trajectory10);
                    attempts++;
                    if(attempts % 10 == 0)
                        ROS_INFO("Still trying after %d attempts...", attempts);
                }
                if(fraction == 1)
                {
                    ROS_INFO("Path computed successfully. Moving the arm. # %d",msg->dance_group_number);
                    // 生成机械臂的运动规划数据
                    my_plan_follower1_10.trajectory_ = trajectory10;
                    // 执行运动
                    arm.execute(my_plan_follower1_10);
                }
                else ROS_INFO("Path planning failed with only %0.6f success after %d attempts.", fraction, maxtries);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 11:
            {
                geometry_msgs::Pose start_pose11 = arm.getCurrentPose(end_effector_link).pose;
                std::vector<geometry_msgs::Pose> waypoints11;
                waypoints11.push_back(start_pose11);
                geometry_msgs::Pose pose11 = start_pose11;
                pose11.position.x = 0.3;
                pose11.position.y = 0.45;
                pose11.position.z = 0.6;
                waypoints11.push_back(pose11);
                pose11.position.z = 0.25;
                waypoints11.push_back(pose11);
                waypoints11.push_back(start_pose11);
                moveit_msgs::RobotTrajectory trajectory11;
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_11;
                fraction = 0.0;
                attempts = 0;
                while(fraction < 1.0 && attempts < maxtries)
                {
                    fraction = arm.computeCartesianPath(waypoints11, eef_step, jump_threshold, trajectory11);
                    attempts++;
                    if(attempts % 10 == 0)
                        ROS_INFO("Still trying after %d attempts...", attempts);
                }
                if(fraction == 1)
                {
                    ROS_INFO("Path computed successfully. Moving the arm. # %d",msg->dance_group_number);
                    // 生成机械臂的运动规划数据
                    my_plan_follower1_11.trajectory_ = trajectory11;
                    // 执行运动
                    arm.execute(my_plan_follower1_11);
                }
                else ROS_INFO("Path planning failed with only %0.6f success after %d attempts.", fraction, maxtries);

                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
                break;
            }

            case 12:
            {
                arm.setMaxAccelerationScalingFactor(0.8);
                arm.setMaxVelocityScalingFactor(0.8);
                std::vector<double> joint_group_positions12 = {60./180*3.14, -35./180*3.14, -10./180*3.14, 65./180*3.14, 160./180*3.14, 0./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions12);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_12;
                arm.plan(my_plan_follower1_12);
                arm.execute(my_plan_follower1_12);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 13:
            {
                arm.setMaxAccelerationScalingFactor(0.8);
                arm.setMaxVelocityScalingFactor(0.8);
                std::vector<double> joint_group_positions13 = {0./180*3.14, -60./180*3.14, -25./180*3.14, 0./180*3.14, 185./180*3.14, 0./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions13);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_13;
                arm.plan(my_plan_follower1_13);
                arm.execute(my_plan_follower1_13);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 14:
            {
                arm.setMaxAccelerationScalingFactor(0.8);
                arm.setMaxVelocityScalingFactor(0.8);
                std::vector<double> joint_group_positions14 = {-60./180*3.14, -35./180*3.14, -10./180*3.14, -65./180*3.14, 160./180*3.14, 10./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions14);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_14;
                arm.plan(my_plan_follower1_14);
                arm.execute(my_plan_follower1_14);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }


            case 15:
            {
                arm.setMaxAccelerationScalingFactor(0.8);
                arm.setMaxVelocityScalingFactor(0.8);
                std::vector<double> joint_group_positions15 = {-60./180*3.14, 20./180*3.14, 10./180*3.14, -100./180*3.14, 150./180*3.14, -110./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions15);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_15;
                arm.plan(my_plan_follower1_15);
                arm.execute(my_plan_follower1_15);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 16:
            {
                arm.setMaxAccelerationScalingFactor(0.8);
                arm.setMaxVelocityScalingFactor(0.8);
                std::vector<double> joint_group_positions16 = {0./180*3.14, 0./180*3.14, 90./180*3.14, 0./180*3.14, 90./180*3.14, 0./180*3.14};
                ROS_INFO("Follower 1 ready to MOVE!! %d", msg->dance_group_number);
                arm.setJointValueTarget(joint_group_positions16);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_16;
                arm.plan(my_plan_follower1_16);
                arm.execute(my_plan_follower1_16);
                ROS_INFO("Move  group # %d complete !!!!! #1", msg->dance_group_number);
                std::vector<double> joint_group_positions16_1 = {-60./180*3.14, 20./180*3.14, 10./180*3.14, -100./180*3.14, 150./180*3.14, -90./180*3.14};
                arm.setJointValueTarget(joint_group_positions16_1);
                arm.plan(my_plan_follower1_16);
                arm.execute(my_plan_follower1_16);

//                ROS_INFO("Move  group # %d complete !!!!! #2", msg->dance_group_number);
//                std::vector<double> joint_group_positions16_2 = {-60./180*3.14, -35./180*3.14, -10./180*3.14, -65./180*3.14, 160./180*3.14, 10./180*3.14};
//                arm.setJointValueTarget(joint_group_positions16_2);
//                arm.plan(my_plan_follower1_16);
//                arm.execute(my_plan_follower1_16);
//                ROS_INFO("Move  group # %d complete !!!!! #3", msg->dance_group_number);
//                std::vector<double> joint_group_positions16_3 = {60./180*3.14, -35./180*3.14, -10./180*3.14, 65./180*3.14, 160./180*3.14, 10./180*3.14};
//                arm.setJointValueTarget(joint_group_positions16_3);
//                arm.plan(my_plan_follower1_16);
//                arm.execute(my_plan_follower1_16);
//                ROS_INFO("Move  group # %d complete !!!!! #4", msg->dance_group_number);
//                arm.setJointValueTarget(joint_group_positions16);
//                arm.plan(my_plan_follower1_16);
//                arm.execute(my_plan_follower1_16);
//                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 17:
            {
                arm.setMaxAccelerationScalingFactor(0.8);
                arm.setMaxVelocityScalingFactor(0.8);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_17;
                std::vector<double> joint_group_positions16_2 = {-60./180*3.14, -35./180*3.14, -10./180*3.14, -65./180*3.14, 160./180*3.14, 10./180*3.14};
                arm.setJointValueTarget(joint_group_positions16_2);
                arm.plan(my_plan_follower1_17);
                arm.execute(my_plan_follower1_17);
                ROS_INFO("Move  group # %d complete !!!!! #3", msg->dance_group_number);
                std::vector<double> joint_group_positions16_3 = {60./180*3.14, -35./180*3.14, -10./180*3.14, 65./180*3.14, 160./180*3.14, 10./180*3.14};
                arm.setJointValueTarget(joint_group_positions16_3);
                arm.plan(my_plan_follower1_17);
                arm.execute(my_plan_follower1_17);
                ROS_INFO("Move  group # %d complete !!!!! #4", msg->dance_group_number);
                std::vector<double> joint_group_positions17 = {0./180*3.14, 0./180*3.14, 90./180*3.14, 0./180*3.14, 90./180*3.14, 0./180*3.14};
                arm.setJointValueTarget(joint_group_positions17);
                arm.plan(my_plan_follower1_17);
                arm.execute(my_plan_follower1_17);
                ROS_INFO("Move  group # %d complete !!!!!", msg->dance_group_number);
//                sleep(1);
                break;
            }

            case 18:
            {
                arm.setMaxAccelerationScalingFactor(0.8);
                arm.setMaxVelocityScalingFactor(0.8);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_18;
                for (int i = 0; i < 1; ++i) {
//                    std::vector<double> joint_group_positions18 = {30./180*3.14, 30./180*3.14, -6./180*3.14, -80./180*3.14, 15./180*3.14, 60./180*3.14};
//                    arm.setJointValueTarget(joint_group_positions18);
//
//                    arm.plan(my_plan_follower1_18);
//                    arm.execute(my_plan_follower1_18);
//                    std::vector<double> joint_group_positions18_1 = {0./180*3.14, 38./180*3.14, -6./180*3.14, 0./180*3.14, 50./180*3.14, 0./180*3.14};
//                    arm.setJointValueTarget(joint_group_positions18_1);
//                    arm.plan(my_plan_follower1_18);
//                    arm.execute(my_plan_follower1_18);
//                    arm.setJointValueTarget(joint_group_positions18);
//                    arm.plan(my_plan_follower1_18);
//                    arm.execute(my_plan_follower1_18);

                    std::vector<double> joint_group_positions18_2 = {-35./180*3.14, 25./180*3.14, -3./180*3.14, 80./180*3.14, 7./180*3.14, -60./180*3.14};
                    arm.setJointValueTarget(joint_group_positions18_2);
//                    arm.plan(my_plan_follower1_18);
//                    arm.execute(my_plan_follower1_18);
//                    arm.setJointValueTarget(joint_group_positions18_1);
//                    arm.plan(my_plan_follower1_18);
//                    arm.execute(my_plan_follower1_18);
                    arm.setJointValueTarget(joint_group_positions18_2);
                    arm.plan(my_plan_follower1_18);
                    arm.execute(my_plan_follower1_18);

                    ROS_INFO("Move  group # %d complete %d!!!!!", msg->dance_group_number, i);
                }
//                sleep(1);
                break;
            }

            case 19:
            {
                arm.setMaxAccelerationScalingFactor(0.8);
                arm.setMaxVelocityScalingFactor(0.8);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_19;
                for (int i = 0; i < 1; ++i) {
                    std::vector<double> joint_group_positions19 = {-42./180*3.14, 0./180*3.14, -29./180*3.14, -38./180*3.14, 160./180*3.14, -53./180*3.14};
                    arm.setJointValueTarget(joint_group_positions19);
                    arm.plan(my_plan_follower1_19);
                    arm.execute(my_plan_follower1_19);
                    std::vector<double> joint_group_positions19_1 = {0./180*3.14, 38./180*3.14, -35./180*3.14, 2./180*3.14, 115./180*3.14, -95./180*3.14};
                    arm.setJointValueTarget(joint_group_positions19_1);
                    arm.plan(my_plan_follower1_19);
                    arm.execute(my_plan_follower1_19);
                    arm.setJointValueTarget(joint_group_positions19);
                    arm.plan(my_plan_follower1_19);
                    arm.execute(my_plan_follower1_19);

                    std::vector<double> joint_group_positions19_2 = {42./180*3.14, -3./180*3.14, -27./180*3.14, 38./180*3.14, 162./180*3.14, -129./180*3.14};
                    arm.setJointValueTarget(joint_group_positions19_2);
                    arm.plan(my_plan_follower1_19);
                    arm.execute(my_plan_follower1_19);
                    arm.setJointValueTarget(joint_group_positions19_1);
                    arm.plan(my_plan_follower1_19);
                    arm.execute(my_plan_follower1_19);
                    arm.setJointValueTarget(joint_group_positions19_2);
                    arm.plan(my_plan_follower1_19);
                    arm.execute(my_plan_follower1_19);
                    ROS_INFO("Move  group # %d complete %d!!!!!", msg->dance_group_number, i);
                }
//                sleep(1);
                break;
            }

            case 20:
            {
                arm.setMaxAccelerationScalingFactor(0.8);
                arm.setMaxVelocityScalingFactor(0.8);
                moveit::planning_interface::MoveGroupInterface::Plan my_plan_follower1_20;
                for (int i = 0; i < 1; ++i) {
                    std::vector<double> joint_group_positions20 = {90. / 180 * 3.14, 35. / 180 * 3.14,
                                                                   -25. / 180 * 3.14, 95. / 180 * 3.14,
                                                                   150. / 180 * 3.14, -230. / 180 * 3.14};
                    arm.setJointValueTarget(joint_group_positions20);
                    arm.plan(my_plan_follower1_20);
                    arm.execute(my_plan_follower1_20);
                    std::vector<double> joint_group_positions20_1 = {150. / 180 * 3.14, 40. / 180 * 3.14,
                                                                     -53. / 180 * 3.14, 96. / 180 * 3.14,
                                                                     192. / 180 * 3.14, -255. / 180 * 3.14};
                    arm.setJointValueTarget(joint_group_positions20_1);
                    arm.plan(my_plan_follower1_20);
                    arm.execute(my_plan_follower1_20);

                    std::vector<double> joint_group_positions20_2 = {108. / 180 * 3.14, 36. / 180 * 3.14,
                                                                     -51. / 180 * 3.14, 87. / 180 * 3.14,
                                                                     151. / 180 * 3.14, -230. / 180 * 3.14};
                    arm.setJointValueTarget(joint_group_positions20_2);
                    arm.plan(my_plan_follower1_20);
                    arm.execute(my_plan_follower1_20);
                    arm.setJointValueTarget(joint_group_positions20_1);
                    arm.plan(my_plan_follower1_20);
                    arm.execute(my_plan_follower1_20);
                    ROS_INFO("Move  group # %d complete %d!!!!!", msg->dance_group_number, i);
                }

                    for (int i = 0; i < 1; ++i) {
                        std::vector<double> joint_group_positions20_3 = {-148./180*3.14, 40./180*3.14, -51./180*3.14, 92./180*3.14, -5./180*3.14, -255./180*3.14};
                        arm.setJointValueTarget(joint_group_positions20_3);
                        arm.plan(my_plan_follower1_20);
                        arm.execute(my_plan_follower1_20);
                        std::vector<double> joint_group_positions20_4 = {-108./180*3.14, 31./180*3.14, -45./180*3.14, 103./180*3.14, 34./180*3.14, -265./180*3.14};
                        arm.setJointValueTarget(joint_group_positions20_4);
                        arm.plan(my_plan_follower1_20);
                        arm.execute(my_plan_follower1_20);
                        arm.setJointValueTarget(joint_group_positions20_3);
                        arm.plan(my_plan_follower1_20);
                        arm.execute(my_plan_follower1_20);
                        ROS_INFO("Move  group # %d complete %d!!!!!", msg->dance_group_number, i);

                }
//                sleep(1);
                break;
            }

            default:
            {
                arm.setNamedTarget("home");
                arm.move();
//                ROS_INFO("Follower 1 MOVE!!!! %d", msg->dance_group_number);
                break;
            }
        }

    }
    else ROS_INFO("Waiting!!!!! msg->ready2next = false !!! ");
}



int main(int argc, char **argv) {
    ros::init(argc, argv, "dance_follower1");
    ros::AsyncSpinner spinner(2);
    spinner.start();

    ros::NodeHandle nh;
    Follower follower1;
    ros::Rate r(10);
    ROS_INFO("Waiting!!!!!");

//    probot_g602_demo::leader_control msg;
//    msg.ready2next = true;
//    msg.dance_group_number = 1;
//    follower1.FollowerCallback(msg);

    ros::Subscriber Follower1_sub = nh.subscribe("/leader_control", 10, &Follower::FollowerCallback,&follower1);
    while (ros::ok())
    {
//        ros::spinOnce();
        r.sleep();
    }


    return 0;
}


