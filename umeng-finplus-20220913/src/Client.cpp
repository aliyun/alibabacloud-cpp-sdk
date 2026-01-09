#include <darabonba/Core.hpp>
#include <alibabacloud/UmengFinplus20220913.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::UmengFinplus20220913::Models;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{

AlibabaCloud::UmengFinplus20220913::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("umeng-finplus", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 提交数据集任务，校验数据集
 *
 * @param request BuildStsAKRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BuildStsAKResponse
 */
BuildStsAKResponse Client::buildStsAKWithOptions(const BuildStsAKRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "BuildStsAK"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/buildStsAK")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BuildStsAKResponse>();
}

/**
 * @summary 提交数据集任务，校验数据集
 *
 * @param request BuildStsAKRequest
 * @return BuildStsAKResponse
 */
BuildStsAKResponse Client::buildStsAK(const BuildStsAKRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return buildStsAKWithOptions(request, headers, runtime);
}

/**
 * @summary 提交数据集任务，校验数据集
 *
 * @param request BuildStsAK2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BuildStsAK2Response
 */
BuildStsAK2Response Client::buildStsAK2WithOptions(const BuildStsAK2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  if (!!request.hasDataSetId()) {
    body["dataSetId"] = request.getDataSetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BuildStsAK2"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/buildStsAK2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BuildStsAK2Response>();
}

/**
 * @summary 提交数据集任务，校验数据集
 *
 * @param request BuildStsAK2Request
 * @return BuildStsAK2Response
 */
BuildStsAK2Response Client::buildStsAK2(const BuildStsAK2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return buildStsAK2WithOptions(request, headers, runtime);
}

/**
 * @summary 取消批量计算任务
 *
 * @param request CancelTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTaskWithOptions(const CancelTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "CancelTask"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/cancelTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelTaskResponse>();
}

/**
 * @summary 取消批量计算任务
 *
 * @param request CancelTaskRequest
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const CancelTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 取消批量计算任务
 *
 * @param request CancelTask2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTask2Response
 */
CancelTask2Response Client::cancelTask2WithOptions(const CancelTask2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBcId()) {
    body["bcId"] = request.getBcId();
  }

  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CancelTask2"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/cancelTask2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelTask2Response>();
}

/**
 * @summary 取消批量计算任务
 *
 * @param request CancelTask2Request
 * @return CancelTask2Response
 */
CancelTask2Response Client::cancelTask2(const CancelTask2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelTask2WithOptions(request, headers, runtime);
}

/**
 * @summary 创建批量计算任务
 *
 * @param request CreateComputeTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComputeTaskResponse
 */
CreateComputeTaskResponse Client::createComputeTaskWithOptions(const CreateComputeTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasDataSetIds()) {
    body["dataSetIds"] = request.getDataSetIds();
  }

  if (!!request.hasMorseInfoList()) {
    body["morseInfoList"] = request.getMorseInfoList();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasRemarks()) {
    body["remarks"] = request.getRemarks();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateComputeTask"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/createComputeTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComputeTaskResponse>();
}

/**
 * @summary 创建批量计算任务
 *
 * @param request CreateComputeTaskRequest
 * @return CreateComputeTaskResponse
 */
CreateComputeTaskResponse Client::createComputeTask(const CreateComputeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createComputeTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 创建批量计算任务
 *
 * @param request CreateComputeTask2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComputeTask2Response
 */
CreateComputeTask2Response Client::createComputeTask2WithOptions(const CreateComputeTask2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  if (!!request.hasDataSetIds()) {
    body["dataSetIds"] = request.getDataSetIds();
  }

  if (!!request.hasMorseInfoList()) {
    body["morseInfoList"] = request.getMorseInfoList();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasRemarks()) {
    body["remarks"] = request.getRemarks();
  }

  if (!!request.hasTaskSource()) {
    body["taskSource"] = request.getTaskSource();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateComputeTask2"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/createComputeTask2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComputeTask2Response>();
}

/**
 * @summary 创建批量计算任务
 *
 * @param request CreateComputeTask2Request
 * @return CreateComputeTask2Response
 */
CreateComputeTask2Response Client::createComputeTask2(const CreateComputeTask2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createComputeTask2WithOptions(request, headers, runtime);
}

/**
 * @summary 创建数据集
 *
 * @param request CreateDataSetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSetResponse
 */
CreateDataSetResponse Client::createDataSetWithOptions(const CreateDataSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataSet"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/createDataSet")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataSetResponse>();
}

/**
 * @summary 创建数据集
 *
 * @param request CreateDataSetRequest
 * @return CreateDataSetResponse
 */
CreateDataSetResponse Client::createDataSet(const CreateDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDataSetWithOptions(request, headers, runtime);
}

/**
 * @summary 创建数据集
 *
 * @param request CreateDataSet2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSet2Response
 */
CreateDataSet2Response Client::createDataSet2WithOptions(const CreateDataSet2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataSet2"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/createDataSet2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataSet2Response>();
}

/**
 * @summary 创建数据集
 *
 * @param request CreateDataSet2Request
 * @return CreateDataSet2Response
 */
CreateDataSet2Response Client::createDataSet2(const CreateDataSet2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDataSet2WithOptions(request, headers, runtime);
}

/**
 * @summary 创建友准达实例任务
 *
 * @param request CreateInstanceTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceTaskResponse
 */
CreateInstanceTaskResponse Client::createInstanceTaskWithOptions(const CreateInstanceTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasCalbackUrl()) {
    body["CalbackUrl"] = request.getCalbackUrl();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasDatasetIds()) {
    body["DatasetIds"] = request.getDatasetIds();
  }

  if (!!request.hasMonitorType()) {
    body["MonitorType"] = request.getMonitorType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOutputConfig()) {
    body["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasScoreStrategyConfig()) {
    body["ScoreStrategyConfig"] = request.getScoreStrategyConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceTask"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/CreateInstanceTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceTaskResponse>();
}

/**
 * @summary 创建友准达实例任务
 *
 * @param request CreateInstanceTaskRequest
 * @return CreateInstanceTaskResponse
 */
CreateInstanceTaskResponse Client::createInstanceTask(const CreateInstanceTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 友准达-创建知识库
 *
 * @param tmpReq CreateKnowLedgeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowLedgeResponse
 */
CreateKnowLedgeResponse Client::createKnowLedgeWithOptions(const CreateKnowLedgeRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateKnowLedgeShrinkRequest request = CreateKnowLedgeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowLedge"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yzd/createKnowLedge")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowLedgeResponse>();
}

/**
 * @summary 友准达-创建知识库
 *
 * @param request CreateKnowLedgeRequest
 * @return CreateKnowLedgeResponse
 */
CreateKnowLedgeResponse Client::createKnowLedge(const CreateKnowLedgeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowLedgeWithOptions(request, headers, runtime);
}

/**
 * @summary 加密调用OpenAPI
 *
 * @param request EncryptInvokeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EncryptInvokeResponse
 */
EncryptInvokeResponse Client::encryptInvokeWithOptions(const EncryptInvokeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasEncryptKey()) {
    body["encryptKey"] = request.getEncryptKey();
  }

  if (!!request.hasMethodName()) {
    body["methodName"] = request.getMethodName();
  }

  if (!!request.hasSign()) {
    body["sign"] = request.getSign();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EncryptInvoke"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/encryptInvoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EncryptInvokeResponse>();
}

/**
 * @summary 加密调用OpenAPI
 *
 * @param request EncryptInvokeRequest
 * @return EncryptInvokeResponse
 */
EncryptInvokeResponse Client::encryptInvoke(const EncryptInvokeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return encryptInvokeWithOptions(request, headers, runtime);
}

/**
 * @summary 获取人群集信息
 *
 * @param tmpReq GetCrowdDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCrowdDatasetResponse
 */
GetCrowdDatasetResponse Client::getCrowdDatasetWithOptions(const GetCrowdDatasetRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetCrowdDatasetShrinkRequest request = GetCrowdDatasetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasBodyShrink()) {
    query["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCrowdDataset"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yzd/getCrowdDataset")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCrowdDatasetResponse>();
}

/**
 * @summary 获取人群集信息
 *
 * @param request GetCrowdDatasetRequest
 * @return GetCrowdDatasetResponse
 */
GetCrowdDatasetResponse Client::getCrowdDataset(const GetCrowdDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCrowdDatasetWithOptions(request, headers, runtime);
}

/**
 * @summary  获取知识库数据数据
 *
 * @param tmpReq GetKnowledgeDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKnowledgeDataResponse
 */
GetKnowledgeDataResponse Client::getKnowledgeDataWithOptions(const GetKnowledgeDataRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetKnowledgeDataShrinkRequest request = GetKnowledgeDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasBodyShrink()) {
    query["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKnowledgeData"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yzd/getKnowledgeData")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeDataResponse>();
}

/**
 * @summary  获取知识库数据数据
 *
 * @param request GetKnowledgeDataRequest
 * @return GetKnowledgeDataResponse
 */
GetKnowledgeDataResponse Client::getKnowledgeData(const GetKnowledgeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeDataWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实例结果
 *
 * @param tmpReq GetYzdInstanceTaskResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYzdInstanceTaskResultResponse
 */
GetYzdInstanceTaskResultResponse Client::getYzdInstanceTaskResultWithOptions(const GetYzdInstanceTaskResultRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetYzdInstanceTaskResultShrinkRequest request = GetYzdInstanceTaskResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasBodyShrink()) {
    query["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYzdInstanceTaskResult"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yzd/getYzdInstanceTaskResult")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYzdInstanceTaskResultResponse>();
}

/**
 * @summary 获取实例结果
 *
 * @param request GetYzdInstanceTaskResultRequest
 * @return GetYzdInstanceTaskResultResponse
 */
GetYzdInstanceTaskResultResponse Client::getYzdInstanceTaskResult(const GetYzdInstanceTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getYzdInstanceTaskResultWithOptions(request, headers, runtime);
}

/**
 * @summary 友准达知识库获取上传OSS数据文件的TOKEN
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYzdStsAKResponse
 */
GetYzdStsAKResponse Client::getYzdStsAKWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYzdStsAK"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yzd/getYzdStsAK")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYzdStsAKResponse>();
}

/**
 * @summary 友准达知识库获取上传OSS数据文件的TOKEN
 *
 * @return GetYzdStsAKResponse
 */
GetYzdStsAKResponse Client::getYzdStsAK() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getYzdStsAKWithOptions(headers, runtime);
}

/**
 * @summary 查询单个批量任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeTaskResponse
 */
ListComputeTaskResponse Client::listComputeTaskWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComputeTask"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/listComputeTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComputeTaskResponse>();
}

/**
 * @summary 查询单个批量任务
 *
 * @return ListComputeTaskResponse
 */
ListComputeTaskResponse Client::listComputeTask() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listComputeTaskWithOptions(headers, runtime);
}

/**
 * @summary 查询单个批量任务
 *
 * @param request ListComputeTask2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeTask2Response
 */
ListComputeTask2Response Client::listComputeTask2WithOptions(const ListComputeTask2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  if (!!request.hasPageNum()) {
    body["pageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListComputeTask2"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/listComputeTask2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComputeTask2Response>();
}

/**
 * @summary 查询单个批量任务
 *
 * @param request ListComputeTask2Request
 * @return ListComputeTask2Response
 */
ListComputeTask2Response Client::listComputeTask2(const ListComputeTask2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listComputeTask2WithOptions(request, headers, runtime);
}

/**
 * @summary 查询单个数据集
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSetResponse
 */
ListDataSetResponse Client::listDataSetWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSet"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/listDataSet")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSetResponse>();
}

/**
 * @summary 查询单个数据集
 *
 * @return ListDataSetResponse
 */
ListDataSetResponse Client::listDataSet() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataSetWithOptions(headers, runtime);
}

/**
 * @summary 查询单个数据集
 *
 * @param request ListDataSet2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSet2Response
 */
ListDataSet2Response Client::listDataSet2WithOptions(const ListDataSet2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  if (!!request.hasPageNo()) {
    body["pageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataSet2"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/listDataSet2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSet2Response>();
}

/**
 * @summary 查询单个数据集
 *
 * @param request ListDataSet2Request
 * @return ListDataSet2Response
 */
ListDataSet2Response Client::listDataSet2(const ListDataSet2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataSet2WithOptions(request, headers, runtime);
}

/**
 * @summary 删除数据集
 *
 * @param request RemoveDataSetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDataSetResponse
 */
RemoveDataSetResponse Client::removeDataSetWithOptions(const RemoveDataSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "RemoveDataSet"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/removeDataSet")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDataSetResponse>();
}

/**
 * @summary 删除数据集
 *
 * @param request RemoveDataSetRequest
 * @return RemoveDataSetResponse
 */
RemoveDataSetResponse Client::removeDataSet(const RemoveDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeDataSetWithOptions(request, headers, runtime);
}

/**
 * @summary 删除数据集
 *
 * @param request RemoveDataSet2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDataSet2Response
 */
RemoveDataSet2Response Client::removeDataSet2WithOptions(const RemoveDataSet2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  if (!!request.hasDataSetId()) {
    body["dataSetId"] = request.getDataSetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveDataSet2"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/removeDataSet2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDataSet2Response>();
}

/**
 * @summary 删除数据集
 *
 * @param request RemoveDataSet2Request
 * @return RemoveDataSet2Response
 */
RemoveDataSet2Response Client::removeDataSet2(const RemoveDataSet2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeDataSet2WithOptions(request, headers, runtime);
}

/**
 * @summary 创建人群集并绑定数据集
 *
 * @param tmpReq SaveCrowdDatasetAndBindingDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveCrowdDatasetAndBindingDatasetResponse
 */
SaveCrowdDatasetAndBindingDatasetResponse Client::saveCrowdDatasetAndBindingDatasetWithOptions(const SaveCrowdDatasetAndBindingDatasetRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveCrowdDatasetAndBindingDatasetShrinkRequest request = SaveCrowdDatasetAndBindingDatasetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveCrowdDatasetAndBindingDataset"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yzd/saveCrowdDatasetAndBindingDataset")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveCrowdDatasetAndBindingDatasetResponse>();
}

/**
 * @summary 创建人群集并绑定数据集
 *
 * @param request SaveCrowdDatasetAndBindingDatasetRequest
 * @return SaveCrowdDatasetAndBindingDatasetResponse
 */
SaveCrowdDatasetAndBindingDatasetResponse Client::saveCrowdDatasetAndBindingDataset(const SaveCrowdDatasetAndBindingDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return saveCrowdDatasetAndBindingDatasetWithOptions(request, headers, runtime);
}

/**
 * @summary 查询单个批量任务
 *
 * @param request SelectComputeTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SelectComputeTaskResponse
 */
SelectComputeTaskResponse Client::selectComputeTaskWithOptions(const SelectComputeTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "SelectComputeTask"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/selectComputeTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SelectComputeTaskResponse>();
}

/**
 * @summary 查询单个批量任务
 *
 * @param request SelectComputeTaskRequest
 * @return SelectComputeTaskResponse
 */
SelectComputeTaskResponse Client::selectComputeTask(const SelectComputeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return selectComputeTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 查询单个批量任务
 *
 * @param request SelectComputeTask2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SelectComputeTask2Response
 */
SelectComputeTask2Response Client::selectComputeTask2WithOptions(const SelectComputeTask2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBcConfirm()) {
    body["bcConfirm"] = request.getBcConfirm();
  }

  if (!!request.hasBcId()) {
    body["bcId"] = request.getBcId();
  }

  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SelectComputeTask2"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/selectComputeTask2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SelectComputeTask2Response>();
}

/**
 * @summary 查询单个批量任务
 *
 * @param request SelectComputeTask2Request
 * @return SelectComputeTask2Response
 */
SelectComputeTask2Response Client::selectComputeTask2(const SelectComputeTask2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return selectComputeTask2WithOptions(request, headers, runtime);
}

/**
 * @summary 查询单个数据集
 *
 * @param request SelectDataSetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SelectDataSetResponse
 */
SelectDataSetResponse Client::selectDataSetWithOptions(const SelectDataSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "SelectDataSet"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/selectDataSet")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SelectDataSetResponse>();
}

/**
 * @summary 查询单个数据集
 *
 * @param request SelectDataSetRequest
 * @return SelectDataSetResponse
 */
SelectDataSetResponse Client::selectDataSet(const SelectDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return selectDataSetWithOptions(request, headers, runtime);
}

/**
 * @summary 查询单个数据集
 *
 * @param request SelectDataSet2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SelectDataSet2Response
 */
SelectDataSet2Response Client::selectDataSet2WithOptions(const SelectDataSet2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  if (!!request.hasDataSetId()) {
    body["dataSetId"] = request.getDataSetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SelectDataSet2"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/selectDataSet2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SelectDataSet2Response>();
}

/**
 * @summary 查询单个数据集
 *
 * @param request SelectDataSet2Request
 * @return SelectDataSet2Response
 */
SelectDataSet2Response Client::selectDataSet2(const SelectDataSet2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return selectDataSet2WithOptions(request, headers, runtime);
}

/**
 * @summary 提交数据集任务，校验数据集
 *
 * @param request SubmitDataSetTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDataSetTaskResponse
 */
SubmitDataSetTaskResponse Client::submitDataSetTaskWithOptions(const SubmitDataSetTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "SubmitDataSetTask"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/submitDataSetTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDataSetTaskResponse>();
}

/**
 * @summary 提交数据集任务，校验数据集
 *
 * @param request SubmitDataSetTaskRequest
 * @return SubmitDataSetTaskResponse
 */
SubmitDataSetTaskResponse Client::submitDataSetTask(const SubmitDataSetTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitDataSetTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 提交数据集任务，校验数据集
 *
 * @param request SubmitDataSetTask2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDataSetTask2Response
 */
SubmitDataSetTask2Response Client::submitDataSetTask2WithOptions(const SubmitDataSetTask2Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  if (!!request.hasDataSetId()) {
    body["dataSetId"] = request.getDataSetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitDataSetTask2"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bc/submitDataSetTask2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDataSetTask2Response>();
}

/**
 * @summary 提交数据集任务，校验数据集
 *
 * @param request SubmitDataSetTask2Request
 * @return SubmitDataSetTask2Response
 */
SubmitDataSetTask2Response Client::submitDataSetTask2(const SubmitDataSetTask2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitDataSetTask2WithOptions(request, headers, runtime);
}

/**
 * @summary 提交知识库校验任务
 *
 * @param tmpReq ValidateKnowLedgeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateKnowLedgeResponse
 */
ValidateKnowLedgeResponse Client::validateKnowLedgeWithOptions(const ValidateKnowLedgeRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ValidateKnowLedgeShrinkRequest request = ValidateKnowLedgeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "simple"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ValidateKnowLedge"},
    {"version" , "2022-09-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yzd/validateKnowLedge")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateKnowLedgeResponse>();
}

/**
 * @summary 提交知识库校验任务
 *
 * @param request ValidateKnowLedgeRequest
 * @return ValidateKnowLedgeResponse
 */
ValidateKnowLedgeResponse Client::validateKnowLedge(const ValidateKnowLedgeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return validateKnowLedgeWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913