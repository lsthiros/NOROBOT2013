#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/Lift.h"
#include "Subsystems/Elevator.h"
#include "Subsystems/Intake.h"
#include "Subsystems/Delivery.h"
#include "OI.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static ExampleSubsystem *examplesubsystem;
	static OI *oi;
	static Chassis *chassis;
	static Lift* lift;
	static Elevator *elevator;
	static Intake *intake;
	static Delivery* delivery;
};

#endif
