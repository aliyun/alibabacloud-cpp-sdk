// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MSC20250427_HPP_
#define ALIBABACLOUD_MSC20250427_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Msc20250427
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);
  };
} // namespace AlibabaCloud
} // namespace Msc20250427
#endif
