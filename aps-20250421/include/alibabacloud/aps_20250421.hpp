// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APS20250421_H_
#define ALIBABACLOUD_APS20250421_H_

#include <alibabacloud/open_api.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Aps20250421 {
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aps20250421

#endif
