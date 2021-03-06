#ifndef MOUSEEVENTSABSTRACTOR_H
#define MOUSEEVENTSABSTRACTOR_H

#include "Interfaces/IMouseEvents.h"

template< class T >
class MouseEventsAbstractor : public IMouseEvents
{
	public:
		virtual bool OnClick( IWindow &Window, float X, float Y, unsigned long Button ) = 0;
		virtual bool OnDoubleClick( IWindow &Window, float X, float Y, unsigned long Button ) = 0;
		virtual bool OnMouseWheel( IWindow &Window, float X, float Y, unsigned long Button ) = 0;
		virtual bool OnMouseDown( IWindow &Window, float X, float Y, unsigned long Button ) = 0;
		virtual bool OnMouseUp( IWindow &Window, float X, float Y, unsigned long Button ) = 0;
		virtual bool OnMouseMove( IWindow &Window, float X, float Y, unsigned long Button ) = 0;
		virtual bool OnMouseEnter( IWindow &Window, float X, float Y, unsigned long Button ) = 0;
		virtual bool OnMouseExit( IWindow &Window, float X, float Y, unsigned long Button ) = 0;
};

#endif