# ultraDistance
Arduino Library - distance in cm for HC-SR04.
It's simple library who's `return distance in cm`

# Install

Just download this repository and copy/past `ultraDistance` folder in your `Arduino/libraries` folder

# Use
First thing First include the library
```c++
#include <UltraDistance.h>
```
Then you can init the `UltraDistance` class and pass the trigger pin plus echo pin in that order : 
```c++
// ultraDistanxce(triggerPin, echoPin)
UltraDistance ultraDistance(3,2);
```
Now in your loop function you can call 
```c++
void loop() {
  Serial.print("Distance in centimeter ");
  Serial.println(ultraDistance.get());
}
```
You can see in your monitor series of print like this : 
```
Distance in centimeter: 28
Distance in centimeter: 29
Distance in centimeter: 28
Distance in centimeter: 19
Distance in centimeter: 18
```

Now the full code : 
```c++
UltraDistance ultraDistance(3,2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distance: ");
  Serial.println(ultraDistance.get());
}
```

# License
MIT