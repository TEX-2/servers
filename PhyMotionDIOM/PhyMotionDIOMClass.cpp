/*----- PROTECTED REGION ID(PhyMotionDIOMClass.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        PhyMotionDIOMClass.cpp
//
// description : C++ source for the PhyMotionDIOMClass.
//               A singleton class derived from DeviceClass.
//               It implements the command and attribute list
//               and all properties and methods required
//               by the PhyMotionDIOM once per process.
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


#include <PhyMotionDIOMClass.h>

/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass.cpp

//-------------------------------------------------------------------
/**
 *	Create PhyMotionDIOMClass singleton and
 *	return it in a C function for Python usage
 */
//-------------------------------------------------------------------
extern "C" {
#ifdef _TG_WINDOWS_

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_PhyMotionDIOM_class(const char *name) {
		return PhyMotionDIOM_ns::PhyMotionDIOMClass::init(name);
	}
}

namespace PhyMotionDIOM_ns
{
//===================================================================
//	Initialize pointer for singleton pattern
//===================================================================
PhyMotionDIOMClass *PhyMotionDIOMClass::_instance = NULL;

//--------------------------------------------------------
/**
 * method : 		PhyMotionDIOMClass::PhyMotionDIOMClass(string &s)
 * description : 	constructor for the PhyMotionDIOMClass
 *
 * @param s	The class name
 */
//--------------------------------------------------------
PhyMotionDIOMClass::PhyMotionDIOMClass(string &s):Tango::DeviceClass(s)
{
	cout2 << "Entering PhyMotionDIOMClass constructor" << endl;
	set_default_property();
	write_class_property();

	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::constructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::constructor

	cout2 << "Leaving PhyMotionDIOMClass constructor" << endl;
}

//--------------------------------------------------------
/**
 * method : 		PhyMotionDIOMClass::~PhyMotionDIOMClass()
 * description : 	destructor for the PhyMotionDIOMClass
 */
//--------------------------------------------------------
PhyMotionDIOMClass::~PhyMotionDIOMClass()
{
	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::destructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::destructor

	_instance = NULL;
}


//--------------------------------------------------------
/**
 * method : 		PhyMotionDIOMClass::init
 * description : 	Create the object if not already done.
 *                  Otherwise, just return a pointer to the object
 *
 * @param	name	The class name
 */
//--------------------------------------------------------
PhyMotionDIOMClass *PhyMotionDIOMClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new PhyMotionDIOMClass(s);
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
 * method : 		PhyMotionDIOMClass::instance
 * description : 	Check if object already created,
 *                  and return a pointer to the object
 */
//--------------------------------------------------------
PhyMotionDIOMClass *PhyMotionDIOMClass::instance()
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

//===================================================================
//	Properties management
//===================================================================
//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOMClass::get_class_property()
 *	Description : Get the class property for specified name.
 */
//--------------------------------------------------------
Tango::DbDatum PhyMotionDIOMClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, returns  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOMClass::get_default_device_property()
 *	Description : Return the default value for device property.
 */
//--------------------------------------------------------
Tango::DbDatum PhyMotionDIOMClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOMClass::get_default_class_property()
 *	Description : Return the default value for class property.
 */
//--------------------------------------------------------
Tango::DbDatum PhyMotionDIOMClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOMClass::set_default_property()
 *	Description : Set default property (class and device) for wizard.
 *                For each property, add to wizard property name and description.
 *                If default value has been set, add it to wizard property and
 *                store it in a DbDatum.
 */
//--------------------------------------------------------
void PhyMotionDIOMClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;
	vector<string>	vect_data;

	//	Set Default Class Properties

	//	Set Default device Properties
	prop_name = "control_device";
	prop_desc = "Just path to the device of PhyMotionControl";
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
	prop_desc = "The moduel number";
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
	prop_desc = "just address 0-9, and A-F";
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
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOMClass::write_class_property()
 *	Description : Set class description fields as property in database
 */
//--------------------------------------------------------
void PhyMotionDIOMClass::write_class_property()
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
 *	Method      : PhyMotionDIOMClass::device_factory()
 *	Description : Create the device object(s)
 *                and store them in the device list
 */
//--------------------------------------------------------
void PhyMotionDIOMClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{
	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::device_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::device_factory_before

	//	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new PhyMotionDIOM(this, (*devlist_ptr)[i]));
	}

