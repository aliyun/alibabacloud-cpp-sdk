find_package(darabonba_array QUIET)

if(darabonba_array_FOUND)
  message(STATUS "Found darabonba_array version ${darabonba_array_VERSION}")
else()
  message(STATUS "darabonba_array could not be located, Building darabonba_array instead.")
  include(FetchContent)

  FetchContent_Declare(
    _darabonba_array
    GIT_REPOSITORY https://github.com/alibabacloud-sdk-cpp/dara-array.git
    GIT_TAG master
    CMAKE_ARGS
      -DENABLE_UNIT_TESTS:BOOL="0")

  FetchContent_GetProperties(_darabonba_array)
  if(NOT _darabonba_array_POPULATED)
    FetchContent_Populate(_darabonba_array)
    message(STATUS "Added darabonba_array source : ${_darabonba_array_SOURCE_DIR}")
    message(STATUS "Added darabonba_array binary : ${_darabonba_array_BINARY_DIR}")
    add_subdirectory(
      ${_darabonba_array_SOURCE_DIR}
      ${_darabonba_array_BINARY_DIR}
    )
  endif()
  target_include_directories(alibabacloud_facebody_20191230 PRIVATE "${_darabonba_array_SOURCE_DIR}/include")
endif()
