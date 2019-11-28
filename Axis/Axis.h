/*----- PROTECTED REGION ID(Axis.h) ENABLED START -----*/
//=============================================================================
//
// file :        Axis.h
//
// description : Include file for the Axis class
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


#ifndef Axis_H
#define Axis_H

#include <tango.h>

#include "PhyMotionMotorDevice.h"


/*----- PROTECTED REGION END -----*/	//	Axis.h

/**
 *  Axis class description:
 *    
 */

namespace Axis_ns
{
/*----- PROTECTED REGION ID(Axis::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	Axis::Additional Class Declarations

class Axis : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(Axis::Data Members) ENABLED START -----*/

private:
    PhyMotionMotorDevice *phy_motion_motor_device = nullptr;

/*----- PROTECTED REGION END -----*/	//	Axis::Data Members

//	Device property data members
public:
	//	path_to_device:	Set path to PhyMotionMotor class device
	string	path_to_device;
	//	encoder:	Without encoder = false
	//  With encoder = true
	Tango::DevBoolean	encoder;

//	Attribute data members
public:
	Tango::DevDouble	*attr_position_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	Axis(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	Axis(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	Axis(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~Axis() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Read the device properties from database
	 */
	void get_device_property();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : Axis::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);
	//--------------------------------------------------------
	/*
	 *	Method      : Axis::write_attr_hardware()
	 *	Description : Hardware writing for attributes.
	 */
	//--------------------------------------------------------
	virtual void write_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute position related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_position(Tango::Attribute &attr);
	virtual void write_position(Tango::WAttribute &attr);
	virtual bool is_position_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : Axis::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();




//	Command related methods
public:


	//--------------------------------------------------------
	/**
	 *	Method      : Axis::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(Axis::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes

/*----- PROTECTED REGION END -----*/	//	Axis::Additional Method prototypes
};

/*----- PROTECTED REGION ID(Axis::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	Axis::Additional Classes Definitions

}	//	End of namespace

#endif   //	Axis_H
