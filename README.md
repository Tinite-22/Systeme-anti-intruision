# Systeme-anti-intruision
Code Arduino pour la détection de mouvement avec capteur PIR et buzzer

Description:
Ce projet Arduino permet de détecter un mouvement à l’aide d’un capteur PIR (HC-SR501) et d’émettre une alerte sonore à l’aide d’un buzzer.
Lorsqu’une présence est détectée, le buzzer émet plusieurs bips successifs pour signaler le mouvement.

Mode de fonctionnement:
-Le capteur PIR surveille la zone et détecte toute variation infrarouge causée par le passage d’une personne.
-Dès qu’un mouvement est détecté, le capteur envoie un signal HIGH à la carte Arduino.
-L’Arduino active alors le buzzer, qui émet plusieurs sons espacés d’une seconde.
-Si aucun mouvement n’est détecté, le buzzer reste silencieux.

Liste des composants:
-Arduino Uno / Nano: Carte principale du système
-Capteur PIR HC-SR501: Détecte le mouvement
-Buzzer actif: Émet des signaux sonores en cas d'intrusion

| Composant       | Broche du module | Broche Arduino | Description                            |
| --------------- | ---------------- | -------------- | -------------------------------------- |
| **Capteur PIR** | VCC              | 5V             | Alimentation du capteur                |
|                 | OUT              | D12            | Signal de détection envoyé à l’Arduino |
|                 | GND              | GND            | Masse commune                          |
| **Buzzer**      | +                | D4             | Signal de commande du buzzer           |
|                 | –                | GND            | Masse commune                          |

NB:
-En télechargant le fichier word: Réaliser un system anti intrusion, vous retrouverez les connexions à réaliser ainsi que le Rôle
de chaque composants
-Après avoir réaliser toutes les connexions, allez dans le logiciel Arduino, créez un nouveau fichier code. Copiez le code 
« Anti_mouvement_system » et collez-le à l’intérieure de votre fichier code puis téleversez-le. 
