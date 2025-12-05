#include <darabonba/Core.hpp>
#include <alibabacloud/PTS20201020.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::PTS20201020::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace PTS20201020
{

AlibabaCloud::PTS20201020::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("pts", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adjusts the JMeter load.
 *
 * @param request AdjustJMeterSceneSpeedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AdjustJMeterSceneSpeedResponse
 */
AdjustJMeterSceneSpeedResponse Client::adjustJMeterSceneSpeedWithOptions(const AdjustJMeterSceneSpeedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.speed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AdjustJMeterSceneSpeed"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AdjustJMeterSceneSpeedResponse>();
}

/**
 * @summary Adjusts the JMeter load.
 *
 * @param request AdjustJMeterSceneSpeedRequest
 * @return AdjustJMeterSceneSpeedResponse
 */
AdjustJMeterSceneSpeedResponse Client::adjustJMeterSceneSpeed(const AdjustJMeterSceneSpeedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return adjustJMeterSceneSpeedWithOptions(request, runtime);
}

/**
 * @summary Adjusts the stress in a Performance Testing Service (PTS) scenario.
 *
 * @description In concurrency mode, only the concurrency of the first API is passed as that of a session.
 * In requests per second (RPS) mode, the RPS of each API can be adjusted. Make sure that the RPS decreases in the API order in the same session.
 *
 * @param tmpReq AdjustPtsSceneSpeedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AdjustPtsSceneSpeedResponse
 */
AdjustPtsSceneSpeedResponse Client::adjustPtsSceneSpeedWithOptions(const AdjustPtsSceneSpeedRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AdjustPtsSceneSpeedShrinkRequest request = AdjustPtsSceneSpeedShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApiSpeedList()) {
    request.setApiSpeedListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.apiSpeedList(), "ApiSpeedList", "json"));
  }

  json query = {};
  if (!!request.hasApiSpeedListShrink()) {
    query["ApiSpeedList"] = request.apiSpeedListShrink();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AdjustPtsSceneSpeed"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AdjustPtsSceneSpeedResponse>();
}

/**
 * @summary Adjusts the stress in a Performance Testing Service (PTS) scenario.
 *
 * @description In concurrency mode, only the concurrency of the first API is passed as that of a session.
 * In requests per second (RPS) mode, the RPS of each API can be adjusted. Make sure that the RPS decreases in the API order in the same session.
 *
 * @param request AdjustPtsSceneSpeedRequest
 * @return AdjustPtsSceneSpeedResponse
 */
AdjustPtsSceneSpeedResponse Client::adjustPtsSceneSpeed(const AdjustPtsSceneSpeedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return adjustPtsSceneSpeedWithOptions(request, runtime);
}

/**
 * @summary Creates a stress testing scenario.
 *
 * @param request CreatePtsSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePtsSceneResponse
 */
