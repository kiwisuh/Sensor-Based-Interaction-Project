#pragma once

#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/ImageIo.h"
#include "ProjectConstants.h"


using namespace ci;
using namespace ci::app;
using namespace std;

class Bubble	{
public:
	gl::Texture	mTexture;
	float mBubbleScale;
	Vec3f mBubbleRotation;
	Vec3f mBubblePosition;

	Bubble();
	void setup();
	void update();
	void addParticles(int numParticles);
	void draw();
};

Bubble::Bubble()
{}

void Bubble::setup()
{
	mBubbleScale = 0.8f;
	mBubbleRotation = Vec3f(10.0f, 100.0f, 10.0f);
	mBubblePosition = Vec3f(0.0f, 0.0f, -10.0f);
}

void Bubble::update()
{
	mBubbleScale -= 0.002f;
}

void Bubble::draw()
{
	gl::clear(Color(255, 255, 255));
	//gl::pushMatrices();
	//gl::translate(mBubblePosition);
	//gl::scale(mBubbleScale, mBubbleScale, mBubbleScale);
	//mBubbleTexture.enableAndBind();  //allows us to enable texture for use and also bind it with fiexed function pipeline
	//gl::rotate(mBubbleRotation);
	//gl::draw(mBubbleMesh);   //cinder now draws VBO for us
	//gl::popMatrices();
	//mBubbleTexture.unbind(); //unbind so other objects after don't accidentally use it(probably not necessar)
}