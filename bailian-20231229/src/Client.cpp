#include <darabonba/Core.hpp>
#include <alibabacloud/Bailian20231229.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Bailian20231229::Models;
namespace AlibabaCloud
{
namespace Bailian20231229
{

AlibabaCloud::Bailian20231229::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("bailian", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

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
AddCategoryResponse Client::addCategoryWithOptions(const string &WorkspaceId, const AddCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryName()) {
    body["CategoryName"] = request.getCategoryName();
  }

  if (!!request.hasCategoryType()) {
    body["CategoryType"] = request.getCategoryType();
  }

  if (!!request.hasParentCategoryId()) {
    body["ParentCategoryId"] = request.getParentCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddCategory"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/category/")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCategoryResponse>();
}

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
AddCategoryResponse Client::addCategory(const string &WorkspaceId, const AddCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addCategoryWithOptions(WorkspaceId, request, headers, runtime);
}

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
AddFileResponse Client::addFileWithOptions(const string &WorkspaceId, const AddFileRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddFileShrinkRequest request = AddFileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCategoryType()) {
    body["CategoryType"] = request.getCategoryType();
  }

  if (!!request.hasLeaseId()) {
    body["LeaseId"] = request.getLeaseId();
  }

  if (!!request.hasOriginalFileUrl()) {
    body["OriginalFileUrl"] = request.getOriginalFileUrl();
  }

  if (!!request.hasParser()) {
    body["Parser"] = request.getParser();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddFile"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/file")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFileResponse>();
}

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
AddFileResponse Client::addFile(const string &WorkspaceId, const AddFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addFileWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 将已授权OSS Bucket中的文件添加到百炼应用数据
 *
 * @param tmpReq AddFilesFromAuthorizedOssRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFilesFromAuthorizedOssResponse
 */
AddFilesFromAuthorizedOssResponse Client::addFilesFromAuthorizedOssWithOptions(const string &WorkspaceId, const AddFilesFromAuthorizedOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddFilesFromAuthorizedOssShrinkRequest request = AddFilesFromAuthorizedOssShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileDetails()) {
    request.setFileDetailsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFileDetails(), "FileDetails", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCategoryType()) {
    body["CategoryType"] = request.getCategoryType();
  }

  if (!!request.hasFileDetailsShrink()) {
    body["FileDetails"] = request.getFileDetailsShrink();
  }

  if (!!request.hasOssBucketName()) {
    body["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssRegionId()) {
    body["OssRegionId"] = request.getOssRegionId();
  }

  if (!!request.hasOverWriteFileByOssKey()) {
    body["OverWriteFileByOssKey"] = request.getOverWriteFileByOssKey();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddFilesFromAuthorizedOss"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/file/fromoss")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFilesFromAuthorizedOssResponse>();
}

/**
 * @summary 将已授权OSS Bucket中的文件添加到百炼应用数据
 *
 * @param request AddFilesFromAuthorizedOssRequest
 * @return AddFilesFromAuthorizedOssResponse
 */
AddFilesFromAuthorizedOssResponse Client::addFilesFromAuthorizedOss(const string &WorkspaceId, const AddFilesFromAuthorizedOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addFilesFromAuthorizedOssWithOptions(WorkspaceId, request, headers, runtime);
}

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
ApplyFileUploadLeaseResponse Client::applyFileUploadLeaseWithOptions(const string &CategoryId, const string &WorkspaceId, const ApplyFileUploadLeaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryType()) {
    body["CategoryType"] = request.getCategoryType();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasMd5()) {
    body["Md5"] = request.getMd5();
  }

  if (!!request.hasSizeInBytes()) {
    body["SizeInBytes"] = request.getSizeInBytes();
  }

  if (!!request.hasUseInternalEndpoint()) {
    body["UseInternalEndpoint"] = request.getUseInternalEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyFileUploadLease"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/category/" , Darabonba::Encode::Encoder::percentEncode(CategoryId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyFileUploadLeaseResponse>();
}

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
ApplyFileUploadLeaseResponse Client::applyFileUploadLease(const string &CategoryId, const string &WorkspaceId, const ApplyFileUploadLeaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return applyFileUploadLeaseWithOptions(CategoryId, WorkspaceId, request, headers, runtime);
}

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
ApplyTempStorageLeaseResponse Client::applyTempStorageLeaseWithOptions(const string &WorkspaceId, const ApplyTempStorageLeaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasSizeInBytes()) {
    body["SizeInBytes"] = request.getSizeInBytes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyTempStorageLease"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyTempStorageLeaseResponse>();
}

/**
 * @summary This interface is intended for pro-code deployment only; other scenarios are currently not supported. It is used to apply for a temporary file upload lease. After obtaining the lease, you must upload the file manually.
 *
 * @description 1\\. This interface is intended for pro-code deployment only; other scenarios are currently not supported. 2. After obtaining the temporary file upload lease via this interface, upload the file manually.
 *
 * @param request ApplyTempStorageLeaseRequest
 * @return ApplyTempStorageLeaseResponse
 */
ApplyTempStorageLeaseResponse Client::applyTempStorageLease(const string &WorkspaceId, const ApplyTempStorageLeaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return applyTempStorageLeaseWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Configure the parsing method for a specific file type. For example, use LLM parsing for .pdf files, or use Qwen VL parsing for .jpg files.
 *
 * @param tmpReq ChangeParseSettingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeParseSettingResponse
 */
ChangeParseSettingResponse Client::changeParseSettingWithOptions(const string &WorkspaceId, const ChangeParseSettingRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChangeParseSettingShrinkRequest request = ChangeParseSettingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParserConfig()) {
    request.setParserConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParserConfig(), "ParserConfig", "json"));
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.getFileType();
  }

  if (!!request.hasParser()) {
    body["Parser"] = request.getParser();
  }

  if (!!request.hasParserConfigShrink()) {
    body["ParserConfig"] = request.getParserConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeParseSetting"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/parser/settings")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeParseSettingResponse>();
}

/**
 * @summary Configure the parsing method for a specific file type. For example, use LLM parsing for .pdf files, or use Qwen VL parsing for .jpg files.
 *
 * @param request ChangeParseSettingRequest
 * @return ChangeParseSettingResponse
 */
ChangeParseSettingResponse Client::changeParseSetting(const string &WorkspaceId, const ChangeParseSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeParseSettingWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 创建并发布智能体应用
 *
 * @param tmpReq CreateAndPulishAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAndPulishAgentResponse
 */
CreateAndPulishAgentResponse Client::createAndPulishAgentWithOptions(const string &workspaceId, const CreateAndPulishAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAndPulishAgentShrinkRequest request = CreateAndPulishAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplicationConfig()) {
    request.setApplicationConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplicationConfig(), "applicationConfig", "json"));
  }

  if (!!tmpReq.hasSampleLibrary()) {
    request.setSampleLibraryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSampleLibrary(), "sampleLibrary", "json"));
  }

  json body = {};
  if (!!request.hasApplicationConfigShrink()) {
    body["applicationConfig"] = request.getApplicationConfigShrink();
  }

  if (!!request.hasInstructions()) {
    body["instructions"] = request.getInstructions();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSampleLibraryShrink()) {
    body["sampleLibrary"] = request.getSampleLibraryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAndPulishAgent"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/application/agents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAndPulishAgentResponse>();
}

