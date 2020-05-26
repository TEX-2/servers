/*----- PROTECTED REGION ID(MLZFormatDigitalOutputClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        MLZFormatDigitalOutputClass.h
//
// description : Include for the MLZFormatDigitalOutput root class.
//               This class is the singleton class for
//                the MLZFormatDigitalOutput device class.
//               It contains all properties and methods which the 
//               MLZFormatDigitalOutput requires only once e.g. the commands.
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
// Pshenichnyi Kirill 2020 PNPI St.Petersburg
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef MLZFormatDigitalOutputClass_H
#define MLZFormatDigitalOutputClass_H

#include <tango.h>
#include <MLZFormatDigitalOutput.h>


/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalOutputClass.h


namespace MLZFormatDigitalOutput_ns
{
/*----- PROTECTED REGION ID(MLZFormatDigitalOutputClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalOutputClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute value class definition
class valueAttrib: public Tango::Attr
{
public:
	valueAttrib():Attr("value",
			Tango::DEV_ULONG64, Tango::READ_WRITE) {};
	~valueAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<MLZFormatDigitalOutput *>(dev))->read_value(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<MLZFormatDigitalOutput *>(dev))->write_value(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<MLZFormatDigitalOutput *>(dev))->is_value_allowed(ty);}
};

//	Attribute version class definition
class versionAttrib: public Tango::Attr
{
public:
	versionAttrib():Attr("version",
			Tango::DEV_STRING, Tango::READ) {};
	~versionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<MLZFormatDigitalOutput *>(dev))->read_version(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<MLZFormatDigitalOutput *>(dev))->is_version_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command GetProperties class definition
class GetPropertiesClass : public Tango::Command
{
public:
	GetPropertiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GetPropertiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GetPropertiesClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<MLZFormatDigitalOutput *>(dev))->is_GetProperties_allowed(any);}
};

//	Command SetProperties class definition
class SetPropertiesClass : public Tango::Command
{
public:
	SetPropertiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetPropertiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetPropertiesClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<MLZFormatDigitalOutput *>(dev))->is_SetProperties_allowed(any);}
};

//	Command On class definition
class OnClass : public Tango::Command
{
public:
	OnClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	OnClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~OnClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<MLZFormatDigitalOutput *>(dev))->is_On_allowed(any);}
};

//	Command Off class definition
class OffClass : public Tango::Command
{
public:
	OffClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	OffClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~OffClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<MLZFormatDigitalOutput *>(dev))->is_Off_allowed(any);}
};

//	Command Reset class definition
class ResetClass : public Tango::Command
{
public:
	ResetClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResetClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResetClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<MLZFormatDigitalOutput *>(dev))->is_Reset_allowed(any);}
};


/**
 *	The MLZFormatDigitalOutputClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  MLZFormatDigitalOutputClass : public Tango::DeviceClass
#else
class MLZFormatDigitalOutputClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(MLZFormatDigitalOutputClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	MLZFormatDigitalOutputClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static MLZFormatDigitalOutputClass *init(const char *);
		static MLZFormatDigitalOutputClass *instance();
		~MLZFormatDigitalOutputClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		MLZFormatDigitalOutputClass(string &);
		static MLZFormatDigitalOutputClass *_instance;
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

#endif   //	MLZFormatDigitalOutput_H
