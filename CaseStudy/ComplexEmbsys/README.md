This is a complex embedded system which is taken into consideration for the case study.
This is the functional block diagram of the implemented controller.
This contains the different types of components used in the circuit.
This includes various sensors and other pheripherals.

# **Working**

The system initially takes the input from the actions of user. As the user make tilts of head
the MEMS sensor senses the tilt and calibrates. The MEMS sensor provides information to
controller. This controller which is programmed, with the help of embedded C or Python
instructions, is capable of communicating with transmitter and receiver modules. As per the
micro controller instructions the appliances operates and the user gets what he wants. We can
hear the physically challenged person's needs through text to speech conversation.

## MPU6050

MPU6050 is an absolute 6-axis Movement tracking device. It amalgamates a 3-axis
accelerometer, a 3-axis gyroscope, and a DMP(Digital Motion Processor) all in a compact
package. It has a supplementary added feature of an on-chip temperature sensor. It also has
an I2C bus port to communicate with the Micro controller.
This sensor is used to detect the head tilts.

# **Algorithm**

Step 1:
By using MPU6050 coordinates of the tilt are recorded
Step 2:
Values are optimised and specifed action is determined.
Step 3:
Based on the action specfied output function is selected
Step:4
If the specfied action is corresponding to switch on/f light or fan then the signal is
communicated using Radio Frequency.
Step 5:
If the action specifed is to announce then the announcement will be read out loud.
Step 6:
Acknowledgement of the completed process is given.

## Application

Many common activities like asking for glass of water and asking for medicine are not possible
for the people with limited mobility and impairment.In most of these people the only healthy
and active organ will be their head. In order to assist them in their daily life we can make use
of their head movements to meet their needs. Due to the recent advancement in technologies it
is now possible to compensate their inabilities in an efective way.
With the use of miniature sensors we can track the head movement and make decisions based
on that. Using MEMS sensor head coordinates are captured and the tilt is calculated. Based
on the tilt, output action is performed. After every action acknowledgement of the completion
is provided through the means of audio.

## Future scope

We can use magnetometer which will add another three axis making it a 9 axis sensor. Using
9-axis gyroscope and accelerometer more tilt movements can be enabled and can be used for
more operations. And also for people using wheel chair the movement can be controlled using
these tilts which will be easier for their transportation. And there are many companies
working to build chip that can be implanted in human brain which can control almost every
smart devices and also the wheel chair just by thinking about so.