/**
 * @summary 创建并发布智能体应用
 *
 * @param request CreateAndPulishAgentRequest
 * @return CreateAndPulishAgentResponse
 */
CreateAndPulishAgentResponse Client::createAndPulishAgent(const string &workspaceId, const CreateAndPulishAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAndPulishAgentWithOptions(workspaceId, request, headers, runtime);
}

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
CreateIndexResponse Client::createIndexWithOptions(const string &WorkspaceId, const CreateIndexRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateIndexShrinkRequest request = CreateIndexShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategoryIds()) {
    request.setCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategoryIds(), "CategoryIds", "json"));
  }

  if (!!tmpReq.hasColumns()) {
    request.setColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getColumns(), "Columns", "json"));
  }

  if (!!tmpReq.hasDataSource()) {
    request.setDataSourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataSource(), "DataSource", "json"));
  }

  if (!!tmpReq.hasDocumentIds()) {
    request.setDocumentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocumentIds(), "DocumentIds", "json"));
  }

  if (!!tmpReq.hasTableIds()) {
    request.setTableIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableIds(), "TableIds", "json"));
  }

  if (!!tmpReq.hasMetaExtractColumns()) {
    request.setMetaExtractColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetaExtractColumns(), "metaExtractColumns", "json"));
  }

  json query = {};
  if (!!request.hasCategoryIdsShrink()) {
    query["CategoryIds"] = request.getCategoryIdsShrink();
  }

  if (!!request.hasChunkSize()) {
    query["ChunkSize"] = request.getChunkSize();
  }

  if (!!request.hasColumnsShrink()) {
    query["Columns"] = request.getColumnsShrink();
  }

  if (!!request.hasCreateIndexType()) {
    query["CreateIndexType"] = request.getCreateIndexType();
  }

  if (!!request.hasDataSourceShrink()) {
    query["DataSource"] = request.getDataSourceShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDocumentIdsShrink()) {
    query["DocumentIds"] = request.getDocumentIdsShrink();
  }

  if (!!request.hasEmbeddingModelName()) {
    query["EmbeddingModelName"] = request.getEmbeddingModelName();
  }

  if (!!request.hasEnableRewrite()) {
    query["EnableRewrite"] = request.getEnableRewrite();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOverlapSize()) {
    query["OverlapSize"] = request.getOverlapSize();
  }

  if (!!request.hasRerankMinScore()) {
    query["RerankMinScore"] = request.getRerankMinScore();
  }

  if (!!request.hasRerankModelName()) {
    query["RerankModelName"] = request.getRerankModelName();
  }

  if (!!request.hasSeparator()) {
    query["Separator"] = request.getSeparator();
  }

  if (!!request.hasSinkInstanceId()) {
    query["SinkInstanceId"] = request.getSinkInstanceId();
  }

  if (!!request.hasSinkRegion()) {
    query["SinkRegion"] = request.getSinkRegion();
  }

  if (!!request.hasSinkType()) {
    query["SinkType"] = request.getSinkType();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStructureType()) {
    query["StructureType"] = request.getStructureType();
  }

  if (!!request.hasTableIdsShrink()) {
    query["TableIds"] = request.getTableIdsShrink();
  }

  if (!!request.hasChunkMode()) {
    query["chunkMode"] = request.getChunkMode();
  }

  if (!!request.hasEnableHeaders()) {
    query["enableHeaders"] = request.getEnableHeaders();
  }

  if (!!request.hasMetaExtractColumnsShrink()) {
    query["metaExtractColumns"] = request.getMetaExtractColumnsShrink();
  }

  if (!!request.hasPipelineCommercialCu()) {
    query["pipelineCommercialCu"] = request.getPipelineCommercialCu();
  }

  if (!!request.hasPipelineCommercialType()) {
    query["pipelineCommercialType"] = request.getPipelineCommercialType();
  }

  if (!!request.hasPipelineRetrieveRateLimitStrategy()) {
    query["pipelineRetrieveRateLimitStrategy"] = request.getPipelineRetrieveRateLimitStrategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIndex"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIndexResponse>();
}

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
CreateIndexResponse Client::createIndex(const string &WorkspaceId, const CreateIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIndexWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 创建Memory
 *
 * @param request CreateMemoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMemoryResponse
 */
CreateMemoryResponse Client::createMemoryWithOptions(const string &workspaceId, const CreateMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMemory"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memories")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMemoryResponse>();
}

