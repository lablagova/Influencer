#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include"video.h"
using namespace std;

//Implementierung der Klasse Video


    Video::Video(string title, int length, Platform p)
        : title(title), length(length), platforms{p}
        {    
        if (title.empty() || length <= 5)
            throw runtime_error("Wrong size or no title");
        }
    
    vector<Platform> Video::upload(const vector<Platform>& v)
        
        vector<Platform> ignored

        for (size_t i = 0; i < v.size(); ++i)
        {
                Platform p = v[i];
                bool found = false;
                for (size_t j = 0; j < platforms.size; ++j)
                    {
                        if (platforms[j] == p)
                        found = true;
                        break;
                    }
                if (found)
                {
                    ignored.push_back(p);
                }
                else:
                {
                    platforms.push_back(p);
                }
            return: ignored;
        }
            



       