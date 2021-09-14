#include <FastLED.h>
int sound=A0;
// How many leds in your strip?
#define NUM_LEDS 30

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 11
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
  Serial.begin(9600);
       FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() { 
  float s=analogRead(A0);
//  s=map(s,0,850,0,255);
  Serial.println(s);
  //Serial.println(s_st);
 for (int i=0;i<=NUM_LEDS;i++){ 
  // Turn the LED on, then pause
  leds[i] = CRGB::Black;
  FastLED.show();}
  
  if(s==3 && s<10){
    for (int i=0;i<=NUM_LEDS;i++){
  leds[i] = CRGB(80+s,150,s);
  FastLED.show();}}
  
  else if (s>10 && s<15){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB(0+s,(150-s),250);
  FastLED.show();}}
  
   else if (s==15 && s<30){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB(s,30,(255-s));
  FastLED.show();}}
 
  else if (s>30 && s<60){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
 leds[i] = CRGB((s+20),100,s);
 
  FastLED.show();}}

   else if (s>60 && s<100){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB(0+s,(70),200);
  FastLED.show();}}
  

  
  else if (s>100 && s<150){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB((50+s),(50+s),s);
  FastLED.show();}}
  

   else if (s>150 && s<200){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB((45+s),0,(45+s));
  FastLED.show();}}
  
   else if (s>200 && s<250){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB((30+s),(30+s),s);
  FastLED.show();}}
  
   else if (s>250 && s<300){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB(s,(30+s),(30+s));
  FastLED.show();}}
  
   else if (s>300 && s<350){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB((30+s),s,(30+s));
  FastLED.show();}}
  
   else if (s>350 && s<450){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB((20+s),(20+s),s);
  FastLED.show();}}
  
   else if (s>450 && s<550){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB(s,(20+s),(20+s));
  FastLED.show();}}
  
   else if (s>550 && s<650){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB((20+s),s,(20+s));
  FastLED.show();}}
  
   else if (s>650 && s<750){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB((0+s),(255-s),2+s);
  FastLED.show();}}
  
   else if (s>750 && s<800){
    for (int i=0;i<=NUM_LEDS;i++){
  // Now turn the LED off, then pause
  leds[i] = CRGB((10+s),(10+s),s);
  FastLED.show();}}
  

   delay(10);
 // s=0;
}