/**
 * @summary 创建Memory
 *
 * @param request CreateMemoryRequest
 * @return CreateMemoryResponse
 */
CreateMemoryResponse Client::createMemory(const string &workspaceId, const CreateMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMemoryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建记忆Node
 *
 * @param request CreateMemoryNodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMemoryNodeResponse
 */
CreateMemoryNodeResponse Client::createMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const CreateMemoryNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["content"] = request.getContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMemoryNode"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId) , "/memoryNodes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMemoryNodeResponse>();
}

/**
 * @summary 创建记忆Node
 *
 * @param request CreateMemoryNodeRequest
 * @return CreateMemoryNodeResponse
 */
CreateMemoryNodeResponse Client::createMemoryNode(const string &workspaceId, const string &memoryId, const CreateMemoryNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMemoryNodeWithOptions(workspaceId, memoryId, request, headers, runtime);
}

/**
 * @summary Creates a prompt template.
 *
 * @param request CreatePromptTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePromptTemplateResponse
 */
CreatePromptTemplateResponse Client::createPromptTemplateWithOptions(const string &workspaceId, const CreatePromptTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["content"] = request.getContent();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePromptTemplate"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/promptTemplates")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePromptTemplateResponse>();
}

/**
 * @summary Creates a prompt template.
 *
 * @param request CreatePromptTemplateRequest
 * @return CreatePromptTemplateResponse
 */
CreatePromptTemplateResponse Client::createPromptTemplate(const string &workspaceId, const CreatePromptTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPromptTemplateWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 删除智能体
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgentWithOptions(const string &workspaceId, const string &appCode, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgent"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/application/agents/" , Darabonba::Encode::Encoder::percentEncode(appCode))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentResponse>();
}

/**
 * @summary 删除智能体
 *
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgent(const string &workspaceId, const string &appCode) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentWithOptions(workspaceId, appCode, headers, runtime);
}

/**
 * @summary 删除类目
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategoryWithOptions(const string &CategoryId, const string &WorkspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCategory"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/category/" , Darabonba::Encode::Encoder::percentEncode(CategoryId) , "/")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCategoryResponse>();
}

/**
 * @summary 删除类目
 *
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategory(const string &CategoryId, const string &WorkspaceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCategoryWithOptions(CategoryId, WorkspaceId, headers, runtime);
}

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
DeleteChunkResponse Client::deleteChunkWithOptions(const string &WorkspaceId, const DeleteChunkRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteChunkShrinkRequest request = DeleteChunkShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChunkIds()) {
    request.setChunkIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChunkIds(), "ChunkIds", "json"));
  }

  json query = {};
  if (!!request.hasChunkIdsShrink()) {
    query["ChunkIds"] = request.getChunkIdsShrink();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.getPipelineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChunk"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/chunk/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChunkResponse>();
}

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
DeleteChunkResponse Client::deleteChunk(const string &WorkspaceId, const DeleteChunkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteChunkWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 删除文档
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFileResponse
 */
DeleteFileResponse Client::deleteFileWithOptions(const string &FileId, const string &WorkspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFile"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/file/" , Darabonba::Encode::Encoder::percentEncode(FileId) , "/")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFileResponse>();
}

/**
 * @summary 删除文档
 *
 * @return DeleteFileResponse
 */
DeleteFileResponse Client::deleteFile(const string &FileId, const string &WorkspaceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFileWithOptions(FileId, WorkspaceId, headers, runtime);
}

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
DeleteIndexResponse Client::deleteIndexWithOptions(const string &WorkspaceId, const DeleteIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexId()) {
    query["IndexId"] = request.getIndexId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIndex"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIndexResponse>();
}

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
DeleteIndexResponse Client::deleteIndex(const string &WorkspaceId, const DeleteIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIndexWithOptions(WorkspaceId, request, headers, runtime);
}

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
DeleteIndexDocumentResponse Client::deleteIndexDocumentWithOptions(const string &WorkspaceId, const DeleteIndexDocumentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteIndexDocumentShrinkRequest request = DeleteIndexDocumentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocumentIds()) {
    request.setDocumentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocumentIds(), "DocumentIds", "json"));
  }

  json query = {};
  if (!!request.hasDocumentIdsShrink()) {
    query["DocumentIds"] = request.getDocumentIdsShrink();
  }

  if (!!request.hasIndexId()) {
    query["IndexId"] = request.getIndexId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIndexDocument"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/delete_index_document")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIndexDocumentResponse>();
}

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
DeleteIndexDocumentResponse Client::deleteIndexDocument(const string &WorkspaceId, const DeleteIndexDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIndexDocumentWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 删除memory
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemoryResponse
 */
DeleteMemoryResponse Client::deleteMemoryWithOptions(const string &workspaceId, const string &memoryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMemory"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemoryResponse>();
}

/**
 * @summary 删除memory
 *
 * @return DeleteMemoryResponse
 */
DeleteMemoryResponse Client::deleteMemory(const string &workspaceId, const string &memoryId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoryWithOptions(workspaceId, memoryId, headers, runtime);
}

/**
 * @summary 删除记忆Node
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemoryNodeResponse
 */
DeleteMemoryNodeResponse Client::deleteMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMemoryNode"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId) , "/memoryNodes/" , Darabonba::Encode::Encoder::percentEncode(memoryNodeId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemoryNodeResponse>();
}

