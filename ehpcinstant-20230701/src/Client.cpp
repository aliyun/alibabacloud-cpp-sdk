#include <darabonba/Core.hpp>
#include <alibabacloud/EhpcInstant20230701.hpp>
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
using namespace AlibabaCloud::EhpcInstant20230701::Models;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{

AlibabaCloud::EhpcInstant20230701::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("ehpcinstant", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加托管侧用户自定义镜像
 *
 * @param tmpReq AddImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddImageResponse
 */
AddImageResponse Client::addImageWithOptions(const AddImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddImageShrinkRequest request = AddImageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContainerImageSpec()) {
    request.setContainerImageSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.containerImageSpec(), "ContainerImageSpec", "json"));
  }

  if (!!tmpReq.hasVMImageSpec()) {
    request.setVMImageSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.VMImageSpec(), "VMImageSpec", "json"));
  }

  json query = {};
  if (!!request.hasContainerImageSpecShrink()) {
    query["ContainerImageSpec"] = request.containerImageSpecShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.imageType();
  }

  if (!!request.hasImageVersion()) {
    query["ImageVersion"] = request.imageVersion();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasVMImageSpecShrink()) {
    query["VMImageSpec"] = request.VMImageSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddImage"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddImageResponse>();
}

/**
 * @summary 添加托管侧用户自定义镜像
 *
 * @param request AddImageRequest
 * @return AddImageResponse
 */
AddImageResponse Client::addImage(const AddImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addImageWithOptions(request, runtime);
}

/**
 * @summary 创建执行计划创建执行计划
 *
 * @param tmpReq CreateActionPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateActionPlanResponse
 */
CreateActionPlanResponse Client::createActionPlanWithOptions(const CreateActionPlanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateActionPlanShrinkRequest request = CreateActionPlanShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRegions()) {
    request.setRegionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.regions(), "Regions", "json"));
  }

  if (!!tmpReq.hasResources()) {
    request.setResourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resources(), "Resources", "json"));
  }

  json query = {};
  if (!!request.hasActionPlanName()) {
    query["ActionPlanName"] = request.actionPlanName();
  }

  if (!!request.hasAllocationSpec()) {
    query["AllocationSpec"] = request.allocationSpec();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDesiredCapacity()) {
    query["DesiredCapacity"] = request.desiredCapacity();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasPrologScript()) {
    query["PrologScript"] = request.prologScript();
  }

  if (!!request.hasRegionsShrink()) {
    query["Regions"] = request.regionsShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasResourcesShrink()) {
    query["Resources"] = request.resourcesShrink();
  }

  if (!!request.hasScript()) {
    query["Script"] = request.script();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateActionPlan"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateActionPlanResponse>();
}

/**
 * @summary 创建执行计划创建执行计划
 *
 * @param request CreateActionPlanRequest
 * @return CreateActionPlanResponse
 */
CreateActionPlanResponse Client::createActionPlan(const CreateActionPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createActionPlanWithOptions(request, runtime);
}

/**
 * @summary 提交任务
 *
 * @param tmpReq CreateJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJobWithOptions(const CreateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateJobShrinkRequest request = CreateJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDependencyPolicy()) {
    request.setDependencyPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dependencyPolicy(), "DependencyPolicy", "json"));
  }

  if (!!tmpReq.hasDeploymentPolicy()) {
    request.setDeploymentPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deploymentPolicy(), "DeploymentPolicy", "json"));
  }

  if (!!tmpReq.hasSecurityPolicy()) {
    request.setSecurityPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.securityPolicy(), "SecurityPolicy", "json"));
  }

  if (!!tmpReq.hasTasks()) {
    request.setTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tasks(), "Tasks", "json"));
  }

  json query = {};
  if (!!request.hasDependencyPolicyShrink()) {
    query["DependencyPolicy"] = request.dependencyPolicyShrink();
  }

  if (!!request.hasDeploymentPolicyShrink()) {
    query["DeploymentPolicy"] = request.deploymentPolicyShrink();
  }

  if (!!request.hasJobDescription()) {
    query["JobDescription"] = request.jobDescription();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.jobName();
  }

  if (!!request.hasJobScheduler()) {
    query["JobScheduler"] = request.jobScheduler();
  }

  if (!!request.hasSecurityPolicyShrink()) {
    query["SecurityPolicy"] = request.securityPolicyShrink();
  }

  if (!!request.hasTasksShrink()) {
    query["Tasks"] = request.tasksShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateJob"},
    {"version" , "2023-07-01"},
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
 * @summary 提交任务
 *
 * @param request CreateJobRequest
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJob(const CreateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobWithOptions(request, runtime);
}

/**
 * @summary 创建资源池
 *
 * @param tmpReq CreatePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePoolResponse
 */
