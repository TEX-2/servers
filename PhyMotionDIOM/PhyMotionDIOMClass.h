/*----- PROTECTED REGION ID(PhyMotionDIOMClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        PhyMotionDIOMClass.h
//
// description : Include for the PhyMotionDIOM root class.
//               This class is the singleton class for
//                the PhyMotionDIOM device class.
//               It contains all properties and methods which the 
//               PhyMotionDIOM requires only once e.g. the commands.
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


#ifndef PhyMotionDIOMClass_H
#define PhyMotionDIOMClass_H

#include <tango.h>
#include <PhyMotionDIOM.h>


/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass.h


namespace PhyMotionDIOM_ns
{
/*----- PROTECTED REGION ID(PhyMotionDIOMClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute inputs class definition
class inputsAttrib: public Tango::Attr
{
public:
	inputsAttrib():Attr("inputs",
			Tango::DEV_USHORT, Tango::READ) {};
	~inputsAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_inputs(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_inputs_allowed(ty);}
};

//	Attribute outputs class definition
class outputsAttrib: public Tango::Attr
{
public:
	outputsAttrib():Attr("outputs",
			Tango::DEV_USHORT, Tango::READ_WRITE) {};
	~outputsAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_outputs(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->write_outputs(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_outputs_allowed(ty);}
};

//	Attribute i0 class definition
class i0Attrib: public Tango::Attr
{
public:
	i0Attrib():Attr("i0",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~i0Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_i0(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_i0_allowed(ty);}
};

//	Attribute i1 class definition
class i1Attrib: public Tango::Attr
{
public:
	i1Attrib():Attr("i1",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~i1Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_i1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_i1_allowed(ty);}
};

//	Attribute i2 class definition
class i2Attrib: public Tango::Attr
{
public:
	i2Attrib():Attr("i2",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~i2Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_i2(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_i2_allowed(ty);}
};

//	Attribute i3 class definition
class i3Attrib: public Tango::Attr
{
public:
	i3Attrib():Attr("i3",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~i3Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_i3(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_i3_allowed(ty);}
};

//	Attribute i4 class definition
class i4Attrib: public Tango::Attr
{
public:
	i4Attrib():Attr("i4",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~i4Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_i4(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_i4_allowed(ty);}
};

//	Attribute i5 class definition
class i5Attrib: public Tango::Attr
{
public:
	i5Attrib():Attr("i5",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~i5Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_i5(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_i5_allowed(ty);}
};

//	Attribute i6 class definition
class i6Attrib: public Tango::Attr
{
public:
	i6Attrib():Attr("i6",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~i6Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_i6(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_i6_allowed(ty);}
};

//	Attribute i7 class definition
class i7Attrib: public Tango::Attr
{
public:
	i7Attrib():Attr("i7",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~i7Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_i7(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_i7_allowed(ty);}
};

//	Attribute o0 class definition
class o0Attrib: public Tango::Attr
{
public:
	o0Attrib():Attr("o0",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~o0Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_o0(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->write_o0(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_o0_allowed(ty);}
};

//	Attribute o1 class definition
class o1Attrib: public Tango::Attr
{
public:
	o1Attrib():Attr("o1",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~o1Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_o1(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->write_o1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_o1_allowed(ty);}
};

//	Attribute o2 class definition
class o2Attrib: public Tango::Attr
{
public:
	o2Attrib():Attr("o2",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~o2Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_o2(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->write_o2(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_o2_allowed(ty);}
};

//	Attribute o3 class definition
class o3Attrib: public Tango::Attr
{
public:
	o3Attrib():Attr("o3",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~o3Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_o3(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->write_o3(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_o3_allowed(ty);}
};

//	Attribute o4 class definition
class o4Attrib: public Tango::Attr
{
public:
	o4Attrib():Attr("o4",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~o4Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_o4(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->write_o4(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_o4_allowed(ty);}
};

//	Attribute o5 class definition
class o5Attrib: public Tango::Attr
{
public:
	o5Attrib():Attr("o5",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~o5Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_o5(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->write_o5(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_o5_allowed(ty);}
};

//	Attribute o6 class definition
class o6Attrib: public Tango::Attr
{
public:
	o6Attrib():Attr("o6",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~o6Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_o6(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->write_o6(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_o6_allowed(ty);}
};

//	Attribute o7 class definition
class o7Attrib: public Tango::Attr
{
public:
	o7Attrib():Attr("o7",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~o7Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->read_o7(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<PhyMotionDIOM *>(dev))->write_o7(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PhyMotionDIOM *>(dev))->is_o7_allowed(ty);}
};


/**
 *	The PhyMotionDIOMClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  PhyMotionDIOMClass : public Tango::DeviceClass
#else
class PhyMotionDIOMClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(PhyMotionDIOMClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	PhyMotionDIOMClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static PhyMotionDIOMClass *init(const char *);
		static PhyMotionDIOMClass *instance();
		~PhyMotionDIOMClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		PhyMotionDIOMClass(string &);
		static PhyMotionDIOMClass *_instance;
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

#endif   //	PhyMotionDIOM_H