/**
 * @summary 删除记忆Node
 *
 * @return DeleteMemoryNodeResponse
 */
DeleteMemoryNodeResponse Client::deleteMemoryNode(const string &workspaceId, const string &memoryId, const string &memoryNodeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoryNodeWithOptions(workspaceId, memoryId, memoryNodeId, headers, runtime);
}

/**
 * @summary Deletes a prompt template based on the template ID.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePromptTemplateResponse
 */
DeletePromptTemplateResponse Client::deletePromptTemplateWithOptions(const string &workspaceId, const string &promptTemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePromptTemplate"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/promptTemplates/" , Darabonba::Encode::Encoder::percentEncode(promptTemplateId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePromptTemplateResponse>();
}

/**
 * @summary Deletes a prompt template based on the template ID.
 *
 * @return DeletePromptTemplateResponse
 */
DeletePromptTemplateResponse Client::deletePromptTemplate(const string &workspaceId, const string &promptTemplateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePromptTemplateWithOptions(workspaceId, promptTemplateId, headers, runtime);
}

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
DescribeFileResponse Client::describeFileWithOptions(const string &WorkspaceId, const string &FileId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFile"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/file/" , Darabonba::Encode::Encoder::percentEncode(FileId) , "/")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFileResponse>();
}

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
DescribeFileResponse Client::describeFile(const string &WorkspaceId, const string &FileId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeFileWithOptions(WorkspaceId, FileId, headers, runtime);
}

/**
 * @summary 查询支付宝打赏状态
 *
 * @param request GetAlipayTransferStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlipayTransferStatusResponse
 */
GetAlipayTransferStatusResponse Client::getAlipayTransferStatusWithOptions(const GetAlipayTransferStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["code"] = request.getCode();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspace_id"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlipayTransferStatus"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/alipay/transfer/status")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlipayTransferStatusResponse>();
}

/**
 * @summary 查询支付宝打赏状态
 *
 * @param request GetAlipayTransferStatusRequest
 * @return GetAlipayTransferStatusResponse
 */
GetAlipayTransferStatusResponse Client::getAlipayTransferStatus(const GetAlipayTransferStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAlipayTransferStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 支付宝打赏链接
 *
 * @param request GetAlipayUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlipayUrlResponse
 */
GetAlipayUrlResponse Client::getAlipayUrlWithOptions(const GetAlipayUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["app_id"] = request.getAppId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspace_id"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlipayUrl"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/alipay/transfer/url")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlipayUrlResponse>();
}

/**
 * @summary 支付宝打赏链接
 *
 * @param request GetAlipayUrlRequest
 * @return GetAlipayUrlResponse
 */
GetAlipayUrlResponse Client::getAlipayUrl(const GetAlipayUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAlipayUrlWithOptions(request, headers, runtime);
}

/**
 * @summary Lists all supported parser types based on the input file type (file extension).
 *
 * @param request GetAvailableParserTypesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAvailableParserTypesResponse
 */
GetAvailableParserTypesResponse Client::getAvailableParserTypesWithOptions(const string &WorkspaceId, const GetAvailableParserTypesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAvailableParserTypes"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/parser/parsertype")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAvailableParserTypesResponse>();
}

/**
 * @summary Lists all supported parser types based on the input file type (file extension).
 *
 * @param request GetAvailableParserTypesRequest
 * @return GetAvailableParserTypesResponse
 */
GetAvailableParserTypesResponse Client::getAvailableParserTypes(const string &WorkspaceId, const GetAvailableParserTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAvailableParserTypesWithOptions(WorkspaceId, request, headers, runtime);
}

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
GetIndexJobStatusResponse Client::getIndexJobStatusWithOptions(const string &WorkspaceId, const GetIndexJobStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexId()) {
    query["IndexId"] = request.getIndexId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIndexJobStatus"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/job/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIndexJobStatusResponse>();
}

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
GetIndexJobStatusResponse Client::getIndexJobStatus(const string &WorkspaceId, const GetIndexJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIndexJobStatusWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 获取索引监控情况
 *
 * @param request GetIndexMonitorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIndexMonitorResponse
 */
GetIndexMonitorResponse Client::getIndexMonitorWithOptions(const string &WorkspaceId, const GetIndexMonitorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasIndexId()) {
    query["IndexId"] = request.getIndexId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIndexMonitor"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/rag/index/monitor")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIndexMonitorResponse>();
}

/**
 * @summary 获取索引监控情况
 *
 * @param request GetIndexMonitorRequest
 * @return GetIndexMonitorResponse
 */
GetIndexMonitorResponse Client::getIndexMonitor(const string &WorkspaceId, const GetIndexMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIndexMonitorWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 获取memory
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryResponse
 */
GetMemoryResponse Client::getMemoryWithOptions(const string &workspaceId, const string &memoryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMemory"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryResponse>();
}

/**
 * @summary 获取memory
 *
 * @return GetMemoryResponse
 */
GetMemoryResponse Client::getMemory(const string &workspaceId, const string &memoryId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryWithOptions(workspaceId, memoryId, headers, runtime);
}

/**
 * @summary 获取记忆Node
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryNodeResponse
 */
GetMemoryNodeResponse Client::getMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMemoryNode"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId) , "/memoryNodes/" , Darabonba::Encode::Encoder::percentEncode(memoryNodeId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryNodeResponse>();
}

