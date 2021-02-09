//** ReacXion Source Code **//
//** www.jeremyblum.com **//

/* Timer reload value, globally available */
unsigned int tcnt2;

/* Toggle HIGH or LOW digital write */

//Count 13 = 207 removed
int toggle1 = 0;
int toggle2 = 0;
int toggle3 = 0;
int toggle4 = 0;
int toggle5 = 0;
int toggle6 = 0;
int toggle7 = 0;
int toggle8 = 0;
int toggle9 = 0;
int toggle10 = 0;
int toggle11 = 0;
int toggle12 = 0;


/* Keep track of when each note needs to be switched */
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;
int count6 = 0;
int count7 = 0;
int count8 = 0;
int count9 = 0;
int count10 = 0;
int count11 = 0;
int count12 = 0;


/* Frequency Output Pins */
#define FREQ1 2
#define FREQ2 3
#define FREQ3 4
#define FREQ4 5
#define FREQ5 6
#define FREQ6 7
#define FREQ7 8
#define FREQ8 9
#define FREQ9 10
#define FREQ10 11
#define FREQ11 12
#define FREQ12 13


//Setup Function will run once at initialization
void setup()
{

/* First disable the timer overflow interrupt*/
TIMSK2 &= ~(1<<TOIE2);

/* Configure timer2 in normal mode (no PWM) */
TCCR2A &= ~((1<<WGM21) | (1<<WGM20));
TCCR2B &= ~(1<<WGM22);

/* Select clock source: internal I/O clock */
ASSR &= ~(1<<AS2);

/* Disable Compare Match A interrupt (only overflow) */
TIMSK2 &= ~(1<<OCIE2A);

/* Configure the prescaler to CPU clock divided by 128 */
TCCR2B |= (1<<CS22)  | (1<<CS20); // Set bits
TCCR2B &= ~(1<<CS21);             // Clear bit

/* We need to calculate a proper value to load the counter.
* The following loads the value 248 into the Timer 2 counter
* The math behind this is:
* (Desired period) = 64us.
* (CPU frequency) / (prescaler value) = 125000 Hz -> 8us.
* (desired period) / 8us = 8.
* MAX(uint8) - 8 = 248;
*/
/* Save value globally for later reload in ISR */
tcnt2 = 248;

/* Finally load end enable the timer */
TCNT2 = tcnt2;
TIMSK2 |= (1<<TOIE2);
// 12 of 13 counties represented
//one value of 106 not represented here
//Configure I/O Pin Directions
pinMode(FREQ1,    OUTPUT);
pinMode(FREQ2,    OUTPUT);
pinMode(FREQ3,    OUTPUT);
pinMode(FREQ4,    OUTPUT);
pinMode(FREQ5,    OUTPUT);
pinMode(FREQ6,    OUTPUT);
pinMode(FREQ7,    OUTPUT);
pinMode(FREQ8,    OUTPUT);
pinMode(FREQ9,    OUTPUT);
pinMode(FREQ10,    OUTPUT);
pinMode(FREQ11,    OUTPUT);
pinMode(FREQ12,    OUTPUT);

}

/* Install the Interrupt Service Routine (ISR) for Timer2.  */
ISR(TIMER2_OVF_vect) {
/* Reload the timer */
TCNT2 = tcnt2;

count1++; count2++; count3++; count4++; count5++; count6++; count7++; count8++; count9++; count10++; count11++; count12++;

if (count1 == 106) // pin 2
{
digitalWrite(FREQ1, toggle1 == 0 ? HIGH : LOW);
toggle1 = ~toggle1;
count1 = 0;
}
if (count2 == 116)//pin 3
{
digitalWrite(FREQ2, toggle2 == 0 ? HIGH : LOW);
toggle2 = ~toggle2;
count2 = 0;
}
if (count3 == 127)//pin4
{
digitalWrite(FREQ3, toggle3 == 0 ? HIGH : LOW);
toggle3 = ~toggle3;
count3 = 0;
}
if (count4 ==147)// pin 5
{
digitalWrite(FREQ4, toggle4 == 0 ? HIGH : LOW);
toggle4 = ~toggle4;
count4 = 0;
}
if (count5 == 147)//pin 6
{
digitalWrite(FREQ5, toggle5 == 0 ? HIGH : LOW);
toggle5 = ~toggle5;
count5 = 0;
}
if (count6 == 157)//pin 7
{
digitalWrite(FREQ6, toggle6 == 0 ? HIGH : LOW);
toggle6 = ~toggle6;
count6 = 0;
}
if (count7 == 172)// pin 8
{
digitalWrite(FREQ7, toggle7 == 0 ? HIGH : LOW);
toggle7 = ~toggle7;
count7 = 0;
}
if (count8 == 180)// pin 9
{
digitalWrite(FREQ8, toggle8 == 0 ? HIGH : LOW);
toggle8 = ~toggle8;
count8 = 0;
}
if (count9 ==185) //pin 10
{
digitalWrite(FREQ9, toggle9 == 0 ? HIGH : LOW);
toggle9 = ~toggle9;
count9 = 0;
}
if (count10 == 199)//pin 11
{
digitalWrite(FREQ10, toggle10 == 0 ? HIGH : LOW);
toggle10 = ~toggle10;
count10 = 0;
}
if (count11 == 277)// pin 12
{
digitalWrite(FREQ11, toggle11 == 0 ? HIGH : LOW);
toggle11 = ~toggle11;
count11 = 0;
}
if (count12 == 300)// pin 13
{
digitalWrite(FREQ12, toggle12 == 0 ? HIGH : LOW);
toggle12 = ~toggle12;
count12 = 0;
}


}

void loop()
{
//Do whatever else you want to do with your arduino!
}
