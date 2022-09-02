
pushd %~dp0
set GTT_ROOT=%~dp0\src
if not exist "out\" mkdir out\
cd out
echo Building GTT

%GCC% -c ^
	-DGTT_PLATFORM=%GTT_PLATFORM% ^
	-DGTT_DRIVER=%GTT_DRIVER% ^
		%GTT_ROOT%\drivers\%GTT_DRIVER%.c ^
		%GTT_ROOT%\message.c ^
		%GTT_ROOT%\libmain.c ^
		%GTT_ROOT%\display.c ^
		%GTT_ROOT%\input.c ^
	-I%GTT_ROOT%\ ^
	-I%GTT_ROOT%\platform\ ^
	-l%GTT_LIBS%

echo Build finished
popd