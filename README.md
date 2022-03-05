# Smart Traffic System
Our project as the name suggests, “Smart Traffic System” is an advanced and more efficient version of the traditional Traffic System built on the roads. It focuses on two major features:

1. Priority Vehicle System
2. Time Management System


To create this project in its prototype version we have used the following technologies:
 
1. AI/ Machine Learning Algorithms (using libraries such as OpenCV, Matplotlib, Numpy, Tensorflow, pySerial, etc.)
2. Many scripts in python (for accessing and managing all the algorithms and time management during the runtime)
3. Microcontrollers (Arduino UNO)
4. Sensors (Ultrasonic Sensor [HC-SR04]) 
5. Webcam (for accessing the images used in the OpenCV algorithm)
6. LEDs for showing the different colors of the traffic lights.

--------------------------------------------------------------------------------------------------------------

# Priority Vehicle System:
This system is built to prioritize certain vehicles from the rest of the others such as Ambulance or Police cars. This system consists of a signal transmitter (the priority vehicle) and a signal receiver (the traffic signal). For this prototype, we are using Ultrasonic sensors but on the large scale, we could use radio transmitters that could travel large distances and would work more effectively. Now, whenever a signal is received from a priority vehicle it comes along with the data of which lane the car is coming from and at what distance it is from the traffic signal, this, in turn, will stop all the other lanes and only keep the lane from where the priority vehicle is approaching open until that vehicle has gone past the traffic signal eliminating the annoying traffic jam which the vehicle would face. This saves a lot of important time which is necessary for carrying out urgent duties such as medical and many others, which could have been lost during a normal scenario.  

--------------------------------------------------------------------------------------------------------------

# Time Management System:
This system is built to minimize the wastage of unnecessary delays which are faced by people in their day-to-day lives waiting at the traffic signal. Suppose you are traveling late at night and there are very few cars moving on the road at that time of the day but when you approach the traffic signal, you realize that the red light is on your side and you have to wait another 1 minute for the green light to turn off on the other side and as you can see, there is no vehicle on the other side but still you have to wait as the rule states, don’t you think there could be a better solution to this problem? That's where the Time Management System comes into play. It consists of a webcam that automatically saves an image every time at a fixed time interval with the help of a script written in python. Now using OpenCV, Matplotlib, and a few other libraries which were mentioned above, an algorithm detects the number of cars present in that particular lane and if the counted number is less than a particular threshold value (such as 3 cars) it will reduce the delay of the green light which would result in the signal getting transferred to the other lane faster than the original case and you would not have to wait for a long time even if there are none or less vehicle on that lane.

--------------------------------------------------------------------------------------------------------------

# Working Principle:
The project working on two major programming languages, firstly it is coded in python for the vehicle detection portion and then in C++ for the Arduino microcontroller to control all the traffic lights and the sensors. For the Priority Vehicle System, the Ultrasonic sensor present in the lanes will alarm the traffic signal that a priority vehicle is approaching in that particular lane and at what distance it is to the pole so that our program can calculate the time which it would have to block the other lanes and keep the lane open from where that vehicle is approaching until it travels past the signal. This is completely coded in C++ for Arduino where the LEDs and the sensors are programmed to perform the above-mentioned task. As for the time management system, it consists of a few python scripts and algorithms using libraries such as OpenCV which helps click a picture of the lane every time at a fixed time interval using a webcam, the algorithm then looks out for cars in that particular picture as by trying to match the features of a usual car which we have provided in a haarcascade file. After detecting and counting the number of the cars present in the picture it now sends the data to Arduino via Serial Communication (library: pySerial), and the Arduino checks if it is required to reduce the delay of the green light, if so then it reduces the delay of the green light by a certain amount (here 10 seconds). This system uses both python (OpenCV) for the data and Arduino for controlling the traffic lights.



