#include"TLRed.h"
#include"TLGreen.h"
#include<iostream>


TLRed::TLRed(TLNetTraffic* context): _context(context) {};

void TLRed::Handle()
{
	printf("Red Light\n");
	_context->setState( new TLGreen(_context) );
}
