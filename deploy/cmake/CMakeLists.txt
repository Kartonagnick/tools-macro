# [2021y-02m-12d] WorkSpace project.
# [2021y-05m-08d] [23:20:25]
################################################################################
################################################################################

set(gDEBUG "$ENV{eDEBUG}")
cmake_minimum_required(VERSION 3.1)

include("${CMAKE_CURRENT_LIST_DIR}/setup.cmake")
cmake_scenario("minimalist")

project(${gNAME_PROJECT})

################################################################################
################################################################################

make_target()
make_target(PATH_TO_SOURCES "test/test-100-macro")

################################################################################
################################################################################

