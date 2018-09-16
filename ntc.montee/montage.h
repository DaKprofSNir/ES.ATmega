/*
 * Le module NTC est constitué d'une résistance NTC en série avec une résistance fixe. 
 * Le module NTC comporte trois broches :
 * La mesure s'éffectue au point milieu de ce montage, les deux autres alimentent le montage.
 * 
 * Connexions :
 * 
 * La broche marquée "S" pour signal qui doit être reliée à l'entrée A1
 * 
 * La broche marquée "-" qui doit être reliée à GND (pour ground == masse == 0 Volts == référence )
 * 
 * La broche au milieu non marquée, qui doit apporter l'alimentation et se connecte à 
 * Vcc (Voltage at common Collector == 5V dans le cas ATmega328 == Alimentation du micro-contrôleur )
 * 
 */
