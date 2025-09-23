#include <darabonba/Core.hpp>
#include <alibabacloud/SchedulerX320240624.hpp>
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
using namespace AlibabaCloud::SchedulerX320240624::Models;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{

AlibabaCloud::SchedulerX320240624::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("schedulerx3", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建应用
 *
 * @param request CreateAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppResponse
 */
CreateAppResponse Client::createAppWithOptions(const CreateAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessToken()) {
    body["AccessToken"] = request.accessToken();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEnableLog()) {
    body["EnableLog"] = request.enableLog();
  }

  if (!!request.hasLabelRouteStrategy()) {
    body["LabelRouteStrategy"] = request.labelRouteStrategy();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.maxConcurrency();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateApp"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request CreateAppRequest
 * @return CreateAppResponse
 */
CreateAppResponse Client::createApp(const CreateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppWithOptions(request, runtime);
}

/**
 * @summary 创建集群
 *
 * @param tmpReq CreateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const CreateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateClusterShrinkRequest request = CreateClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVSwitches()) {
    request.setVSwitchesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.vSwitches(), "VSwitches", "json"));
  }

  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  json body = {};
  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.chargeType();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.clusterName();
  }

  if (!!request.hasClusterSpec()) {
    body["ClusterSpec"] = request.clusterSpec();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.duration();
  }

  if (!!request.hasEngineType()) {
    body["EngineType"] = request.engineType();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasVSwitchesShrink()) {
    body["VSwitches"] = request.vSwitchesShrink();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCluster"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterResponse>();
}

/**
 * @summary 创建集群
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClusterWithOptions(request, runtime);
}

/**
 * @summary 创建任务
 *
 * @param tmpReq CreateJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJobWithOptions(const CreateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateJobShrinkRequest request = CreateJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNoticeConfig()) {
    request.setNoticeConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.noticeConfig(), "NoticeConfig", "json"));
  }

  if (!!tmpReq.hasNoticeContacts()) {
    request.setNoticeContactsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.noticeContacts(), "NoticeContacts", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasAttemptInterval()) {
    body["AttemptInterval"] = request.attemptInterval();
  }

  if (!!request.hasCalendar()) {
    body["Calendar"] = request.calendar();
  }

  if (!!request.hasChildJobId()) {
    body["ChildJobId"] = request.childJobId();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasExecutorBlockStrategy()) {
    body["ExecutorBlockStrategy"] = request.executorBlockStrategy();
  }

  if (!!request.hasJobHandler()) {
    body["JobHandler"] = request.jobHandler();
  }

  if (!!request.hasJobType()) {
    body["JobType"] = request.jobType();
  }

  if (!!request.hasMaxAttempt()) {
    body["MaxAttempt"] = request.maxAttempt();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.maxConcurrency();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNoticeConfigShrink()) {
    body["NoticeConfig"] = request.noticeConfigShrink();
  }

  if (!!request.hasNoticeContactsShrink()) {
    body["NoticeContacts"] = request.noticeContactsShrink();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.parameters();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasRouteStrategy()) {
    body["RouteStrategy"] = request.routeStrategy();
  }

  if (!!request.hasScript()) {
    body["Script"] = request.script();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTimeExpression()) {
    body["TimeExpression"] = request.timeExpression();
  }

  if (!!request.hasTimeType()) {
    body["TimeType"] = request.timeType();
  }

  if (!!request.hasTimezone()) {
    body["Timezone"] = request.timezone();
  }

  if (!!request.hasWeight()) {
    body["Weight"] = request.weight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateJob"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobResponse>();
}

/**
 * @summary 创建任务
 *
 * @param request CreateJobRequest
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJob(const CreateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobWithOptions(request, runtime);
}

/**
 * @summary 删除应用分组
 *
 * @param request DeleteAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppResponse
 */
DeleteAppResponse Client::deleteAppWithOptions(const DeleteAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteApp"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppResponse>();
}

/**
 * @summary 删除应用分组
 *
 * @param request DeleteAppRequest
 * @return DeleteAppResponse
 */
DeleteAppResponse Client::deleteApp(const DeleteAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppWithOptions(request, runtime);
}

/**
 * @summary 释放删除集群
 *
 * @param request DeleteClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCluster"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterResponse>();
}

/**
 * @summary 释放删除集群
 *
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterWithOptions(request, runtime);
}

/**
 * @summary 批量删除任务
 *
 * @param tmpReq DeleteJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobsResponse
 */
DeleteJobsResponse Client::deleteJobsWithOptions(const DeleteJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteJobsShrinkRequest request = DeleteJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobIds()) {
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobIds(), "JobIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasJobIdsShrink()) {
    body["JobIds"] = request.jobIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteJobs"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteJobsResponse>();
}

/**
 * @summary 批量删除任务
 *
 * @param request DeleteJobsRequest
 * @return DeleteJobsResponse
 */
DeleteJobsResponse Client::deleteJobs(const DeleteJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteJobsWithOptions(request, runtime);
}

/**
 * @summary 批量导出任务信息
 *
 * @param tmpReq ExportJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportJobsResponse
 */
ExportJobsResponse Client::exportJobsWithOptions(const ExportJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportJobsShrinkRequest request = ExportJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobIds()) {
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobIds(), "JobIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasExportJobType()) {
    body["ExportJobType"] = request.exportJobType();
  }

  if (!!request.hasJobIdsShrink()) {
    body["JobIds"] = request.jobIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportJobs"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "byte"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportJobsResponse>();
}

/**
 * @summary 批量导出任务信息
 *
 * @param request ExportJobsRequest
 * @return ExportJobsResponse
 */
ExportJobsResponse Client::exportJobs(const ExportJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportJobsWithOptions(request, runtime);
}

/**
 * @summary 获取指定应用
 *
 * @param request GetAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppResponse
 */
GetAppResponse Client::getAppWithOptions(const GetAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApp"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppResponse>();
}

/**
 * @summary 获取指定应用
 *
 * @param request GetAppRequest
 * @return GetAppResponse
 */
GetAppResponse Client::getApp(const GetAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppWithOptions(request, runtime);
}

/**
 * @summary 获取集群详细信息
 *
 * @param request GetClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterResponse
 */
GetClusterResponse Client::getClusterWithOptions(const GetClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCluster"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterResponse>();
}

/**
 * @summary 获取集群详细信息
 *
 * @param request GetClusterRequest
 * @return GetClusterResponse
 */
GetClusterResponse Client::getCluster(const GetClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClusterWithOptions(request, runtime);
}

/**
 * @summary 获取指定机器信息
 *
 * @param request GetDesigateInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDesigateInfoResponse
 */
GetDesigateInfoResponse Client::getDesigateInfoWithOptions(const GetDesigateInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDesigateInfo"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDesigateInfoResponse>();
}

/**
 * @summary 获取指定机器信息
 *
 * @param request GetDesigateInfoRequest
 * @return GetDesigateInfoResponse
 */
GetDesigateInfoResponse Client::getDesigateInfo(const GetDesigateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDesigateInfoWithOptions(request, runtime);
}

/**
 * @summary 获取任务执行的详细信息
 *
 * @param request GetJobExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobExecutionResponse
 */
GetJobExecutionResponse Client::getJobExecutionWithOptions(const GetJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.jobExecutionId();
  }

  if (!!request.hasMseSessionId()) {
    query["MseSessionId"] = request.mseSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobExecutionResponse>();
}

/**
 * @summary 获取任务执行的详细信息
 *
 * @param request GetJobExecutionRequest
 * @return GetJobExecutionResponse
 */
GetJobExecutionResponse Client::getJobExecution(const GetJobExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobExecutionWithOptions(request, runtime);
}

/**
 * @summary 获取任务执行的详情
 *
 * @param request GetJobExecutionProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobExecutionProgressResponse
 */
GetJobExecutionProgressResponse Client::getJobExecutionProgressWithOptions(const GetJobExecutionProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobExecutionProgress"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobExecutionProgressResponse>();
}

/**
 * @summary 获取任务执行的详情
 *
 * @param request GetJobExecutionProgressRequest
 * @return GetJobExecutionProgressResponse
 */
GetJobExecutionProgressResponse Client::getJobExecutionProgress(const GetJobExecutionProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobExecutionProgressWithOptions(request, runtime);
}

/**
 * @summary 查询任务的线程堆栈
 *
 * @param request GetJobExecutionThreadDumpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobExecutionThreadDumpResponse
 */
GetJobExecutionThreadDumpResponse Client::getJobExecutionThreadDumpWithOptions(const GetJobExecutionThreadDumpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobExecutionThreadDump"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobExecutionThreadDumpResponse>();
}

/**
 * @summary 查询任务的线程堆栈
 *
 * @param request GetJobExecutionThreadDumpRequest
 * @return GetJobExecutionThreadDumpResponse
 */
GetJobExecutionThreadDumpResponse Client::getJobExecutionThreadDump(const GetJobExecutionThreadDumpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobExecutionThreadDumpWithOptions(request, runtime);
}

/**
 * @summary 查询日志
 *
 * @param request GetLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogResponse
 */
GetLogResponse Client::getLogWithOptions(const GetLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLog"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLogResponse>();
}

/**
 * @summary 查询日志
 *
 * @param request GetLogRequest
 * @return GetLogResponse
 */
GetLogResponse Client::getLog(const GetLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLogWithOptions(request, runtime);
}

/**
 * @summary 查询事件
 *
 * @param request GetLogEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogEventResponse
 */
GetLogEventResponse Client::getLogEventWithOptions(const GetLogEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLogEvent"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLogEventResponse>();
}

/**
 * @summary 查询事件
 *
 * @param request GetLogEventRequest
 * @return GetLogEventResponse
 */
GetLogEventResponse Client::getLogEvent(const GetLogEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLogEventWithOptions(request, runtime);
}

/**
 * @summary 导入日历
 *
 * @param request ImportCalendarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportCalendarResponse
 */
ImportCalendarResponse Client::importCalendarWithOptions(const ImportCalendarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMonths()) {
    body["Months"] = request.months();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasYear()) {
    body["Year"] = request.year();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImportCalendar"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportCalendarResponse>();
}

/**
 * @summary 导入日历
 *
 * @param request ImportCalendarRequest
 * @return ImportCalendarResponse
 */
ImportCalendarResponse Client::importCalendar(const ImportCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importCalendarWithOptions(request, runtime);
}

/**
 * @summary 批量导入任务
 *
 * @param request ImportJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportJobsResponse
 */
ImportJobsResponse Client::importJobsWithOptions(const ImportJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoCreateApp()) {
    body["AutoCreateApp"] = request.autoCreateApp();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasOverwrite()) {
    body["Overwrite"] = request.overwrite();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImportJobs"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportJobsResponse>();
}

/**
 * @summary 批量导入任务
 *
 * @param request ImportJobsRequest
 * @return ImportJobsResponse
 */
ImportJobsResponse Client::importJobs(const ImportJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importJobsWithOptions(request, runtime);
}

/**
 * @summary 获取报警事件
 *
 * @param request ListAlarmEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlarmEventResponse
 */
ListAlarmEventResponse Client::listAlarmEventWithOptions(const ListAlarmEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlarmEvent"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlarmEventResponse>();
}

/**
 * @summary 获取报警事件
 *
 * @param request ListAlarmEventRequest
 * @return ListAlarmEventResponse
 */
ListAlarmEventResponse Client::listAlarmEvent(const ListAlarmEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlarmEventWithOptions(request, runtime);
}

/**
 * @summary 获取应用名字列表
 *
 * @param request ListAppNamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppNamesResponse
 */
ListAppNamesResponse Client::listAppNamesWithOptions(const ListAppNamesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppNames"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppNamesResponse>();
}

/**
 * @summary 获取应用名字列表
 *
 * @param request ListAppNamesRequest
 * @return ListAppNamesResponse
 */
ListAppNamesResponse Client::listAppNames(const ListAppNamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppNamesWithOptions(request, runtime);
}

/**
 * @summary 获取应用列表
 *
 * @param request ListAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppsResponse
 */
ListAppsResponse Client::listAppsWithOptions(const ListAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApps"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppsResponse>();
}

/**
 * @summary 获取应用列表
 *
 * @param request ListAppsRequest
 * @return ListAppsResponse
 */
ListAppsResponse Client::listApps(const ListAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppsWithOptions(request, runtime);
}

/**
 * @summary 获取日历名字列表
 *
 * @param request ListCalendarNamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCalendarNamesResponse
 */
ListCalendarNamesResponse Client::listCalendarNamesWithOptions(const ListCalendarNamesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCalendarNames"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCalendarNamesResponse>();
}

/**
 * @summary 获取日历名字列表
 *
 * @param request ListCalendarNamesRequest
 * @return ListCalendarNamesResponse
 */
ListCalendarNamesResponse Client::listCalendarNames(const ListCalendarNamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCalendarNamesWithOptions(request, runtime);
}

/**
 * @summary 查询实例列表
 *
 * @param request ListClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClustersWithOptions(const ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusters"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClustersResponse>();
}

/**
 * @summary 查询实例列表
 *
 * @param request ListClustersRequest
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClusters(const ListClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClustersWithOptions(request, runtime);
}

/**
 * @summary 查询Executor列表
 *
 * @param request ListExecutorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExecutorsResponse
 */
ListExecutorsResponse Client::listExecutorsWithOptions(const ListExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExecutors"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExecutorsResponse>();
}

/**
 * @summary 查询Executor列表
 *
 * @param request ListExecutorsRequest
 * @return ListExecutorsResponse
 */
ListExecutorsResponse Client::listExecutors(const ListExecutorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExecutorsWithOptions(request, runtime);
}

/**
 * @summary 获取任务实例列表
 *
 * @param request ListJobExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobExecutionsResponse
 */
ListJobExecutionsResponse Client::listJobExecutionsWithOptions(const ListJobExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobExecutions"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobExecutionsResponse>();
}

/**
 * @summary 获取任务实例列表
 *
 * @param request ListJobExecutionsRequest
 * @return ListJobExecutionsResponse
 */
ListJobExecutionsResponse Client::listJobExecutions(const ListJobExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobExecutionsWithOptions(request, runtime);
}

/**
 * @summary 获取任务脚本历史列表
 *
 * @param request ListJobScriptHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobScriptHistoryResponse
 */
ListJobScriptHistoryResponse Client::listJobScriptHistoryWithOptions(const ListJobScriptHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobScriptHistory"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobScriptHistoryResponse>();
}

/**
 * @summary 获取任务脚本历史列表
 *
 * @param request ListJobScriptHistoryRequest
 * @return ListJobScriptHistoryResponse
 */
ListJobScriptHistoryResponse Client::listJobScriptHistory(const ListJobScriptHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobScriptHistoryWithOptions(request, runtime);
}

/**
 * @summary 获取任务列表
 *
 * @param request ListJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const ListJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsResponse>();
}

/**
 * @summary 获取任务列表
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobsWithOptions(request, runtime);
}

/**
 * @summary 获取executor的label列表
 *
 * @param request ListLablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLablesResponse
 */
ListLablesResponse Client::listLablesWithOptions(const ListLablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLables"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLablesResponse>();
}

/**
 * @summary 获取executor的label列表
 *
 * @param request ListLablesRequest
 * @return ListLablesResponse
 */
ListLablesResponse Client::listLables(const ListLablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLablesWithOptions(request, runtime);
}

/**
 * @summary 获取可用区列表
 *
 * @param request ListRegionZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionZoneResponse
 */
ListRegionZoneResponse Client::listRegionZoneWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListRegionZone"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionZoneResponse>();
}

/**
 * @summary 获取可用区列表
 *
 * @return ListRegionZoneResponse
 */
ListRegionZoneResponse Client::listRegionZone() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionZoneWithOptions(runtime);
}

/**
 * @summary 获取所有region列表
 *
 * @param request ListRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary 获取所有region列表
 *
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(runtime);
}

/**
 * @summary 查询调度事件
 *
 * @param request ListScheduleEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduleEventResponse
 */
ListScheduleEventResponse Client::listScheduleEventWithOptions(const ListScheduleEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheduleEvent"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduleEventResponse>();
}

/**
 * @summary 查询调度事件
 *
 * @param request ListScheduleEventRequest
 * @return ListScheduleEventResponse
 */
ListScheduleEventResponse Client::listScheduleEvent(const ListScheduleEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScheduleEventWithOptions(request, runtime);
}

/**
 * @summary 获取指定时间类型和表达式未来5次调度时间
 *
 * @param request ListScheduleTimesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduleTimesResponse
 */
ListScheduleTimesResponse Client::listScheduleTimesWithOptions(const ListScheduleTimesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheduleTimes"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduleTimesResponse>();
}

/**
 * @summary 获取指定时间类型和表达式未来5次调度时间
 *
 * @param request ListScheduleTimesRequest
 * @return ListScheduleTimesResponse
 */
ListScheduleTimesResponse Client::listScheduleTimes(const ListScheduleTimesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScheduleTimesWithOptions(request, runtime);
}

/**
 * @summary 指定执行器
 *
 * @param tmpReq OperateDesignateExecutorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateDesignateExecutorsResponse
 */
OperateDesignateExecutorsResponse Client::operateDesignateExecutorsWithOptions(const OperateDesignateExecutorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OperateDesignateExecutorsShrinkRequest request = OperateDesignateExecutorsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddressList()) {
    request.setAddressListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.addressList(), "AddressList", "json"));
  }

  json body = {};
  if (!!request.hasAddressListShrink()) {
    body["AddressList"] = request.addressListShrink();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDesignateType()) {
    body["DesignateType"] = request.designateType();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasTransferable()) {
    body["Transferable"] = request.transferable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateDesignateExecutors"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateDesignateExecutorsResponse>();
}