CreatePtsSceneResponse Client::createPtsSceneWithOptions(const CreatePtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScene()) {
    query["Scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePtsScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePtsSceneResponse>();
}

/**
 * @summary Creates a stress testing scenario.
 *
 * @param request CreatePtsSceneRequest
 * @return CreatePtsSceneResponse
 */
CreatePtsSceneResponse Client::createPtsScene(const CreatePtsSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPtsSceneWithOptions(request, runtime);
}

/**
 * @summary null
 *
 * @param request CreatePtsSceneBaseLineFromReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePtsSceneBaseLineFromReportResponse
 */
CreatePtsSceneBaseLineFromReportResponse Client::createPtsSceneBaseLineFromReportWithOptions(const CreatePtsSceneBaseLineFromReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePtsSceneBaseLineFromReport"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePtsSceneBaseLineFromReportResponse>();
}

/**
 * @summary null
 *
 * @param request CreatePtsSceneBaseLineFromReportRequest
 * @return CreatePtsSceneBaseLineFromReportResponse
 */
CreatePtsSceneBaseLineFromReportResponse Client::createPtsSceneBaseLineFromReport(const CreatePtsSceneBaseLineFromReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPtsSceneBaseLineFromReportWithOptions(request, runtime);
}

/**
 * @summary Deletes a Performance Testing Service (PTS) scenario.
 *
 * @param request DeletePtsSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePtsSceneResponse
 */
DeletePtsSceneResponse Client::deletePtsSceneWithOptions(const DeletePtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePtsScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePtsSceneResponse>();
}

/**
 * @summary Deletes a Performance Testing Service (PTS) scenario.
 *
 * @param request DeletePtsSceneRequest
 * @return DeletePtsSceneResponse
 */
DeletePtsSceneResponse Client::deletePtsScene(const DeletePtsSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePtsSceneWithOptions(request, runtime);
}

/**
 * @param request DeletePtsSceneBaseLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePtsSceneBaseLineResponse
 */
DeletePtsSceneBaseLineResponse Client::deletePtsSceneBaseLineWithOptions(const DeletePtsSceneBaseLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePtsSceneBaseLine"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePtsSceneBaseLineResponse>();
}

/**
 * @param request DeletePtsSceneBaseLineRequest
 * @return DeletePtsSceneBaseLineResponse
 */
DeletePtsSceneBaseLineResponse Client::deletePtsSceneBaseLine(const DeletePtsSceneBaseLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePtsSceneBaseLineWithOptions(request, runtime);
}

/**
 * @param tmpReq DeletePtsScenesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePtsScenesResponse
 */
DeletePtsScenesResponse Client::deletePtsScenesWithOptions(const DeletePtsScenesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeletePtsScenesShrinkRequest request = DeletePtsScenesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSceneIds()) {
    request.setSceneIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sceneIds(), "SceneIds", "json"));
  }

  json query = {};
  if (!!request.hasSceneIdsShrink()) {
    query["SceneIds"] = request.sceneIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePtsScenes"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePtsScenesResponse>();
}

/**
 * @param request DeletePtsScenesRequest
 * @return DeletePtsScenesResponse
 */
DeletePtsScenesResponse Client::deletePtsScenes(const DeletePtsScenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePtsScenesWithOptions(request, runtime);
}

/**
 * @summary Queries all supported regions.
 *
 * @param request GetAllRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAllRegionsResponse
 */
GetAllRegionsResponse Client::getAllRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetAllRegions"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAllRegionsResponse>();
}

/**
 * @summary Queries all supported regions.
 *
 * @return GetAllRegionsResponse
 */
GetAllRegionsResponse Client::getAllRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAllRegionsWithOptions(runtime);
}

/**
 * @summary Queries the operational logs of JMeter stress testers. By default, the operational logs of the stress tester identified as number 0 are queried and the total number of stress testers is returned.
 *
 * @param request GetJMeterLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJMeterLogsResponse
 */
