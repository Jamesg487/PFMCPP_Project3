/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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
