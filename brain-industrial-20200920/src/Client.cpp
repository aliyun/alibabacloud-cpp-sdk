#include <darabonba/Core.hpp>
#include <alibabacloud/BrainIndustrial20200920.hpp>
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
using namespace AlibabaCloud::BrainIndustrial20200920::Models;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{

AlibabaCloud::BrainIndustrial20200920::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("brain-industrial", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 激活License
 *
 * @param request ActivateLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateLicenseResponse
 */
ActivateLicenseResponse Client::activateLicenseWithOptions(const ActivateLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFingerprint()) {
    body["Fingerprint"] = request.getFingerprint();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderId()) {
    body["OrderId"] = request.getOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ActivateLicense"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateLicenseResponse>();
}

/**
 * @summary 激活License
 *
 * @param request ActivateLicenseRequest
 * @return ActivateLicenseResponse
 */
ActivateLicenseResponse Client::activateLicense(const ActivateLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateLicenseWithOptions(request, runtime);
}

/**
 * @summary 调用aics openapi
 *
 * @param tmpReq AicsOpenApiInvokeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AicsOpenApiInvokeResponse
 */
AicsOpenApiInvokeResponse Client::aicsOpenApiInvokeWithOptions(const AicsOpenApiInvokeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AicsOpenApiInvokeShrinkRequest request = AicsOpenApiInvokeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParam()) {
    request.setParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParam(), "Param", "json"));
  }

  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  json body = {};
  if (!!request.hasParamShrink()) {
    body["Param"] = request.getParamShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AicsOpenApiInvoke"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AicsOpenApiInvokeResponse>();
}

/**
 * @summary 调用aics openapi
 *
 * @param request AicsOpenApiInvokeRequest
 * @return AicsOpenApiInvokeResponse
 */
AicsOpenApiInvokeResponse Client::aicsOpenApiInvoke(const AicsOpenApiInvokeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return aicsOpenApiInvokeWithOptions(request, runtime);
}

/**
 * @summary 创建储能运行优化任务
 *
 * @param tmpReq CreateEssOptJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEssOptJobResponse
 */
CreateEssOptJobResponse Client::createEssOptJobWithOptions(const CreateEssOptJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEssOptJobShrinkRequest request = CreateEssOptJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasElecPrice()) {
    request.setElecPriceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getElecPrice(), "ElecPrice", "json"));
  }

  if (!!tmpReq.hasGenPrice()) {
    request.setGenPriceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGenPrice(), "GenPrice", "json"));
  }

  if (!!tmpReq.hasLocation()) {
    request.setLocationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLocation(), "Location", "json"));
  }

  if (!!tmpReq.hasSystemData()) {
    request.setSystemDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSystemData(), "SystemData", "json"));
  }

  json body = {};
  if (!!request.hasBusinessKey()) {
    body["BusinessKey"] = request.getBusinessKey();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasElecPriceShrink()) {
    body["ElecPrice"] = request.getElecPriceShrink();
  }

  if (!!request.hasFreq()) {
    body["Freq"] = request.getFreq();
  }

  if (!!request.hasGenPriceShrink()) {
    body["GenPrice"] = request.getGenPriceShrink();
  }

  if (!!request.hasLocationShrink()) {
    body["Location"] = request.getLocationShrink();
  }

  if (!!request.hasModelVersion()) {
    body["ModelVersion"] = request.getModelVersion();
  }

  if (!!request.hasRunDate()) {
    body["RunDate"] = request.getRunDate();
  }

  if (!!request.hasSystemDataShrink()) {
    body["SystemData"] = request.getSystemDataShrink();
  }

  if (!!request.hasTimeZone()) {
    body["TimeZone"] = request.getTimeZone();
  }

  if (!!request.hasTopoType()) {
    body["TopoType"] = request.getTopoType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEssOptJob"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEssOptJobResponse>();
}

/**
 * @summary 创建储能运行优化任务
 *
 * @param request CreateEssOptJobRequest
 * @return CreateEssOptJobResponse
 */
