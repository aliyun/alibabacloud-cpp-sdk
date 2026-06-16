#include <darabonba/Core.hpp>
#include <alibabacloud/AiSearchEngine20260417.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AiSearchEngine20260417::Models;
namespace AlibabaCloud
{
namespace AiSearchEngine20260417
{

AlibabaCloud::AiSearchEngine20260417::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("aisearchengine", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Provides a search API operation for the CleverSee AI Search platform. After you create a search application on the platform, you can invoke this search API operation to retrieve images, documents, and audio/video content in datasets. The platform supports text (natural language), image, or combined text-and-image input, enabling fast adaptation to multi-modal large-scale data search scenarios and helping you efficiently locate target content.
 *
 * @description ## Operation description
 * This operation supports calling two types of search applications on the [CleverSee AI Search platform](https://aisearch.aliyun.com/web-search): **image search applications** (text-to-image, image-to-image, and combined text-and-image search) and **audio/video search applications** (text-to-audio/video, image-to-video, and combined text-and-image-to-video search).
 * ### Data sources
 * Audio and video data is supported. You can upload and update data through the [CleverSee AI Search platform](https://aisearch.aliyun.com/web-search) UI or through the [Dataset Data Add/Update API](https://www.alibabacloud.com/help/en/document_detail/3038471.html).
 * # Authentication
 * Call the CleverSee - Intelligent Search service by using the Alibaba Cloud SDK. For more information, see [AI search engine operation](https://api.aliyun.com/document/AiSearchEngine/2026-04-17/EngineSearch).
 *
 * @param request EngineSearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EngineSearchResponse
 */
EngineSearchResponse Client::engineSearchWithOptions(const EngineSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasGrey()) {
    body["grey"] = request.getGrey();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasUser()) {
    body["user"] = request.getUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EngineSearch"},
    {"version" , "2026-04-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/platform/app/search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EngineSearchResponse>();
}

/**
 * @summary Provides a search API operation for the CleverSee AI Search platform. After you create a search application on the platform, you can invoke this search API operation to retrieve images, documents, and audio/video content in datasets. The platform supports text (natural language), image, or combined text-and-image input, enabling fast adaptation to multi-modal large-scale data search scenarios and helping you efficiently locate target content.
 *
 * @description ## Operation description
 * This operation supports calling two types of search applications on the [CleverSee AI Search platform](https://aisearch.aliyun.com/web-search): **image search applications** (text-to-image, image-to-image, and combined text-and-image search) and **audio/video search applications** (text-to-audio/video, image-to-video, and combined text-and-image-to-video search).
 * ### Data sources
 * Audio and video data is supported. You can upload and update data through the [CleverSee AI Search platform](https://aisearch.aliyun.com/web-search) UI or through the [Dataset Data Add/Update API](https://www.alibabacloud.com/help/en/document_detail/3038471.html).
 * # Authentication
 * Call the CleverSee - Intelligent Search service by using the Alibaba Cloud SDK. For more information, see [AI search engine operation](https://api.aliyun.com/document/AiSearchEngine/2026-04-17/EngineSearch).
 *
 * @param request EngineSearchRequest
 * @return EngineSearchResponse
 */
EngineSearchResponse Client::engineSearch(const EngineSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return engineSearchWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a temporary public network access URL for an image, audio, or video resource in your dataset.
 *
 * @description Retrieves a temporary secure access URL for an underlying media resource (such as audio, video, or image) stored in AI Search Platform, based on the dataset ID and data primary key. The URL can be used directly for frontend display or download.
 * Key use case: When you make a Search API call for a search application created in AI Search Platform, the returned image, audio, and video result URLs are pre-signed links with a validity period of 24 hours. If your application persists these URLs in local storage, subsequent access may fail because the URLs have expired. In this case, invoke this operation with the corresponding dataset ID and data record primary key to retrieve the latest valid access URL for the resource.
 *
 * @param request GetDatasetResourceUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetResourceUrlResponse
 */
GetDatasetResourceUrlResponse Client::getDatasetResourceUrlWithOptions(const GetDatasetResourceUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetId()) {
    body["datasetId"] = request.getDatasetId();
  }

  if (!!request.hasPrimaryKey()) {
    body["primaryKey"] = request.getPrimaryKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDatasetResourceUrl"},
    {"version" , "2026-04-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/dataset/open/resources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetResourceUrlResponse>();
}

/**
 * @summary Retrieves a temporary public network access URL for an image, audio, or video resource in your dataset.
 *
 * @description Retrieves a temporary secure access URL for an underlying media resource (such as audio, video, or image) stored in AI Search Platform, based on the dataset ID and data primary key. The URL can be used directly for frontend display or download.
 * Key use case: When you make a Search API call for a search application created in AI Search Platform, the returned image, audio, and video result URLs are pre-signed links with a validity period of 24 hours. If your application persists these URLs in local storage, subsequent access may fail because the URLs have expired. In this case, invoke this operation with the corresponding dataset ID and data record primary key to retrieve the latest valid access URL for the resource.
 *
 * @param request GetDatasetResourceUrlRequest
 * @return GetDatasetResourceUrlResponse
 */
GetDatasetResourceUrlResponse Client::getDatasetResourceUrl(const GetDatasetResourceUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasetResourceUrlWithOptions(request, headers, runtime);
}

/**
 * @summary Adds or updates data in a specific dataset in real time. The system matches records based on the primary key value of the target dataset and the primary key value of the new data record (such as "pk_id" = "2026aa01"). If a matching primary key value is found, the corresponding data record is updated. If no match is found, a new data record is added.
 *
 * @description **Common scenarios**
 * | Scenario | Description |
 * | --- | --- |
 * | Real-time data addition | Pushes new data to the AI search platform in real time when the business system generates new data. |
 * | Status update | Promptly updates data when changes occur on the business side, such as title modifications or delisting. |
 * **Before you begin**
 * - **Primary key handling**: The system determines whether to add or update a record based on the primary key type (user-defined or system-generated) of the target dataset.
 * - **Batch limit**: A maximum of 100 records can be processed per request.
 * - **Schema matching**: The `records` field must strictly follow the schema configured for the target dataset in the console.
 * - **Permission requirements**: Make sure you have sufficient permissions to write to or update the target dataset.
 * - **Status check**: Before sending a request, confirm that the target dataset is in a writable state and not in read-only mode.
 *
 * @param request ImportDatasetDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportDatasetDataResponse
 */
ImportDatasetDataResponse Client::importDatasetDataWithOptions(const ImportDatasetDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetId()) {
    body["datasetId"] = request.getDatasetId();
  }

  if (!!request.hasRecords()) {
    body["records"] = request.getRecords();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportDatasetData"},
    {"version" , "2026-04-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/dataset/open/upsert")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportDatasetDataResponse>();
}

/**
 * @summary Adds or updates data in a specific dataset in real time. The system matches records based on the primary key value of the target dataset and the primary key value of the new data record (such as "pk_id" = "2026aa01"). If a matching primary key value is found, the corresponding data record is updated. If no match is found, a new data record is added.
 *
 * @description **Common scenarios**
 * | Scenario | Description |
 * | --- | --- |
 * | Real-time data addition | Pushes new data to the AI search platform in real time when the business system generates new data. |
 * | Status update | Promptly updates data when changes occur on the business side, such as title modifications or delisting. |
 * **Before you begin**
 * - **Primary key handling**: The system determines whether to add or update a record based on the primary key type (user-defined or system-generated) of the target dataset.
 * - **Batch limit**: A maximum of 100 records can be processed per request.
 * - **Schema matching**: The `records` field must strictly follow the schema configured for the target dataset in the console.
 * - **Permission requirements**: Make sure you have sufficient permissions to write to or update the target dataset.
 * - **Status check**: Before sending a request, confirm that the target dataset is in a writable state and not in read-only mode.
 *
 * @param request ImportDatasetDataRequest
 * @return ImportDatasetDataResponse
 */
ImportDatasetDataResponse Client::importDatasetData(const ImportDatasetDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return importDatasetDataWithOptions(request, headers, runtime);
}

/**
 * @summary Build Q&A applications leveraging powerful omni-modal search and comprehension capabilities on the CleverSee AI Search Platform, enabling deep understanding and precise Q&A over images, documents, and video content in datasets. The platform supports flexible customization of the Q&A assistant\\"s response style and interaction mode, allowing rapid adaptation to diverse large-scale data Q&A scenarios. Users can ask questions via text, images, or a combination of both, and the platform performs deep semantic understanding across the complete dataset, producing answers in multiple formats including text, images, and video. For video content, the platform also provides template-based output capabilities for generating customized content summaries, information extraction, and video scripts.
 *
 * @description Streaming API for [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) intelligent Q&A applications, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
 * ### Integration Guide:
 * Streaming API for intelligent Q&A, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
 * ### Data Sources:
 * Supports video Q&A. Data can be uploaded and updated through the [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) product interface or via the [Dataset Data Add/Update API](https://help.aliyun.com/zh/document_detail/3038471.html?spm=a2c4g.11186623.help-menu-3037946.d_0_2_1_0.54ed1e97NGXVV1&scm=20140722.H_3038471._.OR_help-T_cn~zh-V_1).
 * # Authentication
 * Call the CleverSee - Intelligent Q&A service through the Alibaba Cloud SDK. For the detailed calling guide, please refer to: [AI Q&A Engine API](https://api.aliyun.com/document/AiSearchEngine/2026-04-17/QaChat)
 *
 * @param request QaChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QaChatResponse
 */
FutureGenerator<QaChatResponse> Client::qaChatWithSSE(const QaChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.getMessage();
  }

  if (!!request.hasOptions()) {
    body["options"] = request.getOptions();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QaChat"},
    {"version" , "2026-04-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/platform/app/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<QaChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Build Q&A applications leveraging powerful omni-modal search and comprehension capabilities on the CleverSee AI Search Platform, enabling deep understanding and precise Q&A over images, documents, and video content in datasets. The platform supports flexible customization of the Q&A assistant\\"s response style and interaction mode, allowing rapid adaptation to diverse large-scale data Q&A scenarios. Users can ask questions via text, images, or a combination of both, and the platform performs deep semantic understanding across the complete dataset, producing answers in multiple formats including text, images, and video. For video content, the platform also provides template-based output capabilities for generating customized content summaries, information extraction, and video scripts.
 *
 * @description Streaming API for [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) intelligent Q&A applications, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
 * ### Integration Guide:
 * Streaming API for intelligent Q&A, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
 * ### Data Sources:
 * Supports video Q&A. Data can be uploaded and updated through the [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) product interface or via the [Dataset Data Add/Update API](https://help.aliyun.com/zh/document_detail/3038471.html?spm=a2c4g.11186623.help-menu-3037946.d_0_2_1_0.54ed1e97NGXVV1&scm=20140722.H_3038471._.OR_help-T_cn~zh-V_1).
 * # Authentication
 * Call the CleverSee - Intelligent Q&A service through the Alibaba Cloud SDK. For the detailed calling guide, please refer to: [AI Q&A Engine API](https://api.aliyun.com/document/AiSearchEngine/2026-04-17/QaChat)
 *
 * @param request QaChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QaChatResponse
 */
QaChatResponse Client::qaChatWithOptions(const QaChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.getMessage();
  }

  if (!!request.hasOptions()) {
    body["options"] = request.getOptions();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QaChat"},
    {"version" , "2026-04-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/platform/app/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QaChatResponse>();
}

/**
 * @summary Build Q&A applications leveraging powerful omni-modal search and comprehension capabilities on the CleverSee AI Search Platform, enabling deep understanding and precise Q&A over images, documents, and video content in datasets. The platform supports flexible customization of the Q&A assistant\\"s response style and interaction mode, allowing rapid adaptation to diverse large-scale data Q&A scenarios. Users can ask questions via text, images, or a combination of both, and the platform performs deep semantic understanding across the complete dataset, producing answers in multiple formats including text, images, and video. For video content, the platform also provides template-based output capabilities for generating customized content summaries, information extraction, and video scripts.
 *
 * @description Streaming API for [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) intelligent Q&A applications, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
 * ### Integration Guide:
 * Streaming API for intelligent Q&A, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
 * ### Data Sources:
 * Supports video Q&A. Data can be uploaded and updated through the [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) product interface or via the [Dataset Data Add/Update API](https://help.aliyun.com/zh/document_detail/3038471.html?spm=a2c4g.11186623.help-menu-3037946.d_0_2_1_0.54ed1e97NGXVV1&scm=20140722.H_3038471._.OR_help-T_cn~zh-V_1).
 * # Authentication
 * Call the CleverSee - Intelligent Q&A service through the Alibaba Cloud SDK. For the detailed calling guide, please refer to: [AI Q&A Engine API](https://api.aliyun.com/document/AiSearchEngine/2026-04-17/QaChat)
 *
 * @param request QaChatRequest
 * @return QaChatResponse
 */
QaChatResponse Client::qaChat(const QaChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return qaChatWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AiSearchEngine20260417