#include"TLNetTraffic.h"


class TLYellow: public TLState
{
	private:
		TLNetTraffic* _context;

	public:
		TLYellow(TLNetTraffic* context);
		void Handle();
};
