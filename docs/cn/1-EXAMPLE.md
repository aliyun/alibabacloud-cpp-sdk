# 使用案例

> 以使用 [ecs-20140526](../../ecs-20140526/) C++ SDK 为例

- 初始化 Config

```c++
#include <alibabacloud/open_api.hpp>

Alibabacloud_OpenApi::Config config;
config.accessKeyId = make_shared<string>(getenv("ACCESS_KEY_ID"));
config.accessKeySecret = make_shared<string>(getenv("ACCESS_KEY_SECRET"));
config.regionId = make_shared<string>("cn-hangzhou");
```

- 初始化 Client

```c++
#include <alibabacloud/ecs_20140526.hpp>

Alibabacloud_Ecs20140526::Client client(make_shared<Alibabacloud_RPC::Config>(config));
```

- 初始化 Request 并且设置属性

```c++
Alibabacloud_Ecs20140526::DescribeZonesRequest request;
request.regionId = make_shared<string>("cn-hangzhou");
```

- 请求 API 并获取回调结果

```c++
Alibabacloud_Ecs20140526::DescribeZonesResponse response = client.describeZones(
      make_shared<Alibabacloud_Ecs20140526::DescribeZonesRequest>(request)
);
```