CreatePoolResponse Client::createPoolWithOptions(const CreatePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePoolShrinkRequest request = CreatePoolShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceLimits()) {
    request.setResourceLimitsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceLimits(), "ResourceLimits", "json"));
  }

  json query = {};
  if (!!request.hasPoolName()) {
    query["PoolName"] = request.poolName();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasResourceLimitsShrink()) {
    query["ResourceLimits"] = request.resourceLimitsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePool"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePoolResponse>();
}

/**
 * @summary 创建资源池
 *
 * @param request CreatePoolRequest
 * @return CreatePoolResponse
 */
CreatePoolResponse Client::createPool(const CreatePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPoolWithOptions(request, runtime);
}

/**
 * @summary 删除执行计划
 *
 * @param request DeleteActionPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteActionPlanResponse
 */
DeleteActionPlanResponse Client::deleteActionPlanWithOptions(const DeleteActionPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionPlanId()) {
    query["ActionPlanId"] = request.actionPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteActionPlan"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteActionPlanResponse>();
}

/**
 * @summary 删除执行计划
 *
 * @param request DeleteActionPlanRequest
 * @return DeleteActionPlanResponse
 */
DeleteActionPlanResponse Client::deleteActionPlan(const DeleteActionPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteActionPlanWithOptions(request, runtime);
}

/**
 * @summary 删除作业
 *
 * @param tmpReq DeleteJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobsResponse
 */
DeleteJobsResponse Client::deleteJobsWithOptions(const DeleteJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteJobsShrinkRequest request = DeleteJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExecutorIds()) {
    request.setExecutorIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.executorIds(), "ExecutorIds", "json"));
  }

  if (!!tmpReq.hasJobSpec()) {
    request.setJobSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobSpec(), "JobSpec", "json"));
  }

  json query = {};
  if (!!request.hasExecutorIdsShrink()) {
    query["ExecutorIds"] = request.executorIdsShrink();
  }

  if (!!request.hasJobScheduler()) {
    query["JobScheduler"] = request.jobScheduler();
  }

  if (!!request.hasJobSpecShrink()) {
    query["JobSpec"] = request.jobSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteJobs"},
    {"version" , "2023-07-01"},
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
 * @summary 删除作业
 *
 * @param request DeleteJobsRequest
 * @return DeleteJobsResponse
 */
DeleteJobsResponse Client::deleteJobs(const DeleteJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteJobsWithOptions(request, runtime);
}

/**
 * @summary 删除资源池
 *
 * @param request DeletePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePoolResponse
 */
DeletePoolResponse Client::deletePoolWithOptions(const DeletePoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPoolName()) {
    query["PoolName"] = request.poolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePool"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePoolResponse>();
}

/**
 * @summary 删除资源池
 *
 * @param request DeletePoolRequest
 * @return DeletePoolResponse
 */
DeletePoolResponse Client::deletePool(const DeletePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePoolWithOptions(request, runtime);
}

/**
 * @summary 查询作业性能数据
 *
 * @param tmpReq DescribeJobMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobMetricDataResponse
 */
DescribeJobMetricDataResponse Client::describeJobMetricDataWithOptions(const DescribeJobMetricDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeJobMetricDataShrinkRequest request = DescribeJobMetricDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArrayIndex()) {
    request.setArrayIndexShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.arrayIndex(), "ArrayIndex", "json"));
  }

  json query = {};
  if (!!request.hasArrayIndexShrink()) {
    query["ArrayIndex"] = request.arrayIndexShrink();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJobMetricData"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobMetricDataResponse>();
}

