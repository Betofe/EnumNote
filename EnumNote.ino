/*
 Name:		EnumNote.ino
 Created:	3/24/2023 1:40:25 PM
 Author:	Imami Joel Betofe
*/

enum Color {
    RED,
    GREEN,
    BLUE
};

void setup() {
    Serial.begin(9600);
}

void loop() {
    Color color = RED;

    switch (color) {
    case RED:
        Serial.println("Color is RED");
        break;
    case GREEN:
        Serial.println("Color is GREEN");
        break;
    case BLUE:
        Serial.println("Color is BLUE");
        break;
    default:
        Serial.println("Unknown color");
        break;
    }

    delay(1000);
}
