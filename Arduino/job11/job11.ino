// On déclare les variables
const int bouton = 4;  // la broche 4 devient bouton
const int led = 12;    // la broche 12 devient led

void setup()
{
    pinMode(bouton, INPUT); // Initialise la broche 4 comme entrée
    pinMode(led, OUTPUT);   // Initialise la broche 12 comme sortie
    Serial.begin(9600);     // Ouvre le port série à 9600 bauds
}

void loop()
{
    // Si bouton poussoir appuyé...
    if (digitalRead(bouton) == 1) // teste si le bouton a une valeur de 1
        // ...on allume la LED
    {
        digitalWrite(led, HIGH);  // allume la LED
    }

    if (digitalRead(bouton) == 3) // si le btn a une valeur de 3
    {
        digitalWrite(12, HIGH);

        delay(1000);

        digitalWrite(12, LOW);

        delay(1000);
    }
    // Sinon...
    else:
        // teste si le bouton a une valeur de 0
        // ...on éteint la LED
      (digitalRead(bouton) >= 4 ) 
    {
        digitalWrite(led, LOW);  // éteint la LED
    }
}