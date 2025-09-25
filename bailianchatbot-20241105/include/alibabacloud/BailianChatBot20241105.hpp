// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BAILIANCHATBOT20241105_HPP_
#define ALIBABACLOUD_BAILIANCHATBOT20241105_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/BailianChatBot20241105Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/BailianChatBot20241105.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianChatBot20241105
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary SSE问答接口
       *
       * @param request SseChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SseChatResponse
       */
      FutrueGenerator<Models::SseChatResponse> sseChatWithSSE(const Models::SseChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SSE问答接口
       *
       * @param request SseChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SseChatResponse
       */
      Models::SseChatResponse sseChatWithOptions(const Models::SseChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SSE问答接口
       *
       * @param request SseChatRequest
       * @return SseChatResponse
       */
      Models::SseChatResponse sseChat(const Models::SseChatRequest &request);
  };
} // namespace AlibabaCloud
} // namespace BailianChatBot20241105
#endif
