/*
rsvp.cpp
COP3503
Project_Team 18:
                Kareem Joudeh
                Nicholas Perret
                Matthew Petela
                Kailee Ringrose
                Kimberly Spencer
                Jovanny Vera
                Mark Wagner
*/

#include <string> //Used for string //matt
#include <ctime> //used for date and time of event //matt

#include "rsvp.h" //includes header file //matt

void Event::Event();

void Event::setEventName(std::string event){
    eventName=event;
}

void Event::setEventTime(time_t now){
    eventTimeDate = now;
}