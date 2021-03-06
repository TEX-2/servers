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
//  Attributes managed are:
//================================================================
//  inputs   |  Tango::DevUShort	Scalar
//  outputs  |  Tango::DevUShort	Scalar
//  i0       |  Tango::DevBoolean	Scalar
//  i1       |  Tango::DevBoolean	Scalar
//  i2       |  Tango::DevBoolean	Scalar
//  i3       |  Tango::DevBoolean	Scalar
//  i4       |  Tango::DevBoolean	Scalar
//  i5       |  Tango::DevBoolean	Scalar
//  i6       |  Tango::DevBoolean	Scalar
//  i7       |  Tango::DevBoolean	Scalar
//  o0       |  Tango::DevBoolean	Scalar
//  o1       |  Tango::DevBoolean	Scalar
//  o2       |  Tango::DevBoolean	Scalar
//  o3       |  Tango::DevBoolean	Scalar
//  o4       |  Tango::DevBoolean	Scalar
//  o5       |  Tango::DevBoolean	Scalar
//  o6       |  Tango::DevBoolean	Scalar
//  o7       |  Tango::DevBoolean	Scalar
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
	delete[] attr_inputs_read;
	delete[] attr_outputs_read;
	delete[] attr_i0_read;
	delete[] attr_i1_read;
	delete[] attr_i2_read;
	delete[] attr_i3_read;
	delete[] attr_i4_read;
	delete[] attr_i5_read;
	delete[] attr_i6_read;
	delete[] attr_i7_read;
	delete[] attr_o0_read;
	delete[] attr_o1_read;
	delete[] attr_o2_read;
	delete[] attr_o3_read;
	delete[] attr_o4_read;
	delete[] attr_o5_read;
	delete[] attr_o6_read;
	delete[] attr_o7_read;
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
	

	//	Get the device properties from database
	get_device_property();
	
	attr_inputs_read = new Tango::DevUShort[1];
	attr_outputs_read = new Tango::DevUShort[1];
	attr_i0_read = new Tango::DevBoolean[1];
	attr_i1_read = new Tango::DevBoolean[1];
	attr_i2_read = new Tango::DevBoolean[1];
	attr_i3_read = new Tango::DevBoolean[1];
	attr_i4_read = new Tango::DevBoolean[1];
	attr_i5_read = new Tango::DevBoolean[1];
	attr_i6_read = new Tango::DevBoolean[1];
	attr_i7_read = new Tango::DevBoolean[1];
	attr_o0_read = new Tango::DevBoolean[1];
	attr_o1_read = new Tango::DevBoolean[1];
	attr_o2_read = new Tango::DevBoolean[1];
	attr_o3_read = new Tango::DevBoolean[1];
	attr_o4_read = new Tango::DevBoolean[1];
	attr_o5_read = new Tango::DevBoolean[1];
	attr_o6_read = new Tango::DevBoolean[1];
	attr_o7_read = new Tango::DevBoolean[1];
	/*----- PROTECTED REGION ID(PhyMotionDIOM::init_device) ENABLED START -----*/

	if(phy_control!=nullptr) delete phy_control;
	phy_control = new PhyMotionControlCMD(control_device);
	device_status = "ping to control device: "+std::to_string(phy_control->pingControl())+" ms";
	device_state = Tango::ON;

	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::init_device
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOM::get_device_property()
 *	Description : Read database to initialize property data members.
 */
//--------------------------------------------------------
void PhyMotionDIOM::get_device_property()
{
	/*----- PROTECTED REGION ID(PhyMotionDIOM::get_device_property_before) ENABLED START -----*/
	
	//	Initialize property data members
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::get_device_property_before


	//	Read device properties from database.
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("control_device"));
	dev_prop.push_back(Tango::DbDatum("module"));
	dev_prop.push_back(Tango::DbDatum("address"));

	//	is there at least one property to be read ?
	if (dev_prop.size()>0)
	{
		//	Call database and extract values
		if (Tango::Util::instance()->_UseDb==true)
			get_db_device()->get_property(dev_prop);
	
		//	get instance on PhyMotionDIOMClass to get class property
		Tango::DbDatum	def_prop, cl_prop;
		PhyMotionDIOMClass	*ds_class =
			(static_cast<PhyMotionDIOMClass *>(get_device_class()));
		int	i = -1;

		//	Try to initialize control_device from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  control_device;
		else {
			//	Try to initialize control_device from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  control_device;
		}
		//	And try to extract control_device value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  control_device;

		//	Try to initialize module from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  module;
		else {
			//	Try to initialize module from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  module;
		}
		//	And try to extract module value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  module;

		//	Try to initialize address from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  address;
		else {
			//	Try to initialize address from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  address;
		}
		//	And try to extract address value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  address;

	}

	/*----- PROTECTED REGION ID(PhyMotionDIOM::get_device_property_after) ENABLED START -----*/
	
	//	Check device property data members init
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::get_device_property_after
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
 *	Method      : PhyMotionDIOM::write_attr_hardware()
 *	Description : Hardware writing for attributes
 */
