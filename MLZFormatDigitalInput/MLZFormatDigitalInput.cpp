/*----- PROTECTED REGION ID(MLZFormatDigitalInput.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        MLZFormatDigitalInput.cpp
//
// description : C++ source for the MLZFormatDigitalInput class and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               MLZFormatDigitalInput are implemented in this file.
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
// PNPI St.Petersburg
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#include <MLZFormatDigitalInput.h>
#include <MLZFormatDigitalInputClass.h>

/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput.cpp

/**
 *  MLZFormatDigitalInput class description:
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
//  GetProperties  |  get_properties
//  SetProperties  |  set_properties
//  On             |  on
//  Off            |  off
//  Reset          |  reset
//================================================================

//================================================================
//  Attributes managed are:
//================================================================
//  version  |  Tango::DevString	Scalar
//  value    |  Tango::DevULong64	Scalar
//================================================================

namespace MLZFormatDigitalInput_ns
{
/*----- PROTECTED REGION ID(MLZFormatDigitalInput::namespace_starting) ENABLED START -----*/

//	static initializations

/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::namespace_starting

//--------------------------------------------------------
/**
 *	Method      : MLZFormatDigitalInput::MLZFormatDigitalInput()
 *	Description : Constructors for a Tango device
 *                implementing the classMLZFormatDigitalInput
 */
//--------------------------------------------------------
MLZFormatDigitalInput::MLZFormatDigitalInput(Tango::DeviceClass *cl, string &s)
 : TANGO_BASE_CLASS(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::constructor_1) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::constructor_1
}
//--------------------------------------------------------
MLZFormatDigitalInput::MLZFormatDigitalInput(Tango::DeviceClass *cl, const char *s)
 : TANGO_BASE_CLASS(cl, s)
{
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::constructor_2) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::constructor_2
}
//--------------------------------------------------------
MLZFormatDigitalInput::MLZFormatDigitalInput(Tango::DeviceClass *cl, const char *s, const char *d)
 : TANGO_BASE_CLASS(cl, s, d)
{
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::constructor_3) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::constructor_3
}

//--------------------------------------------------------
/**
 *	Method      : MLZFormatDigitalInput::delete_device()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::delete_device()
{
	DEBUG_STREAM << "MLZFormatDigitalInput::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::delete_device) ENABLED START -----*/
	
	//	Delete device allocated objects
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::delete_device
	delete[] attr_version_read;
	delete[] attr_value_read;
}

//--------------------------------------------------------
/**
 *	Method      : MLZFormatDigitalInput::init_device()
 *	Description : will be called at device initialization.
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::init_device()
{
	DEBUG_STREAM << "MLZFormatDigitalInput::init_device() create device " << device_name << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::init_device_before) ENABLED START -----*/
	
	//	Initialization before get_device_property() call
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::init_device_before
	

	//	Get the device properties from database
	get_device_property();
	
	attr_version_read = new Tango::DevString[1];
	attr_value_read = new Tango::DevULong64[1];
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::init_device) ENABLED START -----*/


	diom_device_proxy = new Tango::DeviceProxy(source_device);
	/*
	for(auto attr : (*(diom_device_proxy->get_attribute_list()))){
	    std::cout << attr << "\n";
	}
	*/

	device_state = Tango::ON;
	device_status = "ok";

	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::init_device
}

//--------------------------------------------------------
/**
 *	Method      : MLZFormatDigitalInput::get_device_property()
 *	Description : Read database to initialize property data members.
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::get_device_property()
{
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::get_device_property_before) ENABLED START -----*/
	
	//	Initialize property data members
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::get_device_property_before


	//	Read device properties from database.
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("source_device"));
	dev_prop.push_back(Tango::DbDatum("bits"));

	//	is there at least one property to be read ?
	if (dev_prop.size()>0)
	{
		//	Call database and extract values
		if (Tango::Util::instance()->_UseDb==true)
			get_db_device()->get_property(dev_prop);
	
		//	get instance on MLZFormatDigitalInputClass to get class property
		Tango::DbDatum	def_prop, cl_prop;
		MLZFormatDigitalInputClass	*ds_class =
			(static_cast<MLZFormatDigitalInputClass *>(get_device_class()));
		int	i = -1;

		//	Try to initialize source_device from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  source_device;
		else {
			//	Try to initialize source_device from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  source_device;
		}
		//	And try to extract source_device value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  source_device;

		//	Try to initialize bits from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  bits;
		else {
			//	Try to initialize bits from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  bits;
		}
		//	And try to extract bits value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  bits;

	}

	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::get_device_property_after) ENABLED START -----*/
	
	//	Check device property data members init
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::get_device_property_after
}

