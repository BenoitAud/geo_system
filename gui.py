from guizero import App, Text, PushButton

def start_scan():
    print("START")
    update_state("SCAN EN COURS...")

def stop_scan():
    print("STOP")
    update_state("À L'ARRÊT")

def update_state(state):
    state_checker.value = "\nÉtat actuel: " + state

def kill_app():
    print("Fermeture de l'interface de contrôle...")
    app.destroy()

app = App(title="Interface de contrôle")
app.full_screen = True

start_button = PushButton(app, command=start_scan, text="START", width="fill", height=3, align="top")
stop_button = PushButton(app, command=stop_scan, text="STOP", width="fill", height=3, align="top")
kill_button = PushButton(app, command=kill_app, text="Fermer l'application", width=20, height=2, align="bottom")

start_button.bg = "green"
stop_button.bg = "red"

state_checker = Text(app, text="--", align="top")
update_state("À L'ARRÊT")

app.display()
