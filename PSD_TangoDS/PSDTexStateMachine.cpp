/*----- PROTECTED REGION ID(PSDTexStateMachine.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        PSDTexStateMachine.cpp
//
// description : State machine file for the PSDTex class
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

#include <PSDTex.h>

/*----- PROTECTED REGION END -----*/	//	PSDTex::PSDTexStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================


namespace PSDTex_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_active_allowed()
 *	Description : Execution allowed for active attribute
 */
//--------------------------------------------------------
bool PSDTex::is_active_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for active attribute in Write access.
	/*----- PROTECTED REGION ID(PSDTex::activeStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::activeStateAllowed_WRITE

	//	Not any excluded states for active attribute in read access.
	/*----- PROTECTED REGION ID(PSDTex::activeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::activeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_version_allowed()
 *	Description : Execution allowed for version attribute
 */
//--------------------------------------------------------
bool PSDTex::is_version_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for version attribute in read access.
	/*----- PROTECTED REGION ID(PSDTex::versionStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::versionStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_preselection_allowed()
 *	Description : Execution allowed for preselection attribute
 */
//--------------------------------------------------------
bool PSDTex::is_preselection_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for preselection attribute in Write access.
	/*----- PROTECTED REGION ID(PSDTex::preselectionStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::preselectionStateAllowed_WRITE

	//	Not any excluded states for preselection attribute in read access.
	/*----- PROTECTED REGION ID(PSDTex::preselectionStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::preselectionStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_value_allowed()
 *	Description : Execution allowed for value attribute
 */
//--------------------------------------------------------
bool PSDTex::is_value_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for value attribute in read access.
	/*----- PROTECTED REGION ID(PSDTex::valueStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::valueStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_zeroPoint_allowed()
 *	Description : Execution allowed for zeroPoint attribute
 */
//--------------------------------------------------------
bool PSDTex::is_zeroPoint_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for zeroPoint attribute in read access.
	/*----- PROTECTED REGION ID(PSDTex::zeroPointStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::zeroPointStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_binning_allowed()
 *	Description : Execution allowed for binning attribute
 */
//--------------------------------------------------------
bool PSDTex::is_binning_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for binning attribute in read access.
	/*----- PROTECTED REGION ID(PSDTex::binningStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::binningStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_detectorSize_allowed()
 *	Description : Execution allowed for detectorSize attribute
 */
//--------------------------------------------------------
bool PSDTex::is_detectorSize_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for detectorSize attribute in read access.
	/*----- PROTECTED REGION ID(PSDTex::detectorSizeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::detectorSizeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_roiOffset_allowed()
 *	Description : Execution allowed for roiOffset attribute
 */
//--------------------------------------------------------
bool PSDTex::is_roiOffset_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for roiOffset attribute in read access.
	/*----- PROTECTED REGION ID(PSDTex::roiOffsetStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::roiOffsetStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_roiSize_allowed()
 *	Description : Execution allowed for roiSize attribute
 */
//--------------------------------------------------------
bool PSDTex::is_roiSize_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for roiSize attribute in read access.
	/*----- PROTECTED REGION ID(PSDTex::roiSizeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::roiSizeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_image_allowed()
 *	Description : Execution allowed for image attribute
 */
//--------------------------------------------------------
bool PSDTex::is_image_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for image attribute in read access.
	/*----- PROTECTED REGION ID(PSDTex::imageStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::imageStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_Start_allowed()
 *	Description : Execution allowed for Start attribute
 */
//--------------------------------------------------------
bool PSDTex::is_Start_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Start command.
	/*----- PROTECTED REGION ID(PSDTex::StartStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::StartStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_Stop_allowed()
 *	Description : Execution allowed for Stop attribute
 */
//--------------------------------------------------------
bool PSDTex::is_Stop_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Stop command.
	/*----- PROTECTED REGION ID(PSDTex::StopStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::StopStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_Clear_allowed()
 *	Description : Execution allowed for Clear attribute
 */
//--------------------------------------------------------
bool PSDTex::is_Clear_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Clear command.
	/*----- PROTECTED REGION ID(PSDTex::ClearStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::ClearStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_Prepare_allowed()
 *	Description : Execution allowed for Prepare attribute
 */
//--------------------------------------------------------
bool PSDTex::is_Prepare_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Prepare command.
	/*----- PROTECTED REGION ID(PSDTex::PrepareStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::PrepareStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_Resume_allowed()
 *	Description : Execution allowed for Resume attribute
 */
//--------------------------------------------------------
bool PSDTex::is_Resume_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Resume command.
	/*----- PROTECTED REGION ID(PSDTex::ResumeStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::ResumeStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_On_allowed()
 *	Description : Execution allowed for On attribute
 */
//--------------------------------------------------------
bool PSDTex::is_On_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for On command.
	/*----- PROTECTED REGION ID(PSDTex::OnStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::OnStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_Off_allowed()
 *	Description : Execution allowed for Off attribute
 */
//--------------------------------------------------------
bool PSDTex::is_Off_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Off command.
	/*----- PROTECTED REGION ID(PSDTex::OffStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::OffStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_Reset_allowed()
 *	Description : Execution allowed for Reset attribute
 */
//--------------------------------------------------------
bool PSDTex::is_Reset_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Reset command.
	/*----- PROTECTED REGION ID(PSDTex::ResetStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::ResetStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_GetProperties_allowed()
 *	Description : Execution allowed for GetProperties attribute
 */
//--------------------------------------------------------
bool PSDTex::is_GetProperties_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for GetProperties command.
	/*----- PROTECTED REGION ID(PSDTex::GetPropertiesStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::GetPropertiesStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : PSDTex::is_SetProperties_allowed()
 *	Description : Execution allowed for SetProperties attribute
 */
//--------------------------------------------------------
bool PSDTex::is_SetProperties_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SetProperties command.
	/*----- PROTECTED REGION ID(PSDTex::SetPropertiesStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	PSDTex::SetPropertiesStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(PSDTex::PSDTexStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	PSDTex::PSDTexStateAllowed.AdditionalMethods

}	//	End of namespace