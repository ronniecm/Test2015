// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::subsystemDrivetreadLeftFront;
std::shared_ptr<SpeedController> RobotMap::subsystemDrivetreadLeftBack;
std::shared_ptr<SpeedController> RobotMap::subsystemDrivetreadRightBack;
std::shared_ptr<SpeedController> RobotMap::subsystemDrivetreadRightFront;
std::shared_ptr<RobotDrive> RobotMap::subsystemDriveRobotDrive41;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    subsystemDrivetreadLeftFront.reset(new Talon(1));
    lw->AddActuator("SubsystemDrive", "treadLeftFront", std::static_pointer_cast<Talon>(subsystemDrivetreadLeftFront));
    
    subsystemDrivetreadLeftBack.reset(new Talon(0));
    lw->AddActuator("SubsystemDrive", "treadLeftBack", std::static_pointer_cast<Talon>(subsystemDrivetreadLeftBack));
    
    subsystemDrivetreadRightBack.reset(new Talon(2));
    lw->AddActuator("SubsystemDrive", "treadRightBack", std::static_pointer_cast<Talon>(subsystemDrivetreadRightBack));
    
    subsystemDrivetreadRightFront.reset(new Talon(3));
    lw->AddActuator("SubsystemDrive", "treadRightFront", std::static_pointer_cast<Talon>(subsystemDrivetreadRightFront));
    
    subsystemDriveRobotDrive41.reset(new RobotDrive(subsystemDrivetreadLeftFront, subsystemDrivetreadLeftBack,
              subsystemDrivetreadRightFront, subsystemDrivetreadRightBack));
    
    subsystemDriveRobotDrive41->SetSafetyEnabled(false);
        subsystemDriveRobotDrive41->SetExpiration(0.1);
        subsystemDriveRobotDrive41->SetSensitivity(0.5);
        subsystemDriveRobotDrive41->SetMaxOutput(1.0);



    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
