/*  
   OpenMQTTGateway Addon  - ESP8266 or Arduino program for home automation 

   Act as a wifi or ethernet gateway between your 433mhz/infrared IR signal  and a MQTT broker 
   Send and receiving command by MQTT
 
   This is the Light Meter Addon based on modules with a TSL2561:
   - Measures ambient Light Intensity in Lux (lx)
   - Required Hardware Module: MAX44009 
   - Dependencies: Adafruit_TSL2561 and Adafruit_Sensor

   Connection Scheme:
   --------------------

   TSL2561------> Arduino Uno ----------> ESP8266
   ==============================================
   VIN ---------> 3.3V -----------------> 3.3V
   GND ---------> GND ------------------> GND
   SCL ---------> Pin A5 ---------------> D1
   SDA ---------> Pin A4 ---------------> D2
 
   Copyright: (c) Chris Broekema
  
   This file is part of OpenMQTTGateway.
    
   OpenMQTTGateway is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   OpenMQTTGateway is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifdef ZsensorMAX44009

#include <math.h>
#include <Wire.h>

void setupZsensorMAX44009() {
  
  
}

void MeasureLightIntensityMAX44009() {

}


#endif