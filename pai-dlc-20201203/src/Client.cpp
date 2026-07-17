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
    {"rus-west-1-pop" , "pai-dlc.aliyuncs.com"},
    {"us-west-1" , "pai-dlc.us-west-1.aliyuncs.com"},
    {"us-southeast-1" , "pai-dlc.us-southeast-1.aliyuncs.com"},
    {"us-east-1" , "pai-dlc.us-east-1.aliyuncs.com"},
    {"eu-central-1" , "pai-dlc.eu-central-1.aliyuncs.com"},
    {"cn-wulanchabu" , "pai-dlc.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen" , "pai-dlc.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "pai-dlc.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "pai-dlc.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "pai-dlc.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "pai-dlc.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "pai-dlc.cn-guangzhou.aliyuncs.com"},
    {"cn-beijing" , "pai-dlc.cn-beijing.aliyuncs.com"},
    {"ap-southeast-8" , "pai-dlc.ap-southeast-8.aliyuncs.com"},
    {"ap-southeast-7" , "pai-dlc.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-5" , "pai-dlc.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "pai-dlc.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-1" , "pai-dlc.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1" , "pai-dlc.ap-northeast-1.aliyuncs.com"}
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
 * @summary Creates a job and runs it in a cluster. You can specify the datasource config, code source configuration, startup command, and compute resource configuration for each node on which the job runs.
 *
 * @description Before you call this operation, make sure that you are familiar with the billing and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
 * >Notice: The total length of CreateJob request parameters, including system-generated parameters, cannot exceed 65,536 bytes..
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

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
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

  if (!!request.hasSchedulingStrategy()) {
    body["SchedulingStrategy"] = request.getSchedulingStrategy();
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
 * @summary Creates a job and runs it in a cluster. You can specify the datasource config, code source configuration, startup command, and compute resource configuration for each node on which the job runs.
 *
 * @description Before you call this operation, make sure that you are familiar with the billing and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
 * >Notice: The total length of CreateJob request parameters, including system-generated parameters, cannot exceed 65,536 bytes..
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
 * @summary Creates a job template.
 *
 * @param request CreateJobTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobTemplateResponse
 */
CreateJobTemplateResponse Client::createJobTemplateWithOptions(const CreateJobTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConstraints()) {
    body["Constraints"] = request.getConstraints();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMetadata()) {
    body["Metadata"] = request.getMetadata();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateJobTemplate"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobtemplates")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobTemplateResponse>();
}

/**
 * @summary Creates a job template.
 *
 * @param request CreateJobTemplateRequest
 * @return CreateJobTemplateResponse
 */
CreateJobTemplateResponse Client::createJobTemplate(const CreateJobTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createJobTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a RayHistoryServer.
 *
 * @description Before you use this operation, make sure that you are familiar with the billing of PAI-DLC and the [pricing](https://help.aliyun.com/document_detail/171758.html).
 * >Notice: The total length of CreateJob request parameters, including system-generated parameters, cannot exceed 65,536 bytes..
 *
 * @param request CreateRayHistoryServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRayHistoryServerResponse
 */
CreateRayHistoryServerResponse Client::createRayHistoryServerWithOptions(const CreateRayHistoryServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEcsSpec()) {
    body["EcsSpec"] = request.getEcsSpec();
  }

  if (!!request.hasMaxRuntimeMinutes()) {
    body["MaxRuntimeMinutes"] = request.getMaxRuntimeMinutes();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasStoragePath()) {
    body["StoragePath"] = request.getStoragePath();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRayHistoryServer"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/rayhistoryservers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRayHistoryServerResponse>();
}

/**
 * @summary Creates a RayHistoryServer.
 *
 * @description Before you use this operation, make sure that you are familiar with the billing of PAI-DLC and the [pricing](https://help.aliyun.com/document_detail/171758.html).
 * >Notice: The total length of CreateJob request parameters, including system-generated parameters, cannot exceed 65,536 bytes..
 *
 * @param request CreateRayHistoryServerRequest
 * @return CreateRayHistoryServerResponse
 */
CreateRayHistoryServerResponse Client::createRayHistoryServer(const CreateRayHistoryServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRayHistoryServerWithOptions(request, headers, runtime);
}

/**
 * @summary 创建信号
 *
 * @description ## 请求说明
 * - 该API用于向指定作业的一个或多个Pod发送特定信号。
 * - 发送信号后，API立即返回一个`SignalId`，实际的信号投递由后台worker处理。
 * - 信号的状态可以通过`GetSignal`或`ListSignals`接口查询。
 *
 * @param request CreateSignalRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSignalResponse
 */
CreateSignalResponse Client::createSignalWithOptions(const string &JobId, const CreateSignalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSignal()) {
    body["Signal"] = request.getSignal();
  }

  if (!!request.hasTarget()) {
    body["Target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSignal"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/signals")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSignalResponse>();
}

/**
 * @summary 创建信号
 *
 * @description ## 请求说明
 * - 该API用于向指定作业的一个或多个Pod发送特定信号。
 * - 发送信号后，API立即返回一个`SignalId`，实际的信号投递由后台worker处理。
 * - 信号的状态可以通过`GetSignal`或`ListSignals`接口查询。
 *
 * @param request CreateSignalRequest
 * @return CreateSignalResponse
 */
CreateSignalResponse Client::createSignal(const string &JobId, const CreateSignalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSignalWithOptions(JobId, request, headers, runtime);
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
 * @summary Deletes a job template. You cannot delete a job template that is in use by a job.
 *
 * @param request DeleteJobTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobTemplateResponse
 */
DeleteJobTemplateResponse Client::deleteJobTemplateWithOptions(const string &TemplateId, const DeleteJobTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteJobTemplate"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobtemplates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteJobTemplateResponse>();
}

/**
 * @summary Deletes a job template. You cannot delete a job template that is in use by a job.
 *
 * @param request DeleteJobTemplateRequest
 * @return DeleteJobTemplateResponse
 */
DeleteJobTemplateResponse Client::deleteJobTemplate(const string &TemplateId, const DeleteJobTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteJobTemplateWithOptions(TemplateId, request, headers, runtime);
}

/**
 * @summary Deletes a Ray History Server.
 *
 * @description Before calling this API, ensure you understand the billing methods and [Pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
 *
 * @param request DeleteRayHistoryServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRayHistoryServerResponse
 */
DeleteRayHistoryServerResponse Client::deleteRayHistoryServerWithOptions(const string &RayHistoryServerId, const DeleteRayHistoryServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRayHistoryServer"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/rayhistoryservers/" , Darabonba::Encode::Encoder::percentEncode(RayHistoryServerId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRayHistoryServerResponse>();
}

/**
 * @summary Deletes a Ray History Server.
 *
 * @description Before calling this API, ensure you understand the billing methods and [Pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
 *
 * @param request DeleteRayHistoryServerRequest
 * @return DeleteRayHistoryServerResponse
 */
DeleteRayHistoryServerResponse Client::deleteRayHistoryServer(const string &RayHistoryServerId, const DeleteRayHistoryServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRayHistoryServerWithOptions(RayHistoryServerId, request, headers, runtime);
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
 * @summary Retrieves the Dashboard URL for a DLC job, if available.
 *
 * @description Before using this API, review the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) for PAI-DLC.
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
 * @summary Retrieves the Dashboard URL for a DLC job, if available.
 *
 * @description Before using this API, review the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) for PAI-DLC.
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
 * @summary Retrieves the detailed configuration and runtime information of a DLC job.
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
 * @summary Retrieves the detailed configuration and runtime information of a DLC job.
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
 * @summary Retrieves the details of a job template.
 *
 * @param request GetJobTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobTemplateResponse
 */
GetJobTemplateResponse Client::getJobTemplateWithOptions(const string &TemplateId, const GetJobTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobTemplate"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobtemplates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobTemplateResponse>();
}

/**
 * @summary Retrieves the details of a job template.
 *
 * @param request GetJobTemplateRequest
 * @return GetJobTemplateResponse
 */
GetJobTemplateResponse Client::getJobTemplate(const string &TemplateId, const GetJobTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobTemplateWithOptions(TemplateId, request, headers, runtime);
}

/**
 * @summary Retrieve metrics data.
 *
 * @description ## Request description
 * - This API retrieves monitoring metrics for a specific job (JobId) or dimensions under a given namespace.
 * - It supports custom time ranges. By default, it returns data from the last hour.
 * - Select different time intervals (Period) to obtain data points with finer or coarser granularity.
 * - To paginate through large datasets, use the `NextToken` parameter.
 * - The `MetricName` parameter is required and specifies the monitoring metric to query.
 * - For advanced features or specific metric types, see the related documentation.
 *
 * @param request GetMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetricsResponse
 */
GetMetricsResponse Client::getMetricsWithOptions(const GetMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.getLength();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetrics"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/cms/metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetricsResponse>();
}

/**
 * @summary Retrieve metrics data.
 *
 * @description ## Request description
 * - This API retrieves monitoring metrics for a specific job (JobId) or dimensions under a given namespace.
 * - It supports custom time ranges. By default, it returns data from the last hour.
 * - Select different time intervals (Period) to obtain data points with finer or coarser granularity.
 * - To paginate through large datasets, use the `NextToken` parameter.
 * - The `MetricName` parameter is required and specifies the monitoring metric to query.
 * - For advanced features or specific metric types, see the related documentation.
 *
 * @param request GetMetricsRequest
 * @return GetMetricsResponse
 */
GetMetricsResponse Client::getMetrics(const GetMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMetricsWithOptions(request, headers, runtime);
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
 * @summary Retrieve the Ray Dashboard URL.
 *
 * @description Before you use this operation, review the PAI-DLC billing model and [pricing](https://help.aliyun.com/document_detail/171758.html).
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
 * @summary Retrieve the Ray Dashboard URL.
 *
 * @description Before you use this operation, review the PAI-DLC billing model and [pricing](https://help.aliyun.com/document_detail/171758.html).
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
 * @summary Retrieves the details of a specific RayHistoryServer.
 *
 * @description Before you call this API operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.>Notice: The total length of the parameters for the CreateJob API, including system-generated parameters, cannot exceed 65,536 bytes.
 *
 * @param request GetRayHistoryServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRayHistoryServerResponse
 */
GetRayHistoryServerResponse Client::getRayHistoryServerWithOptions(const string &RayHistoryServerId, const GetRayHistoryServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRayHistoryServer"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/rayhistoryservers/" , Darabonba::Encode::Encoder::percentEncode(RayHistoryServerId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRayHistoryServerResponse>();
}

/**
 * @summary Retrieves the details of a specific RayHistoryServer.
 *
 * @description Before you call this API operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.>Notice: The total length of the parameters for the CreateJob API, including system-generated parameters, cannot exceed 65,536 bytes.
 *
 * @param request GetRayHistoryServerRequest
 * @return GetRayHistoryServerResponse
 */
GetRayHistoryServerResponse Client::getRayHistoryServer(const string &RayHistoryServerId, const GetRayHistoryServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRayHistoryServerWithOptions(RayHistoryServerId, request, headers, runtime);
}

/**
 * @summary 获取信号
 *
 * @description ## 请求说明
 * 通过此 API，用户可以获取到指定 `JobId` 和 `SignalId` 对应的信号详情，包括信号的状态、发送范围等信息。请注意，返回的结果中不再包含每个 Pod 的原始结果结构，而是通过 `Status`, `Reason`, 和 `Message` 字段来表达信号处理的整体情况。
 *
 * @param request GetSignalRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSignalResponse
 */
GetSignalResponse Client::getSignalWithOptions(const string &JobId, const string &SignalId, const GetSignalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSignal"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/signals/" , Darabonba::Encode::Encoder::percentEncode(SignalId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSignalResponse>();
}

/**
 * @summary 获取信号
 *
 * @description ## 请求说明
 * 通过此 API，用户可以获取到指定 `JobId` 和 `SignalId` 对应的信号详情，包括信号的状态、发送范围等信息。请注意，返回的结果中不再包含每个 Pod 的原始结果结构，而是通过 `Status`, `Reason`, 和 `Message` 字段来表达信号处理的整体情况。
 *
 * @param request GetSignalRequest
 * @return GetSignalResponse
 */
GetSignalResponse Client::getSignal(const string &JobId, const string &SignalId, const GetSignalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSignalWithOptions(JobId, SignalId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a Tensorboard instance.
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
 * @summary Retrieves the details of a Tensorboard instance.
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
 * @summary Lists job templates in a specified workspace. You can paginate, sort, and filter the results by creator, `TemplateId`, or `TemplateName`.
 *
 * @param request ListJobTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobTemplatesResponse
 */
ListJobTemplatesResponse Client::listJobTemplatesWithOptions(const ListJobTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobTemplates"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobtemplates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobTemplatesResponse>();
}

/**
 * @summary Lists job templates in a specified workspace. You can paginate, sort, and filter the results by creator, `TemplateId`, or `TemplateName`.
 *
 * @param request ListJobTemplatesRequest
 * @return ListJobTemplatesResponse
 */
ListJobTemplatesResponse Client::listJobTemplates(const ListJobTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobTemplatesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of jobs with support for pagination, sorting, and conditional filtering.
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

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
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
 * @summary Retrieves a list of jobs with support for pagination, sorting, and conditional filtering.
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
 * @summary Lists RayHistoryServer resources.
 *
 * @description Before you use this operation, make sure that you are familiar with the billing and [pricing](https://help.aliyun.com/document_detail/171758.html) of Platform for AI - Deep Learning Containers (PAI-DLC).
 * >Notice: The total length of the CreateJob operation parameters, including system-generated parameters, cannot exceed 65,536 bytes..
 *
 * @param request ListRayHistoryServersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRayHistoryServersResponse
 */
ListRayHistoryServersResponse Client::listRayHistoryServersWithOptions(const ListRayHistoryServersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIdPrefix()) {
    query["IdPrefix"] = request.getIdPrefix();
  }

  if (!!request.hasModifiedAfter()) {
    query["ModifiedAfter"] = request.getModifiedAfter();
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

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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

  if (!!request.hasStoragePath()) {
    query["StoragePath"] = request.getStoragePath();
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
    {"action" , "ListRayHistoryServers"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/rayhistoryservers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRayHistoryServersResponse>();
}

/**
 * @summary Lists RayHistoryServer resources.
 *
 * @description Before you use this operation, make sure that you are familiar with the billing and [pricing](https://help.aliyun.com/document_detail/171758.html) of Platform for AI - Deep Learning Containers (PAI-DLC).
 * >Notice: The total length of the CreateJob operation parameters, including system-generated parameters, cannot exceed 65,536 bytes..
 *
 * @param request ListRayHistoryServersRequest
 * @return ListRayHistoryServersResponse
 */
ListRayHistoryServersResponse Client::listRayHistoryServers(const ListRayHistoryServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRayHistoryServersWithOptions(request, headers, runtime);
}

/**
 * @summary 获取信号列表
 *
 * @description ## 请求说明
 * 通过此 API 可以获取特定作业下的所有信号记录详情，包括信号 ID、状态、创建时间等信息。支持通过查询参数进一步筛选或排序结果。
 *
 * @param request ListSignalsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSignalsResponse
 */
ListSignalsResponse Client::listSignalsWithOptions(const string &JobId, const ListSignalsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSignals"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/signals")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSignalsResponse>();
}

/**
 * @summary 获取信号列表
 *
 * @description ## 请求说明
 * 通过此 API 可以获取特定作业下的所有信号记录详情，包括信号 ID、状态、创建时间等信息。支持通过查询参数进一步筛选或排序结果。
 *
 * @param request ListSignalsRequest
 * @return ListSignalsResponse
 */
ListSignalsResponse Client::listSignals(const string &JobId, const ListSignalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSignalsWithOptions(JobId, request, headers, runtime);
}

/**
 * @summary Queries a list of created Tensorboard instances.
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
 * @summary Queries a list of created Tensorboard instances.
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
 * @summary Sets the default version of a job template.
 *
 * @param request SetJobTemplateDefaultVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetJobTemplateDefaultVersionResponse
 */
SetJobTemplateDefaultVersionResponse Client::setJobTemplateDefaultVersionWithOptions(const string &TemplateId, const SetJobTemplateDefaultVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasVersion()) {
    body["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetJobTemplateDefaultVersion"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobtemplates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId) , "/defaultversion")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetJobTemplateDefaultVersionResponse>();
}

/**
 * @summary Sets the default version of a job template.
 *
 * @param request SetJobTemplateDefaultVersionRequest
 * @return SetJobTemplateDefaultVersionResponse
 */
SetJobTemplateDefaultVersionResponse Client::setJobTemplateDefaultVersion(const string &TemplateId, const SetJobTemplateDefaultVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return setJobTemplateDefaultVersionWithOptions(TemplateId, request, headers, runtime);
}

/**
 * @summary Starts a Ray History Server.
 *
 * @description Before calling this operation, familiarize yourself with the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.>Notice: The total length of the API parameters for the CreateJob operation, including system-generated parameters, cannot exceed 65,536 bytes.
 *
 * @param request StartRayHistoryServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRayHistoryServerResponse
 */
StartRayHistoryServerResponse Client::startRayHistoryServerWithOptions(const string &RayHistoryServerId, const StartRayHistoryServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRayHistoryServer"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/rayhistoryservers/" , Darabonba::Encode::Encoder::percentEncode(RayHistoryServerId) , "/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRayHistoryServerResponse>();
}

/**
 * @summary Starts a Ray History Server.
 *
 * @description Before calling this operation, familiarize yourself with the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.>Notice: The total length of the API parameters for the CreateJob operation, including system-generated parameters, cannot exceed 65,536 bytes.
 *
 * @param request StartRayHistoryServerRequest
 * @return StartRayHistoryServerResponse
 */
StartRayHistoryServerResponse Client::startRayHistoryServer(const string &RayHistoryServerId, const StartRayHistoryServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startRayHistoryServerWithOptions(RayHistoryServerId, request, headers, runtime);
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
 * @summary Stops a Ray History Server.
 *
 * @description Before calling this operation, ensure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) for PAI-DLC.>Notice: The total length of the parameters for the CreateJob interface, including system-generated parameters, cannot exceed 65,536 bytes.
 *
 * @param request StopRayHistoryServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRayHistoryServerResponse
 */
StopRayHistoryServerResponse Client::stopRayHistoryServerWithOptions(const string &RayHistoryServerId, const StopRayHistoryServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopRayHistoryServer"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/rayhistoryservers/" , Darabonba::Encode::Encoder::percentEncode(RayHistoryServerId) , "/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopRayHistoryServerResponse>();
}

/**
 * @summary Stops a Ray History Server.
 *
 * @description Before calling this operation, ensure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) for PAI-DLC.>Notice: The total length of the parameters for the CreateJob interface, including system-generated parameters, cannot exceed 65,536 bytes.
 *
 * @param request StopRayHistoryServerRequest
 * @return StopRayHistoryServerResponse
 */
StopRayHistoryServerResponse Client::stopRayHistoryServer(const string &RayHistoryServerId, const StopRayHistoryServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopRayHistoryServerWithOptions(RayHistoryServerId, request, headers, runtime);
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
 * @summary Updates a job\\"s configuration, such as its priority.
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

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
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
 * @summary Updates a job\\"s configuration, such as its priority.
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
 * @summary Updates a job template.
 *
 * @param request UpdateJobTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateJobTemplateResponse
 */
UpdateJobTemplateResponse Client::updateJobTemplateWithOptions(const string &TemplateId, const UpdateJobTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConstraints()) {
    body["Constraints"] = request.getConstraints();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMetadata()) {
    body["Metadata"] = request.getMetadata();
  }

  if (!!request.hasSetAsDefault()) {
    body["SetAsDefault"] = request.getSetAsDefault();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateJobTemplate"},
    {"version" , "2020-12-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobtemplates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateJobTemplateResponse>();
}

/**
 * @summary Updates a job template.
 *
 * @param request UpdateJobTemplateRequest
 * @return UpdateJobTemplateResponse
 */
UpdateJobTemplateResponse Client::updateJobTemplate(const string &TemplateId, const UpdateJobTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateJobTemplateWithOptions(TemplateId, request, headers, runtime);
}

/**
 * @summary Update a Tensorboard.
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
 * @summary Update a Tensorboard.
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