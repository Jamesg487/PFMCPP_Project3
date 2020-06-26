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
    5) fret size in inches
3 things it can do:
    1) output audio
    2) adjust tone
    3) adjust volume
 */

struct ElectricGuitar

{
    //pickups 
    std::string pickups = "Humbucker";
    //number of stings
    int numOfStrings = 6;
    //body material 
    std::string bodyMaterial= "Ash";
    //body style
    char bodyStyle = 'T';
    //fret size in inches
    float fretSize = 0.81f;

    //output audio
    void outputAudio (bool isJackConnected);
    //adjust tone
    int adjustTone (bool isVolumeKnob, int startKnobPosition, int endKnobPosition);
    //adjust volume
    int adjustVolume (bool isVolumeKnob, int startKnobPosition, int endKnobPosition); 
};

/*
Thing 2) Computer
5 properties:
    1) screen size in inches
    2) usb port type
    3) ram size in GB
    4) screen resolution
    5) cpu in GHz
3 things it can do:
    1) display using screen
    2) output audio 
    3) connect to internet
 */

struct Computer

{
    //screen size in inches
    float screenSize = 13.3f;
    //usb port type
    char usbPortType = 'C';
    //ram size in GB
    int ramSize = 16;
    //screen resolution
    std::string screenRes = "1440×1080";
    //cpu in Ghz
    float cpu = 2.3f;

    //display using screen
    void displayWithScreen (bool isComputerOn);
    //output audio
    void outputAudio (bool isAudioPlaying);
    //connect to internet
    void connectToInternet (bool isRouterOn, std::string wifiPassword);
};

/*
Thing 3) Bicycle
5 properties:
    1) wheel size in inches
    2) frame size in cm
    3) number of gears
    4) handlebar type
    5) tyres
3 things it can do:
    1) change gear
    2) steer
    3) move
 */

struct Bicycle

{
    //wheels size in inches
    float wheeleSize = 27.5f;
    //frame size in cm
    int frameSize = 58;
    // number of gears
    int numOfGears = 21;
    //handlebar type
    std::string handlebarType = "DropDown";
    //tyres
    std::string tyres = "Road";

    //change gear
    void changeGear (int currentGear, int desiredGear);
    //steer
    bool steer (bool isObstacle, bool isDestinationDirection);
    //move
    bool move (bool onBike); 
};

/*
Thing 4) Coffee Machine
5 properties:
    1) portafilter size in mm 
    2) water pressure in bar
    3) hopper capacity in kg
    4) water reservoir capacity in ltr
    5) grind coarseness
3 things it can do:
    1) extract coffee
    2) froth milk
    3) grind beans
 */

struct CoffeeMachine

{
    //portafilter size in mm
    int portafilterSize = 58;
    //water pressure in bar
    int waterPressure = 9;
    //hopper capacity in kg
    float hopperCapacity = 1.2f;
    //water reservoir capacity in ltr 
    double waterReservoirCapacity = 1.4;
    //grind coarseness
    std::string grindCoarseness = "Fine";

    //extract coffee
    void extractCoffee (bool isPortafilterFull, bool optimumWaterTemp);
    //froth milk
    void frothMilk (bool cappuccino, std::string milkType);
    //grind beans
    void grindBeans (std::string grindCoarseness);
};

/*
Thing 5) Distortion Section
5 properties:
    1) distortion type
    2) drive amount
    3) tone 
    4) level
    5) distortion footswitch
3 things it can do:
    1) distort audio
    2) adjust volume
    3) adjust brigthness
 */

struct DistortionSection

{
    //distortian type
    std::string distType = "Fuzz";
    //drive amount
    int driveAmount = 65;
    //tone
    int distTone = 40;
    //level
    int distLevel = 80;
    //distortion footswitch
    bool distFootswitchOn = true;

    //distort audio
    void distortAudio (int driveAmount, int distLevel, bool distFootswitchOn);
    //adjust volume
    int adjustVolume (int distLevel);
    //adjust brightness 
    int adjustBrightness (int distTone);
};

/*
Thing 6) Delay Section
5 properties:
    1) delay type
    2) delay time in ms
    3) feedback amount
    4) delay level
    5) delay footswitch
3 things it can do:
    1) add delayed audio signal
    2) recieve tap information
    3) adjust volume
 */

