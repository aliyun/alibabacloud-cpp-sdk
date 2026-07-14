#include <darabonba/Core.hpp>
#include <alibabacloud/DianJin20240628.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
#include <alibabacloud/WebsocketUtils.hpp>
#include <alibabacloud/credentials/Client.hpp>
#include <darabonba/http/FileField.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::Credentials::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::DianJin20240628::Models;
using namespace AlibabaCloud::OpenApi::WebsocketUtils;
namespace AlibabaCloud
{
namespace DianJin20240628
{

AlibabaCloud::DianJin20240628::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "dianjin.cn-beijing.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dianjin", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 申请取数
 *
 * @param request CommercializeFetchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommercializeFetchResponse
 */
CommercializeFetchResponse Client::commercializeFetchWithOptions(const string &workspaceId, const string &cjfCode, const string &zjfCode, const CommercializeFetchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelId()) {
    body["channelId"] = request.getChannelId();
  }

  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasEncryptType()) {
    body["encryptType"] = request.getEncryptType();
  }

  if (!!request.hasEnv()) {
    body["env"] = request.getEnv();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasSecretKey()) {
    body["secretKey"] = request.getSecretKey();
  }

  if (!!request.hasSign()) {
    body["sign"] = request.getSign();
  }

  if (!!request.hasSignType()) {
    body["signType"] = request.getSignType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CommercializeFetch"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/spi/path/" , Darabonba::Encode::Encoder::percentEncode(cjfCode) , "/api/support/" , Darabonba::Encode::Encoder::percentEncode(zjfCode) , "/firefly/commercializeFetch")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CommercializeFetchResponse>();
}

/**
 * @summary 申请取数
 *
 * @param request CommercializeFetchRequest
 * @return CommercializeFetchResponse
 */
CommercializeFetchResponse Client::commercializeFetch(const string &workspaceId, const string &cjfCode, const string &zjfCode, const CommercializeFetchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return commercializeFetchWithOptions(workspaceId, cjfCode, zjfCode, request, headers, runtime);
}

/**
 * @summary Create a task to summarize documents by year.
 *
 * @description Before you use this operation, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * Obtain your [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateAnnualDocSummaryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAnnualDocSummaryTaskResponse
 */
CreateAnnualDocSummaryTaskResponse Client::createAnnualDocSummaryTaskWithOptions(const string &workspaceId, const CreateAnnualDocSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnaYears()) {
    body["anaYears"] = request.getAnaYears();
  }

  if (!!request.hasDocInfos()) {
    body["docInfos"] = request.getDocInfos();
  }

  if (!!request.hasEnableTable()) {
    body["enableTable"] = request.getEnableTable();
  }

  if (!!request.hasInstruction()) {
    body["instruction"] = request.getInstruction();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAnnualDocSummaryTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/summary/doc/annual")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAnnualDocSummaryTaskResponse>();
}

/**
 * @summary Create a task to summarize documents by year.
 *
 * @description Before you use this operation, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * Obtain your [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateAnnualDocSummaryTaskRequest
 * @return CreateAnnualDocSummaryTaskResponse
 */
