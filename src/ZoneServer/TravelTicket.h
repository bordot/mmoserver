/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2008 The swgANH Team

---------------------------------------------------------------------------------------
*/

#ifndef ANH_ZONESERVER_TANGIBLE_TRAVELTICKET_H
#define ANH_ZONESERVER_TANGIBLE_TRAVELTICKET_H

#include "Item.h"

//=============================================================================

class TravelTicket : public Item
{
	friend class TravelTicketFactory;

	public:

		TravelTicket();
		virtual ~TravelTicket();

		void	handleObjectMenuSelect(uint8 messageType,Object* srcObject);
		string	getBazaarName();

	private:
};

//=============================================================================

#endif