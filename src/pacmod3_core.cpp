// Copyright (c) 2019 AutonomouStuff, LLC
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#include "pacmod3/pacmod3_core.h"

namespace AS
{
namespace Drivers
{
namespace PACMod3
{

// Global
constexpr uint32_t GlobalCmdMsg::CAN_ID;
constexpr uint32_t GlobalRptMsg::CAN_ID;
constexpr uint32_t GlobalRpt2Msg::CAN_ID;
constexpr uint32_t SupervisoryCtrlMsg::CAN_ID;

// System Commands
constexpr uint32_t AccelCmdMsg::CAN_ID;
constexpr uint32_t BrakeCmdMsg::CAN_ID;
constexpr uint32_t BrakeDeccelCmdMsg::CAN_ID;
constexpr uint32_t CabinClimateCmdMsg::CAN_ID;
constexpr uint32_t CruiseControlButtonsCmdMsg::CAN_ID;
constexpr uint32_t DashControlsLeftCmdMsg::CAN_ID;
constexpr uint32_t DashControlsRightCmdMsg::CAN_ID;
constexpr uint32_t EngineBrakeCmdMsg::CAN_ID;
constexpr uint32_t HazardLightCmdMsg::CAN_ID;
constexpr uint32_t HeadlightCmdMsg::CAN_ID;
constexpr uint32_t HornCmdMsg::CAN_ID;
constexpr uint32_t MarkerLampCmdMsg::CAN_ID;
constexpr uint32_t MediaControlsCmdMsg::CAN_ID;
constexpr uint32_t ParkingBrakeCmdMsg::CAN_ID;
constexpr uint32_t RearPassDoorCmdMsg::CAN_ID;
constexpr uint32_t SafetyBrakeCmdMsg::CAN_ID;
constexpr uint32_t SafetyFuncCmdMsg::CAN_ID;
constexpr uint32_t ShiftCmdMsg::CAN_ID;
constexpr uint32_t SprayerCmdMsg::CAN_ID;
constexpr uint32_t SteerCmdMsg::CAN_ID;
constexpr uint32_t TurnSignalCmdMsg::CAN_ID;
constexpr uint32_t UserNotificationCmdMsg::CAN_ID;
constexpr uint32_t WiperCmdMsg::CAN_ID;

constexpr uint8_t SystemCmdBool::DATA_LENGTH;
constexpr uint8_t SystemCmdInt::DATA_LENGTH;
constexpr uint8_t SystemCmdFloat::DATA_LENGTH;
constexpr uint8_t SteerCmdMsg::DATA_LENGTH;
constexpr uint8_t GlobalCmdMsg::DATA_LENGTH;
constexpr uint8_t BrakeDeccelCmdMsg::DATA_LENGTH;
constexpr uint8_t CabinClimateCmdMsg::DATA_LENGTH;
constexpr uint8_t SafetyBrakeCmdMsg::DATA_LENGTH;
constexpr uint8_t SafetyFuncCmdMsg::DATA_LENGTH;
constexpr uint8_t SupervisoryCtrlMsg::DATA_LENGTH;
constexpr uint8_t UserNotificationCmdMsg::DATA_LENGTH;

// System Reports
constexpr uint32_t AccelRptMsg::CAN_ID;
constexpr uint32_t BrakeRptMsg::CAN_ID;
constexpr uint32_t BrakeDeccelRptMsg::CAN_ID;
constexpr uint32_t CabinClimateRptMsg::CAN_ID;
constexpr uint32_t CruiseControlButtonsRptMsg::CAN_ID;
constexpr uint32_t DashControlsLeftRptMsg::CAN_ID;
constexpr uint32_t DashControlsRightRptMsg::CAN_ID;
constexpr uint32_t EngineBrakeRptMsg::CAN_ID;
constexpr uint32_t HazardLightRptMsg::CAN_ID;
constexpr uint32_t HeadlightRptMsg::CAN_ID;
constexpr uint32_t HornRptMsg::CAN_ID;
constexpr uint32_t MediaControlsRptMsg::CAN_ID;
constexpr uint32_t MarkerLampRptMsg::CAN_ID;
constexpr uint32_t ParkingBrakeRptMsg::CAN_ID;
constexpr uint32_t RearPassDoorRptMsg::CAN_ID;
constexpr uint32_t SafetyBrakeRptMsg::CAN_ID;
constexpr uint32_t SafetyFuncRptMsg::CAN_ID;
constexpr uint32_t ShiftRptMsg::CAN_ID;
constexpr uint32_t SprayerRptMsg::CAN_ID;
constexpr uint32_t SteerRptMsg::CAN_ID;
constexpr uint32_t TurnSignalRptMsg::CAN_ID;
constexpr uint32_t WiperRptMsg::CAN_ID;

// System Aux Reports
constexpr uint32_t AccelAuxRptMsg::CAN_ID;
constexpr uint32_t BrakeAuxRptMsg::CAN_ID;
constexpr uint32_t BrakeDeccelAuxRptMsg::CAN_ID;
constexpr uint32_t HeadlightAuxRptMsg::CAN_ID;
constexpr uint32_t ShiftAuxRptMsg::CAN_ID;
constexpr uint32_t SteerAuxRptMsg::CAN_ID;
constexpr uint32_t TurnAuxRptMsg::CAN_ID;
constexpr uint32_t WiperAuxRptMsg::CAN_ID;

// Module Reports 
constexpr uint32_t ComponentRptMsg00::CAN_ID;
constexpr uint32_t ComponentRptMsg01::CAN_ID;
constexpr uint32_t ComponentRptMsg02::CAN_ID;
constexpr uint32_t ComponentRptMsg03::CAN_ID;
constexpr uint32_t SoftwareVerRptMsg00::CAN_ID;
constexpr uint32_t SoftwareVerRptMsg01::CAN_ID;
constexpr uint32_t SoftwareVerRptMsg02::CAN_ID;
constexpr uint32_t SoftwareVerRptMsg03::CAN_ID;
constexpr uint32_t EStopRptMsg::CAN_ID;
constexpr uint32_t WatchdogRptMsg::CAN_ID;

// Misc. Reports
constexpr uint32_t AngVelRptMsg::CAN_ID;
constexpr uint32_t BrakeMotorRpt1Msg::CAN_ID;
constexpr uint32_t BrakeMotorRpt2Msg::CAN_ID;
constexpr uint32_t BrakeMotorRpt3Msg::CAN_ID;
constexpr uint32_t DateTimeRptMsg::CAN_ID;
constexpr uint32_t DetectedObjectRptMsg::CAN_ID;
constexpr uint32_t DoorRptMsg::CAN_ID;
constexpr uint32_t DriveTrainRptMsg::CAN_ID;
constexpr uint32_t EngineRptMsg::CAN_ID;
constexpr uint32_t InteriorLightsRptMsg::CAN_ID;
constexpr uint32_t LatLonHeadingRptMsg::CAN_ID;
constexpr uint32_t LinearAccelRptMsg::CAN_ID;
constexpr uint32_t OccupancyRptMsg::CAN_ID;
constexpr uint32_t RearLightsRptMsg::CAN_ID;
constexpr uint32_t SteerMotorRpt1Msg::CAN_ID;
constexpr uint32_t SteerMotorRpt2Msg::CAN_ID;
constexpr uint32_t SteerMotorRpt3Msg::CAN_ID;
constexpr uint32_t VehicleSpeedRptMsg::CAN_ID;
constexpr uint32_t VinRptMsg::CAN_ID;
constexpr uint32_t WheelSpeedRptMsg::CAN_ID;
constexpr uint32_t YawRateRptMsg::CAN_ID;

constexpr uint32_t AccelCmdLimitRptMsg::CAN_ID;
constexpr uint32_t BrakeCmdLimitRptMsg::CAN_ID;
constexpr uint32_t SteerCmdLimitRptMsg::CAN_ID;

// Extra Messages
constexpr uint32_t HydraulicsCmdMsg::CAN_ID;
constexpr uint32_t RPMDialCmdMsg::CAN_ID;
constexpr uint32_t WorklightsCmdMsg::CAN_ID;

constexpr uint8_t HydraulicsCmdMsg::DATA_LENGTH;

constexpr uint32_t HydraulicsRptMsg::CAN_ID;
constexpr uint32_t HydraulicsAuxRptMsg::CAN_ID;
constexpr uint32_t RPMDialRptMsg::CAN_ID;
constexpr uint32_t WorklightsRptMsg::CAN_ID;

// Optional Debug Messages
constexpr uint32_t FaultDebugRptMsg00::CAN_ID;
constexpr uint32_t FaultDebugRptMsg01::CAN_ID;
constexpr uint32_t JoystickRptMsg::CAN_ID;
constexpr uint32_t MFAButtonsRptMsg::CAN_ID;

/*** TX Messages   ***/