/**
 * @summary 获取记忆Node
 *
 * @return GetMemoryNodeResponse
 */
GetMemoryNodeResponse Client::getMemoryNode(const string &workspaceId, const string &memoryId, const string &memoryNodeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryNodeWithOptions(workspaceId, memoryId, memoryNodeId, headers, runtime);
}

/**
 * @summary Queries the data parsing settings in a specified category.
 *
 * @param request GetParseSettingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetParseSettingsResponse
 */
GetParseSettingsResponse Client::getParseSettingsWithOptions(const string &WorkspaceId, const GetParseSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetParseSettings"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/parser/settings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetParseSettingsResponse>();
}

/**
 * @summary Queries the data parsing settings in a specified category.
 *
 * @param request GetParseSettingsRequest
 * @return GetParseSettingsResponse
 */
GetParseSettingsResponse Client::getParseSettings(const string &WorkspaceId, const GetParseSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getParseSettingsWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Obtains a prompt template based on the template ID.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPromptTemplateResponse
 */
GetPromptTemplateResponse Client::getPromptTemplateWithOptions(const string &workspaceId, const string &promptTemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPromptTemplate"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/promptTemplates/" , Darabonba::Encode::Encoder::percentEncode(promptTemplateId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPromptTemplateResponse>();
}

/**
 * @summary Obtains a prompt template based on the template ID.
 *
 * @return GetPromptTemplateResponse
 */
GetPromptTemplateResponse Client::getPromptTemplate(const string &workspaceId, const string &promptTemplateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPromptTemplateWithOptions(workspaceId, promptTemplateId, headers, runtime);
}

/**
 * @summary 获取发布态智能体应用
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPublishedAgentResponse
 */
GetPublishedAgentResponse Client::getPublishedAgentWithOptions(const string &workspaceId, const string &appCode, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPublishedAgent"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/application/agents/" , Darabonba::Encode::Encoder::percentEncode(appCode))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPublishedAgentResponse>();
}

/**
 * @summary 获取发布态智能体应用
 *
 * @return GetPublishedAgentResponse
 */
GetPublishedAgentResponse Client::getPublishedAgent(const string &workspaceId, const string &appCode) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPublishedAgentWithOptions(workspaceId, appCode, headers, runtime);
}

/**
 * @summary 高代码部署服务
 *
 * @param request HighCodeDeployRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return HighCodeDeployResponse
 */
HighCodeDeployResponse Client::highCodeDeployWithOptions(const string &workspaceId, const HighCodeDeployRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentDesc()) {
    body["agentDesc"] = request.getAgentDesc();
  }

  if (!!request.hasAgentId()) {
    body["agentId"] = request.getAgentId();
  }

  if (!!request.hasAgentName()) {
    body["agentName"] = request.getAgentName();
  }

  if (!!request.hasSourceCodeName()) {
    body["sourceCodeName"] = request.getSourceCodeName();
  }

  if (!!request.hasSourceCodeOssUrl()) {
    body["sourceCodeOssUrl"] = request.getSourceCodeOssUrl();
  }

  if (!!request.hasTelemetryEnabled()) {
    body["telemetryEnabled"] = request.getTelemetryEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "HighCodeDeploy"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/highCode/publish")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HighCodeDeployResponse>();
}

/**
 * @summary 高代码部署服务
 *
 * @param request HighCodeDeployRequest
 * @return HighCodeDeployResponse
 */
HighCodeDeployResponse Client::highCodeDeploy(const string &workspaceId, const HighCodeDeployRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return highCodeDeployWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary ListCategory
 *
 * @param request ListCategoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCategoryResponse
 */
ListCategoryResponse Client::listCategoryWithOptions(const string &WorkspaceId, const ListCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryName()) {
    body["CategoryName"] = request.getCategoryName();
  }

  if (!!request.hasCategoryType()) {
    body["CategoryType"] = request.getCategoryType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasParentCategoryId()) {
    body["ParentCategoryId"] = request.getParentCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCategory"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/categories")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCategoryResponse>();
}

/**
 * @summary ListCategory
 *
 * @param request ListCategoryRequest
 * @return ListCategoryResponse
 */
ListCategoryResponse Client::listCategory(const string &WorkspaceId, const ListCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCategoryWithOptions(WorkspaceId, request, headers, runtime);
}

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
ListChunksResponse Client::listChunksWithOptions(const string &WorkspaceId, const ListChunksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.getFileId();
  }

  if (!!request.hasFiled()) {
    body["Filed"] = request.getFiled();
  }

  if (!!request.hasIndexId()) {
    body["IndexId"] = request.getIndexId();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListChunks"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/list_chunks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChunksResponse>();
}

/**
 * @summary For unstructured knowledge base, obtains the details of all chunks of a specified document; for structured knowledge base, obtains the details of all chunks.
 *
 * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
 * *   This interface is idempotent.
 *
 * @param request ListChunksRequest
 * @return ListChunksResponse
 */
ListChunksResponse Client::listChunks(const string &WorkspaceId, const ListChunksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listChunksWithOptions(WorkspaceId, request, headers, runtime);
}

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
ListFileResponse Client::listFileWithOptions(const string &WorkspaceId, const ListFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFile"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/files")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFileResponse>();
}

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
ListFileResponse Client::listFile(const string &WorkspaceId, const ListFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFileWithOptions(WorkspaceId, request, headers, runtime);
}

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
ListIndexDocumentsResponse Client::listIndexDocumentsWithOptions(const string &WorkspaceId, const ListIndexDocumentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocumentName()) {
    query["DocumentName"] = request.getDocumentName();
  }

  if (!!request.hasDocumentStatus()) {
    query["DocumentStatus"] = request.getDocumentStatus();
  }

  if (!!request.hasEnableNameLike()) {
    query["EnableNameLike"] = request.getEnableNameLike();
  }

  if (!!request.hasIndexId()) {
    query["IndexId"] = request.getIndexId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIndexDocuments"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/list_index_documents")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIndexDocumentsResponse>();
}