/**
 * @summary 指定执行器
 *
 * @param request OperateDesignateExecutorsRequest
 * @return OperateDesignateExecutorsResponse
 */
OperateDesignateExecutorsResponse Client::operateDesignateExecutors(const OperateDesignateExecutorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateDesignateExecutorsWithOptions(request, runtime);
}

/**
 * @summary 批量禁用任务
 *
 * @param tmpReq OperateDisableJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateDisableJobsResponse
 */
OperateDisableJobsResponse Client::operateDisableJobsWithOptions(const OperateDisableJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OperateDisableJobsShrinkRequest request = OperateDisableJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobIds()) {
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobIds(), "JobIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasJobIdsShrink()) {
    body["JobIds"] = request.jobIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateDisableJobs"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateDisableJobsResponse>();
}

/**
 * @summary 批量禁用任务
 *
 * @param request OperateDisableJobsRequest
 * @return OperateDisableJobsResponse
 */
OperateDisableJobsResponse Client::operateDisableJobs(const OperateDisableJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateDisableJobsWithOptions(request, runtime);
}

/**
 * @summary 批量启用任务
 *
 * @param tmpReq OperateEnableJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateEnableJobsResponse
 */
OperateEnableJobsResponse Client::operateEnableJobsWithOptions(const OperateEnableJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OperateEnableJobsShrinkRequest request = OperateEnableJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobIds()) {
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobIds(), "JobIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasJobIdsShrink()) {
    body["JobIds"] = request.jobIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateEnableJobs"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateEnableJobsResponse>();
}

