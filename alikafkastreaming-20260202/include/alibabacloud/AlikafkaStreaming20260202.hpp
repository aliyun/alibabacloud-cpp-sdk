// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIKAFKASTREAMING20260202_HPP_
#define ALIBABACLOUD_ALIKAFKASTREAMING20260202_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AlikafkaStreaming20260202Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AlikafkaStreaming20260202.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建 流计算实例
       *
       * @param request CreateComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeInstanceResponse
       */
      Models::CreateComputeInstanceResponse createComputeInstanceWithOptions(const Models::CreateComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 流计算实例
       *
       * @param request CreateComputeInstanceRequest
       * @return CreateComputeInstanceResponse
       */
      Models::CreateComputeInstanceResponse createComputeInstance(const Models::CreateComputeInstanceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
