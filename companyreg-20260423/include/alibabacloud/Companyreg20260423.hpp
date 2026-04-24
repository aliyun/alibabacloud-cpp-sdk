// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_COMPANYREG20260423_HPP_
#define ALIBABACLOUD_COMPANYREG20260423_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Companyreg20260423Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Companyreg20260423.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20260423
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 查询已备案信息
       *
       * @param request QuerySuccessIcpDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySuccessIcpDataResponse
       */
      Models::QuerySuccessIcpDataResponse querySuccessIcpDataWithOptions(const Models::QuerySuccessIcpDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询已备案信息
       *
       * @param request QuerySuccessIcpDataRequest
       * @return QuerySuccessIcpDataResponse
       */
      Models::QuerySuccessIcpDataResponse querySuccessIcpData(const Models::QuerySuccessIcpDataRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Companyreg20260423
#endif