//--------------------------------------------------------
/**
 *	Method      : MLZFormatDigitalInput::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::always_executed_hook()
{
	DEBUG_STREAM << "MLZFormatDigitalInput::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::always_executed_hook) ENABLED START -----*/
	
	//	code always executed before all requests
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::always_executed_hook
}

//--------------------------------------------------------
/**
 *	Method      : MLZFormatDigitalInput::read_attr_hardware()
 *	Description : Hardware acquisition for attributes
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "MLZFormatDigitalInput::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::read_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::read_attr_hardware
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
void MLZFormatDigitalInput::read_version(Tango::Attribute &attr)
{
	DEBUG_STREAM << "MLZFormatDigitalInput::read_version(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::read_version) ENABLED START -----*/
	*attr_version_read = "module v1.0";
	attr.set_value(attr_version_read);
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::read_version
}
//--------------------------------------------------------
/**
 *	Read attribute value related method
 *	Description: 
 *
 *	Data type:	Tango::DevULong64
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::read_value(Tango::Attribute &attr)
{
	DEBUG_STREAM << "MLZFormatDigitalInput::read_value(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::read_value) ENABLED START -----*/

	Tango::DevUShort value;
	diom_device_proxy->read_attribute("inputs") >> value;

	*attr_value_read = value;
	attr.set_value(attr_value_read);
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::read_value
}

//--------------------------------------------------------
/**
 *	Method      : MLZFormatDigitalInput::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *                for specified device.
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::add_dynamic_attributes) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic attributes if any
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::add_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Command GetProperties related method
 *	Description: 
 *
 *	@returns 
 */
//--------------------------------------------------------
Tango::DevVarStringArray *MLZFormatDigitalInput::get_properties()
{
	Tango::DevVarStringArray *argout;
	DEBUG_STREAM << "MLZFormatDigitalInput::GetProperties()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::get_properties) ENABLED START -----*/

	const short int num_prop = 1;
	Tango::DevVarStringArray *prop_list = new Tango::DevVarStringArray(2*num_prop);
	prop_list->length(2*num_prop);
    (*prop_list)[0] = "bits";
    (*prop_list)[1] = (std::to_string(bits)).c_str();
    argout = prop_list;

	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::get_properties
	return argout;
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
Tango::DevBoolean MLZFormatDigitalInput::set_properties(const Tango::DevVarStringArray *argin)
{
	Tango::DevBoolean argout;
	DEBUG_STREAM << "MLZFormatDigitalInput::SetProperties()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::set_properties) ENABLED START -----*/
	
	argout = false;
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::set_properties
	return argout;
}
//--------------------------------------------------------
/**
 *	Command On related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::on()
{
	DEBUG_STREAM << "MLZFormatDigitalInput::On()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::on) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::on
}
//--------------------------------------------------------
/**
 *	Command Off related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::off()
{
	DEBUG_STREAM << "MLZFormatDigitalInput::Off()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::off) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::off
}
//--------------------------------------------------------
/**
 *	Command Reset related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::reset()
{
	DEBUG_STREAM << "MLZFormatDigitalInput::Reset()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::reset) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::reset
}
//--------------------------------------------------------
/**
 *	Method      : MLZFormatDigitalInput::add_dynamic_commands()
 *	Description : Create the dynamic commands if any
 *                for specified device.
 */
//--------------------------------------------------------
void MLZFormatDigitalInput::add_dynamic_commands()
{
	/*----- PROTECTED REGION ID(MLZFormatDigitalInput::add_dynamic_commands) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic commands if any
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::add_dynamic_commands
}

/*----- PROTECTED REGION ID(MLZFormatDigitalInput::namespace_ending) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalInput::namespace_ending
} //	namespace
