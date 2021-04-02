# Example

> Use [ecs-20140526](../../ecs-20140526/) C++ SDK for Example

- Initialize Config

```c++
#include <alibabacloud/open_api.hpp>

Alibabacloud_OpenApi::Config config;
config.accessKeyId = make_shared<string>(getenv("ACCESS_KEY_ID"));
config.accessKeySecret = make_shared<string>(getenv("ACCESS_KEY_SECRET"));
config.regionId = make_shared<string>("cn-hangzhou");
```

- Initialize Client

```c++
#include <alibabacloud/ecs_20140526.hpp>

Alibabacloud_Ecs20140526::Client client(make_shared<Alibabacloud_RPC::Config>(config));
```

- Initialize Request and set properties

```c++
Alibabacloud_Ecs20140526::DescribeZonesRequest request;
request.regionId = make_shared<string>("cn-hangzhou");
```

- Request API and get response

```c++
Alibabacloud_Ecs20140526::DescribeZonesResponse response = client.describeZones(
      make_shared<Alibabacloud_Ecs20140526::DescribeZonesRequest>(request)
);
```
