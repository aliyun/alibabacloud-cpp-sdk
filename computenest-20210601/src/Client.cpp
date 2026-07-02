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
  this->_endpointMap = json({
    {"cn-hangzhou" , "computenest.cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-1" , "computenest.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Cancels a service usage request.
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
 * @summary Cancels a service usage request.
 *
 * @param request CancelServiceUsageRequest
 * @return CancelServiceUsageResponse
 */
CancelServiceUsageResponse Client::cancelServiceUsage(const CancelServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group for a cloud resource.
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
 * @summary Changes the resource group for a cloud resource.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Performs a precheck to verify that a service instance can be deployed.
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
 * @summary Performs a precheck to verify that a service instance can be deployed.
 *
 * @param request CheckServiceDeployableRequest
 * @return CheckServiceDeployableResponse
 */
CheckServiceDeployableResponse Client::checkServiceDeployable(const CheckServiceDeployableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceDeployableWithOptions(request, runtime);
}

/**
 * @summary If a service instance fails to deploy, you can call the ContinueDeployServiceInstance operation to resume the deployment.
 *
 * @description If a private service instance that uses the ROS deployment type fails to deploy, you can call the ContinueDeployServiceInstance operation to resume the deployment.
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
 * @summary If a service instance fails to deploy, you can call the ContinueDeployServiceInstance operation to resume the deployment.
 *
 * @description If a private service instance that uses the ROS deployment type fails to deploy, you can call the ContinueDeployServiceInstance operation to resume the deployment.
 *
 * @param request ContinueDeployServiceInstanceRequest
 * @return ContinueDeployServiceInstanceResponse
 */
ContinueDeployServiceInstanceResponse Client::continueDeployServiceInstance(const ContinueDeployServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continueDeployServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a backup for a Compute Nest service instance.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade/downgrade feature and configured the corresponding parameters when the service was created.
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
 * @summary Creates a backup for a Compute Nest service instance.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade/downgrade feature and configured the corresponding parameters when the service was created.
 *
 * @param request CreateBackupRequest
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackup(const CreateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupWithOptions(request, runtime);
}

/**
 * @summary Creates a restore job.
 *
 * @description ### Prerequisites
 * Before you call this operation, ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when the service was created.
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
 * @summary Creates a restore job.
 *
 * @description ### Prerequisites
 * Before you call this operation, ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when the service was created.
 *
 * @param request CreateRestoreTaskRequest
 * @return CreateRestoreTaskResponse
 */
CreateRestoreTaskResponse Client::createRestoreTask(const CreateRestoreTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRestoreTaskWithOptions(request, runtime);
}

/**
 * @summary Creates and deploys a service instance in Compute Nest by specifying parameters such as a region ID, a service instance name, and a service ID.
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
 * @summary Creates and deploys a service instance in Compute Nest by specifying parameters such as a region ID, a service instance name, and a service ID.
 *
 * @param request CreateServiceInstanceRequest
 * @return CreateServiceInstanceResponse
 */
CreateServiceInstanceResponse Client::createServiceInstance(const CreateServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a service usage request.
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
 * @summary Creates a service usage request.
 *
 * @param request CreateServiceUsageRequest
 * @return CreateServiceUsageResponse
 */
CreateServiceUsageResponse Client::createServiceUsage(const CreateServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Creates a Skill.
 *
 * @description ### Before you begin
 * Make sure that the service provider has enabled the Upgrade/Downgrade feature and completed the specification change parameter settings when creating the service.
 *
 * @param request CreateSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillResponse
 */
CreateSkillResponse Client::createSkillWithOptions(const CreateSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOssUrl()) {
    query["OssUrl"] = request.getOssUrl();
  }

  if (!!request.hasSkillDescription()) {
    query["SkillDescription"] = request.getSkillDescription();
  }

  if (!!request.hasSkillDisplayName()) {
    query["SkillDisplayName"] = request.getSkillDisplayName();
  }

  if (!!request.hasSkillLabels()) {
    query["SkillLabels"] = request.getSkillLabels();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  if (!!request.hasSkillSpaceId()) {
    query["SkillSpaceId"] = request.getSkillSpaceId();
  }

  if (!!request.hasSourceSkillId()) {
    query["SourceSkillId"] = request.getSourceSkillId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSkill"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillResponse>();
}

/**
 * @summary Creates a Skill.
 *
 * @description ### Before you begin
 * Make sure that the service provider has enabled the Upgrade/Downgrade feature and completed the specification change parameter settings when creating the service.
 *
 * @param request CreateSkillRequest
 * @return CreateSkillResponse
 */
CreateSkillResponse Client::createSkill(const CreateSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillWithOptions(request, runtime);
}

/**
 * @summary Creates a Skill file detection task.
 *
 * @description ### Prerequisites
 * Ensure that the service provider has enabled the modification feature and configured its parameters during service creation.
 *
 * @param request CreateSkillFileDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillFileDetectResponse
 */
CreateSkillFileDetectResponse Client::createSkillFileDetectWithOptions(const CreateSkillFileDetectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOssUrl()) {
    query["OssUrl"] = request.getOssUrl();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSkillFileDetect"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillFileDetectResponse>();
}

/**
 * @summary Creates a Skill file detection task.
 *
 * @description ### Prerequisites
 * Ensure that the service provider has enabled the modification feature and configured its parameters during service creation.
 *
 * @param request CreateSkillFileDetectRequest
 * @return CreateSkillFileDetectResponse
 */
CreateSkillFileDetectResponse Client::createSkillFileDetect(const CreateSkillFileDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillFileDetectWithOptions(request, runtime);
}

/**
 * @summary Creates a SkillHub config.
 *
 * @description ### Prerequisites
 * Ensure that the service provider has enabled the modify configuration feature and set the required parameters.
 *
 * @param request CreateSkillHubConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillHubConfigResponse
 */
CreateSkillHubConfigResponse Client::createSkillHubConfigWithOptions(const CreateSkillHubConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssRegionId()) {
    query["OssRegionId"] = request.getOssRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSkillHubConfig"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillHubConfigResponse>();
}

/**
 * @summary Creates a SkillHub config.
 *
 * @description ### Prerequisites
 * Ensure that the service provider has enabled the modify configuration feature and set the required parameters.
 *
 * @param request CreateSkillHubConfigRequest
 * @return CreateSkillHubConfigResponse
 */
CreateSkillHubConfigResponse Client::createSkillHubConfig(const CreateSkillHubConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillHubConfigWithOptions(request, runtime);
}

/**
 * @summary Creates a skill space.
 *
 * @description ### Prerequisites
 * Ensure the service provider has enabled the modify configuration feature and set the required parameters during service creation.
 *
 * @param request CreateSkillSpaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillSpaceResponse
 */
CreateSkillSpaceResponse Client::createSkillSpaceWithOptions(const CreateSkillSpaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSkillSpaceDescription()) {
    query["SkillSpaceDescription"] = request.getSkillSpaceDescription();
  }

  if (!!request.hasSkillSpaceName()) {
    query["SkillSpaceName"] = request.getSkillSpaceName();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSkillSpace"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillSpaceResponse>();
}

/**
 * @summary Creates a skill space.
 *
 * @description ### Prerequisites
 * Ensure the service provider has enabled the modify configuration feature and set the required parameters during service creation.
 *
 * @param request CreateSkillSpaceRequest
 * @return CreateSkillSpaceResponse
 */
CreateSkillSpaceResponse Client::createSkillSpace(const CreateSkillSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillSpaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a Compute Nest instance backup.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade/downgrade feature and configured the upgrade/downgrade parameters when the service was created.
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
 * @summary Deletes a Compute Nest instance backup.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade/downgrade feature and configured the upgrade/downgrade parameters when the service was created.
 *
 * @param request DeleteBackupRequest
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackup(const DeleteBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified service instances in a region.
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
 * @summary Deletes the specified service instances in a region.
 *
 * @param request DeleteServiceInstancesRequest
 * @return DeleteServiceInstancesResponse
 */
DeleteServiceInstancesResponse Client::deleteServiceInstances(const DeleteServiceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceInstancesWithOptions(request, runtime);
}

/**
 * @summary Deletes a skill.
 *
 * @description ### Prerequisites
 * Ensure the service provider has enabled the modification feature and configured the modification parameters when creating the service.
 *
 * @param request DeleteSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkillWithOptions(const DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSkillId()) {
    query["SkillId"] = request.getSkillId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSkill"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillResponse>();
}

/**
 * @summary Deletes a skill.
 *
 * @description ### Prerequisites
 * Ensure the service provider has enabled the modification feature and configured the modification parameters when creating the service.
 *
 * @param request DeleteSkillRequest
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkill(const DeleteSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillWithOptions(request, runtime);
}

/**
 * @summary Deletes a SkillSpace.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the modify configuration feature and set the required parameters during service creation.
 *
 * @param request DeleteSkillSpaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillSpaceResponse
 */
DeleteSkillSpaceResponse Client::deleteSkillSpaceWithOptions(const DeleteSkillSpaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSkillSpaceId()) {
    query["SkillSpaceId"] = request.getSkillSpaceId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSkillSpace"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillSpaceResponse>();
}

/**
 * @summary Deletes a SkillSpace.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the modify configuration feature and set the required parameters during service creation.
 *
 * @param request DeleteSkillSpaceRequest
 * @return DeleteSkillSpaceResponse
 */
DeleteSkillSpaceResponse Client::deleteSkillSpace(const DeleteSkillSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillSpaceWithOptions(request, runtime);
}

/**
 * @summary Deploys a service instance.
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
 * @summary Deploys a service instance.
 *
 * @param request DeployServiceInstanceRequest
 * @return DeployServiceInstanceResponse
 */
DeployServiceInstanceResponse Client::deployServiceInstance(const DeployServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the available regions.
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
 * @summary Queries the available regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the missing access policies before creating a service instance.
 *
 * @param tmpReq GenerateServicePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateServicePolicyResponse
 */
GenerateServicePolicyResponse Client::generateServicePolicyWithOptions(const GenerateServicePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateServicePolicyShrinkRequest request = GenerateServicePolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasOperationTypes()) {
    query["OperationTypes"] = request.getOperationTypes();
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
 * @summary Queries the missing access policies before creating a service instance.
 *
 * @param request GenerateServicePolicyRequest
 * @return GenerateServicePolicyResponse
 */
GenerateServicePolicyResponse Client::generateServicePolicy(const GenerateServicePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateServicePolicyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a backup.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when the service was created.
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
 * @summary Retrieves the details of a backup.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when the service was created.
 *
 * @param request GetBackupRequest
 * @return GetBackupResponse
 */
GetBackupResponse Client::getBackup(const GetBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBackupWithOptions(request, runtime);
}

/**
 * @summary Returns a list of available zones for a specified region.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade/downgrade feature and set the related parameters when the service was created.
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
 * @summary Returns a list of available zones for a specified region.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade/downgrade feature and set the related parameters when the service was created.
 *
 * @param request GetNetworkAvailableZonesRequest
 * @return GetNetworkAvailableZonesResponse
 */
GetNetworkAvailableZonesResponse Client::getNetworkAvailableZones(const GetNetworkAvailableZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkAvailableZonesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified service.
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
 * @summary Retrieves the details of a specified service.
 *
 * @param request GetServiceRequest
 * @return GetServiceResponse
 */
GetServiceResponse Client::getService(const GetServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the estimated cost of creating a service instance.
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
 * @summary Queries the estimated cost of creating a service instance.
 *
 * @param request GetServiceEstimateCostRequest
 * @return GetServiceEstimateCostResponse
 */
GetServiceEstimateCostResponse Client::getServiceEstimateCost(const GetServiceEstimateCostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceEstimateCostWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a service instance by its region ID, service instance ID, or Alibaba Cloud Marketplace instance ID. The returned information includes the service status, template name, and a list of resources.
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
 * @summary Queries the details of a service instance by its region ID, service instance ID, or Alibaba Cloud Marketplace instance ID. The returned information includes the service status, template name, and a list of resources.
 *
 * @param request GetServiceInstanceRequest
 * @return GetServiceInstanceResponse
 */
GetServiceInstanceResponse Client::getServiceInstance(const GetServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the estimated renewal cost of subscription resources in a privately deployed service instance. You can query the cost for all resources associated with a service instance ID, or for a specific set of resources.
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
 * @summary Queries the estimated renewal cost of subscription resources in a privately deployed service instance. You can query the cost for all resources associated with a service instance ID, or for a specific set of resources.
 *
 * @param request GetServiceInstanceSubscriptionEstimateCostRequest
 * @return GetServiceInstanceSubscriptionEstimateCostResponse
 */
GetServiceInstanceSubscriptionEstimateCostResponse Client::getServiceInstanceSubscriptionEstimateCost(const GetServiceInstanceSubscriptionEstimateCostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceInstanceSubscriptionEstimateCostWithOptions(request, runtime);
}

/**
 * @summary Retrieves the provisions of a service, such as its activation status and service roles.
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
 * @summary Retrieves the provisions of a service, such as its activation status and service roles.
 *
 * @param request GetServiceProvisionsRequest
 * @return GetServiceProvisionsResponse
 */
GetServiceProvisionsResponse Client::getServiceProvisions(const GetServiceProvisionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceProvisionsWithOptions(request, runtime);
}

/**
 * @summary Queries the parameter constraints for a Resource Orchestration Service (ROS) template in a specified region using the template name and service ID.
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
 * @summary Queries the parameter constraints for a Resource Orchestration Service (ROS) template in a specified region using the template name and service ID.
 *
 * @param request GetServiceTemplateParameterConstraintsRequest
 * @return GetServiceTemplateParameterConstraintsResponse
 */
GetServiceTemplateParameterConstraintsResponse Client::getServiceTemplateParameterConstraints(const GetServiceTemplateParameterConstraintsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceTemplateParameterConstraintsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Skill.
 *
 * @description ### Before you begin
 * Make sure that the service provider has enabled the specification change feature and completed the specification change parameter settings when creating the service.
 *
 * @param request GetSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillResponse
 */
GetSkillResponse Client::getSkillWithOptions(const GetSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSkillId()) {
    query["SkillId"] = request.getSkillId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkill"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillResponse>();
}

/**
 * @summary Queries the details of a Skill.
 *
 * @description ### Before you begin
 * Make sure that the service provider has enabled the specification change feature and completed the specification change parameter settings when creating the service.
 *
 * @param request GetSkillRequest
 * @return GetSkillResponse
 */
GetSkillResponse Client::getSkill(const GetSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillWithOptions(request, runtime);
}

/**
 * @summary Retrieves the result of a Skill file detection task.
 *
 * @description ### Prerequisites
 * This operation is available only if the service provider enabled the modification feature and configured the relevant parameters during service creation.
 *
 * @param request GetSkillFileDetectResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillFileDetectResultResponse
 */
GetSkillFileDetectResultResponse Client::getSkillFileDetectResultWithOptions(const GetSkillFileDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHashKey()) {
    query["HashKey"] = request.getHashKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillFileDetectResult"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillFileDetectResultResponse>();
}

/**
 * @summary Retrieves the result of a Skill file detection task.
 *
 * @description ### Prerequisites
 * This operation is available only if the service provider enabled the modification feature and configured the relevant parameters during service creation.
 *
 * @param request GetSkillFileDetectResultRequest
 * @return GetSkillFileDetectResultResponse
 */
GetSkillFileDetectResultResponse Client::getSkillFileDetectResult(const GetSkillFileDetectResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillFileDetectResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the SkillHub configuration.
 *
 * @description ### Prerequisites
 * Ensure the service provider enabled the modification feature and configured its parameters when creating the service.
 *
 * @param request GetSkillHubConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillHubConfigResponse
 */
GetSkillHubConfigResponse Client::getSkillHubConfigWithOptions(const GetSkillHubConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetSkillHubConfig"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillHubConfigResponse>();
}

/**
 * @summary Retrieves the SkillHub configuration.
 *
 * @description ### Prerequisites
 * Ensure the service provider enabled the modification feature and configured its parameters when creating the service.
 *
 * @param request GetSkillHubConfigRequest
 * @return GetSkillHubConfigResponse
 */
GetSkillHubConfigResponse Client::getSkillHubConfig(const GetSkillHubConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillHubConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a SkillSpace.
 *
 * @description ### Prerequisites
 * Ensure that the service provider has enabled the modification feature and configured the modification parameters for the service.
 *
 * @param request GetSkillSpaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillSpaceResponse
 */
GetSkillSpaceResponse Client::getSkillSpaceWithOptions(const GetSkillSpaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSkillSpaceId()) {
    query["SkillSpaceId"] = request.getSkillSpaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillSpace"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillSpaceResponse>();
}

/**
 * @summary Retrieves the details of a SkillSpace.
 *
 * @description ### Prerequisites
 * Ensure that the service provider has enabled the modification feature and configured the modification parameters for the service.
 *
 * @param request GetSkillSpaceRequest
 * @return GetSkillSpaceResponse
 */
GetSkillSpaceResponse Client::getSkillSpace(const GetSkillSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillSpaceWithOptions(request, runtime);
}

/**
 * @summary Queries user information.
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
 * @summary Queries user information.
 *
 * @param request GetUserInformationRequest
 * @return GetUserInformationResponse
 */
GetUserInformationResponse Client::getUserInformation(const GetUserInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserInformationWithOptions(request, runtime);
}

/**
 * @summary Queries a list of backups for Compute Nest service instances.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade and downgrade feature and configured the related parameters when the service was created.
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
 * @summary Queries a list of backups for Compute Nest service instances.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade and downgrade feature and configured the related parameters when the service was created.
 *
 * @param request ListBackupsRequest
 * @return ListBackupsResponse
 */
ListBackupsResponse Client::listBackups(const ListBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBackupsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of access policies.
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
 * @summary Retrieves a list of access policies.
 *
 * @param request ListPoliciesRequest
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPolicies(const ListPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of public skills.
 *
 * @description ### Before you begin
 * Make sure the service provider has enabled the specification change feature and completed the specification change parameter settings when creating the service.
 *
 * @param request ListPublicSkillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPublicSkillsResponse
 */
ListPublicSkillsResponse Client::listPublicSkillsWithOptions(const ListPublicSkillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNeedDownloadUrl()) {
    query["NeedDownloadUrl"] = request.getNeedDownloadUrl();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPublicSkills"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<ListPublicSkillsResponse>();
}

/**
 * @summary Queries the list of public skills.
 *
 * @description ### Before you begin
 * Make sure the service provider has enabled the specification change feature and completed the specification change parameter settings when creating the service.
 *
 * @param request ListPublicSkillsRequest
 * @return ListPublicSkillsResponse
 */
ListPublicSkillsResponse Client::listPublicSkills(const ListPublicSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPublicSkillsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of restore jobs.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when creating the service.
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
 * @summary Queries a list of restore jobs.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the upgrade and downgrade feature and configured its parameters when creating the service.
 *
 * @param request ListRestoreTasksRequest
 * @return ListRestoreTasksResponse
 */
ListRestoreTasksResponse Client::listRestoreTasks(const ListRestoreTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRestoreTasksWithOptions(request, runtime);
}

/**
 * @summary Lists the available service categories.
 *
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
 * @summary Lists the available service categories.
 *
 * @return ListServiceCategoriesResponse
 */
ListServiceCategoriesResponse Client::listServiceCategories() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceCategoriesWithOptions(runtime);
}

/**
 * @summary Call the ListServiceInstanceBill operation to query bills for service instances.
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
 * @summary Call the ListServiceInstanceBill operation to query bills for service instances.
 *
 * @param request ListServiceInstanceBillRequest
 * @return ListServiceInstanceBillResponse
 */
ListServiceInstanceBillResponse Client::listServiceInstanceBill(const ListServiceInstanceBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceBillWithOptions(request, runtime);
}

/**
 * @summary Retrieves the deployment and upgrade logs of a service instance.
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
 * @summary Retrieves the deployment and upgrade logs of a service instance.
 *
 * @param request ListServiceInstanceLogsRequest
 * @return ListServiceInstanceLogsResponse
 */
ListServiceInstanceLogsResponse Client::listServiceInstanceLogs(const ListServiceInstanceLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the resources of a service instance based on parameters such as the service instance ID, Alibaba Cloud Resource Name (ARN), and region ID.
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
 * @summary Queries the resources of a service instance based on parameters such as the service instance ID, Alibaba Cloud Resource Name (ARN), and region ID.
 *
 * @param request ListServiceInstanceResourcesRequest
 * @return ListServiceInstanceResourcesResponse
 */
ListServiceInstanceResourcesResponse Client::listServiceInstanceResources(const ListServiceInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceResourcesWithOptions(request, runtime);
}

/**
 * @summary You can call ListServiceInstanceUpgradeHistory to query the upgrade history of a service instance.
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
 * @summary You can call ListServiceInstanceUpgradeHistory to query the upgrade history of a service instance.
 *
 * @param request ListServiceInstanceUpgradeHistoryRequest
 * @return ListServiceInstanceUpgradeHistoryResponse
 */
ListServiceInstanceUpgradeHistoryResponse Client::listServiceInstanceUpgradeHistory(const ListServiceInstanceUpgradeHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceUpgradeHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries service instances for your account in a specified region.
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
 * @summary Queries service instances for your account in a specified region.
 *
 * @param request ListServiceInstancesRequest
 * @return ListServiceInstancesResponse
 */
ListServiceInstancesResponse Client::listServiceInstances(const ListServiceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries your service usages.
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
 * @summary Queries your service usages.
 *
 * @param request ListServiceUsagesRequest
 * @return ListServiceUsagesResponse
 */
ListServiceUsagesResponse Client::listServiceUsages(const ListServiceUsagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceUsagesWithOptions(request, runtime);
}

/**
 * @summary Queries information about your services.
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
 * @summary Queries information about your services.
 *
 * @param request ListServicesRequest
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServices(const ListServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServicesWithOptions(request, runtime);
}

/**
 * @summary Lists the files of a specified Skill.
 *
 * @description ### Prerequisites
 * Before you call this operation, ensure that the service provider has enabled the modification feature and configured the modification parameters when creating the service.
 *
 * @param request ListSkillFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillFilesResponse
 */
ListSkillFilesResponse Client::listSkillFilesWithOptions(const ListSkillFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSkillId()) {
    query["SkillId"] = request.getSkillId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkillFiles"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillFilesResponse>();
}

/**
 * @summary Lists the files of a specified Skill.
 *
 * @description ### Prerequisites
 * Before you call this operation, ensure that the service provider has enabled the modification feature and configured the modification parameters when creating the service.
 *
 * @param request ListSkillFilesRequest
 * @return ListSkillFilesResponse
 */
ListSkillFilesResponse Client::listSkillFiles(const ListSkillFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillFilesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of SkillSpaces.
 *
 * @description ### Prerequisites
 * Ensure the service provider enabled the upgrade feature and configured its parameters when creating the service.
 *
 * @param request ListSkillSpacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillSpacesResponse
 */
ListSkillSpacesResponse Client::listSkillSpacesWithOptions(const ListSkillSpacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListSkillSpaces"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillSpacesResponse>();
}

/**
 * @summary Queries a list of SkillSpaces.
 *
 * @description ### Prerequisites
 * Ensure the service provider enabled the upgrade feature and configured its parameters when creating the service.
 *
 * @param request ListSkillSpacesRequest
 * @return ListSkillSpacesResponse
 */
ListSkillSpacesResponse Client::listSkillSpaces(const ListSkillSpacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillSpacesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of skills.
 *
 * @description ### Before you begin
 * Make sure that the service provider has enabled the specification change feature and completed the specification change parameter settings when creating the service.
 *
 * @param request ListSkillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkillsWithOptions(const ListSkillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNeedDownloadUrl()) {
    query["NeedDownloadUrl"] = request.getNeedDownloadUrl();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkills"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillsResponse>();
}

/**
 * @summary Queries a list of skills.
 *
 * @description ### Before you begin
 * Make sure that the service provider has enabled the specification change feature and completed the specification change parameter settings when creating the service.
 *
 * @param request ListSkillsRequest
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkills(const ListSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillsWithOptions(request, runtime);
}

/**
 * @summary This operation lists existing tag keys.
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
 * @summary This operation lists existing tag keys.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tagged resources.
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
 * @summary Queries a list of tagged resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Lists the tag values for a specified tag key.
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
 * @summary Lists the tag values for a specified tag key.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Renews a service instance.
 *
 * @param request RenewServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewServiceInstanceResponse
 */
RenewServiceInstanceResponse Client::renewServiceInstanceWithOptions(const RenewServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewServiceInstance"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewServiceInstanceResponse>();
}

/**
 * @summary Renews a service instance.
 *
 * @param request RenewServiceInstanceRequest
 * @return RenewServiceInstanceResponse
 */
RenewServiceInstanceResponse Client::renewServiceInstance(const RenewServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Renews the subscription resources for a private deployment service instance. This operation supports two renewal methods: renewing all subscription resources for a service instance or renewing only specific resources. You can use only one method per request.
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
 * @summary Renews the subscription resources for a private deployment service instance. This operation supports two renewal methods: renewing all subscription resources for a service instance or renewing only specific resources. You can use only one method per request.
 *
 * @param request RenewServiceInstanceResourcesRequest
 * @return RenewServiceInstanceResourcesResponse
 */
RenewServiceInstanceResourcesResponse Client::renewServiceInstanceResources(const RenewServiceInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewServiceInstanceResourcesWithOptions(request, runtime);
}

/**
 * @summary Restarts a service instance in the Deployed state.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the restart O\\&M operation when the service was created.
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
 * @summary Restarts a service instance in the Deployed state.
 *
 * @description ### Prerequisites
 * Ensure that the service provider enabled the restart O\\&M operation when the service was created.
 *
 * @param request RestartServiceInstanceRequest
 * @return RestartServiceInstanceResponse
 */
RestartServiceInstanceResponse Client::restartServiceInstance(const RestartServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Rolls back an upgraded service instance.
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
 * @summary Rolls back an upgraded service instance.
 *
 * @param request RollbackServiceInstanceRequest
 * @return RollbackServiceInstanceResponse
 */
RollbackServiceInstanceResponse Client::rollbackServiceInstance(const RollbackServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Call the StartServiceInstance operation to start a service instance that is in the Stopped or StartFailed state.
 *
 * @description ### Prerequisites
 * Ensure that the service provider configured the start and stop O\\&M actions when creating the service.
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
 * @summary Call the StartServiceInstance operation to start a service instance that is in the Stopped or StartFailed state.
 *
 * @description ### Prerequisites
 * Ensure that the service provider configured the start and stop O\\&M actions when creating the service.
 *
 * @param request StartServiceInstanceRequest
 * @return StartServiceInstanceResponse
 */
StartServiceInstanceResponse Client::startServiceInstance(const StartServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Call the StopServiceInstance operation to shut down a service instance that is in the Deployed or StopFailed state.
 *
 * @description ### Prerequisites
 * Ensure that the service provider configured the Operations and Maintenance (O\\&M) operations for startup and shutdown when the service was created.
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
 * @summary Call the StopServiceInstance operation to shut down a service instance that is in the Deployed or StopFailed state.
 *
 * @description ### Prerequisites
 * Ensure that the service provider configured the Operations and Maintenance (O\\&M) operations for startup and shutdown when the service was created.
 *
 * @param request StopServiceInstanceRequest
 * @return StopServiceInstanceResponse
 */
StopServiceInstanceResponse Client::stopServiceInstance(const StopServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary You can call TagResources to create and attach tags to multiple resources.
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
 * @summary You can call TagResources to create and attach tags to multiple resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Detaches tags from specified resources.
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
 * @summary Detaches tags from specified resources.
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
 * @summary You can call the UpdateServiceInstanceSpec operation to upgrade or downgrade a service instance if its parameters or package settings do not meet your requirements.
 *
 * @description ### Prerequisites
 * Ensure that the service provider has enabled the upgrade/downgrade feature and configured the related parameters when the service was created.
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
 * @summary You can call the UpdateServiceInstanceSpec operation to upgrade or downgrade a service instance if its parameters or package settings do not meet your requirements.
 *
 * @description ### Prerequisites
 * Ensure that the service provider has enabled the upgrade/downgrade feature and configured the related parameters when the service was created.
 *
 * @param request UpdateServiceInstanceSpecRequest
 * @return UpdateServiceInstanceSpecResponse
 */
UpdateServiceInstanceSpecResponse Client::updateServiceInstanceSpec(const UpdateServiceInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a service usage request.
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
 * @summary Updates the information about a service usage request.
 *
 * @param request UpdateServiceUsageRequest
 * @return UpdateServiceUsageResponse
 */
UpdateServiceUsageResponse Client::updateServiceUsage(const UpdateServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Updates a skill.
 *
 * @description ### Before you begin
 * Make sure that the service provider has enabled the specification change feature and configured the specification change parameters when creating the service.
 *
 * @param request UpdateSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillResponse
 */
UpdateSkillResponse Client::updateSkillWithOptions(const UpdateSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOssUrl()) {
    query["OssUrl"] = request.getOssUrl();
  }

  if (!!request.hasSkillDescription()) {
    query["SkillDescription"] = request.getSkillDescription();
  }

  if (!!request.hasSkillDisplayName()) {
    query["SkillDisplayName"] = request.getSkillDisplayName();
  }

  if (!!request.hasSkillId()) {
    query["SkillId"] = request.getSkillId();
  }

  if (!!request.hasSkillLabels()) {
    query["SkillLabels"] = request.getSkillLabels();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  if (!!request.hasSourceSkillId()) {
    query["SourceSkillId"] = request.getSourceSkillId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSkill"},
    {"version" , "2021-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillResponse>();
}

/**
 * @summary Updates a skill.
 *
 * @description ### Before you begin
 * Make sure that the service provider has enabled the specification change feature and configured the specification change parameters when creating the service.
 *
 * @param request UpdateSkillRequest
 * @return UpdateSkillResponse
 */
UpdateSkillResponse Client::updateSkill(const UpdateSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillWithOptions(request, runtime);
}

/**
 * @summary The UpdateUserInformation operation updates user information.
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
 * @summary The UpdateUserInformation operation updates user information.
 *
 * @param request UpdateUserInformationRequest
 * @return UpdateUserInformationResponse
 */
UpdateUserInformationResponse Client::updateUserInformation(const UpdateUserInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserInformationWithOptions(request, runtime);
}

/**
 * @summary Upgrades a service instance to a new version.
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
 * @summary Upgrades a service instance to a new version.
 *
 * @param request UpgradeServiceInstanceRequest
 * @return UpgradeServiceInstanceResponse
 */
UpgradeServiceInstanceResponse Client::upgradeServiceInstance(const UpgradeServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Validates the name of a service instance.
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
 * @summary Validates the name of a service instance.
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