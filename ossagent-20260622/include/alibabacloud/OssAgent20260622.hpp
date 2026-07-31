// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OSSAGENT20260622_HPP_
#define ALIBABACLOUD_OSSAGENT20260622_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/OssAgent20260622Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/OssAgent20260622.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssAgent20260622
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 聊天流式接口
       *
       * @param request ChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      FutureGenerator<Models::ChatResponse> chatWithSSE(const Models::ChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 聊天流式接口
       *
       * @param request ChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      Models::ChatResponse chatWithOptions(const Models::ChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 聊天流式接口
       *
       * @param request ChatRequest
       * @return ChatResponse
       */
      Models::ChatResponse chat(const Models::ChatRequest &request);

      /**
       * @summary 工具确认接口
       *
       * @param request ConfirmRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmResponse
       */
      FutureGenerator<Models::ConfirmResponse> confirmWithSSE(const Models::ConfirmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 工具确认接口
       *
       * @param request ConfirmRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmResponse
       */
      Models::ConfirmResponse confirmWithOptions(const Models::ConfirmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 工具确认接口
       *
       * @param request ConfirmRequest
       * @return ConfirmResponse
       */
      Models::ConfirmResponse confirm(const Models::ConfirmRequest &request);

      /**
       * @summary 聊天中断接口
       *
       * @param request InterruptRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InterruptResponse
       */
      Models::InterruptResponse interruptWithOptions(const string &sessionId, const Models::InterruptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 聊天中断接口
       *
       * @param request InterruptRequest
       * @return InterruptResponse
       */
      Models::InterruptResponse interrupt(const string &sessionId, const Models::InterruptRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OssAgent20260622
#endif