/**
 * @summary 批量启用任务
 *
 * @param request OperateEnableJobsRequest
 * @return OperateEnableJobsResponse
 */
OperateEnableJobsResponse Client::operateEnableJobs(const OperateEnableJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateEnableJobsWithOptions(request, runtime);
}

/**
 * @summary 运行一次任务
 *
 * @param request OperateExecuteJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateExecuteJobResponse
 */
OperateExecuteJobResponse Client::operateExecuteJobWithOptions(const OperateExecuteJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceParameters()) {
    body["InstanceParameters"] = request.instanceParameters();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasLabel()) {
    body["Label"] = request.label();
  }

  if (!!request.hasWorker()) {
    body["Worker"] = request.worker();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateExecuteJob"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateExecuteJobResponse>();
}

/**
 * @summary 运行一次任务
 *
 * @param request OperateExecuteJobRequest
 * @return OperateExecuteJobResponse
 */
OperateExecuteJobResponse Client::operateExecuteJob(const OperateExecuteJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateExecuteJobWithOptions(request, runtime);
}

/**
 * @summary 重刷任务历史数据
 *
 * @param request OperateRerunJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateRerunJobResponse
 */
OperateRerunJobResponse Client::operateRerunJobWithOptions(const OperateRerunJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataTime()) {
    query["DataTime"] = request.dataTime();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateRerunJob"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateRerunJobResponse>();
}

