// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[]           = "57a40c50-11c7-4f92-ab17-6155b9ef2e7a";
const char DEVICE_LOGIN_NAME[]  = "d0237d17-0960-4d76-8179-73db8c70bfa9";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onFanChange();
void onLed1Change();
void onBuzzerChange();

CloudSwitch fan;
CloudSwitch led1;
CloudSwitch buzzer;
CloudTemperatureSensor temperature;
float humidity;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(fan, READWRITE, ON_CHANGE, onFanChange);
  ArduinoCloud.addProperty(led1, READWRITE, ON_CHANGE, onLed1Change);
  ArduinoCloud.addProperty(buzzer, READWRITE, ON_CHANGE, onBuzzerChange);
  ArduinoCloud.addProperty(temperature, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(humidity, READ, ON_CHANGE, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);