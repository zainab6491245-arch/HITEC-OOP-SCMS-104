#ifndef ACCOMODATION_H
#define ACCOMODATION_H
class  Accomodation
{
public :
	virtual void allocateRoom() = 0;
	virtual void vacateRoom() = 0;
	virtual ~Accomodation() = default;
};
#endif