GetJMeterLogsResponse Client::getJMeterLogsWithOptions(const GetJMeterLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentIndex()) {
    query["AgentIndex"] = request.agentIndex();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  if (!!request.hasThread()) {
    query["Thread"] = request.thread();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJMeterLogs"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJMeterLogsResponse>();
}

/**
 * @summary Queries the operational logs of JMeter stress testers. By default, the operational logs of the stress tester identified as number 0 are queried and the total number of stress testers is returned.
 *
 * @param request GetJMeterLogsRequest
 * @return GetJMeterLogsResponse
 */
GetJMeterLogsResponse Client::getJMeterLogs(const GetJMeterLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJMeterLogsWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of a JMeter report.
 *
 * @param request GetJMeterReportDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJMeterReportDetailsResponse
 */
GetJMeterReportDetailsResponse Client::getJMeterReportDetailsWithOptions(const GetJMeterReportDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJMeterReportDetails"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJMeterReportDetailsResponse>();
}

/**
 * @summary Obtains the details of a JMeter report.
 *
 * @param request GetJMeterReportDetailsRequest
 * @return GetJMeterReportDetailsResponse
 */
GetJMeterReportDetailsResponse Client::getJMeterReportDetails(const GetJMeterReportDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJMeterReportDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the metrics of JMeter samplers based on specified conditions.
 *
 * @param request GetJMeterSampleMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJMeterSampleMetricsResponse
 */
GetJMeterSampleMetricsResponse Client::getJMeterSampleMetricsWithOptions(const GetJMeterSampleMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  if (!!request.hasSamplerId()) {
    query["SamplerId"] = request.samplerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJMeterSampleMetrics"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJMeterSampleMetricsResponse>();
}

/**
 * @summary Queries the metrics of JMeter samplers based on specified conditions.
 *
 * @param request GetJMeterSampleMetricsRequest
 * @return GetJMeterSampleMetricsResponse
 */
GetJMeterSampleMetricsResponse Client::getJMeterSampleMetrics(const GetJMeterSampleMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJMeterSampleMetricsWithOptions(request, runtime);
}

/**
 * @summary Queries the sampling logs of a JMeter sampler.
 *
 * @param request GetJMeterSamplingLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJMeterSamplingLogsResponse
 */
GetJMeterSamplingLogsResponse Client::getJMeterSamplingLogsWithOptions(const GetJMeterSamplingLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxRT()) {
    query["MaxRT"] = request.maxRT();
  }

  if (!!request.hasMinRT()) {
    query["MinRT"] = request.minRT();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  if (!!request.hasResponseCode()) {
    query["ResponseCode"] = request.responseCode();
  }

  if (!!request.hasSamplerId()) {
    query["SamplerId"] = request.samplerId();
  }

  if (!!request.hasSuccess()) {
    query["Success"] = request.success();
  }

  if (!!request.hasThread()) {
    query["Thread"] = request.thread();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJMeterSamplingLogs"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJMeterSamplingLogsResponse>();
}

/**
 * @summary Queries the sampling logs of a JMeter sampler.
 *
 * @param request GetJMeterSamplingLogsRequest
 * @return GetJMeterSamplingLogsResponse
 */
GetJMeterSamplingLogsResponse Client::getJMeterSamplingLogs(const GetJMeterSamplingLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJMeterSamplingLogsWithOptions(request, runtime);
}

/**
 * @summary Queries data that is generated during the stress testing of a JMeter scenario based on the ID of the scenario.
 *
 * @param request GetJMeterSceneRunningDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJMeterSceneRunningDataResponse
 */
GetJMeterSceneRunningDataResponse Client::getJMeterSceneRunningDataWithOptions(const GetJMeterSceneRunningDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJMeterSceneRunningData"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJMeterSceneRunningDataResponse>();
}

/**
 * @summary Queries data that is generated during the stress testing of a JMeter scenario based on the ID of the scenario.
 *
 * @param request GetJMeterSceneRunningDataRequest
 * @return GetJMeterSceneRunningDataResponse
 */
GetJMeterSceneRunningDataResponse Client::getJMeterSceneRunningData(const GetJMeterSceneRunningDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJMeterSceneRunningDataWithOptions(request, runtime);
}

/**
 * @summary Queries information about a JMeter scenario.
 *
 * @param request GetOpenJMeterSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOpenJMeterSceneResponse
 */
GetOpenJMeterSceneResponse Client::getOpenJMeterSceneWithOptions(const GetOpenJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOpenJMeterScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpenJMeterSceneResponse>();
}

/**
 * @summary Queries information about a JMeter scenario.
 *
 * @param request GetOpenJMeterSceneRequest
 * @return GetOpenJMeterSceneResponse
 */
GetOpenJMeterSceneResponse Client::getOpenJMeterScene(const GetOpenJMeterSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOpenJMeterSceneWithOptions(request, runtime);
}

/**
 * @summary Queries the sampling logs for a Performance Testing Service (PTS) debugging task.
 *
 * @param request GetPtsDebugSampleLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPtsDebugSampleLogsResponse
 */
GetPtsDebugSampleLogsResponse Client::getPtsDebugSampleLogsWithOptions(const GetPtsDebugSampleLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPtsDebugSampleLogs"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPtsDebugSampleLogsResponse>();
}

/**
 * @summary Queries the sampling logs for a Performance Testing Service (PTS) debugging task.
 *
 * @param request GetPtsDebugSampleLogsRequest
 * @return GetPtsDebugSampleLogsResponse
 */
GetPtsDebugSampleLogsResponse Client::getPtsDebugSampleLogs(const GetPtsDebugSampleLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPtsDebugSampleLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a report for a performance testing task in a Performance Testing Service (PTS) scenario.
 *
 * @param request GetPtsReportDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPtsReportDetailsResponse
 */
GetPtsReportDetailsResponse Client::getPtsReportDetailsWithOptions(const GetPtsReportDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPtsReportDetails"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPtsReportDetailsResponse>();
}

/**
 * @summary Queries the details of a report for a performance testing task in a Performance Testing Service (PTS) scenario.
 *
 * @param request GetPtsReportDetailsRequest
 * @return GetPtsReportDetailsResponse
 */
GetPtsReportDetailsResponse Client::getPtsReportDetails(const GetPtsReportDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPtsReportDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries all reports of multiple scenarios that are generated during the stress testing in batch.
 *
 * @param request GetPtsReportsBySceneIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPtsReportsBySceneIdResponse
 */
GetPtsReportsBySceneIdResponse Client::getPtsReportsBySceneIdWithOptions(const GetPtsReportsBySceneIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPtsReportsBySceneId"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPtsReportsBySceneIdResponse>();
}

/**
 * @summary Queries all reports of multiple scenarios that are generated during the stress testing in batch.
 *
 * @param request GetPtsReportsBySceneIdRequest
 * @return GetPtsReportsBySceneIdResponse
 */
GetPtsReportsBySceneIdResponse Client::getPtsReportsBySceneId(const GetPtsReportsBySceneIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPtsReportsBySceneIdWithOptions(request, runtime);
}

/**
 * @summary Queries the structure and load settings of a Performance Testing Service (PTS) scenario.
 *
 * @param request GetPtsSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPtsSceneResponse
 */
GetPtsSceneResponse Client::getPtsSceneWithOptions(const GetPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPtsScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPtsSceneResponse>();
}

/**
 * @summary Queries the structure and load settings of a Performance Testing Service (PTS) scenario.
 *
 * @param request GetPtsSceneRequest
 * @return GetPtsSceneResponse
 */
GetPtsSceneResponse Client::getPtsScene(const GetPtsSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPtsSceneWithOptions(request, runtime);
}

/**
 * @summary null
 *
 * @param request GetPtsSceneBaseLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPtsSceneBaseLineResponse
 */
GetPtsSceneBaseLineResponse Client::getPtsSceneBaseLineWithOptions(const GetPtsSceneBaseLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPtsSceneBaseLine"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPtsSceneBaseLineResponse>();
}

/**
 * @summary null
 *
 * @param request GetPtsSceneBaseLineRequest
 * @return GetPtsSceneBaseLineResponse
 */
GetPtsSceneBaseLineResponse Client::getPtsSceneBaseLine(const GetPtsSceneBaseLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPtsSceneBaseLineWithOptions(request, runtime);
}

/**
 * @summary Queries the runtime data of a stress testing or debugging scenario.
 *
 * @param request GetPtsSceneRunningDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPtsSceneRunningDataResponse
 */
GetPtsSceneRunningDataResponse Client::getPtsSceneRunningDataWithOptions(const GetPtsSceneRunningDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPtsSceneRunningData"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPtsSceneRunningDataResponse>();
}

/**
 * @summary Queries the runtime data of a stress testing or debugging scenario.
 *
 * @param request GetPtsSceneRunningDataRequest
 * @return GetPtsSceneRunningDataResponse
 */
GetPtsSceneRunningDataResponse Client::getPtsSceneRunningData(const GetPtsSceneRunningDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPtsSceneRunningDataWithOptions(request, runtime);
}

/**
 * @summary Queries the runtime status of a Performance Testing Service (PTS) scenario.
 *
 * @param request GetPtsSceneRunningStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPtsSceneRunningStatusResponse
 */
GetPtsSceneRunningStatusResponse Client::getPtsSceneRunningStatusWithOptions(const GetPtsSceneRunningStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPtsSceneRunningStatus"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPtsSceneRunningStatusResponse>();
}

/**
 * @summary Queries the runtime status of a Performance Testing Service (PTS) scenario.
 *
 * @param request GetPtsSceneRunningStatusRequest
 * @return GetPtsSceneRunningStatusResponse
 */
GetPtsSceneRunningStatusResponse Client::getPtsSceneRunningStatus(const GetPtsSceneRunningStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPtsSceneRunningStatusWithOptions(request, runtime);
}

/**
 * @param request GetUserVpcSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserVpcSecurityGroupResponse
 */
GetUserVpcSecurityGroupResponse Client::getUserVpcSecurityGroupWithOptions(const GetUserVpcSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserVpcSecurityGroup"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserVpcSecurityGroupResponse>();
}

/**
 * @param request GetUserVpcSecurityGroupRequest
 * @return GetUserVpcSecurityGroupResponse
 */
GetUserVpcSecurityGroupResponse Client::getUserVpcSecurityGroup(const GetUserVpcSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserVpcSecurityGroupWithOptions(request, runtime);
}

/**
 * @param request GetUserVpcVSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserVpcVSwitchResponse
 */
GetUserVpcVSwitchResponse Client::getUserVpcVSwitchWithOptions(const GetUserVpcVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserVpcVSwitch"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserVpcVSwitchResponse>();
}

/**
 * @param request GetUserVpcVSwitchRequest
 * @return GetUserVpcVSwitchResponse
 */
GetUserVpcVSwitchResponse Client::getUserVpcVSwitch(const GetUserVpcVSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserVpcVSwitchWithOptions(request, runtime);
}

/**
 * @param request GetUserVpcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserVpcsResponse
 */
GetUserVpcsResponse Client::getUserVpcsWithOptions(const GetUserVpcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserVpcs"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserVpcsResponse>();
}

/**
 * @param request GetUserVpcsRequest
 * @return GetUserVpcsResponse
 */
GetUserVpcsResponse Client::getUserVpcs(const GetUserVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserVpcsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about JMeter environments.
 *
 * @param request ListEnvsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvsResponse
 */
ListEnvsResponse Client::listEnvsWithOptions(const ListEnvsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvId()) {
    query["EnvId"] = request.envId();
  }

  if (!!request.hasEnvName()) {
    query["EnvName"] = request.envName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvs"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvsResponse>();
}

/**
 * @summary Queries the information about JMeter environments.
 *
 * @param request ListEnvsRequest
 * @return ListEnvsResponse
 */
ListEnvsResponse Client::listEnvs(const ListEnvsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvsWithOptions(request, runtime);
}

/**
 * @summary Queries JMeter reports based on specified conditions.
 *
 * @param request ListJMeterReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJMeterReportsResponse
 */
ListJMeterReportsResponse Client::listJMeterReportsWithOptions(const ListJMeterReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJMeterReports"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJMeterReportsResponse>();
}

/**
 * @summary Queries JMeter reports based on specified conditions.
 *
 * @param request ListJMeterReportsRequest
 * @return ListJMeterReportsResponse
 */
ListJMeterReportsResponse Client::listJMeterReports(const ListJMeterReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJMeterReportsWithOptions(request, runtime);
}

/**
 * @summary Queries JMeter scenarios based on a specified condition.
 *
 * @param request ListOpenJMeterScenesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOpenJMeterScenesResponse
 */
ListOpenJMeterScenesResponse Client::listOpenJMeterScenesWithOptions(const ListOpenJMeterScenesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOpenJMeterScenes"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOpenJMeterScenesResponse>();
}

/**
 * @summary Queries JMeter scenarios based on a specified condition.
 *
 * @param request ListOpenJMeterScenesRequest
 * @return ListOpenJMeterScenesResponse
 */
ListOpenJMeterScenesResponse Client::listOpenJMeterScenes(const ListOpenJMeterScenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOpenJMeterScenesWithOptions(request, runtime);
}

/**
 * @summary Queries Performance Testing Service (PTS) reports based on specified conditions.
 *
 * @param request ListPtsReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPtsReportsResponse
 */
ListPtsReportsResponse Client::listPtsReportsWithOptions(const ListPtsReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBeginTime()) {
    body["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasReportId()) {
    body["ReportId"] = request.reportId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListPtsReports"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPtsReportsResponse>();
}

/**
 * @summary Queries Performance Testing Service (PTS) reports based on specified conditions.
 *
 * @param request ListPtsReportsRequest
 * @return ListPtsReportsResponse
 */
ListPtsReportsResponse Client::listPtsReports(const ListPtsReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPtsReportsWithOptions(request, runtime);
}

/**
 * @summary Queries Performance Testing Service (PTS) scenarios by page.
 *
 * @param request ListPtsSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPtsSceneResponse
 */
ListPtsSceneResponse Client::listPtsSceneWithOptions(const ListPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPtsScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPtsSceneResponse>();
}

/**
 * @summary Queries Performance Testing Service (PTS) scenarios by page.
 *
 * @param request ListPtsSceneRequest
 * @return ListPtsSceneResponse
 */
ListPtsSceneResponse Client::listPtsScene(const ListPtsSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPtsSceneWithOptions(request, runtime);
}

/**
 * @summary 获取vpc配置信息列表
 *
 * @param request ListVpcConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcConfigsResponse
 */
ListVpcConfigsResponse Client::listVpcConfigsWithOptions(const ListVpcConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.configName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcConfigs"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcConfigsResponse>();
}

/**
 * @summary 获取vpc配置信息列表
 *
 * @param request ListVpcConfigsRequest
 * @return ListVpcConfigsResponse
 */
ListVpcConfigsResponse Client::listVpcConfigs(const ListVpcConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVpcConfigsWithOptions(request, runtime);
}

/**
 * @summary null
 *
 * @param request ModifyPtsSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPtsSceneResponse
 */
ModifyPtsSceneResponse Client::modifyPtsSceneWithOptions(const ModifyPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyPtsScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPtsSceneResponse>();
}

/**
 * @summary null
 *
 * @param request ModifyPtsSceneRequest
 * @return ModifyPtsSceneResponse
 */
ModifyPtsSceneResponse Client::modifyPtsScene(const ModifyPtsSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPtsSceneWithOptions(request, runtime);
}

/**
 * @summary Removes the JMeter environment that corresponds to a specific JMeter environment ID.
 *
 * @param request RemoveEnvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveEnvResponse
 */
RemoveEnvResponse Client::removeEnvWithOptions(const RemoveEnvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvId()) {
    query["EnvId"] = request.envId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveEnv"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveEnvResponse>();
}

/**
 * @summary Removes the JMeter environment that corresponds to a specific JMeter environment ID.
 *
 * @param request RemoveEnvRequest
 * @return RemoveEnvResponse
 */
RemoveEnvResponse Client::removeEnv(const RemoveEnvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeEnvWithOptions(request, runtime);
}

/**
 * @summary Removes a JMeter scenario.
 *
 * @param request RemoveOpenJMeterSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveOpenJMeterSceneResponse
 */
RemoveOpenJMeterSceneResponse Client::removeOpenJMeterSceneWithOptions(const RemoveOpenJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveOpenJMeterScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveOpenJMeterSceneResponse>();
}

/**
 * @summary Removes a JMeter scenario.
 *
 * @param request RemoveOpenJMeterSceneRequest
 * @return RemoveOpenJMeterSceneResponse
 */
RemoveOpenJMeterSceneResponse Client::removeOpenJMeterScene(const RemoveOpenJMeterSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeOpenJMeterSceneWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a JMeter environment.
 *
 * @param tmpReq SaveEnvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveEnvResponse
 */
SaveEnvResponse Client::saveEnvWithOptions(const SaveEnvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveEnvShrinkRequest request = SaveEnvShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnv()) {
    request.setEnvShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.env(), "Env", "json"));
  }

  json query = {};
  if (!!request.hasEnvShrink()) {
    query["Env"] = request.envShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveEnv"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveEnvResponse>();
}

/**
 * @summary Creates or updates a JMeter environment.
 *
 * @param request SaveEnvRequest
 * @return SaveEnvResponse
 */
SaveEnvResponse Client::saveEnv(const SaveEnvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveEnvWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a JMeter scenario.
 *
 * @param tmpReq SaveOpenJMeterSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveOpenJMeterSceneResponse
 */
SaveOpenJMeterSceneResponse Client::saveOpenJMeterSceneWithOptions(const SaveOpenJMeterSceneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveOpenJMeterSceneShrinkRequest request = SaveOpenJMeterSceneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOpenJMeterScene()) {
    request.setOpenJMeterSceneShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.openJMeterScene(), "OpenJMeterScene", "json"));
  }

  json query = {};
  if (!!request.hasOpenJMeterSceneShrink()) {
    query["OpenJMeterScene"] = request.openJMeterSceneShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveOpenJMeterScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveOpenJMeterSceneResponse>();
}

/**
 * @summary Creates or updates a JMeter scenario.
 *
 * @param request SaveOpenJMeterSceneRequest
 * @return SaveOpenJMeterSceneResponse
 */
SaveOpenJMeterSceneResponse Client::saveOpenJMeterScene(const SaveOpenJMeterSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveOpenJMeterSceneWithOptions(request, runtime);
}

/**
 * @summary Saves or modifies a Performance Testing Service (PTS) scenario.
 *
 * @param tmpReq SavePtsSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SavePtsSceneResponse
 */
SavePtsSceneResponse Client::savePtsSceneWithOptions(const SavePtsSceneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SavePtsSceneShrinkRequest request = SavePtsSceneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScene()) {
    request.setSceneShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scene(), "Scene", "json"));
  }

  json query = {};
  if (!!request.hasSceneShrink()) {
    query["Scene"] = request.sceneShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SavePtsScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SavePtsSceneResponse>();
}

/**
 * @summary Saves or modifies a Performance Testing Service (PTS) scenario.
 *
 * @param request SavePtsSceneRequest
 * @return SavePtsSceneResponse
 */
SavePtsSceneResponse Client::savePtsScene(const SavePtsSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return savePtsSceneWithOptions(request, runtime);
}

/**
 * @summary Starts the debugging of a scenario to check whether the settings of the scenario take effect.
 *
 * @param request StartDebugPtsSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDebugPtsSceneResponse
 */
StartDebugPtsSceneResponse Client::startDebugPtsSceneWithOptions(const StartDebugPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDebugPtsScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDebugPtsSceneResponse>();
}

/**
 * @summary Starts the debugging of a scenario to check whether the settings of the scenario take effect.
 *
 * @param request StartDebugPtsSceneRequest
 * @return StartDebugPtsSceneResponse
 */
StartDebugPtsSceneResponse Client::startDebugPtsScene(const StartDebugPtsSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDebugPtsSceneWithOptions(request, runtime);
}

/**
 * @summary Debugs a JMeter scenario.
 *
 * @param request StartDebuggingJMeterSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDebuggingJMeterSceneResponse
 */
StartDebuggingJMeterSceneResponse Client::startDebuggingJMeterSceneWithOptions(const StartDebuggingJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDebuggingJMeterScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDebuggingJMeterSceneResponse>();
}

/**
 * @summary Debugs a JMeter scenario.
 *
 * @param request StartDebuggingJMeterSceneRequest
 * @return StartDebuggingJMeterSceneResponse
 */
StartDebuggingJMeterSceneResponse Client::startDebuggingJMeterScene(const StartDebuggingJMeterSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDebuggingJMeterSceneWithOptions(request, runtime);
}

/**
 * @summary Starts a scenario by using its ID.
 *
 * @param request StartPtsSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartPtsSceneResponse
 */
StartPtsSceneResponse Client::startPtsSceneWithOptions(const StartPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartPtsScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartPtsSceneResponse>();
}

/**
 * @summary Starts a scenario by using its ID.
 *
 * @param request StartPtsSceneRequest
 * @return StartPtsSceneResponse
 */
StartPtsSceneResponse Client::startPtsScene(const StartPtsSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startPtsSceneWithOptions(request, runtime);
}

/**
 * @summary Starts performance testing in a JMeter scenario.
 *
 * @param request StartTestingJMeterSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTestingJMeterSceneResponse
 */
StartTestingJMeterSceneResponse Client::startTestingJMeterSceneWithOptions(const StartTestingJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartTestingJMeterScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTestingJMeterSceneResponse>();
}

/**
 * @summary Starts performance testing in a JMeter scenario.
 *
 * @param request StartTestingJMeterSceneRequest
 * @return StartTestingJMeterSceneResponse
 */
StartTestingJMeterSceneResponse Client::startTestingJMeterScene(const StartTestingJMeterSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTestingJMeterSceneWithOptions(request, runtime);
}

/**
 * @summary Stops the scenario that is in debugging.
 *
 * @param request StopDebugPtsSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDebugPtsSceneResponse
 */
StopDebugPtsSceneResponse Client::stopDebugPtsSceneWithOptions(const StopDebugPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDebugPtsScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDebugPtsSceneResponse>();
}

/**
 * @summary Stops the scenario that is in debugging.
 *
 * @param request StopDebugPtsSceneRequest
 * @return StopDebugPtsSceneResponse
 */
StopDebugPtsSceneResponse Client::stopDebugPtsScene(const StopDebugPtsSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDebugPtsSceneWithOptions(request, runtime);
}

/**
 * @summary Stops the debugging of a JMeter scenario.
 *
 * @param request StopDebuggingJMeterSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDebuggingJMeterSceneResponse
 */
StopDebuggingJMeterSceneResponse Client::stopDebuggingJMeterSceneWithOptions(const StopDebuggingJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDebuggingJMeterScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDebuggingJMeterSceneResponse>();
}

/**
 * @summary Stops the debugging of a JMeter scenario.
 *
 * @param request StopDebuggingJMeterSceneRequest
 * @return StopDebuggingJMeterSceneResponse
 */
StopDebuggingJMeterSceneResponse Client::stopDebuggingJMeterScene(const StopDebuggingJMeterSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDebuggingJMeterSceneWithOptions(request, runtime);
}

/**
 * @summary Stops a scenario by using its ID.
 *
 * @param request StopPtsSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopPtsSceneResponse
 */
StopPtsSceneResponse Client::stopPtsSceneWithOptions(const StopPtsSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopPtsScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopPtsSceneResponse>();
}

/**
 * @summary Stops a scenario by using its ID.
 *
 * @param request StopPtsSceneRequest
 * @return StopPtsSceneResponse
 */
StopPtsSceneResponse Client::stopPtsScene(const StopPtsSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopPtsSceneWithOptions(request, runtime);
}

/**
 * @summary Stops performance testing by using a JMeter scenario.
 *
 * @param request StopTestingJMeterSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTestingJMeterSceneResponse
 */
StopTestingJMeterSceneResponse Client::stopTestingJMeterSceneWithOptions(const StopTestingJMeterSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTestingJMeterScene"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTestingJMeterSceneResponse>();
}

/**
 * @summary Stops performance testing by using a JMeter scenario.
 *
 * @param request StopTestingJMeterSceneRequest
 * @return StopTestingJMeterSceneResponse
 */
StopTestingJMeterSceneResponse Client::stopTestingJMeterScene(const StopTestingJMeterSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopTestingJMeterSceneWithOptions(request, runtime);
}

/**
 * @summary null
 *
 * @param tmpReq UpdatePtsSceneBaseLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePtsSceneBaseLineResponse
 */
UpdatePtsSceneBaseLineResponse Client::updatePtsSceneBaseLineWithOptions(const UpdatePtsSceneBaseLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePtsSceneBaseLineShrinkRequest request = UpdatePtsSceneBaseLineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApiBaselines()) {
    request.setApiBaselinesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.apiBaselines(), "ApiBaselines", "json"));
  }

  if (!!tmpReq.hasSceneBaseline()) {
    request.setSceneBaselineShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sceneBaseline(), "SceneBaseline", "json"));
  }

  json query = {};
  if (!!request.hasApiBaselinesShrink()) {
    query["ApiBaselines"] = request.apiBaselinesShrink();
  }

  if (!!request.hasSceneBaselineShrink()) {
    query["SceneBaseline"] = request.sceneBaselineShrink();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePtsSceneBaseLine"},
    {"version" , "2020-10-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePtsSceneBaseLineResponse>();
}

/**
 * @summary null
 *
 * @param request UpdatePtsSceneBaseLineRequest
 * @return UpdatePtsSceneBaseLineResponse
 */
UpdatePtsSceneBaseLineResponse Client::updatePtsSceneBaseLine(const UpdatePtsSceneBaseLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePtsSceneBaseLineWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace PTS20201020