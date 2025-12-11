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
 * @summary Add a custom image.
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
 * @summary Add a custom image.
 *
 * @param request AddImageRequest
 * @return AddImageResponse
 */
AddImageResponse Client::addImage(const AddImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addImageWithOptions(request, runtime);
}

/**
 * @summary Create a E-HPC execution plan.
 *
 * @description **Make sure that you fully understand E-HPC Instnat billing methods and [prices](https://help.aliyun.com/zh/e-hpc/e-hpc-instant/product-overview/billing-overview?spm=a2c4g.11186623.help-menu-57664.d_0_2_0.5fdd28422y6UvO).
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
 * @summary Create a E-HPC execution plan.
 *
 * @description **Make sure that you fully understand E-HPC Instnat billing methods and [prices](https://help.aliyun.com/zh/e-hpc/e-hpc-instant/product-overview/billing-overview?spm=a2c4g.11186623.help-menu-57664.d_0_2_0.5fdd28422y6UvO).
 *
 * @param request CreateActionPlanRequest
 * @return CreateActionPlanResponse
 */
CreateActionPlanResponse Client::createActionPlan(const CreateActionPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createActionPlanWithOptions(request, runtime);
}

/**
 * @summary Create a E-HPC Instant job.
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
 * @summary Create a E-HPC Instant job.
 *
 * @param request CreateJobRequest
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJob(const CreateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobWithOptions(request, runtime);
}

/**
 * @summary Creates a resource pool.
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
 * @summary Creates a resource pool.
 *
 * @param request CreatePoolRequest
 * @return CreatePoolResponse
 */
CreatePoolResponse Client::createPool(const CreatePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPoolWithOptions(request, runtime);
}

/**
 * @summary Delete an execution plan
 *
 * @description **Make sure that you fully understand E-HPC Instnat billing methods and [prices](https://help.aliyun.com/zh/e-hpc/e-hpc-instant/product-overview/billing-overview?spm=a2c4g.11186623.help-menu-57664.d_0_2_0.5fdd28422y6UvO).**
 * This operation stops all Instant jobs that are managed by ActionPlanId.
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
 * @summary Delete an execution plan
 *
 * @description **Make sure that you fully understand E-HPC Instnat billing methods and [prices](https://help.aliyun.com/zh/e-hpc/e-hpc-instant/product-overview/billing-overview?spm=a2c4g.11186623.help-menu-57664.d_0_2_0.5fdd28422y6UvO).**
 * This operation stops all Instant jobs that are managed by ActionPlanId.
 *
 * @param request DeleteActionPlanRequest
 * @return DeleteActionPlanResponse
 */
DeleteActionPlanResponse Client::deleteActionPlan(const DeleteActionPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteActionPlanWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more job records that are in the final state from a specified cluster.
 *
 * @param tmpReq DeleteJobRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobRecordsResponse
 */
DeleteJobRecordsResponse Client::deleteJobRecordsWithOptions(const DeleteJobRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteJobRecordsShrinkRequest request = DeleteJobRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobIds()) {
    request.setJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobIds(), "JobIds", "json"));
  }

  json query = {};
  if (!!request.hasJobIdsShrink()) {
    query["JobIds"] = request.jobIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteJobRecords"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteJobRecordsResponse>();
}

/**
 * @summary Deletes one or more job records that are in the final state from a specified cluster.
 *
 * @param request DeleteJobRecordsRequest
 * @return DeleteJobRecordsResponse
 */
