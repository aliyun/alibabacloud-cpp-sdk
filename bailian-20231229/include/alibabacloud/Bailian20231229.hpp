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
       * @summary Creates a category in a specified workspace for classifying and managing files. A maximum of 500 categories can be created in each workspace.
       *
       * @description - Creating data tables through the API is not supported. Use the <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) page in the console.
       * - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddCategory permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation does not support idempotence.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param request AddCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategoryWithOptions(const string &WorkspaceId, const Models::AddCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a category in a specified workspace for classifying and managing files. A maximum of 500 categories can be created in each workspace.
       *
       * @description - Creating data tables through the API is not supported. Use the <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) page in the console.
       * - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddCategory permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation does not support idempotence.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param request AddCategoryRequest
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategory(const string &WorkspaceId, const Models::AddCategoryRequest &request);

      /**
       * @summary Adds chunks to a document search (document), data query (table), or image Q&A (image) knowledge base.
       *
       * @description - This operation adds chunk content to a specified knowledge base of the document search (document), data query (table), or image Q&A (image) type. Related operations on multimedia search (multimedia) knowledge bases are not supported. For data query and image Q&A knowledge bases, this operation takes effect only when the data source is a spreadsheet connector (excel).
       * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:ChunkList permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest [Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param tmpReq AddChunkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddChunkResponse
       */
      Models::AddChunkResponse addChunkWithOptions(const string &WorkspaceId, const Models::AddChunkRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds chunks to a document search (document), data query (table), or image Q&A (image) knowledge base.
       *
       * @description - This operation adds chunk content to a specified knowledge base of the document search (document), data query (table), or image Q&A (image) type. Related operations on multimedia search (multimedia) knowledge bases are not supported. For data query and image Q&A knowledge bases, this operation takes effect only when the data source is a spreadsheet connector (excel).
       * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:ChunkList permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest [Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param request AddChunkRequest
       * @return AddChunkResponse
       */
      Models::AddChunkResponse addChunk(const string &WorkspaceId, const Models::AddChunkRequest &request);

      /**
       * @summary Creates a connector. Currently, this operation supports creating only file-type connectors.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddCategory permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param tmpReq AddConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddConnectorResponse
       */
      Models::AddConnectorResponse addConnectorWithOptions(const string &WorkspaceId, const Models::AddConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a connector. Currently, this operation supports creating only file-type connectors.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddCategory permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param request AddConnectorRequest
       * @return AddConnectorResponse
       */
      Models::AddConnectorResponse addConnector(const string &WorkspaceId, const Models::AddConnectorRequest &request);

      /**
       * @summary Imports a file from the temporary storage space of Alibaba Cloud Model Studio into an Alibaba Cloud Model Studio data connection (formerly known as application data).
       *
       * @description - Before invoking this operation, a Resource Access Management (RAM) user must obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddFile permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation is not idempotent.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param tmpReq AddFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFileResponse
       */
      Models::AddFileResponse addFileWithOptions(const string &WorkspaceId, const Models::AddFileRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a file from the temporary storage space of Alibaba Cloud Model Studio into an Alibaba Cloud Model Studio data connection (formerly known as application data).
       *
       * @description - Before invoking this operation, a Resource Access Management (RAM) user must obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddFile permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation is not idempotent.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request AddFileRequest
       * @return AddFileResponse
       */
      Models::AddFileResponse addFile(const string &WorkspaceId, const Models::AddFileRequest &request);

      /**
       * @summary Imports files from an authorized OSS bucket into Alibaba Cloud Model Studio application data.
       *
       * @description - Ensure that the OSS bucket and Alibaba Cloud Model Studio belong to the same Alibaba Cloud account. Before you call this operation, you must authorize the OSS service-linked role as prompted in the Model Studio console (service name: datahub.sfm.aliyuncs.com) and add a tag with the key bailian-datahub-access and the value read to the destination bucket. This tag is used to authorize OSS data import for this operation and is different from the bailian-connector-access tag used in the console data connection process.
       *  
       *      - Supported bucket storage classes do not include Archive, Cold Archive, or Deep Cold Archive. Buckets with content encryption are supported. Buckets with public read/write, public read, or private ACLs are supported.
       *      - To use a bucket with [Referer-based hotlink protection](https://help.aliyun.com/document_detail/2636937.html) enabled, you must add the domain name *.console.aliyun.com to the Referer whitelist by referring to [Allow access only from trusted websites](https://help.aliyun.com/document_detail/2636937.html).
       * - Resource Access Management (RAM) users must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (the AliyunBailianDataFullAccess policy is required, which includes the sfm:AddFilesFromAuthorizedOss permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before they can call this operation. Alibaba Cloud accounts can call this operation directly without authorization. We recommend that you use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Throttling:**
       * Frequent calls to this operation are throttled. Do not exceed 5 calls per second. If throttling occurs, retry later.
       *
       * @param tmpReq AddFilesFromAuthorizedOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFilesFromAuthorizedOssResponse
       */
      Models::AddFilesFromAuthorizedOssResponse addFilesFromAuthorizedOssWithOptions(const string &WorkspaceId, const Models::AddFilesFromAuthorizedOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports files from an authorized OSS bucket into Alibaba Cloud Model Studio application data.
       *
       * @description - Ensure that the OSS bucket and Alibaba Cloud Model Studio belong to the same Alibaba Cloud account. Before you call this operation, you must authorize the OSS service-linked role as prompted in the Model Studio console (service name: datahub.sfm.aliyuncs.com) and add a tag with the key bailian-datahub-access and the value read to the destination bucket. This tag is used to authorize OSS data import for this operation and is different from the bailian-connector-access tag used in the console data connection process.
       *  
       *      - Supported bucket storage classes do not include Archive, Cold Archive, or Deep Cold Archive. Buckets with content encryption are supported. Buckets with public read/write, public read, or private ACLs are supported.
       *      - To use a bucket with [Referer-based hotlink protection](https://help.aliyun.com/document_detail/2636937.html) enabled, you must add the domain name *.console.aliyun.com to the Referer whitelist by referring to [Allow access only from trusted websites](https://help.aliyun.com/document_detail/2636937.html).
       * - Resource Access Management (RAM) users must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (the AliyunBailianDataFullAccess policy is required, which includes the sfm:AddFilesFromAuthorizedOss permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before they can call this operation. Alibaba Cloud accounts can call this operation directly without authorization. We recommend that you use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Throttling:**
       * Frequent calls to this operation are throttled. Do not exceed 5 calls per second. If throttling occurs, retry later.
       *
       * @param request AddFilesFromAuthorizedOssRequest
       * @return AddFilesFromAuthorizedOssResponse
       */
      Models::AddFilesFromAuthorizedOssResponse addFilesFromAuthorizedOss(const string &WorkspaceId, const Models::AddFilesFromAuthorizedOssRequest &request);

      /**
       * @summary Adds a table to a tabular data connector.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddTable permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param tmpReq AddTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTableResponse
       */
      Models::AddTableResponse addTableWithOptions(const string &WorkspaceId, const Models::AddTableRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a table to a tabular data connector.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddTable permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param request AddTableRequest
       * @return AddTableResponse
       */
      Models::AddTableResponse addTable(const string &WorkspaceId, const Models::AddTableRequest &request);

      /**
       * @summary Requests an upload lease for uploading a knowledge base file or a file for agent application session interaction.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ApplyFileUploadLease permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation is not idempotent.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request ApplyFileUploadLeaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyFileUploadLeaseResponse
       */
      Models::ApplyFileUploadLeaseResponse applyFileUploadLeaseWithOptions(const string &CategoryId, const string &WorkspaceId, const Models::ApplyFileUploadLeaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Requests an upload lease for uploading a knowledge base file or a file for agent application session interaction.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ApplyFileUploadLease permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation is not idempotent.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
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
       * @summary Batch updates document tags in a data connection.
       *
       * @param tmpReq BatchUpdateFileTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateFileTagResponse
       */
      Models::BatchUpdateFileTagResponse batchUpdateFileTagWithOptions(const string &WorkspaceId, const Models::BatchUpdateFileTagRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch updates document tags in a data connection.
       *
       * @param request BatchUpdateFileTagRequest
       * @return BatchUpdateFileTagResponse
       */
      Models::BatchUpdateFileTagResponse batchUpdateFileTag(const string &WorkspaceId, const Models::BatchUpdateFileTagRequest &request);

      /**
       * @summary Configures the parsing method for specific file types. For example, specifies large model document parsing for .pdf files or Qwen VL parsing for .jpg files.
       *
       * @description - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ChangeParseSetting permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation is not idempotent.
       * **Rate limit:**
       * This operation is rate-limited. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param tmpReq ChangeParseSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeParseSettingResponse
       */
      Models::ChangeParseSettingResponse changeParseSettingWithOptions(const string &WorkspaceId, const Models::ChangeParseSettingRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the parsing method for specific file types. For example, specifies large model document parsing for .pdf files or Qwen VL parsing for .jpg files.
       *
       * @description - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ChangeParseSetting permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation is not idempotent.
       * **Rate limit:**
       * This operation is rate-limited. Do not exceed 10 calls per second. If you are throttled, retry later.
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
       * @summary Creates two types of knowledge bases: unstructured knowledge bases based on documents or audio and video, and structured knowledge bases for data querying or image question answering.
       *
       * @description - **Permission requirements**:
       *   - **Resource Access Management (RAM) users**: You must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (you can use the AliyunBailianDataFullAccess policy, which includes the sfm:CreateIndex permission required by this operation) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before you can invoke this operation.
       *   - **Alibaba Cloud accounts**: By default, Alibaba Cloud accounts have the required permissions and can directly invoke this operation.
       * - **Invocation method**: Use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation. The SDK provides encapsulation for the complex signature calculation logic and simplifies the procedure to invoke the operation.
       * - **What to do next**: This operation only performs the initialization of the knowledge base creation job. After you invoke this operation, you must invoke the **SubmitIndexJob** operation to complete the creation. Otherwise, you will get an empty knowledge base. For corresponding code examples, refer to the [Knowledge Base API Guide](https://help.aliyun.com/document_detail/2852772.html).
       * - **Idempotence**: This operation is not idempotent. If you invoke this operation repeatedly, multiple knowledge bases with the same name may be created. Implement idempotence by using the "query first, then create" logic when you invoke this operation.
       * **Throttling:**
       * This operation is throttled if called frequently. Do not exceed 10 calls per second. If throttling occurs, retry later.
       *
       * @param tmpReq CreateIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIndexResponse
       */
      Models::CreateIndexResponse createIndexWithOptions(const string &WorkspaceId, const Models::CreateIndexRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates two types of knowledge bases: unstructured knowledge bases based on documents or audio and video, and structured knowledge bases for data querying or image question answering.
       *
       * @description - **Permission requirements**:
       *   - **Resource Access Management (RAM) users**: You must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (you can use the AliyunBailianDataFullAccess policy, which includes the sfm:CreateIndex permission required by this operation) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before you can invoke this operation.
       *   - **Alibaba Cloud accounts**: By default, Alibaba Cloud accounts have the required permissions and can directly invoke this operation.
       * - **Invocation method**: Use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation. The SDK provides encapsulation for the complex signature calculation logic and simplifies the procedure to invoke the operation.
       * - **What to do next**: This operation only performs the initialization of the knowledge base creation job. After you invoke this operation, you must invoke the **SubmitIndexJob** operation to complete the creation. Otherwise, you will get an empty knowledge base. For corresponding code examples, refer to the [Knowledge Base API Guide](https://help.aliyun.com/document_detail/2852772.html).
       * - **Idempotence**: This operation is not idempotent. If you invoke this operation repeatedly, multiple knowledge bases with the same name may be created. Implement idempotence by using the "query first, then create" logic when you invoke this operation.
       * **Throttling:**
       * This operation is throttled if called frequently. Do not exceed 10 calls per second. If throttling occurs, retry later.
       *
       * @param request CreateIndexRequest
       * @return CreateIndexResponse
       */
      Models::CreateIndexResponse createIndex(const string &WorkspaceId, const Models::CreateIndexRequest &request);

      /**
       * @summary Creates a long-term memory.
       *
       * @description - You can store specific information from the conversation procedure (memory nodes. For more information, see [Long-term memory](https://www.alibabacloud.com/help/en/model-studio/user-guide/long-term-memory)) in a long-term memory. Agent applications can then reference this information in subsequent conversations. This is not automatic. You must first invoke the [CreateMemory](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-creatememory) operation to create a long-term memory and obtain the `memoryId`. Then pass the `memoryId` when you [invoke the agent application through the API](https://www.alibabacloud.com/help/en/model-studio/user-guide/application-calling).
       *     > Long-term memory does not support storing and managing user profiles. Perform related operations in the console. For more information, see [Long-term memory](https://www.alibabacloud.com/help/en/model-studio/user-guide/long-term-memory#578ebae524m6l).
       * - If you pass a `memoryId`, the system performs automatic creation of memory nodes (MemoryNode) under the specified long-term memory based on conversation records. You can also invoke the [CreateMemoryNode](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-creatememorynode) operation to manually create memory nodes.
       * - This operation does not support idempotence.
       * **Throttling:** Ensure that the interval between two consecutive requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
       *
       * @param request CreateMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryResponse
       */
      Models::CreateMemoryResponse createMemoryWithOptions(const string &workspaceId, const Models::CreateMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a long-term memory.
       *
       * @description - You can store specific information from the conversation procedure (memory nodes. For more information, see [Long-term memory](https://www.alibabacloud.com/help/en/model-studio/user-guide/long-term-memory)) in a long-term memory. Agent applications can then reference this information in subsequent conversations. This is not automatic. You must first invoke the [CreateMemory](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-creatememory) operation to create a long-term memory and obtain the `memoryId`. Then pass the `memoryId` when you [invoke the agent application through the API](https://www.alibabacloud.com/help/en/model-studio/user-guide/application-calling).
       *     > Long-term memory does not support storing and managing user profiles. Perform related operations in the console. For more information, see [Long-term memory](https://www.alibabacloud.com/help/en/model-studio/user-guide/long-term-memory#578ebae524m6l).
       * - If you pass a `memoryId`, the system performs automatic creation of memory nodes (MemoryNode) under the specified long-term memory based on conversation records. You can also invoke the [CreateMemoryNode](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-creatememorynode) operation to manually create memory nodes.
       * - This operation does not support idempotence.
       * **Throttling:** Ensure that the interval between two consecutive requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
       *
       * @param request CreateMemoryRequest
       * @return CreateMemoryResponse
       */
      Models::CreateMemoryResponse createMemory(const string &workspaceId, const Models::CreateMemoryRequest &request);

      /**
       * @summary Creates a memory node.
       *
       * @param request CreateMemoryNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryNodeResponse
       */
      Models::CreateMemoryNodeResponse createMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const Models::CreateMemoryNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a memory node.
       *
       * @param request CreateMemoryNodeRequest
       * @return CreateMemoryNodeResponse
       */
      Models::CreateMemoryNodeResponse createMemoryNode(const string &workspaceId, const string &memoryId, const Models::CreateMemoryNodeRequest &request);

      /**
       * @summary Create a prompt template.
       *
       * @description This API does not currently support the creation of text-to-image prompt templates.
       *
       * @param request CreatePromptTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePromptTemplateResponse
       */
      Models::CreatePromptTemplateResponse createPromptTemplateWithOptions(const string &workspaceId, const Models::CreatePromptTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a prompt template.
       *
       * @description This API does not currently support the creation of text-to-image prompt templates.
       *
       * @param request CreatePromptTemplateRequest
       * @return CreatePromptTemplateResponse
       */
      Models::CreatePromptTemplateResponse createPromptTemplate(const string &workspaceId, const Models::CreatePromptTemplateRequest &request);

      /**
       * @summary 删除智能体
       *
       * @param request DeleteAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgentWithOptions(const string &workspaceId, const string &appCode, const Models::DeleteAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除智能体
       *
       * @param request DeleteAgentRequest
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgent(const string &workspaceId, const string &appCode, const Models::DeleteAgentRequest &request);

      /**
       * @summary Permanently deletes a specified category.
       *
       * @description - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:DeleteCategory permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is subject to throttling. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param request DeleteCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategoryWithOptions(const string &CategoryId, const string &WorkspaceId, const Models::DeleteCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permanently deletes a specified category.
       *
       * @description - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:DeleteCategory permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is subject to throttling. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param request DeleteCategoryRequest
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategory(const string &CategoryId, const string &WorkspaceId, const Models::DeleteCategoryRequest &request);

      /**
       * @summary Deletes a specified text chunk from a knowledge base. Deleted text chunks cannot be retrieved or recalled.
       *
       * @description <warning>  Deleted text chunks cannot be recovered (hard delete). Proceed with caution.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user (sub-account)**: You must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:DeleteChunk permission required by this operation), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation.
       *   - **Alibaba Cloud account (main account)**: Has permissions by default and can invoke this operation directly.
       * - **Calling method**: Use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK encapsulates the complex signature calculation logic as an encapsulation of the signing procedure, simplifying your invocation process.
       * - **Effective delay**: Updates typically take effect immediately. During peak periods, a slight delay (in seconds) may occur.
       * - **Idempotence**: This operation is idempotent. If you repeat the operation on a text chunk that has already been successfully deleted, the operation returns a success response.
       * **Rate limiting:**
       * Frequent calls to this operation may be throttled. Do not exceed 10 calls per second. If throttled, retry after a short wait.
       *
       * @param tmpReq DeleteChunkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChunkResponse
       */
      Models::DeleteChunkResponse deleteChunkWithOptions(const string &WorkspaceId, const Models::DeleteChunkRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified text chunk from a knowledge base. Deleted text chunks cannot be retrieved or recalled.
       *
       * @description <warning>  Deleted text chunks cannot be recovered (hard delete). Proceed with caution.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user (sub-account)**: You must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:DeleteChunk permission required by this operation), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation.
       *   - **Alibaba Cloud account (main account)**: Has permissions by default and can invoke this operation directly.
       * - **Calling method**: Use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK encapsulates the complex signature calculation logic as an encapsulation of the signing procedure, simplifying your invocation process.
       * - **Effective delay**: Updates typically take effect immediately. During peak periods, a slight delay (in seconds) may occur.
       * - **Idempotence**: This operation is idempotent. If you repeat the operation on a text chunk that has already been successfully deleted, the operation returns a success response.
       * **Rate limiting:**
       * Frequent calls to this operation may be throttled. Do not exceed 10 calls per second. If throttled, retry after a short wait.
       *
       * @param request DeleteChunkRequest
       * @return DeleteChunkResponse
       */
      Models::DeleteChunkResponse deleteChunk(const string &WorkspaceId, const Models::DeleteChunkRequest &request);

      /**
       * @summary Deletes a connector.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:DeleteConnector permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If throttled, retry later.
       *
       * @param request DeleteConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnectorResponse
       */
      Models::DeleteConnectorResponse deleteConnectorWithOptions(const string &ConnectorId, const string &WorkspaceId, const Models::DeleteConnectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a connector.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:DeleteConnector permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If throttled, retry later.
       *
       * @param request DeleteConnectorRequest
       * @return DeleteConnectorResponse
       */
      Models::DeleteConnectorResponse deleteConnector(const string &ConnectorId, const string &WorkspaceId, const Models::DeleteConnectorRequest &request);

      /**
       * @summary Permanently deletes a specified file from application data. Deleting data tables through the API is not supported. For more information, see the operation description below.
       *
       * @description - Deleting data tables through the API is not supported. To delete a data table or specific data in a table, go to <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
       * - This operation deletes files from <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) and does not affect knowledge bases that have already been built. To delete files from a knowledge base, invoke the **DeleteIndexDocument** operation.
       * - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:DeleteFile permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation can only delete files in the parsing failed (PARSE_FAILED) or parsing completed (PARSE_SUCCESS) state.
       * - This operation has idempotence.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request DeleteFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFileWithOptions(const string &FileId, const string &WorkspaceId, const Models::DeleteFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permanently deletes a specified file from application data. Deleting data tables through the API is not supported. For more information, see the operation description below.
       *
       * @description - Deleting data tables through the API is not supported. To delete a data table or specific data in a table, go to <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
       * - This operation deletes files from <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) and does not affect knowledge bases that have already been built. To delete files from a knowledge base, invoke the **DeleteIndexDocument** operation.
       * - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:DeleteFile permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation can only delete files in the parsing failed (PARSE_FAILED) or parsing completed (PARSE_SUCCESS) state.
       * - This operation has idempotence.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request DeleteFileRequest
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFile(const string &FileId, const string &WorkspaceId, const Models::DeleteFileRequest &request);

      /**
       * @summary Deletes files in batches.
       *
       * @description - Deleting data tables through the API is not supported. To delete a data table or specific data in a table, go to <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
       * - This operation deletes files from <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) and does not affect knowledge bases that have already been built. To delete files from a knowledge base, invoke the **DeleteIndexDocument** operation.
       * - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:DeleteFiles permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation can only delete files with a status of parsing failed (PARSE_FAILED) or parsing completed (PARSE_SUCCESS).
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param tmpReq DeleteFilesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFilesResponse
       */
      Models::DeleteFilesResponse deleteFilesWithOptions(const string &WorkspaceId, const Models::DeleteFilesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes files in batches.
       *
       * @description - Deleting data tables through the API is not supported. To delete a data table or specific data in a table, go to <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
       * - This operation deletes files from <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) and does not affect knowledge bases that have already been built. To delete files from a knowledge base, invoke the **DeleteIndexDocument** operation.
       * - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:DeleteFiles permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation can only delete files with a status of parsing failed (PARSE_FAILED) or parsing completed (PARSE_SUCCESS).
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request DeleteFilesRequest
       * @return DeleteFilesResponse
       */
      Models::DeleteFilesResponse deleteFiles(const string &WorkspaceId, const Models::DeleteFilesRequest &request);

      /**
       * @summary Permanently deletes a specified knowledge base.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:DeleteIndex permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - If the knowledge base is associated with an application, you must first dissociate it from the application before deleting it. This can currently only be done through the console. For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
       * - Deletion is irreversible. A deleted knowledge base cannot be recovered. Proceed with caution.
       * - Invoking this operation does not delete files that have been imported into <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
       * - This operation has idempotence.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request DeleteIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndexResponse
       */
      Models::DeleteIndexResponse deleteIndexWithOptions(const string &WorkspaceId, const Models::DeleteIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permanently deletes a specified knowledge base.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:DeleteIndex permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - If the knowledge base is associated with an application, you must first dissociate it from the application before deleting it. This can currently only be done through the console. For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
       * - Deletion is irreversible. A deleted knowledge base cannot be recovered. Proceed with caution.
       * - Invoking this operation does not delete files that have been imported into <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
       * - This operation has idempotence.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request DeleteIndexRequest
       * @return DeleteIndexResponse
       */
      Models::DeleteIndexResponse deleteIndex(const string &WorkspaceId, const Models::DeleteIndexRequest &request);

      /**
       * @summary Permanently deletes files from a specified knowledge base.
       *
       * @description - This operation does not support deleting data from data query or image Q&A knowledge bases. Use the Model Studio console instead.
       * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:DeleteIndexDocument permission), before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - Before calling this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - You can only delete files whose status is import failed (INSERT_ERROR) or import succeeded (FINISH) in the knowledge base. To query the file status in a specified knowledge base, call the **ListIndexDocuments** operation.
       * - Deletion is irreversible. The content of deleted files cannot be recovered, and the **Retrieve** operation can no longer retrieve related information. Proceed with caution.
       * - Calling this operation does not delete documents that have been imported into <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
       * - This operation is idempotent.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param tmpReq DeleteIndexDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndexDocumentResponse
       */
      Models::DeleteIndexDocumentResponse deleteIndexDocumentWithOptions(const string &WorkspaceId, const Models::DeleteIndexDocumentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permanently deletes files from a specified knowledge base.
       *
       * @description - This operation does not support deleting data from data query or image Q&A knowledge bases. Use the Model Studio console instead.
       * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:DeleteIndexDocument permission), before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - Before calling this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - You can only delete files whose status is import failed (INSERT_ERROR) or import succeeded (FINISH) in the knowledge base. To query the file status in a specified knowledge base, call the **ListIndexDocuments** operation.
       * - Deletion is irreversible. The content of deleted files cannot be recovered, and the **Retrieve** operation can no longer retrieve related information. Proceed with caution.
       * - Calling this operation does not delete documents that have been imported into <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
       * - This operation is idempotent.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request DeleteIndexDocumentRequest
       * @return DeleteIndexDocumentResponse
       */
      Models::DeleteIndexDocumentResponse deleteIndexDocument(const string &WorkspaceId, const Models::DeleteIndexDocumentRequest &request);

      /**
       * @summary Permanently deletes a specified long-term memory.
       *
       * @description - Before calling this operation, make sure that your long-term memory has been created and has not been deleted (that is, the memoryId is valid).
       * - The delete operation is irreversible. The deleted long-term memory, including all of its long-term memory nodes, cannot be recovered. The [GetMemory](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-getmemory) operation will no longer be able to retrieve its information. Proceed with caution.
       * - This operation is idempotent.
       * **Rate limit:** Make sure that the interval between two requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
       *
       * @param request DeleteMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemoryWithOptions(const string &workspaceId, const string &memoryId, const Models::DeleteMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permanently deletes a specified long-term memory.
       *
       * @description - Before calling this operation, make sure that your long-term memory has been created and has not been deleted (that is, the memoryId is valid).
       * - The delete operation is irreversible. The deleted long-term memory, including all of its long-term memory nodes, cannot be recovered. The [GetMemory](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-getmemory) operation will no longer be able to retrieve its information. Proceed with caution.
       * - This operation is idempotent.
       * **Rate limit:** Make sure that the interval between two requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
       *
       * @param request DeleteMemoryRequest
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemory(const string &workspaceId, const string &memoryId, const Models::DeleteMemoryRequest &request);

      /**
       * @summary Deletes a memory fragment.
       *
       * @param request DeleteMemoryNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryNodeResponse
       */
      Models::DeleteMemoryNodeResponse deleteMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const Models::DeleteMemoryNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a memory fragment.
       *
       * @param request DeleteMemoryNodeRequest
       * @return DeleteMemoryNodeResponse
       */
      Models::DeleteMemoryNodeResponse deleteMemoryNode(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const Models::DeleteMemoryNodeRequest &request);

      /**
       * @summary Deletes a prompt template based on the template ID.
       *
       * @param request DeletePromptTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePromptTemplateResponse
       */
      Models::DeletePromptTemplateResponse deletePromptTemplateWithOptions(const string &workspaceId, const string &promptTemplateId, const Models::DeletePromptTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a prompt template based on the template ID.
       *
       * @param request DeletePromptTemplateRequest
       * @return DeletePromptTemplateResponse
       */
      Models::DeletePromptTemplateResponse deletePromptTemplate(const string &workspaceId, const string &promptTemplateId, const Models::DeletePromptTemplateRequest &request);

      /**
       * @summary Queries the basic information of a file in application data, including the file name, type, and status.
       *
       * @description - Resource Access Management (RAM) users must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the `sfm:DescribeFile` permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before they can call this operation. Alibaba Cloud accounts can call this operation directly without authorization. We recommend that you use the latest version of the <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is idempotent.
       * **Throttling rules:**
       * This operation is throttled if it is called too frequently. Do not call this operation more than 10 times per second. If the operation is throttled, retry later.
       *
       * @param request DescribeFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileResponse
       */
      Models::DescribeFileResponse describeFileWithOptions(const string &WorkspaceId, const string &FileId, const Models::DescribeFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information of a file in application data, including the file name, type, and status.
       *
       * @description - Resource Access Management (RAM) users must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the `sfm:DescribeFile` permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before they can call this operation. Alibaba Cloud accounts can call this operation directly without authorization. We recommend that you use the latest version of the <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is idempotent.
       * **Throttling rules:**
       * This operation is throttled if it is called too frequently. Do not call this operation more than 10 times per second. If the operation is throttled, retry later.
       *
       * @param request DescribeFileRequest
       * @return DescribeFileResponse
       */
      Models::DescribeFileResponse describeFile(const string &WorkspaceId, const string &FileId, const Models::DescribeFileRequest &request);

      /**
       * @summary Queries the tipping status of the Alipay wallet bound to an application.
       *
       * @param request GetAlipayTransferStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlipayTransferStatusResponse
       */
      Models::GetAlipayTransferStatusResponse getAlipayTransferStatusWithOptions(const Models::GetAlipayTransferStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tipping status of the Alipay wallet bound to an application.
       *
       * @param request GetAlipayTransferStatusRequest
       * @return GetAlipayTransferStatusResponse
       */
      Models::GetAlipayTransferStatusResponse getAlipayTransferStatus(const Models::GetAlipayTransferStatusRequest &request);

      /**
       * @summary Retrieves the Alipay tipping URL for an application.
       *
       * @param request GetAlipayUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlipayUrlResponse
       */
      Models::GetAlipayUrlResponse getAlipayUrlWithOptions(const Models::GetAlipayUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Alipay tipping URL for an application.
       *
       * @param request GetAlipayUrlRequest
       * @return GetAlipayUrlResponse
       */
      Models::GetAlipayUrlResponse getAlipayUrl(const Models::GetAlipayUrlRequest &request);

      /**
       * @summary Retrieves the list of all supported parser types based on the specified file type (file name extension).
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:GetAvailableParserTypes permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation is idempotent.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request GetAvailableParserTypesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAvailableParserTypesResponse
       */
      Models::GetAvailableParserTypesResponse getAvailableParserTypesWithOptions(const string &WorkspaceId, const Models::GetAvailableParserTypesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of all supported parser types based on the specified file type (file name extension).
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:GetAvailableParserTypes permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation is idempotent.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request GetAvailableParserTypesRequest
       * @return GetAvailableParserTypesResponse
       */
      Models::GetAvailableParserTypesResponse getAvailableParserTypes(const string &WorkspaceId, const Models::GetAvailableParserTypesRequest &request);

      /**
       * @summary Retrieves details about a connector. This operation currently supports only file connectors.
       *
       * @description - To call this operation, a RAM user (sub-account) must have the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and must [join a business space](https://help.aliyun.com/document_detail/2851098.html). This requires the `AliyunBailianDataFullAccess` policy, which includes the sfm:GetConnector permission. An Alibaba Cloud account (primary account) can call this operation directly. We recommend using the latest [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is idempotent.
       * **Throttling:**
       * This operation is subject to throttling. Do not exceed a frequency of 5 calls per second. If a request is throttled, try again later.
       *
       * @param request GetConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectorResponse
       */
      Models::GetConnectorResponse getConnectorWithOptions(const string &WorkspaceId, const Models::GetConnectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details about a connector. This operation currently supports only file connectors.
       *
       * @description - To call this operation, a RAM user (sub-account) must have the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and must [join a business space](https://help.aliyun.com/document_detail/2851098.html). This requires the `AliyunBailianDataFullAccess` policy, which includes the sfm:GetConnector permission. An Alibaba Cloud account (primary account) can call this operation directly. We recommend using the latest [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is idempotent.
       * **Throttling:**
       * This operation is subject to throttling. Do not exceed a frequency of 5 calls per second. If a request is throttled, try again later.
       *
       * @param request GetConnectorRequest
       * @return GetConnectorResponse
       */
      Models::GetConnectorResponse getConnector(const string &WorkspaceId, const Models::GetConnectorRequest &request);

      /**
       * @summary Queries the current status of a specified knowledge base creation task or knowledge base document addition task.
       *
       * @description - To invoke this operation, a Resource Access Management (RAM) user must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:GetIndexJobStatus permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest version of the <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - You must have a knowledge base job task that is being executed. To create a knowledge base task, invoke the **SubmitIndexJob** operation. To create a knowledge base append task, invoke the **SubmitIndexAddDocumentsJob** operation. You must also obtain the corresponding `JobId`.
       * - Set the interval between invocations of this operation to at least 5 seconds.
       * - This operation is idempotent.
       *
       * @param request GetIndexJobStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIndexJobStatusResponse
       */
      Models::GetIndexJobStatusResponse getIndexJobStatusWithOptions(const string &WorkspaceId, const Models::GetIndexJobStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current status of a specified knowledge base creation task or knowledge base document addition task.
       *
       * @description - To invoke this operation, a Resource Access Management (RAM) user must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:GetIndexJobStatus permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest version of the <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - You must have a knowledge base job task that is being executed. To create a knowledge base task, invoke the **SubmitIndexJob** operation. To create a knowledge base append task, invoke the **SubmitIndexAddDocumentsJob** operation. You must also obtain the corresponding `JobId`.
       * - Set the interval between invocations of this operation to at least 5 seconds.
       * - This operation is idempotent.
       *
       * @param request GetIndexJobStatusRequest
       * @return GetIndexJobStatusResponse
       */
      Models::GetIndexJobStatusResponse getIndexJobStatus(const string &WorkspaceId, const Models::GetIndexJobStatusRequest &request);

      /**
       * @summary You can call the GetIndexMonitor operation to query monitoring data for a specified knowledge base within a specific time range. This data is crucial for App Performance Analytics, capacity planning, and cost management. The monitoring data includes two main dimensions: storage and retrieval. Storage monitoring retrieves the index storage limit and current usage of the knowledge base. Retrieval monitoring retrieves performance metrics for the query period, such as peak queries per second (QPS), total requests, and average QPS. The metrics are provided as totals and are also broken down by time window. The requests are categorized as successful, failed, and rate-limited.
       *
       * @description <props="intl">
       * This operation is not available on the Alibaba Cloud International Website (www\\.alibabacloud.com).
       * <props="china">
       * - Before you call this operation, a RAM user must obtain the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (which requires the `AliyunBailianDataFullAccess` permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). Alibaba Cloud accounts can call this operation directly without authorization. You can call this operation using the latest version of the [Alibaba Cloud Model Studio software development kit (SDK)](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29). Before you call this operation, make sure that the specified knowledge base has been created and has not been deleted. This means that the knowledge base ID (`IndexId`) must be valid. This operation is idempotent. The maximum query time range (EndTimestamp - StartTimestamp) is 30 days. The granularity of the time window in the returned data is dynamically adjusted based on the query time range.
       *
       * @param request GetIndexMonitorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIndexMonitorResponse
       */
      Models::GetIndexMonitorResponse getIndexMonitorWithOptions(const string &WorkspaceId, const Models::GetIndexMonitorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the GetIndexMonitor operation to query monitoring data for a specified knowledge base within a specific time range. This data is crucial for App Performance Analytics, capacity planning, and cost management. The monitoring data includes two main dimensions: storage and retrieval. Storage monitoring retrieves the index storage limit and current usage of the knowledge base. Retrieval monitoring retrieves performance metrics for the query period, such as peak queries per second (QPS), total requests, and average QPS. The metrics are provided as totals and are also broken down by time window. The requests are categorized as successful, failed, and rate-limited.
       *
       * @description <props="intl">
       * This operation is not available on the Alibaba Cloud International Website (www\\.alibabacloud.com).
       * <props="china">
       * - Before you call this operation, a RAM user must obtain the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (which requires the `AliyunBailianDataFullAccess` permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). Alibaba Cloud accounts can call this operation directly without authorization. You can call this operation using the latest version of the [Alibaba Cloud Model Studio software development kit (SDK)](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29). Before you call this operation, make sure that the specified knowledge base has been created and has not been deleted. This means that the knowledge base ID (`IndexId`) must be valid. This operation is idempotent. The maximum query time range (EndTimestamp - StartTimestamp) is 30 days. The granularity of the time window in the returned data is dynamically adjusted based on the query time range.
       *
       * @param request GetIndexMonitorRequest
       * @return GetIndexMonitorResponse
       */
      Models::GetIndexMonitorResponse getIndexMonitor(const string &WorkspaceId, const Models::GetIndexMonitorRequest &request);

      /**
       * @summary Retrieves the description of a specified long-term memory.
       *
       * @description - This operation is idempotent.
       * **Rate limit:** Ensure that the interval between two consecutive requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
       *
       * @param request GetMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemoryWithOptions(const string &workspaceId, const string &memoryId, const Models::GetMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the description of a specified long-term memory.
       *
       * @description - This operation is idempotent.
       * **Rate limit:** Ensure that the interval between two consecutive requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
       *
       * @param request GetMemoryRequest
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemory(const string &workspaceId, const string &memoryId, const Models::GetMemoryRequest &request);

      /**
       * @summary Retrieves a memory fragment.
       *
       * @param request GetMemoryNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryNodeResponse
       */
      Models::GetMemoryNodeResponse getMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const Models::GetMemoryNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a memory fragment.
       *
       * @param request GetMemoryNodeRequest
       * @return GetMemoryNodeResponse
       */
      Models::GetMemoryNodeResponse getMemoryNode(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const Models::GetMemoryNodeRequest &request);

      /**
       * @summary Queries the data parsing settings for a specified category.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:GetParseSettings permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Call this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation is idempotent.
       * **Throttling:**
       * This operation is subject to throttling. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request GetParseSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParseSettingsResponse
       */
      Models::GetParseSettingsResponse getParseSettingsWithOptions(const string &WorkspaceId, const Models::GetParseSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data parsing settings for a specified category.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:GetParseSettings permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Call this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation is idempotent.
       * **Throttling:**
       * This operation is subject to throttling. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request GetParseSettingsRequest
       * @return GetParseSettingsResponse
       */
      Models::GetParseSettingsResponse getParseSettings(const string &WorkspaceId, const Models::GetParseSettingsRequest &request);

      /**
       * @summary Obtains a prompt template based on the template ID.
       *
       * @param request GetPromptTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPromptTemplateResponse
       */
      Models::GetPromptTemplateResponse getPromptTemplateWithOptions(const string &workspaceId, const string &promptTemplateId, const Models::GetPromptTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a prompt template based on the template ID.
       *
       * @param request GetPromptTemplateRequest
       * @return GetPromptTemplateResponse
       */
      Models::GetPromptTemplateResponse getPromptTemplate(const string &workspaceId, const string &promptTemplateId, const Models::GetPromptTemplateRequest &request);

      /**
       * @summary 获取发布态智能体应用
       *
       * @param request GetPublishedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublishedAgentResponse
       */
      Models::GetPublishedAgentResponse getPublishedAgentWithOptions(const string &workspaceId, const string &appCode, const Models::GetPublishedAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取发布态智能体应用
       *
       * @param request GetPublishedAgentRequest
       * @return GetPublishedAgentResponse
       */
      Models::GetPublishedAgentResponse getPublishedAgent(const string &workspaceId, const string &appCode, const Models::GetPublishedAgentRequest &request);

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
       * @summary Retrieves the details of one or more categories in a specified workspace.
       *
       * @description - Querying data tables by using API operations is not supported.
       * - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListCategory permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - When performing a paging query for the first page, set only `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and set `MaxResults` to limit the number of entries returned.
       * - This operation has idempotence.
       * **Rate limit:**
       * This operation is subject to rate limiting if called too frequently. Do not exceed 5 calls per second. If you are rate-limited, retry later.
       *
       * @param request ListCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoryResponse
       */
      Models::ListCategoryResponse listCategoryWithOptions(const string &WorkspaceId, const Models::ListCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of one or more categories in a specified workspace.
       *
       * @description - Querying data tables by using API operations is not supported.
       * - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListCategory permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - When performing a paging query for the first page, set only `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and set `MaxResults` to limit the number of entries returned.
       * - This operation has idempotence.
       * **Rate limit:**
       * This operation is subject to rate limiting if called too frequently. Do not exceed 5 calls per second. If you are rate-limited, retry later.
       *
       * @param request ListCategoryRequest
       * @return ListCategoryResponse
       */
      Models::ListCategoryResponse listCategory(const string &WorkspaceId, const Models::ListCategoryRequest &request);

      /**
       * @summary Queries the list and information of text chunks.
       *
       * @description - For document search<props="china"> or audio/video search knowledge bases, this operation queries all chunks of a specified file. For data query or image Q&A knowledge bases, this operation retrieves information about all text chunks.
       * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ChunkList permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - This operation has idempotence.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request ListChunksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChunksResponse
       */
      Models::ListChunksResponse listChunksWithOptions(const string &WorkspaceId, const Models::ListChunksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list and information of text chunks.
       *
       * @description - For document search<props="china"> or audio/video search knowledge bases, this operation queries all chunks of a specified file. For data query or image Q&A knowledge bases, this operation retrieves information about all text chunks.
       * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ChunkList permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - This operation has idempotence.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request ListChunksRequest
       * @return ListChunksResponse
       */
      Models::ListChunksResponse listChunks(const string &WorkspaceId, const Models::ListChunksRequest &request);

      /**
       * @summary Retrieves the details of one or more documents in a specified category.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListFile permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Call this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - When querying the first page with paging, simply set `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and set `MaxResults` to limit the number of entries returned.
       * - This operation is idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param tmpReq ListFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFileResponse
       */
      Models::ListFileResponse listFileWithOptions(const string &WorkspaceId, const Models::ListFileRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of one or more documents in a specified category.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListFile permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Call this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - When querying the first page with paging, simply set `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and set `MaxResults` to limit the number of entries returned.
       * - This operation is idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param request ListFileRequest
       * @return ListFileResponse
       */
      Models::ListFileResponse listFile(const string &WorkspaceId, const Models::ListFileRequest &request);

      /**
       * @summary Retrieves the files and their summary information from a specified knowledge base.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListIndexFiles permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is subject to throttling. Do not exceed 15 calls per second. If you are throttled, retry later.
       *
       * @param request ListIndexDocumentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexDocumentsResponse
       */
      Models::ListIndexDocumentsResponse listIndexDocumentsWithOptions(const string &WorkspaceId, const Models::ListIndexDocumentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the files and their summary information from a specified knowledge base.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListIndexFiles permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is subject to throttling. Do not exceed 15 calls per second. If you are throttled, retry later.
       *
       * @param request ListIndexDocumentsRequest
       * @return ListIndexDocumentsResponse
       */
      Models::ListIndexDocumentsResponse listIndexDocuments(const string &WorkspaceId, const Models::ListIndexDocumentsRequest &request);

      /**
       * @summary Retrieves files and their details from a specified knowledge base.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListIndexFiles permission), before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation through the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - Before invoking this operation, make sure your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - This operation has idempotence.
       *
       * @param request ListIndexFileDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexFileDetailsResponse
       */
      Models::ListIndexFileDetailsResponse listIndexFileDetailsWithOptions(const string &WorkspaceId, const Models::ListIndexFileDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves files and their details from a specified knowledge base.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListIndexFiles permission), before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation through the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - Before invoking this operation, make sure your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - This operation has idempotence.
       *
       * @param request ListIndexFileDetailsRequest
       * @return ListIndexFileDetailsResponse
       */
      Models::ListIndexFileDetailsResponse listIndexFileDetails(const string &WorkspaceId, const Models::ListIndexFileDetailsRequest &request);

      /**
       * @summary Retrieves the list of knowledge bases in a specified workspace.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListIndex permission). Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is subject to throttling. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request ListIndicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndicesResponse
       */
      Models::ListIndicesResponse listIndicesWithOptions(const string &WorkspaceId, const Models::ListIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of knowledge bases in a specified workspace.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListIndex permission). Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is subject to throttling. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request ListIndicesRequest
       * @return ListIndicesResponse
       */
      Models::ListIndicesResponse listIndices(const string &WorkspaceId, const Models::ListIndicesRequest &request);

      /**
       * @summary Retrieves the details of one or more long-term memory entities in a specified workspace.
       *
       * @description - When performing a paged query for the first page, only set `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and set `MaxResults` to limit the number of entries returned.
       * - This operation supports idempotence.
       * **Rate limit:** Ensure that the interval between two consecutive requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
       *
       * @param request ListMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoriesResponse
       */
      Models::ListMemoriesResponse listMemoriesWithOptions(const string &workspaceId, const Models::ListMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of one or more long-term memory entities in a specified workspace.
       *
       * @description - When performing a paged query for the first page, only set `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and set `MaxResults` to limit the number of entries returned.
       * - This operation supports idempotence.
       * **Rate limit:** Ensure that the interval between two consecutive requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
       *
       * @param request ListMemoriesRequest
       * @return ListMemoriesResponse
       */
      Models::ListMemoriesResponse listMemories(const string &workspaceId, const Models::ListMemoriesRequest &request);

      /**
       * @summary Retrieves a list of memory nodes.
       *
       * @param request ListMemoryNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoryNodesResponse
       */
      Models::ListMemoryNodesResponse listMemoryNodesWithOptions(const string &workspaceId, const string &memoryId, const Models::ListMemoryNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of memory nodes.
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
       * @param tmpReq ListPublishedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishedAgentResponse
       */
      Models::ListPublishedAgentResponse listPublishedAgentWithOptions(const string &workspaceId, const Models::ListPublishedAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询已发布的智能体应用列表
       *
       * @param request ListPublishedAgentRequest
       * @return ListPublishedAgentResponse
       */
      Models::ListPublishedAgentResponse listPublishedAgent(const string &workspaceId, const Models::ListPublishedAgentRequest &request);

      /**
       * @summary Retrieves information from a specified knowledge base.
       *
       * @description <props="china">
       * - **Invocation method**: You can retrieve the knowledge base by using the latest [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29) (with an Alibaba Cloud [AccessKey](https://help.aliyun.com/document_detail/116401.html)) or [Spring AI Alibaba](https://help.aliyun.com/document_detail/2990886.html) (with an Alibaba Cloud Model Studio [API key](https://help.aliyun.com/document_detail/2712195.html)). Both methods provide encapsulation of complex signature calculation logic to simplify the invocation procedure.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user**: You must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:Retrieve permission required by this operation) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before you can invoke this operation.
       *   - **Alibaba Cloud account**: By default, an Alibaba Cloud account has the required permissions and can directly invoke this operation.
       * - **Response latency**: Because the operation involves complex retrieval and matching, the response time may be long. Configure appropriate timeout and retry settings for your requests.
       * - **Idempotence**: This operation is idempotent.
       * <props="intl">
       * - **Invocation method**: Use the latest [Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK provides encapsulation of complex signature calculation logic to simplify the invocation procedure.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user**: You must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:Retrieve permission required by this operation) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before you can invoke this operation.
       *   - **Alibaba Cloud account**: By default, an Alibaba Cloud account has the required permissions and can directly invoke this operation.
       * - **Response latency**: Because the operation involves complex retrieval and matching, the response time may be long. Configure appropriate timeout and retry settings for your requests.
       * - **Idempotence**: This operation is idempotent.
       *
       * @param tmpReq RetrieveRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveResponse
       */
      Models::RetrieveResponse retrieveWithOptions(const string &WorkspaceId, const Models::RetrieveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information from a specified knowledge base.
       *
       * @description <props="china">
       * - **Invocation method**: You can retrieve the knowledge base by using the latest [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29) (with an Alibaba Cloud [AccessKey](https://help.aliyun.com/document_detail/116401.html)) or [Spring AI Alibaba](https://help.aliyun.com/document_detail/2990886.html) (with an Alibaba Cloud Model Studio [API key](https://help.aliyun.com/document_detail/2712195.html)). Both methods provide encapsulation of complex signature calculation logic to simplify the invocation procedure.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user**: You must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:Retrieve permission required by this operation) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before you can invoke this operation.
       *   - **Alibaba Cloud account**: By default, an Alibaba Cloud account has the required permissions and can directly invoke this operation.
       * - **Response latency**: Because the operation involves complex retrieval and matching, the response time may be long. Configure appropriate timeout and retry settings for your requests.
       * - **Idempotence**: This operation is idempotent.
       * <props="intl">
       * - **Invocation method**: Use the latest [Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK provides encapsulation of complex signature calculation logic to simplify the invocation procedure.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user**: You must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:Retrieve permission required by this operation) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before you can invoke this operation.
       *   - **Alibaba Cloud account**: By default, an Alibaba Cloud account has the required permissions and can directly invoke this operation.
       * - **Response latency**: Because the operation involves complex retrieval and matching, the response time may be long. Configure appropriate timeout and retry settings for your requests.
       * - **Idempotence**: This operation is idempotent.
       *
       * @param request RetrieveRequest
       * @return RetrieveResponse
       */
      Models::RetrieveResponse retrieve(const string &WorkspaceId, const Models::RetrieveRequest &request);

      /**
       * @summary Appends parsed files to a specified knowledge base.
       *
       * @description <props="china">
       * - This operation does not support data query or image Q&A knowledge bases. For information about how to update data query or image Q&A knowledge bases, see the knowledge base update instructions in [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
       * <props="intl">
       * - This operation does not support data query or image Q&A knowledge bases. For information about how to update data query or image Q&A knowledge bases, see the knowledge base update instructions in [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
       * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:SubmitIndexAddDocumentsJob permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - Before invoking this operation, invoke the **AddFile** operation to upload the files you want to append to Model Studio.
       * - After invoking this operation, the node requires time to execute and may take several hours during peak periods. Do not submit duplicate requests before the node is complete. To query the node execution status, invoke the **GetIndexJobStatus** operation. The `Documents` file list returned by this operation contains all files in this append job (uniquely identified by the `job_id` you provide), and you can check whether each file was imported (parsed) successfully. Note that invoking GetIndexJobStatus too frequently will trigger rate limiting. Do not exceed a frequency of 20 times per minute.
       * - After this operation is invoked successfully, it takes some time to execute. Do not submit duplicate requests before the response is returned. This operation does not have idempotence.
       * **Rate limit:**
       * Frequent calls to this operation will be throttled. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param tmpReq SubmitIndexAddDocumentsJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIndexAddDocumentsJobResponse
       */
      Models::SubmitIndexAddDocumentsJobResponse submitIndexAddDocumentsJobWithOptions(const string &WorkspaceId, const Models::SubmitIndexAddDocumentsJobRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Appends parsed files to a specified knowledge base.
       *
       * @description <props="china">
       * - This operation does not support data query or image Q&A knowledge bases. For information about how to update data query or image Q&A knowledge bases, see the knowledge base update instructions in [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
       * <props="intl">
       * - This operation does not support data query or image Q&A knowledge bases. For information about how to update data query or image Q&A knowledge bases, see the knowledge base update instructions in [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
       * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:SubmitIndexAddDocumentsJob permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - Before invoking this operation, invoke the **AddFile** operation to upload the files you want to append to Model Studio.
       * - After invoking this operation, the node requires time to execute and may take several hours during peak periods. Do not submit duplicate requests before the node is complete. To query the node execution status, invoke the **GetIndexJobStatus** operation. The `Documents` file list returned by this operation contains all files in this append job (uniquely identified by the `job_id` you provide), and you can check whether each file was imported (parsed) successfully. Note that invoking GetIndexJobStatus too frequently will trigger rate limiting. Do not exceed a frequency of 20 times per minute.
       * - After this operation is invoked successfully, it takes some time to execute. Do not submit duplicate requests before the response is returned. This operation does not have idempotence.
       * **Rate limit:**
       * Frequent calls to this operation will be throttled. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param request SubmitIndexAddDocumentsJobRequest
       * @return SubmitIndexAddDocumentsJobResponse
       */
      Models::SubmitIndexAddDocumentsJobResponse submitIndexAddDocumentsJob(const string &WorkspaceId, const Models::SubmitIndexAddDocumentsJobRequest &request);

      /**
       * @summary Submits a specified CreateIndex task to complete knowledge base creation.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:SubmitIndexJob permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, you must invoke the **CreateIndex** operation and obtain the corresponding `IndexId`.
       * - After invoking this operation, the node requires time to execute and may take several hours during peak periods. Do not submit duplicate requests before the node completes. To query the node execution status, invoke the **GetIndexJobStatus** operation.
       * - After the knowledge base is created, you can associate it with an agent application<props="china"> or workflow application in the same workspace through <props="china">[Application Management](https://bailian.console.aliyun.com/?tab=app#/app-center)<props="intl">[Application Management](https://modelstudio.console.alibabacloud.com/?tab=app#/app-center) (or pass the `IndexID` through `rag_options` in [Application Calls](https://help.aliyun.com/document_detail/2846132.html)) to supplement your Model Studio application with private knowledge and up-to-date information. You can also choose not to use a Model Studio application and directly query the knowledge base by invoking the **Retrieve** operation.
       * - This operation does not support idempotence.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param request SubmitIndexJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIndexJobResponse
       */
      Models::SubmitIndexJobResponse submitIndexJobWithOptions(const string &WorkspaceId, const Models::SubmitIndexJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a specified CreateIndex task to complete knowledge base creation.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:SubmitIndexJob permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, you must invoke the **CreateIndex** operation and obtain the corresponding `IndexId`.
       * - After invoking this operation, the node requires time to execute and may take several hours during peak periods. Do not submit duplicate requests before the node completes. To query the node execution status, invoke the **GetIndexJobStatus** operation.
       * - After the knowledge base is created, you can associate it with an agent application<props="china"> or workflow application in the same workspace through <props="china">[Application Management](https://bailian.console.aliyun.com/?tab=app#/app-center)<props="intl">[Application Management](https://modelstudio.console.alibabacloud.com/?tab=app#/app-center) (or pass the `IndexID` through `rag_options` in [Application Calls](https://help.aliyun.com/document_detail/2846132.html)) to supplement your Model Studio application with private knowledge and up-to-date information. You can also choose not to use a Model Studio application and directly query the knowledge base by invoking the **Retrieve** operation.
       * - This operation does not support idempotence.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
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
       * @summary Modifies the content and title of a specified text chunk in a knowledge base, and specifies whether the chunk participates in knowledge base retrieval.
       *
       * @description - **Key restrictions**: This operation supports only document search knowledge bases. Data query and image-based Q&A knowledge bases are not supported.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user (sub-account)**: You must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:UpdateChunk permission required by this operation), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before you invoke this operation.
       *   - **Alibaba Cloud account**: Has permissions by default and can invoke this operation directly.
       * - **Calling method**: Use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK encapsulates the complex signature calculation logic as encapsulation to simplify the invocation procedure.
       * - **Propagation delay**: Updates typically take effect immediately. During peak periods, a slight delay (in seconds) may occur.
       * - **Idempotence**: This operation is idempotent. If you repeat the operation on a text chunk that has already been successfully updated, the operation returns a success response.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry after a short wait.
       *
       * @param request UpdateChunkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChunkResponse
       */
      Models::UpdateChunkResponse updateChunkWithOptions(const string &WorkspaceId, const Models::UpdateChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the content and title of a specified text chunk in a knowledge base, and specifies whether the chunk participates in knowledge base retrieval.
       *
       * @description - **Key restrictions**: This operation supports only document search knowledge bases. Data query and image-based Q&A knowledge bases are not supported.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user (sub-account)**: You must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:UpdateChunk permission required by this operation), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before you invoke this operation.
       *   - **Alibaba Cloud account**: Has permissions by default and can invoke this operation directly.
       * - **Calling method**: Use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK encapsulates the complex signature calculation logic as encapsulation to simplify the invocation procedure.
       * - **Propagation delay**: Updates typically take effect immediately. During peak periods, a slight delay (in seconds) may occur.
       * - **Idempotence**: This operation is idempotent. If you repeat the operation on a text chunk that has already been successfully updated, the operation returns a success response.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry after a short wait.
       *
       * @param request UpdateChunkRequest
       * @return UpdateChunkResponse
       */
      Models::UpdateChunkResponse updateChunk(const string &WorkspaceId, const Models::UpdateChunkRequest &request);

      /**
       * @summary Updates a connector.
       *
       * @description - A RAM user can call this operation only after they join a workspace and are granted the required [API permission](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (Bailian). The `AliyunBailianDataFullAccess` policy, which includes the `sfm:UpdateConnector` permission, is required. An Alibaba Cloud account can call this operation directly. Use the latest version of the <props="china">[Alibaba Cloud Model Studio (Bailian) SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio (Bailian) SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Throttling:** If you call this operation too frequently, the system may throttle your requests. Do not exceed a frequency of 5 calls per second. If a request is throttled, try again later.
       *
       * @param request UpdateConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConnectorResponse
       */
      Models::UpdateConnectorResponse updateConnectorWithOptions(const string &WorkspaceId, const string &ConnectorId, const Models::UpdateConnectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a connector.
       *
       * @description - A RAM user can call this operation only after they join a workspace and are granted the required [API permission](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (Bailian). The `AliyunBailianDataFullAccess` policy, which includes the `sfm:UpdateConnector` permission, is required. An Alibaba Cloud account can call this operation directly. Use the latest version of the <props="china">[Alibaba Cloud Model Studio (Bailian) SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio (Bailian) SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Throttling:** If you call this operation too frequently, the system may throttle your requests. Do not exceed a frequency of 5 calls per second. If a request is throttled, try again later.
       *
       * @param request UpdateConnectorRequest
       * @return UpdateConnectorResponse
       */
      Models::UpdateConnectorResponse updateConnector(const string &WorkspaceId, const string &ConnectorId, const Models::UpdateConnectorRequest &request);

      /**
       * @summary Updates the tags of a specified file.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:UpdateFileTag permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * **Rate limiting:**
       * This operation is rate-limited. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param tmpReq UpdateFileTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileTagResponse
       */
      Models::UpdateFileTagResponse updateFileTagWithOptions(const string &WorkspaceId, const string &FileId, const Models::UpdateFileTagRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the tags of a specified file.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:UpdateFileTag permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * **Rate limiting:**
       * This operation is rate-limited. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param request UpdateFileTagRequest
       * @return UpdateFileTagResponse
       */
      Models::UpdateFileTagResponse updateFileTag(const string &WorkspaceId, const string &FileId, const Models::UpdateFileTagRequest &request);

      /**
       * @summary Updates partial configurations of a specified knowledge base.
       *
       * @description <props="intl">This operation is not supported on the Chinese site.
       * <props="china">
       * A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (`AliyunBailianDataFullAccess` is required) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * This operation supports idempotence.
       *
       * @param request UpdateIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIndexResponse
       */
      Models::UpdateIndexResponse updateIndexWithOptions(const string &WorkspaceId, const Models::UpdateIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates partial configurations of a specified knowledge base.
       *
       * @description <props="intl">This operation is not supported on the Chinese site.
       * <props="china">
       * A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (`AliyunBailianDataFullAccess` is required) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * This operation supports idempotence.
       *
       * @param request UpdateIndexRequest
       * @return UpdateIndexResponse
       */
      Models::UpdateIndexResponse updateIndex(const string &WorkspaceId, const Models::UpdateIndexRequest &request);

      /**
       * @summary Updates the description of a specified long-term memory.
       *
       * @description - This operation is idempotent.
       * **Rate limit:** Ensure that the interval between two requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
       *
       * @param request UpdateMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemoryWithOptions(const string &workspaceId, const string &memoryId, const Models::UpdateMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a specified long-term memory.
       *
       * @description - This operation is idempotent.
       * **Rate limit:** Ensure that the interval between two requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
       *
       * @param request UpdateMemoryRequest
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemory(const string &workspaceId, const string &memoryId, const Models::UpdateMemoryRequest &request);

      /**
       * @summary Updates a memory fragment.
       *
       * @param request UpdateMemoryNodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryNodeResponse
       */
      Models::UpdateMemoryNodeResponse updateMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const Models::UpdateMemoryNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a memory fragment.
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

      /**
       * @summary Updates a table in a table connector of Alibaba Cloud Model Studio Data Hub using a file from an authorized OSS bucket.
       *
       * @description - Before calling this operation, the target data table must already exist. Pass its table ID as `TableId`. This operation only updates the specified table and does not create data tables.
       * - Make sure the OSS bucket and Alibaba Cloud Model Studio belong to the same Alibaba Cloud account. Add the tag key `bailian-datahub-access` and tag value `read` to the target bucket before importing.
       *  
       *      - Supported bucket storage classes exclude Archive, Cold Archive, and Deep Cold Archive. Buckets with content encryption enabled are supported. Buckets with public read/write, public read, or private access are supported.
       *      - To use a bucket with [Referer-based hotlink protection](https://help.aliyun.com/document_detail/2636937.html) enabled, refer to [Allow only trusted websites to access](https://help.aliyun.com/document_detail/2636937.html) and add the domain `*.console.aliyun.com` to the Referer whitelist.
       * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (the `AliyunBailianDataFullAccess` permission policy is required, which includes the sfm:UpdateTableFromAuthorizedOss permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation does not guarantee idempotence.
       * **Rate limit:**
       * This operation is subject to rate limiting if called too frequently. Do not exceed 5 calls per second. If rate limiting occurs, retry after a short wait.
       *
       * @param request UpdateTableFromAuthorizedOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableFromAuthorizedOssResponse
       */
      Models::UpdateTableFromAuthorizedOssResponse updateTableFromAuthorizedOssWithOptions(const string &WorkspaceId, const string &TableId, const Models::UpdateTableFromAuthorizedOssRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a table in a table connector of Alibaba Cloud Model Studio Data Hub using a file from an authorized OSS bucket.
       *
       * @description - Before calling this operation, the target data table must already exist. Pass its table ID as `TableId`. This operation only updates the specified table and does not create data tables.
       * - Make sure the OSS bucket and Alibaba Cloud Model Studio belong to the same Alibaba Cloud account. Add the tag key `bailian-datahub-access` and tag value `read` to the target bucket before importing.
       *  
       *      - Supported bucket storage classes exclude Archive, Cold Archive, and Deep Cold Archive. Buckets with content encryption enabled are supported. Buckets with public read/write, public read, or private access are supported.
       *      - To use a bucket with [Referer-based hotlink protection](https://help.aliyun.com/document_detail/2636937.html) enabled, refer to [Allow only trusted websites to access](https://help.aliyun.com/document_detail/2636937.html) and add the domain `*.console.aliyun.com` to the Referer whitelist.
       * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (the `AliyunBailianDataFullAccess` permission policy is required, which includes the sfm:UpdateTableFromAuthorizedOss permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation does not guarantee idempotence.
       * **Rate limit:**
       * This operation is subject to rate limiting if called too frequently. Do not exceed 5 calls per second. If rate limiting occurs, retry after a short wait.
       *
       * @param request UpdateTableFromAuthorizedOssRequest
       * @return UpdateTableFromAuthorizedOssResponse
       */
      Models::UpdateTableFromAuthorizedOssResponse updateTableFromAuthorizedOss(const string &WorkspaceId, const string &TableId, const Models::UpdateTableFromAuthorizedOssRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
