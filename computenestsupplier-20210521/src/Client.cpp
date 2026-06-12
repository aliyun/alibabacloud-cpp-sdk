#include <darabonba/Core.hpp>
#include <alibabacloud/ComputeNestSupplier20210521.hpp>
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
using namespace AlibabaCloud::ComputeNestSupplier20210521::Models;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{

AlibabaCloud::ComputeNestSupplier20210521::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("computenestsupplier", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds shared accounts for a service.
 *
 * @param request AddServiceSharedAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddServiceSharedAccountsResponse
 */
AddServiceSharedAccountsResponse Client::addServiceSharedAccountsWithOptions(const AddServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  if (!!request.hasSharedAccounts()) {
    query["SharedAccounts"] = request.getSharedAccounts();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddServiceSharedAccounts"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddServiceSharedAccountsResponse>();
}

/**
 * @summary Adds shared accounts for a service.
 *
 * @param request AddServiceSharedAccountsRequest
 * @return AddServiceSharedAccountsResponse
 */
AddServiceSharedAccountsResponse Client::addServiceSharedAccounts(const AddServiceSharedAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addServiceSharedAccountsWithOptions(request, runtime);
}

/**
 * @summary Approves a service usage request.
 *
 * @param request ApproveServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveServiceUsageResponse
 */
ApproveServiceUsageResponse Client::approveServiceUsageWithOptions(const ApproveServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasComments()) {
    query["Comments"] = request.getComments();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserAliUid()) {
    query["UserAliUid"] = request.getUserAliUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApproveServiceUsage"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApproveServiceUsageResponse>();
}

/**
 * @summary Approves a service usage request.
 *
 * @param request ApproveServiceUsageRequest
 * @return ApproveServiceUsageResponse
 */
ApproveServiceUsageResponse Client::approveServiceUsage(const ApproveServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Cancels a service review request.
 *
 * @description Service review requests can be canceled only if they are in the Submitted state.
 *
 * @param request CancelServiceRegistrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelServiceRegistrationResponse
 */
CancelServiceRegistrationResponse Client::cancelServiceRegistrationWithOptions(const CancelServiceRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegistrationId()) {
    query["RegistrationId"] = request.getRegistrationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelServiceRegistration"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelServiceRegistrationResponse>();
}

/**
 * @summary Cancels a service review request.
 *
 * @description Service review requests can be canceled only if they are in the Submitted state.
 *
 * @param request CancelServiceRegistrationRequest
 * @return CancelServiceRegistrationResponse
 */
CancelServiceRegistrationResponse Client::cancelServiceRegistration(const CancelServiceRegistrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelServiceRegistrationWithOptions(request, runtime);
}

/**
 * @summary Continues the deployment of a service instance after a deployment failure. You must specify the region ID, service ID, and the configuration parameters for the service instance.
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
    {"version" , "2021-05-21"},
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
 * @summary Continues the deployment of a service instance after a deployment failure. You must specify the region ID, service ID, and the configuration parameters for the service instance.
 *
 * @param request ContinueDeployServiceInstanceRequest
 * @return ContinueDeployServiceInstanceResponse
 */
ContinueDeployServiceInstanceResponse Client::continueDeployServiceInstance(const ContinueDeployServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continueDeployServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates an artifact.
 *
 * @param tmpReq CreateArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateArtifactResponse
 */
CreateArtifactResponse Client::createArtifactWithOptions(const CreateArtifactRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateArtifactShrinkRequest request = CreateArtifactShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArtifactBuildProperty()) {
    request.setArtifactBuildPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArtifactBuildProperty(), "ArtifactBuildProperty", "json"));
  }

  if (!!tmpReq.hasArtifactProperty()) {
    request.setArtifactPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArtifactProperty(), "ArtifactProperty", "json"));
  }

  json query = {};
  if (!!request.hasArtifactBuildPropertyShrink()) {
    query["ArtifactBuildProperty"] = request.getArtifactBuildPropertyShrink();
  }

  if (!!request.hasArtifactBuildType()) {
    query["ArtifactBuildType"] = request.getArtifactBuildType();
  }

  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.getArtifactId();
  }

  if (!!request.hasArtifactPropertyShrink()) {
    query["ArtifactProperty"] = request.getArtifactPropertyShrink();
  }

  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.getArtifactType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSupportRegionIds()) {
    query["SupportRegionIds"] = request.getSupportRegionIds();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.getVersionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateArtifact"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateArtifactResponse>();
}

/**
 * @summary Creates an artifact.
 *
 * @param request CreateArtifactRequest
 * @return CreateArtifactResponse
 */
CreateArtifactResponse Client::createArtifact(const CreateArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createArtifactWithOptions(request, runtime);
}

/**
 * @summary Creates an operations and maintenance (O&M) notice.
 *
 * @param tmpReq CreateOpsNoticeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOpsNoticeResponse
 */
CreateOpsNoticeResponse Client::createOpsNoticeWithOptions(const CreateOpsNoticeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOpsNoticeShrinkRequest request = CreateOpsNoticeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributes()) {
    request.setAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttributes(), "Attributes", "json"));
  }

  json query = {};
  if (!!request.hasAttributesShrink()) {
    query["Attributes"] = request.getAttributesShrink();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
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

  if (!!request.hasSeverity()) {
    query["Severity"] = request.getSeverity();
  }

  if (!!request.hasSolutions()) {
    query["Solutions"] = request.getSolutions();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOpsNotice"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOpsNoticeResponse>();
}

/**
 * @summary Creates an operations and maintenance (O&M) notice.
 *
 * @param request CreateOpsNoticeRequest
 * @return CreateOpsNoticeResponse
 */
CreateOpsNoticeResponse Client::createOpsNotice(const CreateOpsNoticeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOpsNoticeWithOptions(request, runtime);
}

/**
 * @summary Creates a service by specifying parameters, such as the region ID, deployment type, service type, and service name.
 *
 * @param tmpReq CreateServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceResponse
 */
CreateServiceResponse Client::createServiceWithOptions(const CreateServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateServiceShrinkRequest request = CreateServiceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComplianceMetadata()) {
    request.setComplianceMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComplianceMetadata(), "ComplianceMetadata", "json"));
  }

  json query = {};
  if (!!request.hasAlarmMetadata()) {
    query["AlarmMetadata"] = request.getAlarmMetadata();
  }

  if (!!request.hasApprovalType()) {
    query["ApprovalType"] = request.getApprovalType();
  }

  if (!!request.hasBuildParameters()) {
    query["BuildParameters"] = request.getBuildParameters();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasComplianceMetadataShrink()) {
    query["ComplianceMetadata"] = request.getComplianceMetadataShrink();
  }

  if (!!request.hasDeployMetadata()) {
    query["DeployMetadata"] = request.getDeployMetadata();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.getDeployType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasIsSupportOperated()) {
    query["IsSupportOperated"] = request.getIsSupportOperated();
  }

  if (!!request.hasLicenseMetadata()) {
    query["LicenseMetadata"] = request.getLicenseMetadata();
  }

  if (!!request.hasLogMetadata()) {
    query["LogMetadata"] = request.getLogMetadata();
  }

  if (!!request.hasOperationMetadata()) {
    query["OperationMetadata"] = request.getOperationMetadata();
  }

  if (!!request.hasPolicyNames()) {
    query["PolicyNames"] = request.getPolicyNames();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellable()) {
    query["Resellable"] = request.getResellable();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceInfo()) {
    query["ServiceInfo"] = request.getServiceInfo();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.getShareType();
  }

  if (!!request.hasSourceServiceId()) {
    query["SourceServiceId"] = request.getSourceServiceId();
  }

  if (!!request.hasSourceServiceVersion()) {
    query["SourceServiceVersion"] = request.getSourceServiceVersion();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTenantType()) {
    query["TenantType"] = request.getTenantType();
  }

  if (!!request.hasTrialDuration()) {
    query["TrialDuration"] = request.getTrialDuration();
  }

  if (!!request.hasUpgradeMetadata()) {
    query["UpgradeMetadata"] = request.getUpgradeMetadata();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.getVersionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateService"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceResponse>();
}