	//	Manage dynamic attributes if any
	erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		PhyMotionDIOM *dev = static_cast<PhyMotionDIOM *>(device_list[device_list.size()-i]);
		dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::device_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::device_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOMClass::attribute_factory()
 *	Description : Create the attribute object(s)
 *                and store them in the attribute list
 */
//--------------------------------------------------------
void PhyMotionDIOMClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::attribute_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::attribute_factory_before
	//	Attribute : inputs
	inputsAttrib	*inputs = new inputsAttrib();
	Tango::UserDefaultAttrProp	inputs_prop;
	//	description	not set for inputs
	inputs_prop.set_label("Inputs code");
	//	unit	not set for inputs
	//	standard_unit	not set for inputs
	//	display_unit	not set for inputs
	inputs_prop.set_format("0x%x");
	//	max_value	not set for inputs
	//	min_value	not set for inputs
	//	max_alarm	not set for inputs
	//	min_alarm	not set for inputs
	//	max_warning	not set for inputs
	//	min_warning	not set for inputs
	//	delta_t	not set for inputs
	//	delta_val	not set for inputs
	
	inputs->set_default_properties(inputs_prop);
	//	Not Polled
	inputs->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(inputs);

	//	Attribute : outputs
	outputsAttrib	*outputs = new outputsAttrib();
	Tango::UserDefaultAttrProp	outputs_prop;
	//	description	not set for outputs
	outputs_prop.set_label("Outputs code");
	//	unit	not set for outputs
	//	standard_unit	not set for outputs
	//	display_unit	not set for outputs
	outputs_prop.set_format("0x%x");
	//	max_value	not set for outputs
	//	min_value	not set for outputs
	//	max_alarm	not set for outputs
	//	min_alarm	not set for outputs
	//	max_warning	not set for outputs
	//	min_warning	not set for outputs
	//	delta_t	not set for outputs
	//	delta_val	not set for outputs
	
	outputs->set_default_properties(outputs_prop);
	//	Not Polled
	outputs->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(outputs);

	//	Attribute : i0
	i0Attrib	*i0 = new i0Attrib();
	Tango::UserDefaultAttrProp	i0_prop;
	//	description	not set for i0
	i0_prop.set_label("I0");
	//	unit	not set for i0
	//	standard_unit	not set for i0
	//	display_unit	not set for i0
	//	format	not set for i0
	//	max_value	not set for i0
	//	min_value	not set for i0
	//	max_alarm	not set for i0
	//	min_alarm	not set for i0
	//	max_warning	not set for i0
	//	min_warning	not set for i0
	//	delta_t	not set for i0
	//	delta_val	not set for i0
	
	i0->set_default_properties(i0_prop);
	//	Not Polled
	i0->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(i0);

	//	Attribute : i1
	i1Attrib	*i1 = new i1Attrib();
	Tango::UserDefaultAttrProp	i1_prop;
	//	description	not set for i1
	i1_prop.set_label("I1");
	//	unit	not set for i1
	//	standard_unit	not set for i1
	//	display_unit	not set for i1
	//	format	not set for i1
	//	max_value	not set for i1
	//	min_value	not set for i1
	//	max_alarm	not set for i1
	//	min_alarm	not set for i1
	//	max_warning	not set for i1
	//	min_warning	not set for i1
	//	delta_t	not set for i1
	//	delta_val	not set for i1
	
	i1->set_default_properties(i1_prop);
	//	Not Polled
	i1->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(i1);

	//	Attribute : i2
	i2Attrib	*i2 = new i2Attrib();
	Tango::UserDefaultAttrProp	i2_prop;
	//	description	not set for i2
	i2_prop.set_label("I2");
	//	unit	not set for i2
	//	standard_unit	not set for i2
	//	display_unit	not set for i2
	//	format	not set for i2
	//	max_value	not set for i2
	//	min_value	not set for i2
	//	max_alarm	not set for i2
	//	min_alarm	not set for i2
	//	max_warning	not set for i2
	//	min_warning	not set for i2
	//	delta_t	not set for i2
	//	delta_val	not set for i2
	
