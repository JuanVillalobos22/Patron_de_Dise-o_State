#include"TLNetTraffic.h"


class TLRed: public TLState
{
	private:
		TLNetTraffic* _context;

	public:
		TLRed(TLNetTraffic* context);
		void Handle();
};
