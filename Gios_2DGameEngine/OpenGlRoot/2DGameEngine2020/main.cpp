
/**
 * This header provides all the constants, 
 * types, and function prototypes of the GLFW API.
 * 
 * 
 ********************************************************/
#include <GL/glew.h>



#include <GLFW/glfw3.h>
#include <iostream>
#include <stdio.h>

bool checkwindow = false;

GLenum err = glewInit();

void error_callback(int error, const char* description)
{
    std::cout << "Callback" << std::endl;
    std::fprintf(stderr, "Error: %s\n", description);
}

bool checkingwindow()
{
    std::cout << "In Window" << std::endl;
    return true;
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
}




int main(void)
{
    GLFWwindow* window;

    glfwSetErrorCallback(error_callback);


 /**
 * Before you can use most GLFW functions, 
 * the library must be initialized. 
 * On successful initialization, GLFW_TRUE is returned. 
 * 
 * If an error occurred, GLFW_FALSE is returned.
 *
 ********************************************************/
    if (!glfwInit())
        return -1;

   /**
   * The window and its OpenGL context are created with a single 
   * call to glfwCreateWindow, which returns a handle to the created 
   * combined window and context object
   *
   ********************************************************/
    window = glfwCreateWindow(1000, 1000, "GioGameEngingeWindow", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {

        while (checkwindow == false)
        {
            checkwindow = checkingwindow();
        }
        
        glfwSetKeyCallback(window, key_callback);

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

   
   

    float points[] = 
    {
     0.0f,  0.5f,  0.0f,
     0.5f, -0.5f,  0.0f,
     -0.5f, -0.5f,  0.0f
    };

   
    

    if (glfwWindowShouldClose(window))
    {
        std::cout << "Window Being destroyed" << std::endl;
        glfwDestroyWindow(window);
    }



    /**
    * When you are done using GLFW, 
    * typically just before the application exits, you need to 
    * terminate GLFW.
    *
    ******************************************************/
    glfwTerminate();

    return 0;
}