# Smart-Door-Lock
Wifi connected door lock with arduino and ESP8266 using Blynk app

# Step 1
Flash ESP8266 firmware (if you haven't upload any code into esp before, you don't have to do this step)
Set up the below circuit to flash the ESP. (Not sure if its work for arduino nano or mega etc.)

![Esp8266-Flash-Circuit](https://user-images.githubusercontent.com/47865653/112714415-576aae00-8eeb-11eb-8f9d-ad899ade438a.png)

Download Esp flasher tool.

https://www.youtube.com/watch?v=esRwg7yTwQM

# Step 2
Change baud rate of the ESP.
To do that you should set up the circuit in step 1.
After than, upload empty code to arduino and open serial monitor. Make sure that bound rate is 115200 and .....
Than, write AT to the top, you should see OK on the serial monitor.
Change baund rate write AT+UART_DEF=9600,8,1,0,0

https://www.youtube.com/watch?v=6rx-iyUq1Po&list=LL&index=3&t=298s

# Step 3
Set up the below circuit 

![Smart-DoorLock-Schematic](https://user-images.githubusercontent.com/47865653/112714149-158d3800-8eea-11eb-9509-98b1636e51c0.png)

# Step 4
Upload the code to the arduino
