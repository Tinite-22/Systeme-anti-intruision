# 🚨 Système Anti-Intrusion Arduino
Ce projet permet de sécuriser une zone simple (une entrée, un tiroir, une étagère) en utilisant la détection de chaleur corporelle. Si un mouvement est détecté, une alerte sonore stridente est déclenchée.
Description
Le système repose sur un capteur infrarouge passif (PIR) qui surveille l'environnement. Dès qu'une variation thermique humaine est captée :

L'Arduino reçoit un signal "HAUT".

Le programme déclenche une série de bips successifs via le buzzer.

Le système se réinitialise automatiquement après quelques secondes de calme.

Installation et Utilisation

Montage : Réalisez le circuit hors tension en suivant les instructions dans le document word "Realiser un système anti intrusion.

Code : Télécharger le fichier Anti_mouvement_system.ino et ouvrez le avec l'IDE Arduino.

Téléversement : Branchez votre Arduino et cliquez sur Téléverser.

Calibrage : Attendez environ 30 à 60 secondes que le capteur PIR se stabilise.

Test : Passez votre main devant le capteur... Bip ! Bip ! Bip ! 🚨
