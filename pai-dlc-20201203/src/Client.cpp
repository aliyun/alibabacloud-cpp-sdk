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
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasCodeSource()) {
    body["CodeSource"] = request.getCodeSource();
  }

  if (!!request.hasCredentialConfig()) {
    body["CredentialConfig"] = request.getCredentialConfig();
  }

  if (!!request.hasCustomEnvs()) {
    body["CustomEnvs"] = request.getCustomEnvs();
  }

  if (!!request.hasDataSources()) {
    body["DataSources"] = request.getDataSources();
  }

  if (!!request.hasDebuggerConfigContent()) {
    body["DebuggerConfigContent"] = request.getDebuggerConfigContent();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasElasticSpec()) {
    body["ElasticSpec"] = request.getElasticSpec();
  }

  if (!!request.hasEnvs()) {
    body["Envs"] = request.getEnvs();
  }

  if (!!request.hasJobMaxRunningTimeMinutes()) {
    body["JobMaxRunningTimeMinutes"] = request.getJobMaxRunningTimeMinutes();
  }

  if (!!request.hasJobSpecs()) {
    body["JobSpecs"] = request.getJobSpecs();
  }

  if (!!request.hasJobType()) {
    body["JobType"] = request.getJobType();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.getOptions();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasSettings()) {
    body["Settings"] = request.getSettings();
  }

  if (!!request.hasSuccessPolicy()) {
    body["SuccessPolicy"] = request.getSuccessPolicy();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateVersion()) {
    body["TemplateVersion"] = request.getTemplateVersion();
  }

  if (!!request.hasThirdpartyLibDir()) {
    body["ThirdpartyLibDir"] = request.getThirdpartyLibDir();
  }

  if (!!request.hasThirdpartyLibs()) {
    body["ThirdpartyLibs"] = request.getThirdpartyLibs();
  }

  if (!!request.hasUserCommand()) {
    body["UserCommand"] = request.getUserCommand();
  }

  if (!!request.hasUserVpc()) {
    body["UserVpc"] = request.getUserVpc();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
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
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasCpu()) {
    body["Cpu"] = request.getCpu();
  }

  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.getDataSourceType();
  }

  if (!!request.hasDataSources()) {
    body["DataSources"] = request.getDataSources();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  if (!!request.hasMaxRunningTimeMinutes()) {
    body["MaxRunningTimeMinutes"] = request.getMaxRunningTimeMinutes();
  }

  if (!!request.hasMemory()) {
    body["Memory"] = request.getMemory();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.getOptions();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasQuotaId()) {
    body["QuotaId"] = request.getQuotaId();
  }

  if (!!request.hasSourceId()) {
    body["SourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  if (!!request.hasSummaryPath()) {
    body["SummaryPath"] = request.getSummaryPath();
  }

  if (!!request.hasSummaryRelativePath()) {
    body["SummaryRelativePath"] = request.getSummaryRelativePath();
  }

  if (!!request.hasTensorboardDataSources()) {
    body["TensorboardDataSources"] = request.getTensorboardDataSources();
  }

  if (!!request.hasTensorboardSpec()) {
    body["TensorboardSpec"] = request.getTensorboardSpec();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
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
    query["WorkspaceId"] = request.getWorkspaceId();
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
    query["isShared"] = request.getIsShared();
  }

  if (!!request.hasToken()) {
    query["token"] = request.getToken();
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
    query["NeedDetail"] = request.getNeedDetail();
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMaxEventsNum()) {
    query["MaxEventsNum"] = request.getMaxEventsNum();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Obtains the monitoring data of a job, including the CPU, GPU, and memory utilization, network, and disk read/write rate. ⚠️ Note: Except for pay-as-you-go tasks based on general-purpose computing resources, all task types are connected to CloudMonitor. Use the CloudMonitor API to call related monitoring. The overwritten features in the original API are no longer maintained. For more information, see \\[Training monitoring and alerting]\\\\(https://www.alibabacloud.com/help/zh/pai/user-guide/training-monitoring-and-alerting).
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTimeStep()) {
    query["TimeStep"] = request.getTimeStep();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
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
 * @summary Obtains the monitoring data of a job, including the CPU, GPU, and memory utilization, network, and disk read/write rate. ⚠️ Note: Except for pay-as-you-go tasks based on general-purpose computing resources, all task types are connected to CloudMonitor. Use the CloudMonitor API to call related monitoring. The overwritten features in the original API are no longer maintained. For more information, see \\[Training monitoring and alerting]\\\\(https://www.alibabacloud.com/help/zh/pai/user-guide/training-monitoring-and-alerting).
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
    query["SanityCheckNumber"] = request.getSanityCheckNumber();
  }

  if (!!request.hasSanityCheckPhase()) {
    query["SanityCheckPhase"] = request.getSanityCheckPhase();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMaxEventsNum()) {
    query["MaxEventsNum"] = request.getMaxEventsNum();
  }

  if (!!request.hasPodUid()) {
    query["PodUid"] = request.getPodUid();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
    query["DownloadToFile"] = request.getDownloadToFile();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMaxLines()) {
    query["MaxLines"] = request.getMaxLines();
  }

  if (!!request.hasPodUid()) {
    query["PodUid"] = request.getPodUid();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
    query["isShared"] = request.getIsShared();
  }

  if (!!request.hasToken()) {
    query["token"] = request.getToken();
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
    query["JodId"] = request.getJodId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
    query["ExpireTimeSeconds"] = request.getExpireTimeSeconds();
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
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
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
    query["IsShared"] = request.getIsShared();
  }

  if (!!request.hasPodUid()) {
    query["PodUid"] = request.getPodUid();
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
    query["AcceleratorType"] = request.getAcceleratorType();
  }

  if (!!request.hasInstanceTypes()) {
    query["InstanceTypes"] = request.getInstanceTypes();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
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
    query["Order"] = request.getOrder();
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
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasBusinessUserId()) {
    query["BusinessUserId"] = request.getBusinessUserId();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasDisplayNameSearchMode()) {
    query["DisplayNameSearchMode"] = request.getDisplayNameSearchMode();
  }

  if (!!request.hasEnableAssignNode()) {
    query["EnableAssignNode"] = request.getEnableAssignNode();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFromAllWorkspaces()) {
    query["FromAllWorkspaces"] = request.getFromAllWorkspaces();
  }

  if (!!request.hasImageSearch()) {
    query["ImageSearch"] = request.getImageSearch();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasNumericRangeField()) {
    query["NumericRangeField"] = request.getNumericRangeField();
  }

  if (!!request.hasNumericRangeMax()) {
    query["NumericRangeMax"] = request.getNumericRangeMax();
  }

  if (!!request.hasNumericRangeMin()) {
    query["NumericRangeMin"] = request.getNumericRangeMin();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOversoldInfo()) {
    query["OversoldInfo"] = request.getOversoldInfo();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.getPipelineId();
  }

  if (!!request.hasReasonSearch()) {
    query["ReasonSearch"] = request.getReasonSearch();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceQuotaName()) {
    query["ResourceQuotaName"] = request.getResourceQuotaName();
  }

  if (!!request.hasShowOwn()) {
    query["ShowOwn"] = request.getShowOwn();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTimeRangeField()) {
    query["TimeRangeField"] = request.getTimeRangeField();
  }

  if (!!request.hasUserCommandSearch()) {
    query["UserCommandSearch"] = request.getUserCommandSearch();
  }

  if (!!request.hasUserIdForFilter()) {
    query["UserIdForFilter"] = request.getUserIdForFilter();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
    query["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasQuotaId()) {
    query["QuotaId"] = request.getQuotaId();
  }

  if (!!request.hasShowOwn()) {
    query["ShowOwn"] = request.getShowOwn();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTensorboardId()) {
    query["TensorboardId"] = request.getTensorboardId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.getVerbose();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
    query["WorkspaceId"] = request.getWorkspaceId();
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
    query["WorkspaceId"] = request.getWorkspaceId();
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
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasJobSpecs()) {
    body["JobSpecs"] = request.getJobSpecs();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
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
    query["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasMaxRunningTimeMinutes()) {
    query["MaxRunningTimeMinutes"] = request.getMaxRunningTimeMinutes();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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