/**
 * @summary 重刷任务历史数据
 *
 * @param request OperateRerunJobRequest
 * @return OperateRerunJobResponse
 */
OperateRerunJobResponse Client::operateRerunJob(const OperateRerunJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateRerunJobWithOptions(request, runtime);
}

/**
 * @summary 重跑失败的任务实例
 *
 * @param tmpReq OperateRetryJobExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateRetryJobExecutionResponse
 */
OperateRetryJobExecutionResponse Client::operateRetryJobExecutionWithOptions(const OperateRetryJobExecutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OperateRetryJobExecutionShrinkRequest request = OperateRetryJobExecutionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskList()) {
    request.setTaskListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.taskList(), "TaskList", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.jobExecutionId();
  }

  if (!!request.hasTaskListShrink()) {
    query["TaskList"] = request.taskListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateRetryJobExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateRetryJobExecutionResponse>();
}

/**
 * @summary 重跑失败的任务实例
 *
 * @param request OperateRetryJobExecutionRequest
 * @return OperateRetryJobExecutionResponse
 */
OperateRetryJobExecutionResponse Client::operateRetryJobExecution(const OperateRetryJobExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateRetryJobExecutionWithOptions(request, runtime);
}

/**
 * @summary 停止正在运行的任务实例
 *
 * @param tmpReq OperateStopJobExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateStopJobExecutionResponse
 */
