/*----- PROTECTED REGION ID(PSDTexClass.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        PSDTexClass.cpp
//
// description : C++ source for the PSDTexClass.
//               A singleton class derived from DeviceClass.
//               It implements the command and attribute list
//               and all properties and methods required
//               by the PSDTex once per process.
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
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#include <PSDTexClass.h>

/*----- PROTECTED REGION END -----*/	//	PSDTexClass.cpp

//-------------------------------------------------------------------
/**
 *	Create PSDTexClass singleton and
 *	return it in a C function for Python usage
 */
//-------------------------------------------------------------------
extern "C" {
#ifdef _TG_WINDOWS_

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_PSDTex_class(const char *name) {
		return PSDTex_ns::PSDTexClass::init(name);
	}
}

namespace PSDTex_ns
{
//===================================================================
//	Initialize pointer for singleton pattern
//===================================================================
PSDTexClass *PSDTexClass::_instance = NULL;

//--------------------------------------------------------
/**
 * method : 		PSDTexClass::PSDTexClass(string &s)
 * description : 	constructor for the PSDTexClass
 *
 * @param s	The class name
 */
//--------------------------------------------------------
PSDTexClass::PSDTexClass(string &s):Tango::DeviceClass(s)
{
	cout2 << "Entering PSDTexClass constructor" << endl;
	set_default_property();
	write_class_property();

	/*----- PROTECTED REGION ID(PSDTexClass::constructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::constructor

	cout2 << "Leaving PSDTexClass constructor" << endl;
}

//--------------------------------------------------------
/**
 * method : 		PSDTexClass::~PSDTexClass()
 * description : 	destructor for the PSDTexClass
 */
//--------------------------------------------------------
PSDTexClass::~PSDTexClass()
{
	/*----- PROTECTED REGION ID(PSDTexClass::destructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::destructor

	_instance = NULL;
}


//--------------------------------------------------------
/**
 * method : 		PSDTexClass::init
 * description : 	Create the object if not already done.
 *                  Otherwise, just return a pointer to the object
 *
 * @param	name	The class name
 */
//--------------------------------------------------------
PSDTexClass *PSDTexClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new PSDTexClass(s);
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
 * method : 		PSDTexClass::instance
 * description : 	Check if object already created,
 *                  and return a pointer to the object
 */
//--------------------------------------------------------
PSDTexClass *PSDTexClass::instance()
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
 * method : 		StartClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *StartClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "StartClass::execute(): arrived" << endl;
	((static_cast<PSDTex *>(device))->start());
	return new CORBA::Any();
}

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
	((static_cast<PSDTex *>(device))->stop());
	return new CORBA::Any();
}

//--------------------------------------------------------
/**
 * method : 		ClearClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *ClearClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "ClearClass::execute(): arrived" << endl;
	((static_cast<PSDTex *>(device))->clear());
	return new CORBA::Any();
}

//--------------------------------------------------------
/**
 * method : 		PrepareClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *PrepareClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "PrepareClass::execute(): arrived" << endl;
	((static_cast<PSDTex *>(device))->prepare());
	return new CORBA::Any();
}

//--------------------------------------------------------
/**
 * method : 		ResumeClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *ResumeClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "ResumeClass::execute(): arrived" << endl;
	((static_cast<PSDTex *>(device))->resume());
	return new CORBA::Any();
}

//--------------------------------------------------------
/**
 * method : 		OnClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *OnClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "OnClass::execute(): arrived" << endl;
	((static_cast<PSDTex *>(device))->on());
	return new CORBA::Any();
}

//--------------------------------------------------------
/**
 * method : 		OffClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *OffClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "OffClass::execute(): arrived" << endl;
	((static_cast<PSDTex *>(device))->off());
	return new CORBA::Any();
}

//--------------------------------------------------------
/**
 * method : 		ResetClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *ResetClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "ResetClass::execute(): arrived" << endl;
	((static_cast<PSDTex *>(device))->reset());
	return new CORBA::Any();
}

//--------------------------------------------------------
/**
 * method : 		GetPropertiesClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *GetPropertiesClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "GetPropertiesClass::execute(): arrived" << endl;
	return insert((static_cast<PSDTex *>(device))->get_properties());
}

//--------------------------------------------------------
/**
 * method : 		SetPropertiesClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *SetPropertiesClass::execute(Tango::DeviceImpl *device, const CORBA::Any &in_any)
{
	cout2 << "SetPropertiesClass::execute(): arrived" << endl;
	const Tango::DevVarStringArray *argin;
	extract(in_any, argin);
	return insert((static_cast<PSDTex *>(device))->set_properties(argin));
}


//===================================================================
//	Properties management
//===================================================================
//--------------------------------------------------------
/**
 *	Method      : PSDTexClass::get_class_property()
 *	Description : Get the class property for specified name.
 */
//--------------------------------------------------------
Tango::DbDatum PSDTexClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, returns  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : PSDTexClass::get_default_device_property()
 *	Description : Return the default value for device property.
 */
//--------------------------------------------------------
Tango::DbDatum PSDTexClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : PSDTexClass::get_default_class_property()
 *	Description : Return the default value for class property.
 */
//--------------------------------------------------------
Tango::DbDatum PSDTexClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : PSDTexClass::set_default_property()
 *	Description : Set default property (class and device) for wizard.
 *                For each property, add to wizard property name and description.
 *                If default value has been set, add it to wizard property and
 *                store it in a DbDatum.
 */
//--------------------------------------------------------
void PSDTexClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;
	vector<string>	vect_data;

