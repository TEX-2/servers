/*----- PROTECTED REGION ID(PhyMotionMotorClass.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        PhyMotionMotorClass.cpp
//
// description : C++ source for the PhyMotionMotorClass.
//               A singleton class derived from DeviceClass.
//               It implements the command and attribute list
//               and all properties and methods required
//               by the PhyMotionMotor once per process.
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


#include <PhyMotionMotorClass.h>

/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass.cpp

//-------------------------------------------------------------------
/**
 *	Create PhyMotionMotorClass singleton and
 *	return it in a C function for Python usage
 */
//-------------------------------------------------------------------
extern "C" {
#ifdef _TG_WINDOWS_

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_PhyMotionMotor_class(const char *name) {
		return PhyMotionMotor_ns::PhyMotionMotorClass::init(name);
	}
}

namespace PhyMotionMotor_ns
{
//===================================================================
//	Initialize pointer for singleton pattern
//===================================================================
PhyMotionMotorClass *PhyMotionMotorClass::_instance = NULL;

//--------------------------------------------------------
/**
 * method : 		PhyMotionMotorClass::PhyMotionMotorClass(string &s)
 * description : 	constructor for the PhyMotionMotorClass
 *
 * @param s	The class name
 */
//--------------------------------------------------------
PhyMotionMotorClass::PhyMotionMotorClass(string &s):Tango::DeviceClass(s)
{
	cout2 << "Entering PhyMotionMotorClass constructor" << endl;
	set_default_property();
	write_class_property();

	/*----- PROTECTED REGION ID(PhyMotionMotorClass::constructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::constructor

	cout2 << "Leaving PhyMotionMotorClass constructor" << endl;
}

//--------------------------------------------------------
/**
 * method : 		PhyMotionMotorClass::~PhyMotionMotorClass()
 * description : 	destructor for the PhyMotionMotorClass
 */
//--------------------------------------------------------
PhyMotionMotorClass::~PhyMotionMotorClass()
{
	/*----- PROTECTED REGION ID(PhyMotionMotorClass::destructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::destructor

	_instance = NULL;
}


//--------------------------------------------------------
/**
 * method : 		PhyMotionMotorClass::init
 * description : 	Create the object if not already done.
 *                  Otherwise, just return a pointer to the object
 *
 * @param	name	The class name
 */
//--------------------------------------------------------
PhyMotionMotorClass *PhyMotionMotorClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new PhyMotionMotorClass(s);
		}
		catch (bad_alloc &)
		{
			throw;
		}
	}
	return _instance;
}

//--------------------------------------------------------
/**
 * method : 		PhyMotionMotorClass::instance
 * description : 	Check if object already created,
 *                  and return a pointer to the object
 */
//--------------------------------------------------------
PhyMotionMotorClass *PhyMotionMotorClass::instance()
{
	if (_instance == NULL)
	{
		cerr << "Class is not initialised !!" << endl;
		exit(-1);
	}
	return _instance;
}



//===================================================================
//	Command execution method calls
//===================================================================
//--------------------------------------------------------
/**
 * method : 		StopClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *StopClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "StopClass::execute(): arrived" << endl;
	((static_cast<PhyMotionMotor *>(device))->stop());
	return new CORBA::Any();
}


//===================================================================
//	Properties management
//===================================================================
//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotorClass::get_class_property()
 *	Description : Get the class property for specified name.
 */
//--------------------------------------------------------
Tango::DbDatum PhyMotionMotorClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, returns  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotorClass::get_default_device_property()
 *	Description : Return the default value for device property.
 */
//--------------------------------------------------------
Tango::DbDatum PhyMotionMotorClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotorClass::get_default_class_property()
 *	Description : Return the default value for class property.
 */
//--------------------------------------------------------
Tango::DbDatum PhyMotionMotorClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotorClass::set_default_property()
 *	Description : Set default property (class and device) for wizard.
 *                For each property, add to wizard property name and description.
 *                If default value has been set, add it to wizard property and
 *                store it in a DbDatum.
 */
