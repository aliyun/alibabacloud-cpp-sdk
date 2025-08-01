English | [简体中文](/README-CN.md)


# Alibaba Cloud cas SDK for C++

![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

Alibaba Cloud cas SDK is based on the [`Darabonba DSL`](https://github.com/aliyun/darabonba) solution, which is a domain specific language for OpenAPI applications. It can be used to generate multilingual SDKs, code samples, test cases, interface choreography, etc. for any style of API.

## Required Dependency Libraries

- [Boost](https://www.boost.org/users/download/)
- [CPPRestSDK](https://github.com/microsoft/cpprestsdk/releases)
- [OpenSSL](https://www.openssl.org/source/)
- [Git](https://git-scm.com/)
- [GCC](https://gcc.gnu.org/) >= 10.0
- [CMake](https://cmake.org/) >= 3.11

To use this SDK to access the API, you must first install the required dependency libraries.

- Install with Homebrew

```bash
brew install boost cpprestsdk openssl
```

- Install with yum

```bash
yum install boost-devel openssl-devel

# The cpprestsdk does not support installation with yum.
```

- Install with api-get

```bash
# install boost
sudo add-apt-repository ppa:mhier/libboost-latest -y
sudo apt-get update
sudo apt-get install libboost-all-dev

sudo apt-get install libcpprest-dev libcurl4-openssl-dev libssl-dev
```

- Install with vcpkg

```bash
vcpkg install boost cpprestsdk openssl-windows
```

## Installation

### Linux

```bash
git clone https://github.com/aliyun/alibabacloud-cpp-sdk.git
sh cas-20180813/scripts/install.sh
```

### Windows

1. Run the following command to clone code from Github via [git-bash](https://git-scm.com/downloads):

  ```bash
  git clone https://github.com/aliyun/alibabacloud-cpp-sdk.git
  cd alibabacloud-cpp-sdk/cas-20180813
  ```
2. Build Visual Studio solution
  * Install [CMake](https://cmake.org/download/) && [Visual Studio](https://visualstudio.microsoft.com/zh-hans/)
  * Change directory to source code and make the `cmake_build` folder in the project root directory.
  * Open [CMake](https://cmake.org/download/) software and
    * `Browse Source` to open source code directory.
    * `Browse build`  to open the created `cmake_build` directory
    * click `configure`
    * click `generate`, Generate VS solution

3. Build and Install C++ SDK
  * Go to the cmake_build directory and open ${project_name}.sln with Visual Studio Solutions
  * Select  `Release`
  * Check INSTALL option from Build -> Configuration Manager
  * Build->Build Solutions to build.


## Issue

[Submit Issue](https://github.com/aliyun/alibabacloud-cpp-sdk/issues/new/choose), Problems that do not meet the guidelines may close immediately.


## Related

* [Alibaba Cloud OpenAPI Developer Portal][open-api]
* [Alibabacloud Console System][console]
* [Alibaba Cloud Home Page][aliyun]

## License

[Apache-2.0](/LICENSE.md)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.

[Alibaba Cloud OpenAPI Portal]: https://next.api.aliyun.com
[latest-release]: https://github.com/aliyun/alibabacloud-cpp-sdk/releases
[console]: https://home.console.aliyun.com
[aliyun]: https://www.aliyun.com