/**
 * @summary Queries the details of one or more documents in a specified knowledge base.
 *
 * @description *   Before you call this operation, make sure that your knowledge base is created and is not deleted. That is, the primary key ID of the knowledge base `IndexId` is valid.
 * *   This interface is idempotent.
 *
 * @param request ListIndexDocumentsRequest
 * @return ListIndexDocumentsResponse
 */
ListIndexDocumentsResponse Client::listIndexDocuments(const string &WorkspaceId, const ListIndexDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIndexDocumentsWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 查询Index文件详情
 *
 * @param request ListIndexFileDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIndexFileDetailsResponse
 */
ListIndexFileDetailsResponse Client::listIndexFileDetailsWithOptions(const string &WorkspaceId, const ListIndexFileDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocumentName()) {
    query["DocumentName"] = request.getDocumentName();
  }

  if (!!request.hasDocumentStatus()) {
    query["DocumentStatus"] = request.getDocumentStatus();
  }

  if (!!request.hasEnableNameLike()) {
    query["EnableNameLike"] = request.getEnableNameLike();
  }

  if (!!request.hasIndexId()) {
    query["IndexId"] = request.getIndexId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIndexFileDetails"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/list_index_file_detail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIndexFileDetailsResponse>();
}

/**
 * @summary 查询Index文件详情
 *
 * @param request ListIndexFileDetailsRequest
 * @return ListIndexFileDetailsResponse
 */
ListIndexFileDetailsResponse Client::listIndexFileDetails(const string &WorkspaceId, const ListIndexFileDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIndexFileDetailsWithOptions(WorkspaceId, request, headers, runtime);
}

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
ListIndicesResponse Client::listIndicesWithOptions(const string &WorkspaceId, const ListIndicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexName()) {
    query["IndexName"] = request.getIndexName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIndices"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/list_indices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIndicesResponse>();
}

/**
 * @summary Lists knowledge bases in a specified workspace.
 *
 * @description This interface is idempotent.
 *
 * @param request ListIndicesRequest
 * @return ListIndicesResponse
 */
ListIndicesResponse Client::listIndices(const string &WorkspaceId, const ListIndicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIndicesWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 获取memory
 *
 * @param request ListMemoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemoriesResponse
 */
ListMemoriesResponse Client::listMemoriesWithOptions(const string &workspaceId, const ListMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMemories"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memories")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemoriesResponse>();
}

/**
 * @summary 获取memory
 *
 * @param request ListMemoriesRequest
 * @return ListMemoriesResponse
 */
ListMemoriesResponse Client::listMemories(const string &workspaceId, const ListMemoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMemoriesWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取记忆Node列表
 *
 * @param request ListMemoryNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemoryNodesResponse
 */
ListMemoryNodesResponse Client::listMemoryNodesWithOptions(const string &workspaceId, const string &memoryId, const ListMemoryNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMemoryNodes"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId) , "/memoryNodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemoryNodesResponse>();
}

/**
 * @summary 获取记忆Node列表
 *
 * @param request ListMemoryNodesRequest
 * @return ListMemoryNodesResponse
 */
ListMemoryNodesResponse Client::listMemoryNodes(const string &workspaceId, const string &memoryId, const ListMemoryNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMemoryNodesWithOptions(workspaceId, memoryId, request, headers, runtime);
}

/**
 * @summary Obtains a list of prompt templates.
 *
 * @param request ListPromptTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPromptTemplatesResponse
 */
ListPromptTemplatesResponse Client::listPromptTemplatesWithOptions(const string &workspaceId, const ListPromptTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPromptTemplates"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/promptTemplates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPromptTemplatesResponse>();
}

/**
 * @summary Obtains a list of prompt templates.
 *
 * @param request ListPromptTemplatesRequest
 * @return ListPromptTemplatesResponse
 */
ListPromptTemplatesResponse Client::listPromptTemplates(const string &workspaceId, const ListPromptTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPromptTemplatesWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 查询已发布的智能体应用列表
 *
 * @param request ListPublishedAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPublishedAgentResponse
 */
ListPublishedAgentResponse Client::listPublishedAgentWithOptions(const string &workspaceId, const ListPublishedAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["pageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPublishedAgent"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/application/agents")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPublishedAgentResponse>();
}

/**
 * @summary 查询已发布的智能体应用列表
 *
 * @param request ListPublishedAgentRequest
 * @return ListPublishedAgentResponse
 */
ListPublishedAgentResponse Client::listPublishedAgent(const string &workspaceId, const ListPublishedAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPublishedAgentWithOptions(workspaceId, request, headers, runtime);
}

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
RetrieveResponse Client::retrieveWithOptions(const string &WorkspaceId, const RetrieveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RetrieveShrinkRequest request = RetrieveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImages()) {
    request.setImagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getImages(), "Images", "simple"));
  }

  if (!!tmpReq.hasQueryHistory()) {
    request.setQueryHistoryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryHistory(), "QueryHistory", "json"));
  }

  if (!!tmpReq.hasRerank()) {
    request.setRerankShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRerank(), "Rerank", "json"));
  }

  if (!!tmpReq.hasRewrite()) {
    request.setRewriteShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRewrite(), "Rewrite", "json"));
  }

  if (!!tmpReq.hasSearchFilters()) {
    request.setSearchFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchFilters(), "SearchFilters", "json"));
  }

  json query = {};
  if (!!request.hasDenseSimilarityTopK()) {
    query["DenseSimilarityTopK"] = request.getDenseSimilarityTopK();
  }

  if (!!request.hasEnableReranking()) {
    query["EnableReranking"] = request.getEnableReranking();
  }

  if (!!request.hasEnableRewrite()) {
    query["EnableRewrite"] = request.getEnableRewrite();
  }

  if (!!request.hasImagesShrink()) {
    query["Images"] = request.getImagesShrink();
  }

  if (!!request.hasIndexId()) {
    query["IndexId"] = request.getIndexId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasQueryHistoryShrink()) {
    query["QueryHistory"] = request.getQueryHistoryShrink();
  }

  if (!!request.hasRerankShrink()) {
    query["Rerank"] = request.getRerankShrink();
  }

  if (!!request.hasRerankMinScore()) {
    query["RerankMinScore"] = request.getRerankMinScore();
  }

  if (!!request.hasRerankTopN()) {
    query["RerankTopN"] = request.getRerankTopN();
  }

  if (!!request.hasRewriteShrink()) {
    query["Rewrite"] = request.getRewriteShrink();
  }

  if (!!request.hasSaveRetrieverHistory()) {
    query["SaveRetrieverHistory"] = request.getSaveRetrieverHistory();
  }

  if (!!request.hasSearchFiltersShrink()) {
    query["SearchFilters"] = request.getSearchFiltersShrink();
  }

  if (!!request.hasSparseSimilarityTopK()) {
    query["SparseSimilarityTopK"] = request.getSparseSimilarityTopK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Retrieve"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/retrieve")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetrieveResponse>();
}

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
RetrieveResponse Client::retrieve(const string &WorkspaceId, const RetrieveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retrieveWithOptions(WorkspaceId, request, headers, runtime);
}

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
SubmitIndexAddDocumentsJobResponse Client::submitIndexAddDocumentsJobWithOptions(const string &WorkspaceId, const SubmitIndexAddDocumentsJobRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitIndexAddDocumentsJobShrinkRequest request = SubmitIndexAddDocumentsJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategoryIds()) {
    request.setCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategoryIds(), "CategoryIds", "json"));
  }

  if (!!tmpReq.hasDocumentIds()) {
    request.setDocumentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocumentIds(), "DocumentIds", "json"));
  }

  json query = {};
  if (!!request.hasCategoryIdsShrink()) {
    query["CategoryIds"] = request.getCategoryIdsShrink();
  }

  if (!!request.hasChunkMode()) {
    query["ChunkMode"] = request.getChunkMode();
  }

  if (!!request.hasChunkSize()) {
    query["ChunkSize"] = request.getChunkSize();
  }

  if (!!request.hasDocumentIdsShrink()) {
    query["DocumentIds"] = request.getDocumentIdsShrink();
  }

  if (!!request.hasEnableHeaders()) {
    query["EnableHeaders"] = request.getEnableHeaders();
  }

  if (!!request.hasIndexId()) {
    query["IndexId"] = request.getIndexId();
  }

  if (!!request.hasOverlapSize()) {
    query["OverlapSize"] = request.getOverlapSize();
  }

  if (!!request.hasSeparator()) {
    query["Separator"] = request.getSeparator();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitIndexAddDocumentsJob"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/add_documents_to_index")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitIndexAddDocumentsJobResponse>();
}

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
SubmitIndexAddDocumentsJobResponse Client::submitIndexAddDocumentsJob(const string &WorkspaceId, const SubmitIndexAddDocumentsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitIndexAddDocumentsJobWithOptions(WorkspaceId, request, headers, runtime);
}

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
SubmitIndexJobResponse Client::submitIndexJobWithOptions(const string &WorkspaceId, const SubmitIndexJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexId()) {
    query["IndexId"] = request.getIndexId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitIndexJob"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/submit_index_job")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitIndexJobResponse>();
}

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
SubmitIndexJobResponse Client::submitIndexJob(const string &WorkspaceId, const SubmitIndexJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitIndexJobWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 更新并发布智能体应用
 *
 * @param tmpReq UpdateAndPublishAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAndPublishAgentResponse
 */
UpdateAndPublishAgentResponse Client::updateAndPublishAgentWithOptions(const string &workspaceId, const string &appCode, const UpdateAndPublishAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAndPublishAgentShrinkRequest request = UpdateAndPublishAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplicationConfig()) {
    request.setApplicationConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplicationConfig(), "applicationConfig", "json"));
  }

  if (!!tmpReq.hasSampleLibrary()) {
    request.setSampleLibraryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSampleLibrary(), "sampleLibrary", "json"));
  }

  json body = {};
  if (!!request.hasApplicationConfigShrink()) {
    body["applicationConfig"] = request.getApplicationConfigShrink();
  }

  if (!!request.hasInstructions()) {
    body["instructions"] = request.getInstructions();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSampleLibraryShrink()) {
    body["sampleLibrary"] = request.getSampleLibraryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAndPublishAgent"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/application/agents/" , Darabonba::Encode::Encoder::percentEncode(appCode))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAndPublishAgentResponse>();
}

