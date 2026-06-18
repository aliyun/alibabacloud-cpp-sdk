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
       * @summary Creates a category in a specified workspace to classify and manage files. Each workspace supports a maximum of 500 categories.
       *
       * @description - You cannot use an API to add data tables. To add data tables, go to the [Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) page in the console.
       * - A RAM user must obtain the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. The `AliyunBailianDataFullAccess` permission, which includes the `sfm:AddCategory` permission, is required. An Alibaba Cloud account can call this operation directly without requiring authorization. To call this operation, use the latest version of the [Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation is not idempotent.
       * **Rate limiting:** Frequent calls to this operation are subject to rate limiting. Do not exceed a frequency of 5 calls per second. If rate limiting is triggered, try again later.
       *
       * @param request AddCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategoryWithOptions(const string &WorkspaceId, const Models::AddCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a category in a specified workspace to classify and manage files. Each workspace supports a maximum of 500 categories.
       *
       * @description - You cannot use an API to add data tables. To add data tables, go to the [Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) page in the console.
       * - A RAM user must obtain the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. The `AliyunBailianDataFullAccess` permission, which includes the `sfm:AddCategory` permission, is required. An Alibaba Cloud account can call this operation directly without requiring authorization. To call this operation, use the latest version of the [Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation is not idempotent.
       * **Rate limiting:** Frequent calls to this operation are subject to rate limiting. Do not exceed a frequency of 5 calls per second. If rate limiting is triggered, try again later.
       *
       * @param request AddCategoryRequest
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategory(const string &WorkspaceId, const Models::AddCategoryRequest &request);

      /**
       * @summary Creates a connector. This API currently supports only file connectors.
       *
       * @description - To call this operation, a RAM user (sub-account) must first have the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio and be a member of a [business space](https://help.aliyun.com/document_detail/2851098.html). This requires the `AliyunBailianDataFullAccess` policy, which includes the sfm:AddCategory permission. A primary account can call this operation directly without authorization. We recommend using the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Throttling:**
       * Do not call this operation more than 5 times per second. If a request is throttled, try again later.
       *
       * @param tmpReq AddConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddConnectorResponse
       */
      Models::AddConnectorResponse addConnectorWithOptions(const string &WorkspaceId, const Models::AddConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a connector. This API currently supports only file connectors.
       *
       * @description - To call this operation, a RAM user (sub-account) must first have the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio and be a member of a [business space](https://help.aliyun.com/document_detail/2851098.html). This requires the `AliyunBailianDataFullAccess` policy, which includes the sfm:AddCategory permission. A primary account can call this operation directly without authorization. We recommend using the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Throttling:**
       * Do not call this operation more than 5 times per second. If a request is throttled, try again later.
       *
       * @param request AddConnectorRequest
       * @return AddConnectorResponse
       */
      Models::AddConnectorResponse addConnector(const string &WorkspaceId, const Models::AddConnectorRequest &request);

      /**
       * @summary Imports a file from the temporary storage space of Alibaba Cloud Model Studio into a data connection (formerly known as application data).
       *
       * @description - To call this API, a RAM user (sub-account) must have the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and be [added to a workspace](https://help.aliyun.com/document_detail/2851098.html). The required policy is `AliyunBailianDataFullAccess`, which includes the `sfm:AddFile` permission. An Alibaba Cloud account (primary account) can call this API directly without authorization. We recommend using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this API.
       * - This API is not idempotent.
       * **Throttling:** Frequent calls to this API are subject to throttling. Do not exceed a rate of 10 calls per second. If your request is throttled, try again later.
       *
       * @param tmpReq AddFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFileResponse
       */
      Models::AddFileResponse addFileWithOptions(const string &WorkspaceId, const Models::AddFileRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a file from the temporary storage space of Alibaba Cloud Model Studio into a data connection (formerly known as application data).
       *
       * @description - To call this API, a RAM user (sub-account) must have the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and be [added to a workspace](https://help.aliyun.com/document_detail/2851098.html). The required policy is `AliyunBailianDataFullAccess`, which includes the `sfm:AddFile` permission. An Alibaba Cloud account (primary account) can call this API directly without authorization. We recommend using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this API.
       * - This API is not idempotent.
       * **Throttling:** Frequent calls to this API are subject to throttling. Do not exceed a rate of 10 calls per second. If your request is throttled, try again later.
       *
       * @param request AddFileRequest
       * @return AddFileResponse
       */
      Models::AddFileResponse addFile(const string &WorkspaceId, const Models::AddFileRequest &request);

      /**
       * @summary Imports files from an authorized OSS Bucket into Alibaba Cloud Model Studio (Bailian) application data.
       *
       * @description - Please ensure that the OSS Bucket and Alibaba Cloud Model Studio belong to the same Alibaba Cloud account (main account) and that authorization has been completed according to the [Configuration instructions for importing data from OSS](https://help.aliyun.com/document_detail/2782155.html).
       *  
       *      - Supported Bucket storage types do not include Archive, Cold Archive, or Deep Cold Archive. Buckets with content encryption are supported. Public read/write, public read, and private Buckets are supported.
       *      -  If you want to use a Bucket with [Referer hotlink protection](https://help.aliyun.com/document_detail/2636937.html) enabled, refer to [Allow access only from trusted websites](https://help.aliyun.com/document_detail/2636937.html) to add the domain `*.console.aliyun.com` to the Referer allowlist.
       * - A RAM user (sub-account) must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddFilesFromAuthorizedOss permission point) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. The Alibaba Cloud account (main account) can call this directly without authorization. We recommend that you call this operation through the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation is not idempotent.
       * **Throttling description:**
       * Frequent calls to this operation will be throttled. The frequency should not exceed 5 calls per second. If throttled, please try again later.
       *
       * @param tmpReq AddFilesFromAuthorizedOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFilesFromAuthorizedOssResponse
       */
      Models::AddFilesFromAuthorizedOssResponse addFilesFromAuthorizedOssWithOptions(const string &WorkspaceId, const Models::AddFilesFromAuthorizedOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports files from an authorized OSS Bucket into Alibaba Cloud Model Studio (Bailian) application data.
       *
       * @description - Please ensure that the OSS Bucket and Alibaba Cloud Model Studio belong to the same Alibaba Cloud account (main account) and that authorization has been completed according to the [Configuration instructions for importing data from OSS](https://help.aliyun.com/document_detail/2782155.html).
       *  
       *      - Supported Bucket storage types do not include Archive, Cold Archive, or Deep Cold Archive. Buckets with content encryption are supported. Public read/write, public read, and private Buckets are supported.
       *      -  If you want to use a Bucket with [Referer hotlink protection](https://help.aliyun.com/document_detail/2636937.html) enabled, refer to [Allow access only from trusted websites](https://help.aliyun.com/document_detail/2636937.html) to add the domain `*.console.aliyun.com` to the Referer allowlist.
       * - A RAM user (sub-account) must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddFilesFromAuthorizedOss permission point) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. The Alibaba Cloud account (main account) can call this directly without authorization. We recommend that you call this operation through the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation is not idempotent.
       * **Throttling description:**
       * Frequent calls to this operation will be throttled. The frequency should not exceed 5 calls per second. If throttled, please try again later.
       *
       * @param request AddFilesFromAuthorizedOssRequest
       * @return AddFilesFromAuthorizedOssResponse
       */
      Models::AddFilesFromAuthorizedOssResponse addFilesFromAuthorizedOss(const string &WorkspaceId, const Models::AddFilesFromAuthorizedOssRequest &request);

      /**
       * @summary Adds a table to a tabular data connector.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddTable permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
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
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddTable permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - This operation is not idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param request AddTableRequest
       * @return AddTableResponse
       */
      Models::AddTableResponse addTable(const string &WorkspaceId, const Models::AddTableRequest &request);

      /**
       * @summary Request an upload lease for uploading knowledge base files or files for agent application conversational interactions.
       *
       * @description - RAM users (sub-accounts) must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ApplyFileUploadLease permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this API. Alibaba Cloud accounts (primary accounts) can directly call this API without authorization. We recommend that you call this API by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This API is not idempotent.
       * **Throttling:**
       * This API is subject to throttling if called too frequently. The frequency must not exceed 10 calls per second. If throttled, please retry later.
       *
       * @param request ApplyFileUploadLeaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyFileUploadLeaseResponse
       */
      Models::ApplyFileUploadLeaseResponse applyFileUploadLeaseWithOptions(const string &CategoryId, const string &WorkspaceId, const Models::ApplyFileUploadLeaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Request an upload lease for uploading knowledge base files or files for agent application conversational interactions.
       *
       * @description - RAM users (sub-accounts) must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ApplyFileUploadLease permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this API. Alibaba Cloud accounts (primary accounts) can directly call this API without authorization. We recommend that you call this API by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This API is not idempotent.
       * **Throttling:**
       * This API is subject to throttling if called too frequently. The frequency must not exceed 10 calls per second. If throttled, please retry later.
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
       * @summary This operation updates document tags in a data connection in batches.
       *
       * @param tmpReq BatchUpdateFileTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateFileTagResponse
       */
      Models::BatchUpdateFileTagResponse batchUpdateFileTagWithOptions(const string &WorkspaceId, const Models::BatchUpdateFileTagRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation updates document tags in a data connection in batches.
       *
       * @param request BatchUpdateFileTagRequest
       * @return BatchUpdateFileTagResponse
       */
      Models::BatchUpdateFileTagResponse batchUpdateFileTag(const string &WorkspaceId, const Models::BatchUpdateFileTagRequest &request);

      /**
       * @summary Configures the parsing method for a specific file type. For example, you can specify LLM-based document parsing for .pdf files and the Qwen VL Parser for .jpg files.
       *
       * @description - A RAM user (sub-account) must first obtain the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (the `AliyunBailianDataFullAccess` policy, which includes the `sfm:ChangeParseSetting` permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. An Alibaba Cloud account (primary account) can call this operation directly without authorization. We recommend using the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Throttling**
       * The system throttles frequent calls to this operation. Do not exceed a frequency of 10 requests per second. If your request is throttled, try again later.
       *
       * @param tmpReq ChangeParseSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeParseSettingResponse
       */
      Models::ChangeParseSettingResponse changeParseSettingWithOptions(const string &WorkspaceId, const Models::ChangeParseSettingRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the parsing method for a specific file type. For example, you can specify LLM-based document parsing for .pdf files and the Qwen VL Parser for .jpg files.
       *
       * @description - A RAM user (sub-account) must first obtain the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (the `AliyunBailianDataFullAccess` policy, which includes the `sfm:ChangeParseSetting` permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. An Alibaba Cloud account (primary account) can call this operation directly without authorization. We recommend using the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is not idempotent.
       * **Throttling**
       * The system throttles frequent calls to this operation. Do not exceed a frequency of 10 requests per second. If your request is throttled, try again later.
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
       * @summary Use this API to create two types of knowledge bases: unstructured knowledge bases for documents, audio, or video, and structured knowledge bases for data queries or image Q&A.
       *
       * @description - **Permissions**:
       *   - **RAM user**: A RAM user must obtain the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. You can use the `AliyunBailianDataFullAccess` policy, which includes the \\`sfm:CreateIndex\\` permission required for this operation.
       *   - **Alibaba Cloud account**: By default, Alibaba Cloud accounts have the required permissions and can call this operation directly.
       * - **How to call**: Use the latest version of the <props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation. The SDK handles the complex signature calculation logic to simplify the process.
       * - **What to do next**: This operation only initializes a knowledge base creation job. After calling this operation, you must call the **SubmitIndexJob** operation to complete the creation. Otherwise, an empty knowledge base is created. For related code examples, see [Knowledge base API guide](https://help.aliyun.com/document_detail/2852772.html).
       * - **Idempotence**: This operation is not idempotent. Repeated calls may create multiple knowledge bases with the same name. To ensure idempotence, query for the knowledge base before you create it.
       * **Rate limiting:**
       * Frequent calls to this operation are subject to rate limiting. Do not exceed a frequency of 10 calls per second. If you encounter rate limiting, retry the call later.
       *
       * @param tmpReq CreateIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIndexResponse
       */
      Models::CreateIndexResponse createIndexWithOptions(const string &WorkspaceId, const Models::CreateIndexRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use this API to create two types of knowledge bases: unstructured knowledge bases for documents, audio, or video, and structured knowledge bases for data queries or image Q&A.
       *
       * @description - **Permissions**:
       *   - **RAM user**: A RAM user must obtain the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. You can use the `AliyunBailianDataFullAccess` policy, which includes the \\`sfm:CreateIndex\\` permission required for this operation.
       *   - **Alibaba Cloud account**: By default, Alibaba Cloud accounts have the required permissions and can call this operation directly.
       * - **How to call**: Use the latest version of the <props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation. The SDK handles the complex signature calculation logic to simplify the process.
       * - **What to do next**: This operation only initializes a knowledge base creation job. After calling this operation, you must call the **SubmitIndexJob** operation to complete the creation. Otherwise, an empty knowledge base is created. For related code examples, see [Knowledge base API guide](https://help.aliyun.com/document_detail/2852772.html).
       * - **Idempotence**: This operation is not idempotent. Repeated calls may create multiple knowledge bases with the same name. To ensure idempotence, query for the knowledge base before you create it.
       * **Rate limiting:**
       * Frequent calls to this operation are subject to rate limiting. Do not exceed a frequency of 10 calls per second. If you encounter rate limiting, retry the call later.
       *
       * @param request CreateIndexRequest
       * @return CreateIndexResponse
       */
      Models::CreateIndexResponse createIndex(const string &WorkspaceId, const Models::CreateIndexRequest &request);

      /**
       * @summary Creates a long-term memory.
       *
       * @description - You can store specific information from conversations (memory nodes. For more information, see [Long-term memory](https://www.alibabacloud.com/help/en/model-studio/user-guide/long-term-memory)) in a long-term memory. Agent applications can then reference this information in subsequent conversations. This is not an automatic creation procedure. You must first invoke the [CreateMemory](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-creatememory) operation to create a long-term memory and obtain the `memoryId`. Then pass the `memoryId` when you [invoke the agent application through the API](https://www.alibabacloud.com/help/en/model-studio/user-guide/application-calling).
       *     > Long-term memory does not support storing and managing user profiles through the API. Perform related operations in the console. For more information, see [Long-term memory](https://www.alibabacloud.com/help/en/model-studio/user-guide/long-term-memory#578ebae524m6l).
       * - If you pass a `memoryId`, the system uses automatic creation to generate memory nodes (MemoryNode) under the specified long-term memory based on conversation records. You can also invoke the [CreateMemoryNode](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-creatememorynode) operation to manually create memory nodes.
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
       * @description - You can store specific information from conversations (memory nodes. For more information, see [Long-term memory](https://www.alibabacloud.com/help/en/model-studio/user-guide/long-term-memory)) in a long-term memory. Agent applications can then reference this information in subsequent conversations. This is not an automatic creation procedure. You must first invoke the [CreateMemory](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-creatememory) operation to create a long-term memory and obtain the `memoryId`. Then pass the `memoryId` when you [invoke the agent application through the API](https://www.alibabacloud.com/help/en/model-studio/user-guide/application-calling).
       *     > Long-term memory does not support storing and managing user profiles through the API. Perform related operations in the console. For more information, see [Long-term memory](https://www.alibabacloud.com/help/en/model-studio/user-guide/long-term-memory#578ebae524m6l).
       * - If you pass a `memoryId`, the system uses automatic creation to generate memory nodes (MemoryNode) under the specified long-term memory based on conversation records. You can also invoke the [CreateMemoryNode](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-creatememorynode) operation to manually create memory nodes.
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
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:DeleteCategory permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is idempotent.
       * **Rate limiting:**
       * This operation is subject to rate limiting. Do not exceed 5 calls per second. If you are throttled, retry later.
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
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:DeleteCategory permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is idempotent.
       * **Rate limiting:**
       * This operation is subject to rate limiting. Do not exceed 5 calls per second. If you are throttled, retry later.
       *
       * @param request DeleteCategoryRequest
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategory(const string &CategoryId, const string &WorkspaceId, const Models::DeleteCategoryRequest &request);

      /**
       * @summary Deletes specified text chunks from a knowledge base. Deleted text chunks cannot be retrieved or recalled.
       *
       * @description <warning>  Deleted text chunks cannot be recovered (hard delete). Proceed with caution.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user**: Obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio first (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:DeleteChunk permission required by this operation), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation.
       *   - **Alibaba Cloud account**: Has permissions by default and can invoke this operation directly.
       * - **Invocation method**: Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK provides encapsulation of complex signature calculation logic and simplifies the invocation procedure.
       * - **Effective latency**: Changes typically take effect immediately. During peak hours, there may be a slight delay (seconds).
       * - **Idempotence**: This operation is idempotent. Repeated calls to delete an already deleted text chunk return a success response.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param tmpReq DeleteChunkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChunkResponse
       */
      Models::DeleteChunkResponse deleteChunkWithOptions(const string &WorkspaceId, const Models::DeleteChunkRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specified text chunks from a knowledge base. Deleted text chunks cannot be retrieved or recalled.
       *
       * @description <warning>  Deleted text chunks cannot be recovered (hard delete). Proceed with caution.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user**: Obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio first (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:DeleteChunk permission required by this operation), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation.
       *   - **Alibaba Cloud account**: Has permissions by default and can invoke this operation directly.
       * - **Invocation method**: Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK provides encapsulation of complex signature calculation logic and simplifies the invocation procedure.
       * - **Effective latency**: Changes typically take effect immediately. During peak hours, there may be a slight delay (seconds).
       * - **Idempotence**: This operation is idempotent. Repeated calls to delete an already deleted text chunk return a success response.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param request DeleteChunkRequest
       * @return DeleteChunkResponse
       */
      Models::DeleteChunkResponse deleteChunk(const string &WorkspaceId, const Models::DeleteChunkRequest &request);

      /**
       * @summary 删除连接器
       *
       * @description - RAM用户（子账号）需要首先获取阿里云百炼的[API权限](https://help.aliyun.com/document_detail/2848578.html)（需要`AliyunBailianDataFullAccess`，已包括sfm:DeleteConnector权限点），并[加入一个业务空间](https://help.aliyun.com/document_detail/2851098.html)后，方可调用本接口。阿里云账号（主账号）可直接调用无须授权。建议您通过最新版[阿里云百炼SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)[阿里云百炼SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29)来调用本接口。
       * - 本接口不具备幂等性。
       * **限流说明：**
       * 本接口频繁调用会被限流，频率请勿超过5次/秒。如遇限流，请稍后重试。
       *
       * @param request DeleteConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnectorResponse
       */
      Models::DeleteConnectorResponse deleteConnectorWithOptions(const string &ConnectorId, const string &WorkspaceId, const Models::DeleteConnectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除连接器
       *
       * @description - RAM用户（子账号）需要首先获取阿里云百炼的[API权限](https://help.aliyun.com/document_detail/2848578.html)（需要`AliyunBailianDataFullAccess`，已包括sfm:DeleteConnector权限点），并[加入一个业务空间](https://help.aliyun.com/document_detail/2851098.html)后，方可调用本接口。阿里云账号（主账号）可直接调用无须授权。建议您通过最新版[阿里云百炼SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)[阿里云百炼SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29)来调用本接口。
       * - 本接口不具备幂等性。
       * **限流说明：**
       * 本接口频繁调用会被限流，频率请勿超过5次/秒。如遇限流，请稍后重试。
       *
       * @param request DeleteConnectorRequest
       * @return DeleteConnectorResponse
       */
      Models::DeleteConnectorResponse deleteConnector(const string &ConnectorId, const string &WorkspaceId, const Models::DeleteConnectorRequest &request);

      /**
       * @summary Permanently delete a specified file from application data. Deleting data tables via API is not supported. For details, see the API Guide below.
       *
       * @description - Deleting data tables via API is not supported. To delete a data table or specific data within a table, go to <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) to perform the operation.
       * - This API is used to delete files in <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) and does not affect any knowledge bases that have already been built. To delete a file from a knowledge base, invoke the **DeleteIndexDocument** API.
       * - A RAM user must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the `sfm:DeleteFile` permission point) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this API. An Alibaba Cloud account can invoke this API directly without authorization. We recommend that you use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this API.
       * - This API can only delete files whose status is either Failed to Parse (`PARSE_FAILED`) or Parse Succeeded (`PARSE_SUCCESS`).
       * - This API is idempotent.
       * **Rate Limiting Notice:**
       * Frequent invocation of this API will trigger rate limiting. Do not exceed 10 requests per second. If rate limited, retry after a short wait.
       *
       * @param request DeleteFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFileWithOptions(const string &FileId, const string &WorkspaceId, const Models::DeleteFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permanently delete a specified file from application data. Deleting data tables via API is not supported. For details, see the API Guide below.
       *
       * @description - Deleting data tables via API is not supported. To delete a data table or specific data within a table, go to <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) to perform the operation.
       * - This API is used to delete files in <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) and does not affect any knowledge bases that have already been built. To delete a file from a knowledge base, invoke the **DeleteIndexDocument** API.
       * - A RAM user must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the `sfm:DeleteFile` permission point) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this API. An Alibaba Cloud account can invoke this API directly without authorization. We recommend that you use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this API.
       * - This API can only delete files whose status is either Failed to Parse (`PARSE_FAILED`) or Parse Succeeded (`PARSE_SUCCESS`).
       * - This API is idempotent.
       * **Rate Limiting Notice:**
       * Frequent invocation of this API will trigger rate limiting. Do not exceed 10 requests per second. If rate limited, retry after a short wait.
       *
       * @param request DeleteFileRequest
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFile(const string &FileId, const string &WorkspaceId, const Models::DeleteFileRequest &request);

      /**
       * @summary Delete files in batch
       *
       * @description - Deleting data tables through the API is not supported. To delete a data table or specific data in a table, go to <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
       * - This API is used to delete files in <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center). It does not affect knowledge bases that have already been built. To delete files in a knowledge base, call the **DeleteIndexDocument** operation.
       * - A RAM user (sub-account) must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which already includes the sfm:DeleteFiles permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. The Alibaba Cloud account (main account) can call this operation directly without authorization. We recommend that you use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation can only delete files whose status is parsing failed (PARSE_FAILED) or parsing succeeded (PARSE_SUCCESS).
       * - This operation is idempotent.
       * **Throttling:**
       * Frequent calls to this operation are throttled. Do not exceed 10 queries per second (QPS). If you are throttled, try again later.
       *
       * @param tmpReq DeleteFilesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFilesResponse
       */
      Models::DeleteFilesResponse deleteFilesWithOptions(const string &WorkspaceId, const Models::DeleteFilesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete files in batch
       *
       * @description - Deleting data tables through the API is not supported. To delete a data table or specific data in a table, go to <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
       * - This API is used to delete files in <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center). It does not affect knowledge bases that have already been built. To delete files in a knowledge base, call the **DeleteIndexDocument** operation.
       * - A RAM user (sub-account) must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which already includes the sfm:DeleteFiles permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. The Alibaba Cloud account (main account) can call this operation directly without authorization. We recommend that you use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation can only delete files whose status is parsing failed (PARSE_FAILED) or parsing succeeded (PARSE_SUCCESS).
       * - This operation is idempotent.
       * **Throttling:**
       * Frequent calls to this operation are throttled. Do not exceed 10 queries per second (QPS). If you are throttled, try again later.
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
       * @summary Queries the basic information about a file in application data, including the file name, type, and status.
       *
       * @description - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:DescribeFile permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation is idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
       *
       * @param request DescribeFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileResponse
       */
      Models::DescribeFileResponse describeFileWithOptions(const string &WorkspaceId, const string &FileId, const Models::DescribeFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about a file in application data, including the file name, type, and status.
       *
       * @description - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:DescribeFile permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation is idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
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
       * @summary Lists all supported parser types based on the input file type (file extension).
       *
       * @description - RAM用户（子账号）需要首先获取阿里云百炼的[API权限](https://help.aliyun.com/document_detail/2848578.html)（`AliyunBailianDataFullAccess`或`AliyunBailianDataReadOnlyAccess`均可，已包括sfm:GetAvailableParserTypes权限点），并[加入一个业务空间](https://help.aliyun.com/document_detail/2851098.html)后，方可调用本接口。阿里云账号（主账号）可直接调用无须授权。建议您通过最新版<props="china">[阿里云百炼SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[阿里云百炼SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29)来调用本接口。
       * - 本接口具有幂等性。
       * **限流说明：**
       * 本接口频繁调用会被限流，频率请勿超过10次/秒。如遇限流，请稍后重试。
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
       * @description - RAM用户（子账号）需要首先获取阿里云百炼的[API权限](https://help.aliyun.com/document_detail/2848578.html)（`AliyunBailianDataFullAccess`或`AliyunBailianDataReadOnlyAccess`均可，已包括sfm:GetAvailableParserTypes权限点），并[加入一个业务空间](https://help.aliyun.com/document_detail/2851098.html)后，方可调用本接口。阿里云账号（主账号）可直接调用无须授权。建议您通过最新版<props="china">[阿里云百炼SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[阿里云百炼SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29)来调用本接口。
       * - 本接口具有幂等性。
       * **限流说明：**
       * 本接口频繁调用会被限流，频率请勿超过10次/秒。如遇限流，请稍后重试。
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
       * @summary Queries the current status of a specified knowledge base creation job or knowledge base document append job.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:GetIndexJobStatus permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - You must have a knowledge base job task in progress. To create a knowledge base creation task, invoke the **SubmitIndexJob** operation. To create a knowledge base document append task, invoke the **SubmitIndexAddDocumentsJob** operation. Obtain the corresponding `JobId` from the response.
       * - Invoke this operation at intervals of 5 seconds or more.
       * - This operation is idempotent.
       *
       * @param request GetIndexJobStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIndexJobStatusResponse
       */
      Models::GetIndexJobStatusResponse getIndexJobStatusWithOptions(const string &WorkspaceId, const Models::GetIndexJobStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current status of a specified knowledge base creation job or knowledge base document append job.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:GetIndexJobStatus permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - You must have a knowledge base job task in progress. To create a knowledge base creation task, invoke the **SubmitIndexJob** operation. To create a knowledge base document append task, invoke the **SubmitIndexAddDocumentsJob** operation. Obtain the corresponding `JobId` from the response.
       * - Invoke this operation at intervals of 5 seconds or more.
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
       * @summary Queries the data parsing settings in a specified category.
       *
       * @description - RAM用户（子账号）需要首先获取阿里云百炼的[API权限](https://help.aliyun.com/document_detail/2848578.html)（`AliyunBailianDataFullAccess`或`AliyunBailianDataReadOnlyAccess`均可，已包括sfm:GetParseSettings权限点），并[加入一个业务空间](https://help.aliyun.com/document_detail/2851098.html)后，方可调用本接口。阿里云账号（主账号）可直接调用无须授权。建议您通过最新版<props="china">[阿里云百炼SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[阿里云百炼SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29)来调用本接口。
       * - 本接口具有幂等性。
       * **限流说明：**
       * 本接口频繁调用会被限流，频率请勿超过10次/秒。如遇限流，请稍后重试。
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
       * @description - RAM用户（子账号）需要首先获取阿里云百炼的[API权限](https://help.aliyun.com/document_detail/2848578.html)（`AliyunBailianDataFullAccess`或`AliyunBailianDataReadOnlyAccess`均可，已包括sfm:GetParseSettings权限点），并[加入一个业务空间](https://help.aliyun.com/document_detail/2851098.html)后，方可调用本接口。阿里云账号（主账号）可直接调用无须授权。建议您通过最新版<props="china">[阿里云百炼SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[阿里云百炼SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29)来调用本接口。
       * - 本接口具有幂等性。
       * **限流说明：**
       * 本接口频繁调用会被限流，频率请勿超过10次/秒。如遇限流，请稍后重试。
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
       * @description - This API does not support querying data tables.
       * - To call this API, a RAM user must first obtain the required [API permission](https://help.aliyun.com/document_detail/2848578.html) for Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). This requires the `AliyunBailianDataFullAccess` permission, which includes the `sfm:ListCategory` permission. Alibaba Cloud accounts can call this API directly. Use the latest version of the <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation supports pagination. When making your first request, set the `MaxResults` parameter to specify the maximum number of items to return. If more items are available, the response includes a `NextToken`. To retrieve the next page of results, set the `NextToken` parameter to the value from the previous response and specify `MaxResults` again. An empty `NextToken` indicates that no more results are available.
       * - This operation is idempotent.
       * **Rate limiting:** This API is subject to rate limiting. Do not exceed 5 requests per second. If the system throttles a request, retry it after a short interval.
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
       * @description - This API does not support querying data tables.
       * - To call this API, a RAM user must first obtain the required [API permission](https://help.aliyun.com/document_detail/2848578.html) for Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). This requires the `AliyunBailianDataFullAccess` permission, which includes the `sfm:ListCategory` permission. Alibaba Cloud accounts can call this API directly. Use the latest version of the <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation supports pagination. When making your first request, set the `MaxResults` parameter to specify the maximum number of items to return. If more items are available, the response includes a `NextToken`. To retrieve the next page of results, set the `NextToken` parameter to the value from the previous response and specify `MaxResults` again. An empty `NextToken` indicates that no more results are available.
       * - This operation is idempotent.
       * **Rate limiting:** This API is subject to rate limiting. Do not exceed 5 requests per second. If the system throttles a request, retry it after a short interval.
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
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListFile permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - When performing paging for the first page, only set `MaxResults` to limit the number of entries returned. The `NextToken` in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and set `MaxResults` to limit the number of entries returned.
       * - This operation is idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If throttled, retry later.
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
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListFile permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - When performing paging for the first page, only set `MaxResults` to limit the number of entries returned. The `NextToken` in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and set `MaxResults` to limit the number of entries returned.
       * - This operation is idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If throttled, retry later.
       *
       * @param request ListFileRequest
       * @return ListFileResponse
       */
      Models::ListFileResponse listFile(const string &WorkspaceId, const Models::ListFileRequest &request);

      /**
       * @summary Retrieves the files in a specified knowledge base along with their summary information.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:ListIndexFiles permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 15 calls per second. If you are throttled, retry later.
       *
       * @param request ListIndexDocumentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexDocumentsResponse
       */
      Models::ListIndexDocumentsResponse listIndexDocumentsWithOptions(const string &WorkspaceId, const Models::ListIndexDocumentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the files in a specified knowledge base along with their summary information.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:ListIndexFiles permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
       * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
       * - This operation has idempotence.
       * **Throttling:**
       * This operation is throttled if called too frequently. Do not exceed 15 calls per second. If you are throttled, retry later.
       *
       * @param request ListIndexDocumentsRequest
       * @return ListIndexDocumentsResponse
       */
      Models::ListIndexDocumentsResponse listIndexDocuments(const string &WorkspaceId, const Models::ListIndexDocumentsRequest &request);

      /**
       * @summary Retrieves the details of one or more documents in a specified knowledge base.
       *
       * @description - A RAM user must have the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio to call this operation. The `AliyunBailianDataFullAccess` permission, which includes the \\`sfm:ListIndexFiles\\` permission, is required. An Alibaba Cloud account can call this operation without authorization. You can call this operation using the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - Before you call this operation, ensure that your knowledge base exists and its ID, `IndexId`, is valid.
       * - This operation is idempotent.
       *
       * @param request ListIndexFileDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexFileDetailsResponse
       */
      Models::ListIndexFileDetailsResponse listIndexFileDetailsWithOptions(const string &WorkspaceId, const Models::ListIndexFileDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of one or more documents in a specified knowledge base.
       *
       * @description - A RAM user must have the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio to call this operation. The `AliyunBailianDataFullAccess` permission, which includes the \\`sfm:ListIndexFiles\\` permission, is required. An Alibaba Cloud account can call this operation without authorization. You can call this operation using the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - Before you call this operation, ensure that your knowledge base exists and its ID, `IndexId`, is valid.
       * - This operation is idempotent.
       *
       * @param request ListIndexFileDetailsRequest
       * @return ListIndexFileDetailsResponse
       */
      Models::ListIndexFileDetailsResponse listIndexFileDetails(const string &WorkspaceId, const Models::ListIndexFileDetailsRequest &request);

      /**
       * @summary Retrieves the list of knowledge bases in a specified workspace.
       *
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListIndex permission) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
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
       * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListIndex permission) before calling this operation. Alibaba Cloud accounts can call this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * - This operation is idempotent.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
       *
       * @param request ListIndicesRequest
       * @return ListIndicesResponse
       */
      Models::ListIndicesResponse listIndices(const string &WorkspaceId, const Models::ListIndicesRequest &request);

      /**
       * @summary Retrieves the details of one or more long-term memory entities in a specified workspace.
       *
       * @description - When querying the first page of a paging query, set only `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and settings `MaxResults` to limit the number of entries returned.
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
       * @description - When querying the first page of a paging query, set only `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and settings `MaxResults` to limit the number of entries returned.
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
       * @summary Retrieves information from a specified knowledge base.
       *
       * @description <props="china">
       * - **How to call**: To retrieve information from a knowledge base, use the latest [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29) with an [AccessKey](https://help.aliyun.com/document_detail/116401.html) or [Spring AI Alibaba](https://help.aliyun.com/document_detail/2990886.html) with an Alibaba Cloud Model Studio [API key](https://help.aliyun.com/document_detail/2712195.html). Both tools simplify your API calls by handling the complex signature calculation.
       * - **Required permissions**:
       *   - **RAM user (sub-account)**: To call this API, a RAM user must be granted [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). You can use the `AliyunBailianDataFullAccess` policy, which includes the required `sfm:Retrieve` permission.
       *   - **Alibaba Cloud account (main account)**: This account has the required permissions by default and can call the API directly.
       * - **Response latency**: This API call involves complex retrieval and matching operations, which can cause longer response times. We recommend configuring appropriate request timeouts and retry strategies.
       * - **Idempotency**: This API is idempotent.
       * <props="intl">
       * - **How to call**: We recommend using the latest [Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this API. The SDK simplifies API calls by handling the complex signature calculation.
       * - **Required permissions**:
       *   - **RAM user (sub-account)**: To call this API, a RAM user must be granted [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). You can use the `AliyunBailianDataFullAccess` policy, which includes the required `sfm:Retrieve` permission.
       *   - **Alibaba Cloud account (main account)**: This account has the required permissions by default and can call the API directly.
       * - **Response latency**: This API call involves complex retrieval and matching operations, which can cause longer response times. We recommend configuring appropriate request timeouts and retry strategies.
       * - **Idempotency**: This API is idempotent.
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
       * - **How to call**: To retrieve information from a knowledge base, use the latest [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29) with an [AccessKey](https://help.aliyun.com/document_detail/116401.html) or [Spring AI Alibaba](https://help.aliyun.com/document_detail/2990886.html) with an Alibaba Cloud Model Studio [API key](https://help.aliyun.com/document_detail/2712195.html). Both tools simplify your API calls by handling the complex signature calculation.
       * - **Required permissions**:
       *   - **RAM user (sub-account)**: To call this API, a RAM user must be granted [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). You can use the `AliyunBailianDataFullAccess` policy, which includes the required `sfm:Retrieve` permission.
       *   - **Alibaba Cloud account (main account)**: This account has the required permissions by default and can call the API directly.
       * - **Response latency**: This API call involves complex retrieval and matching operations, which can cause longer response times. We recommend configuring appropriate request timeouts and retry strategies.
       * - **Idempotency**: This API is idempotent.
       * <props="intl">
       * - **How to call**: We recommend using the latest [Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this API. The SDK simplifies API calls by handling the complex signature calculation.
       * - **Required permissions**:
       *   - **RAM user (sub-account)**: To call this API, a RAM user must be granted [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). You can use the `AliyunBailianDataFullAccess` policy, which includes the required `sfm:Retrieve` permission.
       *   - **Alibaba Cloud account (main account)**: This account has the required permissions by default and can call the API directly.
       * - **Response latency**: This API call involves complex retrieval and matching operations, which can cause longer response times. We recommend configuring appropriate request timeouts and retry strategies.
       * - **Idempotency**: This API is idempotent.
       *
       * @param request RetrieveRequest
       * @return RetrieveResponse
       */
      Models::RetrieveResponse retrieve(const string &WorkspaceId, const Models::RetrieveRequest &request);

      /**
       * @summary Adds parsed files to the specified knowledge base.
       *
       * @description <props="china">
       * - This API does not support knowledge bases for data queries or image Q\\&A. To update these knowledge bases, see the [knowledge base](https://help.aliyun.com/document_detail/2807740.html) documentation.
       * <props="intl">
       * - This API does not support knowledge bases for data queries or image Q\\&A. To update these knowledge bases, see the [knowledge base](https://help.aliyun.com/document_detail/2807740.html) documentation.
       * - A RAM user (sub-account) can call this API only after being granted the required [api permission](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (specifically, the `AliyunBailianDataFullAccess` policy, which includes the `sfm:SubmitIndexAddDocumentsJob` permission) and joining a [workspace](https://help.aliyun.com/document_detail/2851098.html). An Alibaba Cloud account can call this API directly without authorization. We recommend using the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this API.
       * - Before calling this API, ensure your knowledge base exists and has a valid knowledge base ID (`IndexId`).
       * - Before calling this API, you must first upload files to Alibaba Cloud Model Studio using the **AddFile** API.
       * - After calling this API, the job runs in the background and may take several hours to complete, especially during peak times. Do not submit duplicate requests until the job is complete. To check the job status, call the **GetIndexJobStatus** API. The `Documents` file list returned by the GetIndexJobStatus API contains all files for the job, which is uniquely identified by the `job_id` you provided. You can check this list to verify whether each file was imported (parsed) successfully. Note that frequent calls to the GetIndexJobStatus API are subject to rate limiting. Do not exceed 20 calls per minute.
       * - A successful API call indicates the job has been submitted for processing, which takes time. This API is not idempotent, so do not send duplicate requests; doing so will create multiple jobs.
       * **Rate limiting:** This API is limited to 10 calls per second. If you exceed this limit, wait before retrying.
       *
       * @param tmpReq SubmitIndexAddDocumentsJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIndexAddDocumentsJobResponse
       */
      Models::SubmitIndexAddDocumentsJobResponse submitIndexAddDocumentsJobWithOptions(const string &WorkspaceId, const Models::SubmitIndexAddDocumentsJobRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds parsed files to the specified knowledge base.
       *
       * @description <props="china">
       * - This API does not support knowledge bases for data queries or image Q\\&A. To update these knowledge bases, see the [knowledge base](https://help.aliyun.com/document_detail/2807740.html) documentation.
       * <props="intl">
       * - This API does not support knowledge bases for data queries or image Q\\&A. To update these knowledge bases, see the [knowledge base](https://help.aliyun.com/document_detail/2807740.html) documentation.
       * - A RAM user (sub-account) can call this API only after being granted the required [api permission](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (specifically, the `AliyunBailianDataFullAccess` policy, which includes the `sfm:SubmitIndexAddDocumentsJob` permission) and joining a [workspace](https://help.aliyun.com/document_detail/2851098.html). An Alibaba Cloud account can call this API directly without authorization. We recommend using the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this API.
       * - Before calling this API, ensure your knowledge base exists and has a valid knowledge base ID (`IndexId`).
       * - Before calling this API, you must first upload files to Alibaba Cloud Model Studio using the **AddFile** API.
       * - After calling this API, the job runs in the background and may take several hours to complete, especially during peak times. Do not submit duplicate requests until the job is complete. To check the job status, call the **GetIndexJobStatus** API. The `Documents` file list returned by the GetIndexJobStatus API contains all files for the job, which is uniquely identified by the `job_id` you provided. You can check this list to verify whether each file was imported (parsed) successfully. Note that frequent calls to the GetIndexJobStatus API are subject to rate limiting. Do not exceed 20 calls per minute.
       * - A successful API call indicates the job has been submitted for processing, which takes time. This API is not idempotent, so do not send duplicate requests; doing so will create multiple jobs.
       * **Rate limiting:** This API is limited to 10 calls per second. If you exceed this limit, wait before retrying.
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
       * @description - **Key limits**: This operation supports only document search knowledge bases. Data query and image Q&A knowledge bases are not supported.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user**: Before invoking this operation, obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:UpdateChunk permission required by this operation), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html).
       *   - **Alibaba Cloud account**: Has permissions by default and can invoke this operation directly.
       * - **Calling method**: Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK provides encapsulation of complex signature calculation logic and simplifies the invocation procedure.
       * - **Effective latency**: Updates typically take effect immediately. During peak hours, a slight delay (seconds) may occur.
       * - **Idempotence**: This operation is idempotent. If you repeat the operation on a text chunk that has already been updated, the operation returns a success response.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
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
       * @description - **Key limits**: This operation supports only document search knowledge bases. Data query and image Q&A knowledge bases are not supported.
       * - **Permission requirements**:
       *   - **Resource Access Management (RAM) user**: Before invoking this operation, obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (you can use the `AliyunBailianDataFullAccess` policy, which includes the sfm:UpdateChunk permission required by this operation), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html).
       *   - **Alibaba Cloud account**: Has permissions by default and can invoke this operation directly.
       * - **Calling method**: Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29). The SDK provides encapsulation of complex signature calculation logic and simplifies the invocation procedure.
       * - **Effective latency**: Updates typically take effect immediately. During peak hours, a slight delay (seconds) may occur.
       * - **Idempotence**: This operation is idempotent. If you repeat the operation on a text chunk that has already been updated, the operation returns a success response.
       * **Rate limit:**
       * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
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
       * @summary Updates the tags for a specified file.
       *
       * @description - A RAM User (sub-account) must be granted the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (the `AliyunBailianDataFullAccess` policy, which includes the `sfm:UpdateFileTag` permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. An Alibaba Cloud account (main account) can call this operation directly without authorization. We recommend using the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * **Throttling:** Do not call this operation more than 5 times per second. If a request is throttled, try again later.
       *
       * @param tmpReq UpdateFileTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileTagResponse
       */
      Models::UpdateFileTagResponse updateFileTagWithOptions(const string &WorkspaceId, const string &FileId, const Models::UpdateFileTagRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the tags for a specified file.
       *
       * @description - A RAM User (sub-account) must be granted the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (the `AliyunBailianDataFullAccess` policy, which includes the `sfm:UpdateFileTag` permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. An Alibaba Cloud account (main account) can call this operation directly without authorization. We recommend using the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
       * **Throttling:** Do not call this operation more than 5 times per second. If a request is throttled, try again later.
       *
       * @param request UpdateFileTagRequest
       * @return UpdateFileTagResponse
       */
      Models::UpdateFileTagResponse updateFileTag(const string &WorkspaceId, const string &FileId, const Models::UpdateFileTagRequest &request);

      /**
       * @summary Updates the configuration of a specified knowledge base.
       *
       * @description <props="intl">This operation is not available on the Alibaba Cloud International Website (www\\.alibabacloud.com).<props="china">
       * Before a RAM user can call this operation, the RAM user must have the `AliyunBailianDataFullAccess` permission for Alibaba Cloud Model Studio. For more information, see [Grant permissions](https://help.aliyun.com/document_detail/2848578.html). The RAM user must also be added to a workspace. For more information, see [Add a member to a workspace](https://help.aliyun.com/document_detail/2851098.html). An Alibaba Cloud account can call this operation without authorization. Use the latest version of the Alibaba Cloud Model Studio SDK to call this operation. For more information, see [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29).
       * Before you call this operation, ensure that the knowledge base is created and has not been deleted. The knowledge base ID (`Id`) must be valid.
       * This operation is idempotent.
       *
       * @param request UpdateIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIndexResponse
       */
      Models::UpdateIndexResponse updateIndexWithOptions(const string &WorkspaceId, const Models::UpdateIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified knowledge base.
       *
       * @description <props="intl">This operation is not available on the Alibaba Cloud International Website (www\\.alibabacloud.com).<props="china">
       * Before a RAM user can call this operation, the RAM user must have the `AliyunBailianDataFullAccess` permission for Alibaba Cloud Model Studio. For more information, see [Grant permissions](https://help.aliyun.com/document_detail/2848578.html). The RAM user must also be added to a workspace. For more information, see [Add a member to a workspace](https://help.aliyun.com/document_detail/2851098.html). An Alibaba Cloud account can call this operation without authorization. Use the latest version of the Alibaba Cloud Model Studio SDK to call this operation. For more information, see [Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29).
       * Before you call this operation, ensure that the knowledge base is created and has not been deleted. The knowledge base ID (`Id`) must be valid.
       * This operation is idempotent.
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
       * @summary Update a table in an Alibaba Cloud Model Studio data connector using a file from an authorized OSS bucket.
       *
       * @description - Ensure that the OSS bucket belongs to the same Alibaba Cloud account as your Alibaba Cloud Model Studio instance. You must also complete the authorization steps described in [Configure data import from OSS](https://help.aliyun.com/document_detail/2782155.html).
       *   - The bucket storage class must not be Archive, Cold Archive, or Deep Cold Archive. Buckets with server-side encryption are supported. public-read-write, public-read, and private buckets are also supported.
       *   - If you use a bucket with [Referer-based hotlink protection](https://help.aliyun.com/document_detail/2636937.html), you must add `*.console.aliyun.com` to the Referer whitelist. For more information, see [Allow access only from trusted websites](https://help.aliyun.com/document_detail/2636937.html).
       * - Before a RAM user (sub-account) can call this operation, they must obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). The AliyunBailianDataFullAccess policy includes the required `sfm:UpdateTableFromAuthorizedOss` permission. An Alibaba Cloud account (root account) can call this operation directly without additional permissions. We recommend that you use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29) or <props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation is not idempotent.
       * **Rate limiting:** This operation is subject to rate limiting. Do not call it more than five times per second. If you reach the limit, wait before you try again.
       *
       * @param request UpdateTableFromAuthorizedOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableFromAuthorizedOssResponse
       */
      Models::UpdateTableFromAuthorizedOssResponse updateTableFromAuthorizedOssWithOptions(const string &WorkspaceId, const string &TableId, const Models::UpdateTableFromAuthorizedOssRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a table in an Alibaba Cloud Model Studio data connector using a file from an authorized OSS bucket.
       *
       * @description - Ensure that the OSS bucket belongs to the same Alibaba Cloud account as your Alibaba Cloud Model Studio instance. You must also complete the authorization steps described in [Configure data import from OSS](https://help.aliyun.com/document_detail/2782155.html).
       *   - The bucket storage class must not be Archive, Cold Archive, or Deep Cold Archive. Buckets with server-side encryption are supported. public-read-write, public-read, and private buckets are also supported.
       *   - If you use a bucket with [Referer-based hotlink protection](https://help.aliyun.com/document_detail/2636937.html), you must add `*.console.aliyun.com` to the Referer whitelist. For more information, see [Allow access only from trusted websites](https://help.aliyun.com/document_detail/2636937.html).
       * - Before a RAM user (sub-account) can call this operation, they must obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio and [join a workspace](https://help.aliyun.com/document_detail/2851098.html). The AliyunBailianDataFullAccess policy includes the required `sfm:UpdateTableFromAuthorizedOss` permission. An Alibaba Cloud account (root account) can call this operation directly without additional permissions. We recommend that you use the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29) or <props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
       * - This operation is not idempotent.
       * **Rate limiting:** This operation is subject to rate limiting. Do not call it more than five times per second. If you reach the limit, wait before you try again.
       *
       * @param request UpdateTableFromAuthorizedOssRequest
       * @return UpdateTableFromAuthorizedOssResponse
       */
      Models::UpdateTableFromAuthorizedOssResponse updateTableFromAuthorizedOss(const string &WorkspaceId, const string &TableId, const Models::UpdateTableFromAuthorizedOssRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
