/*----- PROTECTED REGION ID(AxisStateMachine.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        AxisStateMachine.cpp
//
// description : State machine file for the Axis class
//
// project :     
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
//
// Abstract class for axis on TEX for PhyMotionMotor class
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <Axis.h>

/*----- PROTECTED REGION END -----*/	//	Axis::AxisStateMachine.cpp

//================================================================
//  States   |  Description
//================================================================
//  MOVING   |  
//  STANDBY  |  
//  FAULT    |  
//  ALARM    |  


namespace Axis_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Axis::is_position_allowed()
 *	Description : Execution allowed for position attribute
 */
//--------------------------------------------------------
bool Axis::is_position_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for position attribute in Write access.
	/*----- PROTECTED REGION ID(Axis::positionStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Axis::positionStateAllowed_WRITE

	//	Not any excluded states for position attribute in read access.
	/*----- PROTECTED REGION ID(Axis::positionStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Axis::positionStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Axis::is_limit_switch_p_allowed()
 *	Description : Execution allowed for limit_switch_p attribute
 */
//--------------------------------------------------------
bool Axis::is_limit_switch_p_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for limit_switch_p attribute in read access.
	/*----- PROTECTED REGION ID(Axis::limit_switch_pStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Axis::limit_switch_pStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Axis::is_limit_switch_c_allowed()
 *	Description : Execution allowed for limit_switch_c attribute
 */
//--------------------------------------------------------
bool Axis::is_limit_switch_c_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for limit_switch_c attribute in read access.
	/*----- PROTECTED REGION ID(Axis::limit_switch_cStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Axis::limit_switch_cStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Axis::is_limit_switch_m_allowed()
 *	Description : Execution allowed for limit_switch_m attribute
 */
//--------------------------------------------------------
bool Axis::is_limit_switch_m_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for limit_switch_m attribute in read access.
	/*----- PROTECTED REGION ID(Axis::limit_switch_mStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Axis::limit_switch_mStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Axis::is_Stop_allowed()
 *	Description : Execution allowed for Stop attribute
 */
//--------------------------------------------------------
bool Axis::is_Stop_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Stop command.
	/*----- PROTECTED REGION ID(Axis::StopStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Axis::StopStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(Axis::AxisStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	Axis::AxisStateAllowed.AdditionalMethods

}	//	End of namespace
