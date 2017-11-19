/*
ProjectConstants.h
This class will contain all our app variables that will never change, and thu sbe constants
*/

#pragma once

#include "cinder/app/AppNative.h"

namespace ProjectConstants
{
	//app constants
	static const int APP_RES_WIDTH = 1280;
	static const int APP_RES_HEIGHT = 720;
	static const int APP_FPS = 60;

	static const int MAX_OPTICALFLOW_FEATURES = 300;

	//textures
	static const std::string  ASSET_LOC_TEXTURE_BALL = "textures/ball.png";
	static const std::string ASSET_LOC_TEXTURE_CRATE = "textures/crate.jpg";
	static const std::string ASSET_LOC_TEXTURE_BUBBLE = "textures/Soap_Bubble.jpg";
	
	//models
	static const std::string ASSET_LOC_OBJ_BALL = "models/Ball.obj";
	static const std::string ASSET_LOC_OBJ_CRATE = "models/Crate.obj";
	static const std::string ASSET_LOC_OBJ_BUBBLE = "models/Soap_Bubble.obj";
	
};