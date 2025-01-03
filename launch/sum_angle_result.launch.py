import launch
import launch.actions
import launch.substitutions
import launch_ros.actions


def generate_launch_description():
    sum_angle = launch_ros.actions.Node(
            package='mypkg',      #パッケージの名前を指定
            executable='sum_angle',  #実行するファイルの指定
            )
    result = launch_ros.actions.Node(
            package='mypkg',
            executable='result',
            output='screen'        #ログを端末に出すための設定
            )

    return launch.LaunchDescription([sum_angle, result]) 
