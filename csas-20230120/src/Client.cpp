#include <darabonba/Core.hpp>
#include <alibabacloud/Csas20230120.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Csas20230120::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Csas20230120
{

AlibabaCloud::Csas20230120::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("csas", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 挂载connector的应用
 *
 * @param tmpReq AttachApplication2ConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachApplication2ConnectorResponse
 */
AttachApplication2ConnectorResponse Client::attachApplication2ConnectorWithOptions(const AttachApplication2ConnectorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachApplication2ConnectorShrinkRequest request = AttachApplication2ConnectorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplicationIds()) {
    request.setApplicationIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.applicationIds(), "ApplicationIds", "json"));
  }

  json body = {};
  if (!!request.hasApplicationIdsShrink()) {
    body["ApplicationIds"] = request.applicationIdsShrink();
  }

  if (!!request.hasConnectorId()) {
    body["ConnectorId"] = request.connectorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AttachApplication2Connector"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachApplication2ConnectorResponse>();
}

/**
 * @summary 挂载connector的应用
 *
 * @param request AttachApplication2ConnectorRequest
 * @return AttachApplication2ConnectorResponse
 */
AttachApplication2ConnectorResponse Client::attachApplication2Connector(const AttachApplication2ConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachApplication2ConnectorWithOptions(request, runtime);
}

/**
 * @summary 挂载业务策略至指定审批流程
 *
 * @param request AttachPolicy2ApprovalProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachPolicy2ApprovalProcessResponse
 */
AttachPolicy2ApprovalProcessResponse Client::attachPolicy2ApprovalProcessWithOptions(const AttachPolicy2ApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  if (!!request.hasPolicyType()) {
    body["PolicyType"] = request.policyType();
  }

  if (!!request.hasProcessId()) {
    body["ProcessId"] = request.processId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AttachPolicy2ApprovalProcess"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachPolicy2ApprovalProcessResponse>();
}

/**
 * @summary 挂载业务策略至指定审批流程
 *
 * @param request AttachPolicy2ApprovalProcessRequest
 * @return AttachPolicy2ApprovalProcessResponse
 */
AttachPolicy2ApprovalProcessResponse Client::attachPolicy2ApprovalProcess(const AttachPolicy2ApprovalProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPolicy2ApprovalProcessWithOptions(request, runtime);
}

/**
 * @summary 创建审批流程
 *
 * @param tmpReq CreateApprovalProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApprovalProcessResponse
 */
CreateApprovalProcessResponse Client::createApprovalProcessWithOptions(const CreateApprovalProcessRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApprovalProcessShrinkRequest request = CreateApprovalProcessShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMatchSchemas()) {
    request.setMatchSchemasShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.matchSchemas(), "MatchSchemas", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasMatchSchemasShrink()) {
    body["MatchSchemas"] = request.matchSchemasShrink();
  }

  if (!!request.hasProcessName()) {
    body["ProcessName"] = request.processName();
  }

  json bodyFlat = {};
  if (!!request.hasProcessNodes()) {
    bodyFlat["ProcessNodes"] = request.processNodes();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateApprovalProcess"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApprovalProcessResponse>();
}

/**
 * @summary 创建审批流程
 *
 * @param request CreateApprovalProcessRequest
 * @return CreateApprovalProcessResponse
 */
CreateApprovalProcessResponse Client::createApprovalProcess(const CreateApprovalProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApprovalProcessWithOptions(request, runtime);
}

/**
 * @summary 创建自定义身份源用户
 *
 * @param request CreateClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientUserResponse
 */
CreateClientUserResponse Client::createClientUserWithOptions(const CreateClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasIdpConfigId()) {
    query["IdpConfigId"] = request.idpConfigId();
  }

  if (!!request.hasMobileNumber()) {
    query["MobileNumber"] = request.mobileNumber();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateClientUser"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClientUserResponse>();
}

/**
 * @summary 创建自定义身份源用户
 *
 * @param request CreateClientUserRequest
 * @return CreateClientUserResponse
 */
CreateClientUserResponse Client::createClientUser(const CreateClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientUserWithOptions(request, runtime);
}

/**
 * @summary 创建动态路由
 *
 * @param request CreateDynamicRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDynamicRouteResponse
 */
CreateDynamicRouteResponse Client::createDynamicRouteWithOptions(const CreateDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasApplicationIds()) {
    bodyFlat["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasApplicationType()) {
    body["ApplicationType"] = request.applicationType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDynamicRouteType()) {
    body["DynamicRouteType"] = request.dynamicRouteType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNextHop()) {
    body["NextHop"] = request.nextHop();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasRegionIds()) {
    bodyFlat["RegionIds"] = request.regionIds();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.tagIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDynamicRoute"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDynamicRouteResponse>();
}

/**
 * @summary 创建动态路由
 *
 * @param request CreateDynamicRouteRequest
 * @return CreateDynamicRouteResponse
 */
CreateDynamicRouteResponse Client::createDynamicRoute(const CreateDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary 创建加速策略
 *
 * @param request CreateEnterpriseAcceleratePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnterpriseAcceleratePolicyResponse
 */
CreateEnterpriseAcceleratePolicyResponse Client::createEnterpriseAcceleratePolicyWithOptions(const CreateEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccelerationType()) {
    body["AccelerationType"] = request.accelerationType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasShowInClient()) {
    body["ShowInClient"] = request.showInClient();
  }

  if (!!request.hasUpstreamHost()) {
    body["UpstreamHost"] = request.upstreamHost();
  }

  if (!!request.hasUpstreamPort()) {
    body["UpstreamPort"] = request.upstreamPort();
  }

  if (!!request.hasUpstreamType()) {
    body["UpstreamType"] = request.upstreamType();
  }

  if (!!request.hasUserAttributeGroup()) {
    body["UserAttributeGroup"] = request.userAttributeGroup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEnterpriseAcceleratePolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnterpriseAcceleratePolicyResponse>();
}

/**
 * @summary 创建加速策略
 *
 * @param request CreateEnterpriseAcceleratePolicyRequest
 * @return CreateEnterpriseAcceleratePolicyResponse
 */
CreateEnterpriseAcceleratePolicyResponse Client::createEnterpriseAcceleratePolicy(const CreateEnterpriseAcceleratePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

/**
 * @summary 创建加速对象
 *
 * @param request CreateEnterpriseAccelerateTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnterpriseAccelerateTargetResponse
 */
CreateEnterpriseAccelerateTargetResponse Client::createEnterpriseAccelerateTargetWithOptions(const CreateEnterpriseAccelerateTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.eapId();
  }

  json bodyFlat = {};
  if (!!request.hasTarget()) {
    bodyFlat["Target"] = request.target();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEnterpriseAccelerateTarget"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnterpriseAccelerateTargetResponse>();
}

/**
 * @summary 创建加速对象
 *
 * @param request CreateEnterpriseAccelerateTargetRequest
 * @return CreateEnterpriseAccelerateTargetResponse
 */
CreateEnterpriseAccelerateTargetResponse Client::createEnterpriseAccelerateTarget(const CreateEnterpriseAccelerateTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnterpriseAccelerateTargetWithOptions(request, runtime);
}

/**
 * @summary 创建自定义身份源部门
 *
 * @param request CreateIdpDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdpDepartmentResponse
 */
CreateIdpDepartmentResponse Client::createIdpDepartmentWithOptions(const CreateIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentName()) {
    query["DepartmentName"] = request.departmentName();
  }

  if (!!request.hasIdpConfigId()) {
    query["IdpConfigId"] = request.idpConfigId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIdpDepartment"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIdpDepartmentResponse>();
}

/**
 * @summary 创建自定义身份源部门
 *
 * @param request CreateIdpDepartmentRequest
 * @return CreateIdpDepartmentResponse
 */
CreateIdpDepartmentResponse Client::createIdpDepartment(const CreateIdpDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIdpDepartmentWithOptions(request, runtime);
}

/**
 * @summary Creates an office application within the current Alibaba Cloud account.
 *
 * @description By default, you can create a maximum of 500 office applications.
 *
 * @param tmpReq CreatePrivateAccessApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrivateAccessApplicationResponse
 */
CreatePrivateAccessApplicationResponse Client::createPrivateAccessApplicationWithOptions(const CreatePrivateAccessApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePrivateAccessApplicationShrinkRequest request = CreatePrivateAccessApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasL7Config()) {
    request.setL7ConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.l7Config(), "L7Config", "json"));
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasAddresses()) {
    bodyFlat["Addresses"] = request.addresses();
  }

  if (!!request.hasBrowserAccessStatus()) {
    body["BrowserAccessStatus"] = request.browserAccessStatus();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasL7ConfigShrink()) {
    body["L7Config"] = request.l7ConfigShrink();
  }

  if (!!request.hasL7ProxyDomainAutomaticPrefix()) {
    body["L7ProxyDomainAutomaticPrefix"] = request.l7ProxyDomainAutomaticPrefix();
  }

  if (!!request.hasL7ProxyDomainCustom()) {
    body["L7ProxyDomainCustom"] = request.l7ProxyDomainCustom();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPortRanges()) {
    bodyFlat["PortRanges"] = request.portRanges();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.protocol();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.tagIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePrivateAccessApplication"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrivateAccessApplicationResponse>();
}

/**
 * @summary Creates an office application within the current Alibaba Cloud account.
 *
 * @description By default, you can create a maximum of 500 office applications.
 *
 * @param request CreatePrivateAccessApplicationRequest
 * @return CreatePrivateAccessApplicationResponse
 */
CreatePrivateAccessApplicationResponse Client::createPrivateAccessApplication(const CreatePrivateAccessApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrivateAccessApplicationWithOptions(request, runtime);
}

/**
 * @summary Create Private Access Policy
 *
 * @description By default, up to 500 private access policies can be created.
 *
 * @param request CreatePrivateAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrivateAccessPolicyResponse
 */
CreatePrivateAccessPolicyResponse Client::createPrivateAccessPolicyWithOptions(const CreatePrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasApplicationIds()) {
    bodyFlat["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasApplicationType()) {
    body["ApplicationType"] = request.applicationType();
  }

  if (!!request.hasCustomUserAttributes()) {
    bodyFlat["CustomUserAttributes"] = request.customUserAttributes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDeviceAttributeAction()) {
    body["DeviceAttributeAction"] = request.deviceAttributeAction();
  }

  if (!!request.hasDeviceAttributeId()) {
    body["DeviceAttributeId"] = request.deviceAttributeId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPolicyAction()) {
    body["PolicyAction"] = request.policyAction();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.tagIds();
  }

  if (!!request.hasTriggerTemplateId()) {
    body["TriggerTemplateId"] = request.triggerTemplateId();
  }

  if (!!request.hasTrustedProcessGroupIds()) {
    bodyFlat["TrustedProcessGroupIds"] = request.trustedProcessGroupIds();
  }

  if (!!request.hasTrustedProcessStatus()) {
    body["TrustedProcessStatus"] = request.trustedProcessStatus();
  }

  if (!!request.hasTrustedSoftwareIds()) {
    bodyFlat["TrustedSoftwareIds"] = request.trustedSoftwareIds();
  }

  if (!!request.hasUserGroupIds()) {
    bodyFlat["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasUserGroupMode()) {
    body["UserGroupMode"] = request.userGroupMode();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePrivateAccessPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrivateAccessPolicyResponse>();
}

/**
 * @summary Create Private Access Policy
 *
 * @description By default, up to 500 private access policies can be created.
 *
 * @param request CreatePrivateAccessPolicyRequest
 * @return CreatePrivateAccessPolicyResponse
 */
CreatePrivateAccessPolicyResponse Client::createPrivateAccessPolicy(const CreatePrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 创建内网访问标签
 *
 * @param request CreatePrivateAccessTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrivateAccessTagResponse
 */
CreatePrivateAccessTagResponse Client::createPrivateAccessTagWithOptions(const CreatePrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePrivateAccessTag"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrivateAccessTagResponse>();
}

/**
 * @summary 创建内网访问标签
 *
 * @param request CreatePrivateAccessTagRequest
 * @return CreatePrivateAccessTagResponse
 */
CreatePrivateAccessTagResponse Client::createPrivateAccessTag(const CreatePrivateAccessTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrivateAccessTagWithOptions(request, runtime);
}

/**
 * @summary 创建设备注册策略
 *
 * @param tmpReq CreateRegistrationPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRegistrationPolicyResponse
 */
CreateRegistrationPolicyResponse Client::createRegistrationPolicyWithOptions(const CreateRegistrationPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRegistrationPolicyShrinkRequest request = CreateRegistrationPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCompanyLimitCount()) {
    request.setCompanyLimitCountShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.companyLimitCount(), "CompanyLimitCount", "json"));
  }

  if (!!tmpReq.hasPersonalLimitCount()) {
    request.setPersonalLimitCountShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.personalLimitCount(), "PersonalLimitCount", "json"));
  }

  json body = {};
  if (!!request.hasCompanyLimitCountShrink()) {
    body["CompanyLimitCount"] = request.companyLimitCountShrink();
  }

  if (!!request.hasCompanyLimitType()) {
    body["CompanyLimitType"] = request.companyLimitType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasMatchMode()) {
    body["MatchMode"] = request.matchMode();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPersonalLimitCountShrink()) {
    body["PersonalLimitCount"] = request.personalLimitCountShrink();
  }

  if (!!request.hasPersonalLimitType()) {
    body["PersonalLimitType"] = request.personalLimitType();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  json bodyFlat = {};
  if (!!request.hasUserGroupIds()) {
    bodyFlat["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasWhitelist()) {
    bodyFlat["Whitelist"] = request.whitelist();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRegistrationPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRegistrationPolicyResponse>();
}

/**
 * @summary 创建设备注册策略
 *
 * @param request CreateRegistrationPolicyRequest
 * @return CreateRegistrationPolicyResponse
 */
CreateRegistrationPolicyResponse Client::createRegistrationPolicy(const CreateRegistrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRegistrationPolicyWithOptions(request, runtime);
}

/**
 * @summary 创建用户组
 *
 * @param request CreateUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroupWithOptions(const CreateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasAttributes()) {
    bodyFlat["Attributes"] = request.attributes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateUserGroup"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserGroupResponse>();
}

/**
 * @summary 创建用户组
 *
 * @param request CreateUserGroupRequest
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroup(const CreateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserGroupWithOptions(request, runtime);
}

/**
 * @summary 创建数字水印暗水印透明底图
 *
 * @param tmpReq CreateWmBaseImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWmBaseImageResponse
 */
CreateWmBaseImageResponse Client::createWmBaseImageWithOptions(const CreateWmBaseImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWmBaseImageShrinkRequest request = CreateWmBaseImageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImageControl()) {
    request.setImageControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageControl(), "ImageControl", "json"));
  }

  json query = {};
  if (!!request.hasComment()) {
    query["comment"] = request.comment();
  }

  json body = {};
  if (!!request.hasHeight()) {
    body["Height"] = request.height();
  }

  if (!!request.hasImageControlShrink()) {
    body["ImageControl"] = request.imageControlShrink();
  }

  if (!!request.hasOpacity()) {
    body["Opacity"] = request.opacity();
  }

  if (!!request.hasScale()) {
    body["Scale"] = request.scale();
  }

  if (!!request.hasWidth()) {
    body["Width"] = request.width();
  }

  if (!!request.hasWmInfoBytesB64()) {
    body["WmInfoBytesB64"] = request.wmInfoBytesB64();
  }

  if (!!request.hasWmInfoSize()) {
    body["WmInfoSize"] = request.wmInfoSize();
  }

  if (!!request.hasWmInfoUint()) {
    body["WmInfoUint"] = request.wmInfoUint();
  }

  if (!!request.hasWmType()) {
    body["WmType"] = request.wmType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWmBaseImage"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWmBaseImageResponse>();
}

/**
 * @summary 创建数字水印暗水印透明底图
 *
 * @param request CreateWmBaseImageRequest
 * @return CreateWmBaseImageResponse
 */
CreateWmBaseImageResponse Client::createWmBaseImage(const CreateWmBaseImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWmBaseImageWithOptions(request, runtime);
}

/**
 * @summary 创建嵌入水印任务
 *
 * @param tmpReq CreateWmEmbedTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWmEmbedTaskResponse
 */
CreateWmEmbedTaskResponse Client::createWmEmbedTaskWithOptions(const CreateWmEmbedTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWmEmbedTaskShrinkRequest request = CreateWmEmbedTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAudioControl()) {
    request.setAudioControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.audioControl(), "AudioControl", "json"));
  }

  if (!!tmpReq.hasCsvControl()) {
    request.setCsvControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.csvControl(), "CsvControl", "json"));
  }

  if (!!tmpReq.hasDocumentControl()) {
    request.setDocumentControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.documentControl(), "DocumentControl", "json"));
  }

  if (!!tmpReq.hasImageControl()) {
    request.setImageControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageControl(), "ImageControl", "json"));
  }

  if (!!tmpReq.hasVideoControl()) {
    request.setVideoControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoControl(), "VideoControl", "json"));
  }

  json body = {};
  if (!!request.hasAudioControlShrink()) {
    body["AudioControl"] = request.audioControlShrink();
  }

  if (!!request.hasCsvControlShrink()) {
    body["CsvControl"] = request.csvControlShrink();
  }

  if (!!request.hasDocumentControlShrink()) {
    body["DocumentControl"] = request.documentControlShrink();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasFilename()) {
    body["Filename"] = request.filename();
  }

  if (!!request.hasImageControlShrink()) {
    body["ImageControl"] = request.imageControlShrink();
  }

  if (!!request.hasImageEmbedJpegQuality()) {
    body["ImageEmbedJpegQuality"] = request.imageEmbedJpegQuality();
  }

  if (!!request.hasImageEmbedLevel()) {
    body["ImageEmbedLevel"] = request.imageEmbedLevel();
  }

  if (!!request.hasInvisibleEnable()) {
    body["InvisibleEnable"] = request.invisibleEnable();
  }

  if (!!request.hasVideoBitrate()) {
    body["VideoBitrate"] = request.videoBitrate();
  }

  if (!!request.hasVideoControlShrink()) {
    body["VideoControl"] = request.videoControlShrink();
  }

  if (!!request.hasVideoIsLong()) {
    body["VideoIsLong"] = request.videoIsLong();
  }

  if (!!request.hasWmInfoBytesB64()) {
    body["WmInfoBytesB64"] = request.wmInfoBytesB64();
  }

  if (!!request.hasWmInfoSize()) {
    body["WmInfoSize"] = request.wmInfoSize();
  }

  if (!!request.hasWmInfoUint()) {
    body["WmInfoUint"] = request.wmInfoUint();
  }

  if (!!request.hasWmType()) {
    body["WmType"] = request.wmType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWmEmbedTask"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWmEmbedTaskResponse>();
}

