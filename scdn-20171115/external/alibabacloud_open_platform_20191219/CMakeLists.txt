find_package(alibabacloud_open_platform_20191219 QUIET)

if(alibabacloud_open_platform_20191219_FOUND)
  message(STATUS "Found alibabacloud_open_platform_20191219 version ${alibabacloud_open_platform_20191219_VERSION}")
else()
  message(STATUS "alibabacloud_open_platform_20191219 could not be located, Building alibabacloud_open_platform_20191219 instead.")
  include(FetchContent)

  FetchContent_Declare(
    _alibabacloud_open_platform_20191219
    GIT_REPOSITORY https://github.com/alibabacloud-sdk-cpp/openplatform-20191219.git
    GIT_TAG 1.0.0
    CMAKE_ARGS
      -DENABLE_UNIT_TESTS:BOOL="0")

  FetchContent_GetProperties(_alibabacloud_open_platform_20191219)
  if(NOT _alibabacloud_open_platform_20191219_POPULATED)
    FetchContent_Populate(_alibabacloud_open_platform_20191219)
    message(STATUS "Added alibabacloud_open_platform_20191219 source : ${_alibabacloud_open_platform_20191219_SOURCE_DIR}")
    message(STATUS "Added alibabacloud_open_platform_20191219 binary : ${_alibabacloud_open_platform_20191219_BINARY_DIR}")
    add_subdirectory(
      ${_alibabacloud_open_platform_20191219_SOURCE_DIR}
      ${_alibabacloud_open_platform_20191219_BINARY_DIR}
    )
  endif()
  target_include_directories(alibabacloud_scdn_20171115 PRIVATE "${_alibabacloud_open_platform_20191219_SOURCE_DIR}/include")
endif()
