#include "Starbucks.h"

	 

 
class Starbucks {
public:
	virtual void build(Entry* c, int n) = 0;
	

	virtual Entry* getNearest(double x, double y) = 0;

};