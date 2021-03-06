#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
//#include "CinderOpenCV.h"
#include "ProjectConstants.h"
#include "RingToss.h"
#include "Bubble.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class TermProjectApp : public AppNative {
  public:
	RingToss ringtoss;

	void prepareSettings(Settings *settings);
	void setup();
	void mouseDown( MouseEvent event );	
	void keyUp(KeyEvent event);
	void update();
	void draw();
};
void TermProjectApp::prepareSettings(Settings *settings)
{
	settings->setWindowSize(ProjectConstants::APP_RES_WIDTH, ProjectConstants::APP_RES_HEIGHT);
	settings->setFrameRate(ProjectConstants::APP_FPS);
}
void TermProjectApp::setup()
{

}

void TermProjectApp::keyUp(KeyEvent event)
{
	if (event.getCode() == KeyEvent::KEY_ESCAPE)
	{
		quit();
	}
	//if (event.getCode() == KeyEvent::KEY_SPACE)
	//{
	//	ringtoss.draw();
	//	
	//}
}

void TermProjectApp::mouseDown( MouseEvent event )
{
	/*if (event.isLeftDown() == true) {
		ringtoss.draw();
	}*/
}

void TermProjectApp::update()
{
}

void TermProjectApp::draw()
{
	// clear out the window with black
	gl::clear(Color(0,0,0));
	

	
}

CINDER_APP_NATIVE( TermProjectApp, RendererGl )