//--------------------------------------------------------
void PhyMotionDIOM::write_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "PhyMotionDIOM::write_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::write_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::write_attr_hardware
}

//--------------------------------------------------------
/**
 *	Read attribute inputs related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_inputs(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_inputs(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_inputs) ENABLED START -----*/

	std::string reply = phy_control->sendCMD(address+"EG"+std::to_string(module)+"R");
	*attr_inputs_read = std::stoi(reply);

	attr.set_value(attr_inputs_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_inputs
}
//--------------------------------------------------------
/**
 *	Read attribute outputs related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_outputs(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_outputs(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_outputs) ENABLED START -----*/

    std::string reply = phy_control->sendCMD(address+"AG"+std::to_string(module)+"R");
    *attr_outputs_read = std::stoi(reply);

	attr.set_value(attr_outputs_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_outputs
}
//--------------------------------------------------------
/**
 *	Write attribute outputs related method
 *	Description: 
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::write_outputs(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::write_outputs(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevUShort	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(PhyMotionDIOM::write_outputs) ENABLED START -----*/

	phy_control->sendCMD(address+"AG"+std::to_string(module)+"S"+std::to_string(w_val));
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::write_outputs
}
//--------------------------------------------------------
/**
 *	Read attribute i0 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_i0(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_i0(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_i0) ENABLED START -----*/
    *attr_i0_read=false;
    if(*attr_inputs_read & (1<<0)) *attr_i0_read=true;
	attr.set_value(attr_i0_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_i0
}
//--------------------------------------------------------
/**
 *	Read attribute i1 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_i1(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_i1(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_i1) ENABLED START -----*/
    *attr_i1_read=false;
	if(*attr_inputs_read & (1<<1)) *attr_i1_read=true;
	attr.set_value(attr_i1_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_i1
}
//--------------------------------------------------------
/**
 *	Read attribute i2 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_i2(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_i2(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_i2) ENABLED START -----*/
    *attr_i2_read=false;
	if(*attr_inputs_read & (1<<2)) *attr_i2_read=true;
	attr.set_value(attr_i2_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_i2
}
//--------------------------------------------------------
/**
 *	Read attribute i3 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_i3(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_i3(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_i3) ENABLED START -----*/
    *attr_i3_read=false;
	if(*attr_inputs_read & (1<<3)) *attr_i3_read=true;
	attr.set_value(attr_i3_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_i3
}
//--------------------------------------------------------
/**
 *	Read attribute i4 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_i4(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_i4(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_i4) ENABLED START -----*/
    *attr_i4_read=false;
	if(*attr_inputs_read & (1<<4)) *attr_i4_read=true;
	attr.set_value(attr_i4_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_i4
}
//--------------------------------------------------------
/**
 *	Read attribute i5 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_i5(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_i5(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_i5) ENABLED START -----*/
    *attr_i5_read=false;
	if(*attr_inputs_read & (1<<5)) *attr_i5_read=true;
	attr.set_value(attr_i5_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_i5
}
//--------------------------------------------------------
/**
 *	Read attribute i6 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_i6(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_i6(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_i6) ENABLED START -----*/
    *attr_i6_read=false;
	if(*attr_inputs_read & (1<<6)) *attr_i6_read=true;
	attr.set_value(attr_i6_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_i6
}
//--------------------------------------------------------
/**
 *	Read attribute i7 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_i7(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_i7(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_i7) ENABLED START -----*/
    *attr_i7_read=false;
    if(*attr_inputs_read & (1<<7)) *attr_i7_read=true;
	attr.set_value(attr_i7_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_i7
}
//--------------------------------------------------------
/**
 *	Read attribute o0 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_o0(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_o0(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_o0) ENABLED START -----*/
    *attr_o0_read=false;
    if(*attr_outputs_read & (1<<0)) *attr_o0_read=true;
	attr.set_value(attr_o0_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_o0
}
//--------------------------------------------------------
/**
 *	Write attribute o0 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::write_o0(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::write_o0(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(PhyMotionDIOM::write_o0) ENABLED START -----*/

	setBitDIOM(0,w_val);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::write_o0
}
//--------------------------------------------------------
/**
 *	Read attribute o1 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_o1(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_o1(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_o1) ENABLED START -----*/
    *attr_o1_read=false;
    if(*attr_outputs_read & (1<<1)) *attr_o1_read=true;
	attr.set_value(attr_o1_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_o1
}
//--------------------------------------------------------
/**
 *	Write attribute o1 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::write_o1(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::write_o1(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(PhyMotionDIOM::write_o1) ENABLED START -----*/

	setBitDIOM(1,w_val);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::write_o1
}
//--------------------------------------------------------
/**
 *	Read attribute o2 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_o2(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_o2(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_o2) ENABLED START -----*/
    *attr_o2_read=false;
    if(*attr_outputs_read & (1<<2)) *attr_o2_read=true;
	attr.set_value(attr_o2_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_o2
}
//--------------------------------------------------------
/**
 *	Write attribute o2 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::write_o2(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::write_o2(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(PhyMotionDIOM::write_o2) ENABLED START -----*/
	
	setBitDIOM(2,w_val);

	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::write_o2
}
//--------------------------------------------------------
/**
 *	Read attribute o3 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_o3(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_o3(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_o3) ENABLED START -----*/
    *attr_o3_read=false;
    if(*attr_outputs_read & (1<<3)) *attr_o3_read=true;
	attr.set_value(attr_o3_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_o3
}
//--------------------------------------------------------
/**
 *	Write attribute o3 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::write_o3(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::write_o3(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(PhyMotionDIOM::write_o3) ENABLED START -----*/

	setBitDIOM(3,w_val);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::write_o3
}
//--------------------------------------------------------
/**
 *	Read attribute o4 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_o4(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_o4(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_o4) ENABLED START -----*/
    *attr_o4_read=false;
    if(*attr_outputs_read & (1<<4)) *attr_o4_read=true;
	attr.set_value(attr_o4_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_o4
}
//--------------------------------------------------------
/**
 *	Write attribute o4 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::write_o4(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::write_o4(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(PhyMotionDIOM::write_o4) ENABLED START -----*/

	setBitDIOM(4,w_val);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::write_o4
}
//--------------------------------------------------------
/**
 *	Read attribute o5 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_o5(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_o5(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_o5) ENABLED START -----*/
    *attr_o5_read=false;
    if(*attr_outputs_read & (1<<5)) *attr_o5_read=true;
	attr.set_value(attr_o5_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_o5
}
//--------------------------------------------------------
/**
 *	Write attribute o5 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::write_o5(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::write_o5(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(PhyMotionDIOM::write_o5) ENABLED START -----*/

	setBitDIOM(5,w_val);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::write_o5
}
//--------------------------------------------------------
/**
 *	Read attribute o6 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_o6(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_o6(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_o6) ENABLED START -----*/
    *attr_o6_read=false;
    if(*attr_outputs_read & (1<<6)) *attr_o6_read=true;
	attr.set_value(attr_o6_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_o6
}
//--------------------------------------------------------
/**
 *	Write attribute o6 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::write_o6(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::write_o6(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(PhyMotionDIOM::write_o6) ENABLED START -----*/

	setBitDIOM(6,w_val);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::write_o6
}
//--------------------------------------------------------
/**
 *	Read attribute o7 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::read_o7(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::read_o7(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PhyMotionDIOM::read_o7) ENABLED START -----*/
    *attr_o7_read=false;
    if(*attr_outputs_read & (1<<7)) *attr_o7_read=true;
	attr.set_value(attr_o7_read);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::read_o7
}
//--------------------------------------------------------
/**
 *	Write attribute o7 related method
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PhyMotionDIOM::write_o7(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "PhyMotionDIOM::write_o7(Tango::WAttribute &attr) entering... " << endl;
	//	Retrieve write value
	Tango::DevBoolean	w_val;
	attr.get_write_value(w_val);
	/*----- PROTECTED REGION ID(PhyMotionDIOM::write_o7) ENABLED START -----*/

	setBitDIOM(7,w_val);
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::write_o7
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