/**
 * @summary 更新并发布智能体应用
 *
 * @param request UpdateAndPublishAgentRequest
 * @return UpdateAndPublishAgentResponse
 */
UpdateAndPublishAgentResponse Client::updateAndPublishAgent(const string &workspaceId, const string &appCode, const UpdateAndPublishAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAndPublishAgentWithOptions(workspaceId, appCode, request, headers, runtime);
}

/**
 * @summary 选择更新并发布智能体应用
 *
 * @param tmpReq UpdateAndPublishAgentSelectiveRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAndPublishAgentSelectiveResponse
 */
UpdateAndPublishAgentSelectiveResponse Client::updateAndPublishAgentSelectiveWithOptions(const string &workspaceId, const string &appCode, const UpdateAndPublishAgentSelectiveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAndPublishAgentSelectiveShrinkRequest request = UpdateAndPublishAgentSelectiveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplicationConfig()) {
    request.setApplicationConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplicationConfig(), "applicationConfig", "json"));
  }

  if (!!tmpReq.hasSampleLibrary()) {
    request.setSampleLibraryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSampleLibrary(), "sampleLibrary", "json"));
  }

  json body = {};
  if (!!request.hasApplicationConfigShrink()) {
    body["applicationConfig"] = request.getApplicationConfigShrink();
  }

  if (!!request.hasInstructions()) {
    body["instructions"] = request.getInstructions();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSampleLibraryShrink()) {
    body["sampleLibrary"] = request.getSampleLibraryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAndPublishAgentSelective"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/application/agents/" , Darabonba::Encode::Encoder::percentEncode(appCode) , "/updateAndPublishAgentSelective")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAndPublishAgentSelectiveResponse>();
}

