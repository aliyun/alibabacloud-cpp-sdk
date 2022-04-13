find_package(alibabacloud_gateway_spi QUIET)

if(alibabacloud_gateway_spi_FOUND)
  message(STATUS "Found alibabacloud_gateway_spi version ${alibabacloud_gateway_spi_VERSION}")
else()
  message(STATUS "alibabacloud_gateway_spi could not be located, Building alibabacloud_gateway_spi instead.")
  include(FetchContent)

  FetchContent_Declare(
    _alibabacloud_gateway_spi
    GIT_REPOSITORY https://github.com/alibabacloud-sdk-cpp/gateway-spi.git
    GIT_TAG master
    CMAKE_ARGS
      -DENABLE_UNIT_TESTS:BOOL="0")

  FetchContent_GetProperties(_alibabacloud_gateway_spi)
  if(NOT _alibabacloud_gateway_spi_POPULATED)
    FetchContent_Populate(_alibabacloud_gateway_spi)
    message(STATUS "Added alibabacloud_gateway_spi source : ${_alibabacloud_gateway_spi_SOURCE_DIR}")
    message(STATUS "Added alibabacloud_gateway_spi binary : ${_alibabacloud_gateway_spi_BINARY_DIR}")
    add_subdirectory(
      ${_alibabacloud_gateway_spi_SOURCE_DIR}
      ${_alibabacloud_gateway_spi_BINARY_DIR}
    )
  endif()
  target_include_directories(alibabacloud_fc__open_20210406 PRIVATE "${_alibabacloud_gateway_spi_SOURCE_DIR}/include")
endif()
