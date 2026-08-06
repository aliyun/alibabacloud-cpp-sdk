// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MILVUSKNOWLEDGEBASE20260604_HPP_
#define ALIBABACLOUD_MILVUSKNOWLEDGEBASE20260604_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/MilvusKnowledgeBase20260604Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/MilvusKnowledgeBase20260604.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MilvusKnowledgeBase20260604
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加文档到知识库
       *
       * @param request AddDocumentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDocumentsResponse
       */
      Models::AddDocumentsResponse addDocumentsWithOptions(const string &datasetId, const Models::AddDocumentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加文档到知识库
       *
       * @param request AddDocumentsRequest
       * @return AddDocumentsResponse
       */
      Models::AddDocumentsResponse addDocuments(const string &datasetId, const Models::AddDocumentsRequest &request);

      /**
       * @summary 获取知识库文件预签名URL
       *
       * @param request GetKnowledgeBasePreSignedUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeBasePreSignedUrlResponse
       */
      Models::GetKnowledgeBasePreSignedUrlResponse getKnowledgeBasePreSignedUrlWithOptions(const string &datasetId, const Models::GetKnowledgeBasePreSignedUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取知识库文件预签名URL
       *
       * @param request GetKnowledgeBasePreSignedUrlRequest
       * @return GetKnowledgeBasePreSignedUrlResponse
       */
      Models::GetKnowledgeBasePreSignedUrlResponse getKnowledgeBasePreSignedUrl(const string &datasetId, const Models::GetKnowledgeBasePreSignedUrlRequest &request);

      /**
       * @summary Retrieves documents from a knowledge base.
       *
       * @description Retrieves documents from a specified knowledge base by question or image. Use DRAFT, LATEST_PUBLISHED, or vN display names for the version. Pass tag filter conditions using the actual backend operators.
       *
       * @param request SearchKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchKnowledgeBaseResponse
       */
      Models::SearchKnowledgeBaseResponse searchKnowledgeBaseWithOptions(const string &knowledgeBaseId, const Models::SearchKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves documents from a knowledge base.
       *
       * @description Retrieves documents from a specified knowledge base by question or image. Use DRAFT, LATEST_PUBLISHED, or vN display names for the version. Pass tag filter conditions using the actual backend operators.
       *
       * @param request SearchKnowledgeBaseRequest
       * @return SearchKnowledgeBaseResponse
       */
      Models::SearchKnowledgeBaseResponse searchKnowledgeBase(const string &knowledgeBaseId, const Models::SearchKnowledgeBaseRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MilvusKnowledgeBase20260604
#endif
