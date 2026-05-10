#include <iomanip>
#include <iostream>
#include <string>

class Clock {
public:
  void setHours(int h); /*use constructor */
  void setMins(int m);
  void setCity(std::string c);
  void tickminutes(int addedMins);
  void printclock();

private:
  int hours{};
  int minutes{};
  std::string city{};
};

int main() {
  Clock nyc, g;
  nyc.setHours(9); /*use constructor */
  nyc.setMins(31);
  nyc.setCity("New York City");
  g.setHours(19);
  g.setMins(11);
  g.setCity("Geneva");

  nyc.printclock();
  g.printclock();

  nyc.tickminutes(45);
  nyc.printclock();
  g.tickminutes(45);
  g.printclock();
  return 0;
}

void Clock::setHours(int h) { /*use constructor */
  hours = h;
}

void Clock::setMins(int m) {
  minutes = m;
}

void Clock::setCity(std::string c) {
  city = c;
}

void Clock::tickminutes(int addedMins) {
  minutes += addedMins;
  /*
  while (minutes > 59) {
    minutes -= 60;
    hours += 1;
  }
   */
  hours += minutes / 60;
  minutes = minutes % 60;
  hours = hours % 24;
}

void Clock::printclock() {
  std::cout << city << " " << std::setw(2) << std::setfill('0') << hours << ":"
            << std::setw(2) << std::setfill('0') << minutes << std::setfill(' ')
            << std::endl;
}
/*
World Time Clocks

In this lab exercise, we will define a Clock class with the following private
attributes: hours, minutes as integers (omit the seconds for simplicity).   The
hours represents 24 hours.
city as string
Public functions are: setters for
hours and minutes, and city getters for hours and minutes, and city

Add the following public functions:
1. tickminutes which receives an int parameter to increase the time by the
parameter value. Inside this function, if the minutes value of the clock
instance goes beyond 59, increase the hours by 1 and reset the minutes to the
remainder of the minutes from 60.  Additionally, check if the hours goes beyond
23 and reset it to 0.

2. printclock() which returns the city, hours and minutes.
Example: New York City 09:00

3. Code prototypes of functions in the class definition.

4. Code the class function definitions after the main() which is named
clocksApp.cpp.

5. Everything should be in one cpp file: clocksApp.cpp, including the main()
function, the Clock class prototype, and all the function definitions.

6. In the main() function, create 2 instances of the Clock class, one is nyc
with time set to the time you are running the program.  The second clock is any
city of your choice and set the time as appropriate.

7. Print the 2 clock times.

8. Call the tickminutes() function of each clock bumping the minutes by 45
minutes.

9. Print the 2 clock times.

10.  To finish this exercise, upload your clocks.cpp code and an image of your
results.
 */
