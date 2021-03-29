//
// Created by maxwell on 2019/11/28.
//

#ifndef P3_SEMI_H
#define P3_SEMI_H

#include "ColoredFig.h"
#include "draw.h"
#include "general.h"

class Semi : public ColoredFig {
private:
    Vec R;
    float Ang;//0-360
public:
    Semi(){};
    Semi(Vec anchor,Vec re, Vec R, float ang, float r, float g, float b,bool k = true);
    Vec getR(){return R;}
    float getAng(){return Ang;}
    void draw() override ;
    void zoom(float k) override ;
    void rotate(float ang) override ;
};

#endif //P3_SEMI_H
