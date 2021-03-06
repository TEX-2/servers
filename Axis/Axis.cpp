/*----- PROTECTED REGION ID(Axis.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        Axis.cpp
//
// description : C++ source for the Axis class and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               Axis are implemented in this file.
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
#include <AxisClass.h>

/*----- PROTECTED REGION END -----*/	//	Axis.cpp

/**
 *  Axis class description:
 *    
 */

//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name   |  Method name
//================================================================
//  State          |  Inherited (no method)
//  Status         |  Inherited (no method)
//  Stop           |  stop
//  GetProperties  |  get_properties
//  On             |  on
//  Off            |  off
//  SetProperties  |  set_properties
//  Reset          |  reset
//  MoveCont       |  move_cont
//  Reference      |  reference
//  Ajust          |  ajust
//================================================================

//================================================================
//  Attributes managed are:
//================================================================
//  position        |  Tango::DevDouble	Scalar
//  limit_switch_p  |  Tango::DevBoolean	Scalar
//  limit_switch_c  |  Tango::DevBoolean	Scalar
//  limit_switch_m  |  Tango::DevBoolean	Scalar
//  decel           |  Tango::DevDouble	Scalar
//  accel           |  Tango::DevDouble	Scalar
//  refpos          |  Tango::DevDouble	Scalar
//  speed           |  Tango::DevDouble	Scalar
//  target          |  Tango::DevDouble	Scalar
//  ramp            |  Tango::DevDouble	Scalar
//  rawValue        |  Tango::DevDouble	Scalar
//  value           |  Tango::DevDouble	Scalar
//  version         |  Tango::DevString	Scalar
//================================================================

namespace Axis_ns
{
/*----- PROTECTED REGION ID(Axis::namespace_starting) ENABLED START -----*/

//	static initializations

/*----- PROTECTED REGION END -----*/	//	Axis::namespace_starting

//--------------------------------------------------------
/**
 *	Method      : Axis::Axis()
 *	Description : Constructors for a Tango device
 *                implementing the classAxis
 */
//--------------------------------------------------------
Axis::Axis(Tango::DeviceClass *cl, string &s)
 : TANGO_BASE_CLASS(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(Axis::constructor_1) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Axis::constructor_1
}
//--------------------------------------------------------
Axis::Axis(Tango::DeviceClass *cl, const char *s)
 : TANGO_BASE_CLASS(cl, s)
{
	/*----- PROTECTED REGION ID(Axis::constructor_2) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Axis::constructor_2
}
//--------------------------------------------------------
Axis::Axis(Tango::DeviceClass *cl, const char *s, const char *d)
 : TANGO_BASE_CLASS(cl, s, d)
{
	/*----- PROTECTED REGION ID(Axis::constructor_3) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	Axis::constructor_3
}

//--------------------------------------------------------
/**
 *	Method      : Axis::delete_device()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void Axis::delete_device()
{
	DEBUG_STREAM << "Axis::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::delete_device) ENABLED START -----*/
	
	//	Delete device allocated objects
	
	/*----- PROTECTED REGION END -----*/	//	Axis::delete_device
	delete[] attr_position_read;
	delete[] attr_limit_switch_p_read;
	delete[] attr_limit_switch_c_read;
	delete[] attr_limit_switch_m_read;
	delete[] attr_decel_read;
	delete[] attr_accel_read;
	delete[] attr_refpos_read;
	delete[] attr_speed_read;
	delete[] attr_target_read;
	delete[] attr_ramp_read;
	delete[] attr_rawValue_read;
	delete[] attr_value_read;
	delete[] attr_version_read;
}

//--------------------------------------------------------
/**
 *	Method      : Axis::init_device()
 *	Description : will be called at device initialization.
 */
//--------------------------------------------------------
void Axis::init_device()
{
	DEBUG_STREAM << "Axis::init_device() create device " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::init_device_before) ENABLED START -----*/
	
	//	Initialization before get_device_property() call
	
	/*----- PROTECTED REGION END -----*/	//	Axis::init_device_before
	

	//	Get the device properties from database
	get_device_property();
	
