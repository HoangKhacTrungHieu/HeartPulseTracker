#include <Arduino.h>
      
      Serial.print("Heart rate:");
      Serial.print(currentHeartRate);
      Serial.print(" bpm / SpO2:");
      Serial.print(currentSpO2);
      Serial.println(" %");
      Serial.print("Input Voltage = ");
      Serial.println(in_voltage, 2);