  std::shared_ptr<Pacmod3TxMsg> Pacmod3TxMsg::make_message(const uint32_t & can_id)
  {
    switch (can_id) {
    // System Reports
      case AccelRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new AccelRptMsg);
        break;
      case BrakeRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new BrakeRptMsg);
        break;
      case BrakeDeccelRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new BrakeDeccelRptMsg);
        break;
      case CabinClimateRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new CabinClimateRptMsg);
        break;
      case CruiseControlButtonsRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new CruiseControlButtonsRptMsg);
        break;
      case DashControlsLeftRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new DashControlsLeftRptMsg);
        break;
      case DashControlsRightRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new DashControlsRightRptMsg);
        break;
      case EngineBrakeRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new EngineBrakeRptMsg);
        break;
      case GlobalRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new GlobalRptMsg);
        break;
      case GlobalRpt2Msg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new GlobalRpt2Msg);
        break;
      case HeadlightRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new HeadlightRptMsg);
        break;
      case HornRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new HornRptMsg);
        break;
      case MediaControlsRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new MediaControlsRptMsg);
        break;
      case ParkingBrakeRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new ParkingBrakeRptMsg);
        break;
      case RearPassDoorRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new RearPassDoorRptMsg);
        break;
      case SafetyBrakeRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SafetyBrakeRptMsg);
        break;
      case SafetyFuncRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SafetyFuncRptMsg);
        break;
      case ShiftRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new ShiftRptMsg);
        break;
      case SteerRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SteerRptMsg);
        break;
      case TurnSignalRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new TurnSignalRptMsg);
        break;
      case WiperRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new WiperRptMsg);
        break;
    // AUX Reports
      case AccelAuxRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new AccelAuxRptMsg);
        break;
      case BrakeAuxRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new BrakeAuxRptMsg);
        break;
      case BrakeDeccelAuxRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new BrakeDeccelAuxRptMsg);
        break;
      case HeadlightAuxRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new HeadlightAuxRptMsg);
        break;
      case ShiftAuxRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new ShiftAuxRptMsg);
        break;
      case SteerAuxRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SteerAuxRptMsg);
        break;
      case TurnAuxRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new TurnAuxRptMsg);
        break;
      case WiperAuxRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new WiperAuxRptMsg);
        break;
    // Module Reports
      case ComponentRptMsg00::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new ComponentRptMsg00);
        break;
      case ComponentRptMsg01::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new ComponentRptMsg01);
        break;
      case ComponentRptMsg02::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new ComponentRptMsg02);
        break;
      case ComponentRptMsg03::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new ComponentRptMsg03);
        break;
      case SoftwareVerRptMsg00::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SoftwareVerRptMsg00);
        break;
      case SoftwareVerRptMsg01::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SoftwareVerRptMsg01);
        break;
      case SoftwareVerRptMsg02::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SoftwareVerRptMsg02);
        break;
      case SoftwareVerRptMsg03::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SoftwareVerRptMsg03);
        break;
      case EStopRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new EStopRptMsg);
        break;
      case WatchdogRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new WatchdogRptMsg);
        break;

    // Misc Reports
      case AngVelRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new AngVelRptMsg);
        break;
      case BrakeMotorRpt1Msg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new BrakeMotorRpt1Msg);
        break;
      case BrakeMotorRpt2Msg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new BrakeMotorRpt2Msg);
        break;
      case BrakeMotorRpt3Msg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new BrakeMotorRpt3Msg);
        break;
      case DateTimeRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new DateTimeRptMsg);
        break;
      case DetectedObjectRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new DetectedObjectRptMsg);
        break;
      case DoorRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new DoorRptMsg);
        break;
      case DriveTrainRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new DriveTrainRptMsg);
        break;
      case EngineRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new EngineRptMsg);
        break;
      case InteriorLightsRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new InteriorLightsRptMsg);
        break;
      case LatLonHeadingRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new LatLonHeadingRptMsg);
        break;
      case LinearAccelRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new LinearAccelRptMsg);
        break;
      case OccupancyRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new OccupancyRptMsg);
        break;
      case RearLightsRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new RearLightsRptMsg);
        break;
      case SteerMotorRpt1Msg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SteerMotorRpt1Msg);
        break;
      case SteerMotorRpt2Msg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SteerMotorRpt2Msg);
        break;
      case SteerMotorRpt3Msg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SteerMotorRpt3Msg);
        break;
      case VehicleSpeedRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new VehicleSpeedRptMsg);
        break;
      case VinRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new VinRptMsg);
        break;
      case WheelSpeedRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new WheelSpeedRptMsg);
        break;
      case YawRateRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new YawRateRptMsg);
        break;
      case AccelCmdLimitRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new AccelCmdLimitRptMsg);
        break;
      case BrakeCmdLimitRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new BrakeCmdLimitRptMsg);
        break;
      case SteerCmdLimitRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new SteerCmdLimitRptMsg);
        break;
    // Extra Messages
      case HydraulicsRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new HydraulicsRptMsg);
        break;
      case HydraulicsAuxRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new HydraulicsAuxRptMsg);
        break;
      case RPMDialRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new RPMDialRptMsg);
        break;
      case WorklightsRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new WorklightsRptMsg);
        break;
    // Optional Debug Messages
      case FaultDebugRptMsg00::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new FaultDebugRptMsg);
        break;
      case FaultDebugRptMsg01::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new FaultDebugRptMsg);
        break;
      case JoystickRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new JoystickRptMsg);
        break;
      case MFAButtonsRptMsg::CAN_ID:
        return std::shared_ptr<Pacmod3TxMsg>(new MFAButtonsRptMsg);
        break;
      default:
        return nullptr;
    }
  }

  bool Pacmod3TxMsg::isSystem()
  {
    return false;
  }

  // General Classes
    SystemRptMsg::SystemRptMsg() :
      Pacmod3TxMsg(),
      enabled(false),
      override_active(false),
      command_output_fault(false),
      input_output_fault(false),
      output_reported_fault(false),
      pacmod_fault(false),
      vehicle_fault(false),
      command_timeout(false)
    {}

    bool SystemRptMsg::isSystem()
    {
      return true;
    }

    SystemCmdLimitRptMsg::SystemCmdLimitRptMsg() :
      Pacmod3TxMsg(),
      sys_cmd_limit(0),
      limited_sys_cmd(0)
      {}

    SystemRptBoolMsg::SystemRptBoolMsg() :
      SystemRptMsg(),
      manual_input(false),
      command(false),
      output(false)
    {}

    SystemRptIntMsg::SystemRptIntMsg() :
      SystemRptMsg(),
      manual_input(0),
      command(0),
      output(0)
    {}

    SystemRptFloatMsg::SystemRptFloatMsg() :
      SystemRptMsg(),
      manual_input(0),
      command(0),
      output(0)
    {}

    void SystemCmdLimitRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      temp = (static_cast<int16_t>(in[0]) << 8) | in[1];
      sys_cmd_limit = static_cast<double>(temp / 1000.0);

      temp = (static_cast<int16_t>(in[2]) << 8) | in[3];
      limited_sys_cmd = static_cast<double>(temp / 1000.0);

    }

    void SystemRptBoolMsg::parse(const uint8_t * in)
    {
      enabled = ((in[0] & 0x01) > 0);
      override_active = ((in[0] & 0x02) > 0);
      command_output_fault = ((in[0] & 0x04) > 0);
      input_output_fault = ((in[0] & 0x08) > 0);
      output_reported_fault = ((in[0] & 0x10) > 0);
      pacmod_fault = ((in[0] & 0x20) > 0);
      vehicle_fault = ((in[0] & 0x40) > 0);
      command_timeout = ((in[0] & 0x80) > 0);

      manual_input = ((in[1] & 0x01) > 0);
      command = ((in[2] & 0x01) > 0);
      output = ((in[3] & 0x01) > 0);
    }

    void SystemRptIntMsg::parse(const uint8_t * in)
    {
      enabled = ((in[0] & 0x01) > 0);
      override_active = ((in[0] & 0x02) > 0);
      command_output_fault = ((in[0] & 0x04) > 0);
      input_output_fault = ((in[0] & 0x08) > 0);
      output_reported_fault = ((in[0] & 0x10) > 0);
      pacmod_fault = ((in[0] & 0x20) > 0);
      vehicle_fault = ((in[0] & 0x40) > 0);
      command_timeout = ((in[0] & 0x80) > 0);

      manual_input = ((in[1] << 8) | in[2]);
      command = ((in[3] << 8) | in[3]);
      output = ((in[5] << 8) | in[6]);
    }

    void SystemRptFloatMsg::parse(const uint8_t * in)
    {
      enabled = ((in[0] & 0x01) > 0);
      override_active = ((in[0] & 0x02) > 0);
      command_output_fault = ((in[0] & 0x04) > 0);
      input_output_fault = ((in[0] & 0x08) > 0);
      output_reported_fault = ((in[0] & 0x10) > 0);
      pacmod_fault = ((in[0] & 0x20) > 0);
      vehicle_fault = ((in[0] & 0x40) > 0);
      command_timeout = ((in[0] & 0x80) > 0);

      int16_t temp;

      temp = (static_cast<int16_t>(in[1]) << 8) | in[2];
      manual_input = static_cast<double>(temp / 1000.0);

      temp = (static_cast<int16_t>(in[3]) << 8) | in[4];
      command = static_cast<double>(temp / 1000.0);

      temp = (static_cast<int16_t>(in[5]) << 8) | in[6];
      output = static_cast<double>(temp / 1000.0);
    }

    ComponentRptMsg::ComponentRptMsg() :
      Pacmod3TxMsg(),
      component_type(ComponentType::NONE),
      accel(false),
      brake(false),
      cruise_control_buttons(false),
      dash_controls_left(false),
      dash_controls_right(false),
      hazard_lights(false),
      headlight(false),
      horn(false),
      media_controls(false),
      parking_brake(false),
      shift(false),
      sprayer(false),
      steering(false),
      turn(false),
      wiper(false),
      watchdog(false),
      brake_deccel(false),
      rear_pass_door(false),
      engine_brake(false),
      marker_lamp(false),
      cabin_climate(false),
      cabin_fan_speed(false),
      cabin_temp(false),
      counter(0),
      complement(15),
      config_fault(false),
      can_timeout_fault(false),
      internal_supply_voltage_fault(false),
      supervisory_timeout(false),
      supervisory_sanity_fault(false)
    {}

    void ComponentRptMsg::parse(const uint8_t * in)
    {
      component_type = static_cast<ComponentType>(in[0] & 0x0F);

      accel = ((in[0] & 0x10) > 0);
      brake = ((in[0] & 0x20) > 0);
      cruise_control_buttons = ((in[0] & 0x40) > 0);
      dash_controls_left = ((in[0] & 0x80) > 0);

      dash_controls_right = ((in[1] & 0x01) > 0);
      hazard_lights = ((in[1] & 0x02) > 0);
      headlight = ((in[1] & 0x04) > 0);
      horn = ((in[1] & 0x08) > 0);
      media_controls = ((in[1] & 0x10) > 0);
      parking_brake = ((in[1] & 0x20) > 0);
      shift = ((in[1] & 0x40) > 0);
      sprayer = ((in[1] & 0x80) > 0);

      steering = ((in[2] & 0x01) > 0);
      turn = ((in[2] & 0x02) > 0);
      wiper = ((in[2] & 0x04) > 0);
      watchdog = ((in[2] & 0x08) > 0);
      brake_deccel = ((in[2] & 0x10) > 0);
      rear_pass_door = ((in[2] & 0x20) > 0);
      engine_brake = ((in[2] & 0x40) > 0);
      marker_lamp = ((in[2] & 0x80) > 0);

      cabin_climate = ((in[3] & 0x01) > 0);
      cabin_fan_speed = ((in[3] & 0x02) > 0);
      cabin_temp = ((in[3] & 0x04) > 0);

      counter = in[4] & 0x0F;
      complement = ((in[4] & 0xF0) >> 4);
      
      config_fault = ((in[5] & 0x01) > 0);
      can_timeout_fault = ((in[5] & 0x02) > 0);
      internal_supply_voltage_fault = ((in[5] & 0x04) > 0);
      supervisory_timeout = ((in[5] & 0x08) > 0);
      supervisory_sanity_fault = ((in[5] & 0x10) > 0);

    }

    SoftwareVersionRptMsg::SoftwareVersionRptMsg() :
      Pacmod3TxMsg(),
      mjr(0),
      mnr(0),
      patch(0),
      build0(0),
      build1(0),
      build2(0),
      build3(0)
    {}

    void SoftwareVersionRptMsg::parse(const uint8_t * in)
    {
      mjr = in[0];
      mnr = in[1];
      patch = in[2];
      build0 = in[3];
      build1 = in[4];
      build2 = in[5];
      build3 = in[6];
    }

    MotorRpt1Msg::MotorRpt1Msg() :
      Pacmod3TxMsg(),
      current(0),
      position(0)
    {}

    void MotorRpt1Msg::parse(const uint8_t * in)
    {
      int32_t temp;

      temp =
        (static_cast<int32_t>(in[0]) << 24) |
        (static_cast<int32_t>(in[1]) << 16) |
        (static_cast<int32_t>(in[2]) << 8) | in[3];
      current = static_cast<double>(temp / 1000.0);

      temp =
        (static_cast<int32_t>(in[4]) << 24) |
        (static_cast<int32_t>(in[5]) << 16) |
        (static_cast<int32_t>(in[6]) << 8) | in[7];
      position = static_cast<double>(temp / 1000.0);
    }

    MotorRpt2Msg::MotorRpt2Msg() :
      Pacmod3TxMsg(),
      encoder_temp(0),
      motor_temp(0),
      angular_speed(0)
    {}

    void MotorRpt2Msg::parse(const uint8_t * in)
    {
      int16_t temp16;
      int32_t temp32;

      temp16 = (static_cast<int16_t>(in[0]) << 8) | in[1];
      encoder_temp = static_cast<double>(temp16);

      temp16 = (static_cast<int16_t>(in[2]) << 8) | in[3];
      motor_temp = static_cast<double>(temp16);

      temp32 =
        (static_cast<int32_t>(in[7]) << 24) |
        (static_cast<int32_t>(in[6]) << 16) |
        (static_cast<int32_t>(in[5]) << 8) | in[4];
      angular_speed = static_cast<double>(temp32 / 10.0);
    }

    MotorRpt3Msg::MotorRpt3Msg() :
      Pacmod3TxMsg(),
      torque_output(0),
      torque_input(0)
    {}

    void MotorRpt3Msg::parse(const uint8_t * in)
    {
      int32_t temp;

      temp =
        (static_cast<int32_t>(in[0]) << 24) |
        (static_cast<int32_t>(in[1]) << 16) |
        (static_cast<int32_t>(in[2]) << 8) | in[3];
      torque_output = static_cast<double>(temp / 1000.0);

      temp =
        (static_cast<int32_t>(in[4]) << 24) |
        (static_cast<int32_t>(in[5]) << 16) |
        (static_cast<int32_t>(in[6]) << 8) | in[7];
      torque_input = static_cast<double>(temp / 1000.0);
    }

    EStopRptMsg::EStopRptMsg() :
      Pacmod3TxMsg(),
      estop_status(false),
      estop_fault(false)
    {}

    void EStopRptMsg::parse(const uint8_t * in)
    {
      estop_status = ((in[0] & 0x01) > 0);
      estop_fault = ((in[0] & 0x02) > 0);
    }

    WatchdogRptMsg::WatchdogRptMsg() :
      Pacmod3TxMsg(),
      global_enabled_flag(false),
      global_override_active(false),
      global_command_timeout_error(false),
      global_pacmod_subsystem_timeout(false),
      global_vehicle_can_timeout(false),
      global_pacmod_system_fault_active(false),
      global_config_fault_active(false),
      global_timeout(false),
      accel_enabled(false),
      accel_override_active(false),
      accel_command_output_fault(false),
      accel_input_output_fault(false),
      accel_output_reported_fault(false),
      accel_pacmod_fault(false),
      accel_vehicle_fault(false),
      accel_timeout(false),
      brake_enabled(false),
      brake_override_active(false),
      brake_command_output_fault(false),
      brake_input_output_fault(false),
      brake_output_reported_fault(false),
      brake_pacmod_fault(false),
      brake_vehicle_fault(false),
      brake_timeout(false),
      shift_enabled(false),
      shift_override_active(false),
      shift_command_output_fault(false),
      shift_input_output_fault(false),
      shift_output_reported_fault(false),
      shift_pacmod_fault(false),
      shift_vehicle_fault(false),
      shift_timeout(false),
      steer_enabled(false),
      steer_override_active(false),
      steer_command_output_fault(false),
      steer_input_output_fault(false),
      steer_output_reported_fault(false),
      steer_pacmod_fault(false),
      steer_vehicle_fault(false),
      steer_timeout(false),
      mod1_config_fault(false),
      mod1_can_timeout(false),
      mod1_counter_fault(false),
      mod2_config_fault(false),
      mod2_can_timeout(false),
      mod2_counter_fault(false),
      mod3_config_fault(false),
      mod3_can_timeout(false),
      mod3_counter_fault(false),
      mini1_rpt_timeout(false),
      mini1_config_fault(false),
      mini1_can_timeout(false),
      mini1_counter_fault(false),
      mini2_rpt_timeout(false),
      mini2_config_fault(false),
      mini2_can_timeout(false),
      mini2_counter_fault(false),
      mini3_rpt_timeout(false),
      mini3_config_fault(false),
      mini3_can_timeout(false),
      mini3_counter_fault(false),
      mod_system_present_fault(false),
      mini_system_present_fault(false),
      global_internal_power_supply_fault(false)
    {}
    
    void WatchdogRptMsg::parse(const uint8_t * in)
    {
      global_enabled_flag = ((in[0] & 0x01) > 0);
      global_override_active = ((in[0] & 0x02) > 0);
      global_command_timeout_error = ((in[0] & 0x04) > 0);
      global_pacmod_subsystem_timeout = ((in[0] & 0x08) > 0);
      global_vehicle_can_timeout = ((in[0] & 0x10) > 0);
      global_pacmod_system_fault_active = ((in[0] & 0x20) > 0);
      global_config_fault_active = ((in[0] & 0x40) > 0);
      global_timeout = ((in[0] & 0x80) > 0);

      accel_enabled = ((in[1] & 0x01) > 0);
      accel_override_active =  ((in[1] & 0x02) > 0);
      accel_command_output_fault = ((in[1] & 0x04) > 0);
      accel_input_output_fault = ((in[1] & 0x08) > 0);
      accel_output_reported_fault = ((in[1] & 0x10) > 0);
      accel_pacmod_fault = ((in[1] & 0x20) > 0);
      accel_vehicle_fault = ((in[1] & 0x40) > 0);
      accel_timeout = ((in[1] & 0x80) > 0); 
      
      brake_enabled = ((in[2] & 0x01) > 0);
      brake_override_active = ((in[2] & 0x02) > 0);
      brake_command_output_fault = ((in[2] & 0x04) > 0);
      brake_input_output_fault = ((in[2] & 0x08) > 0);
      brake_output_reported_fault = ((in[2] & 0x10) > 0);
      brake_pacmod_fault = ((in[2] & 0x20) > 0);
      brake_vehicle_fault = ((in[2] & 0x40) > 0);
      brake_timeout =((in[2] & 0x80) > 0);

      shift_enabled = ((in[3] & 0x01) > 0);
      shift_override_active = ((in[3] & 0x02) > 0);
      shift_command_output_fault = ((in[3] & 0x04) > 0);
      shift_input_output_fault = ((in[3] & 0x08) > 0);
      shift_output_reported_fault = ((in[3] & 0x10) > 0);
      shift_pacmod_fault = ((in[3] & 0x20) > 0);
      shift_vehicle_fault = ((in[3] & 0x40) > 0);
      shift_timeout = ((in[3] & 0x80) > 0);
      
      steer_enabled = ((in[4] & 0x01) > 0);
      steer_override_active = ((in[4] & 0x02) > 0);
      steer_command_output_fault = ((in[4] & 0x04) > 0);
      steer_input_output_fault = ((in[4] & 0x08) > 0);
      steer_output_reported_fault = ((in[4] & 0x10) > 0);
      steer_pacmod_fault = ((in[4] & 0x20) > 0);
      steer_vehicle_fault = ((in[4] & 0x40) > 0);
      steer_timeout = ((in[4] & 0x80) > 0);
      
      mod1_config_fault = ((in[5] & 0x01) > 0);
      mod1_can_timeout = ((in[5] & 0x02) > 0);
      mod1_counter_fault = ((in[5] & 0x04) > 0);
      mod2_config_fault = ((in[5] & 0x08) > 0);
      mod2_can_timeout = ((in[5] & 0x10) > 0);
      mod2_counter_fault = ((in[5] & 0x20) > 0);
      mod3_config_fault = ((in[5] & 0x40) > 0);
      mod3_can_timeout = ((in[5] & 0x80) > 0);

      mod3_counter_fault = ((in[6] & 0x01) > 0);
      mini1_rpt_timeout = ((in[6] & 0x02) > 0);
      mini1_config_fault = ((in[6] & 0x04) > 0);
      mini1_can_timeout = ((in[6] & 0x08) > 0);
      mini1_counter_fault = ((in[6] & 0x10) > 0);
      mini2_rpt_timeout = ((in[6] & 0x20) > 0);
      mini2_config_fault = ((in[6] & 0x40) > 0);
      mini2_can_timeout = ((in[6] & 0x80) > 0);
      
      mini2_counter_fault = ((in[7] & 0x01) > 0);
      mini3_rpt_timeout = ((in[7] & 0x02) > 0);
      mini3_config_fault = ((in[7] & 0x04) > 0);
      mini3_can_timeout = ((in[7] & 0x08) > 0);
      mini3_counter_fault = ((in[7] & 0x10) > 0);
      mod_system_present_fault = ((in[7] & 0x20) > 0);
      mini_system_present_fault = ((in[7] & 0x40) > 0);
      global_internal_power_supply_fault = ((in[7] & 0x80) > 0);
    }

  // Global Report
    GlobalRptMsg::GlobalRptMsg() :
      Pacmod3TxMsg(),
      enabled(false),
      override_active(false),
      user_can_timeout(false),
      steering_can_timeout(false),
      brake_can_timeout(false),
      subsystem_can_timeout(false),
      vehicle_can_timeout(false),
      pacmod_sys_fault_active(false),
      supervisory_enable_required(false),
      config_fault_active(false),
      user_can_read_errors(0)
    {}

    void GlobalRptMsg::parse(const uint8_t * in)
    {
      enabled = in[0] & 0x01;
      override_active = ((in[0] & 0x02) > 0);
      user_can_timeout = ((in[0] & 0x04) > 0);
      steering_can_timeout = ((in[0] & 0x08) > 0);
      brake_can_timeout = ((in[0] & 0x10) > 0);
      subsystem_can_timeout = ((in[0] & 0x20) > 0);
      vehicle_can_timeout = ((in[0] & 0x40) > 0);
      pacmod_sys_fault_active = ((in[0] & 0x80) > 0);
      supervisory_enable_required = ((in[1] & 0x02) > 0);
      config_fault_active = ((in[1] & 0x01) > 0);
      user_can_read_errors = ((in[6] << 8) | in[7]);
    }

    GlobalRpt2Msg::GlobalRpt2Msg() :
      Pacmod3TxMsg(),
      system_enabled(false),
      system_override_active(false),
      system_fault_active(false),
      supervisory_enable_required(false)
    {}

    void GlobalRpt2Msg::parse(const uint8_t * in)
    {
      system_enabled = in[0] & 0x01;
      system_override_active = ((in[0] & 0x02) > 0);
      system_fault_active = ((in[0] & 0x04) > 0);
      supervisory_enable_required = ((in[0] & 0x08) > 0);
    }

    CabinClimateRptMsg::CabinClimateRptMsg() :
      SystemRptMsg(),
      man_ac_off_on(0),
      man_max_ac_off_on(0),
      man_defrost_off_on(0),
      man_max_defrost_off_on(0),
      man_dir_up_off_on(0),
      man_dir_down_off_on(0),
      cmd_ac_off_on(0),
      cmd_max_ac_off_on(0),
      cmd_defrost_off_on(0),
      cmd_max_defrost_off_on(0),
      cmd_dir_up_off_on(0),
      cmd_dir_down_off_on(0),
      out_ac_off_on(0),
      out_max_ac_off_on(0),
      out_defrost_off_on(0),
      out_max_defrost_off_on(0),
      out_dir_up_off_on(0),
      out_dir_down_off_on(0)
    {}

    void CabinClimateRptMsg::parse(const uint8_t * in)
    {
      enabled = ((in[0] & 0x01) > 0);
      override_active = ((in[0] & 0x02) > 0);
      command_output_fault = ((in[0] & 0x04) > 0);
      input_output_fault = ((in[0] & 0x08) > 0);
      output_reported_fault = ((in[0] & 0x10) > 0);
      pacmod_fault = ((in[0] & 0x20) > 0);
      vehicle_fault = ((in[0] & 0x40) > 0);
      command_timeout = ((in[0] & 0x80) > 0);

      man_ac_off_on = (in[1] & 0x03);
      man_max_ac_off_on = (in[1] & 0x0C);
      man_defrost_off_on = (in[1] & 0x30);
      man_max_defrost_off_on = (in[1] & 0xC0);
      man_dir_up_off_on = (in[2] & 0x03);
      man_dir_down_off_on = (in[2] & 0x0C);

      cmd_ac_off_on = (in[3] & 0x03);
      cmd_max_ac_off_on = (in[3] & 0x0C);
      cmd_defrost_off_on = (in[3] & 0x30);
      cmd_max_defrost_off_on = (in[3] & 0xC0);
      cmd_dir_up_off_on = (in[4] & 0x03);
      cmd_dir_down_off_on = (in[4] & 0x0C);

      out_ac_off_on = (in[5] & 0x03);
      out_max_ac_off_on = (in[5] & 0x0C);
      out_defrost_off_on = (in[5] & 0x30);
      out_max_defrost_off_on = (in[5] & 0xC0);
      out_dir_up_off_on = (in[6] & 0x03);
      out_dir_down_off_on = (in[6] & 0x0C);
    }

    SafetyBrakeRptMsg::SafetyBrakeRptMsg() :
      Pacmod3TxMsg(),
      commanded_val(false),
      output_val(false),
      reported_fault(false),
      cmd_reported_fault(false),
      cmd_timeout(false),
      cmd_permitted(false)
    {}

    void SafetyBrakeRptMsg::parse(const uint8_t * in)
    {
      commanded_val = (in[0] & 0x01) > 0;
      output_val = (in[0] & 0x02) > 0;
      reported_fault = (in[0] & 0x04) > 0;
      cmd_reported_fault = (in[0] & 0x08) > 0;
      cmd_timeout = (in[0] & 0x10) > 0;
      cmd_permitted = (in[0] & 0x20) > 0;
    }

    SafetyFuncRptMsg::SafetyFuncRptMsg():
      Pacmod3TxMsg(),
      commanded_val(SafetyFunctionCommand::CMD_NONE),
      state(SafetyFunctionState::AUTO_ACTIVE_BRAKED_STATE),
      automanual_opctrl(AutoManualOpCtrl::AUTO_MAN_AUTO),
      cabin_safety_brake_opctrl(CabinSafetyBrakeState::CABIN_BRAKE_APPLIED),
      remote_stop_status(RemoteStopState::REMOTE_STOP_STATE_GO),
      engine_status(false),
      pacmod_system_status(false),
      user_pc_fault(SafetyFuncFaults::OKAY),
      pacmod_system_fault(SafetyFuncFaults::OKAY),
      vehicle_fault(SafetyFuncFaults::OKAY),
      manual_state_obtainable(false),
      auto_ready_state_obtainable(false),
      auto_state_obtainable(false),
      manual_ready_state_obtainable(false),
      critical_stop1_state_obtainable(false),
      critical_stop2_state_obtainable(false)
    {}

    void SafetyFuncRptMsg::parse(const uint8_t * in)
    {
      commanded_val = static_cast<SafetyFunctionCommand>(in[0] & 0x0F);
      state = static_cast<SafetyFunctionState>(in[0] & 0xF0);
      
      automanual_opctrl = static_cast<AutoManualOpCtrl>(in[1] & 0x03);
      cabin_safety_brake_opctrl = static_cast<CabinSafetyBrakeState>(in[1] & 0x0C);
      remote_stop_status = static_cast<RemoteStopState>(in[1] & 0x30);
      engine_status = (in[1] & 0x40) > 0;
      pacmod_system_status = (in[1] & 0x80) > 0;

      user_pc_fault = static_cast<SafetyFuncFaults>(in[2] & 0x03);
      pacmod_system_fault = static_cast<SafetyFuncFaults>(in[2] & 0x0C);
      vehicle_fault = static_cast<SafetyFuncFaults>(in[2] & 0x30);

      manual_state_obtainable = (in[3] & 0x01) > 0;
      auto_ready_state_obtainable = (in[3] & 0x02) > 0;
      auto_state_obtainable = (in[3] & 0x04) > 0;
      manual_ready_state_obtainable = (in[3] & 0x08) > 0;
      critical_stop1_state_obtainable = (in[3] & 0x10) > 0;
      critical_stop2_state_obtainable = (in[3] & 0x20) > 0;
    }

  // Aux Reports
    AccelAuxRptMsg::AccelAuxRptMsg() :
      Pacmod3TxMsg(),
      operator_interaction(false),
      operator_interaction_avail(false)
    {}

    void AccelAuxRptMsg::parse(const uint8_t * in)
    {
      operator_interaction = (in[4] & 0x01) > 0;
      operator_interaction_avail = (in[5] & 0x04) > 0;
    }

    BrakeAuxRptMsg::BrakeAuxRptMsg() :
      Pacmod3TxMsg(),
      brake_pressure(0),
      operator_interaction(false),
      brake_on_off(false),
      brake_pressure_avail(false),
      operator_interaction_avail(false),
      brake_on_off_avail(false)
    {}

    void BrakeAuxRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      temp = (static_cast<int16_t>(in[4]) << 8) | in[5];
      brake_pressure = static_cast<float>(temp / 1000.0);

      operator_interaction = (in[6] & 0x01) > 0;
      brake_on_off = (in[6] & 0x02) > 0;
      brake_pressure_avail = (in[7] & 0x04) > 0;
      operator_interaction_avail = (in[7] & 0x08) > 0;
      brake_on_off_avail = (in[7] & 0x10) > 0;
    }

    BrakeDeccelAuxRptMsg::BrakeDeccelAuxRptMsg() :
      Pacmod3TxMsg(),
      xbr_active_control_mode(XBRActiveControlMode::NO_BRAKE_DEMAND),
      xbr_system_state(XBRSystemState::NO_EXTERNAL_BRAKE_DEMAND_WILL_BE_ACCEPTED),
      foundation_brake_use(FoundationBrakeState::FOUNDATION_BRAKES_NOT_IN_USE),
      hill_holder_mode(HillHolderMode::INACTIVE),
      xbr_active_control_mode_avail(false),
      xbr_system_state_avail(false),
      foundation_brake_use_avail(false),
      hill_holder_mode_avail(false)
    {}

    void BrakeDeccelAuxRptMsg::parse(const uint8_t * in)
    {
      xbr_active_control_mode = static_cast<XBRActiveControlMode>(in[0] & 0x0F);
      xbr_system_state = static_cast<XBRSystemState>(in[0] & 0x30);
      foundation_brake_use = static_cast<FoundationBrakeState>(in[0] & 0xC0);
      hill_holder_mode = static_cast<HillHolderMode>(in[1] & 0x07);

      xbr_active_control_mode_avail = (in[2] & 0x01) > 0;
      xbr_system_state_avail = (in[2] & 0x02) > 0;
      foundation_brake_use_avail = (in[2] & 0x04) > 0;
      hill_holder_mode_avail = (in[2] & 0x08) > 0;
    }

    HeadlightAuxRptMsg::HeadlightAuxRptMsg():
      Pacmod3TxMsg(),
      headlights_on(false),
      headlights_on_bright(false),
      fog_lights_on(false),
      headlights_mode(HeadlightSystemState::HEADLIGHTS_SYSTEM_OFF),
      headlights_on_avail(false),
      headlights_on_bright_avail(false),
      fog_lights_on_avail(false),
      headlights_mode_avail(false)
    {}

    void HeadlightAuxRptMsg::parse(const uint8_t * in)
    {
      headlights_on = (in[0] & 0x01) > 0;
      headlights_on_bright = (in[0] & 0x02) > 0;
      fog_lights_on = (in[0] & 0x04) > 0;
      headlights_mode = static_cast<HeadlightSystemState>(in[1]);
      headlights_on_avail = (in[2] & 0x01) > 0;
      headlights_on_bright_avail = (in[2] & 0x02) > 0;
      fog_lights_on = (in[2] & 0x04) > 0;
      headlights_mode_avail = (in[2] & 0x08) > 0;
    }

    ShiftAuxRptMsg::ShiftAuxRptMsg() :
      Pacmod3TxMsg(),
      between_gears(false),
      stay_in_neutral_mode(false),
      brake_interlock_active(false),
      speed_interlock_active(false),
      write_to_config(false),
      between_gears_avail(false),
      stay_in_neutral_mode_avail(false),
      brake_interlock_active_avail(false),
      speed_interlock_active_avail(false),
      write_to_config_is_valid(false),
      gear_number_avail(false),
      gear_number(Gears::NEUTRAL)
    {}

    void ShiftAuxRptMsg::parse(const uint8_t * in)
    {
      between_gears = (in[0] & 0x01) > 0;
      stay_in_neutral_mode = (in[0] & 0x02) > 0;
      brake_interlock_active = (in[0] & 0x04) > 0;
      speed_interlock_active = (in[0] & 0x08) > 0;
      write_to_config = (in[0] & 0x10) > 0;

      between_gears_avail = (in[1] & 0x01) > 0;
      stay_in_neutral_mode_avail = (in[1] & 0x02) > 0;
      brake_interlock_active_avail = (in[1] & 0x04) > 0;
      speed_interlock_active_avail = (in[1] & 0x08) > 0;
      write_to_config_is_valid = (in[1] & 0x10) > 0;
      gear_number_avail = (in[1] & 0x20) > 0;
      gear_number = static_cast<Gears>(in[2] & 0x3F);
    }

    SteerAuxRptMsg::SteerAuxRptMsg() :
      Pacmod3TxMsg(),
      steering_torque(0),
      rotation_rate(0),
      operator_interaction(false),
      rotation_rate_sign(false),
      vehicle_angle_calib_status(false),
      steering_torque_avail(false),
      rotation_rate_avail(false),
      operator_interaction_avail(false),
      rotation_rate_sign_avail(false),
      vehicle_angle_calib_status_avail(false)
    {}

    void SteerAuxRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      temp = (static_cast<int16_t>(in[2]) << 8) | in[3];
      steering_torque = temp / 10.0;

      uint16_t temp2;

      temp2 = (static_cast<uint16_t>(in[4]) << 8) | in[5];
      rotation_rate = temp2 / 100.0;

      operator_interaction = (in[6] & 0x01) > 0;
      rotation_rate_sign = (in[6] & 0x02) > 0;
      vehicle_angle_calib_status = (in[6] & 0x04) > 0;

      steering_torque_avail = (in[7] & 0x02) > 0;
      rotation_rate_avail = (in[7] & 0x04) > 0;
      operator_interaction_avail = (in[7] & 0x08) > 0;
      rotation_rate_sign_avail = (in[7] & 0x10) > 0;
      vehicle_angle_calib_status_avail = (in[7] & 0x20) > 0;
    }

    TurnAuxRptMsg::TurnAuxRptMsg() :
      Pacmod3TxMsg(),
      driver_blinker_bulb_on(false),
      passenger_blinker_bulb_on(false),
      driver_blinker_bulb_on_avail(false),
      passenger_blinker_bulb_on_avail(false)
    {}

    void TurnAuxRptMsg::parse(const uint8_t * in)
    {
      driver_blinker_bulb_on = (in[0] & 0x01) > 0;
      passenger_blinker_bulb_on = (in[0] & 0x02) > 0;
      driver_blinker_bulb_on_avail = (in[1] & 0x01) > 0;
      passenger_blinker_bulb_on_avail = (in[1] & 0x02) > 0;
    }

    WiperAuxRptMsg::WiperAuxRptMsg() :
      Pacmod3TxMsg(),
      front_wiping(false),
      front_spraying(false),
      rear_wiping(false),
      rear_spraying(false),
      spray_near_empty(false),
      spray_empty(false),
      front_wiping_avail(false),
      front_spraying_avail(false),
      rear_wiping_avail(false),
      rear_spraying_avail(false),
      spray_near_empty_avail(false),
      spray_empty_avail(false)
    {}

    void WiperAuxRptMsg::parse(const uint8_t * in)
    {
      front_wiping = (in[0] & 0x01) > 0;
      front_spraying = (in[0] & 0x02) > 0;
      rear_wiping = (in[0] & 0x04) > 0;
      rear_spraying = (in[0] & 0x08) > 0;
      spray_near_empty = (in[0] & 0x10) > 0;
      spray_empty = (in[0] & 0x20) > 0;
      front_wiping_avail = (in[1] & 0x01) > 0;
      front_spraying_avail = (in[1] & 0x02) > 0;
      rear_wiping_avail = (in[1] & 0x04) > 0;
      rear_spraying_avail = (in[1] & 0x08) > 0;
      spray_near_empty_avail = (in[1] & 0x10) > 0;
      spray_empty_avail = (in[1] & 0x20) > 0;
    }

  // Misc. Reports

    AngVelRptMsg::AngVelRptMsg() :
      Pacmod3TxMsg(),
      pitch_new_data_rx(false),
      roll_new_data_rx(false),
      yaw_new_data_rx(false),
      pitch_valid(false),
      roll_valid(false),
      yaw_valid(false),
      pitch_vel(0),
      roll_vel(0),
      yaw_vel(0)
    {}

    void AngVelRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      pitch_new_data_rx = (in[0] & 0x01) > 0;
      roll_new_data_rx = (in[0] & 0x02) > 0;
      yaw_new_data_rx = (in[0] & 0x04) > 0;
      pitch_valid = (in[0] & 0x08) > 0;
      roll_valid = (in[0] & 0x10) > 0;
      yaw_valid = (in[0] & 0x20) > 0;

      temp = ((static_cast<int16_t>(in[1]) << 8) | in[2]);
      pitch_vel = static_cast<double>(temp / 1000.0);

      temp = ((static_cast<int16_t>(in[3]) << 8) | in[4]);
      roll_vel = static_cast<double>(temp / 1000.0);

      temp = ((static_cast<int16_t>(in[5]) << 8) | in[6]);
      yaw_vel = static_cast<double>(temp / 1000.0);
    }

    DateTimeRptMsg::DateTimeRptMsg() :
      Pacmod3TxMsg(),
      year(0),
      month(0),
      day(0),
      hour(0),
      minute(0),
      second(0)
    {}

    void DateTimeRptMsg::parse(const uint8_t * in)
    {
      year = in[0];
      month = in[1];
      day = in[2];
      hour = in[3];
      minute = in[4];
      second = in[5];
    }

    DetectedObjectRptMsg::DetectedObjectRptMsg() :
      Pacmod3TxMsg(),
      front_object_distance_low_res(0),
      front_object_distance_high_res(0)
    {}

    void DetectedObjectRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      temp = ((static_cast<int16_t>(in[0]) << 8) | in[1]);
      front_object_distance_low_res = static_cast<double>(temp / 1000.0);

      temp = ((static_cast<int16_t>(in[2]) << 8) | in[3]);
      front_object_distance_high_res = static_cast<double>(temp / 1000.0);
    }

    DoorRptMsg::DoorRptMsg() : 
      Pacmod3TxMsg(),
      driver_door_open(false),
      passenger_door_open(false),
      rear_driver_door_open(false),
      rear_passenger_door_open(false),
      hood_open(false),
      trunk_open(false),
      fuel_door_open(false),
      driver_door_open_avail(false),
      passenger_door_open_avail(false),
      rear_driver_door_open_avail(false),
      rear_passenger_door_open_avail(false),
      hood_open_avail(false),
      trunk_open_avail(false),
      fuel_door_open_avail(false)
    {}

    void DoorRptMsg::parse(const uint8_t * in)
    {
      driver_door_open = ((in[0] & 0x01) > 0);
      passenger_door_open = ((in[0] & 0x02) > 0);
      rear_driver_door_open = ((in[0] & 0x04) > 0);
      rear_passenger_door_open = ((in[0] & 0x08) > 0);
      hood_open = ((in[0] & 0x10) > 0);
      trunk_open = ((in[0] & 0x20) > 0);
      fuel_door_open = ((in[0] & 0x40) > 0);

      driver_door_open_avail = ((in[1] & 0x01) > 0);
      passenger_door_open_avail = ((in[1] & 0x02) > 0);
      rear_driver_door_open_avail = ((in[1] & 0x04) > 0);
      rear_passenger_door_open_avail = ((in[1] & 0x08) > 0);
      hood_open_avail = ((in[1] & 0x10) > 0);
      trunk_open_avail = ((in[1] & 0x20) > 0);
      fuel_door_open_avail = ((in[1] & 0x40) > 0);
    }

    DriveTrainRptMsg::DriveTrainRptMsg() : 
      Pacmod3TxMsg(),
      antilock_brake_active(false),
      traction_control_active(false),
      four_wheel_drive_active(false),
      antilock_brake_active_avail(false),
      traction_control_active_avail(false),
      four_wheel_drive_active_avail(false)
    {}

    void DriveTrainRptMsg::parse(const uint8_t * in)
    {
      antilock_brake_active = ((in[0] & 0x01) > 0);
      traction_control_active = ((in[0] & 0x02) > 0);
      traction_control_active = ((in[0] & 0x04) > 0);

      antilock_brake_active_avail = ((in[0] & 0x10) > 0);
      traction_control_active_avail = ((in[0] & 0x20) > 0);
      four_wheel_drive_active_avail = ((in[0] & 0x40) > 0);
    }

    EngineRptMsg::EngineRptMsg() : 
      Pacmod3TxMsg(),
      engine_speed(0),
      engine_torque(0),
      engine_coolant_temp(0),
      engine_speed_avail(false),
      engine_torque_avail(false),
      engine_coolant_temp_avail(false),
      fuel_level_avail(false),
      fuel_level(0)
    {}

    void EngineRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      temp = (static_cast<int16_t>(in[0]) << 8) | in[1];
      engine_speed = static_cast<double>(temp / 4.0);

      temp = (static_cast<int16_t>(in[2]) << 8) | in[3];
      engine_speed = static_cast<double>(temp / 16.0);

      temp = static_cast<int8_t>(in[4]);
      engine_coolant_temp = temp - 40;

      engine_speed_avail = ((in[5] & 0x01) > 0);
      engine_torque_avail = ((in[5] & 0x02) > 0);
      engine_coolant_temp_avail = ((in[5] & 0x04) > 0);
      fuel_level_avail = ((in[5] & 0x08) > 0);

      temp = static_cast<int16_t>(in[6]);
      fuel_level = static_cast<double>(temp / 200.0);

    }

    InteriorLightsRptMsg::InteriorLightsRptMsg() :
      Pacmod3TxMsg(),
      front_dome_lights_on(false),
      rear_dome_lights_on(false),
      mood_lights_on(false),
      ambient_light_sensor(false),
      dim_level(DimLevel::DIM_LEVEL_MIN),
      front_dome_lights_on_avail(false),
      rear_dome_lights_on_avail(false),
      mood_lights_on_avail(false),
      dim_level_avail(false),
      ambient_light_sensor_avail(false)
    {}

    void InteriorLightsRptMsg::parse(const uint8_t * in)
    {
      front_dome_lights_on = ((in[0] & 0x01) > 0);
      rear_dome_lights_on = ((in[0] & 0x02) > 0);
      mood_lights_on = ((in[0] & 0x04) > 0);
      ambient_light_sensor = ((in[0] & 0x04) > 0);
      dim_level = static_cast<DimLevel>(in[1]);

      front_dome_lights_on_avail = ((in[2] & 0x01) > 0);
      rear_dome_lights_on_avail = ((in[2] & 0x02) > 0);
      mood_lights_on_avail = ((in[2] & 0x04) > 0);
      dim_level_avail = ((in[2] & 0x08) > 0);
      ambient_light_sensor_avail = ((in[2] & 0x10) > 0);
    }

    LatLonHeadingRptMsg::LatLonHeadingRptMsg() :
      Pacmod3TxMsg(),
      latitude_degrees(0),
      latitude_minutes(0),
      latitude_seconds(0),
      longitude_degrees(0),
      longitude_minutes(0),
      longitude_seconds(0),
      heading(0)
    {}

    void LatLonHeadingRptMsg::parse(const uint8_t * in)
    {
      latitude_degrees = static_cast<int8_t>(in[0]);
      latitude_minutes = in[1];
      latitude_seconds = in[2];
      longitude_degrees = static_cast<int8_t>(in[3]);
      longitude_minutes = in[4];
      longitude_seconds = in[5];
      heading = ((static_cast<int16_t>(in[6]) << 8) | in[7]) / 100.0;
    }

    LinearAccelRptMsg::LinearAccelRptMsg() : 
      Pacmod3TxMsg(),
      lateral_new_data_rx(false),
      longitudinal_new_data_rx(false),
      vertical_new_data_rx(false),
      lateral_valid(false),
      longitudinal_valid(false),
      vertical_valid(false),
      lateral_accel(0),
      longitudinal_accel(0),
      vertical_accel(0)
    {}

    void LinearAccelRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      lateral_new_data_rx = ((in[0] & 0x01) > 0);
      longitudinal_new_data_rx = ((in[0] & 0x02) > 0);
      vertical_new_data_rx = ((in[0] & 0x04) > 0);
      lateral_valid = ((in[0] & 0x08) > 0);
      longitudinal_valid = ((in[0] & 0x10) > 0);
      vertical_valid = ((in[0] & 0x20) > 0);

      temp = (static_cast<int16_t>(in[1]) << 8) | in[2];
      lateral_accel = static_cast<double>(temp / 100.0);

      temp = (static_cast<int16_t>(in[3]) << 8) | in[4];
      longitudinal_accel = static_cast<double>(temp / 100.0);

      temp = (static_cast<int16_t>(in[5]) << 8) | in[6];
      vertical_accel = static_cast<double>(temp / 100.0);
    }

    OccupancyRptMsg::OccupancyRptMsg() :
      Pacmod3TxMsg(),
      driver_seat_occupied(false),
      passenger_seat_occupied(false),
      rear_seat_occupied(false),
      driver_seatbelt_buckled(false),
      passenger_seatbelt_buckled(false),
      driver_rear_seatbelt_buckled(false),
      pass_rear_seatbelt_buckled(false),
      center_rear_seatbelt_buckled(false),
      driver_seat_occupied_avail(false),
      passenger_seat_occupied_avail(false),
      rear_seat_occupied_avail(false),
      driver_seatbelt_buckled_avail(false),
      passenger_seatbelt_buckled_avail(false),
      driver_rear_seatbelt_buckled_avail(false),
      pass_rear_seatbelt_buckled_avail(false),
      center_rear_seatbelt_buckled_avail(false)
    {}

    void OccupancyRptMsg::parse(const uint8_t * in)
    {
      driver_seat_occupied = ((in[0] & 0x01) > 0);
      passenger_seat_occupied = ((in[0] & 0x02) > 0);
      rear_seat_occupied = ((in[0] & 0x04) > 0);
      driver_seatbelt_buckled = ((in[0] & 0x08) > 0);
      passenger_seatbelt_buckled = ((in[0] & 0x10) > 0);
      driver_rear_seatbelt_buckled = ((in[0] & 0x20) > 0);
      pass_rear_seatbelt_buckled = ((in[0] & 0x40) > 0);
      center_rear_seatbelt_buckled = ((in[0] & 0x80) > 0);

      driver_seat_occupied_avail = ((in[1] & 0x01) > 0);
      passenger_seat_occupied_avail = ((in[1] & 0x02) > 0);
      rear_seat_occupied_avail = ((in[1] & 0x04) > 0);
      driver_seatbelt_buckled_avail = ((in[1] & 0x08) > 0);
      passenger_seatbelt_buckled_avail = ((in[1] & 0x10) > 0);
      driver_rear_seatbelt_buckled_avail = ((in[1] & 0x20) > 0);
      pass_rear_seatbelt_buckled_avail = ((in[1] & 0x40) > 0);
      center_rear_seatbelt_buckled_avail = ((in[1] & 0x80) > 0);
    }

    RearLightsRptMsg::RearLightsRptMsg() :
      Pacmod3TxMsg(),
      brake_lights_on(false),
      brake_lights_on_avail(false),
      reverse_lights_on(false),
      reverse_lights_on_avail(false)
    {}

    void RearLightsRptMsg::parse(const uint8_t * in)
    {
      brake_lights_on = ((in[0] & 0x01) > 0);
      brake_lights_on_avail = ((in[1] & 0x01) > 0);
      reverse_lights_on = ((in[0] & 0x02) > 0);
      reverse_lights_on_avail = ((in[1] & 0x02) > 0);
    }

    VehicleSpeedRptMsg::VehicleSpeedRptMsg() :
      Pacmod3TxMsg(),
      vehicle_speed(0),
      vehicle_speed_valid(false)
    {}

    void VehicleSpeedRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      temp = (static_cast<int16_t>(in[0]) << 8) | in[1];
      vehicle_speed = static_cast<double>(temp / 100.0);

      vehicle_speed_valid = (in[2] == 1);
    }

    VinRptMsg::VinRptMsg() :
      Pacmod3TxMsg(),
      mfg_code(""),
      mfg(""),
      model_year_code(0),
      model_year(0),
      serial(0)
    {}

    void VinRptMsg::parse(const uint8_t * in)
    {
      std::ostringstream oss;
      oss << in[0] << in[1] << in[2];
      mfg_code = oss.str();

      if (mfg_code == "52C") {
        mfg = "POLARIS INDUSTRIES INC.";
      } else if (mfg_code == "3HS") {
        mfg = "NAVISTAR, INC.";
      } else if (mfg_code == "2T2") {
        mfg = "TOYOTA MOTOR MANUFACTURING CANADA";
      } else {
        mfg = "UNKNOWN";
      }

      model_year_code = in[3];

      if (model_year_code >= '1' && model_year_code <= '9') {
        model_year = 2000 + model_year_code;
      } else if (model_year_code >= 'A' && model_year_code < 'Z') {
        switch (model_year_code) {
          case 'A':
            model_year = 2010;
            break;
          case 'B':
            model_year = 2011;
            break;
          case 'C':
            model_year = 2012;
            break;
          case 'D':
            model_year = 2013;
            break;
          case 'E':
            model_year = 2014;
            break;
          case 'F':
            model_year = 2015;
            break;
          case 'G':
            model_year = 2016;
            break;
          case 'H':
            model_year = 2017;
            break;
          case 'J':
            model_year = 2018;
            break;
          case 'K':
            model_year = 2019;
            break;
          case 'L':
            model_year = 2020;
            break;
          case 'M':
            model_year = 2021;
            break;
          case 'N':
            model_year = 2022;
            break;
          case 'P':
            model_year = 2023;
            break;
          case 'R':
            model_year = 2024;
            break;
          case 'S':
            model_year = 2025;
            break;
          case 'T':
            model_year = 2026;
            break;
          case 'V':
            model_year = 2027;
            break;
          case 'W':
            model_year = 2028;
            break;
          case 'X':
            model_year = 2029;
            break;
          case 'Y':
            model_year = 2030;
            break;
          default:
            model_year = 9999;
        }
      } else {
        model_year = 9999;
      }

      serial = (in[4] & 0x0F);
      serial = (serial << 8) | in[5];
      serial = (serial << 8) | in[6];
    }

    WheelSpeedRptMsg::WheelSpeedRptMsg() :
      Pacmod3TxMsg(),
      front_left_wheel_speed(0),
      front_right_wheel_speed(0),
      rear_left_wheel_speed(0),
      rear_right_wheel_speed(0)
    {}

    void WheelSpeedRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      temp = (static_cast<int16_t>(in[0]) << 8) | in[1];
      front_left_wheel_speed = static_cast<double>(temp / 100.0);

      temp = (static_cast<int16_t>(in[2]) << 8) | in[3];
      front_right_wheel_speed = static_cast<double>(temp / 100.0);

      temp = (static_cast<int16_t>(in[4]) << 8) | in[5];
      rear_left_wheel_speed = static_cast<double>(temp / 100.0);

      temp = (static_cast<int16_t>(in[6]) << 8) | in[7];
      rear_right_wheel_speed = static_cast<double>(temp / 100.0);
    }

    YawRateRptMsg::YawRateRptMsg() :
      Pacmod3TxMsg(),
      yaw_rate(0)
    {}

    void YawRateRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      temp = (static_cast<int16_t>(in[0]) << 8) | in[1];
      yaw_rate = static_cast<double>(temp / 100.0);
    }

    SteerCmdLimitRptMsg::SteerCmdLimitRptMsg() :
      Pacmod3TxMsg(),
      pos_cmd_limit(0),
      limited_pos_cmd(0),
      rotation_rate_cmd_limit(0),
      limited_rotation_rate_cmd(0)
      {}

    void SteerCmdLimitRptMsg::parse(const uint8_t * in)
    {
      int16_t temp;

      temp = (static_cast<int16_t>(in[0]) << 8) | in[1];
      pos_cmd_limit = static_cast<double>(temp / 1000.0);

      temp = (static_cast<int16_t>(in[2]) << 8) | in[3];
      limited_pos_cmd = static_cast<double>(temp / 1000.0);

      temp = (static_cast<int16_t>(in[4]) << 8) | in[5];
      rotation_rate_cmd_limit = static_cast<double>(temp / 1000.0);

      temp = (static_cast<int16_t>(in[6]) << 8) | in[7];
      limited_rotation_rate_cmd = static_cast<double>(temp / 1000.0);
    }

  // Extra Messages
    HydraulicsAuxRptMsg::HydraulicsAuxRptMsg() :
      Pacmod3TxMsg(),
      hydraulics_implement_id(0)
    {}

    void HydraulicsAuxRptMsg::parse(const uint8_t * in)
    {
      hydraulics_implement_id = in[0];
    }

    WorklightsRptMsg::WorklightsRptMsg() :
      Pacmod3TxMsg(),
      enabled(false),
      command_timeout(false),
      command_output_fault(false),
      beacon(0),
      worklight_fh(0),
      worklight_rh(0),
      worklight_fl(0),
      worklight_rl(0)
    {}

    void WorklightsRptMsg::parse(const uint8_t * in)
    {
      enabled = ((in[0] & 0x01) > 0);
      command_timeout = ((in[0] & 0x02) > 0);
      command_output_fault = ((in[0] & 0x04) > 0);

      beacon = (in[0] & 0xC0);
      worklight_fh = (in[1] & 0x03);
      worklight_rh = (in[1] & 0x0C);
      worklight_fl = (in[1] & 0x30);
      worklight_rl = (in[1] & 0xC0);
    }

    FaultDebugRptMsg::FaultDebugRptMsg() :
      Pacmod3TxMsg(),
      power_12V_fault(false),
      power_5V_fault(false),
      power_3V3_fault(false),
      fd_can0_timeout(false),
      fd_can1_timeout(false),
      fd_can2_timeout(false),
      fd_can3_timeout(false),
      fd_can4_timeout(false),
      fd_systems_cmd_timeout(false),
      fd_system_fault(false),
      fd_systems_override(false)
    {}

    void FaultDebugRptMsg::parse(const uint8_t * in)
    {
      power_12V_fault = ((in[0] & 0x01) > 0);
      power_5V_fault = ((in[0] & 0x02) > 0);
      power_3V3_fault = ((in[0] & 0x04) > 0);
      fd_can0_timeout = ((in[0] & 0x08) > 0);
      fd_can1_timeout = ((in[0] & 0x10) > 0);
      fd_can2_timeout = ((in[0] & 0x20) > 0);
      fd_can3_timeout = ((in[0] & 0x40) > 0);
      fd_can4_timeout = ((in[0] & 0x80) > 0);

      fd_systems_cmd_timeout = ((in[1] & 0x01) > 0);
      fd_system_fault = ((in[1] & 0x02) > 0);
      fd_systems_override = ((in[1] & 0x04) > 0);
    }

    JoystickRptMsg::JoystickRptMsg() :
      Pacmod3TxMsg(),
      joystick_interlock_en_manual(false),
      joystick_sens_manual(0),
      joystick_pos_manual(0),   
      joystick_manual_state_machine(0),
      joystick_interlock_en_out(false),
      joystick_sens_out(0),
      joystick_pos_out(0)
    {}

    void JoystickRptMsg::parse(const uint8_t * in)
    {
      joystick_interlock_en_manual = ((in[0] & 0x01) > 0);
      joystick_sens_manual = (in[0] & 0x06);
      joystick_pos_manual = (in[0] & 0x70);

      joystick_manual_state_machine = in[1];
      
      joystick_interlock_en_out = ((in[2] & 0x01) > 0);
      joystick_sens_out = (in[2] & 0x06);
      joystick_pos_out = (in[2] & 0x70);
    }

    MFAButtonsRptMsg::MFAButtonsRptMsg() :
      Pacmod3TxMsg(),
      mfa_sys_joystick_enabled(false),
      mfa_sys_steer_enabled(false),          
      mfa_sys_auto_steer_enabled(false),     
      mfa_sys_hydraulics_enabled(false),     
      commmand_output_fault(false),           
      input_output_fault(false),             
      mfa_joystick_enable_in(false),         
      mfa_steer_can_in(false),               
      mfa_steer_auto_in(false),              
      mfa_hydraulics_unlock_in(false),       
      mfa_tms_in(false),                     
      mfa_joystick_enable_cmd(false),        
      mfa_steer_can_cmd(false),              
      mfa_steer_auto_cmd(false),             
      mfa_hydraulics_unlock_cmd(false),      
      mfa_tms_cmd(false),         
      mfa_joystick_enable_out(false),        
      mfa_steer_can_out(false),              
      mfa_steer_auto_out(false),             
      mfa_hydraulics_unlock_out(false),      
      mfa_tms_out(false)                    
    {}

    void MFAButtonsRptMsg::parse(const uint8_t * in)
    {
      mfa_sys_joystick_enabled = ((in[0] & 0x01) > 0);
      mfa_sys_steer_enabled = ((in[0] & 0x02) > 0);
      mfa_sys_auto_steer_enabled = ((in[0] & 0x04) > 0);
      mfa_sys_hydraulics_enabled = ((in[0] & 0x08) > 0);
      commmand_output_fault = ((in[0] & 0x10) > 0);
      input_output_fault = ((in[0] & 0x20) > 0);

      mfa_joystick_enable_in = ((in[1] & 0x01) > 0);
      mfa_steer_can_in = ((in[1] & 0x02) > 0);
      mfa_steer_auto_in = ((in[1] & 0x04) > 0);
      mfa_hydraulics_unlock_in = ((in[1] & 0x08) > 0);
      mfa_tms_in = ((in[1] & 0x10) > 0);

      mfa_joystick_enable_cmd = ((in[2] & 0x01) > 0);
      mfa_steer_can_cmd = ((in[2] & 0x02) > 0);
      mfa_steer_auto_cmd = ((in[2] & 0x04) > 0);
      mfa_hydraulics_unlock_cmd = ((in[2] & 0x08) > 0);
      mfa_tms_cmd = ((in[2] & 0x10) > 0);

      mfa_joystick_enable_out = ((in[3] & 0x01) > 0);
      mfa_steer_can_out = ((in[3] & 0x02) > 0);
      mfa_steer_auto_out = ((in[3] & 0x04) > 0);
      mfa_hydraulics_unlock_out = ((in[3] & 0x08) > 0);
      mfa_tms_out = ((in[3] & 0x10) > 0);
    }

