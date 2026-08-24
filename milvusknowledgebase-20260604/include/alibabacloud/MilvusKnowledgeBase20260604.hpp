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
       * @summary Registers files that are uploaded to the knowledge base storage as knowledge base documents and **automatically triggers parsing** (chunking and embedding). Two import types are supported:
       * - `LOCAL_UPLOAD`: Works with the `GetKnowledgeBasePreSignedUrl` direct upload flow. This operation only registers the file and does not verify whether the file is actually uploaded. Therefore, you must complete the PUT upload before calling this operation.
       * - `OSS_IMPORT`: Imports files from an external OSS bucket. The operation creates an asynchronous import task and returns a `knowledge_import_task_id`. The system downloads and registers the files in the background.
       * A maximum of 100 files can be registered in a single request.
       *
       * @param request AddDocumentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDocumentsResponse
       */
      Models::AddDocumentsResponse addDocumentsWithOptions(const string &datasetId, const Models::AddDocumentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers files that are uploaded to the knowledge base storage as knowledge base documents and **automatically triggers parsing** (chunking and embedding). Two import types are supported:
       * - `LOCAL_UPLOAD`: Works with the `GetKnowledgeBasePreSignedUrl` direct upload flow. This operation only registers the file and does not verify whether the file is actually uploaded. Therefore, you must complete the PUT upload before calling this operation.
       * - `OSS_IMPORT`: Imports files from an external OSS bucket. The operation creates an asynchronous import task and returns a `knowledge_import_task_id`. The system downloads and registers the files in the background.
       * A maximum of 100 files can be registered in a single request.
       *
       * @param request AddDocumentsRequest
       * @return AddDocumentsResponse
       */
      Models::AddDocumentsResponse addDocuments(const string &datasetId, const Models::AddDocumentsRequest &request);

      /**
       * @summary Generates an **OSS pre-signed PUT URL** pointing to the knowledge base dedicated storage for each file in `Documents`. The caller uses the URL to upload file content directly to Object Storage Service (OSS), and then calls `AddDocuments` to register the files. A maximum of 100 files can be processed per request.
       *
       * @param request GetKnowledgeBasePreSignedUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeBasePreSignedUrlResponse
       */
      Models::GetKnowledgeBasePreSignedUrlResponse getKnowledgeBasePreSignedUrlWithOptions(const string &datasetId, const Models::GetKnowledgeBasePreSignedUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an **OSS pre-signed PUT URL** pointing to the knowledge base dedicated storage for each file in `Documents`. The caller uses the URL to upload file content directly to Object Storage Service (OSS), and then calls `AddDocuments` to register the files. A maximum of 100 files can be processed per request.
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
