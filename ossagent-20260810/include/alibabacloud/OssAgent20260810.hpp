// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OSSAGENT20260810_HPP_
#define ALIBABACLOUD_OSSAGENT20260810_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/OssAgent20260810Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/OssAgent20260810.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssAgent20260810
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary A2A接口
       *
       * @param request A2aRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return A2aResponse
       */
      FutureGenerator<Models::A2aResponse> a2aWithSSE(const Models::A2aRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A2A接口
       *
       * @param request A2aRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return A2aResponse
       */
      Models::A2aResponse a2aWithOptions(const Models::A2aRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A2A接口
       *
       * @param request A2aRequest
       * @return A2aResponse
       */
      Models::A2aResponse a2a(const Models::A2aRequest &request);

      /**
       * @summary 获取Agent_Card
       *
       * @param request AgentCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AgentCardResponse
       */
      Models::AgentCardResponse agent_cardWithOptions(const Models::AgentCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Agent_Card
       *
       * @param request AgentCardRequest
       * @return AgentCardResponse
       */
      Models::AgentCardResponse agent_card(const Models::AgentCardRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OssAgent20260810
#endif
