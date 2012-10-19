#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/Vector.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Tutorial1App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );
    void mouseMove(MouseEvent event);
	void update();
	void draw();
    Vec2f loc;
    float dx,dy;
    Vec2f mouseLoc;
};

void Tutorial1App::setup()
{
    loc = Vec2f(app::getWindowWidth()/2,app::getWindowHeight()/2);
    
}

void Tutorial1App::mouseMove(MouseEvent event){
   
    
    mouseLoc = event.getPos();
    
    //loc.x = event.getX();
    //loc.y = event.getY();
    
}

void Tutorial1App::mouseDown( MouseEvent event )
{
}

void Tutorial1App::update()
{
    dx = mouseLoc.x - loc.x;
    dy = mouseLoc.y - loc.y;
    
    loc.x += (dx * 0.05);
    loc.y += (dy * 0.05);
}

void Tutorial1App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) );
   
    
    gl::drawSolidCircle(loc,20);
}


CINDER_APP_BASIC( Tutorial1App, RendererGl )