//--------------------------------------------------------
void PhyMotionMotorClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;
	vector<string>	vect_data;

	//	Set Default Class Properties

	//	Set Default device Properties
	prop_name = "control_device";
	prop_desc = "just path to device of PhyMotionControl";
	prop_def  = "device/PhyMOTION/control";
	vect_data.clear();
	vect_data.push_back("device/PhyMOTION/control");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "module";
	prop_desc = "number of module";
	prop_def  = "1";
	vect_data.clear();
	vect_data.push_back("1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "axis";
	prop_desc = "number of axis";
	prop_def  = "1";
	vect_data.clear();
	vect_data.push_back("1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "address";
	prop_desc = "just address: 0-9,A-F or @ - for all";
	prop_def  = "@";
	vect_data.clear();
	vect_data.push_back("@");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "P01";
	prop_desc = "Type of movement (free run, relative/absolute, reference run)\n0 = Rotation movement (ignoring limit switches)\n1 = Hardware limit switches are monitored\n2 = Software limit switches are monitored\n3 = Hardware and sofrware limit swtiches are monitored";
	prop_def  = "0";
	vect_data.clear();
	vect_data.push_back("0");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "P02";
	prop_desc = "Measuring units of movement: only used for displaying\n1 = step\n2 = mm\n3 = inch\n4 = degree";
	prop_def  = "1";
	vect_data.clear();
	vect_data.push_back("1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "P03";
	prop_desc = "Conversion factor for the thread\n\nCf = therad/Number_of_steps_perrevolution";
	prop_def  = "";
	vect_data.clear();
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "P04";
	prop_desc = "Start/Stop frequency";
	prop_def  = "400.0";
	vect_data.clear();
	vect_data.push_back("400.0");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotorClass::write_class_property()
 *	Description : Set class description fields as property in database
 */
//--------------------------------------------------------
void PhyMotionMotorClass::write_class_property()
{
	//	First time, check if database used
	if (Tango::Util::_UseDb == false)
		return;

	Tango::DbData	data;
	string	classname = get_name();
	string	header;
	string::size_type	start, end;

	//	Put title
	Tango::DbDatum	title("ProjectTitle");
	string	str_title("");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("");
	description << str_desc;
	data.push_back(description);

	//  Put inheritance
	Tango::DbDatum	inher_datum("InheritedFrom");
	vector<string> inheritance;
	inheritance.push_back("TANGO_BASE_CLASS");
	inher_datum << inheritance;
	data.push_back(inher_datum);

	//	Call database and and values
	get_db_class()->put_property(data);
}

//===================================================================
//	Factory methods
//===================================================================

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotorClass::device_factory()
 *	Description : Create the device object(s)
 *                and store them in the device list
 */
//--------------------------------------------------------
void PhyMotionMotorClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{
	/*----- PROTECTED REGION ID(PhyMotionMotorClass::device_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::device_factory_before

	//	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new PhyMotionMotor(this, (*devlist_ptr)[i]));
	}

	//	Manage dynamic attributes if any
	erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		PhyMotionMotor *dev = static_cast<PhyMotionMotor *>(device_list[device_list.size()-i]);
		dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

	/*----- PROTECTED REGION ID(PhyMotionMotorClass::device_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::device_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotorClass::attribute_factory()
 *	Description : Create the attribute object(s)
 *                and store them in the attribute list
 */
//--------------------------------------------------------
void PhyMotionMotorClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	/*----- PROTECTED REGION ID(PhyMotionMotorClass::attribute_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::attribute_factory_before
	//	Attribute : position
	positionAttrib	*position = new positionAttrib();
	Tango::UserDefaultAttrProp	position_prop;
	position_prop.set_description("For read - this is P20 parameter - mechanical zero counter");
	position_prop.set_label("Position");
	//	unit	not set for position
	//	standard_unit	not set for position
	//	display_unit	not set for position
	//	format	not set for position
	//	max_value	not set for position
	//	min_value	not set for position
	//	max_alarm	not set for position
	//	min_alarm	not set for position
	//	max_warning	not set for position
	//	min_warning	not set for position
	//	delta_t	not set for position
	//	delta_val	not set for position
	
	position->set_default_properties(position_prop);
	//	Not Polled
	position->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(position);

	//	Attribute : absolute_counter
	absolute_counterAttrib	*absolute_counter = new absolute_counterAttrib();
	Tango::UserDefaultAttrProp	absolute_counter_prop;
	absolute_counter_prop.set_description("P21 Reading");
	absolute_counter_prop.set_label("Absolute counter");
	//	unit	not set for absolute_counter
	//	standard_unit	not set for absolute_counter
	//	display_unit	not set for absolute_counter
	//	format	not set for absolute_counter
	//	max_value	not set for absolute_counter
	//	min_value	not set for absolute_counter
	//	max_alarm	not set for absolute_counter
	//	min_alarm	not set for absolute_counter
	//	max_warning	not set for absolute_counter
	//	min_warning	not set for absolute_counter
	//	delta_t	not set for absolute_counter
	//	delta_val	not set for absolute_counter
	
	absolute_counter->set_default_properties(absolute_counter_prop);
	//	Not Polled
	absolute_counter->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(absolute_counter);

	//	Attribute : axis_status
	axis_statusAttrib	*axis_status = new axis_statusAttrib();
	Tango::UserDefaultAttrProp	axis_status_prop;
	//	description	not set for axis_status
	//	label	not set for axis_status
	//	unit	not set for axis_status
	//	standard_unit	not set for axis_status
	//	display_unit	not set for axis_status
	//	format	not set for axis_status
	//	max_value	not set for axis_status
	//	min_value	not set for axis_status
	//	max_alarm	not set for axis_status
	//	min_alarm	not set for axis_status
	//	max_warning	not set for axis_status
	//	min_warning	not set for axis_status
	//	delta_t	not set for axis_status
	//	delta_val	not set for axis_status
	
	axis_status->set_default_properties(axis_status_prop);
	//	Not Polled
	axis_status->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(axis_status);


	//	Create a list of static attributes
	create_static_attribute_list(get_class_attr()->get_attr_list());
	/*----- PROTECTED REGION ID(PhyMotionMotorClass::attribute_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::attribute_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotorClass::pipe_factory()
 *	Description : Create the pipe object(s)
 *                and store them in the pipe list
 */
//--------------------------------------------------------
void PhyMotionMotorClass::pipe_factory()
{
	/*----- PROTECTED REGION ID(PhyMotionMotorClass::pipe_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::pipe_factory_before
	/*----- PROTECTED REGION ID(PhyMotionMotorClass::pipe_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::pipe_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotorClass::command_factory()
 *	Description : Create the command object(s)
 *                and store them in the command list
 */
//--------------------------------------------------------
void PhyMotionMotorClass::command_factory()
{
	/*----- PROTECTED REGION ID(PhyMotionMotorClass::command_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::command_factory_before


	//	Command Stop
	StopClass	*pStopCmd =
		new StopClass("Stop",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pStopCmd);

	/*----- PROTECTED REGION ID(PhyMotionMotorClass::command_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::command_factory_after
}

//===================================================================
//	Dynamic attributes related methods
//===================================================================

//--------------------------------------------------------
/**
 * method : 		PhyMotionMotorClass::create_static_attribute_list
 * description : 	Create the a list of static attributes
 *
 * @param	att_list	the ceated attribute list
 */
//--------------------------------------------------------
void PhyMotionMotorClass::create_static_attribute_list(vector<Tango::Attr *> &att_list)
{
	for (unsigned long i=0 ; i<att_list.size() ; i++)
	{
		string att_name(att_list[i]->get_name());
		transform(att_name.begin(), att_name.end(), att_name.begin(), ::tolower);
		defaultAttList.push_back(att_name);
	}

	cout2 << defaultAttList.size() << " attributes in default list" << endl;

	/*----- PROTECTED REGION ID(PhyMotionMotorClass::create_static_att_list) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::create_static_att_list
}


//--------------------------------------------------------
/**
 * method : 		PhyMotionMotorClass::erase_dynamic_attributes
 * description : 	delete the dynamic attributes if any.
 *
 * @param	devlist_ptr	the device list pointer
 * @param	list of all attributes
 */
//--------------------------------------------------------
void PhyMotionMotorClass::erase_dynamic_attributes(const Tango::DevVarStringArray *devlist_ptr, vector<Tango::Attr *> &att_list)
{
	Tango::Util *tg = Tango::Util::instance();

	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		Tango::DeviceImpl *dev_impl = tg->get_device_by_name(((string)(*devlist_ptr)[i]).c_str());
		PhyMotionMotor *dev = static_cast<PhyMotionMotor *> (dev_impl);

		vector<Tango::Attribute *> &dev_att_list = dev->get_device_attr()->get_attribute_list();
		vector<Tango::Attribute *>::iterator ite_att;
		for (ite_att=dev_att_list.begin() ; ite_att != dev_att_list.end() ; ++ite_att)
		{
			string att_name((*ite_att)->get_name_lower());
			if ((att_name == "state") || (att_name == "status"))
				continue;
			vector<string>::iterator ite_str = find(defaultAttList.begin(), defaultAttList.end(), att_name);
			if (ite_str == defaultAttList.end())
			{
				cout2 << att_name << " is a UNWANTED dynamic attribute for device " << (*devlist_ptr)[i] << endl;
				Tango::Attribute &att = dev->get_device_attr()->get_attr_by_name(att_name.c_str());
				dev->remove_attribute(att_list[att.get_attr_idx()], true, false);
				--ite_att;
			}
		}
	}
	/*----- PROTECTED REGION ID(PhyMotionMotorClass::erase_dynamic_attributes) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::erase_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionMotorClass::get_attr_by_name()
 *	Description : returns Tango::Attr * object found by name
 */
//--------------------------------------------------------
Tango::Attr *PhyMotionMotorClass::get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname)
{
	vector<Tango::Attr *>::iterator it;
	for (it=att_list.begin() ; it<att_list.end() ; ++it)
		if ((*it)->get_name()==attname)
			return (*it);
	//	Attr does not exist
	return NULL;
}


/*----- PROTECTED REGION ID(PhyMotionMotorClass::Additional Methods) ENABLED START -----*/

/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::Additional Methods
} //	namespace
