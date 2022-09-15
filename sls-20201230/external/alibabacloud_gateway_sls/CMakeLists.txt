find_package(alibabacloud_gateway_sls QUIET)

if(alibabacloud_gateway_sls_FOUND)
  message(STATUS "Found alibabacloud_gateway_sls version ${alibabacloud_gateway_sls_VERSION}")
else()
  message(STATUS "alibabacloud_gateway_sls could not be located, Building alibabacloud_gateway_sls instead.")
  include(FetchContent)

  FetchContent_Declare(
    _alibabacloud_gateway_sls
    GIT_REPOSITORY https://github.com/alibabacloud-sdk-cpp/gateway-sls.git
    GIT_TAG master
    CMAKE_ARGS
      -DENABLE_UNIT_TESTS:BOOL="0")

  FetchContent_GetProperties(_alibabacloud_gateway_sls)
  if(NOT _alibabacloud_gateway_sls_POPULATED)
    FetchContent_Populate(_alibabacloud_gateway_sls)
    message(STATUS "Added alibabacloud_gateway_sls source : ${_alibabacloud_gateway_sls_SOURCE_DIR}")
    message(STATUS "Added alibabacloud_gateway_sls binary : ${_alibabacloud_gateway_sls_BINARY_DIR}")
    add_subdirectory(
      ${_alibabacloud_gateway_sls_SOURCE_DIR}
      ${_alibabacloud_gateway_sls_BINARY_DIR}
    )
  endif()
  target_include_directories(alibabacloud_sls_20201230 PRIVATE "${_alibabacloud_gateway_sls_SOURCE_DIR}/include")
endif()
