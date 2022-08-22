find_package(alibabacloud_open_api QUIET)

if(alibabacloud_open_api_FOUND)
  message(STATUS "Found alibabacloud_open_api version ${alibabacloud_open_api_VERSION}")
else()
  message(STATUS "alibabacloud_open_api could not be located, Building alibabacloud_open_api instead.")
  include(FetchContent)

  FetchContent_Declare(
    _alibabacloud_open_api
    GIT_REPOSITORY https://github.com/alibabacloud-sdk-cpp/dara-openapi.git
    GIT_TAG master
    CMAKE_ARGS
      -DENABLE_UNIT_TESTS:BOOL="0")

  FetchContent_GetProperties(_alibabacloud_open_api)
  if(NOT _alibabacloud_open_api_POPULATED)
    FetchContent_Populate(_alibabacloud_open_api)
    message(STATUS "Added alibabacloud_open_api source : ${_alibabacloud_open_api_SOURCE_DIR}")
    message(STATUS "Added alibabacloud_open_api binary : ${_alibabacloud_open_api_BINARY_DIR}")
    add_subdirectory(
      ${_alibabacloud_open_api_SOURCE_DIR}
      ${_alibabacloud_open_api_BINARY_DIR}
    )
  endif()
  target_include_directories(alibabacloud_ali_geniessp__1__0 PRIVATE "${_alibabacloud_open_api_SOURCE_DIR}/include")
endif()
