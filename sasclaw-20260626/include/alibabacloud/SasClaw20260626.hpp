// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SASCLAW20260626_HPP_
#define ALIBABACLOUD_SASCLAW20260626_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/SasClaw20260626Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/SasClaw20260626.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SasClaw20260626
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Claw SSE Chat
       *
       * @param request ChatUserSecAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatUserSecAgentResponse
       */
      FutureGenerator<Models::ChatUserSecAgentResponse> chatUserSecAgentWithSSE(const Models::ChatUserSecAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Claw SSE Chat
       *
       * @param request ChatUserSecAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatUserSecAgentResponse
       */
      Models::ChatUserSecAgentResponse chatUserSecAgentWithOptions(const Models::ChatUserSecAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Claw SSE Chat
       *
       * @param request ChatUserSecAgentRequest
       * @return ChatUserSecAgentResponse
       */
      Models::ChatUserSecAgentResponse chatUserSecAgent(const Models::ChatUserSecAgentRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SasClaw20260626
#endif