	i2->set_default_properties(i2_prop);
	//	Not Polled
	i2->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(i2);

	//	Attribute : i3
	i3Attrib	*i3 = new i3Attrib();
	Tango::UserDefaultAttrProp	i3_prop;
	//	description	not set for i3
	i3_prop.set_label("I3");
	//	unit	not set for i3
	//	standard_unit	not set for i3
	//	display_unit	not set for i3
	//	format	not set for i3
	//	max_value	not set for i3
	//	min_value	not set for i3
	//	max_alarm	not set for i3
	//	min_alarm	not set for i3
	//	max_warning	not set for i3
	//	min_warning	not set for i3
	//	delta_t	not set for i3
	//	delta_val	not set for i3
	
	i3->set_default_properties(i3_prop);
	//	Not Polled
	i3->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(i3);

	//	Attribute : i4
	i4Attrib	*i4 = new i4Attrib();
	Tango::UserDefaultAttrProp	i4_prop;
	//	description	not set for i4
	i4_prop.set_label("I4");
	//	unit	not set for i4
	//	standard_unit	not set for i4
	//	display_unit	not set for i4
	//	format	not set for i4
	//	max_value	not set for i4
	//	min_value	not set for i4
	//	max_alarm	not set for i4
	//	min_alarm	not set for i4
	//	max_warning	not set for i4
	//	min_warning	not set for i4
	//	delta_t	not set for i4
	//	delta_val	not set for i4
	
	i4->set_default_properties(i4_prop);
	//	Not Polled
	i4->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(i4);

	//	Attribute : i5
	i5Attrib	*i5 = new i5Attrib();
	Tango::UserDefaultAttrProp	i5_prop;
	//	description	not set for i5
	i5_prop.set_label("I5");
	//	unit	not set for i5
	//	standard_unit	not set for i5
	//	display_unit	not set for i5
	//	format	not set for i5
	//	max_value	not set for i5
	//	min_value	not set for i5
	//	max_alarm	not set for i5
	//	min_alarm	not set for i5
	//	max_warning	not set for i5
	//	min_warning	not set for i5
	//	delta_t	not set for i5
	//	delta_val	not set for i5
	
	i5->set_default_properties(i5_prop);
	//	Not Polled
	i5->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(i5);

	//	Attribute : i6
	i6Attrib	*i6 = new i6Attrib();
	Tango::UserDefaultAttrProp	i6_prop;
	//	description	not set for i6
	i6_prop.set_label("I6");
	//	unit	not set for i6
	//	standard_unit	not set for i6
	//	display_unit	not set for i6
	//	format	not set for i6
	//	max_value	not set for i6
	//	min_value	not set for i6
	//	max_alarm	not set for i6
	//	min_alarm	not set for i6
	//	max_warning	not set for i6
	//	min_warning	not set for i6
	//	delta_t	not set for i6
	//	delta_val	not set for i6
	
	i6->set_default_properties(i6_prop);
	//	Not Polled
	i6->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(i6);

	//	Attribute : i7
	i7Attrib	*i7 = new i7Attrib();
	Tango::UserDefaultAttrProp	i7_prop;
	//	description	not set for i7
	i7_prop.set_label("I7");
	//	unit	not set for i7
	//	standard_unit	not set for i7
	//	display_unit	not set for i7
	//	format	not set for i7
	//	max_value	not set for i7
	//	min_value	not set for i7
	//	max_alarm	not set for i7
	//	min_alarm	not set for i7
	//	max_warning	not set for i7
	//	min_warning	not set for i7
	//	delta_t	not set for i7
	//	delta_val	not set for i7
	
	i7->set_default_properties(i7_prop);
	//	Not Polled
	i7->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(i7);

	//	Attribute : o0
	o0Attrib	*o0 = new o0Attrib();
	Tango::UserDefaultAttrProp	o0_prop;
	//	description	not set for o0
	o0_prop.set_label("O0");
	//	unit	not set for o0
	//	standard_unit	not set for o0
	//	display_unit	not set for o0
	//	format	not set for o0
	//	max_value	not set for o0
	//	min_value	not set for o0
	//	max_alarm	not set for o0
	//	min_alarm	not set for o0
	//	max_warning	not set for o0
	//	min_warning	not set for o0
	//	delta_t	not set for o0
	//	delta_val	not set for o0
	
