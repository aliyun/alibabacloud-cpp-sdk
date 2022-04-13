find_package(alibabacloud_gateway_fc QUIET)

if(alibabacloud_gateway_fc_FOUND)
  message(STATUS "Found alibabacloud_gateway_fc version ${alibabacloud_gateway_fc_VERSION}")
else()
  message(STATUS "alibabacloud_gateway_fc could not be located, Building alibabacloud_gateway_fc instead.")
  include(FetchContent)

  FetchContent_Declare(
    _alibabacloud_gateway_fc
    GIT_REPOSITORY https://github.com/alibabacloud-sdk-cpp/gateway-fc.git
    GIT_TAG master
    CMAKE_ARGS
      -DENABLE_UNIT_TESTS:BOOL="0")

  FetchContent_GetProperties(_alibabacloud_gateway_fc)
  if(NOT _alibabacloud_gateway_fc_POPULATED)
    FetchContent_Populate(_alibabacloud_gateway_fc)
    message(STATUS "Added alibabacloud_gateway_fc source : ${_alibabacloud_gateway_fc_SOURCE_DIR}")
    message(STATUS "Added alibabacloud_gateway_fc binary : ${_alibabacloud_gateway_fc_BINARY_DIR}")
    add_subdirectory(
      ${_alibabacloud_gateway_fc_SOURCE_DIR}
      ${_alibabacloud_gateway_fc_BINARY_DIR}
    )
  endif()
  target_include_directories(alibabacloud_fc__open_20210406 PRIVATE "${_alibabacloud_gateway_fc_SOURCE_DIR}/include")
endif()
