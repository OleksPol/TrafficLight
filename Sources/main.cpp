#include <iostream>
#include <ncurses.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;


#include "../Headers/YellowLight.h"
#include "../Headers/TrafficPicture.h"
#include "../Headers/GreenLight.h"
#include "../Headers/RedLight.h"
#include "../Headers/TrafficTimer.h"
#include "../Headers/TrafficLight.h"
#include "../Headers/TrafficState.h"

void startTrafficLight() {
    TrafficLight trafficLight;
    system("mode con cols=100 lines=50");
    cout << "***********************INTERFACE BUILDER********************" << endl;
    cout << "********YOU CAN USE S,s-Start, P,p-Pause, E,e-Escape********" << endl;
    char input;
    input = getch();
    if (input == 'S' || input == 's') {
        while (true) {
            trafficLight.setState(new RedLight(&trafficLight));
            trafficLight.Handle();
            TrafficTimer::sleep(2000);

            trafficLight.setState(new YellowLight(&trafficLight));
            trafficLight.Handle();
            TrafficTimer::sleep(4000);

            trafficLight.setState(new GreenLight(&trafficLight));
            trafficLight.Handle();
            TrafficTimer::sleep(3000);
        }
    }

}



int main(int argc, char* argv[]) {


    startTrafficLight();


    return 0;
}