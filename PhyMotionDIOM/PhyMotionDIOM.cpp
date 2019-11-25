/*----- PROTECTED REGION ID(PhyMotionDIOM.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        PhyMotionDIOM.cpp
//
// description : C++ source for the PhyMotionDIOM class and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               PhyMotionDIOM are implemented in this file.
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
// Kirill Pshenichnyi (c) 2019 PNPI
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#include <PhyMotionDIOM.h>
#include <PhyMotionDIOMClass.h>

/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM.cpp

/**
 *  PhyMotionDIOM class description:
 *    
 */

//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name  |  Method name
//================================================================
//  State         |  Inherited (no method)
//  Status        |  Inherited (no method)
//================================================================

//================================================================
//  Attributes managed is:
//================================================================
//================================================================

namespace PhyMotionDIOM_ns
{
/*----- PROTECTED REGION ID(PhyMotionDIOM::namespace_starting) ENABLED START -----*/

//	static initializations

/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::namespace_starting

//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOM::PhyMotionDIOM()
 *	Description : Constructors for a Tango device
 *                implementing the classPhyMotionDIOM
 */
//--------------------------------------------------------
PhyMotionDIOM::PhyMotionDIOM(Tango::DeviceClass *cl, string &s)
 : TANGO_BASE_CLASS(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(PhyMotionDIOM::constructor_1) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::constructor_1
}
//--------------------------------------------------------
PhyMotionDIOM::PhyMotionDIOM(Tango::DeviceClass *cl, const char *s)
 : TANGO_BASE_CLASS(cl, s)
{
	/*----- PROTECTED REGION ID(PhyMotionDIOM::constructor_2) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::constructor_2
}
//--------------------------------------------------------
PhyMotionDIOM::PhyMotionDIOM(Tango::DeviceClass *cl, const char *s, const char *d)
 : TANGO_BASE_CLASS(cl, s, d)
{
	/*----- PROTECTED REGION ID(PhyMotionDIOM::constructor_3) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::constructor_3
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOM::delete_device()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void PhyMotionDIOM::delete_device()
{
	DEBUG_STREAM << "PhyMotionDIOM::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::delete_device) ENABLED START -----*/
	
	//	Delete device allocated objects
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::delete_device
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOM::init_device()
 *	Description : will be called at device initialization.
 */
//--------------------------------------------------------
void PhyMotionDIOM::init_device()
{
	DEBUG_STREAM << "PhyMotionDIOM::init_device() create device " << device_name << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::init_device_before) ENABLED START -----*/
	
	//	Initialization before get_device_property() call
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::init_device_before
	
	//	No device property to be read from database
	
	/*----- PROTECTED REGION ID(PhyMotionDIOM::init_device) ENABLED START -----*/
	
	//	Initialize device
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::init_device
}


//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOM::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void PhyMotionDIOM::always_executed_hook()
{
	DEBUG_STREAM << "PhyMotionDIOM::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::always_executed_hook) ENABLED START -----*/
	
	//	code always executed before all requests
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::always_executed_hook
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOM::read_attr_hardware()
 *	Description : Hardware acquisition for attributes
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "PhyMotionDIOM::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_attr_hardware
}


//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOM::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *                for specified device.
 */
//--------------------------------------------------------
void PhyMotionDIOM::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(PhyMotionDIOM::add_dynamic_attributes) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic attributes if any
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::add_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOM::add_dynamic_commands()
 *	Description : Create the dynamic commands if any
 *                for specified device.
 */
//--------------------------------------------------------
void PhyMotionDIOM::add_dynamic_commands()
{
	/*----- PROTECTED REGION ID(PhyMotionDIOM::add_dynamic_commands) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic commands if any
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::add_dynamic_commands
}

/*----- PROTECTED REGION ID(PhyMotionDIOM::namespace_ending) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::namespace_ending
} //	namespace