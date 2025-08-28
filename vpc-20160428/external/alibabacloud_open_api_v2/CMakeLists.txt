find_package(alibabacloud_open_api_v2 QUIET)

if(alibabacloud_open_api_v2_FOUND)
  message(STATUS "Found alibabacloud_open_api_v2 version ${alibabacloud_open_api_v2_VERSION}")
else()
  message(STATUS "alibabacloud_open_api_v2 could not be located, Building alibabacloud_open_api_v2 instead.")
  include(FetchContent)

  FetchContent_Declare(
    _alibabacloud_open_api_v2
    GIT_REPOSITORY https://github.com/alibabacloud-sdk-cpp/alibabacloud-open-api-v2.git
    GIT_TAG master
    CMAKE_ARGS
      -DENABLE_UNIT_TESTS:BOOL="0")

  FetchContent_MakeAvailable(_alibabacloud_open_api_v2)
  message(STATUS "Added alibabacloud_open_api_v2 source : ${_alibabacloud_open_api_v2_SOURCE_DIR}")
  message(STATUS "Added alibabacloud_open_api_v2 binary : ${_alibabacloud_open_api_v2_BINARY_DIR}")

  target_include_directories(${PROJECT_NAME} PRIVATE "${_alibabacloud_open_api_v2_SOURCE_DIR}/include")
endif()