CreateAnnualDocSummaryTaskResponse Client::createAnnualDocSummaryTask(const string &workspaceId, const CreateAnnualDocSummaryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAnnualDocSummaryTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates an outbound call session.
 *
 * @param request CreateDialogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDialogResponse
 */
CreateDialogResponse Client::createDialogWithOptions(const string &workspaceId, const CreateDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannel()) {
    body["channel"] = request.getChannel();
  }

  if (!!request.hasEnableLibrary()) {
    body["enableLibrary"] = request.getEnableLibrary();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.getMetaData();
  }

  if (!!request.hasPlayCode()) {
    body["playCode"] = request.getPlayCode();
  }

  if (!!request.hasQaLibraryList()) {
    body["qaLibraryList"] = request.getQaLibraryList();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasSelfDirected()) {
    body["selfDirected"] = request.getSelfDirected();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDialog"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDialogResponse>();
}

/**
 * @summary Creates an outbound call session.
 *
 * @param request CreateDialogRequest
 * @return CreateDialogResponse
 */
CreateDialogResponse Client::createDialog(const string &workspaceId, const CreateDialogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDialogWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a session analysis task. After the task is created, use the session ID with GetDialogAnalysisResult to retrieve the results.
 *
 * @description Before you use this API, review the billing methods and pricing for DianJin.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and DianJin.
 * Obtain a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateDialogAnalysisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDialogAnalysisTaskResponse
 */
CreateDialogAnalysisTaskResponse Client::createDialogAnalysisTaskWithOptions(const string &workspaceId, const CreateDialogAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysisNodes()) {
    body["analysisNodes"] = request.getAnalysisNodes();
  }

  if (!!request.hasConversationList()) {
    body["conversationList"] = request.getConversationList();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.getMetaData();
  }

  if (!!request.hasPlayCode()) {
    body["playCode"] = request.getPlayCode();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDialogAnalysisTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/analysis/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDialogAnalysisTaskResponse>();
}

/**
 * @summary Creates a session analysis task. After the task is created, use the session ID with GetDialogAnalysisResult to retrieve the results.
 *
 * @description Before you use this API, review the billing methods and pricing for DianJin.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and DianJin.
 * Obtain a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateDialogAnalysisTaskRequest
 * @return CreateDialogAnalysisTaskResponse
 */
CreateDialogAnalysisTaskResponse Client::createDialogAnalysisTask(const string &workspaceId, const CreateDialogAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDialogAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a multi-document summary task.
 *
 * @description Before you use this API, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * You have obtained a [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateDocsSummaryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDocsSummaryTaskResponse
 */
CreateDocsSummaryTaskResponse Client::createDocsSummaryTaskWithOptions(const string &workspaceId, const CreateDocsSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocInfos()) {
    body["docInfos"] = request.getDocInfos();
  }

  if (!!request.hasEnableTable()) {
    body["enableTable"] = request.getEnableTable();
  }

  if (!!request.hasInstruction()) {
    body["instruction"] = request.getInstruction();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDocsSummaryTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/summary/docs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDocsSummaryTaskResponse>();
}

/**
 * @summary Creates a multi-document summary task.
 *
 * @description Before you use this API, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * You have obtained a [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateDocsSummaryTaskRequest
 * @return CreateDocsSummaryTaskResponse
 */
CreateDocsSummaryTaskResponse Client::createDocsSummaryTask(const string &workspaceId, const CreateDocsSummaryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDocsSummaryTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a financial report summary.
 *
 * @description Before using this API, review the pricing and billing methods for Alibaba Cloud Gold products.
 * **Prerequisites**
 * - Enable Alibaba Cloud Model Studio and Alibaba Cloud Gold services.
 * - Obtain the workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateFinReportSummaryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFinReportSummaryTaskResponse
 */
CreateFinReportSummaryTaskResponse Client::createFinReportSummaryTaskWithOptions(const string &workspaceId, const CreateFinReportSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["docId"] = request.getDocId();
  }

  if (!!request.hasEnableTable()) {
    body["enableTable"] = request.getEnableTable();
  }

  if (!!request.hasEndPage()) {
    body["endPage"] = request.getEndPage();
  }

  if (!!request.hasInstruction()) {
    body["instruction"] = request.getInstruction();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasStartPage()) {
    body["startPage"] = request.getStartPage();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFinReportSummaryTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/summary")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFinReportSummaryTaskResponse>();
}

/**
 * @summary Creates a financial report summary.
 *
 * @description Before using this API, review the pricing and billing methods for Alibaba Cloud Gold products.
 * **Prerequisites**
 * - Enable Alibaba Cloud Model Studio and Alibaba Cloud Gold services.
 * - Obtain the workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateFinReportSummaryTaskRequest
 * @return CreateFinReportSummaryTaskResponse
 */
CreateFinReportSummaryTaskResponse Client::createFinReportSummaryTask(const string &workspaceId, const CreateFinReportSummaryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFinReportSummaryTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建图片检测任务
 *
 * @param request CreateImageDetectionTaskRequest
 * @param headers CreateImageDetectionTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageDetectionTaskResponse
 */
CreateImageDetectionTaskResponse Client::createImageDetectionTaskWithOptions(const string &workspaceId, const CreateImageDetectionTaskRequest &request, const CreateImageDetectionTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileInfo()) {
    body["fileInfo"] = request.getFileInfo();
  }

  if (!!request.hasFileUrl()) {
    body["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXLoadTest()) {
    realHeaders["X-Load-Test"] = json(headers.getXLoadTest()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateImageDetectionTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/imageDetect/task/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageDetectionTaskResponse>();
}

/**
 * @summary 创建图片检测任务
 *
 * @param request CreateImageDetectionTaskRequest
 * @return CreateImageDetectionTaskResponse
 */
CreateImageDetectionTaskResponse Client::createImageDetectionTask(const string &workspaceId, const CreateImageDetectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateImageDetectionTaskHeaders headers = CreateImageDetectionTaskHeaders();
  return createImageDetectionTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a document library. A document library isolates document and index data. If your use case requires frequent natural language search by category, create multiple libraries to isolate different data types. You can customize vector and text indexes by format.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain the workspace ID: Retrieve the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLibraryResponse
 */
CreateLibraryResponse Client::createLibraryWithOptions(const string &workspaceId, const CreateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasIndexSetting()) {
    body["indexSetting"] = request.getIndexSetting();
  }

  if (!!request.hasLibraryName()) {
    body["libraryName"] = request.getLibraryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLibrary"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLibraryResponse>();
}

/**
 * @summary Creates a document library. A document library isolates document and index data. If your use case requires frequent natural language search by category, create multiple libraries to isolate different data types. You can customize vector and text indexes by format.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain the workspace ID: Retrieve the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateLibraryRequest
 * @return CreateLibraryResponse
 */
CreateLibraryResponse Client::createLibrary(const string &workspaceId, const CreateLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLibraryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Create a PDF document translation task. Submit the task to start asynchronous translation.
 *
 * @description Before you use this operation, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
 * **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - You have obtained a workspace ID. To obtain your [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreatePdfTranslateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePdfTranslateTaskResponse
 */
CreatePdfTranslateTaskResponse Client::createPdfTranslateTaskWithOptions(const string &workspaceId, const CreatePdfTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["docId"] = request.getDocId();
  }

  if (!!request.hasKnowledge()) {
    body["knowledge"] = request.getKnowledge();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasTranslateTo()) {
    body["translateTo"] = request.getTranslateTo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePdfTranslateTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/pdfTranslate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePdfTranslateTaskResponse>();
}

/**
 * @summary Create a PDF document translation task. Submit the task to start asynchronous translation.
 *
 * @description Before you use this operation, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
 * **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - You have obtained a workspace ID. To obtain your [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreatePdfTranslateTaskRequest
 * @return CreatePdfTranslateTaskResponse
 */
CreatePdfTranslateTaskResponse Client::createPdfTranslateTask(const string &workspaceId, const CreatePdfTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPdfTranslateTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates document chunks based on your business scenarios.
 *
 * @description Before using this API, review the billing methods and pricing for Tongyi Dianjin.
 * **Prerequisites**
 * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain a workspace ID. For more information, see [Get a workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreatePredefinedDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePredefinedDocumentResponse
 */
CreatePredefinedDocumentResponse Client::createPredefinedDocumentWithOptions(const string &workspaceId, const CreatePredefinedDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChunks()) {
    body["chunks"] = request.getChunks();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePredefinedDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/createPredefinedDocument")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePredefinedDocumentResponse>();
}

/**
 * @summary Creates document chunks based on your business scenarios.
 *
 * @description Before using this API, review the billing methods and pricing for Tongyi Dianjin.
 * **Prerequisites**
 * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain a workspace ID. For more information, see [Get a workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreatePredefinedDocumentRequest
 * @return CreatePredefinedDocumentResponse
 */
CreatePredefinedDocumentResponse Client::createPredefinedDocument(const string &workspaceId, const CreatePredefinedDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPredefinedDocumentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a quality check task.
 *
 * @description Before using this API, review the pricing and billing methods for the Tongyi Dianjin product.
 * Prerequisites
 * Activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * Obtain the workspaceId: Retrieve the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateQualityCheckTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQualityCheckTaskResponse
 */
CreateQualityCheckTaskResponse Client::createQualityCheckTaskWithOptions(const string &workspaceId, const CreateQualityCheckTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConversationList()) {
    body["conversationList"] = request.getConversationList();
  }

  if (!!request.hasGmtService()) {
    body["gmtService"] = request.getGmtService();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.getMetaData();
  }

  if (!!request.hasQualityGroup()) {
    body["qualityGroup"] = request.getQualityGroup();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasSceneCode()) {
    body["sceneCode"] = request.getSceneCode();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateQualityCheckTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/qualitycheck/task/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQualityCheckTaskResponse>();
}

/**
 * @summary Creates a quality check task.
 *
 * @description Before using this API, review the pricing and billing methods for the Tongyi Dianjin product.
 * Prerequisites
 * Activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * Obtain the workspaceId: Retrieve the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request CreateQualityCheckTaskRequest
 * @return CreateQualityCheckTaskResponse
 */
CreateQualityCheckTaskResponse Client::createQualityCheckTask(const string &workspaceId, const CreateQualityCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createQualityCheckTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 创建视频生成任务
 *
 * @param request CreateVideoCreationTaskRequest
 * @param headers CreateVideoCreationTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVideoCreationTaskResponse
 */
CreateVideoCreationTaskResponse Client::createVideoCreationTaskWithOptions(const string &workspaceId, const CreateVideoCreationTaskRequest &request, const CreateVideoCreationTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreationInstruction()) {
    body["creationInstruction"] = request.getCreationInstruction();
  }

  if (!!request.hasFileInfo()) {
    body["fileInfo"] = request.getFileInfo();
  }

  if (!!request.hasImageDetectionTaskId()) {
    body["imageDetectionTaskId"] = request.getImageDetectionTaskId();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXLoadTest()) {
    realHeaders["X-Load-Test"] = json(headers.getXLoadTest()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVideoCreationTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/videoCreation/task/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVideoCreationTaskResponse>();
}

/**
 * @summary 创建视频生成任务
 *
 * @param request CreateVideoCreationTaskRequest
 * @return CreateVideoCreationTaskResponse
 */
CreateVideoCreationTaskResponse Client::createVideoCreationTask(const string &workspaceId, const CreateVideoCreationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateVideoCreationTaskHeaders headers = CreateVideoCreationTaskHeaders();
  return createVideoCreationTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary A callback event that indicates the completion of a Dashscope asynchronous task.
 *
 * @param request DashscopeAsyncTaskFinishEventRequest
 * @param headers DashscopeAsyncTaskFinishEventHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DashscopeAsyncTaskFinishEventResponse
 */
DashscopeAsyncTaskFinishEventResponse Client::dashscopeAsyncTaskFinishEventWithOptions(const string &workspaceId, const DashscopeAsyncTaskFinishEventRequest &request, const DashscopeAsyncTaskFinishEventHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBody()) {
    body["body"] = request.getBody();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXLoadTest()) {
    realHeaders["X-Load-Test"] = json(headers.getXLoadTest()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DashscopeAsyncTaskFinishEvent"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/event/dashscopeAsyncTaskFinish")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DashscopeAsyncTaskFinishEventResponse>();
}

/**
 * @summary A callback event that indicates the completion of a Dashscope asynchronous task.
 *
 * @param request DashscopeAsyncTaskFinishEventRequest
 * @return DashscopeAsyncTaskFinishEventResponse
 */
DashscopeAsyncTaskFinishEventResponse Client::dashscopeAsyncTaskFinishEvent(const string &workspaceId, const DashscopeAsyncTaskFinishEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DashscopeAsyncTaskFinishEventHeaders headers = DashscopeAsyncTaskFinishEventHeaders();
  return dashscopeAsyncTaskFinishEventWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Deletes a document. After deletion, you cannot view the original document or recall it.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * - Obtain your workspace ID: retrieve your [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request DeleteDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocumentWithOptions(const string &workspaceId, const DeleteDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocIds()) {
    body["docIds"] = request.getDocIds();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocumentResponse>();
}

/**
 * @summary Deletes a document. After deletion, you cannot view the original document or recall it.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * - Obtain your workspace ID: retrieve your [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request DeleteDocumentRequest
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocument(const string &workspaceId, const DeleteDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDocumentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Delete a document library. ⚠️ This operation deletes the library and all its associated documents.
 *
 * @description **Prerequisites**
 * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * - Obtain your workspaceId. For more information, refer to the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request DeleteLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLibraryResponse
 */
DeleteLibraryResponse Client::deleteLibraryWithOptions(const string &workspaceId, const DeleteLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLibraryId()) {
    query["libraryId"] = request.getLibraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLibrary"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLibraryResponse>();
}

/**
 * @summary Delete a document library. ⚠️ This operation deletes the library and all its associated documents.
 *
 * @description **Prerequisites**
 * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * - Obtain your workspaceId. For more information, refer to the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request DeleteLibraryRequest
 * @return DeleteLibraryResponse
 */
DeleteLibraryResponse Client::deleteLibrary(const string &workspaceId, const DeleteLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLibraryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary This API uses the WebSocket protocol to perform real-time conversational transcription, intent recognition, and speech synthesis. It supports various audio formats for both input and output to ensure real-time performance and high compatibility.
 *
 * @param request EndToEndRealTimeDialogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndToEndRealTimeDialogResponse
 */
EndToEndRealTimeDialogResponse Client::endToEndRealTimeDialogWithOptions(const string &workspaceId, const EndToEndRealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsrModelId()) {
    query["asrModelId"] = request.getAsrModelId();
  }

  if (!!request.hasInputFormat()) {
    query["inputFormat"] = request.getInputFormat();
  }

  if (!!request.hasOutputFormat()) {
    query["outputFormat"] = request.getOutputFormat();
  }

  if (!!request.hasPitchRate()) {
    query["pitchRate"] = request.getPitchRate();
  }

  if (!!request.hasSampleRate()) {
    query["sampleRate"] = request.getSampleRate();
  }

  if (!!request.hasSpeechRate()) {
    query["speechRate"] = request.getSpeechRate();
  }

  if (!!request.hasTtsModelId()) {
    query["ttsModelId"] = request.getTtsModelId();
  }

  if (!!request.hasVoiceCode()) {
    query["voiceCode"] = request.getVoiceCode();
  }

  if (!!request.hasVolume()) {
    query["volume"] = request.getVolume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EndToEndRealTimeDialog"},
    {"version" , "2024-06-28"},
    {"protocol" , "wss"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/ws/realtime/dialog")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"},
    {"websocketSubProtocol" , "awap"}
  }).get<map<string, string>>());
  EndToEndRealTimeDialogResponse res = EndToEndRealTimeDialogResponse();
  json tmp = callApi(params, req, runtime);
  if (!Darabonba::isNull(tmp.at("webSocketClient"))) {
    res.setWebSocketClient(Client::createWebSocketClient(tmp.at("webSocketClient")));
  }

  return res;
}

/**
 * @summary This API uses the WebSocket protocol to perform real-time conversational transcription, intent recognition, and speech synthesis. It supports various audio formats for both input and output to ensure real-time performance and high compatibility.
 *
 * @param request EndToEndRealTimeDialogRequest
 * @return EndToEndRealTimeDialogResponse
 */
EndToEndRealTimeDialogResponse Client::endToEndRealTimeDialog(const string &workspaceId, const EndToEndRealTimeDialogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return endToEndRealTimeDialogWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Terminate the job.
 *
 * @param request EvictTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EvictTaskResponse
 */
EvictTaskResponse Client::evictTaskWithOptions(const string &workspaceId, const EvictTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EvictTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/evict")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EvictTaskResponse>();
}

/**
 * @summary Terminate the job.
 *
 * @param request EvictTaskRequest
 * @return EvictTaskResponse
 */
EvictTaskResponse Client::evictTask(const string &workspaceId, const EvictTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return evictTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 兑换权益
 *
 * @param request ExchangeEntitlementRequest
 * @param headers ExchangeEntitlementHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExchangeEntitlementResponse
 */
ExchangeEntitlementResponse Client::exchangeEntitlementWithOptions(const string &workspaceId, const string &tenantId, const ExchangeEntitlementRequest &request, const ExchangeEntitlementHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExternalUserId()) {
    body["externalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasKeyHash()) {
    body["keyHash"] = request.getKeyHash();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasTemplateId()) {
    body["templateId"] = request.getTemplateId();
  }

  if (!!request.hasUserName()) {
    body["userName"] = request.getUserName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXLoadTest()) {
    realHeaders["X-Load-Test"] = json(headers.getXLoadTest()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExchangeEntitlement"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(tenantId) , "/redeem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExchangeEntitlementResponse>();
}

/**
 * @summary 兑换权益
 *
 * @param request ExchangeEntitlementRequest
 * @return ExchangeEntitlementResponse
 */
ExchangeEntitlementResponse Client::exchangeEntitlement(const string &workspaceId, const string &tenantId, const ExchangeEntitlementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExchangeEntitlementHeaders headers = ExchangeEntitlementHeaders();
  return exchangeEntitlementWithOptions(workspaceId, tenantId, request, headers, runtime);
}

/**
 * @summary Parses question and answer (Q&A) pairs from a document. You can use the UpdateQaLibrary API to update the Q&A pairs.
 *
 * @description Before you use this API, make sure you understand the billing methods and pricing of the Tongyi Dianjin product.
 * Prerequisites
 * Activate Alibaba Cloud Model Studio and the Tongyi Dianjin service.
 * Obtain a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GenDocQaResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenDocQaResultResponse
 */
GenDocQaResultResponse Client::genDocQaResultWithOptions(const string &workspaceId, const GenDocQaResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["docId"] = request.getDocId();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenDocQaResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/qa/parse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenDocQaResultResponse>();
}

/**
 * @summary Parses question and answer (Q&A) pairs from a document. You can use the UpdateQaLibrary API to update the Q&A pairs.
 *
 * @description Before you use this API, make sure you understand the billing methods and pricing of the Tongyi Dianjin product.
 * Prerequisites
 * Activate Alibaba Cloud Model Studio and the Tongyi Dianjin service.
 * Obtain a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GenDocQaResultRequest
 * @return GenDocQaResultResponse
 */
GenDocQaResultResponse Client::genDocQaResult(const string &workspaceId, const GenDocQaResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return genDocQaResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieve app configuration.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Gold services.
 * - You can obtain the workspace ID. For details, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%E3%80%9DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetAppConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppConfigResponse
 */
GetAppConfigResponse Client::getAppConfigWithOptions(const string &workspaceId, const GetAppConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppConfig"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/app/config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppConfigResponse>();
}

/**
 * @summary Retrieve app configuration.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Gold services.
 * - You can obtain the workspace ID. For details, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%E3%80%9DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetAppConfigRequest
 * @return GetAppConfigResponse
 */
GetAppConfigResponse Client::getAppConfig(const string &workspaceId, const GetAppConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAppConfigWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieves the Q&A results generated by the SubmitChatQuestion API.
 *
 * @param request GetChatQuestionRespRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatQuestionRespResponse
 */
GetChatQuestionRespResponse Client::getChatQuestionRespWithOptions(const string &workspaceId, const GetChatQuestionRespRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBatchId()) {
    body["batchId"] = request.getBatchId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetChatQuestionResp"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/chat/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatQuestionRespResponse>();
}

/**
 * @summary Retrieves the Q&A results generated by the SubmitChatQuestion API.
 *
 * @param request GetChatQuestionRespRequest
 * @return GetChatQuestionRespResponse
 */
GetChatQuestionRespResponse Client::getChatQuestionResp(const string &workspaceId, const GetChatQuestionRespRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getChatQuestionRespWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieve session analysis results. You can retrieve results in batches by specifying a list of session IDs or a time range.
 *
 * @param request GetDialogAnalysisResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDialogAnalysisResultResponse
 */
GetDialogAnalysisResultResponse Client::getDialogAnalysisResultWithOptions(const string &workspaceId, const GetDialogAnalysisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAsc()) {
    body["asc"] = request.getAsc();
  }

  if (!!request.hasEndTime()) {
    body["endTime"] = request.getEndTime();
  }

  if (!!request.hasSessionIds()) {
    body["sessionIds"] = request.getSessionIds();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.getStartTime();
  }

  if (!!request.hasUseUrl()) {
    body["useUrl"] = request.getUseUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDialogAnalysisResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/analysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDialogAnalysisResultResponse>();
}

/**
 * @summary Retrieve session analysis results. You can retrieve results in batches by specifying a list of session IDs or a time range.
 *
 * @param request GetDialogAnalysisResultRequest
 * @return GetDialogAnalysisResultResponse
 */
GetDialogAnalysisResultResponse Client::getDialogAnalysisResult(const string &workspaceId, const GetDialogAnalysisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDialogAnalysisResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieve session details.
 *
 * @param request GetDialogDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDialogDetailResponse
 */
GetDialogDetailResponse Client::getDialogDetailWithOptions(const string &workspaceId, const GetDialogDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDialogDetail"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDialogDetailResponse>();
}

/**
 * @summary Retrieve session details.
 *
 * @param request GetDialogDetailRequest
 * @return GetDialogDetailResponse
 */
GetDialogDetailResponse Client::getDialogDetail(const string &workspaceId, const GetDialogDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDialogDetailWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieves records of real-time conversations and the results of intent analysis.
 *
 * @description ## Request description
 * This API retrieves conversation records between customers and service agents, along with intent analysis results generated by the model.
 *
 * @param request GetDialogLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDialogLogResponse
 */
GetDialogLogResponse Client::getDialogLogWithOptions(const string &workspaceId, const GetDialogLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["id"] = request.getId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDialogLog"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/dialog/log")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDialogLogResponse>();
}

/**
 * @summary Retrieves records of real-time conversations and the results of intent analysis.
 *
 * @description ## Request description
 * This API retrieves conversation records between customers and service agents, along with intent analysis results generated by the model.
 *
 * @param request GetDialogLogRequest
 * @return GetDialogLogResponse
 */
GetDialogLogResponse Client::getDialogLog(const string &workspaceId, const GetDialogLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDialogLogWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieve a list of document chunks. You can filter them by query conditions.
 *
 * @description **Prerequisites**
 * - Activate Alibaba Cloud Model Studio and Tongyi Gold Service.
 * - Obtain the workspaceId and the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%B3).
 *
 * @param request GetDocumentChunkListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentChunkListResponse
 */
GetDocumentChunkListResponse Client::getDocumentChunkListWithOptions(const string &workspaceId, const GetDocumentChunkListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChunkIdList()) {
    body["chunkIdList"] = request.getChunkIdList();
  }

  if (!!request.hasDocId()) {
    body["docId"] = request.getDocId();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasOrder()) {
    body["order"] = request.getOrder();
  }

  if (!!request.hasOrderBy()) {
    body["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchQuery()) {
    body["searchQuery"] = request.getSearchQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDocumentChunkList"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/getDocumentChunk")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentChunkListResponse>();
}

/**
 * @summary Retrieve a list of document chunks. You can filter them by query conditions.
 *
 * @description **Prerequisites**
 * - Activate Alibaba Cloud Model Studio and Tongyi Gold Service.
 * - Obtain the workspaceId and the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%B3).
 *
 * @param request GetDocumentChunkListRequest
 * @return GetDocumentChunkListResponse
 */
GetDocumentChunkListResponse Client::getDocumentChunkList(const string &workspaceId, const GetDocumentChunkListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDocumentChunkListWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of documents from a document library. This operation supports paged queries and filtering by document status.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and the Tongyi Gold Point service.
 * - You have obtained a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetDocumentListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentListResponse
 */
GetDocumentListResponse Client::getDocumentListWithOptions(const string &workspaceId, const GetDocumentListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLibraryId()) {
    query["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDocumentList"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/listDocument")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentListResponse>();
}

/**
 * @summary Retrieves a list of documents from a document library. This operation supports paged queries and filtering by document status.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and the Tongyi Gold Point service.
 * - You have obtained a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetDocumentListRequest
 * @return GetDocumentListResponse
 */
GetDocumentListResponse Client::getDocumentList(const string &workspaceId, const GetDocumentListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDocumentListWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieve a download URL for a document. The URL expires after 1 hour.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetDocumentUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentUrlResponse
 */
GetDocumentUrlResponse Client::getDocumentUrlWithOptions(const string &workspaceId, const GetDocumentUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocumentId()) {
    query["documentId"] = request.getDocumentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDocumentUrl"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/url")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentUrlResponse>();
}

/**
 * @summary Retrieve a download URL for a document. The URL expires after 1 hour.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetDocumentUrlRequest
 * @return GetDocumentUrlResponse
 */
GetDocumentUrlResponse Client::getDocumentUrl(const string &workspaceId, const GetDocumentUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDocumentUrlWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary This operation retrieves a list of documents. You can filter documents by metadata or use paging.
 *
 * @description Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * To obtain the workspace ID, see [the document about obtaining the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetFilterDocumentListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFilterDocumentListResponse
 */
GetFilterDocumentListResponse Client::getFilterDocumentListWithOptions(const string &workspaceId, const GetFilterDocumentListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnd()) {
    body["and"] = request.getAnd();
  }

  if (!!request.hasDocIdList()) {
    body["docIdList"] = request.getDocIdList();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasOr()) {
    body["or"] = request.getOr();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFilterDocumentList"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/filterDocument")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFilterDocumentListResponse>();
}

/**
 * @summary This operation retrieves a list of documents. You can filter documents by metadata or use paging.
 *
 * @description Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * To obtain the workspace ID, see [the document about obtaining the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetFilterDocumentListRequest
 * @return GetFilterDocumentListResponse
 */
GetFilterDocumentListResponse Client::getFilterDocumentList(const string &workspaceId, const GetFilterDocumentListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFilterDocumentListWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieve conversation history records by business type.
 *
 * @param request GetHistoryListByBizTypeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHistoryListByBizTypeResponse
 */
GetHistoryListByBizTypeResponse Client::getHistoryListByBizTypeWithOptions(const string &workspaceId, const GetHistoryListByBizTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["bizId"] = request.getBizId();
  }

  if (!!request.hasBizType()) {
    query["bizType"] = request.getBizType();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHistoryListByBizType"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/history/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHistoryListByBizTypeResponse>();
}

/**
 * @summary Retrieve conversation history records by business type.
 *
 * @param request GetHistoryListByBizTypeRequest
 * @return GetHistoryListByBizTypeResponse
 */
GetHistoryListByBizTypeResponse Client::getHistoryListByBizType(const string &workspaceId, const GetHistoryListByBizTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHistoryListByBizTypeWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取检测结果
 *
 * @param request GetImageDetectionTaskResultRequest
 * @param headers GetImageDetectionTaskResultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageDetectionTaskResultResponse
 */
GetImageDetectionTaskResultResponse Client::getImageDetectionTaskResultWithOptions(const string &workspaceId, const GetImageDetectionTaskResultRequest &request, const GetImageDetectionTaskResultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.getTaskId();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXLoadTest()) {
    realHeaders["X-Load-Test"] = json(headers.getXLoadTest()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetImageDetectionTaskResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/imageDetect/task/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageDetectionTaskResultResponse>();
}

/**
 * @summary 获取检测结果
 *
 * @param request GetImageDetectionTaskResultRequest
 * @return GetImageDetectionTaskResultResponse
 */
GetImageDetectionTaskResultResponse Client::getImageDetectionTaskResult(const string &workspaceId, const GetImageDetectionTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetImageDetectionTaskResultHeaders headers = GetImageDetectionTaskResultHeaders();
  return getImageDetectionTaskResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieves the detailed configuration of a document library, including its name, description, and index settings.
 *
 * @description **Prerequisites**
 * - Activate the Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * - Obtain a [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLibraryResponse
 */
GetLibraryResponse Client::getLibraryWithOptions(const string &workspaceId, const GetLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLibraryId()) {
    query["libraryId"] = request.getLibraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLibrary"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLibraryResponse>();
}

/**
 * @summary Retrieves the detailed configuration of a document library, including its name, description, and index settings.
 *
 * @description **Prerequisites**
 * - Activate the Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * - Obtain a [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetLibraryRequest
 * @return GetLibraryResponse
 */
GetLibraryResponse Client::getLibrary(const string &workspaceId, const GetLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLibraryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieve the document library list. The list includes document names, descriptions, and unique identifiers.
 *
 * @description Prerequisites
 * - You must activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * - Obtain the workspaceId. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetLibraryListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLibraryListResponse
 */
GetLibraryListResponse Client::getLibraryListWithOptions(const string &workspaceId, const GetLibraryListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLibraryList"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLibraryListResponse>();
}

/**
 * @summary Retrieve the document library list. The list includes document names, descriptions, and unique identifiers.
 *
 * @description Prerequisites
 * - You must activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * - Obtain the workspaceId. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetLibraryListRequest
 * @return GetLibraryListResponse
 */
GetLibraryListResponse Client::getLibraryList(const string &workspaceId, const GetLibraryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLibraryListWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieve document parsing results. You can query the document\\"s parsing status and obtain the parsing results.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Gold services.
 * - Obtain the workspace ID. For more information, see [the workspace identity document](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetParseResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetParseResultResponse
 */
GetParseResultResponse Client::getParseResultWithOptions(const string &workspaceId, const GetParseResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["docId"] = request.getDocId();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasUseUrlResult()) {
    body["useUrlResult"] = request.getUseUrlResult();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetParseResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/getParseResult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetParseResultResponse>();
}

/**
 * @summary Retrieve document parsing results. You can query the document\\"s parsing status and obtain the parsing results.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Gold services.
 * - Obtain the workspace ID. For more information, see [the workspace identity document](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request GetParseResultRequest
 * @return GetParseResultResponse
 */
GetParseResultResponse Client::getParseResult(const string &workspaceId, const GetParseResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getParseResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieve quality check results.
 *
 * @param request GetQualityCheckTaskResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityCheckTaskResultResponse
 */
GetQualityCheckTaskResultResponse Client::getQualityCheckTaskResultWithOptions(const string &workspaceId, const GetQualityCheckTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityCheckTaskResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/qualitycheck/task/query")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityCheckTaskResultResponse>();
}

/**
 * @summary Retrieve quality check results.
 *
 * @param request GetQualityCheckTaskResultRequest
 * @return GetQualityCheckTaskResultResponse
 */
GetQualityCheckTaskResultResponse Client::getQualityCheckTaskResult(const string &workspaceId, const GetQualityCheckTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getQualityCheckTaskResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 获取报告结果
 *
 * @param request GetReportResponseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReportResponseResponse
 */
GetReportResponseResponse Client::getReportResponseWithOptions(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const GetReportResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetReportResponse"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/firefly/v1/" , Darabonba::Encode::Encoder::percentEncode(sceneCode) , "/" , Darabonba::Encode::Encoder::percentEncode(fundProduct) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(outRequestNo) , "/report")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReportResponseResponse>();
}

/**
 * @summary 获取报告结果
 *
 * @param request GetReportResponseRequest
 * @return GetReportResponseResponse
 */
GetReportResponseResponse Client::getReportResponse(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const GetReportResponseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getReportResponseWithOptions(workspaceId, sceneCode, fundProduct, outRequestNo, request, headers, runtime);
}

/**
 * @summary 获取任务状态
 *
 * @param request GetReportTaskStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReportTaskStatusResponse
 */
GetReportTaskStatusResponse Client::getReportTaskStatusWithOptions(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const GetReportTaskStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetReportTaskStatus"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/firefly/v1/" , Darabonba::Encode::Encoder::percentEncode(sceneCode) , "/" , Darabonba::Encode::Encoder::percentEncode(fundProduct) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(outRequestNo))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReportTaskStatusResponse>();
}

/**
 * @summary 获取任务状态
 *
 * @param request GetReportTaskStatusRequest
 * @return GetReportTaskStatusResponse
 */
GetReportTaskStatusResponse Client::getReportTaskStatus(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const GetReportTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getReportTaskStatusWithOptions(workspaceId, sceneCode, fundProduct, outRequestNo, request, headers, runtime);
}

/**
 * @summary Retrieves the result of a financial report summary task.
 *
 * @param request GetSummaryTaskResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSummaryTaskResultResponse
 */
GetSummaryTaskResultResponse Client::getSummaryTaskResultWithOptions(const string &workspaceId, const GetSummaryTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSummaryTaskResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/summary/result")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSummaryTaskResultResponse>();
}

/**
 * @summary Retrieves the result of a financial report summary task.
 *
 * @param request GetSummaryTaskResultRequest
 * @return GetSummaryTaskResultResponse
 */
GetSummaryTaskResultResponse Client::getSummaryTaskResult(const string &workspaceId, const GetSummaryTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSummaryTaskResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieves the result of an asynchronous task.
 *
 * @param request GetTaskResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResultResponse
 */
GetTaskResultResponse Client::getTaskResultWithOptions(const string &workspaceId, const GetTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/result")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResultResponse>();
}

/**
 * @summary Retrieves the result of an asynchronous task.
 *
 * @param request GetTaskResultRequest
 * @return GetTaskResultResponse
 */
GetTaskResultResponse Client::getTaskResult(const string &workspaceId, const GetTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Gets the status of a task.
 *
 * @param request GetTaskStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskStatusResponse
 */
GetTaskStatusResponse Client::getTaskStatusWithOptions(const string &workspaceId, const GetTaskStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskStatus"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskStatusResponse>();
}

/**
 * @summary Gets the status of a task.
 *
 * @param request GetTaskStatusRequest
 * @return GetTaskStatusResponse
 */
GetTaskStatusResponse Client::getTaskStatus(const string &workspaceId, const GetTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskStatusWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 查询用量明细
 *
 * @param request GetUsageRequest
 * @param headers GetUsageHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUsageResponse
 */
GetUsageResponse Client::getUsageWithOptions(const string &workspaceId, const string &tenantId, const GetUsageRequest &request, const GetUsageHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalUserId()) {
    query["externalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasRedemptionOrderNo()) {
    query["redemptionOrderNo"] = request.getRedemptionOrderNo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXLoadTest()) {
    realHeaders["X-Load-Test"] = json(headers.getXLoadTest()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUsage"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(tenantId) , "/usage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUsageResponse>();
}

/**
 * @summary 查询用量明细
 *
 * @param request GetUsageRequest
 * @return GetUsageResponse
 */
GetUsageResponse Client::getUsage(const string &workspaceId, const string &tenantId, const GetUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUsageHeaders headers = GetUsageHeaders();
  return getUsageWithOptions(workspaceId, tenantId, request, headers, runtime);
}

/**
 * @summary 获取视频生成任务结果
 *
 * @param request GetVideoCreationTaskResultRequest
 * @param headers GetVideoCreationTaskResultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoCreationTaskResultResponse
 */
GetVideoCreationTaskResultResponse Client::getVideoCreationTaskResultWithOptions(const string &workspaceId, const GetVideoCreationTaskResultRequest &request, const GetVideoCreationTaskResultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.getTaskId();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXLoadTest()) {
    realHeaders["X-Load-Test"] = json(headers.getXLoadTest()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetVideoCreationTaskResult"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/videoCreation/task/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoCreationTaskResultResponse>();
}

/**
 * @summary 获取视频生成任务结果
 *
 * @param request GetVideoCreationTaskResultRequest
 * @return GetVideoCreationTaskResultResponse
 */
GetVideoCreationTaskResultResponse Client::getVideoCreationTaskResult(const string &workspaceId, const GetVideoCreationTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetVideoCreationTaskResultHeaders headers = GetVideoCreationTaskResultHeaders();
  return getVideoCreationTaskResultWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Call a plugin and retrieve its response.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request InvokePluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokePluginResponse
 */
InvokePluginResponse Client::invokePluginWithOptions(const string &workspaceId, const InvokePluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  if (!!request.hasPluginId()) {
    body["pluginId"] = request.getPluginId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvokePlugin"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/plugin/invoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokePluginResponse>();
}

/**
 * @summary Call a plugin and retrieve its response.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin services.
 * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request InvokePluginRequest
 * @return InvokePluginResponse
 */
InvokePluginResponse Client::invokePlugin(const string &workspaceId, const InvokePluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return invokePluginWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Preview documents. Retrieve document download links, types, and titles. Use this operation to preview documents.
 *
 * @description **Prerequisites**
 * - You must activate Alibaba Cloud Model Studio and Tongyi Gold services.
 * - Obtain the workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request PreviewDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewDocumentResponse
 */
PreviewDocumentResponse Client::previewDocumentWithOptions(const string &workspaceId, const PreviewDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocumentId()) {
    query["documentId"] = request.getDocumentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreviewDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/preview")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewDocumentResponse>();
}

/**
 * @summary Preview documents. Retrieve document download links, types, and titles. Use this operation to preview documents.
 *
 * @description **Prerequisites**
 * - You must activate Alibaba Cloud Model Studio and Tongyi Gold services.
 * - Obtain the workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request PreviewDocumentRequest
 * @return PreviewDocumentResponse
 */
PreviewDocumentResponse Client::previewDocument(const string &workspaceId, const PreviewDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return previewDocumentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 查询兑换记录
 *
 * @param request QueryApiKeysRequest
 * @param headers QueryApiKeysHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryApiKeysResponse
 */
QueryApiKeysResponse Client::queryApiKeysWithOptions(const string &workspaceId, const string &tenantId, const QueryApiKeysRequest &request, const QueryApiKeysHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalUserId()) {
    query["externalUserId"] = request.getExternalUserId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXLoadTest()) {
    realHeaders["X-Load-Test"] = json(headers.getXLoadTest()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryApiKeys"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(tenantId) , "/apikeys")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryApiKeysResponse>();
}

/**
 * @summary 查询兑换记录
 *
 * @param request QueryApiKeysRequest
 * @return QueryApiKeysResponse
 */
QueryApiKeysResponse Client::queryApiKeys(const string &workspaceId, const string &tenantId, const QueryApiKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryApiKeysHeaders headers = QueryApiKeysHeaders();
  return queryApiKeysWithOptions(workspaceId, tenantId, request, headers, runtime);
}

/**
 * @summary 查询兑换记录
 *
 * @param request QueryRedemptionRecordsRequest
 * @param headers QueryRedemptionRecordsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRedemptionRecordsResponse
 */
QueryRedemptionRecordsResponse Client::queryRedemptionRecordsWithOptions(const string &workspaceId, const string &tenantId, const QueryRedemptionRecordsRequest &request, const QueryRedemptionRecordsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalUserId()) {
    query["externalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRedemptionOrderNo()) {
    query["redemptionOrderNo"] = request.getRedemptionOrderNo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXLoadTest()) {
    realHeaders["X-Load-Test"] = json(headers.getXLoadTest()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRedemptionRecords"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(tenantId) , "/redemption-records")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRedemptionRecordsResponse>();
}

/**
 * @summary 查询兑换记录
 *
 * @param request QueryRedemptionRecordsRequest
 * @return QueryRedemptionRecordsResponse
 */
QueryRedemptionRecordsResponse Client::queryRedemptionRecords(const string &workspaceId, const string &tenantId, const QueryRedemptionRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryRedemptionRecordsHeaders headers = QueryRedemptionRecordsHeaders();
  return queryRedemptionRecordsWithOptions(workspaceId, tenantId, request, headers, runtime);
}

/**
 * @summary Reindexing reprocesses the specified document by parsing it, splitting it into chunks, and building a new index.
 *
 * @description Before you use this operation, review the billing method and pricing for Tongyi Dianjin.
 * **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - You have obtained a workspace ID: Retrieve the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request ReIndexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReIndexResponse
 */
ReIndexResponse Client::reIndexWithOptions(const string &workspaceId, const ReIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocumentId()) {
    query["documentId"] = request.getDocumentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReIndex"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/reIndex")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReIndexResponse>();
}

/**
 * @summary Reindexing reprocesses the specified document by parsing it, splitting it into chunks, and building a new index.
 *
 * @description Before you use this operation, review the billing method and pricing for Tongyi Dianjin.
 * **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - You have obtained a workspace ID: Retrieve the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request ReIndexRequest
 * @return ReIndexResponse
 */
ReIndexResponse Client::reIndex(const string &workspaceId, const ReIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reIndexWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Starts a real-time session. After you create a session by calling the CreateDialog API, use this API to conduct the real-time interaction.
 *
 * @description Before using this API, make sure you understand the billing methods and pricing of the Tongyi Gold service.
 * Prerequisites
 * Alibaba Cloud Model Studio and the Tongyi Gold service are activated.
 * Obtain a workspaceId. For more information, see [Get an app ID and workspace](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RealTimeDialogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RealTimeDialogResponse
 */
FutureGenerator<RealTimeDialogResponse> Client::realTimeDialogWithSSE(const string &workspaceId, const RealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysis()) {
    body["analysis"] = request.getAnalysis();
  }

  if (!!request.hasBizType()) {
    body["bizType"] = request.getBizType();
  }

  if (!!request.hasConversationModel()) {
    body["conversationModel"] = request.getConversationModel();
  }

  if (!!request.hasDialogMemoryTurns()) {
    body["dialogMemoryTurns"] = request.getDialogMemoryTurns();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.getMetaData();
  }

  if (!!request.hasOpType()) {
    body["opType"] = request.getOpType();
  }

  if (!!request.hasRecommend()) {
    body["recommend"] = request.getRecommend();
  }

  if (!!request.hasScriptContentPlayed()) {
    body["scriptContentPlayed"] = request.getScriptContentPlayed();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasUserVad()) {
    body["userVad"] = request.getUserVad();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RealTimeDialog"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/realtime/dialog/chat")},
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
      })).get<RealTimeDialogResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Starts a real-time session. After you create a session by calling the CreateDialog API, use this API to conduct the real-time interaction.
 *
 * @description Before using this API, make sure you understand the billing methods and pricing of the Tongyi Gold service.
 * Prerequisites
 * Alibaba Cloud Model Studio and the Tongyi Gold service are activated.
 * Obtain a workspaceId. For more information, see [Get an app ID and workspace](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RealTimeDialogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RealTimeDialogResponse
 */
RealTimeDialogResponse Client::realTimeDialogWithOptions(const string &workspaceId, const RealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysis()) {
    body["analysis"] = request.getAnalysis();
  }

  if (!!request.hasBizType()) {
    body["bizType"] = request.getBizType();
  }

  if (!!request.hasConversationModel()) {
    body["conversationModel"] = request.getConversationModel();
  }

  if (!!request.hasDialogMemoryTurns()) {
    body["dialogMemoryTurns"] = request.getDialogMemoryTurns();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.getMetaData();
  }

  if (!!request.hasOpType()) {
    body["opType"] = request.getOpType();
  }

  if (!!request.hasRecommend()) {
    body["recommend"] = request.getRecommend();
  }

  if (!!request.hasScriptContentPlayed()) {
    body["scriptContentPlayed"] = request.getScriptContentPlayed();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasUserVad()) {
    body["userVad"] = request.getUserVad();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RealTimeDialog"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/realtime/dialog/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RealTimeDialogResponse>();
}

/**
 * @summary Starts a real-time session. After you create a session by calling the CreateDialog API, use this API to conduct the real-time interaction.
 *
 * @description Before using this API, make sure you understand the billing methods and pricing of the Tongyi Gold service.
 * Prerequisites
 * Alibaba Cloud Model Studio and the Tongyi Gold service are activated.
 * Obtain a workspaceId. For more information, see [Get an app ID and workspace](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RealTimeDialogRequest
 * @return RealTimeDialogResponse
 */
RealTimeDialogResponse Client::realTimeDialog(const string &workspaceId, const RealTimeDialogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return realTimeDialogWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Provides real-time dialog assistance after a session is created using CreateDialog. Note: This operation returns multiple intents, tags, and SOP flows. Unlike real-time sessions, it does not support streaming responses.
 *
 * @description Before you use this API, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/model-studio/tongyi-dianjin-overview?spm=a2c4g.11186623.help-menu-2400256.d_1_6_6_0.15e77499sSMTGb) of Alibaba Cloud Model Studio DianJin.
 * Prerequisites
 * Activate the Alibaba Cloud Model Studio and Model Studio DianJin services.
 * Obtain the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8) to use as your workspaceId.
 *
 * @param request RealtimeDialogAssistRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RealtimeDialogAssistResponse
 */
RealtimeDialogAssistResponse Client::realtimeDialogAssistWithOptions(const string &workspaceId, const RealtimeDialogAssistRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysis()) {
    body["analysis"] = request.getAnalysis();
  }

  if (!!request.hasBizType()) {
    body["bizType"] = request.getBizType();
  }

  if (!!request.hasConversationModel()) {
    body["conversationModel"] = request.getConversationModel();
  }

  if (!!request.hasDialogMemoryTurns()) {
    body["dialogMemoryTurns"] = request.getDialogMemoryTurns();
  }

  if (!!request.hasHangUpDialog()) {
    body["hangUpDialog"] = request.getHangUpDialog();
  }

  if (!!request.hasMetaData()) {
    body["metaData"] = request.getMetaData();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasScriptContentPlayed()) {
    body["scriptContentPlayed"] = request.getScriptContentPlayed();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasUserVad()) {
    body["userVad"] = request.getUserVad();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RealtimeDialogAssist"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/realtime/dialog/assist")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RealtimeDialogAssistResponse>();
}

/**
 * @summary Provides real-time dialog assistance after a session is created using CreateDialog. Note: This operation returns multiple intents, tags, and SOP flows. Unlike real-time sessions, it does not support streaming responses.
 *
 * @description Before you use this API, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/model-studio/tongyi-dianjin-overview?spm=a2c4g.11186623.help-menu-2400256.d_1_6_6_0.15e77499sSMTGb) of Alibaba Cloud Model Studio DianJin.
 * Prerequisites
 * Activate the Alibaba Cloud Model Studio and Model Studio DianJin services.
 * Obtain the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8) to use as your workspaceId.
 *
 * @param request RealtimeDialogAssistRequest
 * @return RealtimeDialogAssistResponse
 */
RealtimeDialogAssistResponse Client::realtimeDialogAssist(const string &workspaceId, const RealtimeDialogAssistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return realtimeDialogAssistWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Rebuilds an existing task. You cannot rebuild tasks that are queued or currently executing.
 *
 * @description Before you use this API, review the billing methods and pricing for the Dianjin service.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and the Dianjin service.
 * You have obtained a workspace ID. For more information, see [Get an app ID and workspace](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RebuildTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebuildTaskResponse
 */
RebuildTaskResponse Client::rebuildTaskWithOptions(const string &workspaceId, const RebuildTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskIds()) {
    body["taskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RebuildTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/task/rebuild")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebuildTaskResponse>();
}

/**
 * @summary Rebuilds an existing task. You cannot rebuild tasks that are queued or currently executing.
 *
 * @description Before you use this API, review the billing methods and pricing for the Dianjin service.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and the Dianjin service.
 * You have obtained a workspace ID. For more information, see [Get an app ID and workspace](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RebuildTaskRequest
 * @return RebuildTaskResponse
 */
RebuildTaskResponse Client::rebuildTask(const string &workspaceId, const RebuildTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rebuildTaskWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary You can retrieve document chunks from a document library using text. You can specify the number of chunks to retrieve, filter them by metadata conditions, and choose whether to complete the document chunks.
 *
 * @description **Prerequisites**
 * - Activate the Alibaba Cloud Model Studio service and the Tongyi Dianjin service.
 * - Obtain the workspace ID. Obtain the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%93%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RecallDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecallDocumentResponse
 */
RecallDocumentResponse Client::recallDocumentWithOptions(const string &workspaceId, const RecallDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFilters()) {
    body["filters"] = request.getFilters();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasRearrangement()) {
    body["rearrangement"] = request.getRearrangement();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.getTopK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RecallDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/recallDocument")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecallDocumentResponse>();
}

/**
 * @summary You can retrieve document chunks from a document library using text. You can specify the number of chunks to retrieve, filter them by metadata conditions, and choose whether to complete the document chunks.
 *
 * @description **Prerequisites**
 * - Activate the Alibaba Cloud Model Studio service and the Tongyi Dianjin service.
 * - Obtain the workspace ID. Obtain the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%93%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RecallDocumentRequest
 * @return RecallDocumentResponse
 */
RecallDocumentResponse Client::recallDocument(const string &workspaceId, const RecallDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return recallDocumentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Detects intents. This operation supports global and hierarchical intent detection, attitude detection, and enterprise detection.
 *
 * @description Before you use this operation, review the billing methods and pricing of Alibaba Cloud Tongyi Dianjin.
 * **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - You have obtained a [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RecognizeIntentionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeIntentionResponse
 */
RecognizeIntentionResponse Client::recognizeIntentionWithOptions(const string &workspaceId, const RecognizeIntentionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnalysis()) {
    body["analysis"] = request.getAnalysis();
  }

  if (!!request.hasBizType()) {
    body["bizType"] = request.getBizType();
  }

  if (!!request.hasConversation()) {
    body["conversation"] = request.getConversation();
  }

  if (!!request.hasGlobalIntentionList()) {
    body["globalIntentionList"] = request.getGlobalIntentionList();
  }

  if (!!request.hasHierarchicalIntentionList()) {
    body["hierarchicalIntentionList"] = request.getHierarchicalIntentionList();
  }

  if (!!request.hasIntentionDomainCode()) {
    body["intentionDomainCode"] = request.getIntentionDomainCode();
  }

  if (!!request.hasIntentionList()) {
    body["intentionList"] = request.getIntentionList();
  }

  if (!!request.hasOpType()) {
    body["opType"] = request.getOpType();
  }

  if (!!request.hasRecommend()) {
    body["recommend"] = request.getRecommend();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RecognizeIntention"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/recog/intent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeIntentionResponse>();
}

/**
 * @summary Detects intents. This operation supports global and hierarchical intent detection, attitude detection, and enterprise detection.
 *
 * @description Before you use this operation, review the billing methods and pricing of Alibaba Cloud Tongyi Dianjin.
 * **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - You have obtained a [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RecognizeIntentionRequest
 * @return RecognizeIntentionResponse
 */
RecognizeIntentionResponse Client::recognizeIntention(const string &workspaceId, const RecognizeIntentionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return recognizeIntentionWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary 重试任务
 *
 * @param request RetryReportTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryReportTaskResponse
 */
RetryReportTaskResponse Client::retryReportTaskWithOptions(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const RetryReportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryReportTask"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/firefly/v1/" , Darabonba::Encode::Encoder::percentEncode(sceneCode) , "/" , Darabonba::Encode::Encoder::percentEncode(fundProduct) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(outRequestNo) , "/retry")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryReportTaskResponse>();
}

/**
 * @summary 重试任务
 *
 * @param request RetryReportTaskRequest
 * @return RetryReportTaskResponse
 */
RetryReportTaskResponse Client::retryReportTask(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const RetryReportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryReportTaskWithOptions(workspaceId, sceneCode, fundProduct, outRequestNo, request, headers, runtime);
}

/**
 * @summary Run an agent. This API supports both streaming and non-streaming responses.
 *
 * @description Before you use this API, review the billing model and pricing for Tongyi Dianjin.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * Obtain a workspace ID: [Obtain your workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RunAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunAgentResponse
 */
FutureGenerator<RunAgentResponse> Client::runAgentWithSSE(const string &workspaceId, const RunAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBotId()) {
    body["botId"] = request.getBotId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.getThreadId();
  }

  if (!!request.hasUseDraft()) {
    body["useDraft"] = request.getUseDraft();
  }

  if (!!request.hasUserContent()) {
    body["userContent"] = request.getUserContent();
  }

  if (!!request.hasUserInputs()) {
    body["userInputs"] = request.getUserInputs();
  }

  if (!!request.hasVersionId()) {
    body["versionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunAgent"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/bot/thread/run")},
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
      })).get<RunAgentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Run an agent. This API supports both streaming and non-streaming responses.
 *
 * @description Before you use this API, review the billing model and pricing for Tongyi Dianjin.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * Obtain a workspace ID: [Obtain your workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RunAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunAgentResponse
 */
RunAgentResponse Client::runAgentWithOptions(const string &workspaceId, const RunAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBotId()) {
    body["botId"] = request.getBotId();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.getThreadId();
  }

  if (!!request.hasUseDraft()) {
    body["useDraft"] = request.getUseDraft();
  }

  if (!!request.hasUserContent()) {
    body["userContent"] = request.getUserContent();
  }

  if (!!request.hasUserInputs()) {
    body["userInputs"] = request.getUserInputs();
  }

  if (!!request.hasVersionId()) {
    body["versionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunAgent"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/bot/thread/run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunAgentResponse>();
}

/**
 * @summary Run an agent. This API supports both streaming and non-streaming responses.
 *
 * @description Before you use this API, review the billing model and pricing for Tongyi Dianjin.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * Obtain a workspace ID: [Obtain your workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RunAgentRequest
 * @return RunAgentResponse
 */
RunAgentResponse Client::runAgent(const string &workspaceId, const RunAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runAgentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Generates chat responses. You can select a model for the conversation and choose streaming or non-streaming output.
 *
 * @description Before you use this API, review the billing method and pricing for Alibaba Cloud Tongyi Dianjin.
 * **Prerequisites**
 * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain your workspace ID: retrieve your [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RunChatResultGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunChatResultGenerationResponse
 */
FutureGenerator<RunChatResultGenerationResponse> Client::runChatResultGenerationWithSSE(const string &workspaceId, const RunChatResultGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInferenceParameters()) {
    body["inferenceParameters"] = request.getInferenceParameters();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTools()) {
    body["tools"] = request.getTools();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunChatResultGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/run/chat/generation")},
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
      })).get<RunChatResultGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Generates chat responses. You can select a model for the conversation and choose streaming or non-streaming output.
 *
 * @description Before you use this API, review the billing method and pricing for Alibaba Cloud Tongyi Dianjin.
 * **Prerequisites**
 * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain your workspace ID: retrieve your [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RunChatResultGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunChatResultGenerationResponse
 */
RunChatResultGenerationResponse Client::runChatResultGenerationWithOptions(const string &workspaceId, const RunChatResultGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInferenceParameters()) {
    body["inferenceParameters"] = request.getInferenceParameters();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasTools()) {
    body["tools"] = request.getTools();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunChatResultGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/run/chat/generation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunChatResultGenerationResponse>();
}

/**
 * @summary Generates chat responses. You can select a model for the conversation and choose streaming or non-streaming output.
 *
 * @description Before you use this API, review the billing method and pricing for Alibaba Cloud Tongyi Dianjin.
 * **Prerequisites**
 * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain your workspace ID: retrieve your [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RunChatResultGenerationRequest
 * @return RunChatResultGenerationResponse
 */
RunChatResultGenerationResponse Client::runChatResultGeneration(const string &workspaceId, const RunChatResultGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runChatResultGenerationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieves session analysis results through a streaming API.
 *
 * @description Before you use this API, make sure that you understand the billing methods and pricing for Tongyi Gold.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Gold.
 * You must have a workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RunDialogAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDialogAnalysisResponse
 */
FutureGenerator<RunDialogAnalysisResponse> Client::runDialogAnalysisWithSSE(const string &workspaceId, const RunDialogAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunDialogAnalysis"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/stream/analysis")},
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
      })).get<RunDialogAnalysisResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Retrieves session analysis results through a streaming API.
 *
 * @description Before you use this API, make sure that you understand the billing methods and pricing for Tongyi Gold.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Gold.
 * You must have a workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RunDialogAnalysisRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunDialogAnalysisResponse
 */
RunDialogAnalysisResponse Client::runDialogAnalysisWithOptions(const string &workspaceId, const RunDialogAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunDialogAnalysis"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/dialog/stream/analysis")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunDialogAnalysisResponse>();
}

/**
 * @summary Retrieves session analysis results through a streaming API.
 *
 * @description Before you use this API, make sure that you understand the billing methods and pricing for Tongyi Gold.
 * Prerequisites
 * You have activated Alibaba Cloud Model Studio and Tongyi Gold.
 * You must have a workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request RunDialogAnalysisRequest
 * @return RunDialogAnalysisResponse
 */
RunDialogAnalysisResponse Client::runDialogAnalysis(const string &workspaceId, const RunDialogAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runDialogAnalysisWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Generates a chat response from a document library. You can ask questions in natural language, and the system retrieves relevant information to provide a summarized answer.
 *
 * @param request RunLibraryChatGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunLibraryChatGenerationResponse
 */
FutureGenerator<RunLibraryChatGenerationResponse> Client::runLibraryChatGenerationWithSSE(const string &workspaceId, const RunLibraryChatGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocIdList()) {
    body["docIdList"] = request.getDocIdList();
  }

  if (!!request.hasEnableFollowUp()) {
    body["enableFollowUp"] = request.getEnableFollowUp();
  }

  if (!!request.hasEnableMultiQuery()) {
    body["enableMultiQuery"] = request.getEnableMultiQuery();
  }

  if (!!request.hasEnableOpenQa()) {
    body["enableOpenQa"] = request.getEnableOpenQa();
  }

  if (!!request.hasFollowUpLlm()) {
    body["followUpLlm"] = request.getFollowUpLlm();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasLlmType()) {
    body["llmType"] = request.getLlmType();
  }

  if (!!request.hasMultiQueryLlm()) {
    body["multiQueryLlm"] = request.getMultiQueryLlm();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasQueryCriteria()) {
    body["queryCriteria"] = request.getQueryCriteria();
  }

  if (!!request.hasRerankType()) {
    body["rerankType"] = request.getRerankType();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasSubQueryList()) {
    body["subQueryList"] = request.getSubQueryList();
  }

  if (!!request.hasTextSearchParameter()) {
    body["textSearchParameter"] = request.getTextSearchParameter();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.getTopK();
  }

  if (!!request.hasVectorSearchParameter()) {
    body["vectorSearchParameter"] = request.getVectorSearchParameter();
  }

  if (!!request.hasWithDocumentReference()) {
    body["withDocumentReference"] = request.getWithDocumentReference();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunLibraryChatGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/run/library/chat/generation")},
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
      })).get<RunLibraryChatGenerationResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Generates a chat response from a document library. You can ask questions in natural language, and the system retrieves relevant information to provide a summarized answer.
 *
 * @param request RunLibraryChatGenerationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunLibraryChatGenerationResponse
 */
RunLibraryChatGenerationResponse Client::runLibraryChatGenerationWithOptions(const string &workspaceId, const RunLibraryChatGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocIdList()) {
    body["docIdList"] = request.getDocIdList();
  }

  if (!!request.hasEnableFollowUp()) {
    body["enableFollowUp"] = request.getEnableFollowUp();
  }

  if (!!request.hasEnableMultiQuery()) {
    body["enableMultiQuery"] = request.getEnableMultiQuery();
  }

  if (!!request.hasEnableOpenQa()) {
    body["enableOpenQa"] = request.getEnableOpenQa();
  }

  if (!!request.hasFollowUpLlm()) {
    body["followUpLlm"] = request.getFollowUpLlm();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasLlmType()) {
    body["llmType"] = request.getLlmType();
  }

  if (!!request.hasMultiQueryLlm()) {
    body["multiQueryLlm"] = request.getMultiQueryLlm();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasQueryCriteria()) {
    body["queryCriteria"] = request.getQueryCriteria();
  }

  if (!!request.hasRerankType()) {
    body["rerankType"] = request.getRerankType();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasSubQueryList()) {
    body["subQueryList"] = request.getSubQueryList();
  }

  if (!!request.hasTextSearchParameter()) {
    body["textSearchParameter"] = request.getTextSearchParameter();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.getTopK();
  }

  if (!!request.hasVectorSearchParameter()) {
    body["vectorSearchParameter"] = request.getVectorSearchParameter();
  }

  if (!!request.hasWithDocumentReference()) {
    body["withDocumentReference"] = request.getWithDocumentReference();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunLibraryChatGeneration"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/run/library/chat/generation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunLibraryChatGenerationResponse>();
}

/**
 * @summary Generates a chat response from a document library. You can ask questions in natural language, and the system retrieves relevant information to provide a summarized answer.
 *
 * @param request RunLibraryChatGenerationRequest
 * @return RunLibraryChatGenerationResponse
 */
RunLibraryChatGenerationResponse Client::runLibraryChatGeneration(const string &workspaceId, const RunLibraryChatGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return runLibraryChatGenerationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Submit a list of questions and retrieve results by calling the `GetChatQuestionResp` API.
 *
 * @description Review the pricing and billing details for the Tongyi Dianjin product before you use this API.
 * Prerequisites
 * Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
 * Obtain the \\`workspaceId\\`: Retrieve the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request SubmitChatQuestionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitChatQuestionResponse
 */
SubmitChatQuestionResponse Client::submitChatQuestionWithOptions(const string &workspaceId, const SubmitChatQuestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGmtService()) {
    body["gmtService"] = request.getGmtService();
  }

  if (!!request.hasLiveScriptContent()) {
    body["liveScriptContent"] = request.getLiveScriptContent();
  }

  if (!!request.hasOpenSmallTalk()) {
    body["openSmallTalk"] = request.getOpenSmallTalk();
  }

  if (!!request.hasQuestionList()) {
    body["questionList"] = request.getQuestionList();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitChatQuestion"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/chat/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitChatQuestionResponse>();
}

/**
 * @summary Submit a list of questions and retrieve results by calling the `GetChatQuestionResp` API.
 *
 * @description Review the pricing and billing details for the Tongyi Dianjin product before you use this API.
 * Prerequisites
 * Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
 * Obtain the \\`workspaceId\\`: Retrieve the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request SubmitChatQuestionRequest
 * @return SubmitChatQuestionResponse
 */
SubmitChatQuestionResponse Client::submitChatQuestion(const string &workspaceId, const SubmitChatQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitChatQuestionWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Updates the title, metadata, and other information of a document.
 *
 * @description **Prerequisites**
 * - Activate the Alibaba Cloud Model Studio service and the Tongyi Gold service.
 * - Obtain your workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request UpdateDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDocumentResponse
 */
UpdateDocumentResponse Client::updateDocumentWithOptions(const string &workspaceId, const UpdateDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocId()) {
    body["docId"] = request.getDocId();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasMeta()) {
    body["meta"] = request.getMeta();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/updateDocument")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDocumentResponse>();
}

/**
 * @summary Updates the title, metadata, and other information of a document.
 *
 * @description **Prerequisites**
 * - Activate the Alibaba Cloud Model Studio service and the Tongyi Gold service.
 * - Obtain your workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request UpdateDocumentRequest
 * @return UpdateDocumentResponse
 */
UpdateDocumentResponse Client::updateDocument(const string &workspaceId, const UpdateDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDocumentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Update the text content of a document chunk in a document.
 *
 * @description Before using this API, ensure you understand the billing methods and pricing of the Tongyi Gold product.
 * Prerequisites
 * You must activate Alibaba Cloud Model Studio and Tongyi Gold services.
 * Obtain the workspaceId. For more information, see the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request UpdateDocumentChunkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDocumentChunkResponse
 */
UpdateDocumentChunkResponse Client::updateDocumentChunkWithOptions(const string &workspaceId, const UpdateDocumentChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChunks()) {
    body["chunks"] = request.getChunks();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDocumentChunk"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/updateDocumentChunk")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDocumentChunkResponse>();
}

/**
 * @summary Update the text content of a document chunk in a document.
 *
 * @description Before using this API, ensure you understand the billing methods and pricing of the Tongyi Gold product.
 * Prerequisites
 * You must activate Alibaba Cloud Model Studio and Tongyi Gold services.
 * Obtain the workspaceId. For more information, see the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request UpdateDocumentChunkRequest
 * @return UpdateDocumentChunkResponse
 */
UpdateDocumentChunkResponse Client::updateDocumentChunk(const string &workspaceId, const UpdateDocumentChunkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDocumentChunkWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Updates a document library. You can update the library name, description, and index configuration.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request UpdateLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLibraryResponse
 */
UpdateLibraryResponse Client::updateLibraryWithOptions(const string &workspaceId, const UpdateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasIndexSetting()) {
    body["indexSetting"] = request.getIndexSetting();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasLibraryName()) {
    body["libraryName"] = request.getLibraryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLibrary"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/update")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLibraryResponse>();
}

/**
 * @summary Updates a document library. You can update the library name, description, and index configuration.
 *
 * @description **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request UpdateLibraryRequest
 * @return UpdateLibraryResponse
 */
UpdateLibraryResponse Client::updateLibrary(const string &workspaceId, const UpdateLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLibraryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Updates a Q&A library. After the update, use the GenDocQaResult API to parse the Q&A pairs.
 *
 * @param request UpdateQaLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQaLibraryResponse
 */
UpdateQaLibraryResponse Client::updateQaLibraryWithOptions(const string &workspaceId, const UpdateQaLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasParseQaResults()) {
    body["parseQaResults"] = request.getParseQaResults();
  }

  if (!!request.hasQaLibraryId()) {
    body["qaLibraryId"] = request.getQaLibraryId();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateQaLibrary"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/virtualHuman/qa/upload")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQaLibraryResponse>();
}

/**
 * @summary Updates a Q&A library. After the update, use the GenDocQaResult API to parse the Q&A pairs.
 *
 * @param request UpdateQaLibraryRequest
 * @return UpdateQaLibraryResponse
 */
UpdateQaLibraryResponse Client::updateQaLibrary(const string &workspaceId, const UpdateQaLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateQaLibraryWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Upload a document to a document library. The system parses the document, splits it into chunks, and builds an index.
 *
 * @description Before you use this operation, review the Tongyi Dianjin pricing details.
 * **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - You have obtained a workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request UploadDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDocumentResponse
 */
UploadDocumentResponse Client::uploadDocumentWithOptions(const string &workspaceId, const UploadDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasFileName()) {
    body["fileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    body["fileUrl"] = request.getFileUrl();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadDocument"},
    {"version" , "2024-06-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/api/library/document/upload")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDocumentResponse>();
}

/**
 * @summary Upload a document to a document library. The system parses the document, splits it into chunks, and builds an index.
 *
 * @description Before you use this operation, review the Tongyi Dianjin pricing details.
 * **Prerequisites**
 * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
 * - You have obtained a workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
 *
 * @param request UploadDocumentRequest
 * @return UploadDocumentResponse
 */
UploadDocumentResponse Client::uploadDocument(const string &workspaceId, const UploadDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadDocumentWithOptions(workspaceId, request, headers, runtime);
}

UploadDocumentResponse Client::uploadDocumentAdvance(const string &workspaceId, const UploadDocumentAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "DianJin"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  UploadDocumentRequest uploadDocumentReq = UploadDocumentRequest();
  Utils::Utils::convert(request, uploadDocumentReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType)},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    uploadDocumentReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UploadDocumentResponse uploadDocumentResp = uploadDocumentWithOptions(workspaceId, uploadDocumentReq, headers, runtime);
  return uploadDocumentResp;
}
} // namespace AlibabaCloud
} // namespace DianJin20240628