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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "bailian.cn-beijing.aliyuncs.com"},
    {"ap-southeast-1" , "bailian.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
AddCategoryResponse Client::addCategoryWithOptions(const string &WorkspaceId, const AddCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryName()) {
    body["CategoryName"] = request.getCategoryName();
  }

  if (!!request.hasCategoryType()) {
    body["CategoryType"] = request.getCategoryType();
  }

  if (!!request.hasConnectorId()) {
    body["ConnectorId"] = request.getConnectorId();
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
AddCategoryResponse Client::addCategory(const string &WorkspaceId, const AddCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addCategoryWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Adds chunks to a document search (document), data query (table), or image Q&A (image) knowledge base.
 *
 * @description - This operation adds chunk content to a specified knowledge base of the document search (document), data query (table), or image Q&A (image) type. Operations on multimedia search (multimedia) knowledge bases are not supported. For data query and image Q&A knowledge bases, this operation takes effect only when the data source is a spreadsheet connector (excel).
 * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:ChunkList permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest [Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
 * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
 * - This operation has idempotence.
 * **Related operations:**
 * **Throttling:**
 * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
 *
 * @param tmpReq AddChunkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddChunkResponse
 */
AddChunkResponse Client::addChunkWithOptions(const string &WorkspaceId, const AddChunkRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddChunkShrinkRequest request = AddChunkShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasField()) {
    request.setFieldShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getField(), "field", "json"));
  }

  json query = {};
  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.getPipelineId();
  }

  if (!!request.hasDataId()) {
    query["dataId"] = request.getDataId();
  }

  if (!!request.hasFieldShrink()) {
    query["field"] = request.getFieldShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddChunk"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/chunk/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddChunkResponse>();
}

/**
 * @summary Adds chunks to a document search (document), data query (table), or image Q&A (image) knowledge base.
 *
 * @description - This operation adds chunk content to a specified knowledge base of the document search (document), data query (table), or image Q&A (image) type. Operations on multimedia search (multimedia) knowledge bases are not supported. For data query and image Q&A knowledge bases, this operation takes effect only when the data source is a spreadsheet connector (excel).
 * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requiring `AliyunBailianDataFullAccess`, which includes the sfm:ChunkList permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest [Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
 * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
 * - This operation has idempotence.
 * **Related operations:**
 * **Throttling:**
 * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
 *
 * @param request AddChunkRequest
 * @return AddChunkResponse
 */
AddChunkResponse Client::addChunk(const string &WorkspaceId, const AddChunkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addChunkWithOptions(WorkspaceId, request, headers, runtime);
}

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
AddConnectorResponse Client::addConnectorWithOptions(const string &WorkspaceId, const AddConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddConnectorShrinkRequest request = AddConnectorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileConnectorConfig()) {
    request.setFileConnectorConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFileConnectorConfig(), "FileConnectorConfig", "json"));
  }

  json body = {};
  if (!!request.hasConnectorName()) {
    body["ConnectorName"] = request.getConnectorName();
  }

  if (!!request.hasConnectorType()) {
    body["ConnectorType"] = request.getConnectorType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFileConnectorConfigShrink()) {
    body["FileConnectorConfig"] = request.getFileConnectorConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddConnector"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/connector")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddConnectorResponse>();
}

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
AddConnectorResponse Client::addConnector(const string &WorkspaceId, const AddConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addConnectorWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Imports a file from the temporary storage of Alibaba Cloud Model Studio into an Alibaba Cloud Model Studio data connection (formerly known as application data).
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddFile permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
 * - This operation is not idempotent.
 * **Throttling:**
 * This operation is subject to throttling. Do not exceed 10 calls per second. If you are throttled, retry later.
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
  if (!!tmpReq.hasParserConfig()) {
    request.setParserConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParserConfig(), "ParserConfig", "json"));
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

  if (!!request.hasLeaseId()) {
    body["LeaseId"] = request.getLeaseId();
  }

  if (!!request.hasOriginalFileUrl()) {
    body["OriginalFileUrl"] = request.getOriginalFileUrl();
  }

  if (!!request.hasParser()) {
    body["Parser"] = request.getParser();
  }

  if (!!request.hasParserConfigShrink()) {
    body["ParserConfig"] = request.getParserConfigShrink();
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
 * @summary Imports a file from the temporary storage of Alibaba Cloud Model Studio into an Alibaba Cloud Model Studio data connection (formerly known as application data).
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddFile permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
 * - This operation is not idempotent.
 * **Throttling:**
 * This operation is subject to throttling. Do not exceed 10 calls per second. If you are throttled, retry later.
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
 * @summary Imports files from an authorized OSS bucket into Alibaba Cloud Model Studio application data.
 *
 * @description - Make sure the OSS bucket belongs to the same Alibaba Cloud account as Model Studio and that authorization has been completed as described in [Importing data from OSS configuration instructions](https://help.aliyun.com/document_detail/2782155.html).
 *  
 *      - Supported bucket storage types do not include Archive, Cold Archive, or Deep Cold Archive. Buckets with content encryption enabled are supported. Buckets with public read/write, public read, or private access are supported.
 *      - To use a bucket with [Referer-based hotlink protection](https://help.aliyun.com/document_detail/2636937.html) enabled, add the domain name `*.console.aliyun.com` to the Referer whitelist as described in [Allow access only from trusted websites](https://help.aliyun.com/document_detail/2636937.html).
 * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (the `AliyunBailianDataFullAccess` permission is required, which includes the sfm:AddFilesFromAuthorizedOss permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Call this operation by using the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
 * - This operation does not have idempotence.
 * **Rate limit:**
 * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If throttled, retry later.
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
 * @summary Imports files from an authorized OSS bucket into Alibaba Cloud Model Studio application data.
 *
 * @description - Make sure the OSS bucket belongs to the same Alibaba Cloud account as Model Studio and that authorization has been completed as described in [Importing data from OSS configuration instructions](https://help.aliyun.com/document_detail/2782155.html).
 *  
 *      - Supported bucket storage types do not include Archive, Cold Archive, or Deep Cold Archive. Buckets with content encryption enabled are supported. Buckets with public read/write, public read, or private access are supported.
 *      - To use a bucket with [Referer-based hotlink protection](https://help.aliyun.com/document_detail/2636937.html) enabled, add the domain name `*.console.aliyun.com` to the Referer whitelist as described in [Allow access only from trusted websites](https://help.aliyun.com/document_detail/2636937.html).
 * - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (the `AliyunBailianDataFullAccess` permission is required, which includes the sfm:AddFilesFromAuthorizedOss permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Call this operation by using the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
 * - This operation does not have idempotence.
 * **Rate limit:**
 * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If throttled, retry later.
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
 * @summary Add a table for the table data connector.
 *
 * @description - RAM users (sub-accounts) must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Chinese China Bailian (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddTable permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this API. Alibaba Cloud accounts (primary accounts) can call this API directly without authorization. We recommend that you call this API by using the latest <props="china">[Chinese China Bailian SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Chinese China Bailian SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
 * - This API is not idempotent.
 * **Throttling:**
 * This API is subject to throttling when called frequently. Do not exceed 10 calls per second. If throttling is triggered, retry later.
 *
 * @param tmpReq AddTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTableResponse
 */
AddTableResponse Client::addTableWithOptions(const string &WorkspaceId, const AddTableRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddTableShrinkRequest request = AddTableShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTableColumns()) {
    request.setTableColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableColumns(), "TableColumns", "json"));
  }

  json body = {};
  if (!!request.hasConnectorId()) {
    body["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasTableColumnsShrink()) {
    body["TableColumns"] = request.getTableColumnsShrink();
  }

  if (!!request.hasTableDesc()) {
    body["TableDesc"] = request.getTableDesc();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddTable"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/table")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTableResponse>();
}

/**
 * @summary Add a table for the table data connector.
 *
 * @description - RAM users (sub-accounts) must first obtain the [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Chinese China Bailian (requires `AliyunBailianDataFullAccess`, which includes the sfm:AddTable permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this API. Alibaba Cloud accounts (primary accounts) can call this API directly without authorization. We recommend that you call this API by using the latest <props="china">[Chinese China Bailian SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Chinese China Bailian SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
 * - This API is not idempotent.
 * **Throttling:**
 * This API is subject to throttling when called frequently. Do not exceed 10 calls per second. If throttling is triggered, retry later.
 *
 * @param request AddTableRequest
 * @return AddTableResponse
 */
AddTableResponse Client::addTable(const string &WorkspaceId, const AddTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addTableWithOptions(WorkspaceId, request, headers, runtime);
}

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
 * @summary This operation updates document tags in a data connection in batches.
 *
 * @param tmpReq BatchUpdateFileTagRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateFileTagResponse
 */
BatchUpdateFileTagResponse Client::batchUpdateFileTagWithOptions(const string &WorkspaceId, const BatchUpdateFileTagRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchUpdateFileTagShrinkRequest request = BatchUpdateFileTagShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileInfos()) {
    request.setFileInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFileInfos(), "FileInfos", "json"));
  }

  json body = {};
  if (!!request.hasFileInfosShrink()) {
    body["FileInfos"] = request.getFileInfosShrink();
  }

  if (!!request.hasUpdateMode()) {
    body["UpdateMode"] = request.getUpdateMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchUpdateFileTag"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/batchupdatetag")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateFileTagResponse>();
}

/**
 * @summary This operation updates document tags in a data connection in batches.
 *
 * @param request BatchUpdateFileTagRequest
 * @return BatchUpdateFileTagResponse
 */
BatchUpdateFileTagResponse Client::batchUpdateFileTag(const string &WorkspaceId, const BatchUpdateFileTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchUpdateFileTagWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Configures the parsing method for specific file types. For example, specifies large model document parsing for .pdf files or Qwen VL parsing for .jpg files.
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ChangeParseSetting permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
 * - This operation is not idempotent.
 * **Throttling:**
 * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
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
 * @summary Configures the parsing method for specific file types. For example, specifies large model document parsing for .pdf files or Qwen VL parsing for .jpg files.
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ChangeParseSetting permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
 * - This operation is not idempotent.
 * **Throttling:**
 * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If throttled, retry later.
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

  if (!!request.hasRerankInstruct()) {
    query["RerankInstruct"] = request.getRerankInstruct();
  }

  if (!!request.hasRerankMinScore()) {
    query["RerankMinScore"] = request.getRerankMinScore();
  }

  if (!!request.hasRerankMode()) {
    query["RerankMode"] = request.getRerankMode();
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

  if (!!request.hasChannelType()) {
    query["channelType"] = request.getChannelType();
  }

  if (!!request.hasChunkMode()) {
    query["chunkMode"] = request.getChunkMode();
  }

  if (!!request.hasConnectId()) {
    query["connectId"] = request.getConnectId();
  }

  if (!!request.hasDatabase()) {
    query["database"] = request.getDatabase();
  }

  if (!!request.hasDatasourceCode()) {
    query["datasourceCode"] = request.getDatasourceCode();
  }

  if (!!request.hasEnableHeaders()) {
    query["enableHeaders"] = request.getEnableHeaders();
  }

  if (!!request.hasKnowledgeScene()) {
    query["knowledgeScene"] = request.getKnowledgeScene();
  }

  if (!!request.hasKnowledgeType()) {
    query["knowledgeType"] = request.getKnowledgeType();
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

  if (!!request.hasTable()) {
    query["table"] = request.getTable();
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
CreateIndexResponse Client::createIndex(const string &WorkspaceId, const CreateIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIndexWithOptions(WorkspaceId, request, headers, runtime);
}

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
CreateMemoryResponse Client::createMemory(const string &workspaceId, const CreateMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMemoryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a memory node.
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
 * @summary Creates a memory node.
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
 * @summary Create a prompt template.
 *
 * @description This API does not currently support the creation of text-to-image prompt templates.
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
 * @summary Create a prompt template.
 *
 * @description This API does not currently support the creation of text-to-image prompt templates.
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
 * @param request DeleteAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgentWithOptions(const string &workspaceId, const string &appCode, const DeleteAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request DeleteAgentRequest
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgent(const string &workspaceId, const string &appCode, const DeleteAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentWithOptions(workspaceId, appCode, request, headers, runtime);
}

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
DeleteCategoryResponse Client::deleteCategoryWithOptions(const string &CategoryId, const string &WorkspaceId, const DeleteCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
DeleteCategoryResponse Client::deleteCategory(const string &CategoryId, const string &WorkspaceId, const DeleteCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCategoryWithOptions(CategoryId, WorkspaceId, request, headers, runtime);
}

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
DeleteChunkResponse Client::deleteChunk(const string &WorkspaceId, const DeleteChunkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteChunkWithOptions(WorkspaceId, request, headers, runtime);
}

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
DeleteConnectorResponse Client::deleteConnectorWithOptions(const string &ConnectorId, const string &WorkspaceId, const DeleteConnectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConnector"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/connector/" , Darabonba::Encode::Encoder::percentEncode(ConnectorId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConnectorResponse>();
}

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
DeleteConnectorResponse Client::deleteConnector(const string &ConnectorId, const string &WorkspaceId, const DeleteConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConnectorWithOptions(ConnectorId, WorkspaceId, request, headers, runtime);
}

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
DeleteFileResponse Client::deleteFileWithOptions(const string &FileId, const string &WorkspaceId, const DeleteFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
DeleteFileResponse Client::deleteFile(const string &FileId, const string &WorkspaceId, const DeleteFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFileWithOptions(FileId, WorkspaceId, request, headers, runtime);
}

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
DeleteFilesResponse Client::deleteFilesWithOptions(const string &WorkspaceId, const DeleteFilesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteFilesShrinkRequest request = DeleteFilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileIds()) {
    request.setFileIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFileIds(), "FileIds", "json"));
  }

  json body = {};
  if (!!request.hasFileIdsShrink()) {
    body["FileIds"] = request.getFileIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteFiles"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/file/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFilesResponse>();
}

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
DeleteFilesResponse Client::deleteFiles(const string &WorkspaceId, const DeleteFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFilesWithOptions(WorkspaceId, request, headers, runtime);
}

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
DeleteIndexResponse Client::deleteIndex(const string &WorkspaceId, const DeleteIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIndexWithOptions(WorkspaceId, request, headers, runtime);
}

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
DeleteIndexDocumentResponse Client::deleteIndexDocument(const string &WorkspaceId, const DeleteIndexDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIndexDocumentWithOptions(WorkspaceId, request, headers, runtime);
}

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
DeleteMemoryResponse Client::deleteMemoryWithOptions(const string &workspaceId, const string &memoryId, const DeleteMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
DeleteMemoryResponse Client::deleteMemory(const string &workspaceId, const string &memoryId, const DeleteMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoryWithOptions(workspaceId, memoryId, request, headers, runtime);
}

/**
 * @summary Deletes a memory fragment.
 *
 * @param request DeleteMemoryNodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemoryNodeResponse
 */
DeleteMemoryNodeResponse Client::deleteMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const DeleteMemoryNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @summary Deletes a memory fragment.
 *
 * @param request DeleteMemoryNodeRequest
 * @return DeleteMemoryNodeResponse
 */
DeleteMemoryNodeResponse Client::deleteMemoryNode(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const DeleteMemoryNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoryNodeWithOptions(workspaceId, memoryId, memoryNodeId, request, headers, runtime);
}

/**
 * @summary Deletes a prompt template based on the template ID.
 *
 * @param request DeletePromptTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePromptTemplateResponse
 */
DeletePromptTemplateResponse Client::deletePromptTemplateWithOptions(const string &workspaceId, const string &promptTemplateId, const DeletePromptTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request DeletePromptTemplateRequest
 * @return DeletePromptTemplateResponse
 */
DeletePromptTemplateResponse Client::deletePromptTemplate(const string &workspaceId, const string &promptTemplateId, const DeletePromptTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePromptTemplateWithOptions(workspaceId, promptTemplateId, request, headers, runtime);
}

/**
 * @summary Queries the basic information of a file in application data, including the file name, type, and status.
 *
 * @description - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:DescribeFile permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
 * - This operation is idempotent.
 * **Throttling:**
 * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
 *
 * @param request DescribeFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFileResponse
 */
DescribeFileResponse Client::describeFileWithOptions(const string &WorkspaceId, const string &FileId, const DescribeFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @summary Queries the basic information of a file in application data, including the file name, type, and status.
 *
 * @description - A Resource Access Management (RAM) user must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:DescribeFile permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. An Alibaba Cloud account can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
 * - This operation is idempotent.
 * **Throttling:**
 * This operation is throttled if called too frequently. Do not exceed 10 calls per second. If you are throttled, retry later.
 *
 * @param request DescribeFileRequest
 * @return DescribeFileResponse
 */
DescribeFileResponse Client::describeFile(const string &WorkspaceId, const string &FileId, const DescribeFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeFileWithOptions(WorkspaceId, FileId, request, headers, runtime);
}

/**
 * @summary Queries the tipping status of the Alipay wallet bound to an application.
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
 * @summary Queries the tipping status of the Alipay wallet bound to an application.
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
 * @summary Retrieves the Alipay tipping URL for an application.
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
 * @summary Retrieves the Alipay tipping URL for an application.
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
 * @description - RAM用户（子账号）需要首先获取阿里云百炼的[API权限](https://help.aliyun.com/document_detail/2848578.html)（`AliyunBailianDataFullAccess`或`AliyunBailianDataReadOnlyAccess`均可，已包括sfm:GetAvailableParserTypes权限点），并[加入一个业务空间](https://help.aliyun.com/document_detail/2851098.html)后，方可调用本接口。阿里云账号（主账号）可直接调用无须授权。建议您通过最新版<props="china">[阿里云百炼SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[阿里云百炼SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29)来调用本接口。
 * - 本接口具有幂等性。
 * **限流说明：**
 * 本接口频繁调用会被限流，频率请勿超过10次/秒。如遇限流，请稍后重试。
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
GetConnectorResponse Client::getConnectorWithOptions(const string &WorkspaceId, const GetConnectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasConnectorName()) {
    query["ConnectorName"] = request.getConnectorName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConnector"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/connector")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConnectorResponse>();
}

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
GetConnectorResponse Client::getConnector(const string &WorkspaceId, const GetConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConnectorWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Queries the current status of a specified knowledge base creation task or knowledge base document append task.
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:GetIndexJobStatus permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
 * - You must have a knowledge base job that is in progress. You can create a knowledge base creation task by invoking the **SubmitIndexJob** operation, or create a knowledge base document append task by invoking the **SubmitIndexAddDocumentsJob** operation. Obtain the corresponding `JobId`.
 * - Invoke this operation at intervals of 5 seconds or more.
 * - This operation supports idempotence.
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
 * @summary Queries the current status of a specified knowledge base creation task or knowledge base document append task.
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (`AliyunBailianDataFullAccess` or `AliyunBailianDataReadOnlyAccess`, both of which include the sfm:GetIndexJobStatus permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
 * - You must have a knowledge base job that is in progress. You can create a knowledge base creation task by invoking the **SubmitIndexJob** operation, or create a knowledge base document append task by invoking the **SubmitIndexAddDocumentsJob** operation. Obtain the corresponding `JobId`.
 * - Invoke this operation at intervals of 5 seconds or more.
 * - This operation supports idempotence.
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
GetIndexMonitorResponse Client::getIndexMonitor(const string &WorkspaceId, const GetIndexMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIndexMonitorWithOptions(WorkspaceId, request, headers, runtime);
}

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
GetMemoryResponse Client::getMemoryWithOptions(const string &workspaceId, const string &memoryId, const GetMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @summary Retrieves the description of a specified long-term memory.
 *
 * @description - This operation is idempotent.
 * **Rate limit:** Ensure that the interval between two consecutive requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
 *
 * @param request GetMemoryRequest
 * @return GetMemoryResponse
 */
GetMemoryResponse Client::getMemory(const string &workspaceId, const string &memoryId, const GetMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryWithOptions(workspaceId, memoryId, request, headers, runtime);
}

/**
 * @summary Retrieves a memory fragment.
 *
 * @param request GetMemoryNodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryNodeResponse
 */
GetMemoryNodeResponse Client::getMemoryNodeWithOptions(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const GetMemoryNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @summary Retrieves a memory fragment.
 *
 * @param request GetMemoryNodeRequest
 * @return GetMemoryNodeResponse
 */
GetMemoryNodeResponse Client::getMemoryNode(const string &workspaceId, const string &memoryId, const string &memoryNodeId, const GetMemoryNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryNodeWithOptions(workspaceId, memoryId, memoryNodeId, request, headers, runtime);
}

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
 * @description - RAM用户（子账号）需要首先获取阿里云百炼的[API权限](https://help.aliyun.com/document_detail/2848578.html)（`AliyunBailianDataFullAccess`或`AliyunBailianDataReadOnlyAccess`均可，已包括sfm:GetParseSettings权限点），并[加入一个业务空间](https://help.aliyun.com/document_detail/2851098.html)后，方可调用本接口。阿里云账号（主账号）可直接调用无须授权。建议您通过最新版<props="china">[阿里云百炼SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[阿里云百炼SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29)来调用本接口。
 * - 本接口具有幂等性。
 * **限流说明：**
 * 本接口频繁调用会被限流，频率请勿超过10次/秒。如遇限流，请稍后重试。
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
 * @param request GetPromptTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPromptTemplateResponse
 */
GetPromptTemplateResponse Client::getPromptTemplateWithOptions(const string &workspaceId, const string &promptTemplateId, const GetPromptTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request GetPromptTemplateRequest
 * @return GetPromptTemplateResponse
 */
GetPromptTemplateResponse Client::getPromptTemplate(const string &workspaceId, const string &promptTemplateId, const GetPromptTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPromptTemplateWithOptions(workspaceId, promptTemplateId, request, headers, runtime);
}

/**
 * @summary 获取发布态智能体应用
 *
 * @param request GetPublishedAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPublishedAgentResponse
 */
GetPublishedAgentResponse Client::getPublishedAgentWithOptions(const string &workspaceId, const string &appCode, const GetPublishedAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request GetPublishedAgentRequest
 * @return GetPublishedAgentResponse
 */
GetPublishedAgentResponse Client::getPublishedAgent(const string &workspaceId, const string &appCode, const GetPublishedAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPublishedAgentWithOptions(workspaceId, appCode, request, headers, runtime);
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
ListCategoryResponse Client::listCategoryWithOptions(const string &WorkspaceId, const ListCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryName()) {
    body["CategoryName"] = request.getCategoryName();
  }

  if (!!request.hasCategoryType()) {
    body["CategoryType"] = request.getCategoryType();
  }

  if (!!request.hasConnectorId()) {
    body["ConnectorId"] = request.getConnectorId();
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
ListCategoryResponse Client::listCategory(const string &WorkspaceId, const ListCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCategoryWithOptions(WorkspaceId, request, headers, runtime);
}

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
ListChunksResponse Client::listChunks(const string &WorkspaceId, const ListChunksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listChunksWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of one or more documents in a specified category.
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListFile permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
 * - For paging on the first page, only set `MaxResults` to limit the number of entries returned. The `NextToken` in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response (if `NextToken` is empty, all results have been returned and no further requests are needed), and set `MaxResults` to limit the number of entries returned.
 * - This operation is idempotent.
 * **Rate limit:**
 * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If throttled, retry later.
 *
 * @param tmpReq ListFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFileResponse
 */
ListFileResponse Client::listFileWithOptions(const string &WorkspaceId, const ListFileRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFileShrinkRequest request = ListFileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileIds()) {
    request.setFileIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFileIds(), "FileIds", "json"));
  }

  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasFileIdsShrink()) {
    query["FileIds"] = request.getFileIdsShrink();
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
 * @summary Retrieves the details of one or more documents in a specified category.
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListFile permission), and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Invoke this operation by using the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29).
 * - For paging on the first page, only set `MaxResults` to limit the number of entries returned. The `NextToken` in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response (if `NextToken` is empty, all results have been returned and no further requests are needed), and set `MaxResults` to limit the number of entries returned.
 * - This operation is idempotent.
 * **Rate limit:**
 * This operation is throttled if called too frequently. Do not exceed 5 calls per second. If throttled, retry later.
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
 * @summary Retrieves files and their summary information from a specified knowledge base.
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListIndexFiles permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
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
 * @summary Retrieves files and their summary information from a specified knowledge base.
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Model Studio (requires `AliyunBailianDataFullAccess`, which includes the sfm:ListIndexFiles permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
 * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
 * - This operation has idempotence.
 * **Throttling:**
 * This operation is throttled if called too frequently. Do not exceed 15 calls per second. If you are throttled, retry later.
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
 * @summary Retrieves the files in a specified knowledge base along with their details.
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (`AliyunBailianDataFullAccess` is required, which includes the sfm:ListIndexFiles permission), before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
 * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
 * - This operation has idempotence.
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
 * @summary Retrieves the files in a specified knowledge base along with their details.
 *
 * @description - Resource Access Management (RAM) users must first obtain [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (`AliyunBailianDataFullAccess` is required, which includes the sfm:ListIndexFiles permission), before invoking this operation. Alibaba Cloud accounts can invoke this operation directly without authorization. Use the latest <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to invoke this operation.
 * - Before invoking this operation, make sure that your knowledge base has been created and has not been deleted (that is, the knowledge base ID `IndexId` is valid).
 * - This operation has idempotence.
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
ListIndicesResponse Client::listIndices(const string &WorkspaceId, const ListIndicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIndicesWithOptions(WorkspaceId, request, headers, runtime);
}

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
 * @summary Retrieves the details of one or more long-term memory entities in a specified workspace.
 *
 * @description - When querying the first page of a paging query, set only `MaxResults` to limit the number of entries returned. The `NextToken` value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the `NextToken` parameter to the `NextToken` value obtained from the previous response as the query credential (if `NextToken` is empty, all results have been returned and no further requests are needed), and settings `MaxResults` to limit the number of entries returned.
 * - This operation supports idempotence.
 * **Rate limit:** Ensure that the interval between two consecutive requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
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
 * @summary Retrieves a list of memory nodes.
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
 * @summary Retrieves a list of memory nodes.
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
RetrieveResponse Client::retrieveWithOptions(const string &WorkspaceId, const RetrieveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RetrieveShrinkRequest request = RetrieveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtra(), "Extra", "json"));
  }

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

  if (!!request.hasExtraShrink()) {
    query["Extra"] = request.getExtraShrink();
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
RetrieveResponse Client::retrieve(const string &WorkspaceId, const RetrieveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retrieveWithOptions(WorkspaceId, request, headers, runtime);
}

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

  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtra(), "Extra", "json"));
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

  if (!!request.hasExtraShrink()) {
    query["Extra"] = request.getExtraShrink();
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
SubmitIndexAddDocumentsJobResponse Client::submitIndexAddDocumentsJob(const string &WorkspaceId, const SubmitIndexAddDocumentsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitIndexAddDocumentsJobWithOptions(WorkspaceId, request, headers, runtime);
}

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
UpdateChunkResponse Client::updateChunk(const string &WorkspaceId, const UpdateChunkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateChunkWithOptions(WorkspaceId, request, headers, runtime);
}

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
UpdateConnectorResponse Client::updateConnectorWithOptions(const string &WorkspaceId, const string &ConnectorId, const UpdateConnectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConnectorName()) {
    body["ConnectorName"] = request.getConnectorName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConnector"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/connector/" , Darabonba::Encode::Encoder::percentEncode(ConnectorId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConnectorResponse>();
}

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
UpdateConnectorResponse Client::updateConnector(const string &WorkspaceId, const string &ConnectorId, const UpdateConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConnectorWithOptions(WorkspaceId, ConnectorId, request, headers, runtime);
}

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
 * @summary Updates the tags for a specified file.
 *
 * @description - A RAM User (sub-account) must be granted the required [API permissions](https://help.aliyun.com/document_detail/2848578.html) for Alibaba Cloud Model Studio (the `AliyunBailianDataFullAccess` policy, which includes the `sfm:UpdateFileTag` permission) and [join a workspace](https://help.aliyun.com/document_detail/2851098.html) before calling this operation. An Alibaba Cloud account (main account) can call this operation directly without authorization. We recommend using the latest version of the <props="china">[Alibaba Cloud Model Studio SDK](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Alibaba Cloud Model Studio SDK](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29) to call this operation.
 * **Throttling:** Do not call this operation more than 5 times per second. If a request is throttled, try again later.
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
UpdateIndexResponse Client::updateIndexWithOptions(const string &WorkspaceId, const UpdateIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDenseSimilarityTopK()) {
    query["DenseSimilarityTopK"] = request.getDenseSimilarityTopK();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPipelineCommercialCu()) {
    query["PipelineCommercialCu"] = request.getPipelineCommercialCu();
  }

  if (!!request.hasPipelineCommercialType()) {
    query["PipelineCommercialType"] = request.getPipelineCommercialType();
  }

  if (!!request.hasRerankMinScore()) {
    query["RerankMinScore"] = request.getRerankMinScore();
  }

  if (!!request.hasSparseSimilarityTopK()) {
    query["SparseSimilarityTopK"] = request.getSparseSimilarityTopK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIndex"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/index/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIndexResponse>();
}

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
UpdateIndexResponse Client::updateIndex(const string &WorkspaceId, const UpdateIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateIndexWithOptions(WorkspaceId, request, headers, runtime);
}

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
 * @summary Updates the description of a specified long-term memory.
 *
 * @description - This operation is idempotent.
 * **Rate limit:** Ensure that the interval between two requests is at least 1 second. Otherwise, throttling may be triggered. If throttling occurs, retry later.
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
 * @summary Updates a memory fragment.
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
 * @summary Updates a memory fragment.
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
UpdateTableFromAuthorizedOssResponse Client::updateTableFromAuthorizedOssWithOptions(const string &WorkspaceId, const string &TableId, const UpdateTableFromAuthorizedOssRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOssBucket()) {
    body["OssBucket"] = request.getOssBucket();
  }

  if (!!request.hasOssKey()) {
    body["OssKey"] = request.getOssKey();
  }

  if (!!request.hasOssRegionId()) {
    body["OssRegionId"] = request.getOssRegionId();
  }

  if (!!request.hasUpdateMode()) {
    body["UpdateMode"] = request.getUpdateMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTableFromAuthorizedOss"},
    {"version" , "2023-12-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/datacenter/table/fromoss/" , Darabonba::Encode::Encoder::percentEncode(TableId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableFromAuthorizedOssResponse>();
}

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
UpdateTableFromAuthorizedOssResponse Client::updateTableFromAuthorizedOss(const string &WorkspaceId, const string &TableId, const UpdateTableFromAuthorizedOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTableFromAuthorizedOssWithOptions(WorkspaceId, TableId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Bailian20231229