	o0->set_default_properties(o0_prop);
	//	Not Polled
	o0->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(o0);

	//	Attribute : o1
	o1Attrib	*o1 = new o1Attrib();
	Tango::UserDefaultAttrProp	o1_prop;
	//	description	not set for o1
	o1_prop.set_label("O1");
	//	unit	not set for o1
	//	standard_unit	not set for o1
	//	display_unit	not set for o1
	//	format	not set for o1
	//	max_value	not set for o1
	//	min_value	not set for o1
	//	max_alarm	not set for o1
	//	min_alarm	not set for o1
	//	max_warning	not set for o1
	//	min_warning	not set for o1
	//	delta_t	not set for o1
	//	delta_val	not set for o1
	
	o1->set_default_properties(o1_prop);
	//	Not Polled
	o1->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(o1);

	//	Attribute : o2
	o2Attrib	*o2 = new o2Attrib();
	Tango::UserDefaultAttrProp	o2_prop;
	//	description	not set for o2
	o2_prop.set_label("O2");
	//	unit	not set for o2
	//	standard_unit	not set for o2
	//	display_unit	not set for o2
	//	format	not set for o2
	//	max_value	not set for o2
	//	min_value	not set for o2
	//	max_alarm	not set for o2
	//	min_alarm	not set for o2
	//	max_warning	not set for o2
	//	min_warning	not set for o2
	//	delta_t	not set for o2
	//	delta_val	not set for o2
	
	o2->set_default_properties(o2_prop);
	//	Not Polled
	o2->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(o2);

	//	Attribute : o3
	o3Attrib	*o3 = new o3Attrib();
	Tango::UserDefaultAttrProp	o3_prop;
	//	description	not set for o3
	o3_prop.set_label("O3");
	//	unit	not set for o3
	//	standard_unit	not set for o3
	//	display_unit	not set for o3
	//	format	not set for o3
	//	max_value	not set for o3
	//	min_value	not set for o3
	//	max_alarm	not set for o3
	//	min_alarm	not set for o3
	//	max_warning	not set for o3
	//	min_warning	not set for o3
	//	delta_t	not set for o3
	//	delta_val	not set for o3
	
	o3->set_default_properties(o3_prop);
	//	Not Polled
	o3->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(o3);

	//	Attribute : o4
	o4Attrib	*o4 = new o4Attrib();
	Tango::UserDefaultAttrProp	o4_prop;
	//	description	not set for o4
	o4_prop.set_label("O4");
	//	unit	not set for o4
	//	standard_unit	not set for o4
	//	display_unit	not set for o4
	//	format	not set for o4
	//	max_value	not set for o4
	//	min_value	not set for o4
	//	max_alarm	not set for o4
	//	min_alarm	not set for o4
	//	max_warning	not set for o4
	//	min_warning	not set for o4
	//	delta_t	not set for o4
	//	delta_val	not set for o4
	
	o4->set_default_properties(o4_prop);
	//	Not Polled
	o4->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(o4);

	//	Attribute : o5
	o5Attrib	*o5 = new o5Attrib();
	Tango::UserDefaultAttrProp	o5_prop;
	//	description	not set for o5
	o5_prop.set_label("O5");
	//	unit	not set for o5
	//	standard_unit	not set for o5
	//	display_unit	not set for o5
	//	format	not set for o5
	//	max_value	not set for o5
	//	min_value	not set for o5
	//	max_alarm	not set for o5
	//	min_alarm	not set for o5
	//	max_warning	not set for o5
	//	min_warning	not set for o5
	//	delta_t	not set for o5
	//	delta_val	not set for o5
	
	o5->set_default_properties(o5_prop);
	//	Not Polled
	o5->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(o5);

