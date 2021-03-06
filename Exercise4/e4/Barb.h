/* Program: Barbarian.h
 * Author: Alex Hoffer
 * Date: 10/31/2015
 * Description: Skeleton for Barbarian class.
 */


#ifndef BARB_H
#define BARB_H

#include "Creat.h"

class Barbarian : public Creature
{
protected:
	static bool hasPlayed;
	int timesKilled;
	int timesBeenKilled;
public:
	Barbarian();
	virtual int calculateAttack();
	virtual int calculateDefense();
	virtual int regenHealth();
	virtual bool getHasPlayed();
	virtual void incrementTimesKilled();
	virtual void incrementTimesBeenKilled();
	virtual int getTimesKilled();
	virtual int getTimesBeenKilled();
};

#endif
