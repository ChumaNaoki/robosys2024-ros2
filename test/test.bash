#!/bin/bash

dir=~
[ "$1" != "" ] && dir="$1"

cd $dir/ros2_ws
colcon build
source $dir/.bashrc

timeout 9 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '10角形の内角の和は: 1440°'

timeout 19 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '20角形の内角の和は: 3240°'

timeout 29 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '30角形の内角の和は: 5040°'

timeout 39 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '40角形の内角の和は: 6840°'

timeout 49 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '50角形の内角の和は: 8640°'

timeout 59 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '60角形の内角の和は: 10440°'

timeout 69 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '70角形の内角の和は: 12240°'

timeout 79 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '80角形の内角の和は: 14040°'

timeout 89 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '90角形の内角の和は: 15840°'

timeout 99 ros2 launch mypkg talk_listen.launch.py > /tmp/mypkg.log
cat /tmp/mypkg.log |
grep '100角形の内角の和は: 17640°'
