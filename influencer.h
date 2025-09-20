#ifndef INFLUENCER_H
#define INFLUENCER_H

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include"video.h"
using namespace std;


//Definition der Klasse Influencer
class Influencer
{
    public:
        Influencer (string name, vector<Video> v);
    
    private:
        string name;
        vector<Video> videos;
};
#endif