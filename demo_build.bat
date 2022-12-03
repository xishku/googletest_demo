

set work_dir=%~dp0
echo "work dir is %work_dir%"

git submodule update --init


rd /S /Q %work_dir%googletest\build
md %work_dir%googletest\build
cd %work_dir%googletest\build
cmake .. -G "MinGW Makefiles" 
make -j32



rd /S /Q %work_dir%\build
md %work_dir%\build
cd %work_dir%\build
cmake .. -G "MinGW Makefiles"

make

cd %work_dir%
