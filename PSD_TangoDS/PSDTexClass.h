/*----- PROTECTED REGION ID(PSDTexClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        PSDTexClass.h
//
// description : Include for the PSDTex root class.
//               This class is the singleton class for
//                the PSDTex device class.
//               It contains all properties and methods which the 
//               PSDTex requires only once e.g. the commands.
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


#ifndef PSDTexClass_H
#define PSDTexClass_H

#include <tango.h>
#include <PSDTex.h>


/*----- PROTECTED REGION END -----*/	//	PSDTexClass.h


namespace PSDTex_ns
{
/*----- PROTECTED REGION ID(PSDTexClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	PSDTexClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute active class definition
class activeAttrib: public Tango::Attr
{
public:
	activeAttrib():Attr("active",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~activeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PSDTex *>(dev))->read_active(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PSDTex *>(dev))->write_active(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PSDTex *>(dev))->is_active_allowed(ty);}
};

//	Attribute version class definition
class versionAttrib: public Tango::Attr
{
public:
	versionAttrib():Attr("version",
			Tango::DEV_STRING, Tango::READ) {};
	~versionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PSDTex *>(dev))->read_version(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PSDTex *>(dev))->is_version_allowed(ty);}
};

//	Attribute preselection class definition
class preselectionAttrib: public Tango::Attr
{
public:
	preselectionAttrib():Attr("preselection",
			Tango::DEV_ULONG64, Tango::READ_WRITE) {};
	~preselectionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PSDTex *>(dev))->read_preselection(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PSDTex *>(dev))->write_preselection(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PSDTex *>(dev))->is_preselection_allowed(ty);}
};

//	Attribute value class definition
class valueAttrib: public Tango::SpectrumAttr
{
public:
	valueAttrib():SpectrumAttr("value",
			Tango::DEV_ULONG, Tango::READ, 16777216) {};
	~valueAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PSDTex *>(dev))->read_value(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PSDTex *>(dev))->is_value_allowed(ty);}
};

//	Attribute zeroPoint class definition
class zeroPointAttrib: public Tango::SpectrumAttr
{
public:
	zeroPointAttrib():SpectrumAttr("zeroPoint",
			Tango::DEV_ULONG, Tango::READ, 10) {};
	~zeroPointAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PSDTex *>(dev))->read_zeroPoint(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PSDTex *>(dev))->is_zeroPoint_allowed(ty);}
};

//	Attribute binning class definition
class binningAttrib: public Tango::SpectrumAttr
{
public:
	binningAttrib():SpectrumAttr("binning",
			Tango::DEV_ULONG, Tango::READ, 10) {};
	~binningAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PSDTex *>(dev))->read_binning(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PSDTex *>(dev))->is_binning_allowed(ty);}
};

//	Attribute detectorSize class definition
class detectorSizeAttrib: public Tango::SpectrumAttr
{
public:
	detectorSizeAttrib():SpectrumAttr("detectorSize",
			Tango::DEV_ULONG, Tango::READ, 10) {};
	~detectorSizeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PSDTex *>(dev))->read_detectorSize(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PSDTex *>(dev))->is_detectorSize_allowed(ty);}
};

//	Attribute roiOffset class definition
class roiOffsetAttrib: public Tango::SpectrumAttr
{
public:
	roiOffsetAttrib():SpectrumAttr("roiOffset",
			Tango::DEV_ULONG, Tango::READ, 10) {};
	~roiOffsetAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PSDTex *>(dev))->read_roiOffset(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PSDTex *>(dev))->is_roiOffset_allowed(ty);}
};

//	Attribute roiSize class definition
class roiSizeAttrib: public Tango::SpectrumAttr
{
public:
	roiSizeAttrib():SpectrumAttr("roiSize",
			Tango::DEV_ULONG, Tango::READ, 10) {};
	~roiSizeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PSDTex *>(dev))->read_roiSize(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PSDTex *>(dev))->is_roiSize_allowed(ty);}
};

//	Attribute image class definition
class imageAttrib: public Tango::ImageAttr
{
public:
	imageAttrib():ImageAttr("image",
			Tango::DEV_DOUBLE, Tango::READ, 256, 256) {};
	~imageAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PSDTex *>(dev))->read_image(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PSDTex *>(dev))->is_image_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command Start class definition
class StartClass : public Tango::Command
{
public:
	StartClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StartClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StartClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PSDTex *>(dev))->is_Start_allowed(any);}
};

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
	{return (static_cast<PSDTex *>(dev))->is_Stop_allowed(any);}
};

//	Command Clear class definition
class ClearClass : public Tango::Command
{
public:
	ClearClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ClearClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ClearClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PSDTex *>(dev))->is_Clear_allowed(any);}
};

//	Command Prepare class definition
class PrepareClass : public Tango::Command
{
public:
	PrepareClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	PrepareClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~PrepareClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PSDTex *>(dev))->is_Prepare_allowed(any);}
};

//	Command Resume class definition
class ResumeClass : public Tango::Command
{
public:
	ResumeClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResumeClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResumeClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PSDTex *>(dev))->is_Resume_allowed(any);}
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
	{return (static_cast<PSDTex *>(dev))->is_On_allowed(any);}
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
	{return (static_cast<PSDTex *>(dev))->is_Off_allowed(any);}
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
	{return (static_cast<PSDTex *>(dev))->is_Reset_allowed(any);}
};

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
	{return (static_cast<PSDTex *>(dev))->is_GetProperties_allowed(any);}
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
	{return (static_cast<PSDTex *>(dev))->is_SetProperties_allowed(any);}
};


/**
 *	The PSDTexClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  PSDTexClass : public Tango::DeviceClass
#else
class PSDTexClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(PSDTexClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	PSDTexClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static PSDTexClass *init(const char *);
		static PSDTexClass *instance();
		~PSDTexClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		PSDTexClass(string &);
		static PSDTexClass *_instance;
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

#endif   //	PSDTex_H
