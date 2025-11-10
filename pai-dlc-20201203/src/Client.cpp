#include <darabonba/Core.hpp>
#include <alibabacloud/PaiDlc20201203.hpp>
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
using namespace AlibabaCloud::PaiDlc20201203::Models;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{

AlibabaCloud::PaiDlc20201203::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "pai-dlc.aliyuncs.com"},
    {"ap-south-1" , "pai-dlc.aliyuncs.com"},
    {"ap-southeast-2" , "pai-dlc.aliyuncs.com"},
    {"cn-beijing-finance-1" , "pai-dlc.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "pai-dlc.aliyuncs.com"},
    {"cn-beijing-gov-1" , "pai-dlc.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "pai-dlc.aliyuncs.com"},
    {"cn-chengdu" , "pai-dlc.aliyuncs.com"},
    {"cn-edge-1" , "pai-dlc.aliyuncs.com"},
    {"cn-fujian" , "pai-dlc.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-finance" , "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "pai-dlc.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "pai-dlc.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "pai-dlc.aliyuncs.com"},
    {"cn-huhehaote" , "pai-dlc.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "pai-dlc.aliyuncs.com"},
    {"cn-north-2-gov-1" , "pai-dlc.aliyuncs.com"},
    {"cn-qingdao" , "pai-dlc.aliyuncs.com"},
    {"cn-qingdao-nebula" , "pai-dlc.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "pai-dlc.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "pai-dlc.aliyuncs.com"},
    {"cn-shanghai-inner" , "pai-dlc.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "pai-dlc.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "pai-dlc.aliyuncs.com"},
    {"cn-shenzhen-inner" , "pai-dlc.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "pai-dlc.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "pai-dlc.aliyuncs.com"},
    {"cn-wuhan" , "pai-dlc.aliyuncs.com"},
    {"cn-yushanfang" , "pai-dlc.aliyuncs.com"},
    {"cn-zhangbei" , "pai-dlc.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "pai-dlc.aliyuncs.com"},
    {"cn-zhangjiakou" , "pai-dlc.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "pai-dlc.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "pai-dlc.aliyuncs.com"},
    {"eu-west-1" , "pai-dlc.aliyuncs.com"},
    {"eu-west-1-oxs" , "pai-dlc.aliyuncs.com"},
    {"me-east-1" , "pai-dlc.aliyuncs.com"},
    {"rus-west-1-pop" , "pai-dlc.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("pai-dlc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a job that runs in a cluster. You can configure the data source, code source, startup command, and computing resources of each node on which a job runs.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
 *
 * @param request CreateJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJobWithOptions(const CreateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasCodeSource()) {
    body["CodeSource"] = request.codeSource();
  }

  if (!!request.hasCredentialConfig()) {
    body["CredentialConfig"] = request.credentialConfig();
  }

  if (!!request.hasDataSources()) {
    body["DataSources"] = request.dataSources();
  }

  if (!!request.hasDebuggerConfigContent()) {
    body["DebuggerConfigContent"] = request.debuggerConfigContent();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasElasticSpec()) {
    body["ElasticSpec"] = request.elasticSpec();
  }

  if (!!request.hasEnvs()) {
    body["Envs"] = request.envs();
  }

  if (!!request.hasJobMaxRunningTimeMinutes()) {
    body["JobMaxRunningTimeMinutes"] = request.jobMaxRunningTimeMinutes();
  }

  if (!!request.hasJobSpecs()) {
    body["JobSpecs"] = request.jobSpecs();
  }

  if (!!request.hasJobType()) {
    body["JobType"] = request.jobType();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasSettings()) {
    body["Settings"] = request.settings();
  }

  if (!!request.hasSuccessPolicy()) {
    body["SuccessPolicy"] = request.successPolicy();
  }

  if (!!request.hasThirdpartyLibDir()) {
    body["ThirdpartyLibDir"] = request.thirdpartyLibDir();
  }

  if (!!request.hasThirdpartyLibs()) {
    body["ThirdpartyLibs"] = request.thirdpartyLibs();
  }

  if (!!request.hasUserCommand()) {
    body["UserCommand"] = request.userCommand();
  }

  if (!!request.hasUserVpc()) {
    body["UserVpc"] = request.userVpc();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateJob"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobResponse>();
}

/**
 * @summary Creates a job that runs in a cluster. You can configure the data source, code source, startup command, and computing resources of each node on which a job runs.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
 *
 * @param request CreateJobRequest
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJob(const CreateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createJobWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a TensorBoard by using a job or specifying a data source configuration.
 *
 * @param request CreateTensorboardRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTensorboardResponse
 */
CreateTensorboardResponse Client::createTensorboardWithOptions(const CreateTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasCpu()) {
    body["Cpu"] = request.cpu();
  }

  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDataSources()) {
    body["DataSources"] = request.dataSources();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasMaxRunningTimeMinutes()) {
    body["MaxRunningTimeMinutes"] = request.maxRunningTimeMinutes();
  }

  if (!!request.hasMemory()) {
    body["Memory"] = request.memory();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasQuotaId()) {
    body["QuotaId"] = request.quotaId();
  }

  if (!!request.hasSourceId()) {
    body["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.sourceType();
  }

  if (!!request.hasSummaryPath()) {
    body["SummaryPath"] = request.summaryPath();
  }

  if (!!request.hasSummaryRelativePath()) {
    body["SummaryRelativePath"] = request.summaryRelativePath();
  }

  if (!!request.hasTensorboardDataSources()) {
    body["TensorboardDataSources"] = request.tensorboardDataSources();
  }

  if (!!request.hasTensorboardSpec()) {
    body["TensorboardSpec"] = request.tensorboardSpec();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.uri();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTensorboard"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tensorboards")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTensorboardResponse>();
}

/**
 * @summary Creates a TensorBoard by using a job or specifying a data source configuration.
 *
 * @param request CreateTensorboardRequest
 * @return CreateTensorboardResponse
 */
CreateTensorboardResponse Client::createTensorboard(const CreateTensorboardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTensorboardWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a completed or stopped job.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobResponse
 */
DeleteJobResponse Client::deleteJobWithOptions(const string &JobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteJob"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteJobResponse>();
}

/**
 * @summary Deletes a completed or stopped job.
 *
 * @return DeleteJobResponse
 */
DeleteJobResponse Client::deleteJob(const string &JobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteJobWithOptions(JobId, headers, runtime);
}

/**
 * @summary Deletes a stopped TensorBoard.
 *
 * @param request DeleteTensorboardRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTensorboardResponse
 */
DeleteTensorboardResponse Client::deleteTensorboardWithOptions(const string &TensorboardId, const DeleteTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTensorboard"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tensorboards/" , Darabonba::Encode::Encoder::percentEncode(TensorboardId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTensorboardResponse>();
}

/**
 * @summary Deletes a stopped TensorBoard.
 *
 * @param request DeleteTensorboardRequest
 * @return DeleteTensorboardResponse
 */
DeleteTensorboardResponse Client::deleteTensorboard(const string &TensorboardId, const DeleteTensorboardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

/**
 * @summary Gets the DLC task\\"s Dashboard URL, if one exists.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
 *
 * @param request GetDashboardRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDashboardResponse
 */
GetDashboardResponse Client::getDashboardWithOptions(const string &jobId, const GetDashboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsShared()) {
    query["isShared"] = request.isShared();
  }

  if (!!request.hasToken()) {
    query["token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDashboard"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/dashboard")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDashboardResponse>();
}

/**
 * @summary Gets the DLC task\\"s Dashboard URL, if one exists.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
 *
 * @param request GetDashboardRequest
 * @return GetDashboardResponse
 */
GetDashboardResponse Client::getDashboard(const string &jobId, const GetDashboardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDashboardWithOptions(jobId, request, headers, runtime);
}

/**
 * @summary Obtains the configuration and runtime information of a job.
 *
 * @param request GetJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobResponse
 */
GetJobResponse Client::getJobWithOptions(const string &JobId, const GetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNeedDetail()) {
    query["NeedDetail"] = request.needDetail();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJob"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobResponse>();
}

/**
 * @summary Obtains the configuration and runtime information of a job.
 *
 * @param request GetJobRequest
 * @return GetJobResponse
 */
GetJobResponse Client::getJob(const string &JobId, const GetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobWithOptions(JobId, request, headers, runtime);
}

/**
 * @summary Obtains the system events of a job.
 *
 * @param request GetJobEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobEventsResponse
 */
GetJobEventsResponse Client::getJobEventsWithOptions(const string &JobId, const GetJobEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMaxEventsNum()) {
    query["MaxEventsNum"] = request.maxEventsNum();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobEvents"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobEventsResponse>();
}

/**
 * @summary Obtains the system events of a job.
 *
 * @param request GetJobEventsRequest
 * @return GetJobEventsResponse
 */
GetJobEventsResponse Client::getJobEvents(const string &JobId, const GetJobEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobEventsWithOptions(JobId, request, headers, runtime);
}

/**
 * @summary Obtains the monitoring data of a job, including the CPU, GPU, and memory utilization, network, and disk read/write rate.
 *
 * @param request GetJobMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobMetricsResponse
 */
GetJobMetricsResponse Client::getJobMetricsWithOptions(const string &JobId, const GetJobMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.metricType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTimeStep()) {
    query["TimeStep"] = request.timeStep();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobMetrics"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobMetricsResponse>();
}

/**
 * @summary Obtains the monitoring data of a job, including the CPU, GPU, and memory utilization, network, and disk read/write rate.
 *
 * @param request GetJobMetricsRequest
 * @return GetJobMetricsResponse
 */
GetJobMetricsResponse Client::getJobMetrics(const string &JobId, const GetJobMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobMetricsWithOptions(JobId, request, headers, runtime);
}

/**
 * @summary Obtains specified job sanity check result in a Deep Learning Containers (DLC) job.
 *
 * @param request GetJobSanityCheckResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobSanityCheckResultResponse
 */
GetJobSanityCheckResultResponse Client::getJobSanityCheckResultWithOptions(const string &JobId, const GetJobSanityCheckResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSanityCheckNumber()) {
    query["SanityCheckNumber"] = request.sanityCheckNumber();
  }

  if (!!request.hasSanityCheckPhase()) {
    query["SanityCheckPhase"] = request.sanityCheckPhase();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobSanityCheckResult"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/sanitycheckresult")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobSanityCheckResultResponse>();
}

/**
 * @summary Obtains specified job sanity check result in a Deep Learning Containers (DLC) job.
 *
 * @param request GetJobSanityCheckResultRequest
 * @return GetJobSanityCheckResultResponse
 */
GetJobSanityCheckResultResponse Client::getJobSanityCheckResult(const string &JobId, const GetJobSanityCheckResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobSanityCheckResultWithOptions(JobId, request, headers, runtime);
}

/**
 * @summary Obtains the system events of a specific node in a job to locate and troubleshoot issues.
 *
 * @param request GetPodEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPodEventsResponse
 */
GetPodEventsResponse Client::getPodEventsWithOptions(const string &JobId, const string &PodId, const GetPodEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMaxEventsNum()) {
    query["MaxEventsNum"] = request.maxEventsNum();
  }

  if (!!request.hasPodUid()) {
    query["PodUid"] = request.podUid();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPodEvents"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/pods/" , Darabonba::Encode::Encoder::percentEncode(PodId) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPodEventsResponse>();
}

/**
 * @summary Obtains the system events of a specific node in a job to locate and troubleshoot issues.
 *
 * @param request GetPodEventsRequest
 * @return GetPodEventsResponse
 */
GetPodEventsResponse Client::getPodEvents(const string &JobId, const string &PodId, const GetPodEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPodEventsWithOptions(JobId, PodId, request, headers, runtime);
}

/**
 * @summary Obtains or downloads the logs of a node for a task. The logs are from the stdout and stderr of the system and user scripts.
 *
 * @param request GetPodLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPodLogsResponse
 */
GetPodLogsResponse Client::getPodLogsWithOptions(const string &JobId, const string &PodId, const GetPodLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDownloadToFile()) {
    query["DownloadToFile"] = request.downloadToFile();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMaxLines()) {
    query["MaxLines"] = request.maxLines();
  }

  if (!!request.hasPodUid()) {
    query["PodUid"] = request.podUid();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPodLogs"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/pods/" , Darabonba::Encode::Encoder::percentEncode(PodId) , "/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPodLogsResponse>();
}

/**
 * @summary Obtains or downloads the logs of a node for a task. The logs are from the stdout and stderr of the system and user scripts.
 *
 * @param request GetPodLogsRequest
 * @return GetPodLogsResponse
 */
GetPodLogsResponse Client::getPodLogs(const string &JobId, const string &PodId, const GetPodLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPodLogsWithOptions(JobId, PodId, request, headers, runtime);
}

/**
 * @summary Obtains a Ray Dashboard URL.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
 *
 * @param request GetRayDashboardRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRayDashboardResponse
 */
GetRayDashboardResponse Client::getRayDashboardWithOptions(const string &jobId, const GetRayDashboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsShared()) {
    query["isShared"] = request.isShared();
  }

  if (!!request.hasToken()) {
    query["token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRayDashboard"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/rayDashboard")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRayDashboardResponse>();
}

/**
 * @summary Obtains a Ray Dashboard URL.
 *
 * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
 *
 * @param request GetRayDashboardRequest
 * @return GetRayDashboardResponse
 */
GetRayDashboardResponse Client::getRayDashboard(const string &jobId, const GetRayDashboardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRayDashboardWithOptions(jobId, request, headers, runtime);
}

/**
 * @summary Queries the information of a TensorBoard instance.
 *
 * @param request GetTensorboardRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTensorboardResponse
 */
GetTensorboardResponse Client::getTensorboardWithOptions(const string &TensorboardId, const GetTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJodId()) {
    query["JodId"] = request.jodId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTensorboard"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tensorboards/" , Darabonba::Encode::Encoder::percentEncode(TensorboardId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTensorboardResponse>();
}

/**
 * @summary Queries the information of a TensorBoard instance.
 *
 * @param request GetTensorboardRequest
 * @return GetTensorboardResponse
 */
GetTensorboardResponse Client::getTensorboard(const string &TensorboardId, const GetTensorboardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

/**
 * @summary Obtains the shareable link of a TensorBoard task. The link contains digital tokens. You can use a shareable link to access a TensorBoard task.
 *
 * @param request GetTensorboardSharedUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTensorboardSharedUrlResponse
 */
GetTensorboardSharedUrlResponse Client::getTensorboardSharedUrlWithOptions(const string &TensorboardId, const GetTensorboardSharedUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpireTimeSeconds()) {
    query["ExpireTimeSeconds"] = request.expireTimeSeconds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTensorboardSharedUrl"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tensorboards/" , Darabonba::Encode::Encoder::percentEncode(TensorboardId) , "/sharedurl")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTensorboardSharedUrlResponse>();
}

/**
 * @summary Obtains the shareable link of a TensorBoard task. The link contains digital tokens. You can use a shareable link to access a TensorBoard task.
 *
 * @param request GetTensorboardSharedUrlRequest
 * @return GetTensorboardSharedUrlResponse
 */
GetTensorboardSharedUrlResponse Client::getTensorboardSharedUrl(const string &TensorboardId, const GetTensorboardSharedUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTensorboardSharedUrlWithOptions(TensorboardId, request, headers, runtime);
}

/**
 * @summary Obtains the sharing token of a DLC job. This token is used to view the information about the shared job.
 *
 * @param request GetTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenResponse
 */
GetTokenResponse Client::getTokenWithOptions(const GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.targetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.targetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetToken"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tokens")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenResponse>();
}

/**
 * @summary Obtains the sharing token of a DLC job. This token is used to view the information about the shared job.
 *
 * @param request GetTokenRequest
 * @return GetTokenResponse
 */
GetTokenResponse Client::getToken(const GetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenWithOptions(request, headers, runtime);
}

/**
 * @summary Provides methods and steps to obtain a HTTP link for accessing a container.
 *
 * @param request GetWebTerminalRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWebTerminalResponse
 */
GetWebTerminalResponse Client::getWebTerminalWithOptions(const string &JobId, const string &PodId, const GetWebTerminalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsShared()) {
    query["IsShared"] = request.isShared();
  }

  if (!!request.hasPodUid()) {
    query["PodUid"] = request.podUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWebTerminal"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/pods/" , Darabonba::Encode::Encoder::percentEncode(PodId) , "/webterminal")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWebTerminalResponse>();
}

/**
 * @summary Provides methods and steps to obtain a HTTP link for accessing a container.
 *
 * @param request GetWebTerminalRequest
 * @return GetWebTerminalResponse
 */
GetWebTerminalResponse Client::getWebTerminal(const string &JobId, const string &PodId, const GetWebTerminalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWebTerminalWithOptions(JobId, PodId, request, headers, runtime);
}

/**
 * @summary Queries the list of supported instance types.
 *
 * @param request ListEcsSpecsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEcsSpecsResponse
 */
ListEcsSpecsResponse Client::listEcsSpecsWithOptions(const ListEcsSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorType()) {
    query["AcceleratorType"] = request.acceleratorType();
  }

  if (!!request.hasInstanceTypes()) {
    query["InstanceTypes"] = request.instanceTypes();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEcsSpecs"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/ecsspecs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEcsSpecsResponse>();
}

/**
 * @summary Queries the list of supported instance types.
 *
 * @param request ListEcsSpecsRequest
 * @return ListEcsSpecsResponse
 */
ListEcsSpecsResponse Client::listEcsSpecs(const ListEcsSpecsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEcsSpecsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the results of all sanity checks for a DLC job.
 *
 * @param request ListJobSanityCheckResultsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobSanityCheckResultsResponse
 */
ListJobSanityCheckResultsResponse Client::listJobSanityCheckResultsWithOptions(const string &JobId, const ListJobSanityCheckResultsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobSanityCheckResults"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/sanitycheckresults")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobSanityCheckResultsResponse>();
}

/**
 * @summary Obtains the results of all sanity checks for a DLC job.
 *
 * @param request ListJobSanityCheckResultsRequest
 * @return ListJobSanityCheckResultsResponse
 */
ListJobSanityCheckResultsResponse Client::listJobSanityCheckResults(const string &JobId, const ListJobSanityCheckResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobSanityCheckResultsWithOptions(JobId, request, headers, runtime);
}

/**
 * @summary Queries a list of jobs and supports pagination, sorting, and filtering by conditions.
 *
 * @param tmpReq ListJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const ListJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListJobsShrinkRequest request = ListJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.accessibility();
  }

  if (!!request.hasBusinessUserId()) {
    query["BusinessUserId"] = request.businessUserId();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasDisplayNameSearchMode()) {
    query["DisplayNameSearchMode"] = request.displayNameSearchMode();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFromAllWorkspaces()) {
    query["FromAllWorkspaces"] = request.fromAllWorkspaces();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOversoldInfo()) {
    query["OversoldInfo"] = request.oversoldInfo();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceQuotaName()) {
    query["ResourceQuotaName"] = request.resourceQuotaName();
  }

  if (!!request.hasShowOwn()) {
    query["ShowOwn"] = request.showOwn();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasUserIdForFilter()) {
    query["UserIdForFilter"] = request.userIdForFilter();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsResponse>();
}

/**
 * @summary Queries a list of jobs and supports pagination, sorting, and filtering by conditions.
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of TensorBoard instances.
 *
 * @param request ListTensorboardsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTensorboardsResponse
 */
ListTensorboardsResponse Client::listTensorboardsWithOptions(const ListTensorboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.accessibility();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  if (!!request.hasQuotaId()) {
    query["QuotaId"] = request.quotaId();
  }

  if (!!request.hasShowOwn()) {
    query["ShowOwn"] = request.showOwn();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTensorboardId()) {
    query["TensorboardId"] = request.tensorboardId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTensorboards"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tensorboards")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTensorboardsResponse>();
}

/**
 * @summary Queries a list of TensorBoard instances.
 *
 * @param request ListTensorboardsRequest
 * @return ListTensorboardsResponse
 */
ListTensorboardsResponse Client::listTensorboards(const ListTensorboardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTensorboardsWithOptions(request, headers, runtime);
}

/**
 * @summary Starts a TensorBoard instance.
 *
 * @param request StartTensorboardRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTensorboardResponse
 */
StartTensorboardResponse Client::startTensorboardWithOptions(const string &TensorboardId, const StartTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartTensorboard"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tensorboards/" , Darabonba::Encode::Encoder::percentEncode(TensorboardId) , "/start")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTensorboardResponse>();
}

/**
 * @summary Starts a TensorBoard instance.
 *
 * @param request StartTensorboardRequest
 * @return StartTensorboardResponse
 */
StartTensorboardResponse Client::startTensorboard(const string &TensorboardId, const StartTensorboardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

/**
 * @summary Stops a running job.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopJobResponse
 */
StopJobResponse Client::stopJobWithOptions(const string &JobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopJob"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopJobResponse>();
}

/**
 * @summary Stops a running job.
 *
 * @return StopJobResponse
 */
StopJobResponse Client::stopJob(const string &JobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopJobWithOptions(JobId, headers, runtime);
}

/**
 * @summary Stops a TensorBoard instance.
 *
 * @param request StopTensorboardRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTensorboardResponse
 */
StopTensorboardResponse Client::stopTensorboardWithOptions(const string &TensorboardId, const StopTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTensorboard"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tensorboards/" , Darabonba::Encode::Encoder::percentEncode(TensorboardId) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTensorboardResponse>();
}

/**
 * @summary Stops a TensorBoard instance.
 *
 * @param request StopTensorboardRequest
 * @return StopTensorboardResponse
 */
StopTensorboardResponse Client::stopTensorboard(const string &TensorboardId, const StopTensorboardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTensorboardWithOptions(TensorboardId, request, headers, runtime);
}

/**
 * @summary Updates the configuration information of a job. For example, you can modify the priority of a job in a queue.
 *
 * @param request UpdateJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateJobResponse
 */
UpdateJobResponse Client::updateJobWithOptions(const string &JobId, const UpdateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasJobSpecs()) {
    body["JobSpecs"] = request.jobSpecs();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateJob"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateJobResponse>();
}

/**
 * @summary Updates the configuration information of a job. For example, you can modify the priority of a job in a queue.
 *
 * @param request UpdateJobRequest
 * @return UpdateJobResponse
 */
UpdateJobResponse Client::updateJob(const string &JobId, const UpdateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateJobWithOptions(JobId, request, headers, runtime);
}

/**
 * @summary Updates a TensorBoard instance.
 *
 * @param request UpdateTensorboardRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTensorboardResponse
 */
UpdateTensorboardResponse Client::updateTensorboardWithOptions(const string &TensorboardId, const UpdateTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.accessibility();
  }

  if (!!request.hasMaxRunningTimeMinutes()) {
    query["MaxRunningTimeMinutes"] = request.maxRunningTimeMinutes();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTensorboard"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tensorboards/" , Darabonba::Encode::Encoder::percentEncode(TensorboardId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTensorboardResponse>();
}

/**
 * @summary Updates a TensorBoard instance.
 *
 * @param request UpdateTensorboardRequest
 * @return UpdateTensorboardResponse
 */
UpdateTensorboardResponse Client::updateTensorboard(const string &TensorboardId, const UpdateTensorboardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTensorboardWithOptions(TensorboardId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PaiDlc20201203