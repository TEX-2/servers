/*----- PROTECTED REGION ID(PhyMotionMotorStateMachine.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        PhyMotionMotorStateMachine.cpp
//
// description : State machine file for the PhyMotionMotor class
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
// Pshenichnyi Kirill PNPI 2019
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <PhyMotionMotor.h>

/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::PhyMotionMotorStateMachine.cpp

//================================================================
//  States   |  Description
//================================================================
//  ON       |  
//  MOVING   |  
//  OFF      |  
//  STANDBY  |  


namespace PhyMotionMotor_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotor::is_position_allowed()
 *	Description : Execution allowed for position attribute
 */
//--------------------------------------------------------
bool PhyMotionMotor::is_position_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for position attribute in Write access.
	/*----- PROTECTED REGION ID(PhyMotionMotor::positionStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::positionStateAllowed_WRITE

	//	Not any excluded states for position attribute in read access.
	/*----- PROTECTED REGION ID(PhyMotionMotor::positionStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::positionStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotor::is_absolute_counter_allowed()
 *	Description : Execution allowed for absolute_counter attribute
 */
//--------------------------------------------------------
bool PhyMotionMotor::is_absolute_counter_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for absolute_counter attribute in read access.
	/*----- PROTECTED REGION ID(PhyMotionMotor::absolute_counterStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::absolute_counterStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotor::is_axis_status_allowed()
 *	Description : Execution allowed for axis_status attribute
 */
//--------------------------------------------------------
bool PhyMotionMotor::is_axis_status_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for axis_status attribute in read access.
	/*----- PROTECTED REGION ID(PhyMotionMotor::axis_statusStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::axis_statusStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotor::is_activate_allowed()
 *	Description : Execution allowed for activate attribute
 */
//--------------------------------------------------------
bool PhyMotionMotor::is_activate_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for activate attribute in Write access.
	/*----- PROTECTED REGION ID(PhyMotionMotor::activateStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::activateStateAllowed_WRITE

	//	Not any excluded states for activate attribute in read access.
	/*----- PROTECTED REGION ID(PhyMotionMotor::activateStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::activateStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotor::is_power_stage_temperature_allowed()
 *	Description : Execution allowed for power_stage_temperature attribute
 */
//--------------------------------------------------------
bool PhyMotionMotor::is_power_stage_temperature_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for power_stage_temperature attribute in read access.
	/*----- PROTECTED REGION ID(PhyMotionMotor::power_stage_temperatureStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::power_stage_temperatureStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotor::is_motor_temperature_allowed()
 *	Description : Execution allowed for motor_temperature attribute
 */
//--------------------------------------------------------
bool PhyMotionMotor::is_motor_temperature_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for motor_temperature attribute in read access.
	/*----- PROTECTED REGION ID(PhyMotionMotor::motor_temperatureStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::motor_temperatureStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotor::is_Stop_allowed()
 *	Description : Execution allowed for Stop attribute
 */
//--------------------------------------------------------
bool PhyMotionMotor::is_Stop_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Stop command.
	/*----- PROTECTED REGION ID(PhyMotionMotor::StopStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::StopStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotor::is_ResetStatus_allowed()
 *	Description : Execution allowed for ResetStatus attribute
 */
//--------------------------------------------------------
bool PhyMotionMotor::is_ResetStatus_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ResetStatus command.
	/*----- PROTECTED REGION ID(PhyMotionMotor::ResetStatusStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::ResetStatusStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotor::is_SetMechanicalZeroCounter_allowed()
 *	Description : Execution allowed for SetMechanicalZeroCounter attribute
 */
//--------------------------------------------------------
bool PhyMotionMotor::is_SetMechanicalZeroCounter_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SetMechanicalZeroCounter command.
	/*----- PROTECTED REGION ID(PhyMotionMotor::SetMechanicalZeroCounterStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::SetMechanicalZeroCounterStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotor::is_goTo_allowed()
 *	Description : Execution allowed for goTo attribute
 */
//--------------------------------------------------------
bool PhyMotionMotor::is_goTo_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for goTo command.
	/*----- PROTECTED REGION ID(PhyMotionMotor::goToStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::goToStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(PhyMotionMotor::PhyMotionMotorStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::PhyMotionMotorStateAllowed.AdditionalMethods

}	//	End of namespace
