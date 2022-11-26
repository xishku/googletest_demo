add submodule gtest:
git submodule add -b v1.8.x --name gtest git@github.com:google/googletest.git
git checkout v1.8.x

download submodule:
git submodule update --init --recursive
