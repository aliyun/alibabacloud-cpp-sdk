// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BAILIAN20231229_HPP_
#define ALIBABACLOUD_BAILIAN20231229_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Bailian20231229Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Bailian20231229.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a category in the specified workspace to categorize and manage documents. You can create up to 1,000 categories in each workspace.
       *
       * @description *   You cannot use API to create structured table. To create a table, go to [Data Management](https://bailian.console.alibabacloud.com/#/data-center) in the console. You can associate a knowledge base with ApsaraDB for RDS to automatically update structured knowledge base. For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
       * *   If you are using a RAM user, you must first obtain the OpenAPI management permissions (namely sfm:AddCategory) of Model Studio. For more information, see [Grant OpenAPI permissions to a RAM user](https://help.aliyun.com/document_detail/2848578.html). If you are using the Alibaba Cloud account, you do not need permissions. We recommend that you use [the latest version of the SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * *   You can create up to 1,000 categories in each workspace.
       * *   This interface is not idempotent.
       * **Throttling:** Throttling will be triggered if you call this operation frequently. Do not exceed 5 times per second. If throttling is triggered, try again later.
       *
       * @param request AddCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategoryWithOptions(const string &WorkspaceId, const Models::AddCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a category in the specified workspace to categorize and manage documents. You can create up to 1,000 categories in each workspace.
       *
       * @description *   You cannot use API to create structured table. To create a table, go to [Data Management](https://bailian.console.alibabacloud.com/#/data-center) in the console. You can associate a knowledge base with ApsaraDB for RDS to automatically update structured knowledge base. For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
       * *   If you are using a RAM user, you must first obtain the OpenAPI management permissions (namely sfm:AddCategory) of Model Studio. For more information, see [Grant OpenAPI permissions to a RAM user](https://help.aliyun.com/document_detail/2848578.html). If you are using the Alibaba Cloud account, you do not need permissions. We recommend that you use [the latest version of the SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * *   You can create up to 1,000 categories in each workspace.
       * *   This interface is not idempotent.
       * **Throttling:** Throttling will be triggered if you call this operation frequently. Do not exceed 5 times per second. If throttling is triggered, try again later.
       *
       * @param request AddCategoryRequest
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategory(const string &WorkspaceId, const Models::AddCategoryRequest &request);

      /**
       * @summary Imports an unstructured document stored in the temporary storage space to Data Management. You cannot use the API to import structured documents. Use the console instead.
       *
       * @description *   Before you call this operation, make sure that you have obtained the lease and uploaded the document to the temporary storage space by using the [ApplyFileUploadLease](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-applyfileuploadlease) operation. For more information, see [Upload files by calling API](https://www.alibabacloud.com/help/en/model-studio/developer-reference/upload-files-by-calling-api).
       * >  After you call this operation, the used lease ID expires immediately. Do not use the same lease ID to submit new requests.
       * *   You must call this operation within 12 hours after you call the [ApplyFileUploadLease](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-applyfileuploadlease) operation. Otherwise, the lease expires and the request fails.
       * *   After you call this operation, the system parses and imports your document. The process takes some time.
       * *   This interface is not idempotent.
       *
       * @param tmpReq AddFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFileResponse
       */
      Models::AddFileResponse addFileWithOptions(const string &WorkspaceId, const Models::AddFileRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports an unstructured document stored in the temporary storage space to Data Management. You cannot use the API to import structured documents. Use the console instead.
       *
       * @description *   Before you call this operation, make sure that you have obtained the lease and uploaded the document to the temporary storage space by using the [ApplyFileUploadLease](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-applyfileuploadlease) operation. For more information, see [Upload files by calling API](https://www.alibabacloud.com/help/en/model-studio/developer-reference/upload-files-by-calling-api).
       * >  After you call this operation, the used lease ID expires immediately. Do not use the same lease ID to submit new requests.
       * *   You must call this operation within 12 hours after you call the [ApplyFileUploadLease](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-applyfileuploadlease) operation. Otherwise, the lease expires and the request fails.
       * *   After you call this operation, the system parses and imports your document. The process takes some time.
       * *   This interface is not idempotent.
       *
       * @param request AddFileRequest
       * @return AddFileResponse
       */
      Models::AddFileResponse addFile(const string &WorkspaceId, const Models::AddFileRequest &request);

      /**
       * @summary 将已授权OSS Bucket中的文件添加到百炼应用数据
       *
       * @param tmpReq AddFilesFromAuthorizedOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFilesFromAuthorizedOssResponse
       */
      Models::AddFilesFromAuthorizedOssResponse addFilesFromAuthorizedOssWithOptions(const string &WorkspaceId, const Models::AddFilesFromAuthorizedOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将已授权OSS Bucket中的文件添加到百炼应用数据
       *
       * @param request AddFilesFromAuthorizedOssRequest
       * @return AddFilesFromAuthorizedOssResponse
       */
      Models::AddFilesFromAuthorizedOssResponse addFilesFromAuthorizedOss(const string &WorkspaceId, const Models::AddFilesFromAuthorizedOssRequest &request);

      /**
       * @summary Applies for a document upload lease to upload a document.
       *
       * @description *   This operation returns an HTTP URL that can be used to upload an unstructured document (the lease) and parameters required for the upload. Structured documents are not supported.
       * *   The HTTP URL returned by this operation is valid only for minutes. Upload the document before the URL expires.
       * *   After you apply for a lease and upload a document, the document is stored in a temporary storage space for 12 hours. 
       * *   This interface is not idempotent.
       *
       * @param request ApplyFileUploadLeaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyFileUploadLeaseResponse
       */
      Models::ApplyFileUploadLeaseResponse applyFileUploadLeaseWithOptions(const string &CategoryId, const string &WorkspaceId, const Models::ApplyFileUploadLeaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a document upload lease to upload a document.
       *
       * @description *   This operation returns an HTTP URL that can be used to upload an unstructured document (the lease) and parameters required for the upload. Structured documents are not supported.
       * *   The HTTP URL returned by this operation is valid only for minutes. Upload the document before the URL expires.
       * *   After you apply for a lease and upload a document, the document is stored in a temporary storage space for 12 hours. 
       * *   This interface is not idempotent.
       *
       * @param request ApplyFileUploadLeaseRequest
       * @return ApplyFileUploadLeaseResponse
       */
      Models::ApplyFileUploadLeaseResponse applyFileUploadLease(const string &CategoryId, const string &WorkspaceId, const Models::ApplyFileUploadLeaseRequest &request);

      /**
       * @summary This interface is intended for pro-code deployment only; other scenarios are currently not supported. It is used to apply for a temporary file upload lease. After obtaining the lease, you must upload the file manually.
       *
       * @description 1\\. This interface is intended for pro-code deployment only; other scenarios are currently not supported. 2. After obtaining the temporary file upload lease via this interface, upload the file manually.
       *
       * @param request ApplyTempStorageLeaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyTempStorageLeaseResponse
       */
      Models::ApplyTempStorageLeaseResponse applyTempStorageLeaseWithOptions(const string &WorkspaceId, const Models::ApplyTempStorageLeaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is intended for pro-code deployment only; other scenarios are currently not supported. It is used to apply for a temporary file upload lease. After obtaining the lease, you must upload the file manually.
       *
       * @description 1\\. This interface is intended for pro-code deployment only; other scenarios are currently not supported. 2. After obtaining the temporary file upload lease via this interface, upload the file manually.
       *
       * @param request ApplyTempStorageLeaseRequest
       * @return ApplyTempStorageLeaseResponse
       */
      Models::ApplyTempStorageLeaseResponse applyTempStorageLease(const string &WorkspaceId, const Models::ApplyTempStorageLeaseRequest &request);

      /**
       * @summary Configure the parsing method for a specific file type. For example, use LLM parsing for .pdf files, or use Qwen VL parsing for .jpg files.
       *
       * @param tmpReq ChangeParseSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeParseSettingResponse
       */
      Models::ChangeParseSettingResponse changeParseSettingWithOptions(const string &WorkspaceId, const Models::ChangeParseSettingRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configure the parsing method for a specific file type. For example, use LLM parsing for .pdf files, or use Qwen VL parsing for .jpg files.
       *
       * @param request ChangeParseSettingRequest
       * @return ChangeParseSettingResponse
       */
      Models::ChangeParseSettingResponse changeParseSetting(const string &WorkspaceId, const Models::ChangeParseSettingRequest &request);

      /**
       * @summary 创建并发布智能体应用
       *
       * @param tmpReq CreateAndPulishAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndPulishAgentResponse
       */
      Models::CreateAndPulishAgentResponse createAndPulishAgentWithOptions(const string &workspaceId, const Models::CreateAndPulishAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建并发布智能体应用
       *
       * @param request CreateAndPulishAgentRequest
       * @return CreateAndPulishAgentResponse
       */
      Models::CreateAndPulishAgentResponse createAndPulishAgent(const string &workspaceId, const Models::CreateAndPulishAgentRequest &request);

      /**
       * @summary Create a knowledge base of the document search type.
       *
       * @description *   **Limits**: This operation can create only knowledge base of the document search type. Data query and image Q\\&A types are not supported. Use the console instead.
       * *   **Required permissions**
       *     *   **RAM users**: Must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) of Model Studio (such as the `AliyunBailianDataFullAccess` policy, which includes the sfm:CreateIndex permission required), and [become member of a workspace](https://help.aliyun.com/document_detail/2851098.html).
       *     *   **Alibaba Cloud account**: Has the permission by default, and can call the operation directly.
       * *   **Call method**: We recommend using the latest version of the [GenAI Service Platform SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK encapsulates complex signature computational logic to simplify the call process.
       * *   **What to do next**: This operation only initializes knowledge base creation job. After that, call **SubmitIndexJob** to complete the creation. Otherwise, you will get an empty knowledge base. For more information about the sample code, see [Knowledge base API guide](https://help.aliyun.com/document_detail/2852772.html).
       * *   **Idempotence**: This operation is not idempotent. If you call the operation for multiple times, you may create several knowledge bases with the same name. We recommend following a "query first, then create" logic.
       * **Rate limit:** Rate limiting will be triggered if you call this operation frequently. Do not exceed 10 times per second. If limiting is triggered, try again later.
       *
       * @param tmpReq CreateIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIndexResponse
       */
      Models::CreateIndexResponse createIndexWithOptions(const string &WorkspaceId, const Models::CreateIndexRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a knowledge base of the document search type.
       *
       * @description *   **Limits**: This operation can create only knowledge base of the document search type. Data query and image Q\\&A types are not supported. Use the console instead.
       * *   **Required permissions**
       *     *   **RAM users**: Must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) of Model Studio (such as the `AliyunBailianDataFullAccess` policy, which includes the sfm:CreateIndex permission required), and [become member of a workspace](https://help.aliyun.com/document_detail/2851098.html).
       *     *   **Alibaba Cloud account**: Has the permission by default, and can call the operation directly.
       * *   **Call method**: We recommend using the latest version of the [GenAI Service Platform SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK encapsulates complex signature computational logic to simplify the call process.
       * *   **What to do next**: This operation only initializes knowledge base creation job. After that, call **SubmitIndexJob** to complete the creation. Otherwise, you will get an empty knowledge base. For more information about the sample code, see [Knowledge base API guide](https://help.aliyun.com/document_detail/2852772.html).
       * *   **Idempotence**: This operation is not idempotent. If you call the operation for multiple times, you may create several knowledge bases with the same name. We recommend following a "query first, then create" logic.
       * **Rate limit:** Rate limiting will be triggered if you call this operation frequently. Do not exceed 10 times per second. If limiting is triggered, try again later.
       *
       * @param request CreateIndexRequest
       * @return CreateIndexResponse
       */
      Models::CreateIndexResponse createIndex(const string &WorkspaceId, const Models::CreateIndexRequest &request);

      /**
       * @summary 创建Memory
       *
       * @param request CreateMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryResponse
       */
      Models::CreateMemoryResponse createMemoryWithOptions(const string &workspaceId, const Models::CreateMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Memory
       *
       * @param request CreateMemoryRequest
       * @return CreateMemoryResponse
       */
      Models::CreateMemoryResponse createMemory(const string &workspaceId, const Models::CreateMemoryRequest &request);

      /**
       * @summary 创建记忆Node
       *
       * @param request CreateMemoryNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryNodeResponse
       */
      Models::CreateMemoryNodeResponse createMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const Models::CreateMemoryNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建记忆Node
       *
       * @param request CreateMemoryNodeRequest
       * @return CreateMemoryNodeResponse
       */
      Models::CreateMemoryNodeResponse createMemoryNode(const string &workspaceId, const string &memoryId, const Models::CreateMemoryNodeRequest &request);

      /**
       * @summary Creates a prompt template.
       *
       * @param request CreatePromptTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePromptTemplateResponse
       */
      Models::CreatePromptTemplateResponse createPromptTemplateWithOptions(const string &workspaceId, const Models::CreatePromptTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a prompt template.
       *
       * @param request CreatePromptTemplateRequest
       * @return CreatePromptTemplateResponse
       */
      Models::CreatePromptTemplateResponse createPromptTemplate(const string &workspaceId, const Models::CreatePromptTemplateRequest &request);

      /**
       * @summary 删除智能体
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgentWithOptions(const string &workspaceId, const string &appCode, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除智能体
       *
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgent(const string &workspaceId, const string &appCode);

      /**
       * @summary 删除类目
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategoryWithOptions(const string &CategoryId, const string &WorkspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除类目
       *
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategory(const string &CategoryId, const string &WorkspaceId);

      /**
       * @summary Deletes a specified text chunk from a knowledge base. The deleted chunk cannot be retrieved or recalled.
       *
       * @description **
       * **Warning** After a text chunk is deleted, it cannot be restored. Proceed with caution.
       * *   **Required permissions**:
       *     *   **RAM users**: Must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) of Model Studio (such as the `AliyunBailianDataFullAccess` policy, which includes the sfm:DeleteChunk permission required), and [become member of a workspace](https://help.aliyun.com/document_detail/2851098.html).
       *     *   **Alibaba Cloud account**: Has the permission by default, and can call the operation directly.
       * *   **Call method**: We recommend using the latest version of the [GenAI Service Platform SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK encapsulates complex signature computational logic to simplify the call process.
       * *   **Delay**: The update takes effect immediately. During peak hours, the update may take place in seconds.
       * *   **Idempotence**: This operation is idempotent. If you perform a repeated operation on a chunk that has already been deleted, the interface returns a success.
       * **Rate limit:** Rate limiting will be triggered if you call this operation frequently. Do not exceed 10 times per second. If limiting is triggered, try again later.
       *
       * @param tmpReq DeleteChunkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChunkResponse
       */
      Models::DeleteChunkResponse deleteChunkWithOptions(const string &WorkspaceId, const Models::DeleteChunkRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified text chunk from a knowledge base. The deleted chunk cannot be retrieved or recalled.
       *
       * @description **
       * **Warning** After a text chunk is deleted, it cannot be restored. Proceed with caution.
       * *   **Required permissions**:
       *     *   **RAM users**: Must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) of Model Studio (such as the `AliyunBailianDataFullAccess` policy, which includes the sfm:DeleteChunk permission required), and [become member of a workspace](https://help.aliyun.com/document_detail/2851098.html).
       *     *   **Alibaba Cloud account**: Has the permission by default, and can call the operation directly.
       * *   **Call method**: We recommend using the latest version of the [GenAI Service Platform SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK encapsulates complex signature computational logic to simplify the call process.
       * *   **Delay**: The update takes effect immediately. During peak hours, the update may take place in seconds.
       * *   **Idempotence**: This operation is idempotent. If you perform a repeated operation on a chunk that has already been deleted, the interface returns a success.
       * **Rate limit:** Rate limiting will be triggered if you call this operation frequently. Do not exceed 10 times per second. If limiting is triggered, try again later.
       *
       * @param request DeleteChunkRequest
       * @return DeleteChunkResponse
       */
      Models::DeleteChunkResponse deleteChunk(const string &WorkspaceId, const Models::DeleteChunkRequest &request);

      /**
       * @summary 删除文档
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFileWithOptions(const string &FileId, const string &WorkspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文档
       *
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFile(const string &FileId, const string &WorkspaceId);

      /**
       * @summary Deletes a specified knowledge base permanently.
       *
       * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   If a knowledge base is being called by an application, disassociate the knowledge base before you can delete it. To disassociate the knowledge base, you must use the console. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base).
       * *   After you delete a knowledge base, it cannot be recovered. We recommend that you proceed with caution.
       * *   Imported documents are not deleted from the [Data Management](https://bailian.console.aliyun.com/#/data-center) if you call this operation.
       * *   This interface is idempotent.
       *
       * @param request DeleteIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndexResponse
       */
      Models::DeleteIndexResponse deleteIndexWithOptions(const string &WorkspaceId, const Models::DeleteIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified knowledge base permanently.
       *
       * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   If a knowledge base is being called by an application, disassociate the knowledge base before you can delete it. To disassociate the knowledge base, you must use the console. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base).
       * *   After you delete a knowledge base, it cannot be recovered. We recommend that you proceed with caution.
       * *   Imported documents are not deleted from the [Data Management](https://bailian.console.aliyun.com/#/data-center) if you call this operation.
       * *   This interface is idempotent.
       *
       * @param request DeleteIndexRequest
       * @return DeleteIndexResponse
       */
      Models::DeleteIndexResponse deleteIndex(const string &WorkspaceId, const Models::DeleteIndexRequest &request);

      /**
       * @summary Deletes one or more documents from a specified unstructured knowledge base permanently.
       *
       * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   Only documents with the INSERT_ERROR and FINISH states can be deleted. To query the status of documents in a specified knowledge base, call the [ListIndexDocuments](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-listindexdocuments) operation.
       * *   After you delete a document, it cannot be recovered and the [Retrieve](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-retrieve) operation cannot query information about the document. We recommend that you proceed with caution.
       * *   Imported documents are not deleted from the [Data Management](https://bailian.console.aliyun.com/#/data-center) if you call this operation.
       * *   This interface is idempotent.
       *
       * @param tmpReq DeleteIndexDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndexDocumentResponse
       */
      Models::DeleteIndexDocumentResponse deleteIndexDocumentWithOptions(const string &WorkspaceId, const Models::DeleteIndexDocumentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more documents from a specified unstructured knowledge base permanently.
       *
       * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   Only documents with the INSERT_ERROR and FINISH states can be deleted. To query the status of documents in a specified knowledge base, call the [ListIndexDocuments](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-listindexdocuments) operation.
       * *   After you delete a document, it cannot be recovered and the [Retrieve](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-retrieve) operation cannot query information about the document. We recommend that you proceed with caution.
       * *   Imported documents are not deleted from the [Data Management](https://bailian.console.aliyun.com/#/data-center) if you call this operation.
       * *   This interface is idempotent.
       *
       * @param request DeleteIndexDocumentRequest
       * @return DeleteIndexDocumentResponse
       */
      Models::DeleteIndexDocumentResponse deleteIndexDocument(const string &WorkspaceId, const Models::DeleteIndexDocumentRequest &request);

      /**
       * @summary 删除memory
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemoryWithOptions(const string &workspaceId, const string &memoryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除memory
       *
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemory(const string &workspaceId, const string &memoryId);

      /**
       * @summary 删除记忆Node
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryNodeResponse
       */
      Models::DeleteMemoryNodeResponse deleteMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除记忆Node
       *
       * @return DeleteMemoryNodeResponse
       */
      Models::DeleteMemoryNodeResponse deleteMemoryNode(const string &workspaceId, const string &memoryId, const string &memoryNodeId);

      /**
       * @summary Deletes a prompt template based on the template ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePromptTemplateResponse
       */
      Models::DeletePromptTemplateResponse deletePromptTemplateWithOptions(const string &workspaceId, const string &promptTemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a prompt template based on the template ID.
       *
       * @return DeletePromptTemplateResponse
       */
      Models::DeletePromptTemplateResponse deletePromptTemplate(const string &workspaceId, const string &promptTemplateId);

      /**
       * @summary Queries the details of an unstructured document.
       *
       * @description Before you call this API, make sure that your document is uploaded to the [Data Management](https://bailian.console.aliyun.com/knowledge-base#/data-center) page of Alibaba Cloud Model Studio.
       * *   You can also call this operation to query unstructured documents that you upload on the [Data Management](https://bailian.console.aliyun.com/knowledge-base#/data-center) page.
       * *   This operation is idempotent.
       * **Throttling:** Make sure that the interval between the two queries is at least 15 seconds. Otherwise, you may trigger system throttling. If throttling is triggered, try again later.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileResponse
       */
      Models::DescribeFileResponse describeFileWithOptions(const string &WorkspaceId, const string &FileId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an unstructured document.
       *
       * @description Before you call this API, make sure that your document is uploaded to the [Data Management](https://bailian.console.aliyun.com/knowledge-base#/data-center) page of Alibaba Cloud Model Studio.
       * *   You can also call this operation to query unstructured documents that you upload on the [Data Management](https://bailian.console.aliyun.com/knowledge-base#/data-center) page.
       * *   This operation is idempotent.
       * **Throttling:** Make sure that the interval between the two queries is at least 15 seconds. Otherwise, you may trigger system throttling. If throttling is triggered, try again later.
       *
       * @return DescribeFileResponse
       */
      Models::DescribeFileResponse describeFile(const string &WorkspaceId, const string &FileId);

      /**
       * @summary 查询支付宝打赏状态
       *
       * @param request GetAlipayTransferStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlipayTransferStatusResponse
       */
      Models::GetAlipayTransferStatusResponse getAlipayTransferStatusWithOptions(const Models::GetAlipayTransferStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询支付宝打赏状态
       *
       * @param request GetAlipayTransferStatusRequest
       * @return GetAlipayTransferStatusResponse
       */
      Models::GetAlipayTransferStatusResponse getAlipayTransferStatus(const Models::GetAlipayTransferStatusRequest &request);

      /**
       * @summary 支付宝打赏链接
       *
       * @param request GetAlipayUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlipayUrlResponse
       */
      Models::GetAlipayUrlResponse getAlipayUrlWithOptions(const Models::GetAlipayUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 支付宝打赏链接
       *
       * @param request GetAlipayUrlRequest
       * @return GetAlipayUrlResponse
       */
      Models::GetAlipayUrlResponse getAlipayUrl(const Models::GetAlipayUrlRequest &request);

      /**
       * @summary Lists all supported parser types based on the input file type (file extension).
       *
       * @param request GetAvailableParserTypesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAvailableParserTypesResponse
       */
      Models::GetAvailableParserTypesResponse getAvailableParserTypesWithOptions(const string &WorkspaceId, const Models::GetAvailableParserTypesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all supported parser types based on the input file type (file extension).
       *
       * @param request GetAvailableParserTypesRequest
       * @return GetAvailableParserTypesResponse
       */
      Models::GetAvailableParserTypesResponse getAvailableParserTypes(const string &WorkspaceId, const Models::GetAvailableParserTypesRequest &request);

      /**
       * @summary Queries the current status of a specified knowledge base creation or add document job.
       *
       * @description 1.  A knowledge base job is running. You can call the [SubmitIndexJob](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-submitindexjob) operation to create a creation job or the [SubmitIndexAddDocumentsJob](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-submitindexadddocumentsjob) operation to create a add document job. Then, obtain the `JobId` returned by the operations.
       * 2.  We recommend that you call this operation at intervals of more than 5 seconds.
       * 3.  This interface is idempotent.
       *
       * @param request GetIndexJobStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIndexJobStatusResponse
       */
      Models::GetIndexJobStatusResponse getIndexJobStatusWithOptions(const string &WorkspaceId, const Models::GetIndexJobStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current status of a specified knowledge base creation or add document job.
       *
       * @description 1.  A knowledge base job is running. You can call the [SubmitIndexJob](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-submitindexjob) operation to create a creation job or the [SubmitIndexAddDocumentsJob](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-submitindexadddocumentsjob) operation to create a add document job. Then, obtain the `JobId` returned by the operations.
       * 2.  We recommend that you call this operation at intervals of more than 5 seconds.
       * 3.  This interface is idempotent.
       *
       * @param request GetIndexJobStatusRequest
       * @return GetIndexJobStatusResponse
       */
      Models::GetIndexJobStatusResponse getIndexJobStatus(const string &WorkspaceId, const Models::GetIndexJobStatusRequest &request);

      /**
       * @summary 获取索引监控情况
       *
       * @param request GetIndexMonitorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIndexMonitorResponse
       */
      Models::GetIndexMonitorResponse getIndexMonitorWithOptions(const string &WorkspaceId, const Models::GetIndexMonitorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取索引监控情况
       *
       * @param request GetIndexMonitorRequest
       * @return GetIndexMonitorResponse
       */
      Models::GetIndexMonitorResponse getIndexMonitor(const string &WorkspaceId, const Models::GetIndexMonitorRequest &request);

      /**
       * @summary 获取memory
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemoryWithOptions(const string &workspaceId, const string &memoryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取memory
       *
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemory(const string &workspaceId, const string &memoryId);

      /**
       * @summary 获取记忆Node
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryNodeResponse
       */
      Models::GetMemoryNodeResponse getMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取记忆Node
       *
       * @return GetMemoryNodeResponse
       */
      Models::GetMemoryNodeResponse getMemoryNode(const string &workspaceId, const string &memoryId, const string &memoryNodeId);

      /**
       * @summary Queries the data parsing settings in a specified category.
       *
       * @param request GetParseSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParseSettingsResponse
       */
      Models::GetParseSettingsResponse getParseSettingsWithOptions(const string &WorkspaceId, const Models::GetParseSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data parsing settings in a specified category.
       *
       * @param request GetParseSettingsRequest
       * @return GetParseSettingsResponse
       */
      Models::GetParseSettingsResponse getParseSettings(const string &WorkspaceId, const Models::GetParseSettingsRequest &request);

      /**
       * @summary Obtains a prompt template based on the template ID.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPromptTemplateResponse
       */
      Models::GetPromptTemplateResponse getPromptTemplateWithOptions(const string &workspaceId, const string &promptTemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a prompt template based on the template ID.
       *
       * @return GetPromptTemplateResponse
       */
      Models::GetPromptTemplateResponse getPromptTemplate(const string &workspaceId, const string &promptTemplateId);

      /**
       * @summary 获取发布态智能体应用
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublishedAgentResponse
       */
      Models::GetPublishedAgentResponse getPublishedAgentWithOptions(const string &workspaceId, const string &appCode, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取发布态智能体应用
       *
       * @return GetPublishedAgentResponse
       */
      Models::GetPublishedAgentResponse getPublishedAgent(const string &workspaceId, const string &appCode);

      /**
       * @summary 高代码部署服务
       *
       * @param request HighCodeDeployRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return HighCodeDeployResponse
       */
      Models::HighCodeDeployResponse highCodeDeployWithOptions(const string &workspaceId, const Models::HighCodeDeployRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 高代码部署服务
       *
       * @param request HighCodeDeployRequest
       * @return HighCodeDeployResponse
       */
      Models::HighCodeDeployResponse highCodeDeploy(const string &workspaceId, const Models::HighCodeDeployRequest &request);

      /**
       * @summary ListCategory
       *
       * @param request ListCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoryResponse
       */
      Models::ListCategoryResponse listCategoryWithOptions(const string &WorkspaceId, const Models::ListCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListCategory
       *
       * @param request ListCategoryRequest
       * @return ListCategoryResponse
       */
      Models::ListCategoryResponse listCategory(const string &WorkspaceId, const Models::ListCategoryRequest &request);

      /**
       * @summary For unstructured knowledge base, obtains the details of all chunks of a specified document; for structured knowledge base, obtains the details of all chunks.
       *
       * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   This interface is idempotent.
       *
       * @param request ListChunksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChunksResponse
       */
      Models::ListChunksResponse listChunksWithOptions(const string &WorkspaceId, const Models::ListChunksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary For unstructured knowledge base, obtains the details of all chunks of a specified document; for structured knowledge base, obtains the details of all chunks.
       *
       * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   This interface is idempotent.
       *
       * @param request ListChunksRequest
       * @return ListChunksResponse
       */
      Models::ListChunksResponse listChunks(const string &WorkspaceId, const Models::ListChunksRequest &request);

      /**
       * @summary Queries the details of one or more documents in a specified category.
       *
       * @description *   If you are using a RAM user, you must first obtain the OpenAPI management permissions (namely sfm:ListFile) of Model Studio. For more information, see [Grant OpenAPI permissions to a RAM user](https://help.aliyun.com/document_detail/2848578.html). If you are using the Alibaba Cloud account, you do not need permissions. We recommend that you use [the latest version of the SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * *   During a paged query, set `MaxResults` to specify the maximum number of entries to return. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you query subsequent pages, set the `NextToken` parameter to the `NextToken` obtained in the last returned result. You can also set the `MaxResults` parameter to limit the number of entries to be returned. If no `NextToken` is returned, the result is completely returned and no more requests are required.
       * *   This operation is idempotent.
       * **Throttling:** Throttling will be triggered if you call this operation frequently. Do not exceed 5 times per second. If throttling is triggered, try again later.
       *
       * @param request ListFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFileResponse
       */
      Models::ListFileResponse listFileWithOptions(const string &WorkspaceId, const Models::ListFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more documents in a specified category.
       *
       * @description *   If you are using a RAM user, you must first obtain the OpenAPI management permissions (namely sfm:ListFile) of Model Studio. For more information, see [Grant OpenAPI permissions to a RAM user](https://help.aliyun.com/document_detail/2848578.html). If you are using the Alibaba Cloud account, you do not need permissions. We recommend that you use [the latest version of the SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * *   During a paged query, set `MaxResults` to specify the maximum number of entries to return. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you query subsequent pages, set the `NextToken` parameter to the `NextToken` obtained in the last returned result. You can also set the `MaxResults` parameter to limit the number of entries to be returned. If no `NextToken` is returned, the result is completely returned and no more requests are required.
       * *   This operation is idempotent.
       * **Throttling:** Throttling will be triggered if you call this operation frequently. Do not exceed 5 times per second. If throttling is triggered, try again later.
       *
       * @param request ListFileRequest
       * @return ListFileResponse
       */
      Models::ListFileResponse listFile(const string &WorkspaceId, const Models::ListFileRequest &request);

      /**
       * @summary Queries the details of one or more documents in a specified knowledge base.
       *
       * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   This interface is idempotent.
       *
       * @param request ListIndexDocumentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexDocumentsResponse
       */
      Models::ListIndexDocumentsResponse listIndexDocumentsWithOptions(const string &WorkspaceId, const Models::ListIndexDocumentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more documents in a specified knowledge base.
       *
       * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   This interface is idempotent.
       *
       * @param request ListIndexDocumentsRequest
       * @return ListIndexDocumentsResponse
       */
      Models::ListIndexDocumentsResponse listIndexDocuments(const string &WorkspaceId, const Models::ListIndexDocumentsRequest &request);

      /**
       * @summary 查询Index文件详情
       *
       * @param request ListIndexFileDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexFileDetailsResponse
       */
      Models::ListIndexFileDetailsResponse listIndexFileDetailsWithOptions(const string &WorkspaceId, const Models::ListIndexFileDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Index文件详情
       *
       * @param request ListIndexFileDetailsRequest
       * @return ListIndexFileDetailsResponse
       */
      Models::ListIndexFileDetailsResponse listIndexFileDetails(const string &WorkspaceId, const Models::ListIndexFileDetailsRequest &request);

      /**
       * @summary Lists knowledge bases in a specified workspace.
       *
       * @description This interface is idempotent.
       *
       * @param request ListIndicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndicesResponse
       */
      Models::ListIndicesResponse listIndicesWithOptions(const string &WorkspaceId, const Models::ListIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists knowledge bases in a specified workspace.
       *
       * @description This interface is idempotent.
       *
       * @param request ListIndicesRequest
       * @return ListIndicesResponse
       */
      Models::ListIndicesResponse listIndices(const string &WorkspaceId, const Models::ListIndicesRequest &request);

      /**
       * @summary 获取memory
       *
       * @param request ListMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoriesResponse
       */
      Models::ListMemoriesResponse listMemoriesWithOptions(const string &workspaceId, const Models::ListMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取memory
       *
       * @param request ListMemoriesRequest
       * @return ListMemoriesResponse
       */
      Models::ListMemoriesResponse listMemories(const string &workspaceId, const Models::ListMemoriesRequest &request);

      /**
       * @summary 获取记忆Node列表
       *
       * @param request ListMemoryNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoryNodesResponse
       */
      Models::ListMemoryNodesResponse listMemoryNodesWithOptions(const string &workspaceId, const string &memoryId, const Models::ListMemoryNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取记忆Node列表
       *
       * @param request ListMemoryNodesRequest
       * @return ListMemoryNodesResponse
       */
      Models::ListMemoryNodesResponse listMemoryNodes(const string &workspaceId, const string &memoryId, const Models::ListMemoryNodesRequest &request);

      /**
       * @summary Obtains a list of prompt templates.
       *
       * @param request ListPromptTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPromptTemplatesResponse
       */
      Models::ListPromptTemplatesResponse listPromptTemplatesWithOptions(const string &workspaceId, const Models::ListPromptTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of prompt templates.
       *
       * @param request ListPromptTemplatesRequest
       * @return ListPromptTemplatesResponse
       */
      Models::ListPromptTemplatesResponse listPromptTemplates(const string &workspaceId, const Models::ListPromptTemplatesRequest &request);

      /**
       * @summary 查询已发布的智能体应用列表
       *
       * @param request ListPublishedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishedAgentResponse
       */
      Models::ListPublishedAgentResponse listPublishedAgentWithOptions(const string &workspaceId, const Models::ListPublishedAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询已发布的智能体应用列表
       *
       * @param request ListPublishedAgentRequest
       * @return ListPublishedAgentResponse
       */
      Models::ListPublishedAgentResponse listPublishedAgent(const string &workspaceId, const Models::ListPublishedAgentRequest &request);

      /**
       * @summary Queries information from a specified knowledge base.
       *
       * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   The response time may be long because this operation involves complex retrieval and matching. We recommend that you set appropriate timeout and retry policy for requests.
       * *   This interface is idempotent.
       *
       * @param tmpReq RetrieveRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveResponse
       */
      Models::RetrieveResponse retrieveWithOptions(const string &WorkspaceId, const Models::RetrieveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information from a specified knowledge base.
       *
       * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   The response time may be long because this operation involves complex retrieval and matching. We recommend that you set appropriate timeout and retry policy for requests.
       * *   This interface is idempotent.
       *
       * @param request RetrieveRequest
       * @return RetrieveResponse
       */
      Models::RetrieveResponse retrieve(const string &WorkspaceId, const Models::RetrieveRequest &request);

      /**
       * @summary Adds parsed documents to an unstructured knowledge base.
       *
       * @description *   You must first upload documents to [Data Management](https://bailian.console.aliyun.com/#/data-center) and obtain the `FileId`. The documents are the knowledge source of the knowledge base. For more information, see [Import Data](https://www.alibabacloud.com/help/en/model-studio/user-guide/data-import-instructions).
       * *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   After you call this operation, you can call the [GetIndexJobStatus](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-getindexjobstatus) operation to query the status of the job. More than 20 calls to the GetIndexJobStatus operation per minute may trigger throttling.
       * *   Execution takes a period of time after this operation is called. Do not make new request before the request is returned. This interface is not idempotent.
       *
       * @param tmpReq SubmitIndexAddDocumentsJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIndexAddDocumentsJobResponse
       */
      Models::SubmitIndexAddDocumentsJobResponse submitIndexAddDocumentsJobWithOptions(const string &WorkspaceId, const Models::SubmitIndexAddDocumentsJobRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds parsed documents to an unstructured knowledge base.
       *
       * @description *   You must first upload documents to [Data Management](https://bailian.console.aliyun.com/#/data-center) and obtain the `FileId`. The documents are the knowledge source of the knowledge base. For more information, see [Import Data](https://www.alibabacloud.com/help/en/model-studio/user-guide/data-import-instructions).
       * *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
       * *   After you call this operation, you can call the [GetIndexJobStatus](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-getindexjobstatus) operation to query the status of the job. More than 20 calls to the GetIndexJobStatus operation per minute may trigger throttling.
       * *   Execution takes a period of time after this operation is called. Do not make new request before the request is returned. This interface is not idempotent.
       *
       * @param request SubmitIndexAddDocumentsJobRequest
       * @return SubmitIndexAddDocumentsJobResponse
       */
      Models::SubmitIndexAddDocumentsJobResponse submitIndexAddDocumentsJob(const string &WorkspaceId, const Models::SubmitIndexAddDocumentsJobRequest &request);

      /**
       * @summary Submits a specified CreateIndex job to complete knowledge base creation.
       *
       * @description 1.  Before you call this operation, you must call the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation and obtain the `IndexId`.
       * 2.  Execution takes a period of time after this operation is called. Do not make new request before the request is returned.
       * 3.  If you want to query the execution status of the job after you call this operation, call the [GetIndexJobStatus](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-getindexjobstatus) operation.
       * 4.  This interface is not idempotent.
       *
       * @param request SubmitIndexJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIndexJobResponse
       */
      Models::SubmitIndexJobResponse submitIndexJobWithOptions(const string &WorkspaceId, const Models::SubmitIndexJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a specified CreateIndex job to complete knowledge base creation.
       *
       * @description 1.  Before you call this operation, you must call the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation and obtain the `IndexId`.
       * 2.  Execution takes a period of time after this operation is called. Do not make new request before the request is returned.
       * 3.  If you want to query the execution status of the job after you call this operation, call the [GetIndexJobStatus](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-getindexjobstatus) operation.
       * 4.  This interface is not idempotent.
       *
       * @param request SubmitIndexJobRequest
       * @return SubmitIndexJobResponse
       */
      Models::SubmitIndexJobResponse submitIndexJob(const string &WorkspaceId, const Models::SubmitIndexJobRequest &request);

      /**
       * @summary 更新并发布智能体应用
       *
       * @param tmpReq UpdateAndPublishAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAndPublishAgentResponse
       */
      Models::UpdateAndPublishAgentResponse updateAndPublishAgentWithOptions(const string &workspaceId, const string &appCode, const Models::UpdateAndPublishAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新并发布智能体应用
       *
       * @param request UpdateAndPublishAgentRequest
       * @return UpdateAndPublishAgentResponse
       */
      Models::UpdateAndPublishAgentResponse updateAndPublishAgent(const string &workspaceId, const string &appCode, const Models::UpdateAndPublishAgentRequest &request);

      /**
       * @summary 选择更新并发布智能体应用
       *
       * @param tmpReq UpdateAndPublishAgentSelectiveRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAndPublishAgentSelectiveResponse
       */
      Models::UpdateAndPublishAgentSelectiveResponse updateAndPublishAgentSelectiveWithOptions(const string &workspaceId, const string &appCode, const Models::UpdateAndPublishAgentSelectiveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 选择更新并发布智能体应用
       *
       * @param request UpdateAndPublishAgentSelectiveRequest
       * @return UpdateAndPublishAgentSelectiveResponse
       */
      Models::UpdateAndPublishAgentSelectiveResponse updateAndPublishAgentSelective(const string &workspaceId, const string &appCode, const Models::UpdateAndPublishAgentSelectiveRequest &request);

      /**
       * @summary Modifies the content and title of a specified text chunk in the knowledge base, and sets whether the chunk participates in knowledge base retrieval.
       *
       * @description *   **Limits**: This operation supports only knowledge base of the document search type. Data query and image Q\\&A types are not supported.
       * *   **Required permissions**:
       *     *   **RAM users**: Must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) of Model Studio (such as the `AliyunBailianDataFullAccess` policy, which includes the sfm:UpdateChunk permission required), and [become member of a workspace](https://help.aliyun.com/document_detail/2851098.html).
       *     *   **Alibaba Cloud account**: Has the permission by default, and can call the operation directly.
       * *   **Call method**: We recommend using the latest version of the [GenAI Service Platform SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK encapsulates complex signature computational logic to simplify the call process.
       * *   **Delay**: The update takes effect immediately. During peak hours, the update may take place in seconds.
       * *   **Idempotence**: This operation is idempotent. If you perform a repeated operation on a chunk that has already been updated, the interface returns a success.
       * **Rate limit:** Rate limiting will be triggered if you call this operation frequently. Do not exceed 10 times per second. If limiting is triggered, try again later.
       *
       * @param request UpdateChunkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChunkResponse
       */
      Models::UpdateChunkResponse updateChunkWithOptions(const string &WorkspaceId, const Models::UpdateChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the content and title of a specified text chunk in the knowledge base, and sets whether the chunk participates in knowledge base retrieval.
       *
       * @description *   **Limits**: This operation supports only knowledge base of the document search type. Data query and image Q\\&A types are not supported.
       * *   **Required permissions**:
       *     *   **RAM users**: Must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) of Model Studio (such as the `AliyunBailianDataFullAccess` policy, which includes the sfm:UpdateChunk permission required), and [become member of a workspace](https://help.aliyun.com/document_detail/2851098.html).
       *     *   **Alibaba Cloud account**: Has the permission by default, and can call the operation directly.
       * *   **Call method**: We recommend using the latest version of the [GenAI Service Platform SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK encapsulates complex signature computational logic to simplify the call process.
       * *   **Delay**: The update takes effect immediately. During peak hours, the update may take place in seconds.
       * *   **Idempotence**: This operation is idempotent. If you perform a repeated operation on a chunk that has already been updated, the interface returns a success.
       * **Rate limit:** Rate limiting will be triggered if you call this operation frequently. Do not exceed 10 times per second. If limiting is triggered, try again later.
       *
       * @param request UpdateChunkRequest
       * @return UpdateChunkResponse
       */
      Models::UpdateChunkResponse updateChunk(const string &WorkspaceId, const Models::UpdateChunkRequest &request);

      /**
       * @summary 更新文档Tag
       *
       * @param tmpReq UpdateFileTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileTagResponse
       */
      Models::UpdateFileTagResponse updateFileTagWithOptions(const string &WorkspaceId, const string &FileId, const Models::UpdateFileTagRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新文档Tag
       *
       * @param request UpdateFileTagRequest
       * @return UpdateFileTagResponse
       */
      Models::UpdateFileTagResponse updateFileTag(const string &WorkspaceId, const string &FileId, const Models::UpdateFileTagRequest &request);

      /**
       * @summary 更新memory
       *
       * @param request UpdateMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemoryWithOptions(const string &workspaceId, const string &memoryId, const Models::UpdateMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新memory
       *
       * @param request UpdateMemoryRequest
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemory(const string &workspaceId, const string &memoryId, const Models::UpdateMemoryRequest &request);

      /**
       * @summary 更新记忆Node
       *
       * @param request UpdateMemoryNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryNodeResponse
       */
      Models::UpdateMemoryNodeResponse updateMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const Models::UpdateMemoryNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新记忆Node
       *
       * @param request UpdateMemoryNodeRequest
       * @return UpdateMemoryNodeResponse
       */
      Models::UpdateMemoryNodeResponse updateMemoryNode(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const Models::UpdateMemoryNodeRequest &request);

      /**
       * @summary Updates a prompt template based on the template ID.
       *
       * @param request UpdatePromptTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePromptTemplateResponse
       */
      Models::UpdatePromptTemplateResponse updatePromptTemplateWithOptions(const string &workspaceId, const string &promptTemplateId, const Models::UpdatePromptTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a prompt template based on the template ID.
       *
       * @param request UpdatePromptTemplateRequest
       * @return UpdatePromptTemplateResponse
       */
      Models::UpdatePromptTemplateResponse updatePromptTemplate(const string &workspaceId, const string &promptTemplateId, const Models::UpdatePromptTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
