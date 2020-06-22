/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/






/*
Thing 1) Electric Guitar
5 properties:
    1) pickups
    2) number of strings
    3) body material
    4) body style
    5) fret size
3 things it can do:
    1) output audio
    2) adjust tone
    3) adjust volume
 */

/*
Thing 2) Computer
5 properties:
    1) screen size
    2) usb port type
    3) ram size
    4) screen resolution
    5) cpu
3 things it can do:
    1) display using screen
    2) output audio 
    3) connect to internet
 */

/*
Thing 3) Bicycle
5 properties:
    1) wheel size
    2) frame size
    3) number of gears
    4) handlebar type
    5) tyres
3 things it can do:
    1) change gear
    2) steer
    3) move
 */

/*
Thing 4) Coffee Machine
5 properties:
    1) portafilter size 
    2) water pressure
    3) hopper capacity
    4) water reservoir capacity
    5) grind coarseness
3 things it can do:
    1) extract coffee
    2) froth milk
    3) grind beans
 */

/*
Thing 5) Distortion Section
5 properties:
    1) distortian type
    2) drive
    3) tone
    4) level
    5) distortion footswitch
3 things it can do:
    1) distort audio
    2) adjust volume
    3) adjust brigthness
 */

/*
Thing 6) Delay Section
5 properties:
    1) delay type
    2) delay time
    3) feedback amount
    4) delay level
    5) delay footswitch
3 things it can do:
    1) add delayed audio signal
    2) recieve tap information
    3) adjust volume
 */

/*
Thing 7) Preamp
5 properties:
    1) cab type
    2) gain level
    3) treble value
    4) bass value
    5) bypass switch
3 things it can do:
    1) attenuate frequencies 
    2) add overdrive
    3) adjust volume
 */

/*
Thing 8) Modulation Section
5 properties:
    1) modulation type
    2) rate amount
    3) depth amount
    4) modulation level
    5) modulation footswitch 
3 things it can do:
    1) add harmonic frequencies
    2) add dynamic modultaion
    3) output phased audio
 */

/*
Thing 9) Display
5 properties:
    1) height
    2) width
    3) digit size
    4) brightness
    5) number of LEDs
3 things it can do:
    1) monitor battery level
    2) display variables 
    3) display tuning information
 */

/*
Thing 10) Multi-effects Pedal
5 properties:
    1) distortion section
    2) delay section
    3) preamp 
    4) modulation section
    5) display
3 things it can do:
    1) loop audio
    2) modulate audio
    3) delay audio
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
