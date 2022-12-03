#! /bin/bash

work_dir=$(cd $(dirname $0); pwd)

echo "remote server work dir is ${work_dir}"

rm -rf ${work_dir}/googletest/build
mkdir -p ${work_dir}/googletest/build
cd ${work_dir}/googletest/build


cmake ..
make -j32

cd ${work_dir}




