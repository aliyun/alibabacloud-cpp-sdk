// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AISEARCHENGINE20260417_HPP_
#define ALIBABACLOUD_AISEARCHENGINE20260417_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AiSearchEngine20260417Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AiSearchEngine20260417.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiSearchEngine20260417
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary AI搜索
       *
       * @param request EngineSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EngineSearchResponse
       */
      Models::EngineSearchResponse engineSearchWithOptions(const Models::EngineSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI搜索
       *
       * @param request EngineSearchRequest
       * @return EngineSearchResponse
       */
      Models::EngineSearchResponse engineSearch(const Models::EngineSearchRequest &request);

      /**
       * @summary AI问答对话
       *
       * @param request QaChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QaChatResponse
       */
      FutureGenerator<Models::QaChatResponse> qaChatWithSSE(const Models::QaChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI问答对话
       *
       * @param request QaChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QaChatResponse
       */
      Models::QaChatResponse qaChatWithOptions(const Models::QaChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI问答对话
       *
       * @param request QaChatRequest
       * @return QaChatResponse
       */
      Models::QaChatResponse qaChat(const Models::QaChatRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AiSearchEngine20260417
#endif
