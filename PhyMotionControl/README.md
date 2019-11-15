# PhyMotionControl

Девайс сервер, который осуществляет подключение к PhyMOTION по IP/TCP - 22222 порт. И принимает команды в соответсвии с PhyLOGIC.

## Свойства (Properties):
ip_addr - IP адрес устройства PhyMOTION, его должен раздать сервер
tcp_port - порт, по умолчанию это 22222

## Команды (Commands):
string sendCMD(string) - отправляет команду формата <addr><cmd>, где <addr> значения 0-F, или @.
void openConnection(void) - открывает соеденение
void closeConnection(void) - закрывает соеденение