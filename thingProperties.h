// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "90ba27bd-19ff-458d-a5da-0ce06fe17de6";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onEnchufe1Change();
void onEnchufe2Change();

CloudSmartPlug enchufe1;
CloudSmartPlug enchufe2;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(enchufe1, READWRITE, ON_CHANGE, onEnchufe1Change);
  ArduinoCloud.addProperty(enchufe2, READWRITE, ON_CHANGE, onEnchufe2Change);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
