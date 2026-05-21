// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MAASAISEARCHPROXY20260424_HPP_
#define ALIBABACLOUD_MAASAISEARCHPROXY20260424_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/MaasAISearchProxy20260424Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/MaasAISearchProxy20260424.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasAISearchProxy20260424
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 提交单条记录导入任务（通过AccessKey认证）
       *
       * @param request OpenDatasetImportDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenDatasetImportDataResponse
       */
      Models::OpenDatasetImportDataResponse openDatasetImportDataWithOptions(const Models::OpenDatasetImportDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交单条记录导入任务（通过AccessKey认证）
       *
       * @param request OpenDatasetImportDataRequest
       * @return OpenDatasetImportDataResponse
       */
      Models::OpenDatasetImportDataResponse openDatasetImportData(const Models::OpenDatasetImportDataRequest &request);

      /**
       * @summary 获取数据集资源 OSS 访问地址（通过AccessKey认证）
       *
       * @param request OpenDatasetResourceUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenDatasetResourceUrlResponse
       */
      Models::OpenDatasetResourceUrlResponse openDatasetResourceUrlWithOptions(const Models::OpenDatasetResourceUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据集资源 OSS 访问地址（通过AccessKey认证）
       *
       * @param request OpenDatasetResourceUrlRequest
       * @return OpenDatasetResourceUrlResponse
       */
      Models::OpenDatasetResourceUrlResponse openDatasetResourceUrl(const Models::OpenDatasetResourceUrlRequest &request);

      /**
       * @summary 联网搜API
       *
       * @param request WebSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return WebSearchResponse
       */
      Models::WebSearchResponse webSearchWithOptions(const Models::WebSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 联网搜API
       *
       * @param request WebSearchRequest
       * @return WebSearchResponse
       */
      Models::WebSearchResponse webSearch(const Models::WebSearchRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MaasAISearchProxy20260424
#endif
