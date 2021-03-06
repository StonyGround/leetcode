//
// Created by cl on 2020/7/16.
// 矩形
//
#include "../base_gl.h"
#include "../ggl.h"
#include "../utils.h"

#ifndef MY_APPLICATION_RECTANGLE_H
#define MY_APPLICATION_RECTANGLE_H

class Rectangle : public IOpenGL {
private:

    GLuint mProgram;
    GLint mPositionHandle;

    GLint mColorHandle;

    GLuint VBO;

    GLuint EBO;

    GLuint vertShader;

    GLuint fragShader;

    GLuint VAO;

public:
    Rectangle();

    void initOpenGL() override;

    void resize() override;

    void draw() override;

};

#endif //MY_APPLICATION_RECTANGLE_H