/*** RX Messages   ***/
  // General Classes
    void SystemCmdBool::encode(bool enable,
                              bool ignore_overrides,
                              bool clear_override,
                              bool cmd)
    {
      data[0] = (enable ? 0x01 : 0x00);
      data[0] |= (ignore_overrides ? 0x02 : 0x00);
      data[0] |= clear_override ? 0x04 : 0x00;
      data[1] = (cmd ? 0x01 : 0x00);
    }

    void SystemCmdFloat::encode(bool enable,
                                bool ignore_overrides,
                                bool clear_override,
                                float cmd)
    {
      data[0] = enable ? 0x01 : 0x00;
      data[0] |= ignore_overrides ? 0x02 : 0x00;
      data[0] |= clear_override ? 0x04 : 0x00;

      uint16_t cmd_float = static_cast<uint16_t>(cmd * 1000.0);
      data[1] = (cmd_float & 0xFF00) >> 8;
      data[2] = cmd_float & 0x00FF;
    }

    void SystemCmdInt::encode(bool enable,
                              bool ignore_overrides,
                              bool clear_override,
                              uint16_t cmd)
    {
      data[0] = enable ? 0x01 : 0x00;
      data[0] |= ignore_overrides ? 0x02 : 0x00;
      data[0] |= clear_override ? 0x04 : 0x00;
      
      data[1] = ((cmd & 0xFF00) >> 8);
      data[2] = (cmd & 0xFF00);
    }

  // Global Command
    void GlobalCmdMsg::encode(bool clear_faults)
    {
      data[0] = (clear_faults ? 0x01 : 0x00);
    }

  // Supervisory Control Command
    void SupervisoryCtrlMsg::encode(bool enabled,
                                    uint8_t counter,
                                    uint8_t complement)
    {
      data[0] = enabled ? 0x01 : 0x00;
      data[1] = (counter & 0x0F);
      data[1] |= (complement & 0x0F);
    }

  // Brake Deccel Command
    void BrakeDeccelCmdMsg::encode(bool enable,
                      bool ignore_overrides,
                      bool clear_override,
                      float brake_deccel_command,
                      uint8_t xbr_ebi_mode,
                      uint8_t xbr_priority,
                      uint8_t xbr_control_mode)
    {
      data[0] = enable ? 0x01 : 0x00;
      data[0] |= ignore_overrides ? 0x02 : 0x00;
      data[0] |= clear_override ? 0x04 : 0x00;

      uint16_t raw_brake_deccel = static_cast<uint16_t>(1000.0 * brake_deccel_command);
      data[1] = (raw_brake_deccel & 0xFF00) >> 8;
      data[2] = raw_brake_deccel & 0x00FF;

      data[3] = (xbr_ebi_mode & 0x03);
      data[3] |= (xbr_priority & 0x03);
      data[3] |= (xbr_control_mode & 0x03);
    }

  // Cabin Climate Command
    void CabinClimateCmdMsg::encode(bool enable,
                      bool ignore_overrides,
                      bool clear_override,
                      uint8_t cmd_ac_off_on,
                      uint8_t cmd_max_ac_off_on,
                      uint8_t cmd_defrost_off_on,
                      uint8_t cmd_max_defrost_off_on,
                      uint8_t cmd_dir_up_off_on,
                      uint8_t cmd_dir_down_off_on)
    {
      data[0] = enable ? 0x01 : 0x00;
      data[0] |= ignore_overrides ? 0x02 : 0x00;
      data[0] |= clear_override ? 0x04 : 0x00;

      data[1] = (cmd_ac_off_on & 0x03);
      data[1] |= (cmd_max_ac_off_on & 0x03);
      data[1] |= (cmd_defrost_off_on & 0x03);
      data[1] |= (cmd_max_defrost_off_on & 0x03);

      data[2] = (cmd_dir_up_off_on & 0x03);
      data[2] |= (cmd_dir_down_off_on & 0x03);
    }

  // Safety Brake Command
    void SafetyBrakeCmdMsg::encode(bool safety_brake_cmd)
    {
      data[0] = (safety_brake_cmd ? 0x01 : 0x00);
    }

  // Safety Function Command
    void SafetyFuncCmdMsg::encode(uint8_t command)
    {
      data[0] = (command & 0x0F);
    }

  // Steer Command
    void SteerCmdMsg::encode(bool enable,
                            bool ignore_overrides,
                            bool clear_override,
                            float steer_pos,
                            float steer_spd)
    {
      data[0] = enable ? 0x01 : 0x00;
      data[0] |= ignore_overrides ? 0x02 : 0x00;
      data[0] |= clear_override ? 0x04 : 0x00;

      int16_t raw_pos = static_cast<int16_t>(1000.0 * steer_pos);
      uint16_t raw_spd = static_cast<uint16_t>(1000.0 * steer_spd);

      data[1] = (raw_pos & 0xFF00) >> 8;
      data[2] = raw_pos & 0x00FF;
      data[3] = (raw_spd & 0xFF00) >> 8;
      data[4] = raw_spd & 0x00FF;
    }

  // User Notification Command
    void UserNotificationCmdMsg::encode(bool buzzer_mute,
                                        bool underdash_lights_white)
    {
      data[0] = buzzer_mute ? 0x01 : 0x00;
      data[0] |= underdash_lights_white ? 0x02 : 0x00;
    }

    void HydraulicsCmdMsg::encode(bool enable,
                                  bool ignore_overrides,
                                  bool clear_override,
                                  float hydraulics_cmd,
                                  uint8_t hydraulics_implement_id)
    {
      data[0] = enable ? 0x01 : 0x00;
      data[0] |= ignore_overrides ? 0x02 : 0x00;
      data[0] |= clear_override ? 0x04 : 0x00;

      int16_t raw_cmd = static_cast<int16_t>(1000.0 * hydraulics_cmd);
      data[1] = (raw_cmd & 0xFF00) >> 8;
      data[2] = raw_cmd & 0x00FF;

      data[3] = hydraulics_implement_id;
    }


}  // namespace PACMod3
}  // namespace Drivers
}  // namespace AS