/**
 * @summary 选择更新并发布智能体应用
 *
 * @param request UpdateAndPublishAgentSelectiveRequest
 * @return UpdateAndPublishAgentSelectiveResponse
 */
UpdateAndPublishAgentSelectiveResponse Client::updateAndPublishAgentSelective(const string &workspaceId, const string &appCode, const UpdateAndPublishAgentSelectiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAndPublishAgentSelectiveWithOptions(workspaceId, appCode, request, headers, runtime);
}

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
UpdateChunkResponse Client::updateChunkWithOptions(const string &WorkspaceId, const UpdateChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChunkId()) {
    query["ChunkId"] = request.getChunkId();
  }

  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasIsDisplayedChunkContent()) {
    query["IsDisplayedChunkContent"] = request.getIsDisplayedChunkContent();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.getPipelineId();
  }

  if (!!request.hasContent()) {
    query["content"] = request.getContent();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateChunk"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/chunk/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChunkResponse>();
}

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
UpdateChunkResponse Client::updateChunk(const string &WorkspaceId, const UpdateChunkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateChunkWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary 更新文档Tag
 *
 * @param tmpReq UpdateFileTagRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFileTagResponse
 */
UpdateFileTagResponse Client::updateFileTagWithOptions(const string &WorkspaceId, const string &FileId, const UpdateFileTagRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateFileTagShrinkRequest request = UpdateFileTagShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFileTag"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/file/" , Darabonba::Encode::Encoder::percentEncode(FileId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFileTagResponse>();
}

/**
 * @summary 更新文档Tag
 *
 * @param request UpdateFileTagRequest
 * @return UpdateFileTagResponse
 */
UpdateFileTagResponse Client::updateFileTag(const string &WorkspaceId, const string &FileId, const UpdateFileTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFileTagWithOptions(WorkspaceId, FileId, request, headers, runtime);
}

/**
 * @summary 更新memory
 *
 * @param request UpdateMemoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemoryResponse
 */
UpdateMemoryResponse Client::updateMemoryWithOptions(const string &workspaceId, const string &memoryId, const UpdateMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMemory"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemoryResponse>();
}

/**
 * @summary 更新memory
 *
 * @param request UpdateMemoryRequest
 * @return UpdateMemoryResponse
 */
UpdateMemoryResponse Client::updateMemory(const string &workspaceId, const string &memoryId, const UpdateMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMemoryWithOptions(workspaceId, memoryId, request, headers, runtime);
}

/**
 * @summary 更新记忆Node
 *
 * @param request UpdateMemoryNodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemoryNodeResponse
 */
UpdateMemoryNodeResponse Client::updateMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const UpdateMemoryNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["content"] = request.getContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMemoryNode"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId) , "/memoryNodes/" , Darabonba::Encode::Encoder::percentEncode(memoryNodeId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemoryNodeResponse>();
}

/**
 * @summary 更新记忆Node
 *
 * @param request UpdateMemoryNodeRequest
 * @return UpdateMemoryNodeResponse
 */
UpdateMemoryNodeResponse Client::updateMemoryNode(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const UpdateMemoryNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMemoryNodeWithOptions(workspaceId, memoryId, memoryNodeId, request, headers, runtime);
}

/**
 * @summary Updates a prompt template based on the template ID.
 *
 * @param request UpdatePromptTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePromptTemplateResponse
 */
UpdatePromptTemplateResponse Client::updatePromptTemplateWithOptions(const string &workspaceId, const string &promptTemplateId, const UpdatePromptTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["content"] = request.getContent();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePromptTemplate"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/promptTemplates/" , Darabonba::Encode::Encoder::percentEncode(promptTemplateId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePromptTemplateResponse>();
}

/**
 * @summary Updates a prompt template based on the template ID.
 *
 * @param request UpdatePromptTemplateRequest
 * @return UpdatePromptTemplateResponse
 */
UpdatePromptTemplateResponse Client::updatePromptTemplate(const string &workspaceId, const string &promptTemplateId, const UpdatePromptTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePromptTemplateWithOptions(workspaceId, promptTemplateId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Bailian20231229