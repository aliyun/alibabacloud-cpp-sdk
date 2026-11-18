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
       * @summary Describes how to invoke the multi-stage streaming API V3 for general search by using the Alibaba Cloud OpenAPI SDK and provides parameter descriptions.
       *
       * @description Provides streaming results in two stages, common_search and post_retrieval, for customers to use on demand. General search results (common_search): the original search results. Covers key fields such as web page title, dynamic summary, body text, source website, and publish time. Post-retrieval processing (post_retrieval): reranks and filters the common_search results from the previous stage by using a rerank model. The mean average precision (mAP) metric for context relevancy of search results is improved by about 5%, and the latency is increased by about 110 ms.
       *
       * @param request AiSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AiSearchResponse
       */
      FutureGenerator<Models::AiSearchResponse> aiSearchWithSSE(const Models::AiSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes how to invoke the multi-stage streaming API V3 for general search by using the Alibaba Cloud OpenAPI SDK and provides parameter descriptions.
       *
       * @description Provides streaming results in two stages, common_search and post_retrieval, for customers to use on demand. General search results (common_search): the original search results. Covers key fields such as web page title, dynamic summary, body text, source website, and publish time. Post-retrieval processing (post_retrieval): reranks and filters the common_search results from the previous stage by using a rerank model. The mean average precision (mAP) metric for context relevancy of search results is improved by about 5%, and the latency is increased by about 110 ms.
       *
       * @param request AiSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AiSearchResponse
       */
      Models::AiSearchResponse aiSearchWithOptions(const Models::AiSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes how to invoke the multi-stage streaming API V3 for general search by using the Alibaba Cloud OpenAPI SDK and provides parameter descriptions.
       *
       * @description Provides streaming results in two stages, common_search and post_retrieval, for customers to use on demand. General search results (common_search): the original search results. Covers key fields such as web page title, dynamic summary, body text, source website, and publish time. Post-retrieval processing (post_retrieval): reranks and filters the common_search results from the previous stage by using a rerank model. The mean average precision (mAP) metric for context relevancy of search results is improved by about 5%, and the latency is increased by about 110 ms.
       *
       * @param request AiSearchRequest
       * @return AiSearchResponse
       */
      Models::AiSearchResponse aiSearch(const Models::AiSearchRequest &request);

      /**
       * @summary Performs general natural language queries.
       *
       * @description The general API for natural language search.
       *
       * @param request CommonQueryBySceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommonQueryBySceneResponse
       */
      Models::CommonQueryBySceneResponse commonQueryBySceneWithOptions(const Models::CommonQueryBySceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs general natural language queries.
       *
       * @description The general API for natural language search.
       *
       * @param request CommonQueryBySceneRequest
       * @return CommonQueryBySceneResponse
       */
      Models::CommonQueryBySceneResponse commonQueryByScene(const Models::CommonQueryBySceneRequest &request);

      /**
       * @summary This topic describes how to call the GenericAdvancedSearch operation by using Alibaba Cloud OpenAPI SDKs and provides parameter descriptions. Compared with GenericSearch, GenericAdvancedSearch provides better recall from authoritative websites and returns up to 40 results, delivering more authoritative and diverse data. The response parameters and format of the enhanced operation are the same as those of GenericAdvancedSearch.
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
       * @summary This topic describes how to call the GenericAdvancedSearch operation by using Alibaba Cloud OpenAPI SDKs and provides parameter descriptions. Compared with GenericSearch, GenericAdvancedSearch provides better recall from authoritative websites and returns up to 40 results, delivering more authoritative and diverse data. The response parameters and format of the enhanced operation are the same as those of GenericAdvancedSearch.
       *
       * @description GenericAdvancedSearch is currently in the testing phase. New specifications will be available for purchase in the future.
       *
       * @param request GenericAdvancedSearchRequest
       * @return GenericAdvancedSearchResponse
       */
      Models::GenericAdvancedSearchResponse genericAdvancedSearch(const Models::GenericAdvancedSearchRequest &request);

      /**
       * @summary Performs a general search.
       *
       * @param tmpReq GenericSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenericSearchResponse
       */
      Models::GenericSearchResponse genericSearchWithOptions(const Models::GenericSearchRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a general search.
       *
       * @param request GenericSearchRequest
       * @return GenericSearchResponse
       */
      Models::GenericSearchResponse genericSearch(const Models::GenericSearchRequest &request);

      /**
       * @summary Queries the daily usage of the information query service API.
       *
       * @param request GetIqsUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIqsUsageResponse
       */
      Models::GetIqsUsageResponse getIqsUsageWithOptions(const Models::GetIqsUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily usage of the information query service API.
       *
       * @param request GetIqsUsageRequest
       * @return GetIqsUsageResponse
       */
      Models::GetIqsUsageResponse getIqsUsage(const Models::GetIqsUsageRequest &request);

      /**
       * @summary Searches for global information by using the Global Edition search.
       *
       * @description This topic describes how to use the Global Edition search (GlobalSearch) and provides parameter descriptions.
       *
       * @param request GlobalSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalSearchResponse
       */
      Models::GlobalSearchResponse globalSearchWithOptions(const Models::GlobalSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for global information by using the Global Edition search.
       *
       * @description This topic describes how to use the Global Edition search (GlobalSearch) and provides parameter descriptions.
       *
       * @param request GlobalSearchRequest
       * @return GlobalSearchResponse
       */
      Models::GlobalSearchResponse globalSearch(const Models::GlobalSearchRequest &request);

      /**
       * @summary Provides medical Q&A.
       *
       * @param request MedicalAnswerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MedicalAnswerResponse
       */
      Models::MedicalAnswerResponse medicalAnswerWithOptions(const Models::MedicalAnswerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides medical Q&A.
       *
       * @param request MedicalAnswerRequest
       * @return MedicalAnswerResponse
       */
      Models::MedicalAnswerResponse medicalAnswer(const Models::MedicalAnswerRequest &request);

      /**
       * @summary Queries the health graph.
       *
       * @param request MedicalKnowledgeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MedicalKnowledgeResponse
       */
      Models::MedicalKnowledgeResponse medicalKnowledgeWithOptions(const Models::MedicalKnowledgeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health graph.
       *
       * @param request MedicalKnowledgeRequest
       * @return MedicalKnowledgeResponse
       */
      Models::MedicalKnowledgeResponse medicalKnowledge(const Models::MedicalKnowledgeRequest &request);

      /**
       * @summary Performs a multimodal search.
       *
       * @param request MultimodalSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultimodalSearchResponse
       */
      Models::MultimodalSearchResponse multimodalSearchWithOptions(const Models::MultimodalSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a multimodal search.
       *
       * @param request MultimodalSearchRequest
       * @return MultimodalSearchResponse
       */
      Models::MultimodalSearchResponse multimodalSearch(const Models::MultimodalSearchRequest &request);

      /**
       * @summary This topic describes the SearchStream streaming API for intelligent search and AI chat. Based on retrieval augmented generation (RAG) and large language models, this API accepts natural language questions from users and can automatically execute intent recognition, query rewrite, and content generation, and retrieve data from multiple sources. The API uses the Server-Sent Events (SSE) streaming protocol to return data, supporting real-time output of the infer status, reference sources, and token-by-token generated answers. This API is suitable for AI chat and search scenarios that require low latency and high interpretability.
       *
       * @param request OmniAnswerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OmniAnswerResponse
       */
      FutureGenerator<Models::OmniAnswerResponse> omniAnswerWithSSE(const Models::OmniAnswerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the SearchStream streaming API for intelligent search and AI chat. Based on retrieval augmented generation (RAG) and large language models, this API accepts natural language questions from users and can automatically execute intent recognition, query rewrite, and content generation, and retrieve data from multiple sources. The API uses the Server-Sent Events (SSE) streaming protocol to return data, supporting real-time output of the infer status, reference sources, and token-by-token generated answers. This API is suitable for AI chat and search scenarios that require low latency and high interpretability.
       *
       * @param request OmniAnswerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OmniAnswerResponse
       */
      Models::OmniAnswerResponse omniAnswerWithOptions(const Models::OmniAnswerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the SearchStream streaming API for intelligent search and AI chat. Based on retrieval augmented generation (RAG) and large language models, this API accepts natural language questions from users and can automatically execute intent recognition, query rewrite, and content generation, and retrieve data from multiple sources. The API uses the Server-Sent Events (SSE) streaming protocol to return data, supporting real-time output of the infer status, reference sources, and token-by-token generated answers. This API is suitable for AI chat and search scenarios that require low latency and high interpretability.
       *
       * @param request OmniAnswerRequest
       * @return OmniAnswerResponse
       */
      Models::OmniAnswerResponse omniAnswer(const Models::OmniAnswerRequest &request);

      /**
       * @summary Retrieves HTML and parses static web page content.
       *
       * @description 1. A request is counted as valid when the HTTP response code of the destination URL is less than 500.
       * 2. If the content type in the response header of the destination URL is application/pdf, the system automatically triggers PDF parsing (the maximum PDF size is 20 MB). This operation is counted as an additional valid request.
       * 3. Trial instructions: During the trial period, the API rate limit is 5 QPS, and the trial quota is 1,000 requests per 30 days.
       *
       * @param request ReadPageBasicRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadPageBasicResponse
       */
      Models::ReadPageBasicResponse readPageBasicWithOptions(const Models::ReadPageBasicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves HTML and parses static web page content.
       *
       * @description 1. A request is counted as valid when the HTTP response code of the destination URL is less than 500.
       * 2. If the content type in the response header of the destination URL is application/pdf, the system automatically triggers PDF parsing (the maximum PDF size is 20 MB). This operation is counted as an additional valid request.
       * 3. Trial instructions: During the trial period, the API rate limit is 5 QPS, and the trial quota is 1,000 requests per 30 days.
       *
       * @param request ReadPageBasicRequest
       * @return ReadPageBasicResponse
       */
      Models::ReadPageBasicResponse readPageBasic(const Models::ReadPageBasicRequest &request);

      /**
       * @summary Reads HTML and parses web page content in a browser sandbox environment. The operation starts parsing after the resources on the target page are fully loaded. You can adjust the maximum wait time by using the pageTimeout parameter. The overall execution duration is significantly affected by the resource loading status of the target site.
       *
       * @description 1. A request is counted as a valid request when the HTTP status code of the target URL is less than 500.
       * 2. If the Content-Type in the response header of the target URL is application/pdf, the system automatically triggers PDF parsing (the maximum size of a PDF file that can be processed is 20 MB). This operation is counted as an additional valid request.
       * 3. Trial description: During the trial period, the API operation is limited to 5 QPS. The trial quota is 1,000 requests per 30 days.
       *
       * @param request ReadPageScrapeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadPageScrapeResponse
       */
      Models::ReadPageScrapeResponse readPageScrapeWithOptions(const Models::ReadPageScrapeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reads HTML and parses web page content in a browser sandbox environment. The operation starts parsing after the resources on the target page are fully loaded. You can adjust the maximum wait time by using the pageTimeout parameter. The overall execution duration is significantly affected by the resource loading status of the target site.
       *
       * @description 1. A request is counted as a valid request when the HTTP status code of the target URL is less than 500.
       * 2. If the Content-Type in the response header of the target URL is application/pdf, the system automatically triggers PDF parsing (the maximum size of a PDF file that can be processed is 20 MB). This operation is counted as an additional valid request.
       * 3. Trial description: During the trial period, the API operation is limited to 5 QPS. The trial quota is 1,000 requests per 30 days.
       *
       * @param request ReadPageScrapeRequest
       * @return ReadPageScrapeResponse
       */
      Models::ReadPageScrapeResponse readPageScrape(const Models::ReadPageScrapeRequest &request);

      /**
       * @summary Provides the Tongxiao unified search API to quickly and easily integrate web-wide general search capabilities.
       *
       * @param request UnifiedSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnifiedSearchResponse
       */
      Models::UnifiedSearchResponse unifiedSearchWithOptions(const Models::UnifiedSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides the Tongxiao unified search API to quickly and easily integrate web-wide general search capabilities.
       *
       * @param request UnifiedSearchRequest
       * @return UnifiedSearchResponse
       */
      Models::UnifiedSearchResponse unifiedSearch(const Models::UnifiedSearchRequest &request);
  };
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
