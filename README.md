# CSCI497GE-VR
Game Engine and VR development independent study for CSCI 497 at NIU

***********************************************************************************************************************************************

# Start here!
Menu to track progress

## Menu
**Week 1-2**
- C++ review and Game Design 
  - Progress [Progress](#Progress)
  - C++/C#  [C++/C#](#CC)
  - Game Design and Development [Game Design & Development](#GD)
  - Project [Project](#Project)

**Week 3-9**
- Create first game engine
  - Learn what game engines are
  - Best practices for a game engine 
  - Create a basic game engine 
  - Add more advanced features
  - Create a game with the engine
  
  - Progress [Progress](#Progress2)
  - Game engine [GameEngine](#GE)
  - Project [Project](#Project2)

**Week 10-15**


**Paper**

 
 
 
 
***********************************************************************************************************************************************
 
## Progress

9/2/2020
  * Created Github repo
  * Downloaded Unity and finished starter tutorial
  * Refreshed on some basic c++ available to see on hopper/turing
9/3/2020
  * Learn difference between game development and game design
  * Learned the basics of unity with objects, components, and rigid bodies
9/5/2020
  * Basic Scripts
9/6/2020
  * Game design process
  * Game development process
9/7/2020
  * Finished C# and C++ review 
  * Finish first game
  
  
## CC

The first thing I did was to make sure I remember how a basic C++ program works

[MyC++Practice]( http://tpcg.io/vfEqvQTX )

Then I moved on to learning the difference between C++ and C#:

C is a new version of unix and the foundation for C++

C++ is an extension of C and is object-oriented

C# is also a high level language based on C and .NET. It executes on a VM giving it unique checking properties. Supposedly with better syntax. 

A component-oriented language. C# complies into CLR and does not use pointers. C# also is almost never seen outside of windows. 

[MyC#practice](http://tpcg.io/vxcCPrkg)


 
## GD
#### Game Design
* Game design is more of an art/creative process than game development. 

Game designers will:
  - Develop the storyline, gameplay, rules, score systems
  - Build environments , the world, and edits 
  - FX, animation, etc
    



#### Game Development
* Game development has a strict and well detailed pipline however it is still flexible to allow for budgets and creativity

The pipeline follows:

    1 pre-production
    2 production
    3 post-production
    
Pre-production: what, why, and cost. For a very small game should take about a hour to a week

  There are many different team members for all these stages on larger products including:
    - Video game producer
    - Concept artists 

Larger games will have an official GDD ( Game design document ) or MGDD ( Micro game design doc ) 
  - The MGDD will allow for a high level view of the project with plenty of room for changes

Prototyping and placeholder assets also are created at this stage

Production: Largest and most time consuming part of a video game project which can also be split into stages

    - Prototyping
    - Vertical Slice ( Pitch)
    - Pre-Alpha
    - Alpha 
    - Beta
    - Gold/Master
    
  There are many different team members for all these stages on larger products including:
    - Project Manager
    - Game Dev/Programmers ( usually software engineers/ or computer scientists ) 
   
Different types of programming:
  - Game Engine's
  - Scripting
  - 3D graphics / simulations / physics
  - Music / User interface / Logic & Mechanics
  - Bugs , tools, and ports

Post-Production: When the game is done but continued maitenance is needed

Sometimes a post-mortem will occur which is a little meeting to give feedback. 

This includes patches and DLC




## Project
* Basic video game
 

# Progress2

9/11/2020
  * Basic game engine design 
  


# GED

To start understanding Game Engine design we have to consider a few basic principles that go into more depth

   3D VS 2D
   
   Primitive shapes : Quadrilaterals, triangles, n-gons etc
  
* 3D VS 2D
2D games only require you to worry about a game window, sprites, and basic geometry. But this is more natural to create and slighlty easier. 
3D games came from the abstraction that in order to respresent a three dimensional game on a 2D screen that you need a conversion process. 

The conversion process is handled by a graphics engine built into a game engine!

Game engines themselves are a collection or TOOLCHAIN needed to create a video based game. 

If this was a ball based game we would buy a bunch of balls and then thats it. 

Video Based games require all of the elements of video and photography to be able to be handled but also the dimensions related to game mechanics and design

There are many mediums and dimensions to different kinds of video games including 2.5D games. 

* Primitive shapes 
One of the processes of converting 3D geometry into a 2D space involves the triangle ! 

Many 3D shapes can be represented by decomposing that object into billions of triangles. Also ANY 2D shape could theoretically be represented by a triangle except a line which is ofc 1 dimensional only defined by its length. 

This actually reduces the ammount of time and memory required from computers to render and image to the screen. 

Special algorithms make this render and fill method of triangles very optimized

Once such method is RASTERIZATION decribled by the credible source of OpenGl as,

" Rasterization is the process by which a primitive is converted to a two-dimensional image. Each point of this image contains such information as color and depth. Thus, rasterizing a primitive consists of two parts. The first is to determine which squares of an integer grid in window coordinates are occupied by the primitive. The second is assigning a color and a depth value to each such square. (OpenGL Specifications)"

[OpenGL](https://www.scratchapixel.com/lessons/3d-basic-rendering/rasterization-practical-implementation/rasterization-stage)



# Project2

* This project is being developed in Visual Studio Community edition 

This is a standard windows application found in basicGameEngine directory with NO PRECOMPILED HEADERS. ( Thank god they changed that  -_- )

This engine uses a header file provided by 
[OneLoneCoder](https://github.com/OneLoneCoder/videos/blob/master/olcConsoleGameEngine.h)










### Giovanni Moscato 2020