	attr_position_read = new Tango::DevDouble[1];
	attr_limit_switch_p_read = new Tango::DevBoolean[1];
	attr_limit_switch_c_read = new Tango::DevBoolean[1];
	attr_limit_switch_m_read = new Tango::DevBoolean[1];
	attr_decel_read = new Tango::DevDouble[1];
	attr_accel_read = new Tango::DevDouble[1];
	attr_refpos_read = new Tango::DevDouble[1];
	attr_speed_read = new Tango::DevDouble[1];
	attr_target_read = new Tango::DevDouble[1];
	attr_ramp_read = new Tango::DevDouble[1];
	attr_rawValue_read = new Tango::DevDouble[1];
	attr_value_read = new Tango::DevDouble[1];
	attr_version_read = new Tango::DevString[1];
	/*----- PROTECTED REGION ID(Axis::init_device) ENABLED START -----*/

	if(phy_motion_motor_device!=nullptr) delete phy_motion_motor_device;
	phy_motion_motor_device = new PhyMotionMotorDevice(path_to_device);

	device_state = phy_motion_motor_device->getDeviceProxy()->state();
	if(phy_motion_motor_device->getDeviceProxy()->state()==Tango::STANDBY) device_state=Tango::ON;

	old_state = device_state;


	/*----- PROTECTED REGION END -----*/	//	Axis::init_device
}

//--------------------------------------------------------
/**
 *	Method      : Axis::get_device_property()
 *	Description : Read database to initialize property data members.
 */
//--------------------------------------------------------
void Axis::get_device_property()
{
	/*----- PROTECTED REGION ID(Axis::get_device_property_before) ENABLED START -----*/
	
	//	Initialize property data members
	
	/*----- PROTECTED REGION END -----*/	//	Axis::get_device_property_before


	//	Read device properties from database.
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("path_to_device"));
	dev_prop.push_back(Tango::DbDatum("encoder"));
	dev_prop.push_back(Tango::DbDatum("stop_activation"));
	dev_prop.push_back(Tango::DbDatum("refpos"));
	dev_prop.push_back(Tango::DbDatum("absmin"));
	dev_prop.push_back(Tango::DbDatum("absmax"));
	dev_prop.push_back(Tango::DbDatum("unit"));
	dev_prop.push_back(Tango::DbDatum("inFormula"));
	dev_prop.push_back(Tango::DbDatum("maxspeed"));
	dev_prop.push_back(Tango::DbDatum("minspeed"));
	dev_prop.push_back(Tango::DbDatum("offset"));
	dev_prop.push_back(Tango::DbDatum("outFormula"));
	dev_prop.push_back(Tango::DbDatum("rounding"));

	//	is there at least one property to be read ?
	if (dev_prop.size()>0)
	{
		//	Call database and extract values
		if (Tango::Util::instance()->_UseDb==true)
			get_db_device()->get_property(dev_prop);
	
		//	get instance on AxisClass to get class property
		Tango::DbDatum	def_prop, cl_prop;
		AxisClass	*ds_class =
			(static_cast<AxisClass *>(get_device_class()));
		int	i = -1;

		//	Try to initialize path_to_device from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  path_to_device;
		else {
			//	Try to initialize path_to_device from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  path_to_device;
		}
		//	And try to extract path_to_device value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  path_to_device;

		//	Try to initialize encoder from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  encoder;
		else {
			//	Try to initialize encoder from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  encoder;
		}
		//	And try to extract encoder value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  encoder;

		//	Try to initialize stop_activation from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  stop_activation;
		else {
			//	Try to initialize stop_activation from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  stop_activation;
		}
		//	And try to extract stop_activation value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  stop_activation;

		//	Try to initialize refpos from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  refpos;
		else {
			//	Try to initialize refpos from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  refpos;
		}
		//	And try to extract refpos value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  refpos;

		//	Try to initialize absmin from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  absmin;
		else {
			//	Try to initialize absmin from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  absmin;
		}
		//	And try to extract absmin value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  absmin;

		//	Try to initialize absmax from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  absmax;
		else {
			//	Try to initialize absmax from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  absmax;
		}
		//	And try to extract absmax value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  absmax;

		//	Try to initialize unit from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  unit;
		else {
			//	Try to initialize unit from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  unit;
		}
		//	And try to extract unit value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  unit;

		//	Try to initialize inFormula from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  inFormula;
		else {
			//	Try to initialize inFormula from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  inFormula;
		}
		//	And try to extract inFormula value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  inFormula;

		//	Try to initialize maxspeed from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  maxspeed;
		else {
			//	Try to initialize maxspeed from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  maxspeed;
		}
		//	And try to extract maxspeed value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  maxspeed;

		//	Try to initialize minspeed from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  minspeed;
		else {
			//	Try to initialize minspeed from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  minspeed;
		}
		//	And try to extract minspeed value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  minspeed;

		//	Try to initialize offset from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  offset;
		else {
			//	Try to initialize offset from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  offset;
		}
		//	And try to extract offset value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  offset;

		//	Try to initialize outFormula from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  outFormula;
		else {
			//	Try to initialize outFormula from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  outFormula;
		}
		//	And try to extract outFormula value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  outFormula;

		//	Try to initialize rounding from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  rounding;
		else {
			//	Try to initialize rounding from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  rounding;
		}
		//	And try to extract rounding value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  rounding;

	}

	/*----- PROTECTED REGION ID(Axis::get_device_property_after) ENABLED START -----*/
	
	//	Check device property data members init
	
	/*----- PROTECTED REGION END -----*/	//	Axis::get_device_property_after
}