void PhyMotionDIOM::setBitDIOM(int num_bit, bool value) {
        std::string reply = phy_control->sendCMD(address+"AG"+std::to_string(module)+"R");
        uint8_t current_value = std::stoi(reply);
        if(value){
            current_value |= (1<<num_bit);
        }else{
            current_value &= ~(1<<num_bit);
        }
        phy_control->sendCMD(address+"AG"+std::to_string(module)+"S"+to_string(current_value));
}
// //--------------------------------------------------------
// /**
//  *	Read attribute o7 related method
//  *	Description: 
//  *
//  *	Data type:	Tango::DevBoolean
//  *	Attr type:	Scalar
//  */
// //--------------------------------------------------------
// void PhyMotionDIOM::read_o7(Tango::Attribute &attr)
// {
// 	DEBUG_STREAM << "PhyMotionDIOM::read_o7(Tango::Attribute &attr) entering... " << endl;
//     *attr_o7_read=false;
//     if(*attr_outputs_read & (1<<7)) *attr_o7_read=true;
// 	attr.set_value(attr_o7_read);
// 	
// }

// //--------------------------------------------------------
// /**
//  *	Write attribute o7 related method
//  *	Description: 
//  *
//  *	Data type:	Tango::DevBoolean
//  *	Attr type:	Scalar
//  */
// //--------------------------------------------------------
// void PhyMotionDIOM::write_o7(Tango::WAttribute &attr)
// {
// 	DEBUG_STREAM << "PhyMotionDIOM::write_o7(Tango::WAttribute &attr) entering... " << endl;
// 	//	Retrieve write value
// 	Tango::DevBoolean	w_val;
// 	attr.get_write_value(w_val);
// 	setBitDIOM(7,w_val);
// 	
// }


/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOM::namespace_ending
} //	namespace