/**
 * @summary Creates a service by specifying parameters, such as the region ID, deployment type, service type, and service name.
 *
 * @param request CreateServiceRequest
 * @return CreateServiceResponse
 */
CreateServiceResponse Client::createService(const CreateServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceWithOptions(request, runtime);
}

/**
 * @summary You can create and deploy a service instance by specifying parameters such as the region ID, service ID, and service version.
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

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
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

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceInstance"},
    {"version" , "2021-05-21"},
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
 * @summary You can create and deploy a service instance by specifying parameters such as the region ID, service ID, and service version.
 *
 * @param request CreateServiceInstanceRequest
 * @return CreateServiceInstanceResponse
 */
CreateServiceInstanceResponse Client::createServiceInstance(const CreateServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a service test case.
 *
 * @param request CreateServiceTestCaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceTestCaseResponse
 */
CreateServiceTestCaseResponse Client::createServiceTestCaseWithOptions(const CreateServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasTestCaseName()) {
    query["TestCaseName"] = request.getTestCaseName();
  }

  if (!!request.hasTestConfig()) {
    query["TestConfig"] = request.getTestConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceTestCase"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceTestCaseResponse>();
}

/**
 * @summary Creates a service test case.
 *
 * @param request CreateServiceTestCaseRequest
 * @return CreateServiceTestCaseResponse
 */
CreateServiceTestCaseResponse Client::createServiceTestCase(const CreateServiceTestCaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceTestCaseWithOptions(request, runtime);
}

/**
 * @summary Creates a test task for a service.
 *
 * @param request CreateServiceTestTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceTestTaskResponse
 */
CreateServiceTestTaskResponse Client::createServiceTestTaskWithOptions(const CreateServiceTestTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskRegionId()) {
    query["TaskRegionId"] = request.getTaskRegionId();
  }

  if (!!request.hasTestCaseIds()) {
    query["TestCaseIds"] = request.getTestCaseIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceTestTask"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceTestTaskResponse>();
}

/**
 * @summary Creates a test task for a service.
 *
 * @param request CreateServiceTestTaskRequest
 * @return CreateServiceTestTaskResponse
 */
CreateServiceTestTaskResponse Client::createServiceTestTask(const CreateServiceTestTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceTestTaskWithOptions(request, runtime);
}

/**
 * @summary You can create a service distribution request.
 *
 * @param request CreateServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceUsageResponse
 */
CreateServiceUsageResponse Client::createServiceUsageWithOptions(const CreateServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceUsage"},
    {"version" , "2021-05-21"},
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
 * @summary You can create a service distribution request.
 *
 * @param request CreateServiceUsageRequest
 * @return CreateServiceUsageResponse
 */
CreateServiceUsageResponse Client::createServiceUsage(const CreateServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Registers a service provider.
 *
 * @param request CreateSupplierRegistrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSupplierRegistrationResponse
 */
CreateSupplierRegistrationResponse Client::createSupplierRegistrationWithOptions(const CreateSupplierRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactEmail()) {
    query["ContactEmail"] = request.getContactEmail();
  }

  if (!!request.hasContactNumber()) {
    query["ContactNumber"] = request.getContactNumber();
  }

  if (!!request.hasContactPerson()) {
    query["ContactPerson"] = request.getContactPerson();
  }

  if (!!request.hasContactPersonTitle()) {
    query["ContactPersonTitle"] = request.getContactPersonTitle();
  }

  if (!!request.hasEnableResellerMode()) {
    query["EnableResellerMode"] = request.getEnableResellerMode();
  }

  if (!!request.hasProductAnnualRevenue()) {
    query["ProductAnnualRevenue"] = request.getProductAnnualRevenue();
  }

  if (!!request.hasProductBusiness()) {
    query["ProductBusiness"] = request.getProductBusiness();
  }

  if (!!request.hasProductDeliveryTypes()) {
    query["ProductDeliveryTypes"] = request.getProductDeliveryTypes();
  }

  if (!!request.hasProductPublishTime()) {
    query["ProductPublishTime"] = request.getProductPublishTime();
  }

  if (!!request.hasProductSellTypes()) {
    query["ProductSellTypes"] = request.getProductSellTypes();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellBusinessDesc()) {
    query["ResellBusinessDesc"] = request.getResellBusinessDesc();
  }

  if (!!request.hasSuggestion()) {
    query["Suggestion"] = request.getSuggestion();
  }

  if (!!request.hasSupplierDesc()) {
    query["SupplierDesc"] = request.getSupplierDesc();
  }

  if (!!request.hasSupplierLogo()) {
    query["SupplierLogo"] = request.getSupplierLogo();
  }

  if (!!request.hasSupplierName()) {
    query["SupplierName"] = request.getSupplierName();
  }

  if (!!request.hasSupplierNameEn()) {
    query["SupplierNameEn"] = request.getSupplierNameEn();
  }

  if (!!request.hasSupplierUrl()) {
    query["SupplierUrl"] = request.getSupplierUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSupplierRegistration"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSupplierRegistrationResponse>();
}

/**
 * @summary Registers a service provider.
 *
 * @param request CreateSupplierRegistrationRequest
 * @return CreateSupplierRegistrationResponse
 */
CreateSupplierRegistrationResponse Client::createSupplierRegistration(const CreateSupplierRegistrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSupplierRegistrationWithOptions(request, runtime);
}

/**
 * @summary Deletes ACR image repositories.
 *
 * @description ### Prerequisites
 * Before you delete an image repository, ensure that no deployments reference its container images. If you delete a repository that contains referenced images, the associated deployments become unavailable.
 *
 * @param request DeleteAcrImageRepositoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAcrImageRepositoriesResponse
 */
DeleteAcrImageRepositoriesResponse Client::deleteAcrImageRepositoriesWithOptions(const DeleteAcrImageRepositoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.getArtifactType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.getRepoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAcrImageRepositories"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAcrImageRepositoriesResponse>();
}

/**
 * @summary Deletes ACR image repositories.
 *
 * @description ### Prerequisites
 * Before you delete an image repository, ensure that no deployments reference its container images. If you delete a repository that contains referenced images, the associated deployments become unavailable.
 *
 * @param request DeleteAcrImageRepositoriesRequest
 * @return DeleteAcrImageRepositoriesResponse
 */
DeleteAcrImageRepositoriesResponse Client::deleteAcrImageRepositories(const DeleteAcrImageRepositoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAcrImageRepositoriesWithOptions(request, runtime);
}

/**
 * @summary Delete a container image version from ACR
 *
 * @description ###
 * You must delete the deployments that use the container image before you delete the image tag. After the tag is deleted, the corresponding deployments become unusable.
 *
 * @param request DeleteAcrImageTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAcrImageTagsResponse
 */
DeleteAcrImageTagsResponse Client::deleteAcrImageTagsWithOptions(const DeleteAcrImageTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.getArtifactType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.getRepoId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAcrImageTags"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAcrImageTagsResponse>();
}

/**
 * @summary Delete a container image version from ACR
 *
 * @description ###
 * You must delete the deployments that use the container image before you delete the image tag. After the tag is deleted, the corresponding deployments become unusable.
 *
 * @param request DeleteAcrImageTagsRequest
 * @return DeleteAcrImageTagsResponse
 */
DeleteAcrImageTagsResponse Client::deleteAcrImageTags(const DeleteAcrImageTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAcrImageTagsWithOptions(request, runtime);
}

/**
 * @summary You can call DeleteArtifact to delete an artifact or a specific version of an artifact.
 *
 * @param request DeleteArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteArtifactResponse
 */
DeleteArtifactResponse Client::deleteArtifactWithOptions(const DeleteArtifactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.getArtifactId();
  }

  if (!!request.hasArtifactVersion()) {
    query["ArtifactVersion"] = request.getArtifactVersion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteArtifact"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteArtifactResponse>();
}

/**
 * @summary You can call DeleteArtifact to delete an artifact or a specific version of an artifact.
 *
 * @param request DeleteArtifactRequest
 * @return DeleteArtifactResponse
 */
DeleteArtifactResponse Client::deleteArtifact(const DeleteArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteArtifactWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified service based on its region ID, service ID, and service version.
 *
 * @param request DeleteServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteServiceWithOptions(const DeleteServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteService"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceResponse>();
}

/**
 * @summary Deletes a specified service based on its region ID, service ID, and service version.
 *
 * @param request DeleteServiceRequest
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteService(const DeleteServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes service instances by specifying a region ID and service instance IDs.
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
    {"version" , "2021-05-21"},
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
 * @summary Deletes service instances by specifying a region ID and service instance IDs.
 *
 * @param request DeleteServiceInstancesRequest
 * @return DeleteServiceInstancesResponse
 */
DeleteServiceInstancesResponse Client::deleteServiceInstances(const DeleteServiceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceInstancesWithOptions(request, runtime);
}

/**
 * @summary Deletes a service test case.
 *
 * @param request DeleteServiceTestCaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceTestCaseResponse
 */
DeleteServiceTestCaseResponse Client::deleteServiceTestCaseWithOptions(const DeleteServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTestCaseId()) {
    query["TestCaseId"] = request.getTestCaseId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceTestCase"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceTestCaseResponse>();
}

/**
 * @summary Deletes a service test case.
 *
 * @param request DeleteServiceTestCaseRequest
 * @return DeleteServiceTestCaseResponse
 */
DeleteServiceTestCaseResponse Client::deleteServiceTestCase(const DeleteServiceTestCaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceTestCaseWithOptions(request, runtime);
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
    {"version" , "2021-05-21"},
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
 * @summary You can call the GenerateDefaultServiceTestConfig operation to modify the service test configuration.
 *
 * @param request GenerateDefaultServiceTestConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateDefaultServiceTestConfigResponse
 */
GenerateDefaultServiceTestConfigResponse Client::generateDefaultServiceTestConfigWithOptions(const GenerateDefaultServiceTestConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
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
    {"action" , "GenerateDefaultServiceTestConfig"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateDefaultServiceTestConfigResponse>();
}

/**
 * @summary You can call the GenerateDefaultServiceTestConfig operation to modify the service test configuration.
 *
 * @param request GenerateDefaultServiceTestConfigRequest
 * @return GenerateDefaultServiceTestConfigResponse
 */
GenerateDefaultServiceTestConfigResponse Client::generateDefaultServiceTestConfig(const GenerateDefaultServiceTestConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateDefaultServiceTestConfigWithOptions(request, runtime);
}

/**
 * @summary Generates the required access policies before you create a service instance.
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
    {"version" , "2021-05-21"},
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
 * @summary Generates the required access policies before you create a service instance.
 *
 * @param request GenerateServicePolicyRequest
 * @return GenerateServicePolicyResponse
 */
GenerateServicePolicyResponse Client::generateServicePolicy(const GenerateServicePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateServicePolicyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an artifact.
 *
 * @param request GetArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactResponse
 */
GetArtifactResponse Client::getArtifactWithOptions(const GetArtifactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.getArtifactId();
  }

  if (!!request.hasArtifactName()) {
    query["ArtifactName"] = request.getArtifactName();
  }

  if (!!request.hasArtifactVersion()) {
    query["ArtifactVersion"] = request.getArtifactVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetArtifact"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArtifactResponse>();
}

/**
 * @summary Retrieves the details of an artifact.
 *
 * @param request GetArtifactRequest
 * @return GetArtifactResponse
 */
GetArtifactResponse Client::getArtifact(const GetArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArtifactWithOptions(request, runtime);
}

/**
 * @summary Obtains the credentials required to upload an artifact.
 *
 * @param request GetArtifactRepositoryCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactRepositoryCredentialsResponse
 */
GetArtifactRepositoryCredentialsResponse Client::getArtifactRepositoryCredentialsWithOptions(const GetArtifactRepositoryCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.getArtifactType();
  }

  if (!!request.hasDeployRegionId()) {
    query["DeployRegionId"] = request.getDeployRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetArtifactRepositoryCredentials"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArtifactRepositoryCredentialsResponse>();
}

/**
 * @summary Obtains the credentials required to upload an artifact.
 *
 * @param request GetArtifactRepositoryCredentialsRequest
 * @return GetArtifactRepositoryCredentialsResponse
 */
GetArtifactRepositoryCredentialsResponse Client::getArtifactRepositoryCredentials(const GetArtifactRepositoryCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArtifactRepositoryCredentialsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of available zones in a region.
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
    {"version" , "2021-05-21"},
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
 * @summary Retrieves a list of available zones in a region.
 *
 * @param request GetNetworkAvailableZonesRequest
 * @return GetNetworkAvailableZonesResponse
 */
GetNetworkAvailableZonesResponse Client::getNetworkAvailableZones(const GetNetworkAvailableZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkAvailableZonesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an operations and maintenance (O&M) notice.
 *
 * @description Services must be approved before they can be published.
 *
 * @param request GetOpsNoticeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOpsNoticeResponse
 */
GetOpsNoticeResponse Client::getOpsNoticeWithOptions(const GetOpsNoticeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNoticeId()) {
    query["NoticeId"] = request.getNoticeId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOpsNotice"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpsNoticeResponse>();
}

/**
 * @summary Retrieves the details of an operations and maintenance (O&M) notice.
 *
 * @description Services must be approved before they can be published.
 *
 * @param request GetOpsNoticeRequest
 * @return GetOpsNoticeResponse
 */
GetOpsNoticeResponse Client::getOpsNotice(const GetOpsNoticeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOpsNoticeWithOptions(request, runtime);
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
  if (!!request.hasFilterAliUid()) {
    query["FilterAliUid"] = request.getFilterAliUid();
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

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasSharedAccountType()) {
    query["SharedAccountType"] = request.getSharedAccountType();
  }

  if (!!request.hasShowDetail()) {
    query["ShowDetail"] = request.getShowDetail();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetService"},
    {"version" , "2021-05-21"},
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
 * @summary Retrieves the estimated cost of creating a service instance.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceEstimateCost"},
    {"version" , "2021-05-21"},
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
 * @summary Retrieves the estimated cost of creating a service instance.
 *
 * @param request GetServiceEstimateCostRequest
 * @return GetServiceEstimateCostResponse
 */
GetServiceEstimateCostResponse Client::getServiceEstimateCost(const GetServiceEstimateCostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceEstimateCostWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified service instance using the service instance ID and region ID. The returned information includes the deployment status, template name, and service details.
 *
 * @param request GetServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceInstanceResponse
 */
GetServiceInstanceResponse Client::getServiceInstanceWithOptions(const GetServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"version" , "2021-05-21"},
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
 * @summary Queries the details of a specified service instance using the service instance ID and region ID. The returned information includes the deployment status, template name, and service details.
 *
 * @param request GetServiceInstanceRequest
 * @return GetServiceInstanceResponse
 */
GetServiceInstanceResponse Client::getServiceInstance(const GetServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the activation status of a service and the information about its service roles.
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceProvisions"},
    {"version" , "2021-05-21"},
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
 * @summary Queries the activation status of a service and the information about its service roles.
 *
 * @param request GetServiceProvisionsRequest
 * @return GetServiceProvisionsResponse
 */
GetServiceProvisionsResponse Client::getServiceProvisions(const GetServiceProvisionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceProvisionsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a service registration.
 *
 * @param request GetServiceRegistrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceRegistrationResponse
 */
GetServiceRegistrationResponse Client::getServiceRegistrationWithOptions(const GetServiceRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegistrationId()) {
    query["RegistrationId"] = request.getRegistrationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceRegistration"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceRegistrationResponse>();
}

/**
 * @summary Queries the details of a service registration.
 *
 * @param request GetServiceRegistrationRequest
 * @return GetServiceRegistrationResponse
 */
GetServiceRegistrationResponse Client::getServiceRegistration(const GetServiceRegistrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceRegistrationWithOptions(request, runtime);
}

/**
 * @summary Queries for criterion issues in a service template.
 *
 * @param request GetServiceTemplateCriterionIssuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceTemplateCriterionIssuesResponse
 */
GetServiceTemplateCriterionIssuesResponse Client::getServiceTemplateCriterionIssuesWithOptions(const GetServiceTemplateCriterionIssuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceTemplateCriterionIssues"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceTemplateCriterionIssuesResponse>();
}

/**
 * @summary Queries for criterion issues in a service template.
 *
 * @param request GetServiceTemplateCriterionIssuesRequest
 * @return GetServiceTemplateCriterionIssuesResponse
 */
GetServiceTemplateCriterionIssuesResponse Client::getServiceTemplateCriterionIssues(const GetServiceTemplateCriterionIssuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceTemplateCriterionIssuesWithOptions(request, runtime);
}

/**
 * @summary Queries the parameter constraints for a Resource Orchestration Service (ROS) template.
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

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceTemplateParameterConstraints"},
    {"version" , "2021-05-21"},
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
 * @summary Queries the parameter constraints for a Resource Orchestration Service (ROS) template.
 *
 * @param request GetServiceTemplateParameterConstraintsRequest
 * @return GetServiceTemplateParameterConstraintsResponse
 */
GetServiceTemplateParameterConstraintsResponse Client::getServiceTemplateParameterConstraints(const GetServiceTemplateParameterConstraintsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceTemplateParameterConstraintsWithOptions(request, runtime);
}

/**
 * @summary After a service test task is created, you can call this API to retrieve the execution details of each use case in the task.
 *
 * @param request GetServiceTestTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceTestTaskResponse
 */
GetServiceTestTaskResponse Client::getServiceTestTaskWithOptions(const GetServiceTestTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceTestTask"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceTestTaskResponse>();
}

/**
 * @summary After a service test task is created, you can call this API to retrieve the execution details of each use case in the task.
 *
 * @param request GetServiceTestTaskRequest
 * @return GetServiceTestTaskResponse
 */
GetServiceTestTaskResponse Client::getServiceTestTask(const GetServiceTestTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceTestTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves service provider information.
 *
 * @param request GetSupplierInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSupplierInformationResponse
 */
GetSupplierInformationResponse Client::getSupplierInformationWithOptions(const GetSupplierInformationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSupplierInformation"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSupplierInformationResponse>();
}

/**
 * @summary Retrieves service provider information.
 *
 * @param request GetSupplierInformationRequest
 * @return GetSupplierInformationResponse
 */
GetSupplierInformationResponse Client::getSupplierInformation(const GetSupplierInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupplierInformationWithOptions(request, runtime);
}

/**
 * @summary Retrieves credentials to upload a file.
 *
 * @param request GetUploadCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadCredentialsResponse
 */
GetUploadCredentialsResponse Client::getUploadCredentialsWithOptions(const GetUploadCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.getVisibility();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUploadCredentials"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUploadCredentialsResponse>();
}

/**
 * @summary Retrieves credentials to upload a file.
 *
 * @param request GetUploadCredentialsRequest
 * @return GetUploadCredentialsResponse
 */
GetUploadCredentialsResponse Client::getUploadCredentials(const GetUploadCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadCredentialsWithOptions(request, runtime);
}

/**
 * @summary Publishes a service.
 *
 * @description Only approved services can be published.
 *
 * @param request LaunchServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LaunchServiceResponse
 */
LaunchServiceResponse Client::launchServiceWithOptions(const LaunchServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategories()) {
    query["Categories"] = request.getCategories();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRecommend()) {
    query["Recommend"] = request.getRecommend();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LaunchService"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LaunchServiceResponse>();
}

/**
 * @summary Publishes a service.
 *
 * @description Only approved services can be published.
 *
 * @param request LaunchServiceRequest
 * @return LaunchServiceResponse
 */
LaunchServiceResponse Client::launchService(const LaunchServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return launchServiceWithOptions(request, runtime);
}

/**
 * @summary You can call the ListAcrImageRepositories operation to query a list of image repositories in ACR.
 *
 * @param request ListAcrImageRepositoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAcrImageRepositoriesResponse
 */
ListAcrImageRepositoriesResponse Client::listAcrImageRepositoriesWithOptions(const ListAcrImageRepositoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.getArtifactType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.getRepoName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAcrImageRepositories"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAcrImageRepositoriesResponse>();
}

/**
 * @summary You can call the ListAcrImageRepositories operation to query a list of image repositories in ACR.
 *
 * @param request ListAcrImageRepositoriesRequest
 * @return ListAcrImageRepositoriesResponse
 */
ListAcrImageRepositoriesResponse Client::listAcrImageRepositories(const ListAcrImageRepositoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAcrImageRepositoriesWithOptions(request, runtime);
}

/**
 * @summary Lists the uploaded image versions in an image repository.
 *
 * @param request ListAcrImageTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAcrImageTagsResponse
 */
ListAcrImageTagsResponse Client::listAcrImageTagsWithOptions(const ListAcrImageTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.getArtifactType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.getRepoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAcrImageTags"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAcrImageTagsResponse>();
}

/**
 * @summary Lists the uploaded image versions in an image repository.
 *
 * @param request ListAcrImageTagsRequest
 * @return ListAcrImageTagsResponse
 */
ListAcrImageTagsResponse Client::listAcrImageTags(const ListAcrImageTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAcrImageTagsWithOptions(request, runtime);
}

/**
 * @summary Queries the build logs of an artifact.
 *
 * @description ### Prerequisites
 * None
 *
 * @param request ListArtifactBuildLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactBuildLogsResponse
 */
ListArtifactBuildLogsResponse Client::listArtifactBuildLogsWithOptions(const ListArtifactBuildLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.getArtifactId();
  }

  if (!!request.hasArtifactVersion()) {
    query["ArtifactVersion"] = request.getArtifactVersion();
  }

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

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListArtifactBuildLogs"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListArtifactBuildLogsResponse>();
}

/**
 * @summary Queries the build logs of an artifact.
 *
 * @description ### Prerequisites
 * None
 *
 * @param request ListArtifactBuildLogsRequest
 * @return ListArtifactBuildLogsResponse
 */
ListArtifactBuildLogsResponse Client::listArtifactBuildLogs(const ListArtifactBuildLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactBuildLogsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of security risks for an artifact.
 *
 * @param request ListArtifactRisksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactRisksResponse
 */
ListArtifactRisksResponse Client::listArtifactRisksWithOptions(const ListArtifactRisksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.getArtifactId();
  }

  if (!!request.hasArtifactVersion()) {
    query["ArtifactVersion"] = request.getArtifactVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListArtifactRisks"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListArtifactRisksResponse>();
}

/**
 * @summary Retrieves a list of security risks for an artifact.
 *
 * @param request ListArtifactRisksRequest
 * @return ListArtifactRisksResponse
 */
ListArtifactRisksResponse Client::listArtifactRisks(const ListArtifactRisksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactRisksWithOptions(request, runtime);
}

/**
 * @summary Queries artifact versions.
 *
 * @param tmpReq ListArtifactVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactVersionsResponse
 */
ListArtifactVersionsResponse Client::listArtifactVersionsWithOptions(const ListArtifactVersionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListArtifactVersionsShrinkRequest request = ListArtifactVersionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilters()) {
    request.setFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilters(), "Filters", "json"));
  }

  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.getArtifactId();
  }

  if (!!request.hasFiltersShrink()) {
    query["Filters"] = request.getFiltersShrink();
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
    {"action" , "ListArtifactVersions"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListArtifactVersionsResponse>();
}

/**
 * @summary Queries artifact versions.
 *
 * @param request ListArtifactVersionsRequest
 * @return ListArtifactVersionsResponse
 */
ListArtifactVersionsResponse Client::listArtifactVersions(const ListArtifactVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of artifacts.
 *
 * @param request ListArtifactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactsResponse
 */
ListArtifactsResponse Client::listArtifactsWithOptions(const ListArtifactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListArtifacts"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListArtifactsResponse>();
}

/**
 * @summary Queries a list of artifacts.
 *
 * @param request ListArtifactsRequest
 * @return ListArtifactsResponse
 */
ListArtifactsResponse Client::listArtifacts(const ListArtifactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactsWithOptions(request, runtime);
}

/**
 * @summary Queries the operations and maintenance (O&M) notices published by a service provider.
 *
 * @param request ListOpsNoticesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOpsNoticesResponse
 */
ListOpsNoticesResponse Client::listOpsNoticesWithOptions(const ListOpsNoticesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListOpsNotices"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOpsNoticesResponse>();
}

/**
 * @summary Queries the operations and maintenance (O&M) notices published by a service provider.
 *
 * @param request ListOpsNoticesRequest
 * @return ListOpsNoticesResponse
 */
ListOpsNoticesResponse Client::listOpsNotices(const ListOpsNoticesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOpsNoticesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of resellers for display on the frontend.
 *
 * @param request ListResellersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResellersResponse
 */
ListResellersResponse Client::listResellersWithOptions(const ListResellersRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListResellers"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResellersResponse>();
}

/**
 * @summary Queries a list of resellers for display on the frontend.
 *
 * @param request ListResellersRequest
 * @return ListResellersResponse
 */
ListResellersResponse Client::listResellers(const ListResellersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResellersWithOptions(request, runtime);
}

/**
 * @summary Queries the logs for service instances, upgrades, and applications.
 *
 * @description ### Prerequisites
 * Ensure that you add the startup and shutdown Operations and Maintenance (O\\&M) operations when you create a service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
 *
 * @param request ListServiceBuildLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceBuildLogsResponse
 */
ListServiceBuildLogsResponse Client::listServiceBuildLogsWithOptions(const ListServiceBuildLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceBuildLogs"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceBuildLogsResponse>();
}

/**
 * @summary Queries the logs for service instances, upgrades, and applications.
 *
 * @description ### Prerequisites
 * Ensure that you add the startup and shutdown Operations and Maintenance (O\\&M) operations when you create a service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
 *
 * @param request ListServiceBuildLogsRequest
 * @return ListServiceBuildLogsResponse
 */
ListServiceBuildLogsResponse Client::listServiceBuildLogs(const ListServiceBuildLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceBuildLogsWithOptions(request, runtime);
}

/**
 * @summary You can call the ListServiceInstanceBill operation to query the bills of a service instance.
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

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
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
    {"action" , "ListServiceInstanceBill"},
    {"version" , "2021-05-21"},
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
 * @summary You can call the ListServiceInstanceBill operation to query the bills of a service instance.
 *
 * @param request ListServiceInstanceBillRequest
 * @return ListServiceInstanceBillResponse
 */
ListServiceInstanceBillResponse Client::listServiceInstanceBill(const ListServiceInstanceBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceBillWithOptions(request, runtime);
}

/**
 * @summary Queries the deployment details for service instances.
 *
 * @param request ListServiceInstanceDeployDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceDeployDetailsResponse
 */
ListServiceInstanceDeployDetailsResponse Client::listServiceInstanceDeployDetailsWithOptions(const ListServiceInstanceDeployDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCycleTimeZone()) {
    query["CycleTimeZone"] = request.getCycleTimeZone();
  }

  if (!!request.hasCycleType()) {
    query["CycleType"] = request.getCycleType();
  }

  if (!!request.hasDimension()) {
    query["Dimension"] = request.getDimension();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceInstanceDeployDetails"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceInstanceDeployDetailsResponse>();
}

/**
 * @summary Queries the deployment details for service instances.
 *
 * @param request ListServiceInstanceDeployDetailsRequest
 * @return ListServiceInstanceDeployDetailsResponse
 */
ListServiceInstanceDeployDetailsResponse Client::listServiceInstanceDeployDetails(const ListServiceInstanceDeployDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceDeployDetailsWithOptions(request, runtime);
}

/**
 * @summary Call the ListServiceInstanceLogs operation to query deployment, upgrade, and application logs for a service instance.
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
    {"version" , "2021-05-21"},
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
 * @summary Call the ListServiceInstanceLogs operation to query deployment, upgrade, and application logs for a service instance.
 *
 * @param request ListServiceInstanceLogsRequest
 * @return ListServiceInstanceLogsResponse
 */
ListServiceInstanceLogsResponse Client::listServiceInstanceLogs(const ListServiceInstanceLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceLogsWithOptions(request, runtime);
}

/**
 * @summary Lists the resources in a service instance.
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
    {"version" , "2021-05-21"},
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
 * @summary Lists the resources in a service instance.
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
    {"version" , "2021-05-21"},
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
 * @summary Queries a list of service instances.
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

  if (!!request.hasShowDeleted()) {
    query["ShowDeleted"] = request.getShowDeleted();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceInstances"},
    {"version" , "2021-05-21"},
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
 * @summary Queries a list of service instances.
 *
 * @param request ListServiceInstancesRequest
 * @return ListServiceInstancesResponse
 */
ListServiceInstancesResponse Client::listServiceInstances(const ListServiceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries service registration requests.
 *
 * @param request ListServiceRegistrationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceRegistrationsResponse
 */
ListServiceRegistrationsResponse Client::listServiceRegistrationsWithOptions(const ListServiceRegistrationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListServiceRegistrations"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceRegistrationsResponse>();
}

/**
 * @summary Queries service registration requests.
 *
 * @param request ListServiceRegistrationsRequest
 * @return ListServiceRegistrationsResponse
 */
ListServiceRegistrationsResponse Client::listServiceRegistrations(const ListServiceRegistrationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceRegistrationsWithOptions(request, runtime);
}

/**
 * @summary Queries the accounts that a service is shared with.
 *
 * @param request ListServiceSharedAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceSharedAccountsResponse
 */
ListServiceSharedAccountsResponse Client::listServiceSharedAccountsWithOptions(const ListServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasPermission()) {
    query["Permission"] = request.getPermission();
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
    {"action" , "ListServiceSharedAccounts"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceSharedAccountsResponse>();
}

/**
 * @summary Queries the accounts that a service is shared with.
 *
 * @param request ListServiceSharedAccountsRequest
 * @return ListServiceSharedAccountsResponse
 */
ListServiceSharedAccountsResponse Client::listServiceSharedAccounts(const ListServiceSharedAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceSharedAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the service test cases for the current service version.
 *
 * @param request ListServiceTestCasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceTestCasesResponse
 */
ListServiceTestCasesResponse Client::listServiceTestCasesWithOptions(const ListServiceTestCasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceTestCases"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceTestCasesResponse>();
}

/**
 * @summary Queries the service test cases for the current service version.
 *
 * @param request ListServiceTestCasesRequest
 * @return ListServiceTestCasesResponse
 */
ListServiceTestCasesResponse Client::listServiceTestCases(const ListServiceTestCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceTestCasesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the real-time logs of a service test.
 *
 * @param request ListServiceTestTaskLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceTestTaskLogsResponse
 */
ListServiceTestTaskLogsResponse Client::listServiceTestTaskLogsWithOptions(const ListServiceTestTaskLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceTestTaskLogs"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceTestTaskLogsResponse>();
}

/**
 * @summary Retrieves the real-time logs of a service test.
 *
 * @param request ListServiceTestTaskLogsRequest
 * @return ListServiceTestTaskLogsResponse
 */
ListServiceTestTaskLogsResponse Client::listServiceTestTaskLogs(const ListServiceTestTaskLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceTestTaskLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the test tasks for a service.
 *
 * @param request ListServiceTestTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceTestTasksResponse
 */
ListServiceTestTasksResponse Client::listServiceTestTasksWithOptions(const ListServiceTestTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceTestTasks"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceTestTasksResponse>();
}

/**
 * @summary Queries the test tasks for a service.
 *
 * @param request ListServiceTestTasksRequest
 * @return ListServiceTestTasksResponse
 */
ListServiceTestTasksResponse Client::listServiceTestTasks(const ListServiceTestTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceTestTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the usage of your services.
 *
 * @param request ListServiceUsagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceUsagesResponse
 */
ListServiceUsagesResponse Client::listServiceUsagesWithOptions(const ListServiceUsagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceUsages"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceUsagesResponse>();
}

/**
 * @summary Queries the usage of your services.
 *
 * @param request ListServiceUsagesRequest
 * @return ListServiceUsagesResponse
 */
ListServiceUsagesResponse Client::listServiceUsages(const ListServiceUsagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceUsagesWithOptions(request, runtime);
}

/**
 * @summary Queries for a list of services based on specified parameters, such as a region ID and service IDs. The returned information includes the service status, service version, and publish time.
 *
 * @param request ListServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServicesWithOptions(const ListServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllVersions()) {
    query["AllVersions"] = request.getAllVersions();
  }

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
    {"action" , "ListServices"},
    {"version" , "2021-05-21"},
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
 * @summary Queries for a list of services based on specified parameters, such as a region ID and service IDs. The returned information includes the service status, service version, and publish time.
 *
 * @param request ListServicesRequest
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServices(const ListServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServicesWithOptions(request, runtime);
}

/**
 * @summary Queries service provider registration requests.
 *
 * @param request ListSupplierRegistrationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSupplierRegistrationsResponse
 */
ListSupplierRegistrationsResponse Client::listSupplierRegistrationsWithOptions(const ListSupplierRegistrationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListSupplierRegistrations"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSupplierRegistrationsResponse>();
}

/**
 * @summary Queries service provider registration requests.
 *
 * @param request ListSupplierRegistrationsRequest
 * @return ListSupplierRegistrationsResponse
 */
ListSupplierRegistrationsResponse Client::listSupplierRegistrations(const ListSupplierRegistrationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSupplierRegistrationsWithOptions(request, runtime);
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
    {"version" , "2021-05-21"},
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
 * @summary Queries the tags of one or more resources.
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
    {"version" , "2021-05-21"},
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
 * @summary Queries the tags of one or more resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values for a specific tag key.
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
    {"version" , "2021-05-21"},
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
 * @summary Queries the tag values for a specific tag key.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Modifies the resources of a service instance.
 *
 * @param request ModifyServiceInstanceResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyServiceInstanceResourcesResponse
 */
ModifyServiceInstanceResourcesResponse Client::modifyServiceInstanceResourcesWithOptions(const ModifyServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  if (!!request.hasServiceInstanceResourcesAction()) {
    query["ServiceInstanceResourcesAction"] = request.getServiceInstanceResourcesAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyServiceInstanceResources"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyServiceInstanceResourcesResponse>();
}

/**
 * @summary Modifies the resources of a service instance.
 *
 * @param request ModifyServiceInstanceResourcesRequest
 * @return ModifyServiceInstanceResourcesResponse
 */
ModifyServiceInstanceResourcesResponse Client::modifyServiceInstanceResources(const ModifyServiceInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyServiceInstanceResourcesWithOptions(request, runtime);
}

/**
 * @summary Prelaunches a service.
 *
 * @param request PreLaunchServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreLaunchServiceResponse
 */
PreLaunchServiceResponse Client::preLaunchServiceWithOptions(const PreLaunchServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreLaunchService"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreLaunchServiceResponse>();
}

/**
 * @summary Prelaunches a service.
 *
 * @param request PreLaunchServiceRequest
 * @return PreLaunchServiceResponse
 */
PreLaunchServiceResponse Client::preLaunchService(const PreLaunchServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preLaunchServiceWithOptions(request, runtime);
}

/**
 * @summary This API pushes metering data for pay-as-you-go Compute Nest service instances. The metering items must be predefined by the service provider.
 *
 * @param request PushMeteringDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushMeteringDataResponse
 */
PushMeteringDataResponse Client::pushMeteringDataWithOptions(const PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMetering()) {
    query["Metering"] = request.getMetering();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.getServiceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushMeteringData"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushMeteringDataResponse>();
}

/**
 * @summary This API pushes metering data for pay-as-you-go Compute Nest service instances. The metering items must be predefined by the service provider.
 *
 * @param request PushMeteringDataRequest
 * @return PushMeteringDataResponse
 */
PushMeteringDataResponse Client::pushMeteringData(const PushMeteringDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushMeteringDataWithOptions(request, runtime);
}

/**
 * @summary Registers a Service deployment.
 *
 * @param request RegisterServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterServiceResponse
 */
RegisterServiceResponse Client::registerServiceWithOptions(const RegisterServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterService"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterServiceResponse>();
}

/**
 * @summary Registers a Service deployment.
 *
 * @param request RegisterServiceRequest
 * @return RegisterServiceResponse
 */
RegisterServiceResponse Client::registerService(const RegisterServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerServiceWithOptions(request, runtime);
}

/**
 * @summary You can call RejectServiceUsage to reject a service request.
 *
 * @param request RejectServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectServiceUsageResponse
 */
RejectServiceUsageResponse Client::rejectServiceUsageWithOptions(const RejectServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasComments()) {
    query["Comments"] = request.getComments();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserAliUid()) {
    query["UserAliUid"] = request.getUserAliUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectServiceUsage"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectServiceUsageResponse>();
}

/**
 * @summary You can call RejectServiceUsage to reject a service request.
 *
 * @param request RejectServiceUsageRequest
 * @return RejectServiceUsageResponse
 */
RejectServiceUsageResponse Client::rejectServiceUsage(const RejectServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Publishes an artifact.
 *
 * @description ### Prerequisites
 * Ensure that you have created and saved an artifact.
 *
 * @param request ReleaseArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseArtifactResponse
 */
ReleaseArtifactResponse Client::releaseArtifactWithOptions(const ReleaseArtifactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.getArtifactId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseArtifact"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseArtifactResponse>();
}

/**
 * @summary Publishes an artifact.
 *
 * @description ### Prerequisites
 * Ensure that you have created and saved an artifact.
 *
 * @param request ReleaseArtifactRequest
 * @return ReleaseArtifactResponse
 */
ReleaseArtifactResponse Client::releaseArtifact(const ReleaseArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseArtifactWithOptions(request, runtime);
}

/**
 * @summary Removes shared accounts.
 *
 * @param request RemoveServiceSharedAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveServiceSharedAccountsResponse
 */
RemoveServiceSharedAccountsResponse Client::removeServiceSharedAccountsWithOptions(const RemoveServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserAliUids()) {
    query["UserAliUids"] = request.getUserAliUids();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveServiceSharedAccounts"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveServiceSharedAccountsResponse>();
}

/**
 * @summary Removes shared accounts.
 *
 * @param request RemoveServiceSharedAccountsRequest
 * @return RemoveServiceSharedAccountsResponse
 */
RemoveServiceSharedAccountsResponse Client::removeServiceSharedAccounts(const RemoveServiceSharedAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeServiceSharedAccountsWithOptions(request, runtime);
}

/**
 * @summary Call the RestartServiceInstance operation to restart a service instance whose status is Deployed.
 *
 * @description ### Prerequisites
 * Ensure that you add the restart Operations and Maintenance (O\\&M) operation when you create the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
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
    {"version" , "2021-05-21"},
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
 * @summary Call the RestartServiceInstance operation to restart a service instance whose status is Deployed.
 *
 * @description ### Prerequisites
 * Ensure that you add the restart Operations and Maintenance (O\\&M) operation when you create the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
 *
 * @param request RestartServiceInstanceRequest
 * @return RestartServiceInstanceResponse
 */
RestartServiceInstanceResponse Client::restartServiceInstance(const RestartServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Rolls back an upgraded service instance to its previous version.
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
    {"version" , "2021-05-21"},
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
 * @summary Rolls back an upgraded service instance to its previous version.
 *
 * @param request RollbackServiceInstanceRequest
 * @return RollbackServiceInstanceResponse
 */
RollbackServiceInstanceResponse Client::rollbackServiceInstance(const RollbackServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts a service instance when its status is Stopped or StartFailed.
 *
 * @description ### Prerequisites
 * Ensure that you add the startup and shutdown O\\&M operations when you create the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
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
    {"version" , "2021-05-21"},
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
 * @summary Starts a service instance when its status is Stopped or StartFailed.
 *
 * @description ### Prerequisites
 * Ensure that you add the startup and shutdown O\\&M operations when you create the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
 *
 * @param request StartServiceInstanceRequest
 * @return StartServiceInstanceResponse
 */
StartServiceInstanceResponse Client::startServiceInstance(const StartServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary This operation stops a service instance that is in the Deployed or StopFailed state.
 *
 * @description ### Prerequisites
 * Ensure that you configured the startup and shutdown operations and maintenance (O\\&M) when you created the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
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
    {"version" , "2021-05-21"},
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
 * @summary This operation stops a service instance that is in the Deployed or StopFailed state.
 *
 * @description ### Prerequisites
 * Ensure that you configured the startup and shutdown operations and maintenance (O\\&M) when you created the service. For more information, see [Create a service](https://help.aliyun.com/document_detail/440268.html).
 *
 * @param request StopServiceInstanceRequest
 * @return StopServiceInstanceResponse
 */
StopServiceInstanceResponse Client::stopServiceInstance(const StopServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates and attaches tags to one or more resources.
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
    {"version" , "2021-05-21"},
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
 * @summary Creates and attaches tags to one or more resources.
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
    {"version" , "2021-05-21"},
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
 * @summary Updates an artifact.
 *
 * @param tmpReq UpdateArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateArtifactResponse
 */
UpdateArtifactResponse Client::updateArtifactWithOptions(const UpdateArtifactRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateArtifactShrinkRequest request = UpdateArtifactShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasArtifactBuildProperty()) {
    request.setArtifactBuildPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArtifactBuildProperty(), "ArtifactBuildProperty", "json"));
  }

  if (!!tmpReq.hasArtifactProperty()) {
    request.setArtifactPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getArtifactProperty(), "ArtifactProperty", "json"));
  }

  json query = {};
  if (!!request.hasArtifactBuildPropertyShrink()) {
    query["ArtifactBuildProperty"] = request.getArtifactBuildPropertyShrink();
  }

  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.getArtifactId();
  }

  if (!!request.hasArtifactPropertyShrink()) {
    query["ArtifactProperty"] = request.getArtifactPropertyShrink();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasPermissionType()) {
    query["PermissionType"] = request.getPermissionType();
  }

  if (!!request.hasSupportRegionIds()) {
    query["SupportRegionIds"] = request.getSupportRegionIds();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.getVersionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateArtifact"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateArtifactResponse>();
}

/**
 * @summary Updates an artifact.
 *
 * @param request UpdateArtifactRequest
 * @return UpdateArtifactResponse
 */
UpdateArtifactResponse Client::updateArtifact(const UpdateArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateArtifactWithOptions(request, runtime);
}

/**
 * @summary Updates a service.
 *
 * @description Only approved services can be published.
 *
 * @param tmpReq UpdateServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceResponse
 */
UpdateServiceResponse Client::updateServiceWithOptions(const UpdateServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateServiceShrinkRequest request = UpdateServiceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCommodity()) {
    request.setCommodityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCommodity(), "Commodity", "json"));
  }

  if (!!tmpReq.hasComplianceMetadata()) {
    request.setComplianceMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComplianceMetadata(), "ComplianceMetadata", "json"));
  }

  if (!!tmpReq.hasUpdateOption()) {
    request.setUpdateOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateOption(), "UpdateOption", "json"));
  }

  json query = {};
  if (!!request.hasAlarmMetadata()) {
    query["AlarmMetadata"] = request.getAlarmMetadata();
  }

  if (!!request.hasApprovalType()) {
    query["ApprovalType"] = request.getApprovalType();
  }

  if (!!request.hasBuildParameters()) {
    query["BuildParameters"] = request.getBuildParameters();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommodityShrink()) {
    query["Commodity"] = request.getCommodityShrink();
  }

  if (!!request.hasComplianceMetadataShrink()) {
    query["ComplianceMetadata"] = request.getComplianceMetadataShrink();
  }

  if (!!request.hasDeployMetadata()) {
    query["DeployMetadata"] = request.getDeployMetadata();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.getDeployType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
  }

  if (!!request.hasIsSupportOperated()) {
    query["IsSupportOperated"] = request.getIsSupportOperated();
  }

  if (!!request.hasLicenseMetadata()) {
    query["LicenseMetadata"] = request.getLicenseMetadata();
  }

  if (!!request.hasLogMetadata()) {
    query["LogMetadata"] = request.getLogMetadata();
  }

  if (!!request.hasOperationMetadata()) {
    query["OperationMetadata"] = request.getOperationMetadata();
  }

  if (!!request.hasPolicyNames()) {
    query["PolicyNames"] = request.getPolicyNames();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellable()) {
    query["Resellable"] = request.getResellable();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceInfo()) {
    query["ServiceInfo"] = request.getServiceInfo();
  }

  if (!!request.hasServiceLocaleConfigs()) {
    query["ServiceLocaleConfigs"] = request.getServiceLocaleConfigs();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.getShareType();
  }

  if (!!request.hasTenantType()) {
    query["TenantType"] = request.getTenantType();
  }

  if (!!request.hasTrialDuration()) {
    query["TrialDuration"] = request.getTrialDuration();
  }

  if (!!request.hasUpdateOptionShrink()) {
    query["UpdateOption"] = request.getUpdateOptionShrink();
  }

  if (!!request.hasUpgradeMetadata()) {
    query["UpgradeMetadata"] = request.getUpgradeMetadata();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.getVersionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateService"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceResponse>();
}

/**
 * @summary Updates a service.
 *
 * @description Only approved services can be published.
 *
 * @param request UpdateServiceRequest
 * @return UpdateServiceResponse
 */
UpdateServiceResponse Client::updateService(const UpdateServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceWithOptions(request, runtime);
}

/**
 * @summary Updates the attributes of a service instance.
 *
 * @param tmpReq UpdateServiceInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceInstanceAttributeResponse
 */
UpdateServiceInstanceAttributeResponse Client::updateServiceInstanceAttributeWithOptions(const UpdateServiceInstanceAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateServiceInstanceAttributeShrinkRequest request = UpdateServiceInstanceAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLicenseData()) {
    request.setLicenseDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLicenseData(), "LicenseData", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLicenseDataShrink()) {
    query["LicenseData"] = request.getLicenseDataShrink();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.getReason();
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
    {"action" , "UpdateServiceInstanceAttribute"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceInstanceAttributeResponse>();
}

/**
 * @summary Updates the attributes of a service instance.
 *
 * @param request UpdateServiceInstanceAttributeRequest
 * @return UpdateServiceInstanceAttributeResponse
 */
UpdateServiceInstanceAttributeResponse Client::updateServiceInstanceAttribute(const UpdateServiceInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Upgrades or downgrades a service instance.
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
    {"version" , "2021-05-21"},
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
 * @summary Upgrades or downgrades a service instance.
 *
 * @param request UpdateServiceInstanceSpecRequest
 * @return UpdateServiceInstanceSpecResponse
 */
UpdateServiceInstanceSpecResponse Client::updateServiceInstanceSpec(const UpdateServiceInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary Updates a service test case.
 *
 * @param request UpdateServiceTestCaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceTestCaseResponse
 */
UpdateServiceTestCaseResponse Client::updateServiceTestCaseWithOptions(const UpdateServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTestCaseId()) {
    query["TestCaseId"] = request.getTestCaseId();
  }

  if (!!request.hasTestCaseName()) {
    query["TestCaseName"] = request.getTestCaseName();
  }

  if (!!request.hasTestConfig()) {
    query["TestConfig"] = request.getTestConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateServiceTestCase"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceTestCaseResponse>();
}

/**
 * @summary Updates a service test case.
 *
 * @param request UpdateServiceTestCaseRequest
 * @return UpdateServiceTestCaseResponse
 */
UpdateServiceTestCaseResponse Client::updateServiceTestCase(const UpdateServiceTestCaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceTestCaseWithOptions(request, runtime);
}

/**
 * @summary You can call UpdateSharedAccountPermission to update the permissions of a shared account.
 *
 * @param request UpdateSharedAccountPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSharedAccountPermissionResponse
 */
UpdateSharedAccountPermissionResponse Client::updateSharedAccountPermissionWithOptions(const UpdateSharedAccountPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasPermission()) {
    query["Permission"] = request.getPermission();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserAliUid()) {
    query["UserAliUid"] = request.getUserAliUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSharedAccountPermission"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSharedAccountPermissionResponse>();
}

/**
 * @summary You can call UpdateSharedAccountPermission to update the permissions of a shared account.
 *
 * @param request UpdateSharedAccountPermissionRequest
 * @return UpdateSharedAccountPermissionResponse
 */
UpdateSharedAccountPermissionResponse Client::updateSharedAccountPermission(const UpdateSharedAccountPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSharedAccountPermissionWithOptions(request, runtime);
}

/**
 * @summary You can call the UpdateSupplierInformation operation to update supplier information.
 *
 * @param request UpdateSupplierInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSupplierInformationResponse
 */
UpdateSupplierInformationResponse Client::updateSupplierInformationWithOptions(const UpdateSupplierInformationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliverySettings()) {
    query["DeliverySettings"] = request.getDeliverySettings();
  }

  if (!!request.hasOperationIp()) {
    query["OperationIp"] = request.getOperationIp();
  }

  if (!!request.hasOperationMfaPresent()) {
    query["OperationMfaPresent"] = request.getOperationMfaPresent();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSupplierDesc()) {
    query["SupplierDesc"] = request.getSupplierDesc();
  }

  if (!!request.hasSupplierLogo()) {
    query["SupplierLogo"] = request.getSupplierLogo();
  }

  if (!!request.hasSupplierUrl()) {
    query["SupplierUrl"] = request.getSupplierUrl();
  }

  if (!!request.hasSupportContacts()) {
    query["SupportContacts"] = request.getSupportContacts();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSupplierInformation"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSupplierInformationResponse>();
}

/**
 * @summary You can call the UpdateSupplierInformation operation to update supplier information.
 *
 * @param request UpdateSupplierInformationRequest
 * @return UpdateSupplierInformationResponse
 */
UpdateSupplierInformationResponse Client::updateSupplierInformation(const UpdateSupplierInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSupplierInformationWithOptions(request, runtime);
}

/**
 * @summary The UpgradeServiceInstance operation upgrades a service instance based on parameters such as the region ID and service version.
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
    {"version" , "2021-05-21"},
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
 * @summary The UpgradeServiceInstance operation upgrades a service instance based on parameters such as the region ID and service version.
 *
 * @param request UpgradeServiceInstanceRequest
 * @return UpgradeServiceInstanceResponse
 */
UpgradeServiceInstanceResponse Client::upgradeServiceInstance(const UpgradeServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Unpublishes a service version.
 *
 * @param request WithdrawServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WithdrawServiceResponse
 */
WithdrawServiceResponse Client::withdrawServiceWithOptions(const WithdrawServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WithdrawService"},
    {"version" , "2021-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WithdrawServiceResponse>();
}

/**
 * @summary Unpublishes a service version.
 *
 * @param request WithdrawServiceRequest
 * @return WithdrawServiceResponse
 */
WithdrawServiceResponse Client::withdrawService(const WithdrawServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return withdrawServiceWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521