使用方式
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




其他备忘:
add submodule gtest:
git submodule add -b v1.8.x --name gtest git@github.com:google/googletest.git
git checkout v1.8.x

download submodule:
git submodule update --init --recursive