struct DelaySection

{
    //delay type
    std::string delayType = "Short";
    //delay time in ms
    int delayTime = 110;
    //feedback amount
    int feedbackAmount = 42;
    //delay level
    int delayLevel = 30;
    //delay footswitch
    bool delayFootswitchOn = false;

    //add delayed audio signal
    void delayAudio (int delayTime, int feedbackAmount, bool delayFootswitchOn);
    //recieve tap information
    int tapTempo (bool delayFootswitchOn,int deltaTapTime);
    //adjust volume
    int adjustVolume (int delayLevel);
};

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

struct Preamp

{
    //cab type
    std::string cabType = "VintageClean";
    //gain level
    int preampGain = 4;
    //treble value
    int preampTreble = 8;
    //bass value
    int preampBass = 5;
    //bypass switch
    bool isPreampBypassOn = false;

    //attenuate frequencies
    void outputEq (int preampTreble,int preampBass);
    //add overdrive
    void overdrive (int preampGain);
    //adjust volume
    int preampTotalVolume (int preampGain,int preampVolume); 
};

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

struct ModulationSection 

{
    //modulation type
    std::string modType = "Chorus";
    //rate amount
    int modRate = 15;
    //depth amount
    int modDepth = 34;
    //modulation level
    int modLevel = 73;
    //modulation footswitch
    bool modFootswitchOn = true;

    struct Harmoniser

    {
        //harmoniser key
        char harmKey = 'F';
        //pitch coarse
        int coarsePitch = -7;
        //pitch fine
        int finePitch = 55;
        //harmoniser mix
        int harmMix = 62;
        //harmoniser mode
        std::string harmMode = "Major";

        //add harmomics
        void harmonise (int coarsePitch = -7, int finePitch = 55);
        //blend harmonics 
        void harmBlend (int harmMix = 62);
        //utilise scales
        void harmScale (char harmKey = 'F', std::string harmMode = "Major"); 
    };

    //add harmonic frequencies
    void harmFreq (Harmoniser harmParmeters, bool modFootswitchOn);
    //add dynamic modultaion
    void modDynamic (bool isTremoloOn,int modRate,int modDepth);
    //output phased audio
    void modPhasor (bool isPhasorOn,int modRate,int modDepth);
};

/*
Thing 9) Display
5 properties:
    1) height in cm 
    2) width in cm
    3) digit size in inches
    4) brightness in ucd
    5) number of LEDs
3 things it can do:
    1) monitor battery level
    2) display variables 
    3) display tuning information
 */

struct Display

{
    //height in cm
    float displayHeight = 2.4f;
    //width in cm
    float displayWidth = 3.65f;
    //digit size in inches
    double digitSize = 0.56;
    //brightness in ucd
    int displayBrightness = 12000;
    //number of LEDs
    int numLEDs = 16;

    //monitor battery level
    int batteryLevel (int getBatteryLevel);
    //display variables
    void displayParameter (bool hasKnobMoved, int knobValue);
    //display tuning information
    void displayTuning (char getAudioPitch, bool isSharp, bool isFlat);
};

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

struct MultiEffectsPedal

{
    //distortion section
    DistortionSection distParamValues();
    //delay section
    DelaySection delayParamValues();
    //preamp
    Preamp preampValues();
    //modulation section
    ModulationSection modParamValues();
    //display
    Display displayStatus();

    struct Looper

    {
        //looper engaged
        bool isLooperEngaged = true;
        //dub footswitch
        bool dubTrack = true;
        //track one level
        int trackOneLevel = 6;
        //dub track level
        int dubTrackLevel = 4;
        //tap tempo in ms
        int deltaTapTime = 441;

        //blend looper tracks
        void looperMix (int trackOneLevel = 6, int dubTrackLevel = 4);
        //quantize audio
        void quantizeAudio (int bpm = 136, int deltaTapTime = 441);
        //overwrite loop
        void newLoop (bool isLooperEngaged = true);
    };
    
    //loop audio
    Looper loopParamValues();
    //modulate audio
    void audioModulation (ModulationSection modParamValues());
    //delay audio
    void audioDelay (DelaySection delayParamValues());
};

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