	//	Set Default Class Properties

	//	Set Default device Properties
	prop_name = "devicefile_path";
	prop_desc = "Device file path";
	prop_def  = "/dev/plxdetector0";
	vect_data.clear();
	vect_data.push_back("/dev/plxdetector0");
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
 *	Method      : PSDTexClass::write_class_property()
 *	Description : Set class description fields as property in database
 */
//--------------------------------------------------------
void PSDTexClass::write_class_property()
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
 *	Method      : PSDTexClass::device_factory()
 *	Description : Create the device object(s)
 *                and store them in the device list
 */
//--------------------------------------------------------
void PSDTexClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{
	/*----- PROTECTED REGION ID(PSDTexClass::device_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::device_factory_before

	//	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new PSDTex(this, (*devlist_ptr)[i]));
	}

	//	Manage dynamic attributes if any
	erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		PSDTex *dev = static_cast<PSDTex *>(device_list[device_list.size()-i]);
		dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

	/*----- PROTECTED REGION ID(PSDTexClass::device_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::device_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : PSDTexClass::attribute_factory()
 *	Description : Create the attribute object(s)
 *                and store them in the attribute list
 */
//--------------------------------------------------------
void PSDTexClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	/*----- PROTECTED REGION ID(PSDTexClass::attribute_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::attribute_factory_before
	//	Attribute : active
	activeAttrib	*active = new activeAttrib();
	Tango::UserDefaultAttrProp	active_prop;
	//	description	not set for active
	//	label	not set for active
	//	unit	not set for active
	//	standard_unit	not set for active
	//	display_unit	not set for active
	//	format	not set for active
	//	max_value	not set for active
	//	min_value	not set for active
	//	max_alarm	not set for active
	//	min_alarm	not set for active
	//	max_warning	not set for active
	//	min_warning	not set for active
	//	delta_t	not set for active
	//	delta_val	not set for active
	
	active->set_default_properties(active_prop);
	//	Not Polled
	active->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(active);

	//	Attribute : version
	versionAttrib	*version = new versionAttrib();
	Tango::UserDefaultAttrProp	version_prop;
	//	description	not set for version
	//	label	not set for version
	//	unit	not set for version
	//	standard_unit	not set for version
	//	display_unit	not set for version
	//	format	not set for version
	//	max_value	not set for version
	//	min_value	not set for version
	//	max_alarm	not set for version
	//	min_alarm	not set for version
	//	max_warning	not set for version
	//	min_warning	not set for version
	//	delta_t	not set for version
	//	delta_val	not set for version
	
	version->set_default_properties(version_prop);
	//	Not Polled
	version->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(version);

	//	Attribute : preselection
	preselectionAttrib	*preselection = new preselectionAttrib();
	Tango::UserDefaultAttrProp	preselection_prop;
	//	description	not set for preselection
	//	label	not set for preselection
	//	unit	not set for preselection
	//	standard_unit	not set for preselection
	//	display_unit	not set for preselection
	//	format	not set for preselection
	//	max_value	not set for preselection
	//	min_value	not set for preselection
	//	max_alarm	not set for preselection
	//	min_alarm	not set for preselection
	//	max_warning	not set for preselection
	//	min_warning	not set for preselection
	//	delta_t	not set for preselection
	//	delta_val	not set for preselection
	
	preselection->set_default_properties(preselection_prop);
	//	Not Polled
	preselection->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(preselection);

	//	Attribute : value
	valueAttrib	*value = new valueAttrib();
	Tango::UserDefaultAttrProp	value_prop;
	//	description	not set for value
	//	label	not set for value
	//	unit	not set for value
	//	standard_unit	not set for value
	//	display_unit	not set for value
	//	format	not set for value
	//	max_value	not set for value
	//	min_value	not set for value
	//	max_alarm	not set for value
	//	min_alarm	not set for value
	//	max_warning	not set for value
	//	min_warning	not set for value
	//	delta_t	not set for value
	//	delta_val	not set for value
	
	value->set_default_properties(value_prop);
	//	Not Polled
	value->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(value);

	//	Attribute : zeroPoint
	zeroPointAttrib	*zeropoint = new zeroPointAttrib();
	Tango::UserDefaultAttrProp	zeropoint_prop;
	//	description	not set for zeroPoint
	//	label	not set for zeroPoint
	//	unit	not set for zeroPoint
	//	standard_unit	not set for zeroPoint
	//	display_unit	not set for zeroPoint
	//	format	not set for zeroPoint
	//	max_value	not set for zeroPoint
	//	min_value	not set for zeroPoint
	//	max_alarm	not set for zeroPoint
	//	min_alarm	not set for zeroPoint
	//	max_warning	not set for zeroPoint
	//	min_warning	not set for zeroPoint
	//	delta_t	not set for zeroPoint
	//	delta_val	not set for zeroPoint
	
	zeropoint->set_default_properties(zeropoint_prop);
	//	Not Polled
	zeropoint->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(zeropoint);

	//	Attribute : binning
	binningAttrib	*binning = new binningAttrib();
	Tango::UserDefaultAttrProp	binning_prop;
	//	description	not set for binning
	//	label	not set for binning
	//	unit	not set for binning
	//	standard_unit	not set for binning
	//	display_unit	not set for binning
	//	format	not set for binning
	//	max_value	not set for binning
	//	min_value	not set for binning
	//	max_alarm	not set for binning
	//	min_alarm	not set for binning
	//	max_warning	not set for binning
	//	min_warning	not set for binning
	//	delta_t	not set for binning
	//	delta_val	not set for binning
	
	binning->set_default_properties(binning_prop);
	//	Not Polled
	binning->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(binning);

	//	Attribute : detectorSize
	detectorSizeAttrib	*detectorsize = new detectorSizeAttrib();
	Tango::UserDefaultAttrProp	detectorsize_prop;
	//	description	not set for detectorSize
	//	label	not set for detectorSize
	//	unit	not set for detectorSize
	//	standard_unit	not set for detectorSize
	//	display_unit	not set for detectorSize
	//	format	not set for detectorSize
	//	max_value	not set for detectorSize
	//	min_value	not set for detectorSize
	//	max_alarm	not set for detectorSize
	//	min_alarm	not set for detectorSize
	//	max_warning	not set for detectorSize
	//	min_warning	not set for detectorSize
	//	delta_t	not set for detectorSize
	//	delta_val	not set for detectorSize
	
	detectorsize->set_default_properties(detectorsize_prop);
	//	Not Polled
	detectorsize->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(detectorsize);

	//	Attribute : roiOffset
	roiOffsetAttrib	*roioffset = new roiOffsetAttrib();
	Tango::UserDefaultAttrProp	roioffset_prop;
	//	description	not set for roiOffset
	//	label	not set for roiOffset
	//	unit	not set for roiOffset
	//	standard_unit	not set for roiOffset
	//	display_unit	not set for roiOffset
	//	format	not set for roiOffset
	//	max_value	not set for roiOffset
	//	min_value	not set for roiOffset
	//	max_alarm	not set for roiOffset
	//	min_alarm	not set for roiOffset
	//	max_warning	not set for roiOffset
	//	min_warning	not set for roiOffset
	//	delta_t	not set for roiOffset
	//	delta_val	not set for roiOffset
	
	roioffset->set_default_properties(roioffset_prop);
	//	Not Polled
	roioffset->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(roioffset);

	//	Attribute : roiSize
	roiSizeAttrib	*roisize = new roiSizeAttrib();
	Tango::UserDefaultAttrProp	roisize_prop;
	//	description	not set for roiSize
	//	label	not set for roiSize
	//	unit	not set for roiSize
	//	standard_unit	not set for roiSize
	//	display_unit	not set for roiSize
	//	format	not set for roiSize
	//	max_value	not set for roiSize
	//	min_value	not set for roiSize
	//	max_alarm	not set for roiSize
	//	min_alarm	not set for roiSize
	//	max_warning	not set for roiSize
	//	min_warning	not set for roiSize
	//	delta_t	not set for roiSize
	//	delta_val	not set for roiSize
	
	roisize->set_default_properties(roisize_prop);
	//	Not Polled
	roisize->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(roisize);

	//	Attribute : image
	imageAttrib	*image = new imageAttrib();
	Tango::UserDefaultAttrProp	image_prop;
	//	description	not set for image
	//	label	not set for image
	//	unit	not set for image
	//	standard_unit	not set for image
	//	display_unit	not set for image
	//	format	not set for image
	//	max_value	not set for image
	//	min_value	not set for image
	//	max_alarm	not set for image
	//	min_alarm	not set for image
	//	max_warning	not set for image
	//	min_warning	not set for image
	//	delta_t	not set for image
	//	delta_val	not set for image
	
	image->set_default_properties(image_prop);
	//	Not Polled
	image->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(image);


	//	Create a list of static attributes
	create_static_attribute_list(get_class_attr()->get_attr_list());
	/*----- PROTECTED REGION ID(PSDTexClass::attribute_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::attribute_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : PSDTexClass::pipe_factory()
 *	Description : Create the pipe object(s)
 *                and store them in the pipe list
 */
//--------------------------------------------------------
void PSDTexClass::pipe_factory()
{
	/*----- PROTECTED REGION ID(PSDTexClass::pipe_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::pipe_factory_before
	/*----- PROTECTED REGION ID(PSDTexClass::pipe_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::pipe_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : PSDTexClass::command_factory()
 *	Description : Create the command object(s)
 *                and store them in the command list
 */
//--------------------------------------------------------
void PSDTexClass::command_factory()
{
	/*----- PROTECTED REGION ID(PSDTexClass::command_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::command_factory_before


	//	Command Start
	StartClass	*pStartCmd =
		new StartClass("Start",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pStartCmd);

	//	Command Stop
	StopClass	*pStopCmd =
		new StopClass("Stop",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pStopCmd);

	//	Command Clear
	ClearClass	*pClearCmd =
		new ClearClass("Clear",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pClearCmd);

	//	Command Prepare
	PrepareClass	*pPrepareCmd =
		new PrepareClass("Prepare",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pPrepareCmd);

	//	Command Resume
	ResumeClass	*pResumeCmd =
		new ResumeClass("Resume",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pResumeCmd);

	//	Command On
	OnClass	*pOnCmd =
		new OnClass("On",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pOnCmd);

	//	Command Off
	OffClass	*pOffCmd =
		new OffClass("Off",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pOffCmd);

	//	Command Reset
	ResetClass	*pResetCmd =
		new ResetClass("Reset",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pResetCmd);

	//	Command GetProperties
	GetPropertiesClass	*pGetPropertiesCmd =
		new GetPropertiesClass("GetProperties",
			Tango::DEV_VOID, Tango::DEVVAR_STRINGARRAY,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pGetPropertiesCmd);

	//	Command SetProperties
	SetPropertiesClass	*pSetPropertiesCmd =
		new SetPropertiesClass("SetProperties",
			Tango::DEVVAR_STRINGARRAY, Tango::DEV_BOOLEAN,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pSetPropertiesCmd);

	/*----- PROTECTED REGION ID(PSDTexClass::command_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::command_factory_after
}

//===================================================================
//	Dynamic attributes related methods
//===================================================================

//--------------------------------------------------------
/**
 * method : 		PSDTexClass::create_static_attribute_list
 * description : 	Create the a list of static attributes
 *
 * @param	att_list	the ceated attribute list
 */
//--------------------------------------------------------
void PSDTexClass::create_static_attribute_list(vector<Tango::Attr *> &att_list)
{
	for (unsigned long i=0 ; i<att_list.size() ; i++)
	{
		string att_name(att_list[i]->get_name());
		transform(att_name.begin(), att_name.end(), att_name.begin(), ::tolower);
		defaultAttList.push_back(att_name);
	}

	cout2 << defaultAttList.size() << " attributes in default list" << endl;

	/*----- PROTECTED REGION ID(PSDTexClass::create_static_att_list) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::create_static_att_list
}


//--------------------------------------------------------
/**
 * method : 		PSDTexClass::erase_dynamic_attributes
 * description : 	delete the dynamic attributes if any.
 *
 * @param	devlist_ptr	the device list pointer
 * @param	list of all attributes
 */
//--------------------------------------------------------
void PSDTexClass::erase_dynamic_attributes(const Tango::DevVarStringArray *devlist_ptr, vector<Tango::Attr *> &att_list)
{
	Tango::Util *tg = Tango::Util::instance();

	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		Tango::DeviceImpl *dev_impl = tg->get_device_by_name(((string)(*devlist_ptr)[i]).c_str());
		PSDTex *dev = static_cast<PSDTex *> (dev_impl);

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
	/*----- PROTECTED REGION ID(PSDTexClass::erase_dynamic_attributes) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::erase_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : PSDTexClass::get_attr_by_name()
 *	Description : returns Tango::Attr * object found by name
 */
//--------------------------------------------------------
Tango::Attr *PSDTexClass::get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname)
{
	vector<Tango::Attr *>::iterator it;
	for (it=att_list.begin() ; it<att_list.end() ; ++it)
		if ((*it)->get_name()==attname)
			return (*it);
	//	Attr does not exist
	return NULL;
}


/*----- PROTECTED REGION ID(PSDTexClass::Additional Methods) ENABLED START -----*/

/*----- PROTECTED REGION END -----*/	//	PSDTexClass::Additional Methods
} //	namespace