CreateEssOptJobResponse Client::createEssOptJob(const CreateEssOptJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEssOptJobWithOptions(request, runtime);
}

/**
 * @summary 创建用电负荷预测任务，历史数据来自文件url
 *
 * @param request CreateLoadForecastByFileUrlJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadForecastByFileUrlJobResponse
 */
CreateLoadForecastByFileUrlJobResponse Client::createLoadForecastByFileUrlJobWithOptions(const CreateLoadForecastByFileUrlJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessKey()) {
    body["BusinessKey"] = request.getBusinessKey();
  }

  if (!!request.hasDataMode()) {
    body["DataMode"] = request.getDataMode();
  }

  if (!!request.hasDeviceType()) {
    body["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasForecastHorizon()) {
    body["ForecastHorizon"] = request.getForecastHorizon();
  }

  if (!!request.hasFreq()) {
    body["Freq"] = request.getFreq();
  }

  if (!!request.hasHistoryUrl()) {
    body["HistoryUrl"] = request.getHistoryUrl();
  }

  if (!!request.hasModelVersion()) {
    body["ModelVersion"] = request.getModelVersion();
  }

  if (!!request.hasRunDate()) {
    body["RunDate"] = request.getRunDate();
  }

  if (!!request.hasSystemType()) {
    body["SystemType"] = request.getSystemType();
  }

  if (!!request.hasTimeColumn()) {
    body["TimeColumn"] = request.getTimeColumn();
  }

  if (!!request.hasTimeZone()) {
    body["TimeZone"] = request.getTimeZone();
  }

  if (!!request.hasValueColumn()) {
    body["ValueColumn"] = request.getValueColumn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLoadForecastByFileUrlJob"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadForecastByFileUrlJobResponse>();
}

/**
 * @summary 创建用电负荷预测任务，历史数据来自文件url
 *
 * @param request CreateLoadForecastByFileUrlJobRequest
 * @return CreateLoadForecastByFileUrlJobResponse
 */
CreateLoadForecastByFileUrlJobResponse Client::createLoadForecastByFileUrlJob(const CreateLoadForecastByFileUrlJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadForecastByFileUrlJobWithOptions(request, runtime);
}

/**
 * @summary 创建用电负荷预测任务
 *
 * @param tmpReq CreateLoadForecastJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadForecastJobResponse
 */
CreateLoadForecastJobResponse Client::createLoadForecastJobWithOptions(const CreateLoadForecastJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLoadForecastJobShrinkRequest request = CreateLoadForecastJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHistoryData()) {
    request.setHistoryDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHistoryData(), "HistoryData", "json"));
  }

  json body = {};
  if (!!request.hasBusinessKey()) {
    body["BusinessKey"] = request.getBusinessKey();
  }

  if (!!request.hasDataMode()) {
    body["DataMode"] = request.getDataMode();
  }

  if (!!request.hasDeviceType()) {
    body["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasForecastHorizon()) {
    body["ForecastHorizon"] = request.getForecastHorizon();
  }

  if (!!request.hasFreq()) {
    body["Freq"] = request.getFreq();
  }

  if (!!request.hasHistoryDataShrink()) {
    body["HistoryData"] = request.getHistoryDataShrink();
  }

  if (!!request.hasModelVersion()) {
    body["ModelVersion"] = request.getModelVersion();
  }

  if (!!request.hasRunDate()) {
    body["RunDate"] = request.getRunDate();
  }

  if (!!request.hasSystemType()) {
    body["SystemType"] = request.getSystemType();
  }

  if (!!request.hasTimeZone()) {
    body["TimeZone"] = request.getTimeZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLoadForecastJob"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadForecastJobResponse>();
}

/**
 * @summary 创建用电负荷预测任务
 *
 * @param request CreateLoadForecastJobRequest
 * @return CreateLoadForecastJobResponse
 */
CreateLoadForecastJobResponse Client::createLoadForecastJob(const CreateLoadForecastJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadForecastJobWithOptions(request, runtime);
}

/**
 * @summary 创建发电功率预测任务，历史数据来自文件url
 *
 * @param tmpReq CreatePowerForecastByFileUrlJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePowerForecastByFileUrlJobResponse
 */
CreatePowerForecastByFileUrlJobResponse Client::createPowerForecastByFileUrlJobWithOptions(const CreatePowerForecastByFileUrlJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePowerForecastByFileUrlJobShrinkRequest request = CreatePowerForecastByFileUrlJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLocation()) {
    request.setLocationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLocation(), "Location", "json"));
  }

  json body = {};
  if (!!request.hasBusinessKey()) {
    body["BusinessKey"] = request.getBusinessKey();
  }

  if (!!request.hasDataMode()) {
    body["DataMode"] = request.getDataMode();
  }

  if (!!request.hasDeviceType()) {
    body["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasForecastHorizon()) {
    body["ForecastHorizon"] = request.getForecastHorizon();
  }

  if (!!request.hasFreq()) {
    body["Freq"] = request.getFreq();
  }

  if (!!request.hasHistoryUrl()) {
    body["HistoryUrl"] = request.getHistoryUrl();
  }

  if (!!request.hasLocationShrink()) {
    body["Location"] = request.getLocationShrink();
  }

  if (!!request.hasModelVersion()) {
    body["ModelVersion"] = request.getModelVersion();
  }

  if (!!request.hasRunDate()) {
    body["RunDate"] = request.getRunDate();
  }

  if (!!request.hasSystemType()) {
    body["SystemType"] = request.getSystemType();
  }

  if (!!request.hasTimeColumn()) {
    body["TimeColumn"] = request.getTimeColumn();
  }

  if (!!request.hasTimeZone()) {
    body["TimeZone"] = request.getTimeZone();
  }

  if (!!request.hasValueColumn()) {
    body["ValueColumn"] = request.getValueColumn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePowerForecastByFileUrlJob"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePowerForecastByFileUrlJobResponse>();
}

/**
 * @summary 创建发电功率预测任务，历史数据来自文件url
 *
 * @param request CreatePowerForecastByFileUrlJobRequest
 * @return CreatePowerForecastByFileUrlJobResponse
 */
CreatePowerForecastByFileUrlJobResponse Client::createPowerForecastByFileUrlJob(const CreatePowerForecastByFileUrlJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPowerForecastByFileUrlJobWithOptions(request, runtime);
}

/**
 * @summary 创建发电功率预测任务
 *
 * @param tmpReq CreatePowerForecastJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePowerForecastJobResponse
 */
CreatePowerForecastJobResponse Client::createPowerForecastJobWithOptions(const CreatePowerForecastJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePowerForecastJobShrinkRequest request = CreatePowerForecastJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHistoryData()) {
    request.setHistoryDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHistoryData(), "HistoryData", "json"));
  }

  if (!!tmpReq.hasLocation()) {
    request.setLocationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLocation(), "Location", "json"));
  }

  json body = {};
  if (!!request.hasBusinessKey()) {
    body["BusinessKey"] = request.getBusinessKey();
  }

  if (!!request.hasDataMode()) {
    body["DataMode"] = request.getDataMode();
  }

  if (!!request.hasDeviceType()) {
    body["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasForecastHorizon()) {
    body["ForecastHorizon"] = request.getForecastHorizon();
  }

  if (!!request.hasFreq()) {
    body["Freq"] = request.getFreq();
  }

  if (!!request.hasHistoryDataShrink()) {
    body["HistoryData"] = request.getHistoryDataShrink();
  }

  if (!!request.hasLocationShrink()) {
    body["Location"] = request.getLocationShrink();
  }

  if (!!request.hasModelVersion()) {
    body["ModelVersion"] = request.getModelVersion();
  }

  if (!!request.hasRunDate()) {
    body["RunDate"] = request.getRunDate();
  }

  if (!!request.hasSystemType()) {
    body["SystemType"] = request.getSystemType();
  }

  if (!!request.hasTimeZone()) {
    body["TimeZone"] = request.getTimeZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePowerForecastJob"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePowerForecastJobResponse>();
}

/**
 * @summary 创建发电功率预测任务
 *
 * @param request CreatePowerForecastJobRequest
 * @return CreatePowerForecastJobResponse
 */
CreatePowerForecastJobResponse Client::createPowerForecastJob(const CreatePowerForecastJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPowerForecastJobWithOptions(request, runtime);
}

/**
 * @summary 查询aivpp算法job
 *
 * @param request GetAivppAlgoJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAivppAlgoJobResponse
 */
GetAivppAlgoJobResponse Client::getAivppAlgoJobWithOptions(const GetAivppAlgoJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAivppAlgoJob"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAivppAlgoJobResponse>();
}

/**
 * @summary 查询aivpp算法job
 *
 * @param request GetAivppAlgoJobRequest
 * @return GetAivppAlgoJobResponse
 */
GetAivppAlgoJobResponse Client::getAivppAlgoJob(const GetAivppAlgoJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAivppAlgoJobWithOptions(request, runtime);
}

/**
 * @summary License详情
 *
 * @param request GetLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLicenseResponse
 */
GetLicenseResponse Client::getLicenseWithOptions(const GetLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetLicense"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLicenseResponse>();
}

/**
 * @summary License详情
 *
 * @param request GetLicenseRequest
 * @return GetLicenseResponse
 */
GetLicenseResponse Client::getLicense(const GetLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLicenseWithOptions(request, runtime);
}

/**
 * @summary 获取用户AIVPP资源列表
 *
 * @param request ListAivppResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAivppResourcesResponse
 */
ListAivppResourcesResponse Client::listAivppResourcesWithOptions(const ListAivppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAivppResources"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAivppResourcesResponse>();
}

/**
 * @summary 获取用户AIVPP资源列表
 *
 * @param request ListAivppResourcesRequest
 * @return ListAivppResourcesResponse
 */
ListAivppResourcesResponse Client::listAivppResources(const ListAivppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAivppResourcesWithOptions(request, runtime);
}

/**
 * @summary License列表
 *
 * @param request ListLicensesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLicensesResponse
 */
ListLicensesResponse Client::listLicensesWithOptions(const ListLicensesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryStr()) {
    body["QueryStr"] = request.getQueryStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListLicenses"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLicensesResponse>();
}

/**
 * @summary License列表
 *
 * @param request ListLicensesRequest
 * @return ListLicensesResponse
 */
ListLicensesResponse Client::listLicenses(const ListLicensesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLicensesWithOptions(request, runtime);
}

/**
 * @summary 获取用户资源列表
 *
 * @param request ListUserResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserResourcesResponse
 */
ListUserResourcesResponse Client::listUserResourcesWithOptions(const ListUserResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommodityCode()) {
    body["CommodityCode"] = request.getCommodityCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListUserResources"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserResourcesResponse>();
}

/**
 * @summary 获取用户资源列表
 *
 * @param request ListUserResourcesRequest
 * @return ListUserResourcesResponse
 */
ListUserResourcesResponse Client::listUserResources(const ListUserResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserResourcesWithOptions(request, runtime);
}

/**
 * @summary 更新license描述
 *
 * @param request UpdateLicenseDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLicenseDescriptionResponse
 */
UpdateLicenseDescriptionResponse Client::updateLicenseDescriptionWithOptions(const UpdateLicenseDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLicenseDescription"},
    {"version" , "2020-09-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLicenseDescriptionResponse>();
}

/**
 * @summary 更新license描述
 *
 * @param request UpdateLicenseDescriptionRequest
 * @return UpdateLicenseDescriptionResponse
 */
UpdateLicenseDescriptionResponse Client::updateLicenseDescription(const UpdateLicenseDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLicenseDescriptionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920