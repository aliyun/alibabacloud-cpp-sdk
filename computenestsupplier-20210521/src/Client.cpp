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
 * @summary Adds a shared account of a service.
 *
 * @param request AddServiceSharedAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddServiceSharedAccountsResponse
 */
AddServiceSharedAccountsResponse Client::addServiceSharedAccountsWithOptions(const AddServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasSharedAccounts()) {
    query["SharedAccounts"] = request.sharedAccounts();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
 * @summary Adds a shared account of a service.
 *
 * @param request AddServiceSharedAccountsRequest
 * @return AddServiceSharedAccountsResponse
 */
AddServiceSharedAccountsResponse Client::addServiceSharedAccounts(const AddServiceSharedAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addServiceSharedAccountsWithOptions(request, runtime);
}

/**
 * @summary Merchant uses service request
 *
 * @param request ApproveServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveServiceUsageResponse
 */
ApproveServiceUsageResponse Client::approveServiceUsageWithOptions(const ApproveServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasComments()) {
    query["Comments"] = request.comments();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserAliUid()) {
    query["UserAliUid"] = request.userAliUid();
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
 * @summary Merchant uses service request
 *
 * @param request ApproveServiceUsageRequest
 * @return ApproveServiceUsageResponse
 */
ApproveServiceUsageResponse Client::approveServiceUsage(const ApproveServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Cancel service registration.
 *
 * @description Only service registration in the Submitted status can be canceled.
 *
 * @param request CancelServiceRegistrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelServiceRegistrationResponse
 */
CancelServiceRegistrationResponse Client::cancelServiceRegistrationWithOptions(const CancelServiceRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegistrationId()) {
    query["RegistrationId"] = request.registrationId();
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
 * @summary Cancel service registration.
 *
 * @description Only service registration in the Submitted status can be canceled.
 *
 * @param request CancelServiceRegistrationRequest
 * @return CancelServiceRegistrationResponse
 */
CancelServiceRegistrationResponse Client::cancelServiceRegistration(const CancelServiceRegistrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelServiceRegistrationWithOptions(request, runtime);
}

/**
 * @summary Redeploys a service instance after the service instance failed to be deployed.
 *
 * @param request ContinueDeployServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinueDeployServiceInstanceResponse
 */
ContinueDeployServiceInstanceResponse Client::continueDeployServiceInstanceWithOptions(const ContinueDeployServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary Redeploys a service instance after the service instance failed to be deployed.
 *
 * @param request ContinueDeployServiceInstanceRequest
 * @return ContinueDeployServiceInstanceResponse
 */
ContinueDeployServiceInstanceResponse Client::continueDeployServiceInstance(const ContinueDeployServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continueDeployServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a deployment package.
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
    request.setArtifactBuildPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.artifactBuildProperty(), "ArtifactBuildProperty", "json"));
  }

  if (!!tmpReq.hasArtifactProperty()) {
    request.setArtifactPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.artifactProperty(), "ArtifactProperty", "json"));
  }

  json query = {};
  if (!!request.hasArtifactBuildPropertyShrink()) {
    query["ArtifactBuildProperty"] = request.artifactBuildPropertyShrink();
  }

  if (!!request.hasArtifactBuildType()) {
    query["ArtifactBuildType"] = request.artifactBuildType();
  }

  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.artifactId();
  }

  if (!!request.hasArtifactPropertyShrink()) {
    query["ArtifactProperty"] = request.artifactPropertyShrink();
  }

  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.artifactType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSupportRegionIds()) {
    query["SupportRegionIds"] = request.supportRegionIds();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.versionName();
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
 * @summary Creates a deployment package.
 *
 * @param request CreateArtifactRequest
 * @return CreateArtifactResponse
 */
CreateArtifactResponse Client::createArtifact(const CreateArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createArtifactWithOptions(request, runtime);
}

/**
 * @summary Creates a service.
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
    request.setComplianceMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.complianceMetadata(), "ComplianceMetadata", "json"));
  }

  json query = {};
  if (!!request.hasAlarmMetadata()) {
    query["AlarmMetadata"] = request.alarmMetadata();
  }

  if (!!request.hasApprovalType()) {
    query["ApprovalType"] = request.approvalType();
  }

  if (!!request.hasBuildParameters()) {
    query["BuildParameters"] = request.buildParameters();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasComplianceMetadataShrink()) {
    query["ComplianceMetadata"] = request.complianceMetadataShrink();
  }

  if (!!request.hasDeployMetadata()) {
    query["DeployMetadata"] = request.deployMetadata();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.deployType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasIsSupportOperated()) {
    query["IsSupportOperated"] = request.isSupportOperated();
  }

  if (!!request.hasLicenseMetadata()) {
    query["LicenseMetadata"] = request.licenseMetadata();
  }

  if (!!request.hasLogMetadata()) {
    query["LogMetadata"] = request.logMetadata();
  }

  if (!!request.hasOperationMetadata()) {
    query["OperationMetadata"] = request.operationMetadata();
  }

  if (!!request.hasPolicyNames()) {
    query["PolicyNames"] = request.policyNames();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResellable()) {
    query["Resellable"] = request.resellable();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceInfo()) {
    query["ServiceInfo"] = request.serviceInfo();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.serviceType();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.shareType();
  }

  if (!!request.hasSourceServiceId()) {
    query["SourceServiceId"] = request.sourceServiceId();
  }

  if (!!request.hasSourceServiceVersion()) {
    query["SourceServiceVersion"] = request.sourceServiceVersion();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTenantType()) {
    query["TenantType"] = request.tenantType();
  }

  if (!!request.hasTrialDuration()) {
    query["TrialDuration"] = request.trialDuration();
  }

  if (!!request.hasUpgradeMetadata()) {
    query["UpgradeMetadata"] = request.upgradeMetadata();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.versionName();
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
 * @summary Creates a service.
 *
 * @param request CreateServiceRequest
 * @return CreateServiceResponse
 */
CreateServiceResponse Client::createService(const CreateServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceWithOptions(request, runtime);
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
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasSpecificationName()) {
    query["SpecificationName"] = request.specificationName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Create service test case.
 *
 * @param request CreateServiceTestCaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceTestCaseResponse
 */
CreateServiceTestCaseResponse Client::createServiceTestCaseWithOptions(const CreateServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTestCaseName()) {
    query["TestCaseName"] = request.testCaseName();
  }

  if (!!request.hasTestConfig()) {
    query["TestConfig"] = request.testConfig();
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
 * @summary Create service test case.
 *
 * @param request CreateServiceTestCaseRequest
 * @return CreateServiceTestCaseResponse
 */
CreateServiceTestCaseResponse Client::createServiceTestCase(const CreateServiceTestCaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceTestCaseWithOptions(request, runtime);
}

/**
 * @summary Create service test task
 *
 * @param request CreateServiceTestTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceTestTaskResponse
 */
CreateServiceTestTaskResponse Client::createServiceTestTaskWithOptions(const CreateServiceTestTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskRegionId()) {
    query["TaskRegionId"] = request.taskRegionId();
  }

  if (!!request.hasTestCaseIds()) {
    query["TestCaseIds"] = request.testCaseIds();
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
 * @summary Create service test task
 *
 * @param request CreateServiceTestTaskRequest
 * @return CreateServiceTestTaskResponse
 */
CreateServiceTestTaskResponse Client::createServiceTestTask(const CreateServiceTestTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceTestTaskWithOptions(request, runtime);
}

/**
 * @summary Create  Service resell application.
 *
 * @param request CreateServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceUsageResponse
 */
CreateServiceUsageResponse Client::createServiceUsageWithOptions(const CreateServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
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
 * @summary Create  Service resell application.
 *
 * @param request CreateServiceUsageRequest
 * @return CreateServiceUsageResponse
 */
CreateServiceUsageResponse Client::createServiceUsage(const CreateServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceUsageWithOptions(request, runtime);
}

/**
 * @summary 注册成为服务商
 *
 * @param request CreateSupplierRegistrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSupplierRegistrationResponse
 */
CreateSupplierRegistrationResponse Client::createSupplierRegistrationWithOptions(const CreateSupplierRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactEmail()) {
    query["ContactEmail"] = request.contactEmail();
  }

  if (!!request.hasContactNumber()) {
    query["ContactNumber"] = request.contactNumber();
  }

  if (!!request.hasContactPerson()) {
    query["ContactPerson"] = request.contactPerson();
  }

  if (!!request.hasContactPersonTitle()) {
    query["ContactPersonTitle"] = request.contactPersonTitle();
  }

  if (!!request.hasEnableResellerMode()) {
    query["EnableResellerMode"] = request.enableResellerMode();
  }

  if (!!request.hasProductAnnualRevenue()) {
    query["ProductAnnualRevenue"] = request.productAnnualRevenue();
  }

  if (!!request.hasProductBusiness()) {
    query["ProductBusiness"] = request.productBusiness();
  }

  if (!!request.hasProductDeliveryTypes()) {
    query["ProductDeliveryTypes"] = request.productDeliveryTypes();
  }

  if (!!request.hasProductPublishTime()) {
    query["ProductPublishTime"] = request.productPublishTime();
  }

  if (!!request.hasProductSellTypes()) {
    query["ProductSellTypes"] = request.productSellTypes();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResellBusinessDesc()) {
    query["ResellBusinessDesc"] = request.resellBusinessDesc();
  }

  if (!!request.hasSuggestion()) {
    query["Suggestion"] = request.suggestion();
  }

  if (!!request.hasSupplierDesc()) {
    query["SupplierDesc"] = request.supplierDesc();
  }

  if (!!request.hasSupplierLogo()) {
    query["SupplierLogo"] = request.supplierLogo();
  }

  if (!!request.hasSupplierName()) {
    query["SupplierName"] = request.supplierName();
  }

  if (!!request.hasSupplierNameEn()) {
    query["SupplierNameEn"] = request.supplierNameEn();
  }

  if (!!request.hasSupplierUrl()) {
    query["SupplierUrl"] = request.supplierUrl();
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
 * @summary 注册成为服务商
 *
 * @param request CreateSupplierRegistrationRequest
 * @return CreateSupplierRegistrationResponse
 */
CreateSupplierRegistrationResponse Client::createSupplierRegistration(const CreateSupplierRegistrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSupplierRegistrationWithOptions(request, runtime);
}

/**
 * @summary 删除Acr镜像仓库
 *
 * @param request DeleteAcrImageRepositoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAcrImageRepositoriesResponse
 */
DeleteAcrImageRepositoriesResponse Client::deleteAcrImageRepositoriesWithOptions(const DeleteAcrImageRepositoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.artifactType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
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
 * @summary 删除Acr镜像仓库
 *
 * @param request DeleteAcrImageRepositoriesRequest
 * @return DeleteAcrImageRepositoriesResponse
 */
DeleteAcrImageRepositoriesResponse Client::deleteAcrImageRepositories(const DeleteAcrImageRepositoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAcrImageRepositoriesWithOptions(request, runtime);
}

/**
 * @summary 删除Acr容器镜像版本
 *
 * @param request DeleteAcrImageTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAcrImageTagsResponse
 */
DeleteAcrImageTagsResponse Client::deleteAcrImageTagsWithOptions(const DeleteAcrImageTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.artifactType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary 删除Acr容器镜像版本
 *
 * @param request DeleteAcrImageTagsRequest
 * @return DeleteAcrImageTagsResponse
 */
DeleteAcrImageTagsResponse Client::deleteAcrImageTags(const DeleteAcrImageTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAcrImageTagsWithOptions(request, runtime);
}

/**
 * @summary Deletes an artifact.
 *
 * @param request DeleteArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteArtifactResponse
 */
DeleteArtifactResponse Client::deleteArtifactWithOptions(const DeleteArtifactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.artifactId();
  }

  if (!!request.hasArtifactVersion()) {
    query["ArtifactVersion"] = request.artifactVersion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
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
 * @summary Deletes an artifact.
 *
 * @param request DeleteArtifactRequest
 * @return DeleteArtifactResponse
 */
DeleteArtifactResponse Client::deleteArtifact(const DeleteArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteArtifactWithOptions(request, runtime);
}

/**
 * @summary Deletes a service.
 *
 * @param request DeleteServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteServiceWithOptions(const DeleteServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
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
 * @summary Deletes a service.
 *
 * @param request DeleteServiceRequest
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteService(const DeleteServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes a service instance.
 *
 * @param request DeleteServiceInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceInstancesResponse
 */
DeleteServiceInstancesResponse Client::deleteServiceInstancesWithOptions(const DeleteServiceInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary Deletes a service instance.
 *
 * @param request DeleteServiceInstancesRequest
 * @return DeleteServiceInstancesResponse
 */
DeleteServiceInstancesResponse Client::deleteServiceInstances(const DeleteServiceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceInstancesWithOptions(request, runtime);
}

/**
 * @summary Delete service test configuration
 *
 * @param request DeleteServiceTestCaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceTestCaseResponse
 */
DeleteServiceTestCaseResponse Client::deleteServiceTestCaseWithOptions(const DeleteServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTestCaseId()) {
    query["TestCaseId"] = request.testCaseId();
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
 * @summary Delete service test configuration
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
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary 生成默认服务测试配置
 *
 * @param request GenerateDefaultServiceTestConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateDefaultServiceTestConfigResponse
 */
GenerateDefaultServiceTestConfigResponse Client::generateDefaultServiceTestConfigWithOptions(const GenerateDefaultServiceTestConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
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
 * @summary 生成默认服务测试配置
 *
 * @param request GenerateDefaultServiceTestConfigRequest
 * @return GenerateDefaultServiceTestConfigResponse
 */
GenerateDefaultServiceTestConfigResponse Client::generateDefaultServiceTestConfig(const GenerateDefaultServiceTestConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateDefaultServiceTestConfigWithOptions(request, runtime);
}

/**
 * @summary 生成并校验服务创建stack所需要
 *
 * @param request GenerateServicePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateServicePolicyResponse
 */
GenerateServicePolicyResponse Client::generateServicePolicyWithOptions(const GenerateServicePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationTypes()) {
    query["OperationTypes"] = request.operationTypes();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTrialType()) {
    query["TrialType"] = request.trialType();
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
 * @summary 生成并校验服务创建stack所需要
 *
 * @param request GenerateServicePolicyRequest
 * @return GenerateServicePolicyResponse
 */
GenerateServicePolicyResponse Client::generateServicePolicy(const GenerateServicePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateServicePolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a deployment package.
 *
 * @param request GetArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactResponse
 */
GetArtifactResponse Client::getArtifactWithOptions(const GetArtifactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.artifactId();
  }

  if (!!request.hasArtifactName()) {
    query["ArtifactName"] = request.artifactName();
  }

  if (!!request.hasArtifactVersion()) {
    query["ArtifactVersion"] = request.artifactVersion();
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
 * @summary Queries the information about a deployment package.
 *
 * @param request GetArtifactRequest
 * @return GetArtifactResponse
 */
GetArtifactResponse Client::getArtifact(const GetArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArtifactWithOptions(request, runtime);
}

/**
 * @summary Queries the credentials that are required to upload a deployment package.
 *
 * @param request GetArtifactRepositoryCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactRepositoryCredentialsResponse
 */
GetArtifactRepositoryCredentialsResponse Client::getArtifactRepositoryCredentialsWithOptions(const GetArtifactRepositoryCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.artifactType();
  }

  if (!!request.hasDeployRegionId()) {
    query["DeployRegionId"] = request.deployRegionId();
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
 * @summary Queries the credentials that are required to upload a deployment package.
 *
 * @param request GetArtifactRepositoryCredentialsRequest
 * @return GetArtifactRepositoryCredentialsResponse
 */
GetArtifactRepositoryCredentialsResponse Client::getArtifactRepositoryCredentials(const GetArtifactRepositoryCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArtifactRepositoryCredentialsWithOptions(request, runtime);
}

/**
 * @summary 根据地域参数获取地域可用区列表
 *
 * @param request GetNetworkAvailableZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkAvailableZonesResponse
 */
GetNetworkAvailableZonesResponse Client::getNetworkAvailableZonesWithOptions(const GetNetworkAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsPoc()) {
    body["IsPoc"] = request.isPoc();
  }

  if (!!request.hasNetworkRegionId()) {
    body["NetworkRegionId"] = request.networkRegionId();
  }

  if (!!request.hasPrivateVpcConnectionMode()) {
    body["PrivateVpcConnectionMode"] = request.privateVpcConnectionMode();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceInstanceEndpointServiceType()) {
    body["ServiceInstanceEndpointServiceType"] = request.serviceInstanceEndpointServiceType();
  }

  if (!!request.hasServiceRegionId()) {
    body["ServiceRegionId"] = request.serviceRegionId();
  }

  if (!!request.hasServiceVersion()) {
    body["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasZoneId()) {
    body["ZoneId"] = request.zoneId();
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
 * @summary 根据地域参数获取地域可用区列表
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
  if (!!request.hasFilterAliUid()) {
    query["FilterAliUid"] = request.filterAliUid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasSharedAccountType()) {
    query["SharedAccountType"] = request.sharedAccountType();
  }

  if (!!request.hasShowDetail()) {
    query["ShowDetail"] = request.showDetail();
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
    request.setCommodityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.commodity(), "Commodity", "json"));
  }

  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCommodityShrink()) {
    query["Commodity"] = request.commodityShrink();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasSpecificationName()) {
    query["SpecificationName"] = request.specificationName();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
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
 * @summary Queries the information about a service instance.
 *
 * @param request GetServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceInstanceResponse
 */
GetServiceInstanceResponse Client::getServiceInstanceWithOptions(const GetServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary Queries the information about a service instance.
 *
 * @param request GetServiceInstanceRequest
 * @return GetServiceInstanceResponse
 */
GetServiceInstanceResponse Client::getServiceInstance(const GetServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceInstanceWithOptions(request, runtime);
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
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
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
 * @summary Get service registration detail.
 *
 * @param request GetServiceRegistrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceRegistrationResponse
 */
GetServiceRegistrationResponse Client::getServiceRegistrationWithOptions(const GetServiceRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegistrationId()) {
    query["RegistrationId"] = request.registrationId();
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
 * @summary Get service registration detail.
 *
 * @param request GetServiceRegistrationRequest
 * @return GetServiceRegistrationResponse
 */
GetServiceRegistrationResponse Client::getServiceRegistration(const GetServiceRegistrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceRegistrationWithOptions(request, runtime);
}

/**
 * @summary 查询服务模板存在的规范问题
 *
 * @param request GetServiceTemplateCriterionIssuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceTemplateCriterionIssuesResponse
 */
GetServiceTemplateCriterionIssuesResponse Client::getServiceTemplateCriterionIssuesWithOptions(const GetServiceTemplateCriterionIssuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
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
 * @summary 查询服务模板存在的规范问题
 *
 * @param request GetServiceTemplateCriterionIssuesRequest
 * @return GetServiceTemplateCriterionIssuesResponse
 */
GetServiceTemplateCriterionIssuesResponse Client::getServiceTemplateCriterionIssues(const GetServiceTemplateCriterionIssuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceTemplateCriterionIssuesWithOptions(request, runtime);
}

/**
 * @summary Queries the valid values of parameters in a Resource Orchestration Service (ROS) template.
 *
 * @param request GetServiceTemplateParameterConstraintsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceTemplateParameterConstraintsResponse
 */
GetServiceTemplateParameterConstraintsResponse Client::getServiceTemplateParameterConstraintsWithOptions(const GetServiceTemplateParameterConstraintsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeployRegionId()) {
    query["DeployRegionId"] = request.deployRegionId();
  }

  if (!!request.hasEnablePrivateVpcConnection()) {
    query["EnablePrivateVpcConnection"] = request.enablePrivateVpcConnection();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
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
 * @summary Queries the valid values of parameters in a Resource Orchestration Service (ROS) template.
 *
 * @param request GetServiceTemplateParameterConstraintsRequest
 * @return GetServiceTemplateParameterConstraintsResponse
 */
GetServiceTemplateParameterConstraintsResponse Client::getServiceTemplateParameterConstraints(const GetServiceTemplateParameterConstraintsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceTemplateParameterConstraintsWithOptions(request, runtime);
}

/**
 * @summary Get the execution status of Cases in the service test task
 *
 * @param request GetServiceTestTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceTestTaskResponse
 */
GetServiceTestTaskResponse Client::getServiceTestTaskWithOptions(const GetServiceTestTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
 * @summary Get the execution status of Cases in the service test task
 *
 * @param request GetServiceTestTaskRequest
 * @return GetServiceTestTaskResponse
 */
GetServiceTestTaskResponse Client::getServiceTestTask(const GetServiceTestTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceTestTaskWithOptions(request, runtime);
}

/**
 * @summary Get service provider information
 *
 * @param request GetSupplierInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSupplierInformationResponse
 */
GetSupplierInformationResponse Client::getSupplierInformationWithOptions(const GetSupplierInformationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
 * @summary Get service provider information
 *
 * @param request GetSupplierInformationRequest
 * @return GetSupplierInformationResponse
 */
GetSupplierInformationResponse Client::getSupplierInformation(const GetSupplierInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupplierInformationWithOptions(request, runtime);
}

/**
 * @summary Obtain the AccessKey pair of uploaded files.
 *
 * @param request GetUploadCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadCredentialsResponse
 */
GetUploadCredentialsResponse Client::getUploadCredentialsWithOptions(const GetUploadCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.visibility();
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
 * @summary Obtain the AccessKey pair of uploaded files.
 *
 * @param request GetUploadCredentialsRequest
 * @return GetUploadCredentialsResponse
 */
GetUploadCredentialsResponse Client::getUploadCredentials(const GetUploadCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadCredentialsWithOptions(request, runtime);
}

/**
 * @summary Launch service
 *
 * @description 需要上线的服务必须为已通过审核的服务。
 *
 * @param request LaunchServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LaunchServiceResponse
 */
LaunchServiceResponse Client::launchServiceWithOptions(const LaunchServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategories()) {
    query["Categories"] = request.categories();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRecommend()) {
    query["Recommend"] = request.recommend();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
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
 * @summary Launch service
 *
 * @description 需要上线的服务必须为已通过审核的服务。
 *
 * @param request LaunchServiceRequest
 * @return LaunchServiceResponse
 */
LaunchServiceResponse Client::launchService(const LaunchServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return launchServiceWithOptions(request, runtime);
}

/**
 * @summary Queries a list of images uploaded to Container Registry.
 *
 * @param request ListAcrImageRepositoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAcrImageRepositoriesResponse
 */
ListAcrImageRepositoriesResponse Client::listAcrImageRepositoriesWithOptions(const ListAcrImageRepositoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.artifactType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
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
 * @summary Queries a list of images uploaded to Container Registry.
 *
 * @param request ListAcrImageRepositoriesRequest
 * @return ListAcrImageRepositoriesResponse
 */
ListAcrImageRepositoriesResponse Client::listAcrImageRepositories(const ListAcrImageRepositoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAcrImageRepositoriesWithOptions(request, runtime);
}

/**
 * @summary Queries the versions of images that are uploaded to the image repository.
 *
 * @param request ListAcrImageTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAcrImageTagsResponse
 */
ListAcrImageTagsResponse Client::listAcrImageTagsWithOptions(const ListAcrImageTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.artifactType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
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
 * @summary Queries the versions of images that are uploaded to the image repository.
 *
 * @param request ListAcrImageTagsRequest
 * @return ListAcrImageTagsResponse
 */
ListAcrImageTagsResponse Client::listAcrImageTags(const ListAcrImageTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAcrImageTagsWithOptions(request, runtime);
}

/**
 * @summary 查询部署实例、升级以及应用的日志
 *
 * @param request ListArtifactBuildLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactBuildLogsResponse
 */
ListArtifactBuildLogsResponse Client::listArtifactBuildLogsWithOptions(const ListArtifactBuildLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.artifactId();
  }

  if (!!request.hasArtifactVersion()) {
    query["ArtifactVersion"] = request.artifactVersion();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
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
 * @summary 查询部署实例、升级以及应用的日志
 *
 * @param request ListArtifactBuildLogsRequest
 * @return ListArtifactBuildLogsResponse
 */
ListArtifactBuildLogsResponse Client::listArtifactBuildLogs(const ListArtifactBuildLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactBuildLogsWithOptions(request, runtime);
}

/**
 * @summary Get the list of artifact security risks
 *
 * @param request ListArtifactRisksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactRisksResponse
 */
ListArtifactRisksResponse Client::listArtifactRisksWithOptions(const ListArtifactRisksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.artifactId();
  }

  if (!!request.hasArtifactVersion()) {
    query["ArtifactVersion"] = request.artifactVersion();
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
 * @summary Get the list of artifact security risks
 *
 * @param request ListArtifactRisksRequest
 * @return ListArtifactRisksResponse
 */
ListArtifactRisksResponse Client::listArtifactRisks(const ListArtifactRisksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactRisksWithOptions(request, runtime);
}

/**
 * @summary Queries the version information about a deployment package.
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
    request.setFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filters(), "Filters", "json"));
  }

  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.artifactId();
  }

  if (!!request.hasFiltersShrink()) {
    query["Filters"] = request.filtersShrink();
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
 * @summary Queries the version information about a deployment package.
 *
 * @param request ListArtifactVersionsRequest
 * @return ListArtifactVersionsResponse
 */
ListArtifactVersionsResponse Client::listArtifactVersions(const ListArtifactVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of deployment packages.
 *
 * @param request ListArtifactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactsResponse
 */
ListArtifactsResponse Client::listArtifactsWithOptions(const ListArtifactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Queries a list of deployment packages.
 *
 * @param request ListArtifactsRequest
 * @return ListArtifactsResponse
 */
ListArtifactsResponse Client::listArtifacts(const ListArtifactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactsWithOptions(request, runtime);
}

/**
 * @summary Paginated query of distributor information list
 *
 * @param request ListResellersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResellersResponse
 */
ListResellersResponse Client::listResellersWithOptions(const ListResellersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
 * @summary Paginated query of distributor information list
 *
 * @param request ListResellersRequest
 * @return ListResellersResponse
 */
ListResellersResponse Client::listResellers(const ListResellersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResellersWithOptions(request, runtime);
}

/**
 * @summary 查询部署实例、升级以及应用的日志
 *
 * @param request ListServiceBuildLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceBuildLogsResponse
 */
ListServiceBuildLogsResponse Client::listServiceBuildLogsWithOptions(const ListServiceBuildLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
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
 * @summary 查询部署实例、升级以及应用的日志
 *
 * @param request ListServiceBuildLogsRequest
 * @return ListServiceBuildLogsResponse
 */
ListServiceBuildLogsResponse Client::listServiceBuildLogs(const ListServiceBuildLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceBuildLogsWithOptions(request, runtime);
}

/**
 * @summary Display service instance bill
 *
 * @param request ListServiceInstanceBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceBillResponse
 */
ListServiceInstanceBillResponse Client::listServiceInstanceBillWithOptions(const ListServiceInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasBillingDate()) {
    query["BillingDate"] = request.billingDate();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.granularity();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
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
 * @summary Display service instance bill
 *
 * @param request ListServiceInstanceBillRequest
 * @return ListServiceInstanceBillResponse
 */
ListServiceInstanceBillResponse Client::listServiceInstanceBill(const ListServiceInstanceBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceBillWithOptions(request, runtime);
}

/**
 * @summary Query service instance deployment details
 *
 * @param request ListServiceInstanceDeployDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceDeployDetailsResponse
 */
ListServiceInstanceDeployDetailsResponse Client::listServiceInstanceDeployDetailsWithOptions(const ListServiceInstanceDeployDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCycleTimeZone()) {
    query["CycleTimeZone"] = request.cycleTimeZone();
  }

  if (!!request.hasCycleType()) {
    query["CycleType"] = request.cycleType();
  }

  if (!!request.hasDimension()) {
    query["Dimension"] = request.dimension();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
 * @summary Query service instance deployment details
 *
 * @param request ListServiceInstanceDeployDetailsRequest
 * @return ListServiceInstanceDeployDetailsResponse
 */
ListServiceInstanceDeployDetailsResponse Client::listServiceInstanceDeployDetails(const ListServiceInstanceDeployDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceDeployDetailsWithOptions(request, runtime);
}

/**
 * @summary “Query logs at various levels, including service instance application, instance, and resource.”
 *
 * @param request ListServiceInstanceLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceLogsResponse
 */
ListServiceInstanceLogsResponse Client::listServiceInstanceLogsWithOptions(const ListServiceInstanceLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasLogSource()) {
    query["LogSource"] = request.logSource();
  }

  if (!!request.hasLogstore()) {
    query["Logstore"] = request.logstore();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
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
 * @summary “Query logs at various levels, including service instance application, instance, and resource.”
 *
 * @param request ListServiceInstanceLogsRequest
 * @return ListServiceInstanceLogsResponse
 */
ListServiceInstanceLogsResponse Client::listServiceInstanceLogs(const ListServiceInstanceLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceLogsWithOptions(request, runtime);
}

/**
 * @summary 查询服务实例资源
 *
 * @param request ListServiceInstanceResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceResourcesResponse
 */
ListServiceInstanceResourcesResponse Client::listServiceInstanceResourcesWithOptions(const ListServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
  }

  if (!!request.hasServiceInstanceResourceType()) {
    query["ServiceInstanceResourceType"] = request.serviceInstanceResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary 查询服务实例资源
 *
 * @param request ListServiceInstanceResourcesRequest
 * @return ListServiceInstanceResourcesResponse
 */
ListServiceInstanceResourcesResponse Client::listServiceInstanceResources(const ListServiceInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceResourcesWithOptions(request, runtime);
}

/**
 * @summary View the upgrade history of a service instance
 *
 * @param request ListServiceInstanceUpgradeHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceUpgradeHistoryResponse
 */
ListServiceInstanceUpgradeHistoryResponse Client::listServiceInstanceUpgradeHistoryWithOptions(const ListServiceInstanceUpgradeHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary View the upgrade history of a service instance
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
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasShowDeleted()) {
    query["ShowDeleted"] = request.showDeleted();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Query service registrations.
 *
 * @param request ListServiceRegistrationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceRegistrationsResponse
 */
ListServiceRegistrationsResponse Client::listServiceRegistrationsWithOptions(const ListServiceRegistrationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
 * @summary Query service registrations.
 *
 * @param request ListServiceRegistrationsRequest
 * @return ListServiceRegistrationsResponse
 */
ListServiceRegistrationsResponse Client::listServiceRegistrations(const ListServiceRegistrationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceRegistrationsWithOptions(request, runtime);
}

/**
 * @summary 调用ListServiceSharedAccounts查看服务共享账号列表。
 *
 * @param request ListServiceSharedAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceSharedAccountsResponse
 */
ListServiceSharedAccountsResponse Client::listServiceSharedAccountsWithOptions(const ListServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPermission()) {
    query["Permission"] = request.permission();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
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
 * @summary 调用ListServiceSharedAccounts查看服务共享账号列表。
 *
 * @param request ListServiceSharedAccountsRequest
 * @return ListServiceSharedAccountsResponse
 */
ListServiceSharedAccountsResponse Client::listServiceSharedAccounts(const ListServiceSharedAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceSharedAccountsWithOptions(request, runtime);
}

/**
 * @summary Service test case list
 *
 * @param request ListServiceTestCasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceTestCasesResponse
 */
ListServiceTestCasesResponse Client::listServiceTestCasesWithOptions(const ListServiceTestCasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
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
 * @summary Service test case list
 *
 * @param request ListServiceTestCasesRequest
 * @return ListServiceTestCasesResponse
 */
ListServiceTestCasesResponse Client::listServiceTestCases(const ListServiceTestCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceTestCasesWithOptions(request, runtime);
}

/**
 * @summary Get service test real-time logs
 *
 * @param request ListServiceTestTaskLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceTestTaskLogsResponse
 */
ListServiceTestTaskLogsResponse Client::listServiceTestTaskLogsWithOptions(const ListServiceTestTaskLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
 * @summary Get service test real-time logs
 *
 * @param request ListServiceTestTaskLogsRequest
 * @return ListServiceTestTaskLogsResponse
 */
ListServiceTestTaskLogsResponse Client::listServiceTestTaskLogs(const ListServiceTestTaskLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceTestTaskLogsWithOptions(request, runtime);
}

/**
 * @summary 获取任务执行列表
 *
 * @param request ListServiceTestTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceTestTasksResponse
 */
ListServiceTestTasksResponse Client::listServiceTestTasksWithOptions(const ListServiceTestTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
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
 * @summary 获取任务执行列表
 *
 * @param request ListServiceTestTasksRequest
 * @return ListServiceTestTasksResponse
 */
ListServiceTestTasksResponse Client::listServiceTestTasks(const ListServiceTestTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceTestTasksWithOptions(request, runtime);
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
  if (!!request.hasAllVersions()) {
    query["AllVersions"] = request.allVersions();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Query the list of service provider onboarding reviews
 *
 * @param request ListSupplierRegistrationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSupplierRegistrationsResponse
 */
ListSupplierRegistrationsResponse Client::listSupplierRegistrationsWithOptions(const ListSupplierRegistrationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
 * @summary Query the list of service provider onboarding reviews
 *
 * @param request ListSupplierRegistrationsRequest
 * @return ListSupplierRegistrationsResponse
 */
ListSupplierRegistrationsResponse Client::listSupplierRegistrations(const ListSupplierRegistrationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSupplierRegistrationsWithOptions(request, runtime);
}

/**
 * @summary Query tag key list
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
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
 * @summary Query tag key list
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Query resource tags
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
 * @summary Query resource tags
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Query tag value list
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
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
 * @summary Query tag value list
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource information about a service instance.
 *
 * @param request ModifyServiceInstanceResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyServiceInstanceResourcesResponse
 */
ModifyServiceInstanceResourcesResponse Client::modifyServiceInstanceResourcesWithOptions(const ModifyServiceInstanceResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
  }

  if (!!request.hasServiceInstanceResourcesAction()) {
    query["ServiceInstanceResourcesAction"] = request.serviceInstanceResourcesAction();
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
 * @summary Modifies the resource information about a service instance.
 *
 * @param request ModifyServiceInstanceResourcesRequest
 * @return ModifyServiceInstanceResourcesResponse
 */
ModifyServiceInstanceResourcesResponse Client::modifyServiceInstanceResources(const ModifyServiceInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyServiceInstanceResourcesWithOptions(request, runtime);
}

/**
 * @summary Pre-release service
 *
 * @param request PreLaunchServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreLaunchServiceResponse
 */
PreLaunchServiceResponse Client::preLaunchServiceWithOptions(const PreLaunchServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
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
 * @summary Pre-release service
 *
 * @param request PreLaunchServiceRequest
 * @return PreLaunchServiceResponse
 */
PreLaunchServiceResponse Client::preLaunchService(const PreLaunchServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preLaunchServiceWithOptions(request, runtime);
}

/**
 * @summary Pushes metering data of an Alibaba Cloud Marketplace commodity.
 *
 * @param request PushMeteringDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushMeteringDataResponse
 */
PushMeteringDataResponse Client::pushMeteringDataWithOptions(const PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMetering()) {
    query["Metering"] = request.metering();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary Pushes metering data of an Alibaba Cloud Marketplace commodity.
 *
 * @param request PushMeteringDataRequest
 * @return PushMeteringDataResponse
 */
PushMeteringDataResponse Client::pushMeteringData(const PushMeteringDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushMeteringDataWithOptions(request, runtime);
}

/**
 * @summary Registers an artifact.
 *
 * @param request RegisterServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterServiceResponse
 */
RegisterServiceResponse Client::registerServiceWithOptions(const RegisterServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
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
 * @summary Registers an artifact.
 *
 * @param request RegisterServiceRequest
 * @return RegisterServiceResponse
 */
RegisterServiceResponse Client::registerService(const RegisterServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerServiceWithOptions(request, runtime);
}

/**
 * @summary Reject service usage.
 *
 * @param request RejectServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectServiceUsageResponse
 */
RejectServiceUsageResponse Client::rejectServiceUsageWithOptions(const RejectServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasComments()) {
    query["Comments"] = request.comments();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserAliUid()) {
    query["UserAliUid"] = request.userAliUid();
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
 * @summary Reject service usage.
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
 * @param request ReleaseArtifactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseArtifactResponse
 */
ReleaseArtifactResponse Client::releaseArtifactWithOptions(const ReleaseArtifactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.artifactId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
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
 * @param request ReleaseArtifactRequest
 * @return ReleaseArtifactResponse
 */
ReleaseArtifactResponse Client::releaseArtifact(const ReleaseArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseArtifactWithOptions(request, runtime);
}

/**
 * @summary Remove  service shared account.
 *
 * @param request RemoveServiceSharedAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveServiceSharedAccountsResponse
 */
RemoveServiceSharedAccountsResponse Client::removeServiceSharedAccountsWithOptions(const RemoveServiceSharedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserAliUids()) {
    query["UserAliUids"] = request.userAliUids();
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
 * @summary Remove  service shared account.
 *
 * @param request RemoveServiceSharedAccountsRequest
 * @return RemoveServiceSharedAccountsResponse
 */
RemoveServiceSharedAccountsResponse Client::removeServiceSharedAccounts(const RemoveServiceSharedAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeServiceSharedAccountsWithOptions(request, runtime);
}

/**
 * @summary When the service instance is Deployed, call the RestartServiceInstance interface to restart the service instance.
 *
 * @param request RestartServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartServiceInstanceResponse
 */
RestartServiceInstanceResponse Client::restartServiceInstanceWithOptions(const RestartServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary When the service instance is Deployed, call the RestartServiceInstance interface to restart the service instance.
 *
 * @param request RestartServiceInstanceRequest
 * @return RestartServiceInstanceResponse
 */
RestartServiceInstanceResponse Client::restartServiceInstance(const RestartServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Rollback Service Instance
 *
 * @param request RollbackServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackServiceInstanceResponse
 */
RollbackServiceInstanceResponse Client::rollbackServiceInstanceWithOptions(const RollbackServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary Rollback Service Instance
 *
 * @param request RollbackServiceInstanceRequest
 * @return RollbackServiceInstanceResponse
 */
RollbackServiceInstanceResponse Client::rollbackServiceInstance(const RollbackServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary When the service instance status is Stopped (Stopped) or StartFailed (Startup failed), the StartServiceInstance interface is invoked to start the service instance.
 *
 * @param request StartServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartServiceInstanceResponse
 */
StartServiceInstanceResponse Client::startServiceInstanceWithOptions(const StartServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary When the service instance status is Stopped (Stopped) or StartFailed (Startup failed), the StartServiceInstance interface is invoked to start the service instance.
 *
 * @param request StartServiceInstanceRequest
 * @return StartServiceInstanceResponse
 */
StartServiceInstanceResponse Client::startServiceInstance(const StartServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary When the service instance is Deployed and StopFailed, call the StopServiceInstance interface to stop the service instance.
 *
 * @param request StopServiceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopServiceInstanceResponse
 */
StopServiceInstanceResponse Client::stopServiceInstanceWithOptions(const StopServiceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary When the service instance is Deployed and StopFailed, call the StopServiceInstance interface to stop the service instance.
 *
 * @param request StopServiceInstanceRequest
 * @return StopServiceInstanceResponse
 */
StopServiceInstanceResponse Client::stopServiceInstance(const StopServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Tag a resource
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
 * @summary Tag a resource
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbind resource from tag
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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
 * @summary Unbind resource from tag
 *
 * @param request UnTagResourcesRequest
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResources(const UnTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates a deployment package.
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
    request.setArtifactBuildPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.artifactBuildProperty(), "ArtifactBuildProperty", "json"));
  }

  if (!!tmpReq.hasArtifactProperty()) {
    request.setArtifactPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.artifactProperty(), "ArtifactProperty", "json"));
  }

  json query = {};
  if (!!request.hasArtifactBuildPropertyShrink()) {
    query["ArtifactBuildProperty"] = request.artifactBuildPropertyShrink();
  }

  if (!!request.hasArtifactId()) {
    query["ArtifactId"] = request.artifactId();
  }

  if (!!request.hasArtifactPropertyShrink()) {
    query["ArtifactProperty"] = request.artifactPropertyShrink();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasPermissionType()) {
    query["PermissionType"] = request.permissionType();
  }

  if (!!request.hasSupportRegionIds()) {
    query["SupportRegionIds"] = request.supportRegionIds();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.versionName();
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
 * @summary Updates a deployment package.
 *
 * @param request UpdateArtifactRequest
 * @return UpdateArtifactResponse
 */
UpdateArtifactResponse Client::updateArtifact(const UpdateArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateArtifactWithOptions(request, runtime);
}

/**
 * @summary Update a service.
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
    request.setCommodityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.commodity(), "Commodity", "json"));
  }

  if (!!tmpReq.hasComplianceMetadata()) {
    request.setComplianceMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.complianceMetadata(), "ComplianceMetadata", "json"));
  }

  if (!!tmpReq.hasUpdateOption()) {
    request.setUpdateOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.updateOption(), "UpdateOption", "json"));
  }

  json query = {};
  if (!!request.hasAlarmMetadata()) {
    query["AlarmMetadata"] = request.alarmMetadata();
  }

  if (!!request.hasApprovalType()) {
    query["ApprovalType"] = request.approvalType();
  }

  if (!!request.hasBuildParameters()) {
    query["BuildParameters"] = request.buildParameters();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCommodityShrink()) {
    query["Commodity"] = request.commodityShrink();
  }

  if (!!request.hasComplianceMetadataShrink()) {
    query["ComplianceMetadata"] = request.complianceMetadataShrink();
  }

  if (!!request.hasDeployMetadata()) {
    query["DeployMetadata"] = request.deployMetadata();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.deployType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasIsSupportOperated()) {
    query["IsSupportOperated"] = request.isSupportOperated();
  }

  if (!!request.hasLicenseMetadata()) {
    query["LicenseMetadata"] = request.licenseMetadata();
  }

  if (!!request.hasLogMetadata()) {
    query["LogMetadata"] = request.logMetadata();
  }

  if (!!request.hasOperationMetadata()) {
    query["OperationMetadata"] = request.operationMetadata();
  }

  if (!!request.hasPolicyNames()) {
    query["PolicyNames"] = request.policyNames();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResellable()) {
    query["Resellable"] = request.resellable();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceInfo()) {
    query["ServiceInfo"] = request.serviceInfo();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.serviceType();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.shareType();
  }

  if (!!request.hasTenantType()) {
    query["TenantType"] = request.tenantType();
  }

  if (!!request.hasTrialDuration()) {
    query["TrialDuration"] = request.trialDuration();
  }

  if (!!request.hasUpdateOptionShrink()) {
    query["UpdateOption"] = request.updateOptionShrink();
  }

  if (!!request.hasUpgradeMetadata()) {
    query["UpgradeMetadata"] = request.upgradeMetadata();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.versionName();
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
 * @summary Update a service.
 *
 * @param request UpdateServiceRequest
 * @return UpdateServiceResponse
 */
UpdateServiceResponse Client::updateService(const UpdateServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceWithOptions(request, runtime);
}

/**
 * @summary Updates the properties of a service instance.
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
    request.setLicenseDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.licenseData(), "LicenseData", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLicenseDataShrink()) {
    query["LicenseData"] = request.licenseDataShrink();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.reason();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary Updates the properties of a service instance.
 *
 * @param request UpdateServiceInstanceAttributeRequest
 * @return UpdateServiceInstanceAttributeResponse
 */
UpdateServiceInstanceAttributeResponse Client::updateServiceInstanceAttribute(const UpdateServiceInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of a service instance.
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
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEnableUserPrometheus()) {
    query["EnableUserPrometheus"] = request.enableUserPrometheus();
  }

  if (!!request.hasOperationName()) {
    query["OperationName"] = request.operationName();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasPredefinedParametersName()) {
    query["PredefinedParametersName"] = request.predefinedParametersName();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
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
 * @summary Updates the configurations of a service instance.
 *
 * @param request UpdateServiceInstanceSpecRequest
 * @return UpdateServiceInstanceSpecResponse
 */
UpdateServiceInstanceSpecResponse Client::updateServiceInstanceSpec(const UpdateServiceInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary Modify Service Test Case
 *
 * @param request UpdateServiceTestCaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceTestCaseResponse
 */
UpdateServiceTestCaseResponse Client::updateServiceTestCaseWithOptions(const UpdateServiceTestCaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTestCaseId()) {
    query["TestCaseId"] = request.testCaseId();
  }

  if (!!request.hasTestCaseName()) {
    query["TestCaseName"] = request.testCaseName();
  }

  if (!!request.hasTestConfig()) {
    query["TestConfig"] = request.testConfig();
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
 * @summary Modify Service Test Case
 *
 * @param request UpdateServiceTestCaseRequest
 * @return UpdateServiceTestCaseResponse
 */
UpdateServiceTestCaseResponse Client::updateServiceTestCase(const UpdateServiceTestCaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceTestCaseWithOptions(request, runtime);
}

/**
 * @summary Update Service Sharing Permissions
 *
 * @param request UpdateSharedAccountPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSharedAccountPermissionResponse
 */
UpdateSharedAccountPermissionResponse Client::updateSharedAccountPermissionWithOptions(const UpdateSharedAccountPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasPermission()) {
    query["Permission"] = request.permission();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserAliUid()) {
    query["UserAliUid"] = request.userAliUid();
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
 * @summary Update Service Sharing Permissions
 *
 * @param request UpdateSharedAccountPermissionRequest
 * @return UpdateSharedAccountPermissionResponse
 */
UpdateSharedAccountPermissionResponse Client::updateSharedAccountPermission(const UpdateSharedAccountPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSharedAccountPermissionWithOptions(request, runtime);
}

/**
 * @summary Update the information of supplier.
 *
 * @param request UpdateSupplierInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSupplierInformationResponse
 */
UpdateSupplierInformationResponse Client::updateSupplierInformationWithOptions(const UpdateSupplierInformationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliverySettings()) {
    query["DeliverySettings"] = request.deliverySettings();
  }

  if (!!request.hasOperationIp()) {
    query["OperationIp"] = request.operationIp();
  }

  if (!!request.hasOperationMfaPresent()) {
    query["OperationMfaPresent"] = request.operationMfaPresent();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSupplierDesc()) {
    query["SupplierDesc"] = request.supplierDesc();
  }

  if (!!request.hasSupplierLogo()) {
    query["SupplierLogo"] = request.supplierLogo();
  }

  if (!!request.hasSupplierUrl()) {
    query["SupplierUrl"] = request.supplierUrl();
  }

  if (!!request.hasSupportContacts()) {
    query["SupportContacts"] = request.supportContacts();
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
 * @summary Update the information of supplier.
 *
 * @param request UpdateSupplierInformationRequest
 * @return UpdateSupplierInformationResponse
 */
UpdateSupplierInformationResponse Client::updateSupplierInformation(const UpdateSupplierInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSupplierInformationWithOptions(request, runtime);
}

/**
 * @summary Upgrades a service instance.
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
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceInstanceId()) {
    query["ServiceInstanceId"] = request.serviceInstanceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
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
 * @summary Upgrades a service instance.
 *
 * @param request UpgradeServiceInstanceRequest
 * @return UpgradeServiceInstanceResponse
 */
UpgradeServiceInstanceResponse Client::upgradeServiceInstance(const UpgradeServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeServiceInstanceWithOptions(request, runtime);
}

/**
 * @summary Withdraw service version.
 *
 * @param request WithdrawServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WithdrawServiceResponse
 */
WithdrawServiceResponse Client::withdrawServiceWithOptions(const WithdrawServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
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
 * @summary Withdraw service version.
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