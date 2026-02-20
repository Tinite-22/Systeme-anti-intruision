# Systeme-anti-intruision
Code Arduino pour la détection de mouvement avec capteur PIR et buzzer

# Description:
# Ce projet Arduino permet de détecter un mouvement à l’aide d’un capteur PIR (HC-SR501) et d’émettre une alerte sonore à l’aide d’un buzzer.
# Lorsqu’une présence est détectée, le buzzer émet plusieurs bips successifs pour signaler le mouvement.

# Mode de fonctionnement:
# -Le capteur PIR surveille la zone et détecte toute variation infrarouge causée par le passage d’une personne.
# -Dès qu’un mouvement est détecté, le capteur envoie un signal HIGH à la carte Arduino.
# -L’Arduino active alors le buzzer, qui émet plusieurs sons espacés d’une seconde.
# -Si aucun mouvement n’est détecté, le buzzer reste silencieux.
