// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WUYINGAI20260311_HPP_
#define ALIBABACLOUD_WUYINGAI20260311_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/WuyingAI20260311Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/WuyingAI20260311.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingAI20260311
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 与 JVS Crew 进行流式对话，采用 Server-Sent Events (SSE) 协议实时推送对话内容。
       *
       * @param tmpReq ChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      FutureGenerator<Models::ChatResponse> chatWithSSE(const Models::ChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 与 JVS Crew 进行流式对话，采用 Server-Sent Events (SSE) 协议实时推送对话内容。
       *
       * @param tmpReq ChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      Models::ChatResponse chatWithOptions(const Models::ChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 与 JVS Crew 进行流式对话，采用 Server-Sent Events (SSE) 协议实时推送对话内容。
       *
       * @param request ChatRequest
       * @return ChatResponse
       */
      Models::ChatResponse chat(const Models::ChatRequest &request);

      /**
       * @summary 获取用户进行对话所需的访问令牌（AccessToken），用于后续调用 Chat 接口进行身份验证。
       *
       * @param request GetAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessTokenResponse
       */
      Models::GetAccessTokenResponse getAccessTokenWithOptions(const Models::GetAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户进行对话所需的访问令牌（AccessToken），用于后续调用 Chat 接口进行身份验证。
       *
       * @param request GetAccessTokenRequest
       * @return GetAccessTokenResponse
       */
      Models::GetAccessTokenResponse getAccessToken(const Models::GetAccessTokenRequest &request);
  };
} // namespace AlibabaCloud
} // namespace WuyingAI20260311
#endif