	//	Attribute : o6
	o6Attrib	*o6 = new o6Attrib();
	Tango::UserDefaultAttrProp	o6_prop;
	//	description	not set for o6
	o6_prop.set_label("O6");
	//	unit	not set for o6
	//	standard_unit	not set for o6
	//	display_unit	not set for o6
	//	format	not set for o6
	//	max_value	not set for o6
	//	min_value	not set for o6
	//	max_alarm	not set for o6
	//	min_alarm	not set for o6
	//	max_warning	not set for o6
	//	min_warning	not set for o6
	//	delta_t	not set for o6
	//	delta_val	not set for o6
	
	o6->set_default_properties(o6_prop);
	//	Not Polled
	o6->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(o6);

	//	Attribute : o7
	o7Attrib	*o7 = new o7Attrib();
	Tango::UserDefaultAttrProp	o7_prop;
	//	description	not set for o7
	o7_prop.set_label("O7");
	//	unit	not set for o7
	//	standard_unit	not set for o7
	//	display_unit	not set for o7
	//	format	not set for o7
	//	max_value	not set for o7
	//	min_value	not set for o7
	//	max_alarm	not set for o7
	//	min_alarm	not set for o7
	//	max_warning	not set for o7
	//	min_warning	not set for o7
	//	delta_t	not set for o7
	//	delta_val	not set for o7
	
	o7->set_default_properties(o7_prop);
	//	Not Polled
	o7->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(o7);


	//	Create a list of static attributes
	create_static_attribute_list(get_class_attr()->get_attr_list());
	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::attribute_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::attribute_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOMClass::pipe_factory()
 *	Description : Create the pipe object(s)
 *                and store them in the pipe list
 */
//--------------------------------------------------------
void PhyMotionDIOMClass::pipe_factory()
{
	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::pipe_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::pipe_factory_before
	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::pipe_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::pipe_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOMClass::command_factory()
 *	Description : Create the command object(s)
 *                and store them in the command list
 */
//--------------------------------------------------------
void PhyMotionDIOMClass::command_factory()
{
	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::command_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::command_factory_before


	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::command_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::command_factory_after
}

//===================================================================
//	Dynamic attributes related methods
//===================================================================

//--------------------------------------------------------
/**
 * method : 		PhyMotionDIOMClass::create_static_attribute_list
 * description : 	Create the a list of static attributes
 *
 * @param	att_list	the ceated attribute list
 */
//--------------------------------------------------------
void PhyMotionDIOMClass::create_static_attribute_list(vector<Tango::Attr *> &att_list)
{
	for (unsigned long i=0 ; i<att_list.size() ; i++)
	{
		string att_name(att_list[i]->get_name());
		transform(att_name.begin(), att_name.end(), att_name.begin(), ::tolower);
		defaultAttList.push_back(att_name);
	}

	cout2 << defaultAttList.size() << " attributes in default list" << endl;

	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::create_static_att_list) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::create_static_att_list
}


//--------------------------------------------------------
/**
 * method : 		PhyMotionDIOMClass::erase_dynamic_attributes
 * description : 	delete the dynamic attributes if any.
 *
 * @param	devlist_ptr	the device list pointer
 * @param	list of all attributes
 */
//--------------------------------------------------------
void PhyMotionDIOMClass::erase_dynamic_attributes(const Tango::DevVarStringArray *devlist_ptr, vector<Tango::Attr *> &att_list)
{
	Tango::Util *tg = Tango::Util::instance();

	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		Tango::DeviceImpl *dev_impl = tg->get_device_by_name(((string)(*devlist_ptr)[i]).c_str());
		PhyMotionDIOM *dev = static_cast<PhyMotionDIOM *> (dev_impl);

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
	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::erase_dynamic_attributes) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::erase_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : PhyMotionDIOMClass::get_attr_by_name()
 *	Description : returns Tango::Attr * object found by name
 */
//--------------------------------------------------------
Tango::Attr *PhyMotionDIOMClass::get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname)
{
	vector<Tango::Attr *>::iterator it;
	for (it=att_list.begin() ; it<att_list.end() ; ++it)
		if ((*it)->get_name()==attname)
			return (*it);
	//	Attr does not exist
	return NULL;
}


/*----- PROTECTED REGION ID(PhyMotionDIOMClass::Additional Methods) ENABLED START -----*/

/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::Additional Methods
} //	namespace
