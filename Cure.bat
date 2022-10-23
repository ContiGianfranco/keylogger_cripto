del "%appdata%\Microsoft\Windows\Start Menu\Programs\Startup\Keylogger.lnk"
del %appdata%\Record.log
TASKKILL /F /IM Keylogger.exe /T
del %appdata%\Keylogger.exe