//--------------------------------------------------------
/**
 *	Method      : Axis::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void Axis::always_executed_hook()
{
	DEBUG_STREAM << "Axis::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::always_executed_hook) ENABLED START -----*/
	
	getStateMotor();
	
	/*----- PROTECTED REGION END -----*/	//	Axis::always_executed_hook
}

//--------------------------------------------------------
/**
 *	Method      : Axis::read_attr_hardware()
 *	Description : Hardware acquisition for attributes
 */
//--------------------------------------------------------
void Axis::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "Axis::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_attr_hardware
}
//--------------------------------------------------------
/**
 *	Method      : Axis::write_attr_hardware()
 *	Description : Hardware writing for attributes
 */
//--------------------------------------------------------
void Axis::write_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "Axis::write_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::write_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	Axis::write_attr_hardware
}

//--------------------------------------------------------
/**
 *	Read attribute position related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_position(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_position(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_position) ENABLED START -----*/

	getStateMotor();
	
	if(encoder){
		*attr_position_read = phy_motion_motor_device->readAbsolutePosition();
	}else{
		*attr_position_read = phy_motion_motor_device->readPosition();
	}

	attr.set_value(attr_position_read);

	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_position
}
//--------------------------------------------------------
/**
 *	Write attribute position related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::write_position(Tango::WAttribute &attr)
{

	DEBUG_STREAM << "Axis::write_position(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevDouble	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Axis::write_position) ENABLED START -----*/

	Tango::DevState curr_state_local = phy_motion_motor_device->getDeviceProxy()->state();
	phy_motion_motor_device->getDeviceProxy()->command_inout("ResetStatus");
	phy_motion_motor_device->activation(true);
	phy_motion_motor_device->writePosition(w_val);

	waitForUpdateState(curr_state_local);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::write_position
}
//--------------------------------------------------------
/**
 *	Read attribute limit_switch_p related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_limit_switch_p(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_limit_switch_p(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_limit_switch_p) ENABLED START -----*/

	if(phy_motion_motor_device->readAxisState() & 0x10){
	    *attr_limit_switch_p_read = true;
	}else{
	    *attr_limit_switch_p_read = false;
	}

	attr.set_value(attr_limit_switch_p_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_limit_switch_p
}
//--------------------------------------------------------
/**
 *	Read attribute limit_switch_c related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_limit_switch_c(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_limit_switch_c(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_limit_switch_c) ENABLED START -----*/

    if(phy_motion_motor_device->readAxisState() & 0x40){
        *attr_limit_switch_c_read = true;
    }else{
        *attr_limit_switch_c_read = false;
    }

	attr.set_value(attr_limit_switch_c_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_limit_switch_c
}
//--------------------------------------------------------
/**
 *	Read attribute limit_switch_m related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_limit_switch_m(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_limit_switch_m(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_limit_switch_m) ENABLED START -----*/
    if(phy_motion_motor_device->readAxisState() & 0x20){
        *attr_limit_switch_m_read = true;
    }else{
        *attr_limit_switch_m_read = false;
    }
	attr.set_value(attr_limit_switch_m_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_limit_switch_m
}
//--------------------------------------------------------
/**
 *	Read attribute decel related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_decel(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_decel(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_decel) ENABLED START -----*/
	*attr_decel_read = phy_motion_motor_device->readRamp();
	attr.set_value(attr_decel_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_decel
}
//--------------------------------------------------------
/**
 *	Write attribute decel related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::write_decel(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Axis::write_decel(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevDouble	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Axis::write_decel) ENABLED START -----*/

	phy_motion_motor_device->setDecel(w_val);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::write_decel
}
//--------------------------------------------------------
/**
 *	Read attribute accel related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_accel(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_accel(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_accel) ENABLED START -----*/
    *attr_accel_read = phy_motion_motor_device->readRamp();
	attr.set_value(attr_accel_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_accel
}
//--------------------------------------------------------
/**
 *	Write attribute accel related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::write_accel(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Axis::write_accel(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevDouble	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Axis::write_accel) ENABLED START -----*/

	phy_motion_motor_device->setAccel(w_val);

	
	/*----- PROTECTED REGION END -----*/	//	Axis::write_accel
}
//--------------------------------------------------------
/**
 *	Read attribute refpos related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_refpos(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_refpos(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_refpos) ENABLED START -----*/
	*attr_refpos_read = refpos;
	attr.set_value(attr_refpos_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_refpos
}
//--------------------------------------------------------
/**
 *	Write attribute refpos related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::write_refpos(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Axis::write_refpos(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevDouble	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Axis::write_refpos) ENABLED START -----*/

	refpos = w_val;

	/*----- PROTECTED REGION END -----*/	//	Axis::write_refpos
}
//--------------------------------------------------------
/**
 *	Read attribute speed related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_speed(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_speed(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_speed) ENABLED START -----*/

	*attr_speed_read = phy_motion_motor_device->readSpeed();
	attr.set_value(attr_speed_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_speed
}
//--------------------------------------------------------
/**
 *	Write attribute speed related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::write_speed(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Axis::write_speed(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevDouble	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Axis::write_speed) ENABLED START -----*/

	phy_motion_motor_device->setSpeed(w_val);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::write_speed
}
//--------------------------------------------------------
/**
 *	Read attribute target related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_target(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_target(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_target) ENABLED START -----*/
	//	Set the attribute value

	*attr_target_read = *attr_position_read;

	attr.set_value(attr_target_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_target
}
//--------------------------------------------------------
/**
 *	Write attribute target related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::write_target(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Axis::write_target(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevDouble	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Axis::write_target) ENABLED START -----*/

	Tango::DevState curr_state_local = phy_motion_motor_device->getDeviceProxy()->state();
	phy_motion_motor_device->getDeviceProxy()->command_inout("ResetStatus");
	phy_motion_motor_device->activation(true);
	phy_motion_motor_device->writePosition(w_val);

	waitForUpdateState(curr_state_local);
		
	/*----- PROTECTED REGION END -----*/	//	Axis::write_target
}
//--------------------------------------------------------
/**
 *	Read attribute ramp related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_ramp(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_ramp(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_ramp) ENABLED START -----*/
	*attr_ramp_read = phy_motion_motor_device->readRamp();
	attr.set_value(attr_ramp_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_ramp
}
//--------------------------------------------------------
/**
 *	Write attribute ramp related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::write_ramp(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Axis::write_ramp(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevDouble	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Axis::write_ramp) ENABLED START -----*/

	phy_motion_motor_device->setAccel(w_val);


	/*----- PROTECTED REGION END -----*/	//	Axis::write_ramp
}
//--------------------------------------------------------
/**
 *	Read attribute rawValue related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_rawValue(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_rawValue(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_rawValue) ENABLED START -----*/
    *attr_rawValue_read = *attr_position_read;
	attr.set_value(attr_rawValue_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_rawValue
}
//--------------------------------------------------------
/**
 *	Write attribute rawValue related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::write_rawValue(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Axis::write_rawValue(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevDouble	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Axis::write_rawValue) ENABLED START -----*/

    phy_motion_motor_device->getDeviceProxy()->command_inout("ResetStatus");
    phy_motion_motor_device->activation(true);
    phy_motion_motor_device->writePosition(w_val);

	/*----- PROTECTED REGION END -----*/	//	Axis::write_rawValue
}
//--------------------------------------------------------
/**
 *	Read attribute value related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_value(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_value(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_value) ENABLED START -----*/
	*attr_value_read = *attr_position_read;
	attr.set_value(attr_value_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_value
}
//--------------------------------------------------------
/**
 *	Write attribute value related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::write_value(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Axis::write_value(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevDouble	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(Axis::write_value) ENABLED START -----*/

	Tango::DevState curr_state_local = phy_motion_motor_device->getDeviceProxy()->state();
	phy_motion_motor_device->getDeviceProxy()->command_inout("ResetStatus");
	phy_motion_motor_device->activation(true);
	phy_motion_motor_device->writePosition(w_val);

	waitForUpdateState(curr_state_local);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::write_value
}
//--------------------------------------------------------
/**
 *	Read attribute version related method
 *	Description: 
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void Axis::read_version(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Axis::read_version(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Axis::read_version) ENABLED START -----*/
	*attr_version_read = "module version 1";
	attr.set_value(attr_version_read);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::read_version
}

