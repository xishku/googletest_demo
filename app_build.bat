

set work_dir=%~dp0
echo "work dir is %work_dir%"

rd /S /Q %work_dir%\build
md %work_dir%\build
cd %work_dir%\build
cmake .. -G "MinGW Makefiles"

make

cd %work_dir%

%work_dir%\output\bin\main.exe

pause
