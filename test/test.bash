#!/bin/bash

dir=~
[ "$1" != "" ] && dir="$1"

source /root/ros2_ws/src/setup.bash

cd $dir/ros2_ws
colcon build
source install/setup.bash
source $dir/.bashrc
ls /root/ros2_ws/src/mypkg
timeout 10 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '3角形の内角の和は: 180°'
