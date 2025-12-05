// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VERVERICA20211122_HPP_
#define ALIBABACLOUD_VERVERICA20211122_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20211122
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);
  };
} // namespace AlibabaCloud
} // namespace Ververica20211122
#endif
