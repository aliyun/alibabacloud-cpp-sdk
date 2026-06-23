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
       * @summary This topic describes the method to invoke the multi-stage streaming API V3 for general search by using the Alibaba Cloud OpenAPI SDK, including parameter descriptions.
       *
       * @description Provides streaming results in two stages, common_search and post_retrieval, for on-demand use.
       * General search results (common_search): The raw search results. Covers key fields such as web page title, dynamic summary, body text, source website, and publication time. Post-retrieval processing (post_retrieval): Uses a rerank model to rerank and filter the common_search results from the previous stage. The mAP metric for context relevancy improves by approximately 5%, with an additional latency of approximately 110 ms.
       *
       * @param request AiSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AiSearchResponse
       */
      FutureGenerator<Models::AiSearchResponse> aiSearchWithSSE(const Models::AiSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the method to invoke the multi-stage streaming API V3 for general search by using the Alibaba Cloud OpenAPI SDK, including parameter descriptions.
       *
       * @description Provides streaming results in two stages, common_search and post_retrieval, for on-demand use.
       * General search results (common_search): The raw search results. Covers key fields such as web page title, dynamic summary, body text, source website, and publication time. Post-retrieval processing (post_retrieval): Uses a rerank model to rerank and filter the common_search results from the previous stage. The mAP metric for context relevancy improves by approximately 5%, with an additional latency of approximately 110 ms.
       *
       * @param request AiSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AiSearchResponse
       */
      Models::AiSearchResponse aiSearchWithOptions(const Models::AiSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the method to invoke the multi-stage streaming API V3 for general search by using the Alibaba Cloud OpenAPI SDK, including parameter descriptions.
       *
       * @description Provides streaming results in two stages, common_search and post_retrieval, for on-demand use.
       * General search results (common_search): The raw search results. Covers key fields such as web page title, dynamic summary, body text, source website, and publication time. Post-retrieval processing (post_retrieval): Uses a rerank model to rerank and filter the common_search results from the previous stage. The mAP metric for context relevancy improves by approximately 5%, with an additional latency of approximately 110 ms.
       *
       * @param request AiSearchRequest
       * @return AiSearchResponse
       */
      Models::AiSearchResponse aiSearch(const Models::AiSearchRequest &request);

      /**
       * @summary 自然语言通用查询
       *
       * @description 自然语言搜索通用接口
       *
       * @param request CommonQueryBySceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommonQueryBySceneResponse
       */
      Models::CommonQueryBySceneResponse commonQueryBySceneWithOptions(const Models::CommonQueryBySceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自然语言通用查询
       *
       * @description 自然语言搜索通用接口
       *
       * @param request CommonQueryBySceneRequest
       * @return CommonQueryBySceneResponse
       */
      Models::CommonQueryBySceneResponse commonQueryByScene(const Models::CommonQueryBySceneRequest &request);

      /**
       * @summary This topic describes how to invoke the enhanced search operation (GenericAdvancedSearch) by using the Alibaba Cloud OpenAPI SDK, including the method and metric description. Compared with GenericSearch, GenericAdvancedSearch provides better recall of authoritative websites, with a maximum recall count of 40, delivering improved authoritativeness and data diversity. The response parameters and format of the enhanced operation are consistent with those of GenericAdvancedSearch.
       *
       * @description GenericAdvancedSearch is currently in the testing phase. New specifications will be available for purchase in the future.
       *
       * @param request GenericAdvancedSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenericAdvancedSearchResponse
       */
      Models::GenericAdvancedSearchResponse genericAdvancedSearchWithOptions(const Models::GenericAdvancedSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes how to invoke the enhanced search operation (GenericAdvancedSearch) by using the Alibaba Cloud OpenAPI SDK, including the method and metric description. Compared with GenericSearch, GenericAdvancedSearch provides better recall of authoritative websites, with a maximum recall count of 40, delivering improved authoritativeness and data diversity. The response parameters and format of the enhanced operation are consistent with those of GenericAdvancedSearch.
       *
       * @description GenericAdvancedSearch is currently in the testing phase. New specifications will be available for purchase in the future.
       *
       * @param request GenericAdvancedSearchRequest
       * @return GenericAdvancedSearchResponse
       */
      Models::GenericAdvancedSearchResponse genericAdvancedSearch(const Models::GenericAdvancedSearchRequest &request);

      /**
       * @summary Performs a general-purpose search.
       *
       * @param tmpReq GenericSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenericSearchResponse
       */
      Models::GenericSearchResponse genericSearchWithOptions(const Models::GenericSearchRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a general-purpose search.
       *
       * @param request GenericSearchRequest
       * @return GenericSearchResponse
       */
      Models::GenericSearchResponse genericSearch(const Models::GenericSearchRequest &request);

      /**
       * @summary Query daily usage by dimension for the Information Query Service API
       *
       * @param request GetIqsUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIqsUsageResponse
       */
      Models::GetIqsUsageResponse getIqsUsageWithOptions(const Models::GetIqsUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query daily usage by dimension for the Information Query Service API
       *
       * @param request GetIqsUsageRequest
       * @return GetIqsUsageResponse
       */
      Models::GetIqsUsageResponse getIqsUsage(const Models::GetIqsUsageRequest &request);

      /**
       * @summary IQS Search - Global Edition (Global Information Search)
       *
       * @description This document describes the usage and parameter specifications of GlobalSearch, the global edition of IQS Search.
       *
       * @param request GlobalSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalSearchResponse
       */
      Models::GlobalSearchResponse globalSearchWithOptions(const Models::GlobalSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary IQS Search - Global Edition (Global Information Search)
       *
       * @description This document describes the usage and parameter specifications of GlobalSearch, the global edition of IQS Search.
       *
       * @param request GlobalSearchRequest
       * @return GlobalSearchResponse
       */
      Models::GlobalSearchResponse globalSearch(const Models::GlobalSearchRequest &request);

      /**
       * @summary Medical Q&A
       *
       * @param request MedicalAnswerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MedicalAnswerResponse
       */
      Models::MedicalAnswerResponse medicalAnswerWithOptions(const Models::MedicalAnswerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Medical Q&A
       *
       * @param request MedicalAnswerRequest
       * @return MedicalAnswerResponse
       */
      Models::MedicalAnswerResponse medicalAnswer(const Models::MedicalAnswerRequest &request);

      /**
       * @summary Health Graph
       *
       * @param request MedicalKnowledgeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MedicalKnowledgeResponse
       */
      Models::MedicalKnowledgeResponse medicalKnowledgeWithOptions(const Models::MedicalKnowledgeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Health Graph
       *
       * @param request MedicalKnowledgeRequest
       * @return MedicalKnowledgeResponse
       */
      Models::MedicalKnowledgeResponse medicalKnowledge(const Models::MedicalKnowledgeRequest &request);

      /**
       * @summary Multimodal search
       *
       * @param request MultimodalSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultimodalSearchResponse
       */
      Models::MultimodalSearchResponse multimodalSearchWithOptions(const Models::MultimodalSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Multimodal search
       *
       * @param request MultimodalSearchRequest
       * @return MultimodalSearchResponse
       */
      Models::MultimodalSearchResponse multimodalSearch(const Models::MultimodalSearchRequest &request);

      /**
       * @summary This topic describes the intelligent search Q&A streaming API (SearchStream). Based on retrieval-augmented generation (RAG) and large language model technologies, this API accepts natural language questions from users and automatically performs intent recognition, query rewrite, multi-source retrieval, and content generation. The API returns data using the Server-Sent Events (SSE) streaming protocol, supporting real-time output of inference status, reference sources, and token-by-token generated answers. It is suitable for AI chat and search scenarios that require low latency and high interpretability.
       *
       * @param request OmniAnswerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OmniAnswerResponse
       */
      FutureGenerator<Models::OmniAnswerResponse> omniAnswerWithSSE(const Models::OmniAnswerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the intelligent search Q&A streaming API (SearchStream). Based on retrieval-augmented generation (RAG) and large language model technologies, this API accepts natural language questions from users and automatically performs intent recognition, query rewrite, multi-source retrieval, and content generation. The API returns data using the Server-Sent Events (SSE) streaming protocol, supporting real-time output of inference status, reference sources, and token-by-token generated answers. It is suitable for AI chat and search scenarios that require low latency and high interpretability.
       *
       * @param request OmniAnswerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OmniAnswerResponse
       */
      Models::OmniAnswerResponse omniAnswerWithOptions(const Models::OmniAnswerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the intelligent search Q&A streaming API (SearchStream). Based on retrieval-augmented generation (RAG) and large language model technologies, this API accepts natural language questions from users and automatically performs intent recognition, query rewrite, multi-source retrieval, and content generation. The API returns data using the Server-Sent Events (SSE) streaming protocol, supporting real-time output of inference status, reference sources, and token-by-token generated answers. It is suitable for AI chat and search scenarios that require low latency and high interpretability.
       *
       * @param request OmniAnswerRequest
       * @return OmniAnswerResponse
       */
      Models::OmniAnswerResponse omniAnswer(const Models::OmniAnswerRequest &request);

      /**
       * @summary Quickly retrieve HTML and parse static web page content.
       *
       * @description 1. When the HTTP status code (httpcode) of the target address is less than 500, it is counted as one valid request.  
       * 2. If the content type (Content-Type) in the response header of the target address is application/pdf, the system automatically triggers PDF parsing (PDF file size must not exceed 20 MB). This operation is counted as an additional valid request.  
       * 3. Trial terms: During the trial period, the API is limited to 5 queries per second (QPS); the trial quota is 1,000 requests per 30 days.
       *
       * @param request ReadPageBasicRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadPageBasicResponse
       */
      Models::ReadPageBasicResponse readPageBasicWithOptions(const Models::ReadPageBasicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Quickly retrieve HTML and parse static web page content.
       *
       * @description 1. When the HTTP status code (httpcode) of the target address is less than 500, it is counted as one valid request.  
       * 2. If the content type (Content-Type) in the response header of the target address is application/pdf, the system automatically triggers PDF parsing (PDF file size must not exceed 20 MB). This operation is counted as an additional valid request.  
       * 3. Trial terms: During the trial period, the API is limited to 5 queries per second (QPS); the trial quota is 1,000 requests per 30 days.
       *
       * @param request ReadPageBasicRequest
       * @return ReadPageBasicResponse
       */
      Models::ReadPageBasicResponse readPageBasic(const Models::ReadPageBasicRequest &request);

      /**
       * @summary 1. Read HTML and parse web page content through the browser sandbox environment.  
       * 2. The API starts parsing after all resources on the target page are fully loaded (the maximum waiting duration can be adjusted via the pageTimeout parameter). The overall Duration of the API call is significantly affected by the resource loading performance of the target site.
       *
       * @description 1. A request is counted as valid when the HTTP status code (httpcode) of the target URL is less than 500.  
       * 2. If the content type (Content-Type) in the response header of the target URL is application/pdf, the system automatically triggers PDF parsing (PDF files up to 20 MB are supported). This operation is counted as an additional valid request.  
       * 3. Trial terms: During the trial period, the API is limited to 5 queries per second (QPS); the trial quota is 1,000 requests per 30 days.
       *
       * @param request ReadPageScrapeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadPageScrapeResponse
       */
      Models::ReadPageScrapeResponse readPageScrapeWithOptions(const Models::ReadPageScrapeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 1. Read HTML and parse web page content through the browser sandbox environment.  
       * 2. The API starts parsing after all resources on the target page are fully loaded (the maximum waiting duration can be adjusted via the pageTimeout parameter). The overall Duration of the API call is significantly affected by the resource loading performance of the target site.
       *
       * @description 1. A request is counted as valid when the HTTP status code (httpcode) of the target URL is less than 500.  
       * 2. If the content type (Content-Type) in the response header of the target URL is application/pdf, the system automatically triggers PDF parsing (PDF files up to 20 MB are supported). This operation is counted as an additional valid request.  
       * 3. Trial terms: During the trial period, the API is limited to 5 queries per second (QPS); the trial quota is 1,000 requests per 30 days.
       *
       * @param request ReadPageScrapeRequest
       * @return ReadPageScrapeResponse
       */
      Models::ReadPageScrapeResponse readPageScrape(const Models::ReadPageScrapeRequest &request);

      /**
       * @summary 扫描文件
       *
       * @param request ScanFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScanFileResponse
       */
      Models::ScanFileResponse scanFileWithOptions(const Models::ScanFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 扫描文件
       *
       * @param request ScanFileRequest
       * @return ScanFileResponse
       */
      Models::ScanFileResponse scanFile(const Models::ScanFileRequest &request);

      /**
       * @summary Provides access to the Tongxiao unified search API, enabling quick and easy integration of web-wide general search capabilities.
       *
       * @param request UnifiedSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnifiedSearchResponse
       */
      Models::UnifiedSearchResponse unifiedSearchWithOptions(const Models::UnifiedSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides access to the Tongxiao unified search API, enabling quick and easy integration of web-wide general search capabilities.
       *
       * @param request UnifiedSearchRequest
       * @return UnifiedSearchResponse
       */
      Models::UnifiedSearchResponse unifiedSearch(const Models::UnifiedSearchRequest &request);
  };
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
