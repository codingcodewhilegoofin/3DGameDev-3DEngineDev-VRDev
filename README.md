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
- 1: Learn how VR games work
- 2: Create a small VR scence even if I can't explore it 
- 3: Get google cardboard to work
- 4: Finish 2D enginge if possible
- 5: Render a picture with custom 2D engine 


  - Progress [Progress](#Progress3)
  - VrGame [Vrgame](#Vrgame)

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
9/12/2020
  * Started 3D engine 
9/13/2020
  * Created Basic structures and consle dimensions
  * Creating Projection Matrix
9/19/2020
  * Finding the normal of our triangles
  * Continued learning
9/26/2020
  * Learned about .obj files, perspective, and rendering 
10/10/2020
  * Began 2D engine
10/16/2020
  * Further 2D development
10/23/2020
  * Further 2D development



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


The first thing I did was define the screeen dimensions.

From here we define 3 structures, 

Coordinates, Triangles, and a vector of triangles ( mesh ) 

Really all a mesh is , is a vector of triangles. 

Then we define what a cube is based on our triangle theory. Basically we map each face of our cube to 3 x,y,z coordinates.
These are all represented as floating point numbers organized into groups of 2 triangles with 6 verticies per face. 

Now I tried to draw the triangle into a 2D space. In order to do this we must consider aspect ratio, triangles, 
and field of view. 

Summed up we need to follow this formula in order to properly translate 3D into 2D:
Projection = [width/height((1/tan(theta/2)(x)) , (1/tan(theta/2))(y) , z((Zfar/Zfar-Znear)-((ZfarZnear)/Zfar-Znear))]

This projection will be set against a matrix called : Projection Matrix. 

The next part of the game engine design phase is calculation the "normals" of our triangles. This involves calculus and uses the CROSS PRODUCT formula: The Cross Product a × b of two vectors is another vector that is at right angles to both

Here we can calculate the normal for each of our x, y, z axies. 

Nx = Ay x Bz - AzBy
Ny = Az x Bx - AxBz
Nz = Ax x By - AyBx

It is critical to realize that our triangles have been calculated in a clockwise manner. The normal vector will change direction based on this rotation of points. 

![ImageofNormalDirecton](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b0/Cross_product_vector.svg/220px-Cross_product_vector.svg.png)

From here we calculate our normals for each line and then need to normalize the vector :
To normalize a vector, therefore, is to take a vector of any length and, keeping it pointing in the same direction, change its length to 1, turning it into what is called a unit vector. 

We have now created basic culling based on the fact that when our normal vector is n < 0 we can see it.

Unfortunantley this means that our field of view of this cube is still off. To fix this we need to make sure that the face is only visible at an angle of 90 degrees using everyones favorite calc 3 equation

The dot product:

D = Ax . Bx + Ay . By + Az . Bz

We can create a camera which is originally poistioned at point ( 0 ,0 ,0 ) as a basis and from there project a line within 90 degrees of the FOV. 

This allows us to only calculate the normals that are only within that FOV at the time 

n > 0 will show an inverse culling render because we are showing all normals OUTSIDE our FOV. 

Once we fill in these triangles to get a sense of depth VS the wireframe, we run into ANOTHER problem

To interpret depth properly in 2D space you need shading , which means lighting. 

To do this we add false illumination via light direction vectors.

From here on the 3D aspect of drawing shapes becomes very complicated and would take years and years to do. Luckily these advancements in technology have already occured and we can simply pull in 3D models through obj files as long as they consist of triangles.

From here I made the decision that trying to create my own 3D game engine by myself, and then try to make a game from it would take more time than I had available. So, I began simplifying to a 2D engine. 

# ProjectPart2

To begin designing my 2D game engine I thought the best place to start would be to set up a grid and pixel class. However, I quicly realized that there is no good way to do this in the terminal since it is character based and could actually be blocked by my OS. Most OS will block you from directly altering the pixels of your monitor. So, I decided to get this engine going anywhere soon I would have to use OpenGL. OpenGL will not only handle that issue for me, but is also cross-platform friendly. Specifically the GLFW library.




# Progress3

10/30/2020
  * Tried to get a VR game on my phone through GoogleCardboard
11/6/2020
  * Got a wroking VR game on my phone and did additional research
11/13/2020
  * Learned about VR, AR , XR and dream XR. Looked at HTC vive doc 
11/19/2020
  * Continued to work on the sci-fi meme horror game 
  
# Vrgame

In order to create a VR game I have to understand what it means to create a VR game. I also thought it would be a good idea to know what VR means in a development definition as well. 

Basically there is a term Unity uses called XR which is just a term refering to different kinds of applications. 
So VR will simulate a completley different environment, MR will combine a fake environment with the real world, and AR wil add layers over the real world. 

XR is a TECH STACK similar to a FULL STACK when considering web development. Google cardboard used unity's XR SDK in order to create their own plug in. 

I do not have a VR headset and was not able to get into the lab this semseter, however I plan to utilize my phone as a VR device. I believe that the only open source VR for andriod phones is google's cardboard SDK so I plan to use that. 

The first step amoung others from google's cardboard DOC is to set up the development environment. 

However I thought it would be helpful to first research how VR games are usually made and what makes them a reality per say. 

VR development requires developers to be constantly thingking about spatial conerns. In order to create a VR game I will need to first understand how x, y ,z coordinates in a 3D game work. Luckily I have already done this with " pink balls ". Then I have to be able to import 3D assets to the game through some kind of software such as blender or make my own. Finally it will require using C# ( which I now have experience in ) .

To get into the nitty gritty of Google Cardboard I started with their Unity quickstart guide.

## Setup dev environment PROBLEM:
In the google doc there is a line that states Scan the QR code of a Cardboard viewer to save its parameters. 
This is an issue since I also do not have an actual google cardboard viewer. Also upon downloading the APK package to my device it will crash immedietly upon opening it. 

## Setup solution:
In order to fix this problem I followed the google cardboard DOC very closely for their template game. I then had to configure my build settings to match my phone's andriod version which was Pie. The apk was able to download onto my phone and now works with full funcitonality. 

After this detour I added prefabs, particle affects, models, lighting, and music to my scene. 

## More advanced XR / VR 
From here on I wanted to set up a few custom scripts and prefabs/models to use in my game. Then fully understand how the VR world works and finish a simple horror game. I also wanted to incorporate things I like , such as some memes. 

To have a deeper understanding of XR/VR I had to understand the meaning of 3DOF and 6DOF. For this project I will only need to worry about 3DOF since I have created a mobile VR game which uses my phones gyroscope.

#3DOF mean three degrees of freedom 
This means that the VR app is tracking my phones gyroscope position. There can however be ways to turn a mobile VR app into a complex 6DOF app such as implementing an algorithms similar to google maps GPS location tracking system. This will probably be also out of scope for this assignment. 

I wanted to be able to develop a VR app that was able to be used in browser via the gyroscope as well as via the app store. 

So, I started looking into webglVR type solutions such as WebXR Device API. 

This site is really cool and exactly what I was looking for 
[WebVR](https://immersiveweb.dev/)








### Giovanni Moscato 2020