/**
 * @summary 查询作业性能数据
 *
 * @param request DescribeJobMetricDataRequest
 * @return DescribeJobMetricDataResponse
 */
DescribeJobMetricDataResponse Client::describeJobMetricData(const DescribeJobMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobMetricDataWithOptions(request, runtime);
}

/**
 * @summary 查询作业即时监控项
 *
 * @param tmpReq DescribeJobMetricLastRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobMetricLastResponse
 */
DescribeJobMetricLastResponse Client::describeJobMetricLastWithOptions(const DescribeJobMetricLastRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeJobMetricLastShrinkRequest request = DescribeJobMetricLastShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArrayIndex()) {
    request.setArrayIndexShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.arrayIndex(), "ArrayIndex", "json"));
  }

  json query = {};
  if (!!request.hasArrayIndexShrink()) {
    query["ArrayIndex"] = request.arrayIndexShrink();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJobMetricLast"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobMetricLastResponse>();
}

/**
 * @summary 查询作业即时监控项
 *
 * @param request DescribeJobMetricLastRequest
 * @return DescribeJobMetricLastResponse
 */
DescribeJobMetricLastResponse Client::describeJobMetricLast(const DescribeJobMetricLastRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobMetricLastWithOptions(request, runtime);
}

/**
 * @summary 查询执行计划详情
 *
 * @param request GetActionPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetActionPlanResponse
 */
GetActionPlanResponse Client::getActionPlanWithOptions(const GetActionPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionPlanId()) {
    query["ActionPlanId"] = request.actionPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetActionPlan"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetActionPlanResponse>();
}

/**
 * @summary 查询执行计划详情
 *
 * @param request GetActionPlanRequest
 * @return GetActionPlanResponse
 */
GetActionPlanResponse Client::getActionPlan(const GetActionPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getActionPlanWithOptions(request, runtime);
}

/**
 * @summary 查看应用版本列表
 *
 * @param request GetAppVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppVersionsResponse
 */
GetAppVersionsResponse Client::getAppVersionsWithOptions(const GetAppVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasImageCategory()) {
    query["ImageCategory"] = request.imageCategory();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.imageType();
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
    {"action" , "GetAppVersions"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppVersionsResponse>();
}

/**
 * @summary 查看应用版本列表
 *
 * @param request GetAppVersionsRequest
 * @return GetAppVersionsResponse
 */
GetAppVersionsResponse Client::getAppVersions(const GetAppVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppVersionsWithOptions(request, runtime);
}

/**
 * @summary 查询托管侧镜像详情。
 *
 * @param tmpReq GetImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageResponse
 */
GetImageResponse Client::getImageWithOptions(const GetImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetImageShrinkRequest request = GetImageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdditionalRegionIds()) {
    request.setAdditionalRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.additionalRegionIds(), "AdditionalRegionIds", "json"));
  }

  json query = {};
  if (!!request.hasAdditionalRegionIdsShrink()) {
    query["AdditionalRegionIds"] = request.additionalRegionIdsShrink();
  }

  if (!!request.hasImageCategory()) {
    query["ImageCategory"] = request.imageCategory();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.imageId();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.imageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImage"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageResponse>();
}

/**
 * @summary 查询托管侧镜像详情。
 *
 * @param request GetImageRequest
 * @return GetImageResponse
 */
GetImageResponse Client::getImage(const GetImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageWithOptions(request, runtime);
}

/**
 * @summary 查询作业详情
 *
 * @param request GetJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobResponse
 */
GetJobResponse Client::getJobWithOptions(const GetJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJob"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobResponse>();
}

/**
 * @summary 查询作业详情
 *
 * @param request GetJobRequest
 * @return GetJobResponse
 */
GetJobResponse Client::getJob(const GetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobWithOptions(request, runtime);
}

/**
 * @summary 查询队列详细信息
 *
 * @param request GetPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPoolResponse
 */
GetPoolResponse Client::getPoolWithOptions(const GetPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPoolName()) {
    query["PoolName"] = request.poolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPool"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPoolResponse>();
}

/**
 * @summary 查询队列详细信息
 *
 * @param request GetPoolRequest
 * @return GetPoolResponse
 */
GetPoolResponse Client::getPool(const GetPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPoolWithOptions(request, runtime);
}

