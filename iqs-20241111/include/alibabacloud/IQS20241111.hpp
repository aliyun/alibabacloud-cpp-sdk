// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_IQS20241111_HPP_
#define ALIBABACLOUD_IQS20241111_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/IQS20241111Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/IQS20241111.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary AI搜索流式接口
       *
       * @param request AiSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AiSearchResponse
       */
      Models::AiSearchResponse aiSearchWithOptions(const Models::AiSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI搜索流式接口
       *
       * @param request AiSearchRequest
       * @return AiSearchResponse
       */
      Models::AiSearchResponse aiSearch(const Models::AiSearchRequest &request);

      /**
       * @summary 增强版通用搜索
       *
       * @param request GenericAdvancedSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenericAdvancedSearchResponse
       */
      Models::GenericAdvancedSearchResponse genericAdvancedSearchWithOptions(const Models::GenericAdvancedSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增强版通用搜索
       *
       * @param request GenericAdvancedSearchRequest
       * @return GenericAdvancedSearchResponse
       */
      Models::GenericAdvancedSearchResponse genericAdvancedSearch(const Models::GenericAdvancedSearchRequest &request);

      /**
       * @summary 通用搜索
       *
       * @param request GenericSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenericSearchResponse
       */
      Models::GenericSearchResponse genericSearchWithOptions(const Models::GenericSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用搜索
       *
       * @param request GenericSearchRequest
       * @return GenericSearchResponse
       */
      Models::GenericSearchResponse genericSearch(const Models::GenericSearchRequest &request);

      /**
       * @summary 信息查询服务接口日维度使用量查询
       *
       * @param request GetIqsUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIqsUsageResponse
       */
      Models::GetIqsUsageResponse getIqsUsageWithOptions(const Models::GetIqsUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 信息查询服务接口日维度使用量查询
       *
       * @param request GetIqsUsageRequest
       * @return GetIqsUsageResponse
       */
      Models::GetIqsUsageResponse getIqsUsage(const Models::GetIqsUsageRequest &request);

      /**
       * @summary 通晓搜索-出海版(全球信息搜索)
       *
       * @param request GlobalSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalSearchResponse
       */
      Models::GlobalSearchResponse globalSearchWithOptions(const Models::GlobalSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通晓搜索-出海版(全球信息搜索)
       *
       * @param request GlobalSearchRequest
       * @return GlobalSearchResponse
       */
      Models::GlobalSearchResponse globalSearch(const Models::GlobalSearchRequest &request);

      /**
       * @summary 通晓统一搜索API
       *
       * @param request UnifiedSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnifiedSearchResponse
       */
      Models::UnifiedSearchResponse unifiedSearchWithOptions(const Models::UnifiedSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通晓统一搜索API
       *
       * @param request UnifiedSearchRequest
       * @return UnifiedSearchResponse
       */
      Models::UnifiedSearchResponse unifiedSearch(const Models::UnifiedSearchRequest &request);
  };
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