//--------------------------------------------------------
/**
 *	Method      : Axis::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *                for specified device.
 */
//--------------------------------------------------------
void Axis::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(Axis::add_dynamic_attributes) ENABLED START -----*/
	

	
	/*----- PROTECTED REGION END -----*/	//	Axis::add_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Command Stop related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void Axis::stop()
{
	DEBUG_STREAM << "Axis::Stop()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::stop) ENABLED START -----*/

	phy_motion_motor_device->getDeviceProxy()->command_inout("Stop");
	
	/*----- PROTECTED REGION END -----*/	//	Axis::stop
}
//--------------------------------------------------------
/**
 *	Command GetProperties related method
 *	Description: 
 *
 *	@returns 
 */
//--------------------------------------------------------
Tango::DevVarStringArray *Axis::get_properties()
{
	Tango::DevVarStringArray *argout;
	DEBUG_STREAM << "Axis::GetProperties()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::get_properties) ENABLED START -----*/

	const int num_param = 14;

    global_property_array = new Tango::DevVarStringArray(num_param);
    global_property_array->length(num_param);
    (*global_property_array)[0] = "refpos";
    (*global_property_array)[1] = (std::to_string(refpos)).c_str();
    (*global_property_array)[2] = "absmin";
    (*global_property_array)[3] = (std::to_string(absmin)).c_str();
    (*global_property_array)[4] = "absmax";
    (*global_property_array)[5] = (std::to_string(absmax)).c_str();
    (*global_property_array)[6] = "unit";
    (*global_property_array)[7] = unit.c_str();
    (*global_property_array)[8] = "rounding";
    (*global_property_array)[9] = (std::to_string(rounding)).c_str();
    (*global_property_array)[10] = "inFormula";
    (*global_property_array)[11] = inFormula.c_str();
    (*global_property_array)[12] = "outFormula";
    (*global_property_array)[13] = outFormula.c_str();


    argout = global_property_array;
	
	/*----- PROTECTED REGION END -----*/	//	Axis::get_properties
	return argout;
}
//--------------------------------------------------------
/**
 *	Command On related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void Axis::on()
{
	DEBUG_STREAM << "Axis::On()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::on) ENABLED START -----*/

    phy_motion_motor_device->activation(true);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::on
}
//--------------------------------------------------------
/**
 *	Command Off related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void Axis::off()
{
	DEBUG_STREAM << "Axis::Off()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::off) ENABLED START -----*/

	phy_motion_motor_device->activation(false);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::off
}
//--------------------------------------------------------
/**
 *	Command SetProperties related method
 *	Description: 
 *
 *	@param argin 
 *	@returns 
 */
