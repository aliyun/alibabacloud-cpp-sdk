// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_YUQING20220301_HPP_
#define ALIBABACLOUD_YUQING20220301_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Yuqing20220301Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Yuqing20220301.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 关闭舆情产品
       *
       * @param request CloseProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseProductResponse
       */
      Models::CloseProductResponse closeProductWithOptions(const Models::CloseProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭舆情产品
       *
       * @param request CloseProductRequest
       * @return CloseProductResponse
       */
      Models::CloseProductResponse closeProduct(const Models::CloseProductRequest &request);

      /**
       * @summary 控制台统一代理API
       *
       * @param request ConsoleApiProxyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConsoleApiProxyResponse
       */
      Models::ConsoleApiProxyResponse consoleApiProxyWithOptions(const Models::ConsoleApiProxyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 控制台统一代理API
       *
       * @param request ConsoleApiProxyRequest
       * @return ConsoleApiProxyResponse
       */
      Models::ConsoleApiProxyResponse consoleApiProxy(const Models::ConsoleApiProxyRequest &request);

      /**
       * @deprecated OpenAPI ConsoleProxy is deprecated
       *
       * @summary 控制台统一代理API
       *
       * @param request ConsoleProxyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConsoleProxyResponse
       */
      Models::ConsoleProxyResponse consoleProxyWithOptions(const Models::ConsoleProxyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ConsoleProxy is deprecated
       *
       * @summary 控制台统一代理API
       *
       * @param request ConsoleProxyRequest
       * @return ConsoleProxyResponse
       */
      Models::ConsoleProxyResponse consoleProxy(const Models::ConsoleProxyRequest &request);

      /**
       * @summary 读取分析组件计算任务结果
       *
       * @param request GetAnalysisTaskResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAnalysisTaskResultResponse
       */
      Models::GetAnalysisTaskResultResponse getAnalysisTaskResultWithOptions(const Models::GetAnalysisTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 读取分析组件计算任务结果
       *
       * @param request GetAnalysisTaskResultRequest
       * @return GetAnalysisTaskResultResponse
       */
      Models::GetAnalysisTaskResultResponse getAnalysisTaskResult(const Models::GetAnalysisTaskResultRequest &request);

      /**
       * @summary 开通舆情产品
       *
       * @param request OpenProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenProductResponse
       */
      Models::OpenProductResponse openProductWithOptions(const Models::OpenProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通舆情产品
       *
       * @param request OpenProductRequest
       * @return OpenProductResponse
       */
      Models::OpenProductResponse openProduct(const Models::OpenProductRequest &request);

      /**
       * @summary 查询产品开通实例列表
       *
       * @param request QueryProductInstanceListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProductInstanceListResponse
       */
      Models::QueryProductInstanceListResponse queryProductInstanceListWithOptions(const Models::QueryProductInstanceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询产品开通实例列表
       *
       * @param request QueryProductInstanceListRequest
       * @return QueryProductInstanceListResponse
       */
      Models::QueryProductInstanceListResponse queryProductInstanceList(const Models::QueryProductInstanceListRequest &request);

      /**
       * @summary 查询舆情文章列表
       *
       * @param request QueryYuqingMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryYuqingMessageResponse
       */
      Models::QueryYuqingMessageResponse queryYuqingMessageWithOptions(const Models::QueryYuqingMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询舆情文章列表
       *
       * @param request QueryYuqingMessageRequest
       * @return QueryYuqingMessageResponse
       */
      Models::QueryYuqingMessageResponse queryYuqingMessage(const Models::QueryYuqingMessageRequest &request);

      /**
       * @summary 提交分析组件计算任务
       *
       * @param request SubmitAnalysisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAnalysisTaskResponse
       */
      Models::SubmitAnalysisTaskResponse submitAnalysisTaskWithOptions(const Models::SubmitAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交分析组件计算任务
       *
       * @param request SubmitAnalysisTaskRequest
       * @return SubmitAnalysisTaskResponse
       */
      Models::SubmitAnalysisTaskResponse submitAnalysisTask(const Models::SubmitAnalysisTaskRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
