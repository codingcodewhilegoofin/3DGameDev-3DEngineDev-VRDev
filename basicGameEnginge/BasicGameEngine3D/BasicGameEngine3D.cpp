// BasicGameEngine3D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "olcConsoleGameEngine.h"

class olcEngine3D: public olcConsoleGameEngine
{


public:

    olcEngine3D()
    {
    
       
    }


public:
    bool OnUserCreate() override
    {
    
        //Continue running 
        return true;
    }
    bool OnUserUpdate(float fElapsedTime) override
    {

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