OperateStopJobExecutionResponse Client::operateStopJobExecutionWithOptions(const OperateStopJobExecutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OperateStopJobExecutionShrinkRequest request = OperateStopJobExecutionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskList()) {
    request.setTaskListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.taskList(), "TaskList", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.jobExecutionId();
  }

  if (!!request.hasTaskListShrink()) {
    query["TaskList"] = request.taskListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateStopJobExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateStopJobExecutionResponse>();
}

/**
 * @summary 停止正在运行的任务实例
 *
 * @param request OperateStopJobExecutionRequest
 * @return OperateStopJobExecutionResponse
 */
OperateStopJobExecutionResponse Client::operateStopJobExecution(const OperateStopJobExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateStopJobExecutionWithOptions(request, runtime);
}

/**
 * @summary 更新应用分组
 *
 * @param request UpdateAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppResponse
 */
UpdateAppResponse Client::updateAppWithOptions(const UpdateAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessToken()) {
    body["AccessToken"] = request.accessToken();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEnableLog()) {
    body["EnableLog"] = request.enableLog();
  }

  if (!!request.hasLabelRouteStrategy()) {
    body["LabelRouteStrategy"] = request.labelRouteStrategy();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.maxConcurrency();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateApp"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppResponse>();
}

