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
       * @summary Registers files that have been uploaded to the knowledge base storage as knowledge base documents and **automatically triggers parsing** (chunking and embedding). Supports two types of import:
       * - `LOCAL_UPLOAD`: Used with the `GetKnowledgeBasePreSignedUrl` direct upload process. This operation only registers the files and does not verify whether the files have been actually uploaded. Therefore, you must complete the PUT upload first.
       * - `OSS_IMPORT`: Imports files from an external OSS bucket. This operation creates an asynchronous import task and returns the `knowledge_import_task_id`. The system downloads and registers the files in the background.
       * A maximum of 100 files can be processed at a time.
       *
       * @param request AddDocumentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDocumentsResponse
       */
      Models::AddDocumentsResponse addDocumentsWithOptions(const string &datasetId, const Models::AddDocumentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers files that have been uploaded to the knowledge base storage as knowledge base documents and **automatically triggers parsing** (chunking and embedding). Supports two types of import:
       * - `LOCAL_UPLOAD`: Used with the `GetKnowledgeBasePreSignedUrl` direct upload process. This operation only registers the files and does not verify whether the files have been actually uploaded. Therefore, you must complete the PUT upload first.
       * - `OSS_IMPORT`: Imports files from an external OSS bucket. This operation creates an asynchronous import task and returns the `knowledge_import_task_id`. The system downloads and registers the files in the background.
       * A maximum of 100 files can be processed at a time.
       *
       * @param request AddDocumentsRequest
       * @return AddDocumentsResponse
       */
      Models::AddDocumentsResponse addDocuments(const string &datasetId, const Models::AddDocumentsRequest &request);

      /**
       * @summary Generates an **Object Storage Service (OSS) pre-signed PUT URL** pointing to the dedicated storage of the knowledge base for each file in `Documents`. Callers use the URL to upload file content directly to OSS and then call `AddDocuments` to complete the registration. A maximum of 100 files can be processed at a time.
       *
       * @param request GetKnowledgeBasePreSignedUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeBasePreSignedUrlResponse
       */
      Models::GetKnowledgeBasePreSignedUrlResponse getKnowledgeBasePreSignedUrlWithOptions(const string &datasetId, const Models::GetKnowledgeBasePreSignedUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an **Object Storage Service (OSS) pre-signed PUT URL** pointing to the dedicated storage of the knowledge base for each file in `Documents`. Callers use the URL to upload file content directly to OSS and then call `AddDocuments` to complete the registration. A maximum of 100 files can be processed at a time.
       *
       * @param request GetKnowledgeBasePreSignedUrlRequest
       * @return GetKnowledgeBasePreSignedUrlResponse
       */
      Models::GetKnowledgeBasePreSignedUrlResponse getKnowledgeBasePreSignedUrl(const string &datasetId, const Models::GetKnowledgeBasePreSignedUrlRequest &request);

      /**
       * @summary Searches a knowledge base.
       *
       * @description Searches a specified knowledge base by using a text query or an image. For the version parameter, use the display name DRAFT, LATEST_PUBLISHED, or vN. Pass tag filter conditions based on the actual operators used by the backend.
       *
       * @param request SearchKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchKnowledgeBaseResponse
       */
      Models::SearchKnowledgeBaseResponse searchKnowledgeBaseWithOptions(const string &knowledgeBaseId, const Models::SearchKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches a knowledge base.
       *
       * @description Searches a specified knowledge base by using a text query or an image. For the version parameter, use the display name DRAFT, LATEST_PUBLISHED, or vN. Pass tag filter conditions based on the actual operators used by the backend.
       *
       * @param request SearchKnowledgeBaseRequest
       * @return SearchKnowledgeBaseResponse
       */
      Models::SearchKnowledgeBaseResponse searchKnowledgeBase(const string &knowledgeBaseId, const Models::SearchKnowledgeBaseRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MilvusKnowledgeBase20260604
#endif
