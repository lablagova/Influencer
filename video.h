#ifndef VIDEO_H
#define VIDEO_H

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
using namespace std;

enum class Platform{Twitch, YouTube, Vimeo, BitChute, Flickr, Facebook};
const vector<string> platform_names{"Twitch", "YouTube", "Vimeo", "BitChute", "Flickr", "Facebook"};

//Definition der Klasse Video

class Video
{
    public:
        Video (string title, int length, Platform p = Platform::YouTube);

    private:
        string title; //nicht leer
        int length; // > 5sec
        vector<Platform> platforms; 
};
#endif