/**
 * @summary 创建嵌入水印任务
 *
 * @param request CreateWmEmbedTaskRequest
 * @return CreateWmEmbedTaskResponse
 */
CreateWmEmbedTaskResponse Client::createWmEmbedTask(const CreateWmEmbedTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWmEmbedTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a digital watermark extraction task.
 *
 * @param tmpReq CreateWmExtractTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWmExtractTaskResponse
 */
CreateWmExtractTaskResponse Client::createWmExtractTaskWithOptions(const CreateWmExtractTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWmExtractTaskShrinkRequest request = CreateWmExtractTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCsvControl()) {
    request.setCsvControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.csvControl(), "CsvControl", "json"));
  }

  if (!!tmpReq.hasImageExtractParamsOpenApi()) {
    request.setImageExtractParamsOpenApiShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageExtractParamsOpenApi(), "ImageExtractParamsOpenApi", "json"));
  }

  json query = {};
  if (!!request.hasCsvControlShrink()) {
    query["CsvControl"] = request.csvControlShrink();
  }

  if (!!request.hasImageExtractParamsOpenApiShrink()) {
    query["ImageExtractParamsOpenApi"] = request.imageExtractParamsOpenApiShrink();
  }

  if (!!request.hasIsClientEmbed()) {
    query["IsClientEmbed"] = request.isClientEmbed();
  }

  json body = {};
  if (!!request.hasDocumentIsCapture()) {
    body["DocumentIsCapture"] = request.documentIsCapture();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasFilename()) {
    body["Filename"] = request.filename();
  }

  if (!!request.hasVideoIsLong()) {
    body["VideoIsLong"] = request.videoIsLong();
  }

  if (!!request.hasVideoSpeed()) {
    body["VideoSpeed"] = request.videoSpeed();
  }

  if (!!request.hasWmInfoSize()) {
    body["WmInfoSize"] = request.wmInfoSize();
  }

  if (!!request.hasWmType()) {
    body["WmType"] = request.wmType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWmExtractTask"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWmExtractTaskResponse>();
}

/**
 * @summary Creates a digital watermark extraction task.
 *
 * @param request CreateWmExtractTaskRequest
 * @return CreateWmExtractTaskResponse
 */
CreateWmExtractTaskResponse Client::createWmExtractTask(const CreateWmExtractTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWmExtractTaskWithOptions(request, runtime);
}

/**
 * @summary 创建一条字符串水印信息到数字水印信息的映射记录
 *
 * @param request CreateWmInfoMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWmInfoMappingResponse
 */
CreateWmInfoMappingResponse Client::createWmInfoMappingWithOptions(const CreateWmInfoMappingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWmInfoBytesB64()) {
    body["WmInfoBytesB64"] = request.wmInfoBytesB64();
  }

  if (!!request.hasWmInfoSize()) {
    body["WmInfoSize"] = request.wmInfoSize();
  }

  if (!!request.hasWmType()) {
    body["WmType"] = request.wmType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWmInfoMapping"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWmInfoMappingResponse>();
}

/**
 * @summary 创建一条字符串水印信息到数字水印信息的映射记录
 *
 * @param request CreateWmInfoMappingRequest
 * @return CreateWmInfoMappingResponse
 */
CreateWmInfoMappingResponse Client::createWmInfoMapping(const CreateWmInfoMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWmInfoMappingWithOptions(request, runtime);
}

/**
 * @summary 批量删除审批流程
 *
 * @param request DeleteApprovalProcessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApprovalProcessesResponse
 */
DeleteApprovalProcessesResponse Client::deleteApprovalProcessesWithOptions(const DeleteApprovalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasProcessIds()) {
    bodyFlat["ProcessIds"] = request.processIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteApprovalProcesses"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApprovalProcessesResponse>();
}

/**
 * @summary 批量删除审批流程
 *
 * @param request DeleteApprovalProcessesRequest
 * @return DeleteApprovalProcessesResponse
 */
DeleteApprovalProcessesResponse Client::deleteApprovalProcesses(const DeleteApprovalProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApprovalProcessesWithOptions(request, runtime);
}

/**
 * @summary 删除自定义身份源指定用户
 *
 * @param request DeleteClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientUserResponse
 */
DeleteClientUserResponse Client::deleteClientUserWithOptions(const DeleteClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClientUser"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClientUserResponse>();
}

/**
 * @summary 删除自定义身份源指定用户
 *
 * @param request DeleteClientUserRequest
 * @return DeleteClientUserResponse
 */
DeleteClientUserResponse Client::deleteClientUser(const DeleteClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientUserWithOptions(request, runtime);
}

/**
 * @summary 删除动态路由
 *
 * @param request DeleteDynamicRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDynamicRouteResponse
 */
DeleteDynamicRouteResponse Client::deleteDynamicRouteWithOptions(const DeleteDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicRouteId()) {
    query["DynamicRouteId"] = request.dynamicRouteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDynamicRoute"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDynamicRouteResponse>();
}

