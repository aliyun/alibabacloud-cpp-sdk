// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SASRASP20240727_HPP_
#define ALIBABACLOUD_SASRASP20240727_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/SasRasp20240727Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/SasRasp20240727.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SasRasp20240727
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary DescribeAttackProtectionCount
       *
       * @param request DescribeAttackProtectionCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAttackProtectionCountResponse
       */
      Models::DescribeAttackProtectionCountResponse describeAttackProtectionCountWithOptions(const Models::DescribeAttackProtectionCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeAttackProtectionCount
       *
       * @param request DescribeAttackProtectionCountRequest
       * @return DescribeAttackProtectionCountResponse
       */
      Models::DescribeAttackProtectionCountResponse describeAttackProtectionCount(const Models::DescribeAttackProtectionCountRequest &request);

      /**
       * @summary 查询攻击项
       *
       * @param request DescribeAttacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAttacksResponse
       */
      Models::DescribeAttacksResponse describeAttacksWithOptions(const Models::DescribeAttacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询攻击项
       *
       * @param request DescribeAttacksRequest
       * @return DescribeAttacksResponse
       */
      Models::DescribeAttacksResponse describeAttacks(const Models::DescribeAttacksRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SasRasp20240727
#endif