/**
 * @summary 查询执行计划的执行情况。
 *
 * @param request ListActionPlanActivitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListActionPlanActivitiesResponse
 */
ListActionPlanActivitiesResponse Client::listActionPlanActivitiesWithOptions(const ListActionPlanActivitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionPlanId()) {
    query["ActionPlanId"] = request.actionPlanId();
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
    {"action" , "ListActionPlanActivities"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListActionPlanActivitiesResponse>();
}

/**
 * @summary 查询执行计划的执行情况。
 *
 * @param request ListActionPlanActivitiesRequest
 * @return ListActionPlanActivitiesResponse
 */
ListActionPlanActivitiesResponse Client::listActionPlanActivities(const ListActionPlanActivitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listActionPlanActivitiesWithOptions(request, runtime);
}

/**
 * @summary 查询执行计划列表
 *
 * @param tmpReq ListActionPlansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListActionPlansResponse
 */
ListActionPlansResponse Client::listActionPlansWithOptions(const ListActionPlansRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListActionPlansShrinkRequest request = ListActionPlansShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasActionPlanIds()) {
    request.setActionPlanIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.actionPlanIds(), "ActionPlanIds", "json"));
  }

  json query = {};
  if (!!request.hasActionPlanIdsShrink()) {
    query["ActionPlanIds"] = request.actionPlanIdsShrink();
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
    {"action" , "ListActionPlans"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListActionPlansResponse>();
}

/**
 * @summary 查询执行计划列表
 *
 * @param request ListActionPlansRequest
 * @return ListActionPlansResponse
 */
ListActionPlansResponse Client::listActionPlans(const ListActionPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listActionPlansWithOptions(request, runtime);
}

/**
 * @summary 查询全局Executor信息
 *
 * @param tmpReq ListExecutorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExecutorsResponse
 */
ListExecutorsResponse Client::listExecutorsWithOptions(const ListExecutorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListExecutorsShrinkRequest request = ListExecutorsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.filterShrink();
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
    {"action" , "ListExecutors"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExecutorsResponse>();
}

/**
 * @summary 查询全局Executor信息
 *
 * @param request ListExecutorsRequest
 * @return ListExecutorsResponse
 */
ListExecutorsResponse Client::listExecutors(const ListExecutorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExecutorsWithOptions(request, runtime);
}

/**
 * @summary 查看托管侧镜像列表
 *
 * @param tmpReq ListImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImagesWithOptions(const ListImagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListImagesShrinkRequest request = ListImagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImageIds()) {
    request.setImageIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageIds(), "ImageIds", "json"));
  }

  if (!!tmpReq.hasImageNames()) {
    request.setImageNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageNames(), "ImageNames", "json"));
  }

  json query = {};
  if (!!request.hasImageCategory()) {
    query["ImageCategory"] = request.imageCategory();
  }

  if (!!request.hasImageIdsShrink()) {
    query["ImageIds"] = request.imageIdsShrink();
  }

  if (!!request.hasImageNamesShrink()) {
    query["ImageNames"] = request.imageNamesShrink();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.imageType();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
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
    {"action" , "ListImages"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImagesResponse>();
}

/**
 * @summary 查看托管侧镜像列表
 *
 * @param request ListImagesRequest
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImages(const ListImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImagesWithOptions(request, runtime);
}

/**
 * @summary 查询作业Executor信息
 *
 * @param request ListJobExecutorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobExecutorsResponse
 */
ListJobExecutorsResponse Client::listJobExecutorsWithOptions(const ListJobExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobExecutors"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobExecutorsResponse>();
}

/**
 * @summary 查询作业Executor信息
 *
 * @param request ListJobExecutorsRequest
 * @return ListJobExecutorsResponse
 */
ListJobExecutorsResponse Client::listJobExecutors(const ListJobExecutorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobExecutorsWithOptions(request, runtime);
}

/**
 * @summary 查询作业列表
 *
 * @param tmpReq ListJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const ListJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListJobsShrinkRequest request = ListJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  if (!!tmpReq.hasSortBy()) {
    request.setSortByShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sortBy(), "SortBy", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.filterShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortByShrink()) {
    query["SortBy"] = request.sortByShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2023-07-01"},
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
 * @summary 查询作业列表
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobsWithOptions(request, runtime);
}

/**
 * @summary 查询资源池列表
 *
 * @param tmpReq ListPoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoolsResponse
 */
ListPoolsResponse Client::listPoolsWithOptions(const ListPoolsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPoolsShrinkRequest request = ListPoolsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.filterShrink();
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
    {"action" , "ListPools"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoolsResponse>();
}

/**
 * @summary 查询资源池列表
 *
 * @param request ListPoolsRequest
 * @return ListPoolsResponse
 */
ListPoolsResponse Client::listPools(const ListPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoolsWithOptions(request, runtime);
}

/**
 * @summary 查询一个或多个资源已经绑定的标签列表
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResult()) {
    query["MaxResult"] = request.maxResult();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary 查询一个或多个资源已经绑定的标签列表
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 移除托管侧镜像信息。
 *
 * @param request RemoveImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveImageResponse
 */
RemoveImageResponse Client::removeImageWithOptions(const RemoveImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.imageId();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.imageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveImage"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveImageResponse>();
}

/**
 * @summary 移除托管侧镜像信息。
 *
 * @param request RemoveImageRequest
 * @return RemoveImageResponse
 */
RemoveImageResponse Client::removeImage(const RemoveImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeImageWithOptions(request, runtime);
}

/**
 * @summary 应用跨地域同步
 *
 * @param tmpReq SynchronizeAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SynchronizeAppResponse
 */
SynchronizeAppResponse Client::synchronizeAppWithOptions(const SynchronizeAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SynchronizeAppShrinkRequest request = SynchronizeAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTargetRegionIds()) {
    request.setTargetRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.targetRegionIds(), "TargetRegionIds", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasTargetRegionIdsShrink()) {
    query["TargetRegionIds"] = request.targetRegionIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SynchronizeApp"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SynchronizeAppResponse>();
}

/**
 * @summary 应用跨地域同步
 *
 * @param request SynchronizeAppRequest
 * @return SynchronizeAppResponse
 */
SynchronizeAppResponse Client::synchronizeApp(const SynchronizeAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return synchronizeAppWithOptions(request, runtime);
}

/**
 * @summary 为指定的资源列表统一创建并绑定标签
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary 为指定的资源列表统一创建并绑定标签
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary 为指定的ECS资源列表统一解绑标签
 *
 * @param request UnTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResourcesWithOptions(const UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnTagResources"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnTagResourcesResponse>();
}

/**
 * @summary 为指定的ECS资源列表统一解绑标签
 *
 * @param request UnTagResourcesRequest
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResources(const UnTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 更新执行计划
 *
 * @param request UpdateActionPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateActionPlanResponse
 */
UpdateActionPlanResponse Client::updateActionPlanWithOptions(const UpdateActionPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionPlanId()) {
    query["ActionPlanId"] = request.actionPlanId();
  }

  if (!!request.hasDesiredCapacity()) {
    query["DesiredCapacity"] = request.desiredCapacity();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateActionPlan"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateActionPlanResponse>();
}

/**
 * @summary 更新执行计划
 *
 * @param request UpdateActionPlanRequest
 * @return UpdateActionPlanResponse
 */
UpdateActionPlanResponse Client::updateActionPlan(const UpdateActionPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateActionPlanWithOptions(request, runtime);
}

/**
 * @summary 更新资源池
 *
 * @param tmpReq UpdatePoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePoolResponse
 */
UpdatePoolResponse Client::updatePoolWithOptions(const UpdatePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePoolShrinkRequest request = UpdatePoolShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceLimits()) {
    request.setResourceLimitsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceLimits(), "ResourceLimits", "json"));
  }

  json query = {};
  if (!!request.hasPoolName()) {
    query["PoolName"] = request.poolName();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasResourceLimitsShrink()) {
    query["ResourceLimits"] = request.resourceLimitsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePool"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePoolResponse>();
}

/**
 * @summary 更新资源池
 *
 * @param request UpdatePoolRequest
 * @return UpdatePoolResponse
 */
UpdatePoolResponse Client::updatePool(const UpdatePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePoolWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701