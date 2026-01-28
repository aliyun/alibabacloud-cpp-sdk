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
    body["AccessToken"] = request.getAccessToken();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasAppType()) {
    body["AppType"] = request.getAppType();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEnableLog()) {
    body["EnableLog"] = request.getEnableLog();
  }

  if (!!request.hasLabelRouteStrategy()) {
    body["LabelRouteStrategy"] = request.getLabelRouteStrategy();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
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
 * @summary 创建日历
 *
 * @param request CreateCalendarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCalendarResponse
 */
CreateCalendarResponse Client::createCalendarWithOptions(const CreateCalendarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCalendarName()) {
    body["CalendarName"] = request.getCalendarName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMonths()) {
    body["Months"] = request.getMonths();
  }

  if (!!request.hasYear()) {
    body["Year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateCalendar"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCalendarResponse>();
}

/**
 * @summary 创建日历
 *
 * @param request CreateCalendarRequest
 * @return CreateCalendarResponse
 */
CreateCalendarResponse Client::createCalendar(const CreateCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCalendarWithOptions(request, runtime);
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
    request.setVSwitchesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVSwitches(), "VSwitches", "json"));
  }

  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  json body = {};
  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasClusterSpec()) {
    body["ClusterSpec"] = request.getClusterSpec();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasEngineType()) {
    body["EngineType"] = request.getEngineType();
  }

  if (!!request.hasPricingCycle()) {
    body["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasVSwitchesShrink()) {
    body["VSwitches"] = request.getVSwitchesShrink();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
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
 * @summary 创建数据源
 *
 * @param request CreateDatasourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasourceResponse
 */
CreateDatasourceResponse Client::createDatasourceWithOptions(const CreateDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConnectionParams()) {
    body["ConnectionParams"] = request.getConnectionParams();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDatasource"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasourceResponse>();
}

/**
 * @summary 创建数据源
 *
 * @param request CreateDatasourceRequest
 * @return CreateDatasourceResponse
 */
CreateDatasourceResponse Client::createDatasource(const CreateDatasourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasourceWithOptions(request, runtime);
}

/**
 * @summary 添加执行器
 *
 * @param request CreateExecutorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExecutorsResponse
 */
CreateExecutorsResponse Client::createExecutorsWithOptions(const CreateExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkerType()) {
    body["WorkerType"] = request.getWorkerType();
  }

  if (!!request.hasWorkers()) {
    body["Workers"] = request.getWorkers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateExecutors"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExecutorsResponse>();
}

/**
 * @summary 添加执行器
 *
 * @param request CreateExecutorsRequest
 * @return CreateExecutorsResponse
 */
CreateExecutorsResponse Client::createExecutors(const CreateExecutorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExecutorsWithOptions(request, runtime);
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
  if (!!tmpReq.hasCoordinate()) {
    request.setCoordinateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCoordinate(), "Coordinate", "json"));
  }

  if (!!tmpReq.hasNoticeConfig()) {
    request.setNoticeConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNoticeConfig(), "NoticeConfig", "json"));
  }

  if (!!tmpReq.hasNoticeContacts()) {
    request.setNoticeContactsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNoticeContacts(), "NoticeContacts", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasAttemptInterval()) {
    body["AttemptInterval"] = request.getAttemptInterval();
  }

  if (!!request.hasCalendar()) {
    body["Calendar"] = request.getCalendar();
  }

  if (!!request.hasChildJobId()) {
    body["ChildJobId"] = request.getChildJobId();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCoordinateShrink()) {
    body["Coordinate"] = request.getCoordinateShrink();
  }

  if (!!request.hasDependentStrategy()) {
    body["DependentStrategy"] = request.getDependentStrategy();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExecutorBlockStrategy()) {
    body["ExecutorBlockStrategy"] = request.getExecutorBlockStrategy();
  }

  if (!!request.hasJobHandler()) {
    body["JobHandler"] = request.getJobHandler();
  }

  if (!!request.hasJobType()) {
    body["JobType"] = request.getJobType();
  }

  if (!!request.hasMaxAttempt()) {
    body["MaxAttempt"] = request.getMaxAttempt();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNoticeConfigShrink()) {
    body["NoticeConfig"] = request.getNoticeConfigShrink();
  }

  if (!!request.hasNoticeContactsShrink()) {
    body["NoticeContacts"] = request.getNoticeContactsShrink();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.getParameters();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasRouteStrategy()) {
    body["RouteStrategy"] = request.getRouteStrategy();
  }

  if (!!request.hasScript()) {
    body["Script"] = request.getScript();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStartTimeType()) {
    body["StartTimeType"] = request.getStartTimeType();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTimeExpression()) {
    body["TimeExpression"] = request.getTimeExpression();
  }

  if (!!request.hasTimeType()) {
    body["TimeType"] = request.getTimeType();
  }

  if (!!request.hasTimezone()) {
    body["Timezone"] = request.getTimezone();
  }

  if (!!request.hasWeight()) {
    body["Weight"] = request.getWeight();
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
 * @summary 创建应用
 *
 * @param request CreateWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkflowResponse
 */
CreateWorkflowResponse Client::createWorkflowWithOptions(const CreateWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasCalendar()) {
    body["Calendar"] = request.getCalendar();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTimeExpression()) {
    body["TimeExpression"] = request.getTimeExpression();
  }

  if (!!request.hasTimeType()) {
    body["TimeType"] = request.getTimeType();
  }

  if (!!request.hasTimezone()) {
    body["Timezone"] = request.getTimezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWorkflow"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkflowResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request CreateWorkflowRequest
 * @return CreateWorkflowResponse
 */
CreateWorkflowResponse Client::createWorkflow(const CreateWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkflowWithOptions(request, runtime);
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
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
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
 * @summary 删除日历
 *
 * @param request DeleteCalendarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCalendarResponse
 */
DeleteCalendarResponse Client::deleteCalendarWithOptions(const DeleteCalendarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCalendarName()) {
    body["CalendarName"] = request.getCalendarName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasYear()) {
    body["Year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCalendar"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCalendarResponse>();
}

/**
 * @summary 删除日历
 *
 * @param request DeleteCalendarRequest
 * @return DeleteCalendarResponse
 */
DeleteCalendarResponse Client::deleteCalendar(const DeleteCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCalendarWithOptions(request, runtime);
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
    query["ClusterId"] = request.getClusterId();
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
 * @summary 删除数据源
 *
 * @param request DeleteDatasourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasourceResponse
 */
DeleteDatasourceResponse Client::deleteDatasourceWithOptions(const DeleteDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.getDatasourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDatasource"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasourceResponse>();
}

/**
 * @summary 删除数据源
 *
 * @param request DeleteDatasourceRequest
 * @return DeleteDatasourceResponse
 */
DeleteDatasourceResponse Client::deleteDatasource(const DeleteDatasourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasourceWithOptions(request, runtime);
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
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobIds(), "JobIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobIdsShrink()) {
    body["JobIds"] = request.getJobIdsShrink();
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
 * @summary 删除工作流
 *
 * @param request DeleteWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkflowResponse
 */
DeleteWorkflowResponse Client::deleteWorkflowWithOptions(const DeleteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDeleteJobs()) {
    body["DeleteJobs"] = request.getDeleteJobs();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteWorkflow"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkflowResponse>();
}

/**
 * @summary 删除工作流
 *
 * @param request DeleteWorkflowRequest
 * @return DeleteWorkflowResponse
 */
DeleteWorkflowResponse Client::deleteWorkflow(const DeleteWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkflowWithOptions(request, runtime);
}

/**
 * @summary 批量删除工作流
 *
 * @param tmpReq DeleteWorkflowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkflowsResponse
 */
DeleteWorkflowsResponse Client::deleteWorkflowsWithOptions(const DeleteWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteWorkflowsShrinkRequest request = DeleteWorkflowsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWorkflowIds()) {
    request.setWorkflowIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkflowIds(), "WorkflowIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDeleteJobs()) {
    body["DeleteJobs"] = request.getDeleteJobs();
  }

  if (!!request.hasWorkflowIdsShrink()) {
    body["WorkflowIds"] = request.getWorkflowIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteWorkflows"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkflowsResponse>();
}

/**
 * @summary 批量删除工作流
 *
 * @param request DeleteWorkflowsRequest
 * @return DeleteWorkflowsResponse
 */
DeleteWorkflowsResponse Client::deleteWorkflows(const DeleteWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkflowsWithOptions(request, runtime);
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
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobIds(), "JobIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasExportJobType()) {
    body["ExportJobType"] = request.getExportJobType();
  }

  if (!!request.hasJobIdsShrink()) {
    body["JobIds"] = request.getJobIdsShrink();
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
 * @summary 批量导出工作流信息
 *
 * @param tmpReq ExportWorkflowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportWorkflowsResponse
 */
ExportWorkflowsResponse Client::exportWorkflowsWithOptions(const ExportWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportWorkflowsShrinkRequest request = ExportWorkflowsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWorkflowId()) {
    request.setWorkflowIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkflowId(), "WorkflowId", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowIdShrink()) {
    body["WorkflowId"] = request.getWorkflowIdShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportWorkflows"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "byte"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportWorkflowsResponse>();
}

/**
 * @summary 批量导出工作流信息
 *
 * @param request ExportWorkflowsRequest
 * @return ExportWorkflowsResponse
 */
ExportWorkflowsResponse Client::exportWorkflows(const ExportWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportWorkflowsWithOptions(request, runtime);
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
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
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
 * @summary 获取日历信息
 *
 * @param request GetCalendarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCalendarResponse
 */
GetCalendarResponse Client::getCalendarWithOptions(const GetCalendarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalendarName()) {
    query["CalendarName"] = request.getCalendarName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasYear()) {
    query["Year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCalendar"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCalendarResponse>();
}

/**
 * @summary 获取日历信息
 *
 * @param request GetCalendarRequest
 * @return GetCalendarResponse
 */
GetCalendarResponse Client::getCalendar(const GetCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCalendarWithOptions(request, runtime);
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
 * @summary 查询执行器配置信息
 *
 * @param request GetExecutorConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExecutorConfigResponse
 */
GetExecutorConfigResponse Client::getExecutorConfigWithOptions(const GetExecutorConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExecutorConfig"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExecutorConfigResponse>();
}

/**
 * @summary 查询执行器配置信息
 *
 * @param request GetExecutorConfigRequest
 * @return GetExecutorConfigResponse
 */
GetExecutorConfigResponse Client::getExecutorConfig(const GetExecutorConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExecutorConfigWithOptions(request, runtime);
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
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.getJobExecutionId();
  }

  if (!!request.hasMseSessionId()) {
    query["MseSessionId"] = request.getMseSessionId();
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
 * @summary 获取工作流
 *
 * @param request GetWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowResponse
 */
GetWorkflowResponse Client::getWorkflowWithOptions(const GetWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkflow"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowResponse>();
}

/**
 * @summary 获取工作流
 *
 * @param request GetWorkflowRequest
 * @return GetWorkflowResponse
 */
GetWorkflowResponse Client::getWorkflow(const GetWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkflowWithOptions(request, runtime);
}

/**
 * @summary 获取工作流的DAG信息
 *
 * @param request GetWorkflowDAGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowDAGResponse
 */
GetWorkflowDAGResponse Client::getWorkflowDAGWithOptions(const GetWorkflowDAGRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkflowDAG"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowDAGResponse>();
}

/**
 * @summary 获取工作流的DAG信息
 *
 * @param request GetWorkflowDAGRequest
 * @return GetWorkflowDAGResponse
 */
GetWorkflowDAGResponse Client::getWorkflowDAG(const GetWorkflowDAGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkflowDAGWithOptions(request, runtime);
}

/**
 * @summary 获取工作流的DAG信息
 *
 * @param request GetWorkflowDAGPreviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowDAGPreviewResponse
 */
GetWorkflowDAGPreviewResponse Client::getWorkflowDAGPreviewWithOptions(const GetWorkflowDAGPreviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDagVersion()) {
    query["DagVersion"] = request.getDagVersion();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkflowDAGPreview"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowDAGPreviewResponse>();
}

/**
 * @summary 获取工作流的DAG信息
 *
 * @param request GetWorkflowDAGPreviewRequest
 * @return GetWorkflowDAGPreviewResponse
 */
GetWorkflowDAGPreviewResponse Client::getWorkflowDAGPreview(const GetWorkflowDAGPreviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkflowDAGPreviewWithOptions(request, runtime);
}

/**
 * @summary 获取工作流实例DAG信息
 *
 * @param request GetWorkflowExecutionDAGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowExecutionDAGResponse
 */
GetWorkflowExecutionDAGResponse Client::getWorkflowExecutionDAGWithOptions(const GetWorkflowExecutionDAGRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowExecutionId()) {
    query["WorkflowExecutionId"] = request.getWorkflowExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkflowExecutionDAG"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowExecutionDAGResponse>();
}

/**
 * @summary 获取工作流实例DAG信息
 *
 * @param request GetWorkflowExecutionDAGRequest
 * @return GetWorkflowExecutionDAGResponse
 */
GetWorkflowExecutionDAGResponse Client::getWorkflowExecutionDAG(const GetWorkflowExecutionDAGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkflowExecutionDAGWithOptions(request, runtime);
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
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMonths()) {
    body["Months"] = request.getMonths();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasYear()) {
    body["Year"] = request.getYear();
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
    body["AutoCreateApp"] = request.getAutoCreateApp();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasOverwrite()) {
    body["Overwrite"] = request.getOverwrite();
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
 * @summary 批量导入工作流
 *
 * @param request ImportWorkflowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportWorkflowsResponse
 */
ImportWorkflowsResponse Client::importWorkflowsWithOptions(const ImportWorkflowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoCreateApp()) {
    body["AutoCreateApp"] = request.getAutoCreateApp();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasOverwrite()) {
    body["Overwrite"] = request.getOverwrite();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImportWorkflows"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportWorkflowsResponse>();
}

/**
 * @summary 批量导入工作流
 *
 * @param request ImportWorkflowsRequest
 * @return ImportWorkflowsResponse
 */
ImportWorkflowsResponse Client::importWorkflows(const ImportWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importWorkflowsWithOptions(request, runtime);
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
 * @summary 查询日历
 *
 * @param request ListCalendarsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCalendarsResponse
 */
ListCalendarsResponse Client::listCalendarsWithOptions(const ListCalendarsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalendarName()) {
    query["CalendarName"] = request.getCalendarName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasFetchCalendarDetail()) {
    query["FetchCalendarDetail"] = request.getFetchCalendarDetail();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasYear()) {
    query["Year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCalendars"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCalendarsResponse>();
}

/**
 * @summary 查询日历
 *
 * @param request ListCalendarsRequest
 * @return ListCalendarsResponse
 */
ListCalendarsResponse Client::listCalendars(const ListCalendarsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCalendarsWithOptions(request, runtime);
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
 * @summary 获取数据源列表
 *
 * @param request ListDatasourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasourcesResponse
 */
ListDatasourcesResponse Client::listDatasourcesWithOptions(const ListDatasourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasources"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasourcesResponse>();
}

/**
 * @summary 获取数据源列表
 *
 * @param request ListDatasourcesRequest
 * @return ListDatasourcesResponse
 */
ListDatasourcesResponse Client::listDatasources(const ListDatasourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatasourcesWithOptions(request, runtime);
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
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.getJobExecutionId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWorkflowExecutionId()) {
    query["WorkflowExecutionId"] = request.getWorkflowExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobExecutions"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
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
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasJobHandler()) {
    query["JobHandler"] = request.getJobHandler();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
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
 * @summary 获取k8s资源列表
 *
 * @param request ListK8sResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListK8sResourceResponse
 */
ListK8sResourceResponse Client::listK8sResourceWithOptions(const ListK8sResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasK8sClusterId()) {
    query["K8sClusterId"] = request.getK8sClusterId();
  }

  if (!!request.hasK8sNamespace()) {
    query["K8sNamespace"] = request.getK8sNamespace();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListK8sResource"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListK8sResourceResponse>();
}

/**
 * @summary 获取k8s资源列表
 *
 * @param request ListK8sResourceRequest
 * @return ListK8sResourceResponse
 */
ListK8sResourceResponse Client::listK8sResource(const ListK8sResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listK8sResourceWithOptions(request, runtime);
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
 * @summary 获取流程实例列表
 *
 * @param request ListWorkflowExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowExecutionsResponse
 */
ListWorkflowExecutionsResponse Client::listWorkflowExecutionsWithOptions(const ListWorkflowExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWorkflowExecutionId()) {
    query["WorkflowExecutionId"] = request.getWorkflowExecutionId();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  if (!!request.hasWorkflowName()) {
    query["WorkflowName"] = request.getWorkflowName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkflowExecutions"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowExecutionsResponse>();
}

/**
 * @summary 获取流程实例列表
 *
 * @param request ListWorkflowExecutionsRequest
 * @return ListWorkflowExecutionsResponse
 */
ListWorkflowExecutionsResponse Client::listWorkflowExecutions(const ListWorkflowExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkflowExecutionsWithOptions(request, runtime);
}

/**
 * @summary 获取当前工作流版本列表
 *
 * @param request ListWorkflowVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowVersionsResponse
 */
ListWorkflowVersionsResponse Client::listWorkflowVersionsWithOptions(const ListWorkflowVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkflowVersions"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowVersionsResponse>();
}

/**
 * @summary 获取当前工作流版本列表
 *
 * @param request ListWorkflowVersionsRequest
 * @return ListWorkflowVersionsResponse
 */
ListWorkflowVersionsResponse Client::listWorkflowVersions(const ListWorkflowVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkflowVersionsWithOptions(request, runtime);
}

/**
 * @summary 获取工作流列表
 *
 * @param request ListWorkflowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowsResponse
 */
ListWorkflowsResponse Client::listWorkflowsWithOptions(const ListWorkflowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkflows"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowsResponse>();
}

/**
 * @summary 获取工作流列表
 *
 * @param request ListWorkflowsRequest
 * @return ListWorkflowsResponse
 */
ListWorkflowsResponse Client::listWorkflows(const ListWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkflowsWithOptions(request, runtime);
}

/**
 * @summary 补数工作流
 *
 * @param request OperateBackfillWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateBackfillWorkflowResponse
 */
OperateBackfillWorkflowResponse Client::operateBackfillWorkflowWithOptions(const OperateBackfillWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateBackfillWorkflow"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateBackfillWorkflowResponse>();
}

/**
 * @summary 补数工作流
 *
 * @param request OperateBackfillWorkflowRequest
 * @return OperateBackfillWorkflowResponse
 */
OperateBackfillWorkflowResponse Client::operateBackfillWorkflow(const OperateBackfillWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateBackfillWorkflowWithOptions(request, runtime);
}

/**
 * @summary 连接数据源
 *
 * @param request OperateConnectDatasourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateConnectDatasourceResponse
 */
OperateConnectDatasourceResponse Client::operateConnectDatasourceWithOptions(const OperateConnectDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConnectionParams()) {
    body["ConnectionParams"] = request.getConnectionParams();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateConnectDatasource"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateConnectDatasourceResponse>();
}

/**
 * @summary 连接数据源
 *
 * @param request OperateConnectDatasourceRequest
 * @return OperateConnectDatasourceResponse
 */
OperateConnectDatasourceResponse Client::operateConnectDatasource(const OperateConnectDatasourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateConnectDatasourceWithOptions(request, runtime);
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
    request.setAddressListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddressList(), "AddressList", "json"));
  }

  json body = {};
  if (!!request.hasAddressListShrink()) {
    body["AddressList"] = request.getAddressListShrink();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDesignateType()) {
    body["DesignateType"] = request.getDesignateType();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  if (!!request.hasTransferable()) {
    body["Transferable"] = request.getTransferable();
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
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobIds(), "JobIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobIdsShrink()) {
    body["JobIds"] = request.getJobIdsShrink();
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
 * @summary 批量禁用工作流
 *
 * @param tmpReq OperateDisableWorkflowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateDisableWorkflowsResponse
 */
OperateDisableWorkflowsResponse Client::operateDisableWorkflowsWithOptions(const OperateDisableWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OperateDisableWorkflowsShrinkRequest request = OperateDisableWorkflowsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWorkflowIds()) {
    request.setWorkflowIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkflowIds(), "WorkflowIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowIdsShrink()) {
    body["WorkflowIds"] = request.getWorkflowIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateDisableWorkflows"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateDisableWorkflowsResponse>();
}

/**
 * @summary 批量禁用工作流
 *
 * @param request OperateDisableWorkflowsRequest
 * @return OperateDisableWorkflowsResponse
 */
OperateDisableWorkflowsResponse Client::operateDisableWorkflows(const OperateDisableWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateDisableWorkflowsWithOptions(request, runtime);
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
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobIds(), "JobIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobIdsShrink()) {
    body["JobIds"] = request.getJobIdsShrink();
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
 * @summary 批量启用工作流
 *
 * @param tmpReq OperateEnableWorkflowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateEnableWorkflowsResponse
 */
OperateEnableWorkflowsResponse Client::operateEnableWorkflowsWithOptions(const OperateEnableWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OperateEnableWorkflowsShrinkRequest request = OperateEnableWorkflowsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWorkflowIds()) {
    request.setWorkflowIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkflowIds(), "WorkflowIds", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowIdsShrink()) {
    body["WorkflowIds"] = request.getWorkflowIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateEnableWorkflows"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateEnableWorkflowsResponse>();
}

/**
 * @summary 批量启用工作流
 *
 * @param request OperateEnableWorkflowsRequest
 * @return OperateEnableWorkflowsResponse
 */
OperateEnableWorkflowsResponse Client::operateEnableWorkflows(const OperateEnableWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateEnableWorkflowsWithOptions(request, runtime);
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
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasInstanceParameters()) {
    body["InstanceParameters"] = request.getInstanceParameters();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  if (!!request.hasLabel()) {
    body["Label"] = request.getLabel();
  }

  if (!!request.hasWorker()) {
    body["Worker"] = request.getWorker();
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
 * @summary 运行一次工作流
 *
 * @param request OperateExecuteWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateExecuteWorkflowResponse
 */
OperateExecuteWorkflowResponse Client::operateExecuteWorkflowWithOptions(const OperateExecuteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateExecuteWorkflow"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateExecuteWorkflowResponse>();
}

/**
 * @summary 运行一次工作流
 *
 * @param request OperateExecuteWorkflowRequest
 * @return OperateExecuteWorkflowResponse
 */
OperateExecuteWorkflowResponse Client::operateExecuteWorkflow(const OperateExecuteWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateExecuteWorkflowWithOptions(request, runtime);
}

/**
 * @summary Hold住任务实例
 *
 * @param request OperateHoldJobExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateHoldJobExecutionResponse
 */
OperateHoldJobExecutionResponse Client::operateHoldJobExecutionWithOptions(const OperateHoldJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.getJobExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateHoldJobExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateHoldJobExecutionResponse>();
}

/**
 * @summary Hold住任务实例
 *
 * @param request OperateHoldJobExecutionRequest
 * @return OperateHoldJobExecutionResponse
 */
OperateHoldJobExecutionResponse Client::operateHoldJobExecution(const OperateHoldJobExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateHoldJobExecutionWithOptions(request, runtime);
}

/**
 * @summary 将工作流中未开始的节点置为Held状态
 *
 * @param request OperateHoldWorkflowExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateHoldWorkflowExecutionResponse
 */
OperateHoldWorkflowExecutionResponse Client::operateHoldWorkflowExecutionWithOptions(const OperateHoldWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowExecutionId()) {
    body["WorkflowExecutionId"] = request.getWorkflowExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateHoldWorkflowExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateHoldWorkflowExecutionResponse>();
}

/**
 * @summary 将工作流中未开始的节点置为Held状态
 *
 * @param request OperateHoldWorkflowExecutionRequest
 * @return OperateHoldWorkflowExecutionResponse
 */
OperateHoldWorkflowExecutionResponse Client::operateHoldWorkflowExecution(const OperateHoldWorkflowExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateHoldWorkflowExecutionWithOptions(request, runtime);
}

/**
 * @summary 标记任务实例为成功状态
 *
 * @param request OperateMarkSuccessJobExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateMarkSuccessJobExecutionResponse
 */
OperateMarkSuccessJobExecutionResponse Client::operateMarkSuccessJobExecutionWithOptions(const OperateMarkSuccessJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.getJobExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateMarkSuccessJobExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateMarkSuccessJobExecutionResponse>();
}

/**
 * @summary 标记任务实例为成功状态
 *
 * @param request OperateMarkSuccessJobExecutionRequest
 * @return OperateMarkSuccessJobExecutionResponse
 */
OperateMarkSuccessJobExecutionResponse Client::operateMarkSuccessJobExecution(const OperateMarkSuccessJobExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateMarkSuccessJobExecutionWithOptions(request, runtime);
}

/**
 * @summary 将工作流实例标记为成功
 *
 * @param request OperateMarkSuccessWorkflowExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateMarkSuccessWorkflowExecutionResponse
 */
OperateMarkSuccessWorkflowExecutionResponse Client::operateMarkSuccessWorkflowExecutionWithOptions(const OperateMarkSuccessWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowExecutionId()) {
    body["WorkflowExecutionId"] = request.getWorkflowExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateMarkSuccessWorkflowExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateMarkSuccessWorkflowExecutionResponse>();
}

/**
 * @summary 将工作流实例标记为成功
 *
 * @param request OperateMarkSuccessWorkflowExecutionRequest
 * @return OperateMarkSuccessWorkflowExecutionResponse
 */
OperateMarkSuccessWorkflowExecutionResponse Client::operateMarkSuccessWorkflowExecution(const OperateMarkSuccessWorkflowExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateMarkSuccessWorkflowExecutionWithOptions(request, runtime);
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
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDataTime()) {
    query["DataTime"] = request.getDataTime();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
    request.setTaskListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskList(), "TaskList", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.getJobExecutionId();
  }

  if (!!request.hasTaskListShrink()) {
    query["TaskList"] = request.getTaskListShrink();
  }

  if (!!request.hasTriggerChild()) {
    query["TriggerChild"] = request.getTriggerChild();
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
 * @summary 重跑工作流实例
 *
 * @param request OperateRetryWorkflowExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateRetryWorkflowExecutionResponse
 */
OperateRetryWorkflowExecutionResponse Client::operateRetryWorkflowExecutionWithOptions(const OperateRetryWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasOnlyFailed()) {
    body["OnlyFailed"] = request.getOnlyFailed();
  }

  if (!!request.hasWorkflowExecutionId()) {
    body["WorkflowExecutionId"] = request.getWorkflowExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateRetryWorkflowExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateRetryWorkflowExecutionResponse>();
}

/**
 * @summary 重跑工作流实例
 *
 * @param request OperateRetryWorkflowExecutionRequest
 * @return OperateRetryWorkflowExecutionResponse
 */
OperateRetryWorkflowExecutionResponse Client::operateRetryWorkflowExecution(const OperateRetryWorkflowExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateRetryWorkflowExecutionWithOptions(request, runtime);
}

/**
 * @summary 跳过任务实例
 *
 * @param request OperateSkipJobExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateSkipJobExecutionResponse
 */
OperateSkipJobExecutionResponse Client::operateSkipJobExecutionWithOptions(const OperateSkipJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.getJobExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateSkipJobExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateSkipJobExecutionResponse>();
}

/**
 * @summary 跳过任务实例
 *
 * @param request OperateSkipJobExecutionRequest
 * @return OperateSkipJobExecutionResponse
 */
OperateSkipJobExecutionResponse Client::operateSkipJobExecution(const OperateSkipJobExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateSkipJobExecutionWithOptions(request, runtime);
}

/**
 * @summary 停止运行中的任务实例
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
    request.setTaskListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskList(), "TaskList", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.getJobExecutionId();
  }

  if (!!request.hasTaskListShrink()) {
    query["TaskList"] = request.getTaskListShrink();
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
 * @summary 停止运行中的任务实例
 *
 * @param request OperateStopJobExecutionRequest
 * @return OperateStopJobExecutionResponse
 */
OperateStopJobExecutionResponse Client::operateStopJobExecution(const OperateStopJobExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateStopJobExecutionWithOptions(request, runtime);
}

/**
 * @summary 停止正在运行的工作流实例
 *
 * @param request OperateStopWorkflowExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateStopWorkflowExecutionResponse
 */
OperateStopWorkflowExecutionResponse Client::operateStopWorkflowExecutionWithOptions(const OperateStopWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowExecutionId()) {
    body["WorkflowExecutionId"] = request.getWorkflowExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateStopWorkflowExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateStopWorkflowExecutionResponse>();
}

/**
 * @summary 停止正在运行的工作流实例
 *
 * @param request OperateStopWorkflowExecutionRequest
 * @return OperateStopWorkflowExecutionResponse
 */
OperateStopWorkflowExecutionResponse Client::operateStopWorkflowExecution(const OperateStopWorkflowExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateStopWorkflowExecutionWithOptions(request, runtime);
}

/**
 * @summary 将held状态的任务恢复
 *
 * @param request OperateUnholdJobExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateUnholdJobExecutionResponse
 */
OperateUnholdJobExecutionResponse Client::operateUnholdJobExecutionWithOptions(const OperateUnholdJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.getJobExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateUnholdJobExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateUnholdJobExecutionResponse>();
}

/**
 * @summary 将held状态的任务恢复
 *
 * @param request OperateUnholdJobExecutionRequest
 * @return OperateUnholdJobExecutionResponse
 */
OperateUnholdJobExecutionResponse Client::operateUnholdJobExecution(const OperateUnholdJobExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateUnholdJobExecutionWithOptions(request, runtime);
}

/**
 * @summary 将工作流中held状态的节点恢复
 *
 * @param request OperateUnholdWorkflowExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateUnholdWorkflowExecutionResponse
 */
OperateUnholdWorkflowExecutionResponse Client::operateUnholdWorkflowExecutionWithOptions(const OperateUnholdWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkflowExecutionId()) {
    body["WorkflowExecutionId"] = request.getWorkflowExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OperateUnholdWorkflowExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateUnholdWorkflowExecutionResponse>();
}

/**
 * @summary 将工作流中held状态的节点恢复
 *
 * @param request OperateUnholdWorkflowExecutionRequest
 * @return OperateUnholdWorkflowExecutionResponse
 */
OperateUnholdWorkflowExecutionResponse Client::operateUnholdWorkflowExecution(const OperateUnholdWorkflowExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateUnholdWorkflowExecutionWithOptions(request, runtime);
}

/**
 * @summary 将skipped状态的任务恢复
 *
 * @param request OperateUnskipJobExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateUnskipJobExecutionResponse
 */
OperateUnskipJobExecutionResponse Client::operateUnskipJobExecutionWithOptions(const OperateUnskipJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobExecutionId()) {
    query["JobExecutionId"] = request.getJobExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateUnskipJobExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateUnskipJobExecutionResponse>();
}

/**
 * @summary 将skipped状态的任务恢复
 *
 * @param request OperateUnskipJobExecutionRequest
 * @return OperateUnskipJobExecutionResponse
 */
OperateUnskipJobExecutionResponse Client::operateUnskipJobExecution(const OperateUnskipJobExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateUnskipJobExecutionWithOptions(request, runtime);
}

/**
 * @summary 同步任务
 *
 * @param tmpReq SyncJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncJobsResponse
 */
SyncJobsResponse Client::syncJobsWithOptions(const SyncJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SyncJobsShrinkRequest request = SyncJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobIds()) {
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobIds(), "JobIds", "json"));
  }

  json body = {};
  if (!!request.hasJobIdsShrink()) {
    body["JobIds"] = request.getJobIdsShrink();
  }

  if (!!request.hasOriginalAppName()) {
    body["OriginalAppName"] = request.getOriginalAppName();
  }

  if (!!request.hasOriginalClusterId()) {
    body["OriginalClusterId"] = request.getOriginalClusterId();
  }

  if (!!request.hasTargetAppName()) {
    body["TargetAppName"] = request.getTargetAppName();
  }

  if (!!request.hasTargetClusterId()) {
    body["TargetClusterId"] = request.getTargetClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SyncJobs"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncJobsResponse>();
}

/**
 * @summary 同步任务
 *
 * @param request SyncJobsRequest
 * @return SyncJobsResponse
 */
SyncJobsResponse Client::syncJobs(const SyncJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncJobsWithOptions(request, runtime);
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
    body["AccessToken"] = request.getAccessToken();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEnableLog()) {
    body["EnableLog"] = request.getEnableLog();
  }

  if (!!request.hasLabelRouteStrategy()) {
    body["LabelRouteStrategy"] = request.getLabelRouteStrategy();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
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
 * @summary 更新日历
 *
 * @param request UpdateCalendarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCalendarResponse
 */
UpdateCalendarResponse Client::updateCalendarWithOptions(const UpdateCalendarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCalendarName()) {
    body["CalendarName"] = request.getCalendarName();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasIncremental()) {
    body["Incremental"] = request.getIncremental();
  }

  if (!!request.hasMonths()) {
    body["Months"] = request.getMonths();
  }

  if (!!request.hasYear()) {
    body["Year"] = request.getYear();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateCalendar"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCalendarResponse>();
}

/**
 * @summary 更新日历
 *
 * @param request UpdateCalendarRequest
 * @return UpdateCalendarResponse
 */
UpdateCalendarResponse Client::updateCalendar(const UpdateCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCalendarWithOptions(request, runtime);
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
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasIpWhitelist()) {
    body["IpWhitelist"] = request.getIpWhitelist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
 * @summary 更新数据源
 *
 * @param request UpdateDatasourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasourceResponse
 */
UpdateDatasourceResponse Client::updateDatasourceWithOptions(const UpdateDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConnectionParams()) {
    body["ConnectionParams"] = request.getConnectionParams();
  }

  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.getDatasourceId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDatasource"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasourceResponse>();
}

/**
 * @summary 更新数据源
 *
 * @param request UpdateDatasourceRequest
 * @return UpdateDatasourceResponse
 */
UpdateDatasourceResponse Client::updateDatasource(const UpdateDatasourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDatasourceWithOptions(request, runtime);
}

/**
 * @summary 更新执行器
 *
 * @param request UpdateExecutorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExecutorsResponse
 */
UpdateExecutorsResponse Client::updateExecutorsWithOptions(const UpdateExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasWorkerType()) {
    body["WorkerType"] = request.getWorkerType();
  }

  if (!!request.hasWorkers()) {
    body["Workers"] = request.getWorkers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateExecutors"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExecutorsResponse>();
}

/**
 * @summary 更新执行器
 *
 * @param request UpdateExecutorsRequest
 * @return UpdateExecutorsResponse
 */
UpdateExecutorsResponse Client::updateExecutors(const UpdateExecutorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateExecutorsWithOptions(request, runtime);
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
    request.setNoticeConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNoticeConfig(), "NoticeConfig", "json"));
  }

  if (!!tmpReq.hasNoticeContacts()) {
    request.setNoticeContactsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNoticeContacts(), "NoticeContacts", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasAttemptInterval()) {
    body["AttemptInterval"] = request.getAttemptInterval();
  }

  if (!!request.hasCalendar()) {
    body["Calendar"] = request.getCalendar();
  }

  if (!!request.hasChildJobId()) {
    body["ChildJobId"] = request.getChildJobId();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDependentStrategy()) {
    body["DependentStrategy"] = request.getDependentStrategy();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExecutorBlockStrategy()) {
    body["ExecutorBlockStrategy"] = request.getExecutorBlockStrategy();
  }

  if (!!request.hasJobHandler()) {
    body["JobHandler"] = request.getJobHandler();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  if (!!request.hasMaxAttempt()) {
    body["MaxAttempt"] = request.getMaxAttempt();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNoticeConfigShrink()) {
    body["NoticeConfig"] = request.getNoticeConfigShrink();
  }

  if (!!request.hasNoticeContactsShrink()) {
    body["NoticeContacts"] = request.getNoticeContactsShrink();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.getParameters();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasRouteStrategy()) {
    body["RouteStrategy"] = request.getRouteStrategy();
  }

  if (!!request.hasScript()) {
    body["Script"] = request.getScript();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStartTimeType()) {
    body["StartTimeType"] = request.getStartTimeType();
  }

  if (!!request.hasTimeExpression()) {
    body["TimeExpression"] = request.getTimeExpression();
  }

  if (!!request.hasTimeType()) {
    body["TimeType"] = request.getTimeType();
  }

  if (!!request.hasTimezone()) {
    body["Timezone"] = request.getTimezone();
  }

  if (!!request.hasWeight()) {
    body["Weight"] = request.getWeight();
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
 * @summary 更新任务实例
 *
 * @param request UpdateJobExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateJobExecutionResponse
 */
UpdateJobExecutionResponse Client::updateJobExecutionWithOptions(const UpdateJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobExecutionId()) {
    body["JobExecutionId"] = request.getJobExecutionId();
  }

  if (!!request.hasScheduleTime()) {
    body["ScheduleTime"] = request.getScheduleTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateJobExecution"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateJobExecutionResponse>();
}

/**
 * @summary 更新任务实例
 *
 * @param request UpdateJobExecutionRequest
 * @return UpdateJobExecutionResponse
 */
UpdateJobExecutionResponse Client::updateJobExecution(const UpdateJobExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateJobExecutionWithOptions(request, runtime);
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
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  if (!!request.hasScriptContent()) {
    body["ScriptContent"] = request.getScriptContent();
  }

  if (!!request.hasVersionDescription()) {
    body["VersionDescription"] = request.getVersionDescription();
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

/**
 * @summary 更新工作流
 *
 * @param request UpdateWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowResponse
 */
UpdateWorkflowResponse Client::updateWorkflowWithOptions(const UpdateWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasCalendar()) {
    body["Calendar"] = request.getCalendar();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasTimeExpression()) {
    body["TimeExpression"] = request.getTimeExpression();
  }

  if (!!request.hasTimeType()) {
    body["TimeType"] = request.getTimeType();
  }

  if (!!request.hasTimezone()) {
    body["Timezone"] = request.getTimezone();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWorkflow"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkflowResponse>();
}

/**
 * @summary 更新工作流
 *
 * @param request UpdateWorkflowRequest
 * @return UpdateWorkflowResponse
 */
UpdateWorkflowResponse Client::updateWorkflow(const UpdateWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkflowWithOptions(request, runtime);
}

/**
 * @summary 更新工作流DAG
 *
 * @param tmpReq UpdateWorkflowDAGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowDAGResponse
 */
UpdateWorkflowDAGResponse Client::updateWorkflowDAGWithOptions(const UpdateWorkflowDAGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkflowDAGShrinkRequest request = UpdateWorkflowDAGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDag()) {
    request.setDagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDag(), "Dag", "json"));
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDagShrink()) {
    body["Dag"] = request.getDagShrink();
  }

  if (!!request.hasDagVersion()) {
    body["DagVersion"] = request.getDagVersion();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWorkflowDAG"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkflowDAGResponse>();
}

/**
 * @summary 更新工作流DAG
 *
 * @param request UpdateWorkflowDAGRequest
 * @return UpdateWorkflowDAGResponse
 */
UpdateWorkflowDAGResponse Client::updateWorkflowDAG(const UpdateWorkflowDAGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkflowDAGWithOptions(request, runtime);
}

/**
 * @summary 切换工作流DAG版本
 *
 * @param request UpdateWorkflowDAGVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowDAGVersionResponse
 */
UpdateWorkflowDAGVersionResponse Client::updateWorkflowDAGVersionWithOptions(const UpdateWorkflowDAGVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDagVersion()) {
    body["DagVersion"] = request.getDagVersion();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWorkflowDAGVersion"},
    {"version" , "2024-06-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkflowDAGVersionResponse>();
}

/**
 * @summary 切换工作流DAG版本
 *
 * @param request UpdateWorkflowDAGVersionRequest
 * @return UpdateWorkflowDAGVersionResponse
 */
UpdateWorkflowDAGVersionResponse Client::updateWorkflowDAGVersion(const UpdateWorkflowDAGVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkflowDAGVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace SchedulerX320240624