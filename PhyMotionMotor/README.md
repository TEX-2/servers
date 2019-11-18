# PhyMotionMotor

## Свойства (Properties):
 1. control_device - path to PhyMotionControl device (default: device/PhyMOTION/control)
 2. module - number of module
 3. axis - number of axis
 4. address - Address of the controller, the range of the address byte is 0 to 9 and A-F. @ - broadcast addr.

## Команды (Commands):
 1. Stop - just stop motion

## Аттрибуты (Attributes):
 1. position - position relatively M0P (Mechanical zero point) (write command: "m.a+value", read: P20 parameter)
 2. absolute_position - read value from P21 parameter - absolute counter
 