DeleteJobRecordsResponse Client::deleteJobRecords(const DeleteJobRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteJobRecordsWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more jobs from a specified cluster.
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
 * @summary Deletes one or more jobs from a specified cluster.
 *
 * @param request DeleteJobsRequest
 * @return DeleteJobsResponse
 */
DeleteJobsResponse Client::deleteJobs(const DeleteJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteJobsWithOptions(request, runtime);
}

/**
 * @summary You can execute this statement to delete a resource pool.
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
 * @summary You can execute this statement to delete a resource pool.
 *
 * @param request DeletePoolRequest
 * @return DeletePoolResponse
 */
DeletePoolResponse Client::deletePool(const DeletePoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePoolWithOptions(request, runtime);
}

/**
 * @summary You can query the monitoring time series dataset of a job by specifying the job array index and query metric parameters.
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
 * @summary You can query the monitoring time series dataset of a job by specifying the job array index and query metric parameters.
 *
 * @param request DescribeJobMetricDataRequest
 * @return DescribeJobMetricDataResponse
 */
DescribeJobMetricDataResponse Client::describeJobMetricData(const DescribeJobMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobMetricDataWithOptions(request, runtime);
}

/**
 * @summary Queries all instant monitoring metrics in the job array list by specifying a specific job array index list.
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
 * @summary Queries all instant monitoring metrics in the job array list by specifying a specific job array index list.
 *
 * @param request DescribeJobMetricLastRequest
 * @return DescribeJobMetricLastResponse
 */
DescribeJobMetricLastResponse Client::describeJobMetricLast(const DescribeJobMetricLastRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobMetricLastWithOptions(request, runtime);
}

/**
 * @summary Querying Execution Plan Details
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
 * @summary Querying Execution Plan Details
 *
 * @param request GetActionPlanRequest
 * @return GetActionPlanResponse
 */
GetActionPlanResponse Client::getActionPlan(const GetActionPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getActionPlanWithOptions(request, runtime);
}

/**
 * @summary Obtains the application version list.
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
 * @summary Obtains the application version list.
 *
 * @param request GetAppVersionsRequest
 * @return GetAppVersionsResponse
 */
GetAppVersionsResponse Client::getAppVersions(const GetAppVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppVersionsWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about an image.
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
 * @summary Obtains the information about an image.
 *
 * @param request GetImageRequest
 * @return GetImageResponse
 */
GetImageResponse Client::getImage(const GetImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of an execution job.
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
 * @summary Obtains the details of an execution job.
 *
 * @param request GetJobRequest
 * @return GetJobResponse
 */
GetJobResponse Client::getJob(const GetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of a resource pool.
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
 * @summary Obtains the details of a resource pool.
 *
 * @param request GetPoolRequest
 * @return GetPoolResponse
 */
GetPoolResponse Client::getPool(const GetPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPoolWithOptions(request, runtime);
}

/**
 * @summary Queries the execution status of an execution plan.
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
 * @summary Queries the execution status of an execution plan.
 *
 * @param request ListActionPlanActivitiesRequest
 * @return ListActionPlanActivitiesResponse
 */
ListActionPlanActivitiesResponse Client::listActionPlanActivities(const ListActionPlanActivitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listActionPlanActivitiesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of execution plans.
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
 * @summary Queries the list of execution plans.
 *
 * @param request ListActionPlansRequest
 * @return ListActionPlansResponse
 */
ListActionPlansResponse Client::listActionPlans(const ListActionPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listActionPlansWithOptions(request, runtime);
}

/**
 * @summary 查询Executor的事件信息
 *
 * @param tmpReq ListExecutorEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExecutorEventsResponse
 */
ListExecutorEventsResponse Client::listExecutorEventsWithOptions(const ListExecutorEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListExecutorEventsShrinkRequest request = ListExecutorEventsShrinkRequest();
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
    {"action" , "ListExecutorEvents"},
    {"version" , "2023-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExecutorEventsResponse>();
}

/**
 * @summary 查询Executor的事件信息
 *
 * @param request ListExecutorEventsRequest
 * @return ListExecutorEventsResponse
 */
ListExecutorEventsResponse Client::listExecutorEvents(const ListExecutorEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExecutorEventsWithOptions(request, runtime);
}

/**
 * @summary Querying Global Executor Information
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
 * @summary Querying Global Executor Information
 *
 * @param request ListExecutorsRequest
 * @return ListExecutorsResponse
 */
ListExecutorsResponse Client::listExecutors(const ListExecutorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExecutorsWithOptions(request, runtime);
}

/**
 * @summary Queries the image list.
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
 * @summary Queries the image list.
 *
 * @param request ListImagesRequest
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImages(const ListImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImagesWithOptions(request, runtime);
}

/**
 * @summary Queries job executor information.
 *
 * @description Queries job executor information.
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
 * @summary Queries job executor information.
 *
 * @description Queries job executor information.
 *
 * @param request ListJobExecutorsRequest
 * @return ListJobExecutorsResponse
 */
ListJobExecutorsResponse Client::listJobExecutors(const ListJobExecutorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobExecutorsWithOptions(request, runtime);
}

/**
 * @summary Queries the jobs in a cluster.
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
 * @summary Queries the jobs in a cluster.
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the resource pool list.
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
 * @summary Queries the resource pool list.
 *
 * @param request ListPoolsRequest
 * @return ListPoolsResponse
 */
ListPoolsResponse Client::listPools(const ListPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoolsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are bound to one or more Instant resources.
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
 * @summary Queries the tags that are bound to one or more Instant resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Remove a custom image
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
 * @summary Remove a custom image
 *
 * @param request RemoveImageRequest
 * @return RemoveImageResponse
 */
RemoveImageResponse Client::removeImage(const RemoveImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeImageWithOptions(request, runtime);
}

/**
 * @summary Application cross-region synchronization
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
 * @summary Application cross-region synchronization
 *
 * @param request SynchronizeAppRequest
 * @return SynchronizeAppResponse
 */
SynchronizeAppResponse Client::synchronizeApp(const SynchronizeAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return synchronizeAppWithOptions(request, runtime);
}

/**
 * @summary Create and bind tags to Instant resource list
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
 * @summary Create and bind tags to Instant resource list
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbind tags from Instant resource list. If the tag is not bound to other resources, the tag is automatically deleted.
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
 * @summary Unbind tags from Instant resource list. If the tag is not bound to other resources, the tag is automatically deleted.
 *
 * @param request UnTagResourcesRequest
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResources(const UnTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Adjust the resource scale of the execution plan or modify the execution status
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
 * @summary Adjust the resource scale of the execution plan or modify the execution status
 *
 * @param request UpdateActionPlanRequest
 * @return UpdateActionPlanResponse
 */
UpdateActionPlanResponse Client::updateActionPlan(const UpdateActionPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateActionPlanWithOptions(request, runtime);
}

/**
 * @summary Update the resource pool configuration.
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
 * @summary Update the resource pool configuration.
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