#!/bin/bash

dir=~
[ "$1" != "" ] && dir="$1"

cd $dir/ros2_ws
rm -rf build install log
colcon build
source $dir/.bashrc
timeout 9 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log | grep '3角形の内角の和は: 180°'
