/*----- PROTECTED REGION ID(PhyMotionMotor.h) ENABLED START -----*/
//=============================================================================
//
// file :        PhyMotionMotor.h
//
// description : Include file for the PhyMotionMotor class
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


#ifndef PhyMotionMotor_H
#define PhyMotionMotor_H

#include <tango.h>
#include <iostream>
#include <mutex>

#include "PhyMotionControlCMD.h"

/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor.h

/**
 *  PhyMotionMotor class description:
 *    
 */

namespace PhyMotionMotor_ns
{
/*----- PROTECTED REGION ID(PhyMotionMotor::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::Additional Class Declarations

class PhyMotionMotor : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(PhyMotionMotor::Data Members) ENABLED START -----*/

PhyMotionControlCMD *phy_motion_control_cmd = nullptr;
std::string str_module, str_axis, str_addr_axis_module;
std::mutex mux;
uint32_t axis_status;

/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::Data Members

//	Device property data members
public:
	//	control_device:	just path to device of PhyMotionControl
	string	control_device;
	//	module:	number of module
	Tango::DevShort	module;
	//	axis:	number of axis
	Tango::DevShort	axis;
	//	address:	just address: 0-9,A-F or @ - for all
	string	address;
	//	P01:	Type of movement (free run, relative/absolute, reference run)
	//  0 = Rotation movement (ignoring limit switches)
	//  1 = Hardware limit switches are monitored
	//  2 = Software limit switches are monitored
	//  3 = Hardware and sofrware limit swtiches are monitored
	Tango::DevShort	p01;
	//	P02:	Measuring units of movement: only used for displaying
	//  1 = step
	//  2 = mm
	//  3 = inch
	//  4 = degree
	Tango::DevShort	p02;
	//	P03:	Conversion factor for the thread
	//  
	//  Cf = therad/Number_of_steps_perrevolution
	Tango::DevDouble	p03;
	//	P04:	Start/Stop frequency
	Tango::DevDouble	p04;
	//	P07:	Emergency stop ramp
	//  Input for 
	//  I1AM0x: in 4000 Hz/s steps
	//  I4XM01: in 1Hz/steps
	Tango::DevLong	p07;
	//	P08:	f_max M�P
	//  Run frequency during initilizing (referecing)
	//  Enter in Hz (integer value)
	//  I1AM0x: 40 000 maximum
	//  I4XM01: 4 000 000 maximum
	Tango::DevLong	p08;
	//	P09:	Ramp M�P
	//  Ramp during initializing, associated to parameter P08
	//  Input for
	//  I1AM0x: in 4000 Hz/s steps
	//  I4XM01: in 1 Hz/s steps
	Tango::DevLong	p09;
	//	P10:	f_min M�P Run frequency for leaving the limit switch range
	//  
	//  Enter in Hz
	Tango::DevLong	p10;
	//	P11:	M�P offset for limit switch direction 
	//  + (away from ``LIMIT+`` switch, towards ``LIMIT?`` switch)
	//  Distance between reference point M�P and limit switch 
	//  activation
	//  Unit: is defined in parameter P02
	//  P11>=0
	Tango::DevDouble	p11;
	//	P12:	M�P offset for limit switch direction ?(away from 
	//  ``LIMIT?`` switch, towards ``LIMIT+`` switch)
	//  Distance between reference point M�P and limit switch
	//  activation
	//  Unit: is defined in parameter P02
	//  P12>=0
	Tango::DevDouble	p12;
	//	P13:	Recovery time M�P
	//  Time lapse during initialization
	//  Enter in msec
	Tango::DevLong	p13;
	//	P14:	Run frequency (max) during program operation
	//  Enter in Hz (integer value)  
	//  I1AM0x: 40 000 maximum
	//  I4XM01: 4 000 000 maximum
	Tango::DevLong	p14;
	//	P15:	Ramp for run frequency (P14)
	//  Input for
	//  I1AM0x: in 4000 Hz/s steps
	//  I4XM01: in 1 Hz/s steps
	Tango::DevLong	p15;
	//	P16:	Recovery time position
	//  Time lapse after positioning
	//  Input in msec
	Tango::DevLong	p16;
	//	P17:	Boost (current is defined in P42)
	//  0 = off
	//  1 = on during motor run
	//  2 = on during acceleration and deceleration ramp
	Tango::DevUShort	p17;
	//	P23:	Software Limit Switch (Axial limitation  pos. direction +)
	//  If the distance is reached, the run in + direction is aborted.
	//  0 = no limitation
	Tango::DevDouble	p23;
	//	P24:	Software Limit Switch (Axial limitation  neg. direction -)
	//  If the distance is reached, the run in - direction is aborted.  
	//  0 = no limitation
	Tango::DevDouble	p24;
	//	P25:	Compensation for play
	//  Indicates the distance,the target position in the selected
	//  direction is passed over and afterwards is started in
	//  reverse direction.
	//  0 = no compensation for play
	Tango::DevDouble	p25;
	//	P26:	The data transfer rate is set by P26 (ONLY for SSIencoder),   
	//  by which the encoder is read. The transferrate is dependent
	//   on the length of the cable by whichthe encoder is connected to the device. The shorter the cable, the encoder 
	//  can more quickly be read.
	//  Data transfer rate 1 to 10 (= 100 to 1000 kHz)
	Tango::DevUShort	p26;
	//	P27:	Limit switch type
	Tango::DevUShort	p27;
	//	P28:	Axis power option
	//  0 = Power stage is deactivated after power on
	//  1 = Power stage is activated after power on
	Tango::DevUShort	p28;
	//	P30:	For I4XM01 only!
	//  Frequency band setting 
	//  0 = manual
	//  1 = automatic
	Tango::DevUShort	p30;
	//	P31:	For I4XM01 only!
	//  Frequency and ramp predivider (only if P30 = 0, manual)
	Tango::DevUShort	p31;
	//	P32:	Positioning ramp shape
	//  0 = s-shape
	//  1 = linear ramp
	//  Remark: The s-shape ramp can be modified with P33 parameter.
	Tango::DevUShort	p32;
	//	P33:	Arc value setting for s-sharpe ramp
	//  Values:
	//  OMC: 1 to 8191
	//  TMC: 1:23767
	Tango::DevLong	p33;
	//	P34:	Encoder type
	Tango::DevUShort	p34;
	//	P35:	Encoder resolution for SSI and EnDat encoder
	//  Enter max. encoder resolution in Bit (max 48 Bit)
	Tango::DevUShort	p35;
	//	P36:	Encoder function	
	//  0 - counter
	//  1 - counter + SFI
	Tango::DevUShort	p36;
	//	P37:	Encoder tolerance for SFI
	Tango::DevDouble	p37;
	//	P38:	Encoder preferential direction of rotation
	//  0 = + (positive)
	//  1 = - (negative)
	Tango::DevUShort	p38;
	//	P39:	Encoder conversion factor
	//  
	//  thread/encoder_step_prrevolution
	Tango::DevDouble	p39;
	//	P40:	Stop current in 0.01 A
	Tango::DevULong	p40;
	//	P41:	Run current in 0.01 A
	Tango::DevULong	p41;
	//	P42:	Boost current in 0.01 A
	Tango::DevULong	p42;
	//	P43:	Current hold time in msec
	Tango::DevULong	p43;
	//	P44:	for I4XM01 only!
	//  Origin of the control pulses for the axis
	Tango::DevShort	p44;
	//	P45:	Step resolution 0 .. 13 = [1, .. 1/512]
	//      [ 0,   1,    2,       3,    4,    5,     6,     7,       8,]
	//  = [1/1, 1/2, 1/2.5, 1/4, 1/5, 1/8, 1/10, 1/16, 1/20]
	//      [9,      10     11,      12,      13     ]
	//  = [1/32, 1/64, 1/128, 1/256, 1/512]
	//  For I1AM step resolution from 1/1 to 1/128 step
	Tango::DevUShort	p45;
	//	P50:	Devider for control pulses, only I4XM01
	//  pulses= 1/(n+1):
	//  example for pulses = 1/4 = 1/(3+1), n=3
	//  n = 0 .. 5
	Tango::DevUShort	p50;
	//	P51:	Pulses width: (n+1)*100 ns only I4XM01
	//  Example for 2000 ns = (19+1)*100 ns
	//  n=0 .. 255
	Tango::DevUShort	p51;
	//	P53:	Power stage monitoring
	//  0 = off
	//  1 = on
	Tango::DevUShort	p53;
	//	P55:	Motor temperature warning in 1/10 C
	Tango::DevLong	p55;
	//	P56:	Motor temperature shut-off in 1/10 C
	Tango::DevLong	p56;
	//	P57:	Resolver voltage
	//  n = 3 .. 10 (Volt)
	Tango::DevUShort	p57;
	//	P58:	Resolver ratio (ratio of primary to secondary winding)
	//  [0,    1,    2,    3, 4]
	//  [1/8, 1/4, 1/2, 1, 2]
	Tango::DevUShort	p58;

//	Attribute data members
public:
	Tango::DevDouble	*attr_position_read;
	Tango::DevDouble	*attr_absolute_counter_read;
	Tango::DevLong	*attr_axis_status_read;
	Tango::DevBoolean	*attr_activate_read;
	Tango::DevDouble	*attr_power_stage_temperature_read;
	Tango::DevDouble	*attr_motor_temperature_read;
	Tango::DevDouble	*attr_ramp_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	PhyMotionMotor(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	PhyMotionMotor(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	PhyMotionMotor(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~PhyMotionMotor() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Read the device properties from database
	 */
	void get_device_property();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : PhyMotionMotor::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);
	//--------------------------------------------------------
	/*
	 *	Method      : PhyMotionMotor::write_attr_hardware()
	 *	Description : Hardware writing for attributes.
	 */
	//--------------------------------------------------------
	virtual void write_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute position related methods
 *	Description: For read - this is P20 parameter - mechanical zero counter
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_position(Tango::Attribute &attr);
	virtual void write_position(Tango::WAttribute &attr);
	virtual bool is_position_allowed(Tango::AttReqType type);
/**
 *	Attribute absolute_counter related methods
 *	Description: P21 Reading
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_absolute_counter(Tango::Attribute &attr);
	virtual bool is_absolute_counter_allowed(Tango::AttReqType type);
/**
 *	Attribute axis_status related methods
 *	Description: 
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_axis_status(Tango::Attribute &attr);
	virtual bool is_axis_status_allowed(Tango::AttReqType type);
/**
 *	Attribute activate related methods
 *	Description: Enable current in motor
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_activate(Tango::Attribute &attr);
	virtual void write_activate(Tango::WAttribute &attr);
	virtual bool is_activate_allowed(Tango::AttReqType type);
/**
 *	Attribute power_stage_temperature related methods
 *	Description: Read parameter P49
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_power_stage_temperature(Tango::Attribute &attr);
	virtual bool is_power_stage_temperature_allowed(Tango::AttReqType type);
/**
 *	Attribute motor_temperature related methods
 *	Description: read parameter P54
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_motor_temperature(Tango::Attribute &attr);
	virtual bool is_motor_temperature_allowed(Tango::AttReqType type);
/**
 *	Attribute ramp related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_ramp(Tango::Attribute &attr);
	virtual void write_ramp(Tango::WAttribute &attr);
	virtual bool is_ramp_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : PhyMotionMotor::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();




//	Command related methods
public:
	/**
	 *	Command Stop related method
	 *	Description: 
	 *
	 */
	virtual void stop();
	virtual bool is_Stop_allowed(const CORBA::Any &any);
	/**
	 *	Command ResetStatus related method
	 *	Description: 
	 *
	 */
	virtual void reset_status();
	virtual bool is_ResetStatus_allowed(const CORBA::Any &any);
	/**
	 *	Command SetMechanicalZeroCounter related method
	 *	Description: Just set P20
	 *
	 *	@param argin 
	 */
	virtual void set_mechanical_zero_counter(Tango::DevDouble argin);
	virtual bool is_SetMechanicalZeroCounter_allowed(const CORBA::Any &any);
	/**
	 *	Command goTo related method
	 *	Description: 
	 *
	 *	@param argin 
	 */
	virtual void go_to(Tango::DevDouble argin);
	virtual bool is_goTo_allowed(const CORBA::Any &any);
	/**
	 *	Command setAccel related method
	 *	Description: 
	 *
	 *	@param argin 
	 */
	virtual void set_accel(Tango::DevDouble argin);
	virtual bool is_setAccel_allowed(const CORBA::Any &any);
	/**
	 *	Command setDecel related method
	 *	Description: 
	 *
	 *	@param argin 
	 */
	virtual void set_decel(Tango::DevDouble argin);
	virtual bool is_setDecel_allowed(const CORBA::Any &any);
	/**
	 *	Command setSpeed related method
	 *	Description: 
	 *
	 *	@param argin 
	 */
	virtual void set_speed(Tango::DevDouble argin);
	virtual bool is_setSpeed_allowed(const CORBA::Any &any);
	/**
	 *	Command getMZC related method
	 *	Description: 
	 *
	 *	@returns 
	 */
	virtual Tango::DevDouble get_mzc();
	virtual bool is_getMZC_allowed(const CORBA::Any &any);


	//--------------------------------------------------------
	/**
	 *	Method      : PhyMotionMotor::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(PhyMotionMotor::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes

/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::Additional Method prototypes
};

/*----- PROTECTED REGION ID(PhyMotionMotor::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	PhyMotionMotor::Additional Classes Definitions

}	//	End of namespace

#endif   //	PhyMotionMotor_H
