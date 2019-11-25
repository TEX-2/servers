/*----- PROTECTED REGION ID(PhyMotionMotorClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        PhyMotionMotorClass.h
//
// description : Include for the PhyMotionMotor root class.
//               This class is the singleton class for
//                the PhyMotionMotor device class.
//               It contains all properties and methods which the 
//               PhyMotionMotor requires only once e.g. the commands.
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


#ifndef PhyMotionMotorClass_H
#define PhyMotionMotorClass_H

#include <tango.h>
#include <PhyMotionMotor.h>


/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass.h


namespace PhyMotionMotor_ns
{
/*----- PROTECTED REGION ID(PhyMotionMotorClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute position class definition
class positionAttrib: public Tango::Attr
{
public:
	positionAttrib():Attr("position",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~positionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionMotor *>(dev))->read_position(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionMotor *>(dev))->write_position(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionMotor *>(dev))->is_position_allowed(ty);}
};

//	Attribute absolute_counter class definition
class absolute_counterAttrib: public Tango::Attr
{
public:
	absolute_counterAttrib():Attr("absolute_counter",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~absolute_counterAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionMotor *>(dev))->read_absolute_counter(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionMotor *>(dev))->is_absolute_counter_allowed(ty);}
};

//	Attribute axis_status class definition
class axis_statusAttrib: public Tango::Attr
{
public:
	axis_statusAttrib():Attr("axis_status",
			Tango::DEV_LONG, Tango::READ) {};
	~axis_statusAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionMotor *>(dev))->read_axis_status(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionMotor *>(dev))->is_axis_status_allowed(ty);}
};

//	Attribute activate class definition
class activateAttrib: public Tango::Attr
{
public:
	activateAttrib():Attr("activate",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~activateAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionMotor *>(dev))->read_activate(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionMotor *>(dev))->write_activate(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionMotor *>(dev))->is_activate_allowed(ty);}
};

//	Attribute power_stage_temperature class definition
class power_stage_temperatureAttrib: public Tango::Attr
{
public:
	power_stage_temperatureAttrib():Attr("power_stage_temperature",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~power_stage_temperatureAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionMotor *>(dev))->read_power_stage_temperature(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionMotor *>(dev))->is_power_stage_temperature_allowed(ty);}
};

//	Attribute motor_temperature class definition
class motor_temperatureAttrib: public Tango::Attr
{
public:
	motor_temperatureAttrib():Attr("motor_temperature",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~motor_temperatureAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionMotor *>(dev))->read_motor_temperature(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionMotor *>(dev))->is_motor_temperature_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command Stop class definition
class StopClass : public Tango::Command
{
public:
	StopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StopClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PhyMotionMotor *>(dev))->is_Stop_allowed(any);}
};

//	Command ResetStatus class definition
class ResetStatusClass : public Tango::Command
{
public:
	ResetStatusClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResetStatusClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResetStatusClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PhyMotionMotor *>(dev))->is_ResetStatus_allowed(any);}
};

//	Command SetMechanicalZeroCounter class definition
class SetMechanicalZeroCounterClass : public Tango::Command
{
public:
	SetMechanicalZeroCounterClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetMechanicalZeroCounterClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetMechanicalZeroCounterClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PhyMotionMotor *>(dev))->is_SetMechanicalZeroCounter_allowed(any);}
};

//	Command goTo class definition
class goToClass : public Tango::Command
{
public:
	goToClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	goToClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~goToClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PhyMotionMotor *>(dev))->is_goTo_allowed(any);}
};


/**
 *	The PhyMotionMotorClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  PhyMotionMotorClass : public Tango::DeviceClass
#else
class PhyMotionMotorClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(PhyMotionMotorClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionMotorClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static PhyMotionMotorClass *init(const char *);
		static PhyMotionMotorClass *instance();
		~PhyMotionMotorClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		PhyMotionMotorClass(string &);
		static PhyMotionMotorClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void pipe_factory();
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	PhyMotionMotor_H