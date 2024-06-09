from guizero import App, Text, PushButton
import subprocess

def start_scan():
    print("START")
    update_state("SCAN EN COURS...")
    # XYZ START ROSBAG
    # XYZ MAPPING SETUP/START

def stop_scan():
    print("STOP")
    update_state("À L'ARRÊT")
    # XYZ STOP ROSBAG
    # XYZ MAPPING SAVING/STOP

def start_websocket():
    # Start websocket in screen
    subprocess.run(['screen', '-dmS', 'websocket', 'bash', '-c', 'ros2 launch rosbridge_server rosbridge_websocket_launch.xml'], check=False)
    websocket_button.bg = "green"

def update_state(state):
    state_checker.value = "\nÉtat actuel: " + state

def kill_app():
    print("Fermeture de l'interface de contrôle et shutdown des noeuds ROS")
    subprocess.run(['killall', 'screen'], check=False)
    app.destroy()

if __name__=='__main__':
    # Start sensors in screen
    subprocess.run(['screen', '-dmS', 'sensors', 'bash', '-c', 'ros2 launch ros2_ws/launch/sensors.launch.py'], check=False)

    app = App(title="Interface de contrôle")
    app.full_screen = True

    start_button = PushButton(app, command=start_scan, text="START", width="fill", height=3, align="top")
    stop_button = PushButton(app, command=stop_scan, text="STOP", width="fill", height=3, align="top")
    kill_button = PushButton(app, command=kill_app, text="Fermer l'application", width=20, height=2, align="bottom")
    websocket_button = PushButton(app, command=start_websocket, text="Démarrer le websocket Foxglove", width=30, height=1, align="top")

    start_button.bg = "green"
    stop_button.bg = "red"
    websocket_button.bg = "purple"

    state_checker = Text(app, text="--", align="top")
    update_state("À L'ARRÊT")

    app.display()
