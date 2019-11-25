/*----- PROTECTED REGION ID(PhyMotionDIOM.h) ENABLED START -----*/
//=============================================================================
//
// file :        PhyMotionDIOM.h
//
// description : Include file for the PhyMotionDIOM class
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


#ifndef PhyMotionDIOM_H
#define PhyMotionDIOM_H

#include <tango.h>
#include <PhyMotionControlCMD.h>


/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM.h

/**
 *  PhyMotionDIOM class description:
 *    
 */

namespace PhyMotionDIOM_ns
{
/*----- PROTECTED REGION ID(PhyMotionDIOM::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::Additional Class Declarations

class PhyMotionDIOM : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(PhyMotionDIOM::Data Members) ENABLED START -----*/

    PhyMotionControlCMD *phy_control;

/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::Data Members

//	Device property data members
public:
	//	control_device:	Just path to the device of PhyMotionControl
	string	control_device;
	//	module:	The moduel number
	Tango::DevUShort	module;
	//	address:	just address 0-9, and A-F
	string	address;

//	Attribute data members
public:
	Tango::DevUShort	*attr_inputs_read;
	Tango::DevUShort	*attr_outputs_read;
	Tango::DevBoolean	*attr_i0_read;
	Tango::DevBoolean	*attr_i1_read;
	Tango::DevBoolean	*attr_i2_read;
	Tango::DevBoolean	*attr_i3_read;
	Tango::DevBoolean	*attr_i4_read;
	Tango::DevBoolean	*attr_i5_read;
	Tango::DevBoolean	*attr_i6_read;
	Tango::DevBoolean	*attr_i7_read;
	Tango::DevBoolean	*attr_o0_read;
	Tango::DevBoolean	*attr_o1_read;
	Tango::DevBoolean	*attr_o2_read;
	Tango::DevBoolean	*attr_o3_read;
	Tango::DevBoolean	*attr_o4_read;
	Tango::DevBoolean	*attr_o5_read;
	Tango::DevBoolean	*attr_o6_read;
	Tango::DevBoolean	*attr_o7_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	PhyMotionDIOM(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	PhyMotionDIOM(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	PhyMotionDIOM(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~PhyMotionDIOM() {delete_device();};


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
	 *	Method      : PhyMotionDIOM::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);
	//--------------------------------------------------------
	/*
	 *	Method      : PhyMotionDIOM::write_attr_hardware()
	 *	Description : Hardware writing for attributes.
	 */
	//--------------------------------------------------------
	virtual void write_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute inputs related methods
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
	virtual void read_inputs(Tango::Attribute &attr);
	virtual bool is_inputs_allowed(Tango::AttReqType type);
/**
 *	Attribute outputs related methods
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
	virtual void read_outputs(Tango::Attribute &attr);
	virtual void write_outputs(Tango::WAttribute &attr);
	virtual bool is_outputs_allowed(Tango::AttReqType type);
/**
 *	Attribute i0 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_i0(Tango::Attribute &attr);
	virtual bool is_i0_allowed(Tango::AttReqType type);
/**
 *	Attribute i1 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_i1(Tango::Attribute &attr);
	virtual bool is_i1_allowed(Tango::AttReqType type);
/**
 *	Attribute i2 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_i2(Tango::Attribute &attr);
	virtual bool is_i2_allowed(Tango::AttReqType type);
/**
 *	Attribute i3 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_i3(Tango::Attribute &attr);
	virtual bool is_i3_allowed(Tango::AttReqType type);
/**
 *	Attribute i4 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_i4(Tango::Attribute &attr);
	virtual bool is_i4_allowed(Tango::AttReqType type);
/**
 *	Attribute i5 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_i5(Tango::Attribute &attr);
	virtual bool is_i5_allowed(Tango::AttReqType type);
/**
 *	Attribute i6 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_i6(Tango::Attribute &attr);
	virtual bool is_i6_allowed(Tango::AttReqType type);
/**
 *	Attribute i7 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_i7(Tango::Attribute &attr);
	virtual bool is_i7_allowed(Tango::AttReqType type);
/**
 *	Attribute o0 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_o0(Tango::Attribute &attr);
	virtual void write_o0(Tango::WAttribute &attr);
	virtual bool is_o0_allowed(Tango::AttReqType type);
/**
 *	Attribute o1 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_o1(Tango::Attribute &attr);
	virtual void write_o1(Tango::WAttribute &attr);
	virtual bool is_o1_allowed(Tango::AttReqType type);
/**
 *	Attribute o2 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_o2(Tango::Attribute &attr);
	virtual void write_o2(Tango::WAttribute &attr);
	virtual bool is_o2_allowed(Tango::AttReqType type);
/**
 *	Attribute o3 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_o3(Tango::Attribute &attr);
	virtual void write_o3(Tango::WAttribute &attr);
	virtual bool is_o3_allowed(Tango::AttReqType type);
/**
 *	Attribute o4 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_o4(Tango::Attribute &attr);
	virtual void write_o4(Tango::WAttribute &attr);
	virtual bool is_o4_allowed(Tango::AttReqType type);
/**
 *	Attribute o5 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_o5(Tango::Attribute &attr);
	virtual void write_o5(Tango::WAttribute &attr);
	virtual bool is_o5_allowed(Tango::AttReqType type);
/**
 *	Attribute o6 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_o6(Tango::Attribute &attr);
	virtual void write_o6(Tango::WAttribute &attr);
	virtual bool is_o6_allowed(Tango::AttReqType type);
/**
 *	Attribute o7 related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_o7(Tango::Attribute &attr);
	virtual void write_o7(Tango::WAttribute &attr);
	virtual bool is_o7_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : PhyMotionDIOM::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();




//	Command related methods
public:


	//--------------------------------------------------------
	/**
	 *	Method      : PhyMotionDIOM::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(PhyMotionDIOM::Additional Method prototypes) ENABLED START -----*/

    void setBitDIOM(int num_bit,bool value);

/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::Additional Method prototypes
};

/*----- PROTECTED REGION ID(PhyMotionDIOM::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::Additional Classes Definitions

}	//	End of namespace

#endif   //	PhyMotionDIOM_H
