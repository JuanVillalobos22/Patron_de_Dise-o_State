#include"TLNetTraffic.h"

class TLGreen: public TLState
{
	private:
		TLNetTraffic* _context;

	public:
		TLGreen(TLNetTraffic* context);
		void Handle();
};