/**
 * @summary 删除动态路由
 *
 * @param request DeleteDynamicRouteRequest
 * @return DeleteDynamicRouteResponse
 */
DeleteDynamicRouteResponse Client::deleteDynamicRoute(const DeleteDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary 删除加速策略
 *
 * @param request DeleteEnterpriseAcceleratePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnterpriseAcceleratePolicyResponse
 */
DeleteEnterpriseAcceleratePolicyResponse Client::deleteEnterpriseAcceleratePolicyWithOptions(const DeleteEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.eapId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteEnterpriseAcceleratePolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnterpriseAcceleratePolicyResponse>();
}

/**
 * @summary 删除加速策略
 *
 * @param request DeleteEnterpriseAcceleratePolicyRequest
 * @return DeleteEnterpriseAcceleratePolicyResponse
 */
DeleteEnterpriseAcceleratePolicyResponse Client::deleteEnterpriseAcceleratePolicy(const DeleteEnterpriseAcceleratePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

/**
 * @summary 删除加速对象
 *
 * @param request DeleteEnterpriseAccelerateTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnterpriseAccelerateTargetResponse
 */
DeleteEnterpriseAccelerateTargetResponse Client::deleteEnterpriseAccelerateTargetWithOptions(const DeleteEnterpriseAccelerateTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.eapId();
  }

  json bodyFlat = {};
  if (!!request.hasTarget()) {
    bodyFlat["Target"] = request.target();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteEnterpriseAccelerateTarget"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnterpriseAccelerateTargetResponse>();
}

/**
 * @summary 删除加速对象
 *
 * @param request DeleteEnterpriseAccelerateTargetRequest
 * @return DeleteEnterpriseAccelerateTargetResponse
 */
DeleteEnterpriseAccelerateTargetResponse Client::deleteEnterpriseAccelerateTarget(const DeleteEnterpriseAccelerateTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnterpriseAccelerateTargetWithOptions(request, runtime);
}

/**
 * @summary 删除指定自定义身份源部门
 *
 * @param request DeleteIdpDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIdpDepartmentResponse
 */
DeleteIdpDepartmentResponse Client::deleteIdpDepartmentWithOptions(const DeleteIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasIdpConfigId()) {
    query["IdpConfigId"] = request.idpConfigId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIdpDepartment"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIdpDepartmentResponse>();
}

/**
 * @summary 删除指定自定义身份源部门
 *
 * @param request DeleteIdpDepartmentRequest
 * @return DeleteIdpDepartmentResponse
 */
DeleteIdpDepartmentResponse Client::deleteIdpDepartment(const DeleteIdpDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIdpDepartmentWithOptions(request, runtime);
}

/**
 * @summary DeleteOtpConfig
 *
 * @param request DeleteOtpConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOtpConfigResponse
 */
DeleteOtpConfigResponse Client::deleteOtpConfigWithOptions(const DeleteOtpConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUsername()) {
    body["Username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteOtpConfig"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOtpConfigResponse>();
}

/**
 * @summary DeleteOtpConfig
 *
 * @param request DeleteOtpConfigRequest
 * @return DeleteOtpConfigResponse
 */
DeleteOtpConfigResponse Client::deleteOtpConfig(const DeleteOtpConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOtpConfigWithOptions(request, runtime);
}

/**
 * @summary 删除内网访问应用
 *
 * @param request DeletePrivateAccessApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateAccessApplicationResponse
 */
DeletePrivateAccessApplicationResponse Client::deletePrivateAccessApplicationWithOptions(const DeletePrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePrivateAccessApplication"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrivateAccessApplicationResponse>();
}

/**
 * @summary 删除内网访问应用
 *
 * @param request DeletePrivateAccessApplicationRequest
 * @return DeletePrivateAccessApplicationResponse
 */
DeletePrivateAccessApplicationResponse Client::deletePrivateAccessApplication(const DeletePrivateAccessApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateAccessApplicationWithOptions(request, runtime);
}

/**
 * @summary 删除内网访问策略
 *
 * @param request DeletePrivateAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateAccessPolicyResponse
 */
DeletePrivateAccessPolicyResponse Client::deletePrivateAccessPolicyWithOptions(const DeletePrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePrivateAccessPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrivateAccessPolicyResponse>();
}

/**
 * @summary 删除内网访问策略
 *
 * @param request DeletePrivateAccessPolicyRequest
 * @return DeletePrivateAccessPolicyResponse
 */
DeletePrivateAccessPolicyResponse Client::deletePrivateAccessPolicy(const DeletePrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 删除内网访问标签
 *
 * @param request DeletePrivateAccessTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateAccessTagResponse
 */
DeletePrivateAccessTagResponse Client::deletePrivateAccessTagWithOptions(const DeletePrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTagId()) {
    body["TagId"] = request.tagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePrivateAccessTag"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrivateAccessTagResponse>();
}

/**
 * @summary 删除内网访问标签
 *
 * @param request DeletePrivateAccessTagRequest
 * @return DeletePrivateAccessTagResponse
 */
DeletePrivateAccessTagResponse Client::deletePrivateAccessTag(const DeletePrivateAccessTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateAccessTagWithOptions(request, runtime);
}

/**
 * @summary 删除设备注册策略
 *
 * @param request DeleteRegistrationPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRegistrationPoliciesResponse
 */
DeleteRegistrationPoliciesResponse Client::deleteRegistrationPoliciesWithOptions(const DeleteRegistrationPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasPolicyIds()) {
    bodyFlat["PolicyIds"] = request.policyIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRegistrationPolicies"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRegistrationPoliciesResponse>();
}

/**
 * @summary 删除设备注册策略
 *
 * @param request DeleteRegistrationPoliciesRequest
 * @return DeleteRegistrationPoliciesResponse
 */
DeleteRegistrationPoliciesResponse Client::deleteRegistrationPolicies(const DeleteRegistrationPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRegistrationPoliciesWithOptions(request, runtime);
}

/**
 * @summary 批量删除用户非在线设备
 *
 * @param request DeleteUserDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserDevicesResponse
 */
DeleteUserDevicesResponse Client::deleteUserDevicesWithOptions(const DeleteUserDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasDeviceTags()) {
    bodyFlat["DeviceTags"] = request.deviceTags();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteUserDevices"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserDevicesResponse>();
}

/**
 * @summary 批量删除用户非在线设备
 *
 * @param request DeleteUserDevicesRequest
 * @return DeleteUserDevicesResponse
 */
DeleteUserDevicesResponse Client::deleteUserDevices(const DeleteUserDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserDevicesWithOptions(request, runtime);
}

/**
 * @summary 删除用户组
 *
 * @param request DeleteUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroupWithOptions(const DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserGroupId()) {
    body["UserGroupId"] = request.userGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteUserGroup"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserGroupResponse>();
}

/**
 * @summary 删除用户组
 *
 * @param request DeleteUserGroupRequest
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroup(const DeleteUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserGroupWithOptions(request, runtime);
}

/**
 * @summary 卸载connector的应用
 *
 * @param tmpReq DetachApplication2ConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachApplication2ConnectorResponse
 */
DetachApplication2ConnectorResponse Client::detachApplication2ConnectorWithOptions(const DetachApplication2ConnectorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetachApplication2ConnectorShrinkRequest request = DetachApplication2ConnectorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplicationIds()) {
    request.setApplicationIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.applicationIds(), "ApplicationIds", "json"));
  }

  json body = {};
  if (!!request.hasApplicationIdsShrink()) {
    body["ApplicationIds"] = request.applicationIdsShrink();
  }

  if (!!request.hasConnectorId()) {
    body["ConnectorId"] = request.connectorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DetachApplication2Connector"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachApplication2ConnectorResponse>();
}

/**
 * @summary 卸载connector的应用
 *
 * @param request DetachApplication2ConnectorRequest
 * @return DetachApplication2ConnectorResponse
 */
DetachApplication2ConnectorResponse Client::detachApplication2Connector(const DetachApplication2ConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachApplication2ConnectorWithOptions(request, runtime);
}

/**
 * @summary 解绑业务策略与审批流程
 *
 * @param request DetachPolicy2ApprovalProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachPolicy2ApprovalProcessResponse
 */
DetachPolicy2ApprovalProcessResponse Client::detachPolicy2ApprovalProcessWithOptions(const DetachPolicy2ApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  if (!!request.hasPolicyType()) {
    body["PolicyType"] = request.policyType();
  }

  if (!!request.hasProcessId()) {
    body["ProcessId"] = request.processId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DetachPolicy2ApprovalProcess"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachPolicy2ApprovalProcessResponse>();
}

/**
 * @summary 解绑业务策略与审批流程
 *
 * @param request DetachPolicy2ApprovalProcessRequest
 * @return DetachPolicy2ApprovalProcessResponse
 */
DetachPolicy2ApprovalProcessResponse Client::detachPolicy2ApprovalProcess(const DetachPolicy2ApprovalProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPolicy2ApprovalProcessWithOptions(request, runtime);
}

/**
 * @summary 禁用加速策略
 *
 * @param request DisableEnterpriseAcceleratePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableEnterpriseAcceleratePolicyResponse
 */
DisableEnterpriseAcceleratePolicyResponse Client::disableEnterpriseAcceleratePolicyWithOptions(const DisableEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.eapId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisableEnterpriseAcceleratePolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableEnterpriseAcceleratePolicyResponse>();
}

/**
 * @summary 禁用加速策略
 *
 * @param request DisableEnterpriseAcceleratePolicyRequest
 * @return DisableEnterpriseAcceleratePolicyResponse
 */
DisableEnterpriseAcceleratePolicyResponse Client::disableEnterpriseAcceleratePolicy(const DisableEnterpriseAcceleratePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

/**
 * @summary 启用加速策略
 *
 * @param request EnableEnterpriseAcceleratePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableEnterpriseAcceleratePolicyResponse
 */
EnableEnterpriseAcceleratePolicyResponse Client::enableEnterpriseAcceleratePolicyWithOptions(const EnableEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.eapId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnableEnterpriseAcceleratePolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableEnterpriseAcceleratePolicyResponse>();
}

/**
 * @summary 启用加速策略
 *
 * @param request EnableEnterpriseAcceleratePolicyRequest
 * @return EnableEnterpriseAcceleratePolicyResponse
 */
EnableEnterpriseAcceleratePolicyResponse Client::enableEnterpriseAcceleratePolicy(const EnableEnterpriseAcceleratePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

/**
 * @summary 批量查询用户设备列表
 *
 * @param request ExportUserDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportUserDevicesResponse
 */
ExportUserDevicesResponse Client::exportUserDevicesWithOptions(const ExportUserDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasAppStatuses()) {
    bodyFlat["AppStatuses"] = request.appStatuses();
  }

  if (!!request.hasDepartment()) {
    body["Department"] = request.department();
  }

  if (!!request.hasDeviceBelong()) {
    body["DeviceBelong"] = request.deviceBelong();
  }

  if (!!request.hasDeviceStatuses()) {
    bodyFlat["DeviceStatuses"] = request.deviceStatuses();
  }

  if (!!request.hasDeviceTags()) {
    bodyFlat["DeviceTags"] = request.deviceTags();
  }

  if (!!request.hasDeviceTypes()) {
    bodyFlat["DeviceTypes"] = request.deviceTypes();
  }

  if (!!request.hasDlpStatuses()) {
    bodyFlat["DlpStatuses"] = request.dlpStatuses();
  }

  if (!!request.hasHostname()) {
    body["Hostname"] = request.hostname();
  }

  if (!!request.hasIaStatuses()) {
    bodyFlat["IaStatuses"] = request.iaStatuses();
  }

  if (!!request.hasMac()) {
    body["Mac"] = request.mac();
  }

  if (!!request.hasNacStatuses()) {
    bodyFlat["NacStatuses"] = request.nacStatuses();
  }

  if (!!request.hasPaStatuses()) {
    bodyFlat["PaStatuses"] = request.paStatuses();
  }

  if (!!request.hasSaseUserId()) {
    body["SaseUserId"] = request.saseUserId();
  }

  if (!!request.hasSharingStatus()) {
    body["SharingStatus"] = request.sharingStatus();
  }

  if (!!request.hasUsername()) {
    body["Username"] = request.username();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportUserDevices"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportUserDevicesResponse>();
}

/**
 * @summary 批量查询用户设备列表
 *
 * @param request ExportUserDevicesRequest
 * @return ExportUserDevicesResponse
 */
ExportUserDevicesResponse Client::exportUserDevices(const ExportUserDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportUserDevicesWithOptions(request, runtime);
}

/**
 * @summary 查询已启用的身份源配置
 *
 * @param request GetActiveIdpConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetActiveIdpConfigResponse
 */
GetActiveIdpConfigResponse Client::getActiveIdpConfigWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetActiveIdpConfig"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetActiveIdpConfigResponse>();
}

/**
 * @summary 查询已启用的身份源配置
 *
 * @return GetActiveIdpConfigResponse
 */
GetActiveIdpConfigResponse Client::getActiveIdpConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getActiveIdpConfigWithOptions(runtime);
}

/**
 * @summary 查询审批
 *
 * @param request GetApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApprovalResponse
 */
GetApprovalResponse Client::getApprovalWithOptions(const GetApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApproval"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApprovalResponse>();
}

/**
 * @summary 查询审批
 *
 * @param request GetApprovalRequest
 * @return GetApprovalResponse
 */
GetApprovalResponse Client::getApproval(const GetApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApprovalWithOptions(request, runtime);
}

/**
 * @summary 查询审批流程
 *
 * @param request GetApprovalProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApprovalProcessResponse
 */
GetApprovalProcessResponse Client::getApprovalProcessWithOptions(const GetApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApprovalProcess"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApprovalProcessResponse>();
}

/**
 * @summary 查询审批流程
 *
 * @param request GetApprovalProcessRequest
 * @return GetApprovalProcessResponse
 */
GetApprovalProcessResponse Client::getApprovalProcess(const GetApprovalProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApprovalProcessWithOptions(request, runtime);
}

/**
 * @summary 查询审批动态模板
 *
 * @param request GetApprovalSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApprovalSchemaResponse
 */
GetApprovalSchemaResponse Client::getApprovalSchemaWithOptions(const GetApprovalSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApprovalSchema"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApprovalSchemaResponse>();
}

/**
 * @summary 查询审批动态模板
 *
 * @param request GetApprovalSchemaRequest
 * @return GetApprovalSchemaResponse
 */
GetApprovalSchemaResponse Client::getApprovalSchema(const GetApprovalSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApprovalSchemaWithOptions(request, runtime);
}

/**
 * @summary 查询自启动与防卸载策略配置
 *
 * @param request GetBootAndAntiUninstallPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBootAndAntiUninstallPolicyResponse
 */
GetBootAndAntiUninstallPolicyResponse Client::getBootAndAntiUninstallPolicyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetBootAndAntiUninstallPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBootAndAntiUninstallPolicyResponse>();
}

/**
 * @summary 查询自启动与防卸载策略配置
 *
 * @return GetBootAndAntiUninstallPolicyResponse
 */
GetBootAndAntiUninstallPolicyResponse Client::getBootAndAntiUninstallPolicy() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBootAndAntiUninstallPolicyWithOptions(runtime);
}

/**
 * @summary 查询自定义身份源指定用户
 *
 * @param request GetClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClientUserResponse
 */
GetClientUserResponse Client::getClientUserWithOptions(const GetClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClientUser"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClientUserResponse>();
}

/**
 * @summary 查询自定义身份源指定用户
 *
 * @param request GetClientUserRequest
 * @return GetClientUserResponse
 */
GetClientUserResponse Client::getClientUser(const GetClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientUserWithOptions(request, runtime);
}

/**
 * @summary 查询动态路由详情
 *
 * @param request GetDynamicRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDynamicRouteResponse
 */
GetDynamicRouteResponse Client::getDynamicRouteWithOptions(const GetDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDynamicRoute"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDynamicRouteResponse>();
}

/**
 * @summary 查询动态路由详情
 *
 * @param request GetDynamicRouteRequest
 * @return GetDynamicRouteResponse
 */
GetDynamicRouteResponse Client::getDynamicRoute(const GetDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary 查询身份源配置详情
 *
 * @param request GetIdpConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdpConfigResponse
 */
GetIdpConfigResponse Client::getIdpConfigWithOptions(const GetIdpConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdpConfig"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdpConfigResponse>();
}

/**
 * @summary 查询身份源配置详情
 *
 * @param request GetIdpConfigRequest
 * @return GetIdpConfigResponse
 */
GetIdpConfigResponse Client::getIdpConfig(const GetIdpConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdpConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the office applications that belong to the current Alibaba Cloud account.
 *
 * @param request GetPrivateAccessApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrivateAccessApplicationResponse
 */
GetPrivateAccessApplicationResponse Client::getPrivateAccessApplicationWithOptions(const GetPrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrivateAccessApplication"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrivateAccessApplicationResponse>();
}

/**
 * @summary Queries the details of the office applications that belong to the current Alibaba Cloud account.
 *
 * @param request GetPrivateAccessApplicationRequest
 * @return GetPrivateAccessApplicationResponse
 */
GetPrivateAccessApplicationResponse Client::getPrivateAccessApplication(const GetPrivateAccessApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPrivateAccessApplicationWithOptions(request, runtime);
}

/**
 * @summary Query Intranet Access Policy Details
 *
 * @param request GetPrivateAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrivateAccessPolicyResponse
 */
GetPrivateAccessPolicyResponse Client::getPrivateAccessPolicyWithOptions(const GetPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrivateAccessPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrivateAccessPolicyResponse>();
}

/**
 * @summary Query Intranet Access Policy Details
 *
 * @param request GetPrivateAccessPolicyRequest
 * @return GetPrivateAccessPolicyResponse
 */
GetPrivateAccessPolicyResponse Client::getPrivateAccessPolicy(const GetPrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询设备注册策略详情
 *
 * @param request GetRegistrationPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegistrationPolicyResponse
 */
GetRegistrationPolicyResponse Client::getRegistrationPolicyWithOptions(const GetRegistrationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRegistrationPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegistrationPolicyResponse>();
}

/**
 * @summary 查询设备注册策略详情
 *
 * @param request GetRegistrationPolicyRequest
 * @return GetRegistrationPolicyResponse
 */
GetRegistrationPolicyResponse Client::getRegistrationPolicy(const GetRegistrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRegistrationPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询用户设备详情
 *
 * @param request GetUserDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserDeviceResponse
 */
GetUserDeviceResponse Client::getUserDeviceWithOptions(const GetUserDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserDevice"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserDeviceResponse>();
}

/**
 * @summary 查询用户设备详情
 *
 * @param request GetUserDeviceRequest
 * @return GetUserDeviceResponse
 */
GetUserDeviceResponse Client::getUserDevice(const GetUserDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserDeviceWithOptions(request, runtime);
}

/**
 * @summary 查询用户组详情
 *
 * @param request GetUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroupWithOptions(const GetUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserGroup"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserGroupResponse>();
}

/**
 * @summary 查询用户组详情
 *
 * @param request GetUserGroupRequest
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroup(const GetUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserGroupWithOptions(request, runtime);
}

/**
 * @summary 查询嵌入水印任务
 *
 * @param request GetWmEmbedTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWmEmbedTaskResponse
 */
GetWmEmbedTaskResponse Client::getWmEmbedTaskWithOptions(const GetWmEmbedTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWmEmbedTask"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWmEmbedTaskResponse>();
}

/**
 * @summary 查询嵌入水印任务
 *
 * @param request GetWmEmbedTaskRequest
 * @return GetWmEmbedTaskResponse
 */
GetWmEmbedTaskResponse Client::getWmEmbedTask(const GetWmEmbedTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWmEmbedTaskWithOptions(request, runtime);
}

/**
 * @summary 查询文件水印提取任务详情
 *
 * @param request GetWmExtractTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWmExtractTaskResponse
 */
GetWmExtractTaskResponse Client::getWmExtractTaskWithOptions(const GetWmExtractTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWmExtractTask"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWmExtractTaskResponse>();
}

/**
 * @summary 查询文件水印提取任务详情
 *
 * @param request GetWmExtractTaskRequest
 * @return GetWmExtractTaskResponse
 */
GetWmExtractTaskResponse Client::getWmExtractTask(const GetWmExtractTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWmExtractTaskWithOptions(request, runtime);
}

/**
 * @summary 批量导入加速对象异步任务
 *
 * @param request ImportEnterpriseAccelerateTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportEnterpriseAccelerateTargetsResponse
 */
ImportEnterpriseAccelerateTargetsResponse Client::importEnterpriseAccelerateTargetsWithOptions(const ImportEnterpriseAccelerateTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.eapId();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImportEnterpriseAccelerateTargets"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportEnterpriseAccelerateTargetsResponse>();
}

/**
 * @summary 批量导入加速对象异步任务
 *
 * @param request ImportEnterpriseAccelerateTargetsRequest
 * @return ImportEnterpriseAccelerateTargetsResponse
 */
ImportEnterpriseAccelerateTargetsResponse Client::importEnterpriseAccelerateTargets(const ImportEnterpriseAccelerateTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importEnterpriseAccelerateTargetsWithOptions(request, runtime);
}

/**
 * @summary 批量查询内网访问策略的应用
 *
 * @param request ListApplicationsForPrivateAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForPrivateAccessPolicyResponse
 */
ListApplicationsForPrivateAccessPolicyResponse Client::listApplicationsForPrivateAccessPolicyWithOptions(const ListApplicationsForPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationsForPrivateAccessPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsForPrivateAccessPolicyResponse>();
}

/**
 * @summary 批量查询内网访问策略的应用
 *
 * @param request ListApplicationsForPrivateAccessPolicyRequest
 * @return ListApplicationsForPrivateAccessPolicyResponse
 */
ListApplicationsForPrivateAccessPolicyResponse Client::listApplicationsForPrivateAccessPolicy(const ListApplicationsForPrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForPrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 批量查询内网访问标签的应用
 *
 * @param request ListApplicationsForPrivateAccessTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForPrivateAccessTagResponse
 */
ListApplicationsForPrivateAccessTagResponse Client::listApplicationsForPrivateAccessTagWithOptions(const ListApplicationsForPrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationsForPrivateAccessTag"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsForPrivateAccessTagResponse>();
}

/**
 * @summary 批量查询内网访问标签的应用
 *
 * @param request ListApplicationsForPrivateAccessTagRequest
 * @return ListApplicationsForPrivateAccessTagResponse
 */
ListApplicationsForPrivateAccessTagResponse Client::listApplicationsForPrivateAccessTag(const ListApplicationsForPrivateAccessTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForPrivateAccessTagWithOptions(request, runtime);
}

/**
 * @summary 列表查询审批流程
 *
 * @param request ListApprovalProcessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApprovalProcessesResponse
 */
ListApprovalProcessesResponse Client::listApprovalProcessesWithOptions(const ListApprovalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApprovalProcesses"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApprovalProcessesResponse>();
}

/**
 * @summary 列表查询审批流程
 *
 * @param request ListApprovalProcessesRequest
 * @return ListApprovalProcessesResponse
 */
ListApprovalProcessesResponse Client::listApprovalProcesses(const ListApprovalProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalProcessesWithOptions(request, runtime);
}

/**
 * @summary 查询审批渲染模板关联的流程
 *
 * @param request ListApprovalProcessesForApprovalSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApprovalProcessesForApprovalSchemasResponse
 */
ListApprovalProcessesForApprovalSchemasResponse Client::listApprovalProcessesForApprovalSchemasWithOptions(const ListApprovalProcessesForApprovalSchemasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApprovalProcessesForApprovalSchemas"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApprovalProcessesForApprovalSchemasResponse>();
}

/**
 * @summary 查询审批渲染模板关联的流程
 *
 * @param request ListApprovalProcessesForApprovalSchemasRequest
 * @return ListApprovalProcessesForApprovalSchemasResponse
 */
ListApprovalProcessesForApprovalSchemasResponse Client::listApprovalProcessesForApprovalSchemas(const ListApprovalProcessesForApprovalSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalProcessesForApprovalSchemasWithOptions(request, runtime);
}

/**
 * @summary 列表查询审批动态模板
 *
 * @param request ListApprovalSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApprovalSchemasResponse
 */
ListApprovalSchemasResponse Client::listApprovalSchemasWithOptions(const ListApprovalSchemasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApprovalSchemas"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApprovalSchemasResponse>();
}

/**
 * @summary 列表查询审批动态模板
 *
 * @param request ListApprovalSchemasRequest
 * @return ListApprovalSchemasResponse
 */
ListApprovalSchemasResponse Client::listApprovalSchemas(const ListApprovalSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalSchemasWithOptions(request, runtime);
}

/**
 * @summary 查询审批流程关联的渲染模板
 *
 * @param request ListApprovalSchemasForApprovalProcessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApprovalSchemasForApprovalProcessesResponse
 */
ListApprovalSchemasForApprovalProcessesResponse Client::listApprovalSchemasForApprovalProcessesWithOptions(const ListApprovalSchemasForApprovalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApprovalSchemasForApprovalProcesses"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApprovalSchemasForApprovalProcessesResponse>();
}

/**
 * @summary 查询审批流程关联的渲染模板
 *
 * @param request ListApprovalSchemasForApprovalProcessesRequest
 * @return ListApprovalSchemasForApprovalProcessesResponse
 */
ListApprovalSchemasForApprovalProcessesResponse Client::listApprovalSchemasForApprovalProcesses(const ListApprovalSchemasForApprovalProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalSchemasForApprovalProcessesWithOptions(request, runtime);
}

/**
 * @summary 批量查询审批
 *
 * @param request ListApprovalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApprovalsResponse
 */
ListApprovalsResponse Client::listApprovalsWithOptions(const ListApprovalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApprovals"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApprovalsResponse>();
}

/**
 * @summary 批量查询审批
 *
 * @param request ListApprovalsRequest
 * @return ListApprovalsResponse
 */
ListApprovalsResponse Client::listApprovals(const ListApprovalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalsWithOptions(request, runtime);
}

/**
 * @summary 查询自定义身份源用户
 *
 * @param request ListClientUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClientUsersResponse
 */
ListClientUsersResponse Client::listClientUsersWithOptions(const ListClientUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClientUsers"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClientUsersResponse>();
}

/**
 * @summary 查询自定义身份源用户
 *
 * @param request ListClientUsersRequest
 * @return ListClientUsersResponse
 */
ListClientUsersResponse Client::listClientUsers(const ListClientUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientUsersWithOptions(request, runtime);
}

/**
 * @summary Batch query connectors
 *
 * @param request ListConnectorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnectorsResponse
 */
ListConnectorsResponse Client::listConnectorsWithOptions(const ListConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConnectors"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConnectorsResponse>();
}

/**
 * @summary Batch query connectors
 *
 * @param request ListConnectorsRequest
 * @return ListConnectorsResponse
 */
ListConnectorsResponse Client::listConnectors(const ListConnectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConnectorsWithOptions(request, runtime);
}

/**
 * @summary Batch Query Dynamic Policy Disposal Processes
 *
 * @param request ListDynamicDisposalProcessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDynamicDisposalProcessesResponse
 */
ListDynamicDisposalProcessesResponse Client::listDynamicDisposalProcessesWithOptions(const ListDynamicDisposalProcessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDynamicDisposalProcesses"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDynamicDisposalProcessesResponse>();
}

/**
 * @summary Batch Query Dynamic Policy Disposal Processes
 *
 * @param request ListDynamicDisposalProcessesRequest
 * @return ListDynamicDisposalProcessesResponse
 */
ListDynamicDisposalProcessesResponse Client::listDynamicDisposalProcesses(const ListDynamicDisposalProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDynamicDisposalProcessesWithOptions(request, runtime);
}

/**
 * @summary 批量查询动态路由的地域
 *
 * @param request ListDynamicRouteRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDynamicRouteRegionsResponse
 */
ListDynamicRouteRegionsResponse Client::listDynamicRouteRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListDynamicRouteRegions"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDynamicRouteRegionsResponse>();
}

/**
 * @summary 批量查询动态路由的地域
 *
 * @return ListDynamicRouteRegionsResponse
 */
ListDynamicRouteRegionsResponse Client::listDynamicRouteRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDynamicRouteRegionsWithOptions(runtime);
}

/**
 * @summary 批量查询动态路由
 *
 * @param request ListDynamicRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDynamicRoutesResponse
 */
ListDynamicRoutesResponse Client::listDynamicRoutesWithOptions(const ListDynamicRoutesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDynamicRoutes"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDynamicRoutesResponse>();
}

/**
 * @summary 批量查询动态路由
 *
 * @param request ListDynamicRoutesRequest
 * @return ListDynamicRoutesResponse
 */
ListDynamicRoutesResponse Client::listDynamicRoutes(const ListDynamicRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDynamicRoutesWithOptions(request, runtime);
}

/**
 * @summary 查询加速策略日志列表
 *
 * @param request ListEnterpriseAccelerateLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnterpriseAccelerateLogsResponse
 */
ListEnterpriseAccelerateLogsResponse Client::listEnterpriseAccelerateLogsWithOptions(const ListEnterpriseAccelerateLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnterpriseAccelerateLogs"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnterpriseAccelerateLogsResponse>();
}

/**
 * @summary 查询加速策略日志列表
 *
 * @param request ListEnterpriseAccelerateLogsRequest
 * @return ListEnterpriseAccelerateLogsResponse
 */
ListEnterpriseAccelerateLogsResponse Client::listEnterpriseAccelerateLogs(const ListEnterpriseAccelerateLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnterpriseAccelerateLogsWithOptions(request, runtime);
}

/**
 * @summary 查询加速策略列表
 *
 * @param request ListEnterpriseAcceleratePoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnterpriseAcceleratePoliciesResponse
 */
ListEnterpriseAcceleratePoliciesResponse Client::listEnterpriseAcceleratePoliciesWithOptions(const ListEnterpriseAcceleratePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnterpriseAcceleratePolicies"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnterpriseAcceleratePoliciesResponse>();
}

/**
 * @summary 查询加速策略列表
 *
 * @param request ListEnterpriseAcceleratePoliciesRequest
 * @return ListEnterpriseAcceleratePoliciesResponse
 */
ListEnterpriseAcceleratePoliciesResponse Client::listEnterpriseAcceleratePolicies(const ListEnterpriseAcceleratePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnterpriseAcceleratePoliciesWithOptions(request, runtime);
}

/**
 * @summary 查询加速对象列表
 *
 * @param request ListEnterpriseAccelerateTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnterpriseAccelerateTargetsResponse
 */
ListEnterpriseAccelerateTargetsResponse Client::listEnterpriseAccelerateTargetsWithOptions(const ListEnterpriseAccelerateTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnterpriseAccelerateTargets"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnterpriseAccelerateTargetsResponse>();
}

/**
 * @summary 查询加速对象列表
 *
 * @param request ListEnterpriseAccelerateTargetsRequest
 * @return ListEnterpriseAccelerateTargetsResponse
 */
ListEnterpriseAccelerateTargetsResponse Client::listEnterpriseAccelerateTargets(const ListEnterpriseAccelerateTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnterpriseAccelerateTargetsWithOptions(request, runtime);
}

/**
 * @summary 批量查询超额注册申请列表
 *
 * @param request ListExcessiveDeviceRegistrationApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExcessiveDeviceRegistrationApplicationsResponse
 */
ListExcessiveDeviceRegistrationApplicationsResponse Client::listExcessiveDeviceRegistrationApplicationsWithOptions(const ListExcessiveDeviceRegistrationApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExcessiveDeviceRegistrationApplications"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExcessiveDeviceRegistrationApplicationsResponse>();
}

/**
 * @summary 批量查询超额注册申请列表
 *
 * @param request ListExcessiveDeviceRegistrationApplicationsRequest
 * @return ListExcessiveDeviceRegistrationApplicationsResponse
 */
ListExcessiveDeviceRegistrationApplicationsResponse Client::listExcessiveDeviceRegistrationApplications(const ListExcessiveDeviceRegistrationApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExcessiveDeviceRegistrationApplicationsWithOptions(request, runtime);
}

/**
 * @summary 查询IDP配置
 *
 * @param request ListIdpConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdpConfigsResponse
 */
ListIdpConfigsResponse Client::listIdpConfigsWithOptions(const ListIdpConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIdpConfigs"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdpConfigsResponse>();
}

/**
 * @summary 查询IDP配置
 *
 * @param request ListIdpConfigsRequest
 * @return ListIdpConfigsResponse
 */
ListIdpConfigsResponse Client::listIdpConfigs(const ListIdpConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdpConfigsWithOptions(request, runtime);
}

/**
 * @summary 查询自定义身份源部门
 *
 * @param request ListIdpDepartmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdpDepartmentsResponse
 */
ListIdpDepartmentsResponse Client::listIdpDepartmentsWithOptions(const ListIdpDepartmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIdpDepartments"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdpDepartmentsResponse>();
}

/**
 * @summary 查询自定义身份源部门
 *
 * @param request ListIdpDepartmentsRequest
 * @return ListIdpDepartmentsResponse
 */
ListIdpDepartmentsResponse Client::listIdpDepartments(const ListIdpDepartmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdpDepartmentsWithOptions(request, runtime);
}

/**
 * @summary 入网用户列表
 *
 * @param request ListNacUserCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNacUserCertResponse
 */
ListNacUserCertResponse Client::listNacUserCertWithOptions(const ListNacUserCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDepartment()) {
    query["Department"] = request.department();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.deviceType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNacUserCert"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNacUserCertResponse>();
}

/**
 * @summary 入网用户列表
 *
 * @param request ListNacUserCertRequest
 * @return ListNacUserCertResponse
 */
ListNacUserCertResponse Client::listNacUserCert(const ListNacUserCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNacUserCertWithOptions(request, runtime);
}

/**
 * @summary 批量查询内网访问应用的策略
 *
 * @param request ListPolicesForPrivateAccessApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicesForPrivateAccessApplicationResponse
 */
ListPolicesForPrivateAccessApplicationResponse Client::listPolicesForPrivateAccessApplicationWithOptions(const ListPolicesForPrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicesForPrivateAccessApplication"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicesForPrivateAccessApplicationResponse>();
}

/**
 * @summary 批量查询内网访问应用的策略
 *
 * @param request ListPolicesForPrivateAccessApplicationRequest
 * @return ListPolicesForPrivateAccessApplicationResponse
 */
ListPolicesForPrivateAccessApplicationResponse Client::listPolicesForPrivateAccessApplication(const ListPolicesForPrivateAccessApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicesForPrivateAccessApplicationWithOptions(request, runtime);
}

/**
 * @summary 批量查询内网访问标签的策略
 *
 * @param request ListPolicesForPrivateAccessTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicesForPrivateAccessTagResponse
 */
ListPolicesForPrivateAccessTagResponse Client::listPolicesForPrivateAccessTagWithOptions(const ListPolicesForPrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicesForPrivateAccessTag"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicesForPrivateAccessTagResponse>();
}

/**
 * @summary 批量查询内网访问标签的策略
 *
 * @param request ListPolicesForPrivateAccessTagRequest
 * @return ListPolicesForPrivateAccessTagResponse
 */
ListPolicesForPrivateAccessTagResponse Client::listPolicesForPrivateAccessTag(const ListPolicesForPrivateAccessTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicesForPrivateAccessTagWithOptions(request, runtime);
}

/**
 * @summary 批量查询用户组的策略
 *
 * @param request ListPolicesForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicesForUserGroupResponse
 */
ListPolicesForUserGroupResponse Client::listPolicesForUserGroupWithOptions(const ListPolicesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicesForUserGroup"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicesForUserGroupResponse>();
}

/**
 * @summary 批量查询用户组的策略
 *
 * @param request ListPolicesForUserGroupRequest
 * @return ListPolicesForUserGroupResponse
 */
ListPolicesForUserGroupResponse Client::listPolicesForUserGroup(const ListPolicesForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicesForUserGroupWithOptions(request, runtime);
}

/**
 * @summary pop节点流量统计
 *
 * @param request ListPopTrafficStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPopTrafficStatisticsResponse
 */
ListPopTrafficStatisticsResponse Client::listPopTrafficStatisticsWithOptions(const ListPopTrafficStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPopTrafficStatistics"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPopTrafficStatisticsResponse>();
}

/**
 * @summary pop节点流量统计
 *
 * @param request ListPopTrafficStatisticsRequest
 * @return ListPopTrafficStatisticsResponse
 */
ListPopTrafficStatisticsResponse Client::listPopTrafficStatistics(const ListPopTrafficStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPopTrafficStatisticsWithOptions(request, runtime);
}

/**
 * @summary 批量查询内网访问应用
 *
 * @param request ListPrivateAccessApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivateAccessApplicationsResponse
 */
ListPrivateAccessApplicationsResponse Client::listPrivateAccessApplicationsWithOptions(const ListPrivateAccessApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessModes()) {
    query["AccessModes"] = request.accessModes();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.connectorId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.tagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivateAccessApplications"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivateAccessApplicationsResponse>();
}

/**
 * @summary 批量查询内网访问应用
 *
 * @param request ListPrivateAccessApplicationsRequest
 * @return ListPrivateAccessApplicationsResponse
 */
ListPrivateAccessApplicationsResponse Client::listPrivateAccessApplications(const ListPrivateAccessApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivateAccessApplicationsWithOptions(request, runtime);
}

/**
 * @summary 批量查询动态路由的内网访问应用
 *
 * @param request ListPrivateAccessApplicationsForDynamicRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivateAccessApplicationsForDynamicRouteResponse
 */
ListPrivateAccessApplicationsForDynamicRouteResponse Client::listPrivateAccessApplicationsForDynamicRouteWithOptions(const ListPrivateAccessApplicationsForDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivateAccessApplicationsForDynamicRoute"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivateAccessApplicationsForDynamicRouteResponse>();
}

/**
 * @summary 批量查询动态路由的内网访问应用
 *
 * @param request ListPrivateAccessApplicationsForDynamicRouteRequest
 * @return ListPrivateAccessApplicationsForDynamicRouteResponse
 */
ListPrivateAccessApplicationsForDynamicRouteResponse Client::listPrivateAccessApplicationsForDynamicRoute(const ListPrivateAccessApplicationsForDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivateAccessApplicationsForDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary Queries the private access policies within the current Alibaba Cloud account.
 *
 * @param request ListPrivateAccessPolicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivateAccessPolicesResponse
 */
ListPrivateAccessPolicesResponse Client::listPrivateAccessPolicesWithOptions(const ListPrivateAccessPolicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivateAccessPolices"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivateAccessPolicesResponse>();
}

/**
 * @summary Queries the private access policies within the current Alibaba Cloud account.
 *
 * @param request ListPrivateAccessPolicesRequest
 * @return ListPrivateAccessPolicesResponse
 */
ListPrivateAccessPolicesResponse Client::listPrivateAccessPolices(const ListPrivateAccessPolicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivateAccessPolicesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all internal access tags within the current Alibaba Cloud account.
 *
 * @param request ListPrivateAccessTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivateAccessTagsResponse
 */
ListPrivateAccessTagsResponse Client::listPrivateAccessTagsWithOptions(const ListPrivateAccessTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivateAccessTags"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivateAccessTagsResponse>();
}

/**
 * @summary Queries the information about all internal access tags within the current Alibaba Cloud account.
 *
 * @param request ListPrivateAccessTagsRequest
 * @return ListPrivateAccessTagsResponse
 */
ListPrivateAccessTagsResponse Client::listPrivateAccessTags(const ListPrivateAccessTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivateAccessTagsWithOptions(request, runtime);
}

/**
 * @summary 批量查询动态路由的内网访问标签
 *
 * @param request ListPrivateAccessTagsForDynamicRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivateAccessTagsForDynamicRouteResponse
 */
ListPrivateAccessTagsForDynamicRouteResponse Client::listPrivateAccessTagsForDynamicRouteWithOptions(const ListPrivateAccessTagsForDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivateAccessTagsForDynamicRoute"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivateAccessTagsForDynamicRouteResponse>();
}

/**
 * @summary 批量查询动态路由的内网访问标签
 *
 * @param request ListPrivateAccessTagsForDynamicRouteRequest
 * @return ListPrivateAccessTagsForDynamicRouteResponse
 */
ListPrivateAccessTagsForDynamicRouteResponse Client::listPrivateAccessTagsForDynamicRoute(const ListPrivateAccessTagsForDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivateAccessTagsForDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary 查询用户设备注册策略列表
 *
 * @param request ListRegistrationPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegistrationPoliciesResponse
 */
ListRegistrationPoliciesResponse Client::listRegistrationPoliciesWithOptions(const ListRegistrationPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegistrationPolicies"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegistrationPoliciesResponse>();
}

/**
 * @summary 查询用户设备注册策略列表
 *
 * @param request ListRegistrationPoliciesRequest
 * @return ListRegistrationPoliciesResponse
 */
ListRegistrationPoliciesResponse Client::listRegistrationPolicies(const ListRegistrationPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegistrationPoliciesWithOptions(request, runtime);
}

/**
 * @summary 查询用户组相关的设备注册策略
 *
 * @param request ListRegistrationPoliciesForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegistrationPoliciesForUserGroupResponse
 */
ListRegistrationPoliciesForUserGroupResponse Client::listRegistrationPoliciesForUserGroupWithOptions(const ListRegistrationPoliciesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegistrationPoliciesForUserGroup"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegistrationPoliciesForUserGroupResponse>();
}

/**
 * @summary 查询用户组相关的设备注册策略
 *
 * @param request ListRegistrationPoliciesForUserGroupRequest
 * @return ListRegistrationPoliciesForUserGroupResponse
 */
ListRegistrationPoliciesForUserGroupResponse Client::listRegistrationPoliciesForUserGroup(const ListRegistrationPoliciesForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegistrationPoliciesForUserGroupWithOptions(request, runtime);
}

/**
 * @summary 批量查询终端安装软件列表
 *
 * @param request ListSoftwareForUserDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSoftwareForUserDeviceResponse
 */
ListSoftwareForUserDeviceResponse Client::listSoftwareForUserDeviceWithOptions(const ListSoftwareForUserDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSoftwareForUserDevice"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSoftwareForUserDeviceResponse>();
}

/**
 * @summary 批量查询终端安装软件列表
 *
 * @param request ListSoftwareForUserDeviceRequest
 * @return ListSoftwareForUserDeviceResponse
 */
ListSoftwareForUserDeviceResponse Client::listSoftwareForUserDevice(const ListSoftwareForUserDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSoftwareForUserDeviceWithOptions(request, runtime);
}

/**
 * @summary 批量查询内网访问应用的标签
 *
 * @param request ListTagsForPrivateAccessApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagsForPrivateAccessApplicationResponse
 */
ListTagsForPrivateAccessApplicationResponse Client::listTagsForPrivateAccessApplicationWithOptions(const ListTagsForPrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagsForPrivateAccessApplication"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagsForPrivateAccessApplicationResponse>();
}

/**
 * @summary 批量查询内网访问应用的标签
 *
 * @param request ListTagsForPrivateAccessApplicationRequest
 * @return ListTagsForPrivateAccessApplicationResponse
 */
ListTagsForPrivateAccessApplicationResponse Client::listTagsForPrivateAccessApplication(const ListTagsForPrivateAccessApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagsForPrivateAccessApplicationWithOptions(request, runtime);
}

/**
 * @summary 批量查询内网访问策略的标签
 *
 * @param request ListTagsForPrivateAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagsForPrivateAccessPolicyResponse
 */
ListTagsForPrivateAccessPolicyResponse Client::listTagsForPrivateAccessPolicyWithOptions(const ListTagsForPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagsForPrivateAccessPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagsForPrivateAccessPolicyResponse>();
}

/**
 * @summary 批量查询内网访问策略的标签
 *
 * @param request ListTagsForPrivateAccessPolicyRequest
 * @return ListTagsForPrivateAccessPolicyResponse
 */
ListTagsForPrivateAccessPolicyResponse Client::listTagsForPrivateAccessPolicy(const ListTagsForPrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagsForPrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 列表查询卸载申请列表
 *
 * @param request ListUninstallApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUninstallApplicationsResponse
 */
ListUninstallApplicationsResponse Client::listUninstallApplicationsWithOptions(const ListUninstallApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUninstallApplications"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUninstallApplicationsResponse>();
}

/**
 * @summary 列表查询卸载申请列表
 *
 * @param request ListUninstallApplicationsRequest
 * @return ListUninstallApplicationsResponse
 */
ListUninstallApplicationsResponse Client::listUninstallApplications(const ListUninstallApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUninstallApplicationsWithOptions(request, runtime);
}

/**
 * @summary 列表查询用户应用权限
 *
 * @param request ListUserApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserApplicationsResponse
 */
ListUserApplicationsResponse Client::listUserApplicationsWithOptions(const ListUserApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserApplications"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserApplicationsResponse>();
}

/**
 * @summary 列表查询用户应用权限
 *
 * @param request ListUserApplicationsRequest
 * @return ListUserApplicationsResponse
 */
ListUserApplicationsResponse Client::listUserApplications(const ListUserApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserApplicationsWithOptions(request, runtime);
}

/**
 * @summary 批量查询用户设备列表
 *
 * @param request ListUserDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserDevicesResponse
 */
ListUserDevicesResponse Client::listUserDevicesWithOptions(const ListUserDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserDevices"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserDevicesResponse>();
}

/**
 * @summary 批量查询用户设备列表
 *
 * @param request ListUserDevicesRequest
 * @return ListUserDevicesResponse
 */
ListUserDevicesResponse Client::listUserDevices(const ListUserDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserDevicesWithOptions(request, runtime);
}

/**
 * @summary 批量查询用户组
 *
 * @param request ListUserGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroupsWithOptions(const ListUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserGroups"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupsResponse>();
}

/**
 * @summary 批量查询用户组
 *
 * @param request ListUserGroupsRequest
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroups(const ListUserGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsWithOptions(request, runtime);
}

/**
 * @summary 批量查询内网访问策略的用户组
 *
 * @param request ListUserGroupsForPrivateAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupsForPrivateAccessPolicyResponse
 */
ListUserGroupsForPrivateAccessPolicyResponse Client::listUserGroupsForPrivateAccessPolicyWithOptions(const ListUserGroupsForPrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserGroupsForPrivateAccessPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupsForPrivateAccessPolicyResponse>();
}

/**
 * @summary 批量查询内网访问策略的用户组
 *
 * @param request ListUserGroupsForPrivateAccessPolicyRequest
 * @return ListUserGroupsForPrivateAccessPolicyResponse
 */
ListUserGroupsForPrivateAccessPolicyResponse Client::listUserGroupsForPrivateAccessPolicy(const ListUserGroupsForPrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsForPrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询设备注册策略相关用户组
 *
 * @param request ListUserGroupsForRegistrationPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupsForRegistrationPolicyResponse
 */
ListUserGroupsForRegistrationPolicyResponse Client::listUserGroupsForRegistrationPolicyWithOptions(const ListUserGroupsForRegistrationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserGroupsForRegistrationPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupsForRegistrationPolicyResponse>();
}

/**
 * @summary 查询设备注册策略相关用户组
 *
 * @param request ListUserGroupsForRegistrationPolicyRequest
 * @return ListUserGroupsForRegistrationPolicyResponse
 */
ListUserGroupsForRegistrationPolicyResponse Client::listUserGroupsForRegistrationPolicy(const ListUserGroupsForRegistrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsForRegistrationPolicyWithOptions(request, runtime);
}

/**
 * @summary List query of user zero trust policies
 *
 * @param request ListUserPrivateAccessPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserPrivateAccessPoliciesResponse
 */
ListUserPrivateAccessPoliciesResponse Client::listUserPrivateAccessPoliciesWithOptions(const ListUserPrivateAccessPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserPrivateAccessPolicies"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserPrivateAccessPoliciesResponse>();
}

/**
 * @summary List query of user zero trust policies
 *
 * @param request ListUserPrivateAccessPoliciesRequest
 * @return ListUserPrivateAccessPoliciesResponse
 */
ListUserPrivateAccessPoliciesResponse Client::listUserPrivateAccessPolicies(const ListUserPrivateAccessPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserPrivateAccessPoliciesWithOptions(request, runtime);
}

/**
 * @summary 列表查询登陆用户
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary 列表查询登陆用户
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary 根据数字水印信息查询字符串水印信息
 *
 * @param request LookupWmInfoMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LookupWmInfoMappingResponse
 */
LookupWmInfoMappingResponse Client::lookupWmInfoMappingWithOptions(const LookupWmInfoMappingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LookupWmInfoMapping"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LookupWmInfoMappingResponse>();
}

/**
 * @summary 根据数字水印信息查询字符串水印信息
 *
 * @param request LookupWmInfoMappingRequest
 * @return LookupWmInfoMappingResponse
 */
LookupWmInfoMappingResponse Client::lookupWmInfoMapping(const LookupWmInfoMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lookupWmInfoMappingWithOptions(request, runtime);
}

/**
 * @summary 修改加速策略
 *
 * @param request ModifyEnterpriseAcceleratePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEnterpriseAcceleratePolicyResponse
 */
ModifyEnterpriseAcceleratePolicyResponse Client::modifyEnterpriseAcceleratePolicyWithOptions(const ModifyEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccelerationType()) {
    body["AccelerationType"] = request.accelerationType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEapId()) {
    body["EapId"] = request.eapId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOnTls()) {
    body["OnTls"] = request.onTls();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasShowInClient()) {
    body["ShowInClient"] = request.showInClient();
  }

  if (!!request.hasUpstreamHost()) {
    body["UpstreamHost"] = request.upstreamHost();
  }

  if (!!request.hasUpstreamPort()) {
    body["UpstreamPort"] = request.upstreamPort();
  }

  if (!!request.hasUpstreamType()) {
    body["UpstreamType"] = request.upstreamType();
  }

  if (!!request.hasUserAttributeGroup()) {
    body["UserAttributeGroup"] = request.userAttributeGroup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyEnterpriseAcceleratePolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEnterpriseAcceleratePolicyResponse>();
}

/**
 * @summary 修改加速策略
 *
 * @param request ModifyEnterpriseAcceleratePolicyRequest
 * @return ModifyEnterpriseAcceleratePolicyResponse
 */
ModifyEnterpriseAcceleratePolicyResponse Client::modifyEnterpriseAcceleratePolicy(const ModifyEnterpriseAcceleratePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI RevokeUserSession is deprecated
 *
 * @summary 吊销用户登录会话
 *
 * @param request RevokeUserSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeUserSessionResponse
 */
RevokeUserSessionResponse Client::revokeUserSessionWithOptions(const RevokeUserSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalIds()) {
    query["ExternalIds"] = request.externalIds();
  }

  if (!!request.hasIdpId()) {
    query["IdpId"] = request.idpId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeUserSession"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeUserSessionResponse>();
}

/**
 * @deprecated OpenAPI RevokeUserSession is deprecated
 *
 * @summary 吊销用户登录会话
 *
 * @param request RevokeUserSessionRequest
 * @return RevokeUserSessionResponse
 */
RevokeUserSessionResponse Client::revokeUserSession(const RevokeUserSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeUserSessionWithOptions(request, runtime);
}

/**
 * @summary 更新审批流程
 *
 * @param tmpReq UpdateApprovalProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApprovalProcessResponse
 */
UpdateApprovalProcessResponse Client::updateApprovalProcessWithOptions(const UpdateApprovalProcessRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateApprovalProcessShrinkRequest request = UpdateApprovalProcessShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMatchSchemaConfigs()) {
    request.setMatchSchemaConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.matchSchemaConfigs(), "MatchSchemaConfigs", "json"));
  }

  if (!!tmpReq.hasMatchSchemas()) {
    request.setMatchSchemasShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.matchSchemas(), "MatchSchemas", "json"));
  }

  json query = {};
  if (!!request.hasApprovalType()) {
    query["ApprovalType"] = request.approvalType();
  }

  if (!!request.hasEventLabel()) {
    query["EventLabel"] = request.eventLabel();
  }

  if (!!request.hasExternalConfig()) {
    query["ExternalConfig"] = request.externalConfig();
  }

  if (!!request.hasMatchSchemaConfigsShrink()) {
    query["MatchSchemaConfigs"] = request.matchSchemaConfigsShrink();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasMatchSchemasShrink()) {
    body["MatchSchemas"] = request.matchSchemasShrink();
  }

  if (!!request.hasProcessId()) {
    body["ProcessId"] = request.processId();
  }

  if (!!request.hasProcessName()) {
    body["ProcessName"] = request.processName();
  }

  json bodyFlat = {};
  if (!!request.hasProcessNodes()) {
    bodyFlat["ProcessNodes"] = request.processNodes();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateApprovalProcess"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApprovalProcessResponse>();
}

/**
 * @summary 更新审批流程
 *
 * @param request UpdateApprovalProcessRequest
 * @return UpdateApprovalProcessResponse
 */
UpdateApprovalProcessResponse Client::updateApprovalProcess(const UpdateApprovalProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApprovalProcessWithOptions(request, runtime);
}

/**
 * @summary 修改审批状态
 *
 * @param request UpdateApprovalStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApprovalStatusResponse
 */
UpdateApprovalStatusResponse Client::updateApprovalStatusWithOptions(const UpdateApprovalStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApprovalId()) {
    query["ApprovalId"] = request.approvalId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApprovalStatus"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApprovalStatusResponse>();
}

/**
 * @summary 修改审批状态
 *
 * @param request UpdateApprovalStatusRequest
 * @return UpdateApprovalStatusResponse
 */
UpdateApprovalStatusResponse Client::updateApprovalStatus(const UpdateApprovalStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApprovalStatusWithOptions(request, runtime);
}

/**
 * @summary 更新自启动与防卸载策略配置
 *
 * @param tmpReq UpdateBootAndAntiUninstallPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBootAndAntiUninstallPolicyResponse
 */
UpdateBootAndAntiUninstallPolicyResponse Client::updateBootAndAntiUninstallPolicyWithOptions(const UpdateBootAndAntiUninstallPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBootAndAntiUninstallPolicyShrinkRequest request = UpdateBootAndAntiUninstallPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBlockContent()) {
    request.setBlockContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.blockContent(), "BlockContent", "json"));
  }

  json body = {};
  if (!!request.hasAllowReport()) {
    body["AllowReport"] = request.allowReport();
  }

  if (!!request.hasBlockContentShrink()) {
    body["BlockContent"] = request.blockContentShrink();
  }

  if (!!request.hasIsAntiUninstall()) {
    body["IsAntiUninstall"] = request.isAntiUninstall();
  }

  if (!!request.hasIsBoot()) {
    body["IsBoot"] = request.isBoot();
  }

  json bodyFlat = {};
  if (!!request.hasUserGroupIds()) {
    bodyFlat["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasWhitelistUsers()) {
    bodyFlat["WhitelistUsers"] = request.whitelistUsers();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateBootAndAntiUninstallPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBootAndAntiUninstallPolicyResponse>();
}

/**
 * @summary 更新自启动与防卸载策略配置
 *
 * @param request UpdateBootAndAntiUninstallPolicyRequest
 * @return UpdateBootAndAntiUninstallPolicyResponse
 */
UpdateBootAndAntiUninstallPolicyResponse Client::updateBootAndAntiUninstallPolicy(const UpdateBootAndAntiUninstallPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBootAndAntiUninstallPolicyWithOptions(request, runtime);
}

/**
 * @summary 修改自定义身份源指定用户
 *
 * @param request UpdateClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClientUserResponse
 */
UpdateClientUserResponse Client::updateClientUserWithOptions(const UpdateClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasMobileNumber()) {
    query["MobileNumber"] = request.mobileNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateClientUser"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClientUserResponse>();
}

/**
 * @summary 修改自定义身份源指定用户
 *
 * @param request UpdateClientUserRequest
 * @return UpdateClientUserResponse
 */
UpdateClientUserResponse Client::updateClientUser(const UpdateClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClientUserWithOptions(request, runtime);
}

/**
 * @summary 修改自定义身份源指定用户密码
 *
 * @param request UpdateClientUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClientUserPasswordResponse
 */
UpdateClientUserPasswordResponse Client::updateClientUserPasswordWithOptions(const UpdateClientUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateClientUserPassword"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClientUserPasswordResponse>();
}

/**
 * @summary 修改自定义身份源指定用户密码
 *
 * @param request UpdateClientUserPasswordRequest
 * @return UpdateClientUserPasswordResponse
 */
UpdateClientUserPasswordResponse Client::updateClientUserPassword(const UpdateClientUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClientUserPasswordWithOptions(request, runtime);
}

/**
 * @summary 修改自定义身份源指定用户启用状态
 *
 * @param request UpdateClientUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClientUserStatusResponse
 */
UpdateClientUserStatusResponse Client::updateClientUserStatusWithOptions(const UpdateClientUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateClientUserStatus"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClientUserStatusResponse>();
}

/**
 * @summary 修改自定义身份源指定用户启用状态
 *
 * @param request UpdateClientUserStatusRequest
 * @return UpdateClientUserStatusResponse
 */
UpdateClientUserStatusResponse Client::updateClientUserStatus(const UpdateClientUserStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClientUserStatusWithOptions(request, runtime);
}

/**
 * @summary 修改动态路由
 *
 * @param request UpdateDynamicRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDynamicRouteResponse
 */
UpdateDynamicRouteResponse Client::updateDynamicRouteWithOptions(const UpdateDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasApplicationIds()) {
    bodyFlat["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasApplicationType()) {
    body["ApplicationType"] = request.applicationType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDynamicRouteId()) {
    body["DynamicRouteId"] = request.dynamicRouteId();
  }

  if (!!request.hasDynamicRouteType()) {
    body["DynamicRouteType"] = request.dynamicRouteType();
  }

  if (!!request.hasModifyType()) {
    body["ModifyType"] = request.modifyType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNextHop()) {
    body["NextHop"] = request.nextHop();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasRegionIds()) {
    bodyFlat["RegionIds"] = request.regionIds();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.tagIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDynamicRoute"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDynamicRouteResponse>();
}

/**
 * @summary 修改动态路由
 *
 * @param request UpdateDynamicRouteRequest
 * @return UpdateDynamicRouteResponse
 */
UpdateDynamicRouteResponse Client::updateDynamicRoute(const UpdateDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary 批量更新超额注册申请状态
 *
 * @param request UpdateExcessiveDeviceRegistrationApplicationsStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExcessiveDeviceRegistrationApplicationsStatusResponse
 */
UpdateExcessiveDeviceRegistrationApplicationsStatusResponse Client::updateExcessiveDeviceRegistrationApplicationsStatusWithOptions(const UpdateExcessiveDeviceRegistrationApplicationsStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasApplicationIds()) {
    bodyFlat["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateExcessiveDeviceRegistrationApplicationsStatus"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExcessiveDeviceRegistrationApplicationsStatusResponse>();
}

/**
 * @summary 批量更新超额注册申请状态
 *
 * @param request UpdateExcessiveDeviceRegistrationApplicationsStatusRequest
 * @return UpdateExcessiveDeviceRegistrationApplicationsStatusResponse
 */
UpdateExcessiveDeviceRegistrationApplicationsStatusResponse Client::updateExcessiveDeviceRegistrationApplicationsStatus(const UpdateExcessiveDeviceRegistrationApplicationsStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateExcessiveDeviceRegistrationApplicationsStatusWithOptions(request, runtime);
}

/**
 * @summary 修改指定自定义身份源部门
 *
 * @param request UpdateIdpDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIdpDepartmentResponse
 */
UpdateIdpDepartmentResponse Client::updateIdpDepartmentWithOptions(const UpdateIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasDepartmentName()) {
    query["DepartmentName"] = request.departmentName();
  }

  if (!!request.hasIdpConfigId()) {
    query["IdpConfigId"] = request.idpConfigId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIdpDepartment"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIdpDepartmentResponse>();
}

/**
 * @summary 修改指定自定义身份源部门
 *
 * @param request UpdateIdpDepartmentRequest
 * @return UpdateIdpDepartmentResponse
 */
UpdateIdpDepartmentResponse Client::updateIdpDepartment(const UpdateIdpDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIdpDepartmentWithOptions(request, runtime);
}

/**
 * @summary 更新NAC User 状态
 *
 * @param request UpdateNacUserCertStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNacUserCertStatusResponse
 */
UpdateNacUserCertStatusResponse Client::updateNacUserCertStatusWithOptions(const UpdateNacUserCertStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasIdList()) {
    bodyFlat["IdList"] = request.idList();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateNacUserCertStatus"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNacUserCertStatusResponse>();
}

/**
 * @summary 更新NAC User 状态
 *
 * @param request UpdateNacUserCertStatusRequest
 * @return UpdateNacUserCertStatusResponse
 */
UpdateNacUserCertStatusResponse Client::updateNacUserCertStatus(const UpdateNacUserCertStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNacUserCertStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the office applications of the current Alibaba Cloud account.
 *
 * @param tmpReq UpdatePrivateAccessApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrivateAccessApplicationResponse
 */
UpdatePrivateAccessApplicationResponse Client::updatePrivateAccessApplicationWithOptions(const UpdatePrivateAccessApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePrivateAccessApplicationShrinkRequest request = UpdatePrivateAccessApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasL7Config()) {
    request.setL7ConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.l7Config(), "L7Config", "json"));
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasAddresses()) {
    bodyFlat["Addresses"] = request.addresses();
  }

  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasL7ConfigShrink()) {
    body["L7Config"] = request.l7ConfigShrink();
  }

  if (!!request.hasL7ProxyDomainAutomaticPrefix()) {
    body["L7ProxyDomainAutomaticPrefix"] = request.l7ProxyDomainAutomaticPrefix();
  }

  if (!!request.hasL7ProxyDomainCustom()) {
    body["L7ProxyDomainCustom"] = request.l7ProxyDomainCustom();
  }

  if (!!request.hasL7ProxyDomainPrivate()) {
    body["L7ProxyDomainPrivate"] = request.l7ProxyDomainPrivate();
  }

  if (!!request.hasModifyType()) {
    body["ModifyType"] = request.modifyType();
  }

  if (!!request.hasPortRanges()) {
    bodyFlat["PortRanges"] = request.portRanges();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.protocol();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.tagIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdatePrivateAccessApplication"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrivateAccessApplicationResponse>();
}

/**
 * @summary Modifies the office applications of the current Alibaba Cloud account.
 *
 * @param request UpdatePrivateAccessApplicationRequest
 * @return UpdatePrivateAccessApplicationResponse
 */
UpdatePrivateAccessApplicationResponse Client::updatePrivateAccessApplication(const UpdatePrivateAccessApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrivateAccessApplicationWithOptions(request, runtime);
}

/**
 * @summary Modify Private Access Policy
 *
 * @param request UpdatePrivateAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrivateAccessPolicyResponse
 */
UpdatePrivateAccessPolicyResponse Client::updatePrivateAccessPolicyWithOptions(const UpdatePrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasApplicationIds()) {
    bodyFlat["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasApplicationType()) {
    body["ApplicationType"] = request.applicationType();
  }

  if (!!request.hasCustomUserAttributes()) {
    bodyFlat["CustomUserAttributes"] = request.customUserAttributes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDeviceAttributeAction()) {
    body["DeviceAttributeAction"] = request.deviceAttributeAction();
  }

  if (!!request.hasDeviceAttributeId()) {
    body["DeviceAttributeId"] = request.deviceAttributeId();
  }

  if (!!request.hasModifyType()) {
    body["ModifyType"] = request.modifyType();
  }

  if (!!request.hasPolicyAction()) {
    body["PolicyAction"] = request.policyAction();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.tagIds();
  }

  if (!!request.hasTriggerTemplateId()) {
    body["TriggerTemplateId"] = request.triggerTemplateId();
  }

  if (!!request.hasTrustedProcessGroupIds()) {
    bodyFlat["TrustedProcessGroupIds"] = request.trustedProcessGroupIds();
  }

  if (!!request.hasTrustedProcessStatus()) {
    body["TrustedProcessStatus"] = request.trustedProcessStatus();
  }

  if (!!request.hasTrustedSoftwareIds()) {
    bodyFlat["TrustedSoftwareIds"] = request.trustedSoftwareIds();
  }

  if (!!request.hasUserGroupIds()) {
    bodyFlat["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasUserGroupMode()) {
    body["UserGroupMode"] = request.userGroupMode();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdatePrivateAccessPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrivateAccessPolicyResponse>();
}

/**
 * @summary Modify Private Access Policy
 *
 * @param request UpdatePrivateAccessPolicyRequest
 * @return UpdatePrivateAccessPolicyResponse
 */
UpdatePrivateAccessPolicyResponse Client::updatePrivateAccessPolicy(const UpdatePrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 修改设备注册策略
 *
 * @param tmpReq UpdateRegistrationPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRegistrationPolicyResponse
 */
UpdateRegistrationPolicyResponse Client::updateRegistrationPolicyWithOptions(const UpdateRegistrationPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateRegistrationPolicyShrinkRequest request = UpdateRegistrationPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCompanyLimitCount()) {
    request.setCompanyLimitCountShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.companyLimitCount(), "CompanyLimitCount", "json"));
  }

  if (!!tmpReq.hasPersonalLimitCount()) {
    request.setPersonalLimitCountShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.personalLimitCount(), "PersonalLimitCount", "json"));
  }

  json body = {};
  if (!!request.hasCompanyLimitCountShrink()) {
    body["CompanyLimitCount"] = request.companyLimitCountShrink();
  }

  if (!!request.hasCompanyLimitType()) {
    body["CompanyLimitType"] = request.companyLimitType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasMatchMode()) {
    body["MatchMode"] = request.matchMode();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPersonalLimitCountShrink()) {
    body["PersonalLimitCount"] = request.personalLimitCountShrink();
  }

  if (!!request.hasPersonalLimitType()) {
    body["PersonalLimitType"] = request.personalLimitType();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.policyId();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  json bodyFlat = {};
  if (!!request.hasUserGroupIds()) {
    bodyFlat["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasWhitelist()) {
    bodyFlat["Whitelist"] = request.whitelist();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateRegistrationPolicy"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRegistrationPolicyResponse>();
}

/**
 * @summary 修改设备注册策略
 *
 * @param request UpdateRegistrationPolicyRequest
 * @return UpdateRegistrationPolicyResponse
 */
UpdateRegistrationPolicyResponse Client::updateRegistrationPolicy(const UpdateRegistrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRegistrationPolicyWithOptions(request, runtime);
}

/**
 * @summary 批量修改卸载申请状态
 *
 * @param request UpdateUninstallApplicationsStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUninstallApplicationsStatusResponse
 */
UpdateUninstallApplicationsStatusResponse Client::updateUninstallApplicationsStatusWithOptions(const UpdateUninstallApplicationsStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasApplicationIds()) {
    bodyFlat["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateUninstallApplicationsStatus"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUninstallApplicationsStatusResponse>();
}

/**
 * @summary 批量修改卸载申请状态
 *
 * @param request UpdateUninstallApplicationsStatusRequest
 * @return UpdateUninstallApplicationsStatusResponse
 */
UpdateUninstallApplicationsStatusResponse Client::updateUninstallApplicationsStatus(const UpdateUninstallApplicationsStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUninstallApplicationsStatusWithOptions(request, runtime);
}

/**
 * @summary 批量更新用户设备共享状态
 *
 * @param request UpdateUserDevicesSharingStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserDevicesSharingStatusResponse
 */
UpdateUserDevicesSharingStatusResponse Client::updateUserDevicesSharingStatusWithOptions(const UpdateUserDevicesSharingStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasDeviceTags()) {
    bodyFlat["DeviceTags"] = request.deviceTags();
  }

  if (!!request.hasSharingStatus()) {
    body["SharingStatus"] = request.sharingStatus();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateUserDevicesSharingStatus"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserDevicesSharingStatusResponse>();
}

/**
 * @summary 批量更新用户设备共享状态
 *
 * @param request UpdateUserDevicesSharingStatusRequest
 * @return UpdateUserDevicesSharingStatusResponse
 */
UpdateUserDevicesSharingStatusResponse Client::updateUserDevicesSharingStatus(const UpdateUserDevicesSharingStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserDevicesSharingStatusWithOptions(request, runtime);
}

/**
 * @summary 批量更新用户设备状态
 *
 * @param request UpdateUserDevicesStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserDevicesStatusResponse
 */
UpdateUserDevicesStatusResponse Client::updateUserDevicesStatusWithOptions(const UpdateUserDevicesStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeviceAction()) {
    body["DeviceAction"] = request.deviceAction();
  }

  json bodyFlat = {};
  if (!!request.hasDeviceTags()) {
    bodyFlat["DeviceTags"] = request.deviceTags();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateUserDevicesStatus"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserDevicesStatusResponse>();
}

/**
 * @summary 批量更新用户设备状态
 *
 * @param request UpdateUserDevicesStatusRequest
 * @return UpdateUserDevicesStatusResponse
 */
UpdateUserDevicesStatusResponse Client::updateUserDevicesStatus(const UpdateUserDevicesStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserDevicesStatusWithOptions(request, runtime);
}

/**
 * @summary 修改用户组
 *
 * @param request UpdateUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserGroupResponse
 */
UpdateUserGroupResponse Client::updateUserGroupWithOptions(const UpdateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasAttributes()) {
    bodyFlat["Attributes"] = request.attributes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasModifyType()) {
    body["ModifyType"] = request.modifyType();
  }

  if (!!request.hasUserGroupId()) {
    body["UserGroupId"] = request.userGroupId();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateUserGroup"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserGroupResponse>();
}

/**
 * @summary 修改用户组
 *
 * @param request UpdateUserGroupRequest
 * @return UpdateUserGroupResponse
 */
UpdateUserGroupResponse Client::updateUserGroup(const UpdateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserGroupWithOptions(request, runtime);
}

/**
 * @summary 批量修改登陆用户状态
 *
 * @param request UpdateUsersStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUsersStatusResponse
 */
UpdateUsersStatusResponse Client::updateUsersStatusWithOptions(const UpdateUsersStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSaseUserIds()) {
    query["SaseUserIds"] = request.saseUserIds();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUsersStatus"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUsersStatusResponse>();
}

/**
 * @summary 批量修改登陆用户状态
 *
 * @param request UpdateUsersStatusRequest
 * @return UpdateUsersStatusResponse
 */
UpdateUsersStatusResponse Client::updateUsersStatus(const UpdateUsersStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUsersStatusWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Csas20230120