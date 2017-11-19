#pragma once

#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/ImageIo.h"
#include "ProjectConstants.h"
#include "AssetManager.h"


using namespace ci;
using namespace ci::app;
using namespace std;

class RingToss{
public:
	
	RingToss();
	void setup();
	void update();
	void addParticles(int numParticles);
	void draw();
	float projectileFunction(float y);
};

RingToss::RingToss()
{}

void RingToss::setup()
{
	
}

void RingToss::update()
{
	
}

void RingToss::draw()
{
	gl::clear(Color(255, 255, 255));
	gl::color(ColorA(0.5f, 0.5f, 0.5f, 0.5f));
	gl::drawSolidCircle(Vec2f(100.0f, 200.0f), 40.0f);
}

void RingToss::projectileFunction(float y)
{
	float z;
	z = (float)(1 / 2) * (9.8)*0.25 + 1 * 0.5 + y;

	return -z;
}

