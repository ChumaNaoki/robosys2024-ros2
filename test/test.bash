#!/bin/bash

dir=~
[ "$1" != "" ] && dir="$1"

cd $dir/ros2_ws
colcon build
source $dir/.bashrc

timeout 100 ros2 launch mypkg sum_angle_result.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log | grep '3角形の内角の和は: 180°'
cat /tmp/mypkg.log | grep '4角形の内角の和は: 360°'
cat /tmp/mypkg.log | grep '3角形の内角の和は: 180°'
cat /tmp/mypkg.log | grep '4角形の内角の和は: 360°'
cat /tmp/mypkg.log | grep '5角形の内角の和は: 540°'
cat /tmp/mypkg.log | grep '6角形の内角の和は: 720°'
cat /tmp/mypkg.log | grep '7角形の内角の和は: 900°'
cat /tmp/mypkg.log | grep '8角形の内角の和は: 1080°'
cat /tmp/mypkg.log | grep '9角形の内角の和は: 1260°'
cat /tmp/mypkg.log | grep '10角形の内角の和は: 1440°'
cat /tmp/mypkg.log | grep '11角形の内角の和は: 1620°'
cat /tmp/mypkg.log | grep '12角形の内角の和は: 1800°'
cat /tmp/mypkg.log | grep '22角形の内角の和は: 3600°'
cat /tmp/mypkg.log | grep '32角形の内角の和は: 5400°'
cat /tmp/mypkg.log | grep '42角形の内角の和は: 7200°'
cat /tmp/mypkg.log | grep '52角形の内角の和は: 9000°'
cat /tmp/mypkg.log | grep '62角形の内角の和は: 10800°'
cat /tmp/mypkg.log | grep '72角形の内角の和は: 12600°'
cat /tmp/mypkg.log | grep '82角形の内角の和は: 14400°'
cat /tmp/mypkg.log | grep '92角形の内角の和は: 16200°'
cat /tmp/mypkg.log | grep '102角形の内角の和は: 18000°'
