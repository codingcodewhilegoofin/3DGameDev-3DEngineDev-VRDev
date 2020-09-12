// BasicGameEngine3D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "olcConsoleGameEngine.h"


struct vec3d
{
    //Coordinates(points) in a 3D space 
    float x, y, z;

};


struct triangle
{
    //Triangles resemble 3 vertices on the x,y,z planes
    vec3d tri[3];
};


struct mesh
{
    //A fancy array of these triangles 
    std::vector<triangle> meshgroup;

};

struct matrix
{


};




class olcEngine3D: public olcConsoleGameEngine
{


public:

    olcEngine3D()
    {
        //Enable unicode??
        m_sAppName = L"3D Demo";
       
    }

private: 
    mesh meshcube;

public:
    bool OnUserCreate() override
    {
        meshcube.meshgroup =
        {

        // 6 faces total of a cube
        // SOUTH 2 triangles , 1 face, 3 points per verticie , 3 verticies per triangle
        // 3  x  2 = 6 (x,y,z) points of the south face of the cube
        { 0.0f, 0.0f, 0.0f,    0.0f, 1.0f, 0.0f,    1.0f, 1.0f, 0.0f },
        { 0.0f, 0.0f, 0.0f,    1.0f, 1.0f, 0.0f,    1.0f, 0.0f, 0.0f },

        // EAST                                                      
        { 1.0f, 0.0f, 0.0f,    1.0f, 1.0f, 0.0f,    1.0f, 1.0f, 1.0f },
        { 1.0f, 0.0f, 0.0f,    1.0f, 1.0f, 1.0f,    1.0f, 0.0f, 1.0f },

        // NORTH                                                     
        { 1.0f, 0.0f, 1.0f,    1.0f, 1.0f, 1.0f,    0.0f, 1.0f, 1.0f },
        { 1.0f, 0.0f, 1.0f,    0.0f, 1.0f, 1.0f,    0.0f, 0.0f, 1.0f },

        // WEST                                                      
        { 0.0f, 0.0f, 1.0f,    0.0f, 1.0f, 1.0f,    0.0f, 1.0f, 0.0f },
        { 0.0f, 0.0f, 1.0f,    0.0f, 1.0f, 0.0f,    0.0f, 0.0f, 0.0f },

        // TOP                                                       
        { 0.0f, 1.0f, 0.0f,    0.0f, 1.0f, 1.0f,    1.0f, 1.0f, 1.0f },
        { 0.0f, 1.0f, 0.0f,    1.0f, 1.0f, 1.0f,    1.0f, 1.0f, 0.0f },

        // BOTTOM                                                    
        { 1.0f, 0.0f, 1.0f,    0.0f, 0.0f, 1.0f,    0.0f, 0.0f, 0.0f },
        { 1.0f, 0.0f, 1.0f,    0.0f, 0.0f, 0.0f,    1.0f, 0.0f, 0.0f },

        };

        //Continue running 
        return true;
    }
    bool OnUserUpdate(float fElapsedTime) override
    {

        //Will clear the screen 
        Fill(0, 0, ScreenWidth(), ScreenHeight(), PIXEL_SOLID, FG_BLACK);

        // Draw the triangle ( through projection ) 
        for (auto tri : meshcube.meshgroup)
        {

        }

       

        return true;
    }





};

int main()
{


    /*
    *
    * Instance of olc engine
    *
    *
    */
    olcEngine3D BasicGameEnginge3D; 


  /*
  *
  * Check if we can create a console 
  *
  *
  *
  * */
    if (BasicGameEnginge3D.ConstructConsole(256, 240, 4, 4))
    {

        //Start console 
        BasicGameEnginge3D.Start();

    }
    else
    {
       
        //Standard error message 
        std::cerr << "Error: Issue in main() with constructing the console ";
    }







}

