// --- Déclaration des broches ---
int pirPin = 12;         // Broche du capteur PIR (signal OUT)
int BUZZER_PIN = 4;      // Broche où le buzzer est connecté
int val = 0;             // Variable pour stocker l’état du capteur PIR

// --- Configuration initiale ---
void setup() {
  pinMode(BUZZER_PIN, OUTPUT);  // Définit la broche du buzzer comme sortie
  pinMode(pirPin, INPUT);       // Définit la broche du capteur PIR comme entrée
  Serial.begin(9600);           // Démarre la communication série à 9600 bps
  Serial.println("Test du capteur PIR + buzzer en cours...");
}

// --- Boucle principale ---
void loop() {
  val = digitalRead(pirPin);    // Lit l’état du capteur PIR (HIGH ou LOW)
  
  if (val == HIGH) {            // Si un mouvement est détecté
    Serial.println("🚶 Mouvement détecté !");
    
    // --- 1er bip ---
    tone(BUZZER_PIN, 1000);     // Fait émettre un son de 1000 Hz
    delay(1000);                // Attend 1 seconde
    noTone(BUZZER_PIN);         // Stoppe le son
    delay(1000);                // Pause 1 seconde

    // --- 2e bip ---
    tone(BUZZER_PIN, 1000);
    delay(1000);
    noTone(BUZZER_PIN);
    delay(1000);

    // --- 3e bip ---
    tone(BUZZER_PIN, 1000);
    delay(1000);
    noTone(BUZZER_PIN);
    delay(1000);

    // --- 4e bip ---
    tone(BUZZER_PIN, 1000);
    delay(1000);
    noTone(BUZZER_PIN);
    
    Serial.println("Fin d’alerte 🚨");
  } 
  else {                        // Si aucun mouvement n’est détecté
    noTone(BUZZER_PIN);         // S'assure que le buzzer est éteint
    Serial.println("Aucun mouvement...");
  }

  delay(500);                   // Petit délai pour éviter le spam du moniteur série
}
