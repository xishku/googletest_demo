使用方式
#linux系统
执行demo_build.sh一键式下载googletest代码及编译、demo test工程编译
$ ./demo_build.sh

运行测试
$ output/bin/main

[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from sumtest
[ RUN      ] sumtest.t1
[       OK ] sumtest.t1 (0 ms)
[----------] 1 test from sumtest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.

#windows系统
执行demo_build.bat一键式下载googletest代码及编译、demo test工程编译
D:\xxx\googletest_demo>demo_build.bat

运行测试
D:\xxx\googletest_demo>output\bin\main.exe

[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from sumtest
[ RUN      ] sumtest.t1
[       OK ] sumtest.t1 (0 ms)
[----------] 1 test from sumtest (1 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (15 ms total)
[  PASSED  ] 1 test.

#window系统需要安装posix接口的mingw64
参考文档：https://www.jianshu.com/p/c3411fe5b19c
下载地址：https://sourceforge.net/projects/mingw-w64/
https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/
x86_64-posix-sjlj

#其他备忘:
add submodule gtest:
git submodule add -b v1.8.x --name gtest git@github.com:google/googletest.git
git checkout v1.8.x

download submodule:
git submodule update --init --recursive
