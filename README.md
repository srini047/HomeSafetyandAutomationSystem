# HomeSafetyandAutomationSystem

## Contents

<li>Home Automation System: https://github.com/srini047/HomeSafetyandAutomationSystem/blob/main/README.md#homesafetyandautomationsystem</li>
<li>Problem Statement: https://github.com/srini047/HomeSafetyandAutomationSystem/blob/main/README.md#problem-statement</li>
<li>Ideology and Abstract: https://github.com/srini047/HomeSafetyandAutomationSystem/blob/main/README.md#idealogy-and-abstract</li>
<li>Hardware Requirements: https://github.com/srini047/HomeSafetyandAutomationSystem/blob/main/README.md#hardware-components</li>
<li>Software Requirements: https://github.com/srini047/HomeSafetyandAutomationSystem/blob/main/README.md#software-requirements</li>
<li>Block Diagram: https://github.com/srini047/HomeSafetyandAutomationSystem/blob/main/README.md#blockdiagram</li>
<li>Working (Images): https://github.com/srini047/HomeSafetyandAutomationSystem/blob/main/README.md#working</li>
<li>Video Demonstrations: https://github.com/srini047/HomeSafetyandAutomationSystem/blob/main/README.md#video-demonstrations</li>
<li>Future Scope: https://github.com/srini047/HomeSafetyandAutomationSystem/blob/main/README.md#future-scope</li>
<li>Code: </li>

<hr></hr>

## Problem Statement

![image](https://user-images.githubusercontent.com/81156510/128620075-db235835-6425-4778-aa16-24a50dadc2c5.png)
<li>The major problem for everyone is security whether it is house or data.</li>
<li>Though, we may feel that everything is safe yet there is one or the other way through which the security is breached.</li>
<li>Even though, we have security we could not believe wholly on them or even blame them.</li>
<li>We might have even CCTV installed yet we don’t have time to regularly monitor it.</li>
<li>Hence, it is our duty as an owner to keep track of all things like fire, water, temperature, current, gas security etc so that things don’t go out of hand.</li>
<hr></hr>

## Idealogy and Abstract

![image](https://user-images.githubusercontent.com/81156510/128620082-0db693e5-5bc9-4c64-b1de-e321c3ee0ea5.png)
<li>To overcome the problems stated we have developed a security system which can be integrated anywhere like home, workplace, shops, etc.</li>
<li>We have developed our security system using ESP-8266 as our base.</li>
<li>So to ensure or enhance the security we have interfaced using a few sensors. To name a few like DHT11(thermal sensor), RKI-3100(flame sensor) etc.</li>
<li>So if the threshold value of the sensor is exceeded then we have added buzzers to alert the owner to check and take necessary actions.</li>
<li>You can also control the working of fans, lights, etc from either the web-dashboard or mobile-app.</li>
<li>The same can be controlled using Alexa using voice control and through text as well.</li>
<hr></hr>

## Hardware Components:
<li>ESP-8266 NodeMCU</li>
<li>Jumper Wires</li>
<li>Buzzers</li>
<li>DHT11-Thermal Sensor</li>
<li>DC Motor</li>
<li>Photoersistor</li>
<li>RKI-3100</li>
<li>MQ5-Gas Sensor</li>
<li>LED's</li>
<li>Softwares</li>
<li>some more....<li>
<hr></hr>

## Software Requirements:
<li>Arduino IOT Cloud</li>
<li>Arduino IOT Remote App</li>
<li>Alexa (device + software preffered)</li>
<hr></hr>


## Blockdiagram
![image](https://user-images.githubusercontent.com/81156510/128621367-2757ea3f-ab31-4573-b2ed-65d1fef67a6b.png)
<hr></hr>

# Working

>## Working in Arduino IoT Cloud
![image](https://user-images.githubusercontent.com/81156510/128621404-d642bc21-e2c0-4016-98a0-a01df2e6ec29.png)
### Web Dashboard
![image](https://user-images.githubusercontent.com/81156510/128621504-455a2435-8140-484c-a46e-01fffaad51bd.png)

>## Working in Arduino IoT Remote App
![image](https://user-images.githubusercontent.com/81156510/128621449-25d9417a-6545-45f9-84a2-eb55aa3c08b6.png)

>## Working with Alexa
![video](https://user-images.githubusercontent.com/81156510/128621533-9dab3441-45c4-4cee-98dd-5f7c7f729d86.png)

**Note: We can store the real time data in the form of CSV and it can be used as a dataset for many Machine Learning and Deep Learning models.**

![image](https://user-images.githubusercontent.com/81156510/128621769-02851264-5afa-4ce7-8d24-2ab699544aa2.png)
![image](https://user-images.githubusercontent.com/81156510/128621771-c5308b47-f46d-4ce8-9f0e-c939255b8078.png)

***Links to Visualizations of the Data:***
<ul>
  <li>Temperature Data: https://tabsoft.co/3Al5j2D</li>
  ![Overall-Dashboard](https://user-images.githubusercontent.com/81156510/128622419-4232848a-ed68-4283-8556-c4c93feeebce.png)
  
  <li>Humidity Data: https://tabsoft.co/3CrGKTx</li>
  ![Humidity](https://user-images.githubusercontent.com/81156510/128622424-7de0e713-bbd9-4cf6-bc56-0a9b529eb04e.png)

</ul>

## Video Demonstrations:

***Web Dashboard***
https://user-images.githubusercontent.com/81156510/128621627-784e38e1-5b68-4d81-9e39-aa4ca045ebe3.mp4


***Dashboard - Working***
https://user-images.githubusercontent.com/81156510/128621642-d54a16b5-3916-41f6-8f99-7c552acd8f04.mp4


***IoT Remote App Working***
https://user-images.githubusercontent.com/81156510/128621643-382f9954-476a-4a46-9f74-160a21eaad7f.mp4


***Alexa Working (Please unmute👂 to listen preferrably - Earphones)***
https://user-images.githubusercontent.com/81156510/128621648-e880d713-284e-483d-998d-360a3ffc33f9.mp4

## Future Scope:
<li>We can integrate it to real world appliances and go hands free (switches) on it.</li>
<li>Those data can be downloaded as CSV files, which can be used to develop DS and ML models to predict temperature, future etc.</li>
<li>We can control the speed of the fan, RGB Lights, timings of the working of applications etc.</li>
<li>Used to integrate in a HTML Web page and Mobile App so that it is controllable from anywhere.</li>
<li>Send regular updates to replace faulty appliances in the for of messages or notifications using Twilio.</li>

## Drive Link:
**Contains all the necessary files: https://drive.google.com/drive/folders/1mRZ76LcCJsWX3y1vvAeOqNmvOAGMhUtM?usp=sharing**
