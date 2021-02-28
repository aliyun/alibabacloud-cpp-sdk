find_package(alibabacloud_oss QUIET)

if(alibabacloud_oss_FOUND)
  message(STATUS "Found alibabacloud_oss version ${alibabacloud_oss_VERSION}")
else()
  message(STATUS "alibabacloud_oss could not be located, Building alibabacloud_oss instead.")
  include(FetchContent)

  FetchContent_Declare(
    _alibabacloud_oss
    GIT_REPOSITORY https://github.com/alibabacloud-sdk-cpp/oss.git
    GIT_TAG master
    CMAKE_ARGS
      -DENABLE_UNIT_TESTS:BOOL="0")

  FetchContent_GetProperties(_alibabacloud_oss)
  if(NOT _alibabacloud_oss_POPULATED)
    FetchContent_Populate(_alibabacloud_oss)
    message(STATUS "Added alibabacloud_oss source : ${_alibabacloud_oss_SOURCE_DIR}")
    message(STATUS "Added alibabacloud_oss binary : ${_alibabacloud_oss_BINARY_DIR}")
    add_subdirectory(
      ${_alibabacloud_oss_SOURCE_DIR}
      ${_alibabacloud_oss_BINARY_DIR}
    )
  endif()
  target_include_directories(alibabacloud_scdn_20171115 PRIVATE "${_alibabacloud_oss_SOURCE_DIR}/include")
endif()