//--------------------------------------------------------
Tango::DevBoolean Axis::set_properties(const Tango::DevVarStringArray *argin)
{
	Tango::DevBoolean argout;
	DEBUG_STREAM << "Axis::SetProperties()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::set_properties) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	Axis::set_properties
	return argout;
}
//--------------------------------------------------------
/**
 *	Command Reset related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void Axis::reset()
{
	DEBUG_STREAM << "Axis::Reset()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::reset) ENABLED START -----*/
	
	phy_motion_motor_device->getDeviceProxy()->command_inout("ResetStatus");
	
	/*----- PROTECTED REGION END -----*/	//	Axis::reset
}
//--------------------------------------------------------
/**
 *	Command MoveCont related method
 *	Description: 
 *
 *	@param argin 
 */
//--------------------------------------------------------
void Axis::move_cont(Tango::DevDouble argin)
{
	DEBUG_STREAM << "Axis::MoveCont()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::move_cont) ENABLED START -----*/

    phy_motion_motor_device->activation(true);
	phy_motion_motor_device->setSpeed(argin);
	phy_motion_motor_device->writePosition(999999);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::move_cont
}
//--------------------------------------------------------
/**
 *	Command Reference related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void Axis::reference()
{
	DEBUG_STREAM << "Axis::Reference()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::reference) ENABLED START -----*/

    phy_motion_motor_device->activation(true);
    phy_motion_motor_device->writePosition(refpos);
	
	/*----- PROTECTED REGION END -----*/	//	Axis::reference
}
//--------------------------------------------------------
/**
 *	Command Ajust related method
 *	Description: 
 *
 *	@param argin 
 */