/**
 * @summary 更新应用分组
 *
 * @param request UpdateAppRequest
 * @return UpdateAppResponse
 */
UpdateAppResponse Client::updateApp(const UpdateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppWithOptions(request, runtime);
}

/**
 * @summary 更新集群
 *
 * @param request UpdateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClusterResponse
 */
UpdateClusterResponse Client::updateClusterWithOptions(const UpdateClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCluster"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClusterResponse>();
}

/**
 * @summary 更新集群
 *
 * @param request UpdateClusterRequest
 * @return UpdateClusterResponse
 */
UpdateClusterResponse Client::updateCluster(const UpdateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClusterWithOptions(request, runtime);
}

/**
 * @summary 更新任务信息
 *
 * @param tmpReq UpdateJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateJobResponse
 */
UpdateJobResponse Client::updateJobWithOptions(const UpdateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateJobShrinkRequest request = UpdateJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNoticeConfig()) {
    request.setNoticeConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.noticeConfig(), "NoticeConfig", "json"));
  }

  if (!!tmpReq.hasNoticeContacts()) {
    request.setNoticeContactsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.noticeContacts(), "NoticeContacts", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasAttemptInterval()) {
    body["AttemptInterval"] = request.attemptInterval();
  }

  if (!!request.hasCalendar()) {
    body["Calendar"] = request.calendar();
  }

  if (!!request.hasChildJobId()) {
    body["ChildJobId"] = request.childJobId();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasExecutorBlockStrategy()) {
    body["ExecutorBlockStrategy"] = request.executorBlockStrategy();
  }

  if (!!request.hasJobHandler()) {
    body["JobHandler"] = request.jobHandler();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasMaxAttempt()) {
    body["MaxAttempt"] = request.maxAttempt();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.maxConcurrency();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNoticeConfigShrink()) {
    body["NoticeConfig"] = request.noticeConfigShrink();
  }

  if (!!request.hasNoticeContactsShrink()) {
    body["NoticeContacts"] = request.noticeContactsShrink();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.parameters();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasRouteStrategy()) {
    body["RouteStrategy"] = request.routeStrategy();
  }

  if (!!request.hasScript()) {
    body["Script"] = request.script();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTimeExpression()) {
    body["TimeExpression"] = request.timeExpression();
  }

  if (!!request.hasTimeType()) {
    body["TimeType"] = request.timeType();
  }

  if (!!request.hasTimezone()) {
    body["Timezone"] = request.timezone();
  }

  if (!!request.hasWeight()) {
    body["Weight"] = request.weight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateJob"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateJobResponse>();
}

/**
 * @summary 更新任务信息
 *
 * @param request UpdateJobRequest
 * @return UpdateJobResponse
 */
UpdateJobResponse Client::updateJob(const UpdateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateJobWithOptions(request, runtime);
}

/**
 * @summary 更新任务脚本内容
 *
 * @param request UpdateJobScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateJobScriptResponse
 */
UpdateJobScriptResponse Client::updateJobScriptWithOptions(const UpdateJobScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasScriptContent()) {
    body["ScriptContent"] = request.scriptContent();
  }

  if (!!request.hasVersionDescription()) {
    body["VersionDescription"] = request.versionDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateJobScript"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateJobScriptResponse>();
}

/**
 * @summary 更新任务脚本内容
 *
 * @param request UpdateJobScriptRequest
 * @return UpdateJobScriptResponse
 */
UpdateJobScriptResponse Client::updateJobScript(const UpdateJobScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateJobScriptWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace SchedulerX320240624