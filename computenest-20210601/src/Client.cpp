#include <darabonba/Core.hpp>
#include <alibabacloud/ComputeNest20210601.hpp>
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
using namespace AlibabaCloud::ComputeNest20210601::Models;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{

AlibabaCloud::ComputeNest20210601::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("computenest", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Cancels the application for using a service.
 *
 * @param request CancelServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelServiceUsageResponse
 */
CancelServiceUsageResponse Client::cancelServiceUsageWithOptions(const CancelServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasNeedDelete()) {
    query["NeedDelete"] = request.getNeedDelete();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelServiceUsage"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelServiceUsageResponse>();
}

/**
 * @summary Cancels the application for using a service.
 *
 * @param request CancelServiceUsageRequest
 * @return CancelServiceUsageResponse
 */
CancelServiceUsageResponse Client::cancelServiceUsage(const CancelServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group of a cloud resource based on the resource ID.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group of a cloud resource based on the resource ID.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Performs a precheck before deploying a service instance.
 *
 * @param request CheckServiceDeployableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceDeployableResponse
 */
CheckServiceDeployableResponse Client::checkServiceDeployableWithOptions(const CheckServiceDeployableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPostPaidAmount()) {
    query["PostPaidAmount"] = request.getPostPaidAmount();
  }

  if (!!request.hasPrePaidAmount()) {
    query["PrePaidAmount"] = request.getPrePaidAmount();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTrialType()) {
    query["TrialType"] = request.getTrialType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceDeployable"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckServiceDeployableResponse>();
}

/**
 * @summary Performs a precheck before deploying a service instance.
 *
 * @param request CheckServiceDeployableRequest
 * @return CheckServiceDeployableResponse
 */
CheckServiceDeployableResponse Client::checkServiceDeployable(const CheckServiceDeployableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceDeployableWithOptions(request, runtime);
}

/**
 * @summary Continues to deploy a service instance after the service instance failed to be deployed.
 *
 * @description This operation is available only for service instances that belong to private services deployed by using Resource Orchestration Service (ROS).
 *
 * @param request ContinueDeployServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinueDeployServiceInstanceResponse
 */
ContinueDeployServiceInstanceResponse Client::continueDeployServiceInstanceWithOptions(const ContinueDeployServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasOption()) {
    query["Option"] = request.getOption();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ContinueDeployServiceInstance"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContinueDeployServiceInstanceResponse>();
}

/**
 * @summary Continues to deploy a service instance after the service instance failed to be deployed.
 *
 * @description This operation is available only for service instances that belong to private services deployed by using Resource Orchestration Service (ROS).
 *
 * @param request ContinueDeployServiceInstanceRequest
 * @return ContinueDeployServiceInstanceResponse
 */
ContinueDeployServiceInstanceResponse Client::continueDeployServiceInstance(const ContinueDeployServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continueDeployServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Create backup for Compute Nest instance
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request CreateBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackupWithOptions(const CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackup"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackupResponse>();
}

/**
 * @summary Create backup for Compute Nest instance
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request CreateBackupRequest
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackup(const CreateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupWithOptions(request, runtime);
}

/**
 * @summary Create restore task
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request CreateRestoreTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRestoreTaskResponse
 */
CreateRestoreTaskResponse Client::createRestoreTaskWithOptions(const CreateRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRestoreTask"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRestoreTaskResponse>();
}

/**
 * @summary Create restore task
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request CreateRestoreTaskRequest
 * @return CreateRestoreTaskResponse
 */
CreateRestoreTaskResponse Client::createRestoreTask(const CreateRestoreTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRestoreTaskWithOptions(request, runtime);
}

/**
 * @summary Creates and deploys a service instance.
 *
 * @param tmpReq CreateServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceInstanceResponse
 */
CreateServiceInstanceResponse Client::createServiceInstanceWithOptions(const CreateServiceInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateServiceInstanceShrinkRequest request = CreateServiceInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodity()) {
    query["Commodity"] = request.getCommodity();
  }

  if (!!request.hasContactGroup()) {
    query["ContactGroup"] = request.getContactGroup();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEnableInstanceOps()) {
    query["EnableInstanceOps"] = request.getEnableInstanceOps();
  }

  if (!!request.hasEnableUserPrometheus()) {
    query["EnableUserPrometheus"] = request.getEnableUserPrometheus();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOperationMetadata()) {
    query["OperationMetadata"] = request.getOperationMetadata();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceAutoPay()) {
    query["ResourceAutoPay"] = request.getResourceAutoPay();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasSpecificationCode()) {
    query["SpecificationCode"] = request.getSpecificationCode();
  }

  if (!!request.hasSpecificationName()) {
    query["SpecificationName"] = request.getSpecificationName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTrialType()) {
    query["TrialType"] = request.getTrialType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceInstance"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceInstanceResponse>();
}

/**
 * @summary Creates and deploys a service instance.
 *
 * @param request CreateServiceInstanceRequest
 * @return CreateServiceInstanceResponse
 */
CreateServiceInstanceResponse Client::createServiceInstance(const CreateServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates an application for using a service.
 *
 * @param tmpReq CreateServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceUsageResponse
 */
CreateServiceUsageResponse Client::createServiceUsageWithOptions(const CreateServiceUsageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateServiceUsageShrinkRequest request = CreateServiceUsageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInformation()) {
    request.setUserInformationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInformation(), "UserInformation", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasUserInformationShrink()) {
    query["UserInformation"] = request.getUserInformationShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceUsage"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceUsageResponse>();
}

/**
 * @summary Creates an application for using a service.
 *
 * @param request CreateServiceUsageRequest
 * @return CreateServiceUsageResponse
 */
CreateServiceUsageResponse Client::createServiceUsage(const CreateServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Delete Compute Nest instance backups.
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request DeleteBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackupWithOptions(const DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackup"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupResponse>();
}

/**
 * @summary Delete Compute Nest instance backups.
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request DeleteBackupRequest
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackup(const DeleteBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupWithOptions(request, runtime);
}

/**
 * @summary Deletes service instances based on the region ID and service instance IDs.
 *
 * @param request DeleteServiceInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceInstancesResponse
 */
DeleteServiceInstancesResponse Client::deleteServiceInstancesWithOptions(const DeleteServiceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceInstances"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceInstancesResponse>();
}

/**
 * @summary Deletes service instances based on the region ID and service instance IDs.
 *
 * @param request DeleteServiceInstancesRequest
 * @return DeleteServiceInstancesResponse
 */
DeleteServiceInstancesResponse Client::deleteServiceInstances(const DeleteServiceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceInstancesWithOptions(request, runtime);
}

/**
 * @summary Deploys the created service instance.
 *
 * @param request DeployServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployServiceInstanceResponse
 */
DeployServiceInstanceResponse Client::deployServiceInstanceWithOptions(const DeployServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployServiceInstance"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployServiceInstanceResponse>();
}

/**
 * @summary Deploys the created service instance.
 *
 * @param request DeployServiceInstanceRequest
 * @return DeployServiceInstanceResponse
 */
DeployServiceInstanceResponse Client::deployServiceInstance(const DeployServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary List available regions.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary List available regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the missing policies before creating a service instance.
 *
 * @param request GenerateServicePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateServicePolicyResponse
 */
GenerateServicePolicyResponse Client::generateServicePolicyWithOptions(const GenerateServicePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationTypes()) {
    query["OperationTypes"] = request.getOperationTypes();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTrialType()) {
    query["TrialType"] = request.getTrialType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateServicePolicy"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateServicePolicyResponse>();
}

/**
 * @summary Queries the missing policies before creating a service instance.
 *
 * @param request GenerateServicePolicyRequest
 * @return GenerateServicePolicyResponse
 */
GenerateServicePolicyResponse Client::generateServicePolicy(const GenerateServicePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateServicePolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about backup task.
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request GetBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBackupResponse
 */
GetBackupResponse Client::getBackupWithOptions(const GetBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBackup"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBackupResponse>();
}

/**
 * @summary Queries the information about backup task.
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request GetBackupRequest
 * @return GetBackupResponse
 */
GetBackupResponse Client::getBackup(const GetBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBackupWithOptions(request, runtime);
}

/**
 * @summary 根据指定地域获取可用区列表
 *
 * @param request GetNetworkAvailableZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkAvailableZonesResponse
 */
GetNetworkAvailableZonesResponse Client::getNetworkAvailableZonesWithOptions(const GetNetworkAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsPoc()) {
    body["IsPoc"] = request.getIsPoc();
  }

  if (!!request.hasNetworkRegionId()) {
    body["NetworkRegionId"] = request.getNetworkRegionId();
  }

  if (!!request.hasPrivateVpcConnectionMode()) {
    body["PrivateVpcConnectionMode"] = request.getPrivateVpcConnectionMode();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceInstanceEndpointServiceType()) {
    body["ServiceInstanceEndpointServiceType"] = request.getServiceInstanceEndpointServiceType();
  }

  if (!!request.hasServiceRegionId()) {
    body["ServiceRegionId"] = request.getServiceRegionId();
  }

  if (!!request.hasServiceVersion()) {
    body["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNetworkAvailableZones"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetworkAvailableZonesResponse>();
}

/**
 * @summary 根据指定地域获取可用区列表
 *
 * @param request GetNetworkAvailableZonesRequest
 * @return GetNetworkAvailableZonesResponse
 */
GetNetworkAvailableZonesResponse Client::getNetworkAvailableZones(const GetNetworkAvailableZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkAvailableZonesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a service.
 *
 * @param request GetServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceResponse
 */
GetServiceResponse Client::getServiceWithOptions(const GetServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasShowDetails()) {
    query["ShowDetails"] = request.getShowDetails();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetService"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceResponse>();
}

/**
 * @summary Queries the information about a service.
 *
 * @param request GetServiceRequest
 * @return GetServiceResponse
 */
GetServiceResponse Client::getService(const GetServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the estimated price for creating a service instance.
 *
 * @param tmpReq GetServiceEstimateCostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceEstimateCostResponse
 */
GetServiceEstimateCostResponse Client::getServiceEstimateCostWithOptions(const GetServiceEstimateCostRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetServiceEstimateCostShrinkRequest request = GetServiceEstimateCostShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCommodity()) {
    request.setCommodityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCommodity(), "Commodity", "json"));
  }

  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodityShrink()) {
    query["Commodity"] = request.getCommodityShrink();
  }

  if (!!request.hasOperationName()) {
    query["OperationName"] = request.getOperationName();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasSpecificationName()) {
    query["SpecificationName"] = request.getSpecificationName();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTrialType()) {
    query["TrialType"] = request.getTrialType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceEstimateCost"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceEstimateCostResponse>();
}

/**
 * @summary Queries the estimated price for creating a service instance.
 *
 * @param request GetServiceEstimateCostRequest
 * @return GetServiceEstimateCostResponse
 */
GetServiceEstimateCostResponse Client::getServiceEstimateCost(const GetServiceEstimateCostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceEstimateCostWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a service instance based on the region ID and the ID of the service instance or the Alibaba Cloud Marketplace instance. Information including the service status, template name, and involved resources are returned.
 *
 * @param request GetServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceInstanceResponse
 */
GetServiceInstanceResponse Client::getServiceInstanceWithOptions(const GetServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarketInstanceId()) {
    query["MarketInstanceId"] = request.getMarketInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceInstance"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceInstanceResponse>();
}

/**
 * @summary Queries the information about a service instance based on the region ID and the ID of the service instance or the Alibaba Cloud Marketplace instance. Information including the service status, template name, and involved resources are returned.
 *
 * @param request GetServiceInstanceRequest
 * @return GetServiceInstanceResponse
 */
GetServiceInstanceResponse Client::getServiceInstance(const GetServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Inquiries the prices of subscription resources for private service instances. Renewal price inquiry is supported. You can make a unified renewal price inquiry for all subscription resources based on a specific service instance ID or make a renewal price inquiry for a specific resource. You can specify a service instance ID or a resource in a request, but cannot specify both of them.
 *
 * @param request GetServiceInstanceSubscriptionEstimateCostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceInstanceSubscriptionEstimateCostResponse
 */
GetServiceInstanceSubscriptionEstimateCostResponse Client::getServiceInstanceSubscriptionEstimateCostWithOptions(const GetServiceInstanceSubscriptionEstimateCostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourcePeriod()) {
    query["ResourcePeriod"] = request.getResourcePeriod();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceInstanceSubscriptionEstimateCost"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceInstanceSubscriptionEstimateCostResponse>();
}

/**
 * @summary Inquiries the prices of subscription resources for private service instances. Renewal price inquiry is supported. You can make a unified renewal price inquiry for all subscription resources based on a specific service instance ID or make a renewal price inquiry for a specific resource. You can specify a service instance ID or a resource in a request, but cannot specify both of them.
 *
 * @param request GetServiceInstanceSubscriptionEstimateCostRequest
 * @return GetServiceInstanceSubscriptionEstimateCostResponse
 */
GetServiceInstanceSubscriptionEstimateCostResponse Client::getServiceInstanceSubscriptionEstimateCost(const GetServiceInstanceSubscriptionEstimateCostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceInstanceSubscriptionEstimateCostWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the activation status and Resource Access Management (RAM) roles of the cloud services required by a service.
 *
 * @param tmpReq GetServiceProvisionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceProvisionsResponse
 */
GetServiceProvisionsResponse Client::getServiceProvisionsWithOptions(const GetServiceProvisionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetServiceProvisionsShrinkRequest request = GetServiceProvisionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTrialType()) {
    query["TrialType"] = request.getTrialType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceProvisions"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceProvisionsResponse>();
}

/**
 * @summary Queries the information about the activation status and Resource Access Management (RAM) roles of the cloud services required by a service.
 *
 * @param request GetServiceProvisionsRequest
 * @return GetServiceProvisionsResponse
 */
GetServiceProvisionsResponse Client::getServiceProvisions(const GetServiceProvisionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceProvisionsWithOptions(request, runtime);
}

/**
 * @summary Queries the constraints on the parameters in a Resource Orchestration Service (ROS) template in a region based on the template name and service ID.
 *
 * @param request GetServiceTemplateParameterConstraintsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceTemplateParameterConstraintsResponse
 */
GetServiceTemplateParameterConstraintsResponse Client::getServiceTemplateParameterConstraintsWithOptions(const GetServiceTemplateParameterConstraintsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeployRegionId()) {
    query["DeployRegionId"] = request.getDeployRegionId();
  }

  if (!!request.hasEnablePrivateVpcConnection()) {
    query["EnablePrivateVpcConnection"] = request.getEnablePrivateVpcConnection();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasSpecificationName()) {
    query["SpecificationName"] = request.getSpecificationName();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTrialType()) {
    query["TrialType"] = request.getTrialType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceTemplateParameterConstraints"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceTemplateParameterConstraintsResponse>();
}

/**
 * @summary Queries the constraints on the parameters in a Resource Orchestration Service (ROS) template in a region based on the template name and service ID.
 *
 * @param request GetServiceTemplateParameterConstraintsRequest
 * @return GetServiceTemplateParameterConstraintsResponse
 */
GetServiceTemplateParameterConstraintsResponse Client::getServiceTemplateParameterConstraints(const GetServiceTemplateParameterConstraintsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceTemplateParameterConstraintsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a customer.
 *
 * @param request GetUserInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserInformationResponse
 */
GetUserInformationResponse Client::getUserInformationWithOptions(const GetUserInformationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserInformation"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserInformationResponse>();
}

/**
 * @summary Queries the information about a customer.
 *
 * @param request GetUserInformationRequest
 * @return GetUserInformationResponse
 */
GetUserInformationResponse Client::getUserInformation(const GetUserInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserInformationWithOptions(request, runtime);
}

/**
 * @summary Query and list Compute Nest instance backups
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request ListBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBackupsResponse
 */
ListBackupsResponse Client::listBackupsWithOptions(const ListBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
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
    {"action" , "ListBackups"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBackupsResponse>();
}

/**
 * @summary Query and list Compute Nest instance backups
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request ListBackupsRequest
 * @return ListBackupsResponse
 */
ListBackupsResponse Client::listBackups(const ListBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBackupsWithOptions(request, runtime);
}

/**
 * @summary Queires the permissions.
 *
 * @param request ListPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPoliciesWithOptions(const ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicies"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesResponse>();
}

/**
 * @summary Queires the permissions.
 *
 * @param request ListPoliciesRequest
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPolicies(const ListPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesWithOptions(request, runtime);
}

/**
 * @summary Query and list restore tasks
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request ListRestoreTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRestoreTasksResponse
 */
ListRestoreTasksResponse Client::listRestoreTasksWithOptions(const ListRestoreTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
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
    {"action" , "ListRestoreTasks"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRestoreTasksResponse>();
}

/**
 * @summary Query and list restore tasks
 *
 * @description ### [](#)Prerequisites
 * Please ensure that the service provider has enabled the configuration change feature and completed the change parameter settings.
 *
 * @param request ListRestoreTasksRequest
 * @return ListRestoreTasksResponse
 */
ListRestoreTasksResponse Client::listRestoreTasks(const ListRestoreTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRestoreTasksWithOptions(request, runtime);
}

/**
 * @summary Queries service categories.
 *
 * @param request ListServiceCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceCategoriesResponse
 */
ListServiceCategoriesResponse Client::listServiceCategoriesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListServiceCategories"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceCategoriesResponse>();
}

/**
 * @summary Queries service categories.
 *
 * @return ListServiceCategoriesResponse
 */
ListServiceCategoriesResponse Client::listServiceCategories() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceCategoriesWithOptions(runtime);
}

/**
 * @summary Queries instance bills.
 *
 * @param request ListServiceInstanceBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceBillResponse
 */
ListServiceInstanceBillResponse Client::listServiceInstanceBillWithOptions(const ListServiceInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasBillingDate()) {
    query["BillingDate"] = request.getBillingDate();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceInstanceBill"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceInstanceBillResponse>();
}

/**
 * @summary Queries instance bills.
 *
 * @param request ListServiceInstanceBillRequest
 * @return ListServiceInstanceBillResponse
 */
ListServiceInstanceBillResponse Client::listServiceInstanceBill(const ListServiceInstanceBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceBillWithOptions(request, runtime);
}

/**
 * @summary Queries the deployment and upgrade logs of a service instance.
 *
 * @param request ListServiceInstanceLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceLogsResponse
 */
ListServiceInstanceLogsResponse Client::listServiceInstanceLogsWithOptions(const ListServiceInstanceLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasLogSource()) {
    query["LogSource"] = request.getLogSource();
  }

  if (!!request.hasLogstore()) {
    query["Logstore"] = request.getLogstore();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceInstanceLogs"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceInstanceLogsResponse>();
}

/**
 * @summary Queries the deployment and upgrade logs of a service instance.
 *
 * @param request ListServiceInstanceLogsRequest
 * @return ListServiceInstanceLogsResponse
 */
ListServiceInstanceLogsResponse Client::listServiceInstanceLogs(const ListServiceInstanceLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the resources contained in a service instance.
 *
 * @param request ListServiceInstanceResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceResourcesResponse
 */
ListServiceInstanceResourcesResponse Client::listServiceInstanceResourcesWithOptions(const ListServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  if (!!request.hasServiceInstanceResourceType()) {
    query["ServiceInstanceResourceType"] = request.getServiceInstanceResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceInstanceResources"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceInstanceResourcesResponse>();
}

/**
 * @summary Queries the resources contained in a service instance.
 *
 * @param request ListServiceInstanceResourcesRequest
 * @return ListServiceInstanceResourcesResponse
 */
ListServiceInstanceResourcesResponse Client::listServiceInstanceResources(const ListServiceInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the upgrade history of a service instance.
 *
 * @param request ListServiceInstanceUpgradeHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceUpgradeHistoryResponse
 */
ListServiceInstanceUpgradeHistoryResponse Client::listServiceInstanceUpgradeHistoryWithOptions(const ListServiceInstanceUpgradeHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceInstanceUpgradeHistory"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceInstanceUpgradeHistoryResponse>();
}

/**
 * @summary Queries the upgrade history of a service instance.
 *
 * @param request ListServiceInstanceUpgradeHistoryRequest
 * @return ListServiceInstanceUpgradeHistoryResponse
 */
ListServiceInstanceUpgradeHistoryResponse Client::listServiceInstanceUpgradeHistory(const ListServiceInstanceUpgradeHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceUpgradeHistoryWithOptions(request, runtime);
}

/**
 * @summary {}
 *
 * @param request ListServiceInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstancesResponse
 */
ListServiceInstancesResponse Client::listServiceInstancesWithOptions(const ListServiceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceInstances"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceInstancesResponse>();
}

/**
 * @summary {}
 *
 * @param request ListServiceInstancesRequest
 * @return ListServiceInstancesResponse
 */
ListServiceInstancesResponse Client::listServiceInstances(const ListServiceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the applications for using a service.
 *
 * @param request ListServiceUsagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceUsagesResponse
 */
ListServiceUsagesResponse Client::listServiceUsagesWithOptions(const ListServiceUsagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceUsages"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceUsagesResponse>();
}

/**
 * @summary Queries the applications for using a service.
 *
 * @param request ListServiceUsagesRequest
 * @return ListServiceUsagesResponse
 */
ListServiceUsagesResponse Client::listServiceUsages(const ListServiceUsagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceUsagesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of services.
 *
 * @param request ListServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServicesWithOptions(const ListServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasFuzzyKeyword()) {
    query["FuzzyKeyword"] = request.getFuzzyKeyword();
  }

  if (!!request.hasInUsed()) {
    query["InUsed"] = request.getInUsed();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderByType()) {
    query["OrderByType"] = request.getOrderByType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceAccessType()) {
    query["ServiceAccessType"] = request.getServiceAccessType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServices"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServicesResponse>();
}

/**
 * @summary Queries a list of services.
 *
 * @param request ListServicesRequest
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServices(const ListServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServicesWithOptions(request, runtime);
}

/**
 * @summary Queries the existing tag keys.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagKeysResponse>();
}

/**
 * @summary Queries the existing tag keys.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Query tag resource list
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2021-06-01"},
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
 * @summary Query tag resource list
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values of a tag key.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagValues"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagValuesResponse>();
}

/**
 * @summary Queries the tag values of a tag key.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Renews the subscription resources that are included in a private service instance. You can renew all subscription resources included in a private service instance based on the ID of the private service instance. You can also renew specific resources included in a private service instance. You can use only one of the preceding renewal methods.
 *
 * @param request RenewServiceInstanceResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewServiceInstanceResourcesResponse
 */
RenewServiceInstanceResourcesResponse Client::renewServiceInstanceResourcesWithOptions(const RenewServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourcePeriod()) {
    query["ResourcePeriod"] = request.getResourcePeriod();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewServiceInstanceResources"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewServiceInstanceResourcesResponse>();
}

/**
 * @summary Renews the subscription resources that are included in a private service instance. You can renew all subscription resources included in a private service instance based on the ID of the private service instance. You can also renew specific resources included in a private service instance. You can use only one of the preceding renewal methods.
 *
 * @param request RenewServiceInstanceResourcesRequest
 * @return RenewServiceInstanceResourcesResponse
 */
RenewServiceInstanceResourcesResponse Client::renewServiceInstanceResources(const RenewServiceInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewServiceInstanceResourcesWithOptions(request, runtime);
}

/**
 * @summary Restarts a service instance that is in the Deployed state.
 *
 * @param request RestartServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartServiceInstanceResponse
 */
RestartServiceInstanceResponse Client::restartServiceInstanceWithOptions(const RestartServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartServiceInstance"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartServiceInstanceResponse>();
}

/**
 * @summary Restarts a service instance that is in the Deployed state.
 *
 * @param request RestartServiceInstanceRequest
 * @return RestartServiceInstanceResponse
 */
RestartServiceInstanceResponse Client::restartServiceInstance(const RestartServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Rolls back an upgraded service instance to the previous version.
 *
 * @param request RollbackServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackServiceInstanceResponse
 */
RollbackServiceInstanceResponse Client::rollbackServiceInstanceWithOptions(const RollbackServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackServiceInstance"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackServiceInstanceResponse>();
}

/**
 * @summary Rolls back an upgraded service instance to the previous version.
 *
 * @param request RollbackServiceInstanceRequest
 * @return RollbackServiceInstanceResponse
 */
RollbackServiceInstanceResponse Client::rollbackServiceInstance(const RollbackServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts a service instance that is in the Stopped or StartFailed state.
 *
 * @param request StartServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartServiceInstanceResponse
 */
StartServiceInstanceResponse Client::startServiceInstanceWithOptions(const StartServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartServiceInstance"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartServiceInstanceResponse>();
}

/**
 * @summary Starts a service instance that is in the Stopped or StartFailed state.
 *
 * @param request StartServiceInstanceRequest
 * @return StartServiceInstanceResponse
 */
StartServiceInstanceResponse Client::startServiceInstance(const StartServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops a service instance that is in the Deployed or StopFailed state.
 *
 * @param request StopServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopServiceInstanceResponse
 */
StopServiceInstanceResponse Client::stopServiceInstanceWithOptions(const StopServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopServiceInstance"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopServiceInstanceResponse>();
}

/**
 * @summary Stops a service instance that is in the Deployed or StopFailed state.
 *
 * @param request StopServiceInstanceRequest
 * @return StopServiceInstanceResponse
 */
StopServiceInstanceResponse Client::stopServiceInstance(const StopServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates and adds tags to a specified resource list.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2021-06-01"},
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
 * @summary Creates and adds tags to a specified resource list.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UnTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResourcesWithOptions(const UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnTagResources"},
    {"version" , "2021-06-01"},
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
 * @summary Removes tags from resources.
 *
 * @param request UnTagResourcesRequest
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResources(const UnTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates the attributes of a service instance.
 *
 * @param request UpdateServiceInstanceAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceInstanceAttributesResponse
 */
UpdateServiceInstanceAttributesResponse Client::updateServiceInstanceAttributesWithOptions(const UpdateServiceInstanceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableOperation()) {
    query["EnableOperation"] = request.getEnableOperation();
  }

  if (!!request.hasGrantedPermission()) {
    query["GrantedPermission"] = request.getGrantedPermission();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateServiceInstanceAttributes"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceInstanceAttributesResponse>();
}

/**
 * @summary Updates the attributes of a service instance.
 *
 * @param request UpdateServiceInstanceAttributesRequest
 * @return UpdateServiceInstanceAttributesResponse
 */
UpdateServiceInstanceAttributesResponse Client::updateServiceInstanceAttributes(const UpdateServiceInstanceAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceInstanceAttributesWithOptions(request, runtime);
}

/**
 * @summary Changes the configurations of a service instance.
 *
 * @description ### [](#)Prerequisites
 * Configuration change is enabled and the related parameters are configured for the service by the service provider.
 *
 * @param tmpReq UpdateServiceInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceInstanceSpecResponse
 */
UpdateServiceInstanceSpecResponse Client::updateServiceInstanceSpecWithOptions(const UpdateServiceInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateServiceInstanceSpecShrinkRequest request = UpdateServiceInstanceSpecShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodity()) {
    query["Commodity"] = request.getCommodity();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEnableUserPrometheus()) {
    query["EnableUserPrometheus"] = request.getEnableUserPrometheus();
  }

  if (!!request.hasOperationName()) {
    query["OperationName"] = request.getOperationName();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasPredefinedParametersName()) {
    query["PredefinedParametersName"] = request.getPredefinedParametersName();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateServiceInstanceSpec"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceInstanceSpecResponse>();
}

/**
 * @summary Changes the configurations of a service instance.
 *
 * @description ### [](#)Prerequisites
 * Configuration change is enabled and the related parameters are configured for the service by the service provider.
 *
 * @param request UpdateServiceInstanceSpecRequest
 * @return UpdateServiceInstanceSpecResponse
 */
UpdateServiceInstanceSpecResponse Client::updateServiceInstanceSpec(const UpdateServiceInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary Updates the application for using a service.
 *
 * @param tmpReq UpdateServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceUsageResponse
 */
UpdateServiceUsageResponse Client::updateServiceUsageWithOptions(const UpdateServiceUsageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateServiceUsageShrinkRequest request = UpdateServiceUsageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInformation()) {
    request.setUserInformationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInformation(), "UserInformation", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasUserInformationShrink()) {
    query["UserInformation"] = request.getUserInformationShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateServiceUsage"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceUsageResponse>();
}

/**
 * @summary Updates the application for using a service.
 *
 * @param request UpdateServiceUsageRequest
 * @return UpdateServiceUsageResponse
 */
UpdateServiceUsageResponse Client::updateServiceUsage(const UpdateServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a customer.
 *
 * @param request UpdateUserInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserInformationResponse
 */
UpdateUserInformationResponse Client::updateUserInformationWithOptions(const UpdateUserInformationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliverySettings()) {
    query["DeliverySettings"] = request.getDeliverySettings();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserInformation"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserInformationResponse>();
}

/**
 * @summary Updates the information about a customer.
 *
 * @param request UpdateUserInformationRequest
 * @return UpdateUserInformationResponse
 */
UpdateUserInformationResponse Client::updateUserInformation(const UpdateUserInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserInformationWithOptions(request, runtime);
}

/**
 * @summary Upgrades the version of a service instance.
 *
 * @param tmpReq UpgradeServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeServiceInstanceResponse
 */
UpgradeServiceInstanceResponse Client::upgradeServiceInstanceWithOptions(const UpgradeServiceInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpgradeServiceInstanceShrinkRequest request = UpgradeServiceInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeServiceInstance"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeServiceInstanceResponse>();
}

/**
 * @summary Upgrades the version of a service instance.
 *
 * @param request UpgradeServiceInstanceRequest
 * @return UpgradeServiceInstanceResponse
 */
UpgradeServiceInstanceResponse Client::upgradeServiceInstance(const UpgradeServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary 校验服务实例名称
 *
 * @param request ValidateServiceInstanceNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateServiceInstanceNameResponse
 */
ValidateServiceInstanceNameResponse Client::validateServiceInstanceNameWithOptions(const ValidateServiceInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIsTrial()) {
    query["IsTrial"] = request.getIsTrial();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceInstanceName()) {
    query["ServiceInstanceName"] = request.getServiceInstanceName();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateServiceInstanceName"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateServiceInstanceNameResponse>();
}

/**
 * @summary 校验服务实例名称
 *
 * @param request ValidateServiceInstanceNameRequest
 * @return ValidateServiceInstanceNameResponse
 */
ValidateServiceInstanceNameResponse Client::validateServiceInstanceName(const ValidateServiceInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateServiceInstanceNameWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ComputeNest20210601