//--------------------------------------------------------
void Axis::ajust(Tango::DevDouble argin)
{
	DEBUG_STREAM << "Axis::Ajust()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Axis::ajust) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	Axis::ajust
}
//--------------------------------------------------------
/**
 *	Method      : Axis::add_dynamic_commands()
 *	Description : Create the dynamic commands if any
 *                for specified device.
 */
//--------------------------------------------------------
void Axis::add_dynamic_commands()
{
	/*----- PROTECTED REGION ID(Axis::add_dynamic_commands) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic commands if any
	
	/*----- PROTECTED REGION END -----*/	//	Axis::add_dynamic_commands
}

/*----- PROTECTED REGION ID(Axis::namespace_ending) ENABLED START -----*/

void Axis::getStateMotor() {
    device_state = phy_motion_motor_device->getDeviceProxy()->state();
    if(phy_motion_motor_device->getDeviceProxy()->state()==Tango::STANDBY) device_state=Tango::ON;
    device_status = phy_motion_motor_device->getDeviceProxy()->status();
    
    if(stop_activation){
	    if(old_state!=device_state && device_state!=Tango::MOVING){
		    phy_motion_motor_device->activation(false);
		    phy_motion_motor_device->getDeviceProxy()->command_inout("Stop");
	    }
    }
    old_state = device_state;
}



void Axis::waitForUpdateState(Tango::DevState old_state_local){
	Tango::DevState new_state_local {old_state_local};

	int count = 0;

	//std::cout << "old state: " << old_state_local << std::endl;
	phy_motion_motor_device->readAxisState();
	while(old_state_local == new_state_local){
		if(count > 7)	break;
		std::this_thread::sleep_for(std::chrono::milliseconds(250));
		new_state_local = phy_motion_motor_device->getDeviceProxy()->state();
		//if(new_state_local==Tango::MOVING) break;  //?
		//std::cout << "new state: " << new_state_local << std::endl;
		count ++;
	}
	
	return;
}

/*----- PROTECTED REGION END -----*/	//	Axis::namespace_ending
} //	namespace
