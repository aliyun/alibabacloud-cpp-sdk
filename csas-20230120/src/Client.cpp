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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "csas.aliyuncs.com"},
    {"public" , "csas.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Attaches the private access applications of a Connector under the current Alibaba Cloud account.
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
    request.setApplicationIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplicationIds(), "ApplicationIds", "json"));
  }

  json body = {};
  if (!!request.hasApplicationIdsShrink()) {
    body["ApplicationIds"] = request.getApplicationIdsShrink();
  }

  if (!!request.hasConnectorId()) {
    body["ConnectorId"] = request.getConnectorId();
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
 * @summary Attaches the private access applications of a Connector under the current Alibaba Cloud account.
 *
 * @param request AttachApplication2ConnectorRequest
 * @return AttachApplication2ConnectorResponse
 */
AttachApplication2ConnectorResponse Client::attachApplication2Connector(const AttachApplication2ConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachApplication2ConnectorWithOptions(request, runtime);
}

/**
 * @summary Attaches a business policy to a specified approval process.
 *
 * @param request AttachPolicy2ApprovalProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachPolicy2ApprovalProcessResponse
 */
AttachPolicy2ApprovalProcessResponse Client::attachPolicy2ApprovalProcessWithOptions(const AttachPolicy2ApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicyType()) {
    body["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasProcessId()) {
    body["ProcessId"] = request.getProcessId();
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
 * @summary Attaches a business policy to a specified approval process.
 *
 * @param request AttachPolicy2ApprovalProcessRequest
 * @return AttachPolicy2ApprovalProcessResponse
 */
AttachPolicy2ApprovalProcessResponse Client::attachPolicy2ApprovalProcess(const AttachPolicy2ApprovalProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPolicy2ApprovalProcessWithOptions(request, runtime);
}

/**
 * @summary Inserts domain name entries into a domain name list in batches.
 *
 * @description Appends domain name entries in batches to a specified domain name list (`ListId`). Domain names must be second-level or higher domain names. Wildcard domain names (`*.example.com`) are supported, but overly broad patterns such as `*.com` or `*.com.cn` are prohibited.
 *
 * @param request BatchCreateDomainItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateDomainItemsResponse
 */
BatchCreateDomainItemsResponse Client::batchCreateDomainItemsWithOptions(const BatchCreateDomainItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasDomainItems()) {
    bodyFlat["DomainItems"] = request.getDomainItems();
  }

  if (!!request.hasListId()) {
    body["ListId"] = request.getListId();
  }

  if (!!request.hasListType()) {
    body["ListType"] = request.getListType();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchCreateDomainItems"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateDomainItemsResponse>();
}

/**
 * @summary Inserts domain name entries into a domain name list in batches.
 *
 * @description Appends domain name entries in batches to a specified domain name list (`ListId`). Domain names must be second-level or higher domain names. Wildcard domain names (`*.example.com`) are supported, but overly broad patterns such as `*.com` or `*.com.cn` are prohibited.
 *
 * @param request BatchCreateDomainItemsRequest
 * @return BatchCreateDomainItemsResponse
 */
BatchCreateDomainItemsResponse Client::batchCreateDomainItems(const BatchCreateDomainItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateDomainItemsWithOptions(request, runtime);
}

/**
 * @summary Batch deletes domain name entries from a domain name list.
 *
 * @description Batch deletes domain name entries from a specified domain name list by entry IDs (`ItemIds`, obtained from the `ItemId` field returned by ListDomainItems).
 *
 * @param request BatchDeleteDomainItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteDomainItemsResponse
 */
BatchDeleteDomainItemsResponse Client::batchDeleteDomainItemsWithOptions(const BatchDeleteDomainItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasItemIds()) {
    bodyFlat["ItemIds"] = request.getItemIds();
  }

  if (!!request.hasListId()) {
    body["ListId"] = request.getListId();
  }

  if (!!request.hasListType()) {
    body["ListType"] = request.getListType();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchDeleteDomainItems"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteDomainItemsResponse>();
}

/**
 * @summary Batch deletes domain name entries from a domain name list.
 *
 * @description Batch deletes domain name entries from a specified domain name list by entry IDs (`ItemIds`, obtained from the `ItemId` field returned by ListDomainItems).
 *
 * @param request BatchDeleteDomainItemsRequest
 * @return BatchDeleteDomainItemsResponse
 */
BatchDeleteDomainItemsResponse Client::batchDeleteDomainItems(const BatchDeleteDomainItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteDomainItemsWithOptions(request, runtime);
}

/**
 * @summary Creates an approval process under the current Alibaba Cloud account.
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
    request.setMatchSchemasShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMatchSchemas(), "MatchSchemas", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMatchSchemasShrink()) {
    body["MatchSchemas"] = request.getMatchSchemasShrink();
  }

  if (!!request.hasProcessName()) {
    body["ProcessName"] = request.getProcessName();
  }

  json bodyFlat = {};
  if (!!request.hasProcessNodes()) {
    bodyFlat["ProcessNodes"] = request.getProcessNodes();
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
 * @summary Creates an approval process under the current Alibaba Cloud account.
 *
 * @param request CreateApprovalProcessRequest
 * @return CreateApprovalProcessResponse
 */
CreateApprovalProcessResponse Client::createApprovalProcess(const CreateApprovalProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApprovalProcessWithOptions(request, runtime);
}

/**
 * @summary Create a custom identity source user for your Alibaba Cloud account.
 *
 * @param request CreateClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientUserResponse
 */
CreateClientUserResponse Client::createClientUserWithOptions(const CreateClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.getDepartmentId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasIdpConfigId()) {
    query["IdpConfigId"] = request.getIdpConfigId();
  }

  if (!!request.hasMobileNumber()) {
    query["MobileNumber"] = request.getMobileNumber();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
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
 * @summary Create a custom identity source user for your Alibaba Cloud account.
 *
 * @param request CreateClientUserRequest
 * @return CreateClientUserResponse
 */
CreateClientUserResponse Client::createClientUser(const CreateClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientUserWithOptions(request, runtime);
}

/**
 * @summary Creates a domain name list.
 *
 * @description Creates a domain name list of a specified type (blacklist or whitelist) under the current tenant and returns the ListId of the new list. A maximum of 100 lists can be created for each list type per tenant.
 *
 * @param request CreateDomainMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDomainMetaResponse
 */
CreateDomainMetaResponse Client::createDomainMetaWithOptions(const CreateDomainMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasListType()) {
    body["ListType"] = request.getListType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDomainMeta"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDomainMetaResponse>();
}

/**
 * @summary Creates a domain name list.
 *
 * @description Creates a domain name list of a specified type (blacklist or whitelist) under the current tenant and returns the ListId of the new list. A maximum of 100 lists can be created for each list type per tenant.
 *
 * @param request CreateDomainMetaRequest
 * @return CreateDomainMetaResponse
 */
CreateDomainMetaResponse Client::createDomainMeta(const CreateDomainMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDomainMetaWithOptions(request, runtime);
}

/**
 * @summary Create dynamic routes for the current Alibaba Cloud account.
 *
 * @description By default, you can create a maximum of 100 dynamic routes.
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
    bodyFlat["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasApplicationType()) {
    body["ApplicationType"] = request.getApplicationType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDynamicRouteType()) {
    body["DynamicRouteType"] = request.getDynamicRouteType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNextHop()) {
    body["NextHop"] = request.getNextHop();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasRegionIds()) {
    bodyFlat["RegionIds"] = request.getRegionIds();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.getTagIds();
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
 * @summary Create dynamic routes for the current Alibaba Cloud account.
 *
 * @description By default, you can create a maximum of 100 dynamic routes.
 *
 * @param request CreateDynamicRouteRequest
 * @return CreateDynamicRouteResponse
 */
CreateDynamicRouteResponse Client::createDynamicRoute(const CreateDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary Creates an enterprise accelerate policy.
 *
 * @param request CreateEnterpriseAcceleratePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnterpriseAcceleratePolicyResponse
 */
CreateEnterpriseAcceleratePolicyResponse Client::createEnterpriseAcceleratePolicyWithOptions(const CreateEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccelerationType()) {
    body["AccelerationType"] = request.getAccelerationType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasShowInClient()) {
    body["ShowInClient"] = request.getShowInClient();
  }

  if (!!request.hasUpstreamHost()) {
    body["UpstreamHost"] = request.getUpstreamHost();
  }

  if (!!request.hasUpstreamPort()) {
    body["UpstreamPort"] = request.getUpstreamPort();
  }

  if (!!request.hasUpstreamType()) {
    body["UpstreamType"] = request.getUpstreamType();
  }

  if (!!request.hasUserAttributeGroup()) {
    body["UserAttributeGroup"] = request.getUserAttributeGroup();
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
 * @summary Creates an enterprise accelerate policy.
 *
 * @param request CreateEnterpriseAcceleratePolicyRequest
 * @return CreateEnterpriseAcceleratePolicyResponse
 */
CreateEnterpriseAcceleratePolicyResponse Client::createEnterpriseAcceleratePolicy(const CreateEnterpriseAcceleratePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

/**
 * @summary Creates enterprise acceleration addresses.
 *
 * @param request CreateEnterpriseAccelerateTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnterpriseAccelerateTargetResponse
 */
CreateEnterpriseAccelerateTargetResponse Client::createEnterpriseAccelerateTargetWithOptions(const CreateEnterpriseAccelerateTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.getEapId();
  }

  json bodyFlat = {};
  if (!!request.hasTarget()) {
    bodyFlat["Target"] = request.getTarget();
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
 * @summary Creates enterprise acceleration addresses.
 *
 * @param request CreateEnterpriseAccelerateTargetRequest
 * @return CreateEnterpriseAccelerateTargetResponse
 */
CreateEnterpriseAccelerateTargetResponse Client::createEnterpriseAccelerateTarget(const CreateEnterpriseAccelerateTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnterpriseAccelerateTargetWithOptions(request, runtime);
}

/**
 * @summary Creates a department for a custom identity source in the current Alibaba Cloud account.
 *
 * @param request CreateIdpDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdpDepartmentResponse
 */
CreateIdpDepartmentResponse Client::createIdpDepartmentWithOptions(const CreateIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentName()) {
    query["DepartmentName"] = request.getDepartmentName();
  }

  if (!!request.hasIdpConfigId()) {
    query["IdpConfigId"] = request.getIdpConfigId();
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
 * @summary Creates a department for a custom identity source in the current Alibaba Cloud account.
 *
 * @param request CreateIdpDepartmentRequest
 * @return CreateIdpDepartmentResponse
 */
CreateIdpDepartmentResponse Client::createIdpDepartment(const CreateIdpDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIdpDepartmentWithOptions(request, runtime);
}

/**
 * @summary Creates a diagnostic task for internal network access.
 *
 * @param tmpReq CreatePADiagnosisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePADiagnosisTaskResponse
 */
CreatePADiagnosisTaskResponse Client::createPADiagnosisTaskWithOptions(const CreatePADiagnosisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePADiagnosisTaskShrinkRequest request = CreatePADiagnosisTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUdpExtraConfigs()) {
    request.setUdpExtraConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUdpExtraConfigs(), "UdpExtraConfigs", "json"));
  }

  json body = {};
  if (!!request.hasDevTag()) {
    body["DevTag"] = request.getDevTag();
  }

  if (!!request.hasDiagnoseType()) {
    body["DiagnoseType"] = request.getDiagnoseType();
  }

  if (!!request.hasHost()) {
    body["Host"] = request.getHost();
  }

  if (!!request.hasPopId()) {
    body["PopId"] = request.getPopId();
  }

  if (!!request.hasPopMode()) {
    body["PopMode"] = request.getPopMode();
  }

  if (!!request.hasPort()) {
    body["Port"] = request.getPort();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.getProtocol();
  }

  if (!!request.hasUdpExtraConfigsShrink()) {
    body["UdpExtraConfigs"] = request.getUdpExtraConfigsShrink();
  }

  if (!!request.hasUserGroupId()) {
    body["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUsername()) {
    body["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePADiagnosisTask"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePADiagnosisTaskResponse>();
}

/**
 * @summary Creates a diagnostic task for internal network access.
 *
 * @param request CreatePADiagnosisTaskRequest
 * @return CreatePADiagnosisTaskResponse
 */
CreatePADiagnosisTaskResponse Client::createPADiagnosisTask(const CreatePADiagnosisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPADiagnosisTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an internal-facing access application under the current Alibaba Cloud account.
 *
 * @description You can create up to 500 internal-facing access applications by default.
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
    request.setL7ConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getL7Config(), "L7Config", "json"));
  }

  if (!!tmpReq.hasUnauthorizedAccessConfig()) {
    request.setUnauthorizedAccessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUnauthorizedAccessConfig(), "UnauthorizedAccessConfig", "json"));
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasAddressGroups()) {
    bodyFlat["AddressGroups"] = request.getAddressGroups();
  }

  if (!!request.hasAddresses()) {
    bodyFlat["Addresses"] = request.getAddresses();
  }

  if (!!request.hasBrowserAccessStatus()) {
    body["BrowserAccessStatus"] = request.getBrowserAccessStatus();
  }

  if (!!request.hasConfigMode()) {
    body["ConfigMode"] = request.getConfigMode();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasL7ConfigShrink()) {
    body["L7Config"] = request.getL7ConfigShrink();
  }

  if (!!request.hasL7ProxyDomainAutomaticPrefix()) {
    body["L7ProxyDomainAutomaticPrefix"] = request.getL7ProxyDomainAutomaticPrefix();
  }

  if (!!request.hasL7ProxyDomainCustom()) {
    body["L7ProxyDomainCustom"] = request.getL7ProxyDomainCustom();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPortRanges()) {
    bodyFlat["PortRanges"] = request.getPortRanges();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.getProtocol();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.getTagIds();
  }

  if (!!request.hasUnauthorizedAccessConfigShrink()) {
    body["UnauthorizedAccessConfig"] = request.getUnauthorizedAccessConfigShrink();
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
 * @summary Creates an internal-facing access application under the current Alibaba Cloud account.
 *
 * @description You can create up to 500 internal-facing access applications by default.
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
    bodyFlat["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasApplicationType()) {
    body["ApplicationType"] = request.getApplicationType();
  }

  if (!!request.hasCustomUserAttributes()) {
    bodyFlat["CustomUserAttributes"] = request.getCustomUserAttributes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDeviceAttributeAction()) {
    body["DeviceAttributeAction"] = request.getDeviceAttributeAction();
  }

  if (!!request.hasDeviceAttributeId()) {
    body["DeviceAttributeId"] = request.getDeviceAttributeId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPolicyAction()) {
    body["PolicyAction"] = request.getPolicyAction();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.getTagIds();
  }

  if (!!request.hasTriggerTemplateId()) {
    body["TriggerTemplateId"] = request.getTriggerTemplateId();
  }

  if (!!request.hasTrustedProcessGroupIds()) {
    bodyFlat["TrustedProcessGroupIds"] = request.getTrustedProcessGroupIds();
  }

  if (!!request.hasTrustedProcessStatus()) {
    body["TrustedProcessStatus"] = request.getTrustedProcessStatus();
  }

  if (!!request.hasTrustedSoftwareIds()) {
    bodyFlat["TrustedSoftwareIds"] = request.getTrustedSoftwareIds();
  }

  if (!!request.hasUserGroupIds()) {
    bodyFlat["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasUserGroupMode()) {
    body["UserGroupMode"] = request.getUserGroupMode();
  }

  if (!!request.hasValidFrom()) {
    body["ValidFrom"] = request.getValidFrom();
  }

  if (!!request.hasValidTimeStatus()) {
    body["ValidTimeStatus"] = request.getValidTimeStatus();
  }

  if (!!request.hasValidUntil()) {
    body["ValidUntil"] = request.getValidUntil();
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
 * @summary Creates a private access tag for the current Alibaba Cloud account.
 *
 * @description By default, you can create up to 500 private access tags.
 *
 * @param request CreatePrivateAccessTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrivateAccessTagResponse
 */
CreatePrivateAccessTagResponse Client::createPrivateAccessTagWithOptions(const CreatePrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Creates a private access tag for the current Alibaba Cloud account.
 *
 * @description By default, you can create up to 500 private access tags.
 *
 * @param request CreatePrivateAccessTagRequest
 * @return CreatePrivateAccessTagResponse
 */
CreatePrivateAccessTagResponse Client::createPrivateAccessTag(const CreatePrivateAccessTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrivateAccessTagWithOptions(request, runtime);
}

/**
 * @summary Create a device registration policy for your Alibaba Cloud account.
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
    request.setCompanyLimitCountShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCompanyLimitCount(), "CompanyLimitCount", "json"));
  }

  if (!!tmpReq.hasPersonalLimitCount()) {
    request.setPersonalLimitCountShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPersonalLimitCount(), "PersonalLimitCount", "json"));
  }

  json body = {};
  if (!!request.hasCompanyLimitCountShrink()) {
    body["CompanyLimitCount"] = request.getCompanyLimitCountShrink();
  }

  if (!!request.hasCompanyLimitType()) {
    body["CompanyLimitType"] = request.getCompanyLimitType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMatchMode()) {
    body["MatchMode"] = request.getMatchMode();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPersonalLimitCountShrink()) {
    body["PersonalLimitCount"] = request.getPersonalLimitCountShrink();
  }

  if (!!request.hasPersonalLimitType()) {
    body["PersonalLimitType"] = request.getPersonalLimitType();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  json bodyFlat = {};
  if (!!request.hasUserGroupIds()) {
    bodyFlat["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasWhitelist()) {
    bodyFlat["Whitelist"] = request.getWhitelist();
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
 * @summary Create a device registration policy for your Alibaba Cloud account.
 *
 * @param request CreateRegistrationPolicyRequest
 * @return CreateRegistrationPolicyResponse
 */
CreateRegistrationPolicyResponse Client::createRegistrationPolicy(const CreateRegistrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRegistrationPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a user group for your Alibaba Cloud account.
 *
 * @description You can create up to 500 user groups.
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
    bodyFlat["Attributes"] = request.getAttributes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Creates a user group for your Alibaba Cloud account.
 *
 * @description You can create up to 500 user groups.
 *
 * @param request CreateUserGroupRequest
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroup(const CreateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserGroupWithOptions(request, runtime);
}

/**
 * @summary Generates a transparent base image for web, screen, or app watermarks.
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
    request.setImageControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getImageControl(), "ImageControl", "json"));
  }

  json query = {};
  if (!!request.hasComment()) {
    query["comment"] = request.getComment();
  }

  json body = {};
  if (!!request.hasHeight()) {
    body["Height"] = request.getHeight();
  }

  if (!!request.hasImageControlShrink()) {
    body["ImageControl"] = request.getImageControlShrink();
  }

  if (!!request.hasOpacity()) {
    body["Opacity"] = request.getOpacity();
  }

  if (!!request.hasScale()) {
    body["Scale"] = request.getScale();
  }

  if (!!request.hasWidth()) {
    body["Width"] = request.getWidth();
  }

  if (!!request.hasWmInfoBytesB64()) {
    body["WmInfoBytesB64"] = request.getWmInfoBytesB64();
  }

  if (!!request.hasWmInfoSize()) {
    body["WmInfoSize"] = request.getWmInfoSize();
  }

  if (!!request.hasWmInfoUint()) {
    body["WmInfoUint"] = request.getWmInfoUint();
  }

  if (!!request.hasWmType()) {
    body["WmType"] = request.getWmType();
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
 * @summary Generates a transparent base image for web, screen, or app watermarks.
 *
 * @param request CreateWmBaseImageRequest
 * @return CreateWmBaseImageResponse
 */
CreateWmBaseImageResponse Client::createWmBaseImage(const CreateWmBaseImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWmBaseImageWithOptions(request, runtime);
}

/**
 * @summary Create a digital watermarking embedding Job.
 *
 * @description By default, you can create up to 500 groups.
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
    request.setAudioControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAudioControl(), "AudioControl", "json"));
  }

  if (!!tmpReq.hasCsvControl()) {
    request.setCsvControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCsvControl(), "CsvControl", "json"));
  }

  if (!!tmpReq.hasDocumentControl()) {
    request.setDocumentControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocumentControl(), "DocumentControl", "json"));
  }

  if (!!tmpReq.hasImageControl()) {
    request.setImageControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getImageControl(), "ImageControl", "json"));
  }

  if (!!tmpReq.hasVideoControl()) {
    request.setVideoControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVideoControl(), "VideoControl", "json"));
  }

  json body = {};
  if (!!request.hasAudioControlShrink()) {
    body["AudioControl"] = request.getAudioControlShrink();
  }

  if (!!request.hasCsvControlShrink()) {
    body["CsvControl"] = request.getCsvControlShrink();
  }

  if (!!request.hasDocumentControlShrink()) {
    body["DocumentControl"] = request.getDocumentControlShrink();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasFilename()) {
    body["Filename"] = request.getFilename();
  }

  if (!!request.hasImageControlShrink()) {
    body["ImageControl"] = request.getImageControlShrink();
  }

  if (!!request.hasImageEmbedJpegQuality()) {
    body["ImageEmbedJpegQuality"] = request.getImageEmbedJpegQuality();
  }

  if (!!request.hasImageEmbedLevel()) {
    body["ImageEmbedLevel"] = request.getImageEmbedLevel();
  }

  if (!!request.hasInvisibleEnable()) {
    body["InvisibleEnable"] = request.getInvisibleEnable();
  }

  if (!!request.hasVideoBitrate()) {
    body["VideoBitrate"] = request.getVideoBitrate();
  }

  if (!!request.hasVideoControlShrink()) {
    body["VideoControl"] = request.getVideoControlShrink();
  }

  if (!!request.hasVideoIsLong()) {
    body["VideoIsLong"] = request.getVideoIsLong();
  }

  if (!!request.hasWmInfoBytesB64()) {
    body["WmInfoBytesB64"] = request.getWmInfoBytesB64();
  }

  if (!!request.hasWmInfoSize()) {
    body["WmInfoSize"] = request.getWmInfoSize();
  }

  if (!!request.hasWmInfoUint()) {
    body["WmInfoUint"] = request.getWmInfoUint();
  }

  if (!!request.hasWmType()) {
    body["WmType"] = request.getWmType();
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
 * @summary Create a digital watermarking embedding Job.
 *
 * @description By default, you can create up to 500 groups.
 *
 * @param request CreateWmEmbedTaskRequest
 * @return CreateWmEmbedTaskResponse
 */
CreateWmEmbedTaskResponse Client::createWmEmbedTask(const CreateWmEmbedTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWmEmbedTaskWithOptions(request, runtime);
}

/**
 * @summary Create a digital watermarking fetch job.
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
    request.setCsvControlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCsvControl(), "CsvControl", "json"));
  }

  if (!!tmpReq.hasImageExtractParamsOpenApi()) {
    request.setImageExtractParamsOpenApiShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getImageExtractParamsOpenApi(), "ImageExtractParamsOpenApi", "json"));
  }

  json query = {};
  if (!!request.hasCsvControlShrink()) {
    query["CsvControl"] = request.getCsvControlShrink();
  }

  if (!!request.hasImageExtractParamsOpenApiShrink()) {
    query["ImageExtractParamsOpenApi"] = request.getImageExtractParamsOpenApiShrink();
  }

  if (!!request.hasIsClientEmbed()) {
    query["IsClientEmbed"] = request.getIsClientEmbed();
  }

  json body = {};
  if (!!request.hasDocumentIsCapture()) {
    body["DocumentIsCapture"] = request.getDocumentIsCapture();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasFilename()) {
    body["Filename"] = request.getFilename();
  }

  if (!!request.hasVideoIsLong()) {
    body["VideoIsLong"] = request.getVideoIsLong();
  }

  if (!!request.hasVideoSpeed()) {
    body["VideoSpeed"] = request.getVideoSpeed();
  }

  if (!!request.hasWmInfoSize()) {
    body["WmInfoSize"] = request.getWmInfoSize();
  }

  if (!!request.hasWmType()) {
    body["WmType"] = request.getWmType();
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
 * @summary Create a digital watermarking fetch job.
 *
 * @param request CreateWmExtractTaskRequest
 * @return CreateWmExtractTaskResponse
 */
CreateWmExtractTaskResponse Client::createWmExtractTask(const CreateWmExtractTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWmExtractTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a mapping from string-format watermark information to digital-format watermark information.
 *
 * @param request CreateWmInfoMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWmInfoMappingResponse
 */
CreateWmInfoMappingResponse Client::createWmInfoMappingWithOptions(const CreateWmInfoMappingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWmInfoBytesB64()) {
    body["WmInfoBytesB64"] = request.getWmInfoBytesB64();
  }

  if (!!request.hasWmInfoSize()) {
    body["WmInfoSize"] = request.getWmInfoSize();
  }

  if (!!request.hasWmType()) {
    body["WmType"] = request.getWmType();
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
 * @summary Creates a mapping from string-format watermark information to digital-format watermark information.
 *
 * @param request CreateWmInfoMappingRequest
 * @return CreateWmInfoMappingResponse
 */
CreateWmInfoMappingResponse Client::createWmInfoMapping(const CreateWmInfoMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWmInfoMappingWithOptions(request, runtime);
}

/**
 * @summary Deletes approval processes in batches from your Alibaba Cloud account.
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
    bodyFlat["ProcessIds"] = request.getProcessIds();
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
 * @summary Deletes approval processes in batches from your Alibaba Cloud account.
 *
 * @param request DeleteApprovalProcessesRequest
 * @return DeleteApprovalProcessesResponse
 */
DeleteApprovalProcessesResponse Client::deleteApprovalProcesses(const DeleteApprovalProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApprovalProcessesWithOptions(request, runtime);
}

/**
 * @summary Delete a specified user from your Alibaba Cloud account\\"s custom identity source.
 *
 * @param request DeleteClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientUserResponse
 */
DeleteClientUserResponse Client::deleteClientUserWithOptions(const DeleteClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
 * @summary Delete a specified user from your Alibaba Cloud account\\"s custom identity source.
 *
 * @param request DeleteClientUserRequest
 * @return DeleteClientUserResponse
 */
DeleteClientUserResponse Client::deleteClientUser(const DeleteClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a domain name list.
 *
 * @description Deletes a specified domain name list under the current tenant. Before deletion, the system checks whether any domain name policy references the list. If the list is referenced, the deletion is rejected.
 *
 * @param request DeleteDomainMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainMetaResponse
 */
DeleteDomainMetaResponse Client::deleteDomainMetaWithOptions(const DeleteDomainMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasListId()) {
    body["ListId"] = request.getListId();
  }

  if (!!request.hasListType()) {
    body["ListType"] = request.getListType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDomainMeta"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainMetaResponse>();
}

/**
 * @summary Deletes a domain name list.
 *
 * @description Deletes a specified domain name list under the current tenant. Before deletion, the system checks whether any domain name policy references the list. If the list is referenced, the deletion is rejected.
 *
 * @param request DeleteDomainMetaRequest
 * @return DeleteDomainMetaResponse
 */
DeleteDomainMetaResponse Client::deleteDomainMeta(const DeleteDomainMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainMetaWithOptions(request, runtime);
}

/**
 * @summary Delete a dynamic route from your current Alibaba Cloud account.
 *
 * @param request DeleteDynamicRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDynamicRouteResponse
 */
DeleteDynamicRouteResponse Client::deleteDynamicRouteWithOptions(const DeleteDynamicRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicRouteId()) {
    query["DynamicRouteId"] = request.getDynamicRouteId();
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
 * @summary Delete a dynamic route from your current Alibaba Cloud account.
 *
 * @param request DeleteDynamicRouteRequest
 * @return DeleteDynamicRouteResponse
 */
DeleteDynamicRouteResponse Client::deleteDynamicRoute(const DeleteDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary Deletes an enterprise acceleration policy.
 *
 * @param request DeleteEnterpriseAcceleratePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnterpriseAcceleratePolicyResponse
 */
DeleteEnterpriseAcceleratePolicyResponse Client::deleteEnterpriseAcceleratePolicyWithOptions(const DeleteEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.getEapId();
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
 * @summary Deletes an enterprise acceleration policy.
 *
 * @param request DeleteEnterpriseAcceleratePolicyRequest
 * @return DeleteEnterpriseAcceleratePolicyResponse
 */
DeleteEnterpriseAcceleratePolicyResponse Client::deleteEnterpriseAcceleratePolicy(const DeleteEnterpriseAcceleratePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes an enterprise acceleration address.
 *
 * @param request DeleteEnterpriseAccelerateTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnterpriseAccelerateTargetResponse
 */
DeleteEnterpriseAccelerateTargetResponse Client::deleteEnterpriseAccelerateTargetWithOptions(const DeleteEnterpriseAccelerateTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.getEapId();
  }

  json bodyFlat = {};
  if (!!request.hasTarget()) {
    bodyFlat["Target"] = request.getTarget();
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
 * @summary Deletes an enterprise acceleration address.
 *
 * @param request DeleteEnterpriseAccelerateTargetRequest
 * @return DeleteEnterpriseAccelerateTargetResponse
 */
DeleteEnterpriseAccelerateTargetResponse Client::deleteEnterpriseAccelerateTarget(const DeleteEnterpriseAccelerateTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnterpriseAccelerateTargetWithOptions(request, runtime);
}

/**
 * @summary Delete a department from a custom identity provider in your Alibaba Cloud account.
 *
 * @param request DeleteIdpDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIdpDepartmentResponse
 */
DeleteIdpDepartmentResponse Client::deleteIdpDepartmentWithOptions(const DeleteIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.getDepartmentId();
  }

  if (!!request.hasIdpConfigId()) {
    query["IdpConfigId"] = request.getIdpConfigId();
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
 * @summary Delete a department from a custom identity provider in your Alibaba Cloud account.
 *
 * @param request DeleteIdpDepartmentRequest
 * @return DeleteIdpDepartmentResponse
 */
DeleteIdpDepartmentResponse Client::deleteIdpDepartment(const DeleteIdpDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIdpDepartmentWithOptions(request, runtime);
}

/**
 * @summary Deletes a user\\"s One-Time Password (OTP) configuration.
 *
 * @param request DeleteOtpConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOtpConfigResponse
 */
DeleteOtpConfigResponse Client::deleteOtpConfigWithOptions(const DeleteOtpConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUsername()) {
    body["Username"] = request.getUsername();
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
 * @summary Deletes a user\\"s One-Time Password (OTP) configuration.
 *
 * @param request DeleteOtpConfigRequest
 * @return DeleteOtpConfigResponse
 */
DeleteOtpConfigResponse Client::deleteOtpConfig(const DeleteOtpConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOtpConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes an internal network access application from your Alibaba Cloud account.
 *
 * @description You cannot delete an application if it is referenced by an office zone or a policy. For more information, see:
 * - [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): Lists internal network access applications.
 * - [ListPrivateAccessPolicies](~~ListPrivateAccessPolices~~): Lists internal network access policies.
 *
 * @param request DeletePrivateAccessApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateAccessApplicationResponse
 */
DeletePrivateAccessApplicationResponse Client::deletePrivateAccessApplicationWithOptions(const DeletePrivateAccessApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.getApplicationId();
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
 * @summary Deletes an internal network access application from your Alibaba Cloud account.
 *
 * @description You cannot delete an application if it is referenced by an office zone or a policy. For more information, see:
 * - [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): Lists internal network access applications.
 * - [ListPrivateAccessPolicies](~~ListPrivateAccessPolices~~): Lists internal network access policies.
 *
 * @param request DeletePrivateAccessApplicationRequest
 * @return DeletePrivateAccessApplicationResponse
 */
DeletePrivateAccessApplicationResponse Client::deletePrivateAccessApplication(const DeletePrivateAccessApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateAccessApplicationWithOptions(request, runtime);
}

/**
 * @summary Deletes a private network access policy for the current Alibaba Cloud account.
 *
 * @param request DeletePrivateAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateAccessPolicyResponse
 */
DeletePrivateAccessPolicyResponse Client::deletePrivateAccessPolicyWithOptions(const DeletePrivateAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
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
 * @summary Deletes a private network access policy for the current Alibaba Cloud account.
 *
 * @param request DeletePrivateAccessPolicyRequest
 * @return DeletePrivateAccessPolicyResponse
 */
DeletePrivateAccessPolicyResponse Client::deletePrivateAccessPolicy(const DeletePrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes an internal access tag from the current Alibaba Cloud account.
 *
 * @description Deletion is not allowed when the tag is referenced by applications, office networks, or policies. References:
 * - [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): Lists internal access applications.
 * - [ListPrivateAccessTags](~~ListPrivateAccessTags~~): Lists internal access tags.
 * - [ListPrivateAccessPolices](~~ListPrivateAccessPolices~~): Lists internal access policies.
 *
 * @param request DeletePrivateAccessTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateAccessTagResponse
 */
DeletePrivateAccessTagResponse Client::deletePrivateAccessTagWithOptions(const DeletePrivateAccessTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTagId()) {
    body["TagId"] = request.getTagId();
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
 * @summary Deletes an internal access tag from the current Alibaba Cloud account.
 *
 * @description Deletion is not allowed when the tag is referenced by applications, office networks, or policies. References:
 * - [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): Lists internal access applications.
 * - [ListPrivateAccessTags](~~ListPrivateAccessTags~~): Lists internal access tags.
 * - [ListPrivateAccessPolices](~~ListPrivateAccessPolices~~): Lists internal access policies.
 *
 * @param request DeletePrivateAccessTagRequest
 * @return DeletePrivateAccessTagResponse
 */
DeletePrivateAccessTagResponse Client::deletePrivateAccessTag(const DeletePrivateAccessTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateAccessTagWithOptions(request, runtime);
}

/**
 * @summary Batch delete device registration policies under your Alibaba Cloud account.
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
    bodyFlat["PolicyIds"] = request.getPolicyIds();
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
 * @summary Batch delete device registration policies under your Alibaba Cloud account.
 *
 * @param request DeleteRegistrationPoliciesRequest
 * @return DeleteRegistrationPoliciesResponse
 */
DeleteRegistrationPoliciesResponse Client::deleteRegistrationPolicies(const DeleteRegistrationPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRegistrationPoliciesWithOptions(request, runtime);
}

/**
 * @summary Deletes user endpoint devices in batches.
 *
 * @description You can delete up to 100 devices at a time. Each device must be in a non-online status. If some device IDs in the specified collection do not meet the status requirement, only the devices that meet the requirement are deleted, and the operation still returns a success response.
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
    bodyFlat["DeviceTags"] = request.getDeviceTags();
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
 * @summary Deletes user endpoint devices in batches.
 *
 * @description You can delete up to 100 devices at a time. Each device must be in a non-online status. If some device IDs in the specified collection do not meet the status requirement, only the devices that meet the requirement are deleted, and the operation still returns a success response.
 *
 * @param request DeleteUserDevicesRequest
 * @return DeleteUserDevicesResponse
 */
DeleteUserDevicesResponse Client::deleteUserDevices(const DeleteUserDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserDevicesWithOptions(request, runtime);
}

/**
 * @summary Delete a user group in your Alibaba Cloud account.
 *
 * @description For more information, see:
 * - [ListPolicesForUserGroup](~~ListPolicesForUserGroup~~): Query policies attached to a user group.
 *
 * @param request DeleteUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroupWithOptions(const DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserGroupId()) {
    body["UserGroupId"] = request.getUserGroupId();
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
 * @summary Delete a user group in your Alibaba Cloud account.
 *
 * @description For more information, see:
 * - [ListPolicesForUserGroup](~~ListPolicesForUserGroup~~): Query policies attached to a user group.
 *
 * @param request DeleteUserGroupRequest
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroup(const DeleteUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserGroupWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DetachApplication2Connector is deprecated, please use csas::2023-01-20::ModifyForwardStrategy instead.
 *
 * @summary Detaches private network access applications from a Connector in your Alibaba Cloud account.
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
    request.setApplicationIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplicationIds(), "ApplicationIds", "json"));
  }

  json body = {};
  if (!!request.hasApplicationIdsShrink()) {
    body["ApplicationIds"] = request.getApplicationIdsShrink();
  }

  if (!!request.hasConnectorId()) {
    body["ConnectorId"] = request.getConnectorId();
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
 * @deprecated OpenAPI DetachApplication2Connector is deprecated, please use csas::2023-01-20::ModifyForwardStrategy instead.
 *
 * @summary Detaches private network access applications from a Connector in your Alibaba Cloud account.
 *
 * @param request DetachApplication2ConnectorRequest
 * @return DetachApplication2ConnectorResponse
 */
DetachApplication2ConnectorResponse Client::detachApplication2Connector(const DetachApplication2ConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachApplication2ConnectorWithOptions(request, runtime);
}

/**
 * @summary Detach a business policy from an approval process.
 *
 * @param request DetachPolicy2ApprovalProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachPolicy2ApprovalProcessResponse
 */
DetachPolicy2ApprovalProcessResponse Client::detachPolicy2ApprovalProcessWithOptions(const DetachPolicy2ApprovalProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicyType()) {
    body["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasProcessId()) {
    body["ProcessId"] = request.getProcessId();
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
 * @summary Detach a business policy from an approval process.
 *
 * @param request DetachPolicy2ApprovalProcessRequest
 * @return DetachPolicy2ApprovalProcessResponse
 */
DetachPolicy2ApprovalProcessResponse Client::detachPolicy2ApprovalProcess(const DetachPolicy2ApprovalProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPolicy2ApprovalProcessWithOptions(request, runtime);
}

/**
 * @summary Disables an enterprise acceleration policy.
 *
 * @param request DisableEnterpriseAcceleratePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableEnterpriseAcceleratePolicyResponse
 */
DisableEnterpriseAcceleratePolicyResponse Client::disableEnterpriseAcceleratePolicyWithOptions(const DisableEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.getEapId();
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
 * @summary Disables an enterprise acceleration policy.
 *
 * @param request DisableEnterpriseAcceleratePolicyRequest
 * @return DisableEnterpriseAcceleratePolicyResponse
 */
DisableEnterpriseAcceleratePolicyResponse Client::disableEnterpriseAcceleratePolicy(const DisableEnterpriseAcceleratePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

/**
 * @summary Enables an enterprise acceleration policy.
 *
 * @param request EnableEnterpriseAcceleratePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableEnterpriseAcceleratePolicyResponse
 */
EnableEnterpriseAcceleratePolicyResponse Client::enableEnterpriseAcceleratePolicyWithOptions(const EnableEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.getEapId();
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
 * @summary Enables an enterprise acceleration policy.
 *
 * @param request EnableEnterpriseAcceleratePolicyRequest
 * @return EnableEnterpriseAcceleratePolicyResponse
 */
EnableEnterpriseAcceleratePolicyResponse Client::enableEnterpriseAcceleratePolicy(const EnableEnterpriseAcceleratePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

/**
 * @summary Export a list of user terminal devices to an Excel file.
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
    bodyFlat["AppStatuses"] = request.getAppStatuses();
  }

  if (!!request.hasDepartment()) {
    body["Department"] = request.getDepartment();
  }

  if (!!request.hasDeviceBelong()) {
    body["DeviceBelong"] = request.getDeviceBelong();
  }

  if (!!request.hasDeviceStatuses()) {
    bodyFlat["DeviceStatuses"] = request.getDeviceStatuses();
  }

  if (!!request.hasDeviceTags()) {
    bodyFlat["DeviceTags"] = request.getDeviceTags();
  }

  if (!!request.hasDeviceTypes()) {
    bodyFlat["DeviceTypes"] = request.getDeviceTypes();
  }

  if (!!request.hasDlpStatuses()) {
    bodyFlat["DlpStatuses"] = request.getDlpStatuses();
  }

  if (!!request.hasHostname()) {
    body["Hostname"] = request.getHostname();
  }

  if (!!request.hasIaStatuses()) {
    bodyFlat["IaStatuses"] = request.getIaStatuses();
  }

  if (!!request.hasMac()) {
    body["Mac"] = request.getMac();
  }

  if (!!request.hasNacStatuses()) {
    bodyFlat["NacStatuses"] = request.getNacStatuses();
  }

  if (!!request.hasPaStatuses()) {
    bodyFlat["PaStatuses"] = request.getPaStatuses();
  }

  if (!!request.hasSaseUserId()) {
    body["SaseUserId"] = request.getSaseUserId();
  }

  if (!!request.hasSharingStatus()) {
    body["SharingStatus"] = request.getSharingStatus();
  }

  if (!!request.hasUsername()) {
    body["Username"] = request.getUsername();
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
 * @summary Export a list of user terminal devices to an Excel file.
 *
 * @param request ExportUserDevicesRequest
 * @return ExportUserDevicesResponse
 */
ExportUserDevicesResponse Client::exportUserDevices(const ExportUserDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportUserDevicesWithOptions(request, runtime);
}

/**
 * @summary Queries the identity provider configuration enabled for your Alibaba Cloud account.
 *
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
 * @summary Queries the identity provider configuration enabled for your Alibaba Cloud account.
 *
 * @return GetActiveIdpConfigResponse
 */
GetActiveIdpConfigResponse Client::getActiveIdpConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getActiveIdpConfigWithOptions(runtime);
}

/**
 * @summary Queries the details of an approval instance under the current Alibaba Cloud account.
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
 * @summary Queries the details of an approval instance under the current Alibaba Cloud account.
 *
 * @param request GetApprovalRequest
 * @return GetApprovalResponse
 */
GetApprovalResponse Client::getApproval(const GetApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApprovalWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an approval flow under the current Alibaba Cloud account.
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
 * @summary Queries the details of an approval flow under the current Alibaba Cloud account.
 *
 * @param request GetApprovalProcessRequest
 * @return GetApprovalProcessResponse
 */
GetApprovalProcessResponse Client::getApprovalProcess(const GetApprovalProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApprovalProcessWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an approval template for your Alibaba Cloud account.
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
 * @summary Retrieves the details of an approval template for your Alibaba Cloud account.
 *
 * @param request GetApprovalSchemaRequest
 * @return GetApprovalSchemaResponse
 */
GetApprovalSchemaResponse Client::getApprovalSchema(const GetApprovalSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApprovalSchemaWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the auto-start and anti-uninstall policy for your Alibaba Cloud account.
 *
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
 * @summary Queries the details of the auto-start and anti-uninstall policy for your Alibaba Cloud account.
 *
 * @return GetBootAndAntiUninstallPolicyResponse
 */
GetBootAndAntiUninstallPolicyResponse Client::getBootAndAntiUninstallPolicy() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBootAndAntiUninstallPolicyWithOptions(runtime);
}

/**
 * @summary Retrieves the details of a user from a custom identity source in your Alibaba Cloud account.
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
 * @summary Retrieves the details of a user from a custom identity source in your Alibaba Cloud account.
 *
 * @param request GetClientUserRequest
 * @return GetClientUserResponse
 */
GetClientUserResponse Client::getClientUser(const GetClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientUserWithOptions(request, runtime);
}

/**
 * @summary Retrieves details about a dynamic route in your Alibaba Cloud account.
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
 * @summary Retrieves details about a dynamic route in your Alibaba Cloud account.
 *
 * @param request GetDynamicRouteRequest
 * @return GetDynamicRouteResponse
 */
GetDynamicRouteResponse Client::getDynamicRoute(const GetDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary Retrieve the configuration details of a specified identity provider for your Alibaba Cloud account.
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
 * @summary Retrieve the configuration details of a specified identity provider for your Alibaba Cloud account.
 *
 * @param request GetIdpConfigRequest
 * @return GetIdpConfigResponse
 */
GetIdpConfigResponse Client::getIdpConfig(const GetIdpConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdpConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the phone number whitelist for visitor admission SMS logon.
 *
 * @description Retrieves all phone numbers in the whitelist.
 *
 * @param request GetNacPortalSmsPhoneWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNacPortalSmsPhoneWhitelistResponse
 */
GetNacPortalSmsPhoneWhitelistResponse Client::getNacPortalSmsPhoneWhitelistWithOptions(const GetNacPortalSmsPhoneWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetNacPortalSmsPhoneWhitelist"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNacPortalSmsPhoneWhitelistResponse>();
}

/**
 * @summary Retrieves the phone number whitelist for visitor admission SMS logon.
 *
 * @description Retrieves all phone numbers in the whitelist.
 *
 * @param request GetNacPortalSmsPhoneWhitelistRequest
 * @return GetNacPortalSmsPhoneWhitelistResponse
 */
GetNacPortalSmsPhoneWhitelistResponse Client::getNacPortalSmsPhoneWhitelist(const GetNacPortalSmsPhoneWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNacPortalSmsPhoneWhitelistWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a private access diagnostic task.
 *
 * @param request GetPADiagnosisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPADiagnosisTaskResponse
 */
GetPADiagnosisTaskResponse Client::getPADiagnosisTaskWithOptions(const GetPADiagnosisTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPADiagnosisTask"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPADiagnosisTaskResponse>();
}

/**
 * @summary Retrieves the details of a private access diagnostic task.
 *
 * @param request GetPADiagnosisTaskRequest
 * @return GetPADiagnosisTaskResponse
 */
GetPADiagnosisTaskResponse Client::getPADiagnosisTask(const GetPADiagnosisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPADiagnosisTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an internal-facing access application under the current Alibaba Cloud account.
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
 * @summary Queries the details of an internal-facing access application under the current Alibaba Cloud account.
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
 * @summary Queries the details of a device registration policy within the current Alibaba Cloud account.
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
 * @summary Queries the details of a device registration policy within the current Alibaba Cloud account.
 *
 * @param request GetRegistrationPolicyRequest
 * @return GetRegistrationPolicyResponse
 */
GetRegistrationPolicyResponse Client::getRegistrationPolicy(const GetRegistrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRegistrationPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a user endpoint device under the current Alibaba Cloud account.
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
 * @summary Queries the details of a user endpoint device under the current Alibaba Cloud account.
 *
 * @param request GetUserDeviceRequest
 * @return GetUserDeviceResponse
 */
GetUserDeviceResponse Client::getUserDevice(const GetUserDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserDeviceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a user group in the current Alibaba Cloud account.
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
 * @summary Queries the details of a user group in the current Alibaba Cloud account.
 *
 * @param request GetUserGroupRequest
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroup(const GetUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserGroupWithOptions(request, runtime);
}

/**
 * @summary Use the job ID obtained from creating a watermark embedding job to query the embedding job result.
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
 * @summary Use the job ID obtained from creating a watermark embedding job to query the embedding job result.
 *
 * @param request GetWmEmbedTaskRequest
 * @return GetWmEmbedTaskResponse
 */
GetWmEmbedTaskResponse Client::getWmEmbedTask(const GetWmEmbedTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWmEmbedTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the result of a watermark extraction task using the task ID that is returned when you create the task.
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
 * @summary Queries the result of a watermark extraction task using the task ID that is returned when you create the task.
 *
 * @param request GetWmExtractTaskRequest
 * @return GetWmExtractTaskResponse
 */
GetWmExtractTaskResponse Client::getWmExtractTask(const GetWmExtractTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWmExtractTaskWithOptions(request, runtime);
}

/**
 * @summary Batch import acceleration addresses.
 *
 * @param request ImportEnterpriseAccelerateTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportEnterpriseAccelerateTargetsResponse
 */
ImportEnterpriseAccelerateTargetsResponse Client::importEnterpriseAccelerateTargetsWithOptions(const ImportEnterpriseAccelerateTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEapId()) {
    body["EapId"] = request.getEapId();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
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
 * @summary Batch import acceleration addresses.
 *
 * @param request ImportEnterpriseAccelerateTargetsRequest
 * @return ImportEnterpriseAccelerateTargetsResponse
 */
ImportEnterpriseAccelerateTargetsResponse Client::importEnterpriseAccelerateTargets(const ImportEnterpriseAccelerateTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importEnterpriseAccelerateTargetsWithOptions(request, runtime);
}

/**
 * @summary Queries the applications associated with one or more private access policies.
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
 * @summary Queries the applications associated with one or more private access policies.
 *
 * @param request ListApplicationsForPrivateAccessPolicyRequest
 * @return ListApplicationsForPrivateAccessPolicyResponse
 */
ListApplicationsForPrivateAccessPolicyResponse Client::listApplicationsForPrivateAccessPolicy(const ListApplicationsForPrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForPrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Batch-query applications associated with private network access tags within your Alibaba Cloud account.
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
 * @summary Batch-query applications associated with private network access tags within your Alibaba Cloud account.
 *
 * @param request ListApplicationsForPrivateAccessTagRequest
 * @return ListApplicationsForPrivateAccessTagResponse
 */
ListApplicationsForPrivateAccessTagResponse Client::listApplicationsForPrivateAccessTag(const ListApplicationsForPrivateAccessTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForPrivateAccessTagWithOptions(request, runtime);
}

/**
 * @summary Queries the list of approval processes under the current Alibaba Cloud account.
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
 * @summary Queries the list of approval processes under the current Alibaba Cloud account.
 *
 * @param request ListApprovalProcessesRequest
 * @return ListApprovalProcessesResponse
 */
ListApprovalProcessesResponse Client::listApprovalProcesses(const ListApprovalProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalProcessesWithOptions(request, runtime);
}

/**
 * @summary Queries the approval flows associated with approval rendering templates.
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
 * @summary Queries the approval flows associated with approval rendering templates.
 *
 * @param request ListApprovalProcessesForApprovalSchemasRequest
 * @return ListApprovalProcessesForApprovalSchemasResponse
 */
ListApprovalProcessesForApprovalSchemasResponse Client::listApprovalProcessesForApprovalSchemas(const ListApprovalProcessesForApprovalSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalProcessesForApprovalSchemasWithOptions(request, runtime);
}

/**
 * @summary Lists the approval templates for your Alibaba Cloud account.
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
 * @summary Lists the approval templates for your Alibaba Cloud account.
 *
 * @param request ListApprovalSchemasRequest
 * @return ListApprovalSchemasResponse
 */
ListApprovalSchemasResponse Client::listApprovalSchemas(const ListApprovalSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalSchemasWithOptions(request, runtime);
}

/**
 * @summary Queries the rendering templates associated with approval processes.
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
 * @summary Queries the rendering templates associated with approval processes.
 *
 * @param request ListApprovalSchemasForApprovalProcessesRequest
 * @return ListApprovalSchemasForApprovalProcessesResponse
 */
ListApprovalSchemasForApprovalProcessesResponse Client::listApprovalSchemasForApprovalProcesses(const ListApprovalSchemasForApprovalProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalSchemasForApprovalProcessesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of approval instances under the current Alibaba Cloud account.
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
 * @summary Queries the list of approval instances under the current Alibaba Cloud account.
 *
 * @param request ListApprovalsRequest
 * @return ListApprovalsResponse
 */
ListApprovalsResponse Client::listApprovals(const ListApprovalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalsWithOptions(request, runtime);
}

/**
 * @summary Query user information from custom identity sources in your Alibaba Cloud account.
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
 * @summary Query user information from custom identity sources in your Alibaba Cloud account.
 *
 * @param request ListClientUsersRequest
 * @return ListClientUsersResponse
 */
ListClientUsersResponse Client::listClientUsers(const ListClientUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientUsersWithOptions(request, runtime);
}

/**
 * @summary Query connectors in batches.
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
 * @summary Query connectors in batches.
 *
 * @param request ListConnectorsRequest
 * @return ListConnectorsResponse
 */
ListConnectorsResponse Client::listConnectors(const ListConnectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConnectorsWithOptions(request, runtime);
}

/**
 * @summary Queries domain name entries in a domain name list by paging.
 *
 * @description Queries the details of domain name entries in a specified domain name list by paging. Use this operation together with ListDomainMetas: first obtain the `ListId`, and then use this operation to perform paging through the domain names in the list.
 *
 * @param request ListDomainItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDomainItemsResponse
 */
ListDomainItemsResponse Client::listDomainItemsWithOptions(const ListDomainItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasItemValue()) {
    query["ItemValue"] = request.getItemValue();
  }

  if (!!request.hasListId()) {
    query["ListId"] = request.getListId();
  }

  if (!!request.hasListType()) {
    query["ListType"] = request.getListType();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDomainItems"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDomainItemsResponse>();
}

/**
 * @summary Queries domain name entries in a domain name list by paging.
 *
 * @description Queries the details of domain name entries in a specified domain name list by paging. Use this operation together with ListDomainMetas: first obtain the `ListId`, and then use this operation to perform paging through the domain names in the list.
 *
 * @param request ListDomainItemsRequest
 * @return ListDomainItemsResponse
 */
ListDomainItemsResponse Client::listDomainItems(const ListDomainItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDomainItemsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of domain name lists.
 *
 * @description Performs a paged query on the metadata of domain name lists (the header information of domain name blacklists/whitelists, excluding the specific domain name entries within the lists) for the current tenant with paging. You can filter by list type (blacklist/whitelist), perform fuzzy search by name, and specify whether to include system built-in default template lists in the results. Each record includes the number of domain name entries in the list.
 *
 * @param request ListDomainMetasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDomainMetasResponse
 */
ListDomainMetasResponse Client::listDomainMetasWithOptions(const ListDomainMetasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDefaultTemplate()) {
    query["DefaultTemplate"] = request.getDefaultTemplate();
  }

  if (!!request.hasListType()) {
    query["ListType"] = request.getListType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDomainMetas"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDomainMetasResponse>();
}

/**
 * @summary Queries the list of domain name lists.
 *
 * @description Performs a paged query on the metadata of domain name lists (the header information of domain name blacklists/whitelists, excluding the specific domain name entries within the lists) for the current tenant with paging. You can filter by list type (blacklist/whitelist), perform fuzzy search by name, and specify whether to include system built-in default template lists in the results. Each record includes the number of domain name entries in the list.
 *
 * @param request ListDomainMetasRequest
 * @return ListDomainMetasResponse
 */
ListDomainMetasResponse Client::listDomainMetas(const ListDomainMetasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDomainMetasWithOptions(request, runtime);
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
 * @summary Queries the regions that are supported by the access points of SASE POP clusters for your Alibaba Cloud account.
 *
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
 * @summary Queries the regions that are supported by the access points of SASE POP clusters for your Alibaba Cloud account.
 *
 * @return ListDynamicRouteRegionsResponse
 */
ListDynamicRouteRegionsResponse Client::listDynamicRouteRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDynamicRouteRegionsWithOptions(runtime);
}

/**
 * @summary Retrieves information about all dynamic routes for the current Alibaba Cloud account.
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
 * @summary Retrieves information about all dynamic routes for the current Alibaba Cloud account.
 *
 * @param request ListDynamicRoutesRequest
 * @return ListDynamicRoutesResponse
 */
ListDynamicRoutesResponse Client::listDynamicRoutes(const ListDynamicRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDynamicRoutesWithOptions(request, runtime);
}

/**
 * @summary Queries audit logs for enterprise acceleration.
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
 * @summary Queries audit logs for enterprise acceleration.
 *
 * @param request ListEnterpriseAccelerateLogsRequest
 * @return ListEnterpriseAccelerateLogsResponse
 */
ListEnterpriseAccelerateLogsResponse Client::listEnterpriseAccelerateLogs(const ListEnterpriseAccelerateLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnterpriseAccelerateLogsWithOptions(request, runtime);
}

/**
 * @summary Query acceleration policies
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
 * @summary Query acceleration policies
 *
 * @param request ListEnterpriseAcceleratePoliciesRequest
 * @return ListEnterpriseAcceleratePoliciesResponse
 */
ListEnterpriseAcceleratePoliciesResponse Client::listEnterpriseAcceleratePolicies(const ListEnterpriseAcceleratePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnterpriseAcceleratePoliciesWithOptions(request, runtime);
}

/**
 * @summary Query the list of enterprise acceleration targets.
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
 * @summary Query the list of enterprise acceleration targets.
 *
 * @param request ListEnterpriseAccelerateTargetsRequest
 * @return ListEnterpriseAccelerateTargetsResponse
 */
ListEnterpriseAccelerateTargetsResponse Client::listEnterpriseAccelerateTargets(const ListEnterpriseAccelerateTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnterpriseAccelerateTargetsWithOptions(request, runtime);
}

/**
 * @summary Lists excess end-user device registration applications in the current Alibaba Cloud account.
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
 * @summary Lists excess end-user device registration applications in the current Alibaba Cloud account.
 *
 * @param request ListExcessiveDeviceRegistrationApplicationsRequest
 * @return ListExcessiveDeviceRegistrationApplicationsResponse
 */
ListExcessiveDeviceRegistrationApplicationsResponse Client::listExcessiveDeviceRegistrationApplications(const ListExcessiveDeviceRegistrationApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExcessiveDeviceRegistrationApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries forwarding rules in batches.
 *
 * @param request ListForwardStrategiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListForwardStrategiesResponse
 */
ListForwardStrategiesResponse Client::listForwardStrategiesWithOptions(const ListForwardStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListForwardStrategies"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListForwardStrategiesResponse>();
}

/**
 * @summary Queries forwarding rules in batches.
 *
 * @param request ListForwardStrategiesRequest
 * @return ListForwardStrategiesResponse
 */
ListForwardStrategiesResponse Client::listForwardStrategies(const ListForwardStrategiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listForwardStrategiesWithOptions(request, runtime);
}

/**
 * @summary Queries the bindings of forwarding rules in batches.
 *
 * @param request ListForwardStrategyBindingItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListForwardStrategyBindingItemsResponse
 */
ListForwardStrategyBindingItemsResponse Client::listForwardStrategyBindingItemsWithOptions(const ListForwardStrategyBindingItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListForwardStrategyBindingItems"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListForwardStrategyBindingItemsResponse>();
}

/**
 * @summary Queries the bindings of forwarding rules in batches.
 *
 * @param request ListForwardStrategyBindingItemsRequest
 * @return ListForwardStrategyBindingItemsResponse
 */
ListForwardStrategyBindingItemsResponse Client::listForwardStrategyBindingItems(const ListForwardStrategyBindingItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listForwardStrategyBindingItemsWithOptions(request, runtime);
}

/**
 * @summary Lists identity provider configurations for the current Alibaba Cloud account.
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
 * @summary Lists identity provider configurations for the current Alibaba Cloud account.
 *
 * @param request ListIdpConfigsRequest
 * @return ListIdpConfigsResponse
 */
ListIdpConfigsResponse Client::listIdpConfigs(const ListIdpConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdpConfigsWithOptions(request, runtime);
}

/**
 * @summary Retrieves department information for a custom identity provider (IdP) associated with your Alibaba Cloud account.
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
 * @summary Retrieves department information for a custom identity provider (IdP) associated with your Alibaba Cloud account.
 *
 * @param request ListIdpDepartmentsRequest
 * @return ListIdpDepartmentsResponse
 */
ListIdpDepartmentsResponse Client::listIdpDepartments(const ListIdpDepartmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdpDepartmentsWithOptions(request, runtime);
}

/**
 * @summary Lists onboarded users.
 *
 * @param request ListNacUserCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNacUserCertResponse
 */
ListNacUserCertResponse Client::listNacUserCertWithOptions(const ListNacUserCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDepartment()) {
    query["Department"] = request.getDepartment();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
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
 * @summary Lists onboarded users.
 *
 * @param request ListNacUserCertRequest
 * @return ListNacUserCertResponse
 */
ListNacUserCertResponse Client::listNacUserCert(const ListNacUserCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNacUserCertWithOptions(request, runtime);
}

/**
 * @summary Queries policies for private access applications in your Alibaba Cloud account in batches.
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
 * @summary Queries policies for private access applications in your Alibaba Cloud account in batches.
 *
 * @param request ListPolicesForPrivateAccessApplicationRequest
 * @return ListPolicesForPrivateAccessApplicationResponse
 */
ListPolicesForPrivateAccessApplicationResponse Client::listPolicesForPrivateAccessApplication(const ListPolicesForPrivateAccessApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicesForPrivateAccessApplicationWithOptions(request, runtime);
}

/**
 * @summary Batch query policies for private network access tags in your Alibaba Cloud account.
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
 * @summary Batch query policies for private network access tags in your Alibaba Cloud account.
 *
 * @param request ListPolicesForPrivateAccessTagRequest
 * @return ListPolicesForPrivateAccessTagResponse
 */
ListPolicesForPrivateAccessTagResponse Client::listPolicesForPrivateAccessTag(const ListPolicesForPrivateAccessTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicesForPrivateAccessTagWithOptions(request, runtime);
}

/**
 * @summary Queries policies for multiple user groups within your Alibaba Cloud account.
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
 * @summary Queries policies for multiple user groups within your Alibaba Cloud account.
 *
 * @param request ListPolicesForUserGroupRequest
 * @return ListPolicesForUserGroupResponse
 */
ListPolicesForUserGroupResponse Client::listPolicesForUserGroup(const ListPolicesForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicesForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves bandwidth usage statistics for Secure Access Service Edge (SASE) points of presence (POPs).
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
 * @summary Retrieves bandwidth usage statistics for Secure Access Service Edge (SASE) points of presence (POPs).
 *
 * @param request ListPopTrafficStatisticsRequest
 * @return ListPopTrafficStatisticsResponse
 */
ListPopTrafficStatisticsResponse Client::listPopTrafficStatistics(const ListPopTrafficStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPopTrafficStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries information about all internal-facing access applications under the current Alibaba Cloud account.
 *
 * @param request ListPrivateAccessApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivateAccessApplicationsResponse
 */
ListPrivateAccessApplicationsResponse Client::listPrivateAccessApplicationsWithOptions(const ListPrivateAccessApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessModes()) {
    query["AccessModes"] = request.getAccessModes();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.getTagId();
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
 * @summary Queries information about all internal-facing access applications under the current Alibaba Cloud account.
 *
 * @param request ListPrivateAccessApplicationsRequest
 * @return ListPrivateAccessApplicationsResponse
 */
ListPrivateAccessApplicationsResponse Client::listPrivateAccessApplications(const ListPrivateAccessApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivateAccessApplicationsWithOptions(request, runtime);
}

/**
 * @summary List private access applications for dynamic routes in your Alibaba Cloud account.
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
 * @summary List private access applications for dynamic routes in your Alibaba Cloud account.
 *
 * @param request ListPrivateAccessApplicationsForDynamicRouteRequest
 * @return ListPrivateAccessApplicationsForDynamicRouteResponse
 */
ListPrivateAccessApplicationsForDynamicRouteResponse Client::listPrivateAccessApplicationsForDynamicRoute(const ListPrivateAccessApplicationsForDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivateAccessApplicationsForDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all private access policies under the current Alibaba Cloud account.
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
 * @summary Queries the information about all private access policies under the current Alibaba Cloud account.
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
 * @summary Lists the tags for dynamic routes in your Alibaba Cloud account.
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
 * @summary Lists the tags for dynamic routes in your Alibaba Cloud account.
 *
 * @param request ListPrivateAccessTagsForDynamicRouteRequest
 * @return ListPrivateAccessTagsForDynamicRouteResponse
 */
ListPrivateAccessTagsForDynamicRouteResponse Client::listPrivateAccessTagsForDynamicRoute(const ListPrivateAccessTagsForDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivateAccessTagsForDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary Query the list of device registration policies for your Alibaba Cloud account.
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
 * @summary Query the list of device registration policies for your Alibaba Cloud account.
 *
 * @param request ListRegistrationPoliciesRequest
 * @return ListRegistrationPoliciesResponse
 */
ListRegistrationPoliciesResponse Client::listRegistrationPolicies(const ListRegistrationPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegistrationPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the device registration policies that are associated with user groups in your Alibaba Cloud account.
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
 * @summary Queries the device registration policies that are associated with user groups in your Alibaba Cloud account.
 *
 * @param request ListRegistrationPoliciesForUserGroupRequest
 * @return ListRegistrationPoliciesForUserGroupResponse
 */
ListRegistrationPoliciesForUserGroupResponse Client::listRegistrationPoliciesForUserGroup(const ListRegistrationPoliciesForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegistrationPoliciesForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the list of risk events under the current Alibaba Cloud account.
 *
 * @description ## Operation description
 * - This operation performs paging query of risk events based on specified conditional criteria.
 * - `CurrentPage` and `PageSize` are required parameters that specify the current page number and the number of entries per page.
 * - You can set parameters such as `RiskId`, `RiskScene`, and `RiskCategory` to perform exact or fuzzy queries for specific risk events.
 * - The `Status` and `StatusList` parameters cannot be used at the same time. They are used to filter risk events by disposition status.
 * - Fuzzy matching is supported for `PolicyName` and `Username`.
 * - The response includes the total number of risk events that match the query conditions and their details.
 *
 * @param request ListRiskItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRiskItemsResponse
 */
ListRiskItemsResponse Client::listRiskItemsWithOptions(const ListRiskItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasRiskCategory()) {
    query["RiskCategory"] = request.getRiskCategory();
  }

  if (!!request.hasRiskId()) {
    query["RiskId"] = request.getRiskId();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasRiskScene()) {
    query["RiskScene"] = request.getRiskScene();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.getStatusList();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRiskItems"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRiskItemsResponse>();
}

/**
 * @summary Queries the list of risk events under the current Alibaba Cloud account.
 *
 * @description ## Operation description
 * - This operation performs paging query of risk events based on specified conditional criteria.
 * - `CurrentPage` and `PageSize` are required parameters that specify the current page number and the number of entries per page.
 * - You can set parameters such as `RiskId`, `RiskScene`, and `RiskCategory` to perform exact or fuzzy queries for specific risk events.
 * - The `Status` and `StatusList` parameters cannot be used at the same time. They are used to filter risk events by disposition status.
 * - Fuzzy matching is supported for `PolicyName` and `Username`.
 * - The response includes the total number of risk events that match the query conditions and their details.
 *
 * @param request ListRiskItemsRequest
 * @return ListRiskItemsResponse
 */
ListRiskItemsResponse Client::listRiskItems(const ListRiskItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRiskItemsWithOptions(request, runtime);
}

/**
 * @summary Lists the software installed on a user device.
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
 * @summary Lists the software installed on a user device.
 *
 * @param request ListSoftwareForUserDeviceRequest
 * @return ListSoftwareForUserDeviceResponse
 */
ListSoftwareForUserDeviceResponse Client::listSoftwareForUserDevice(const ListSoftwareForUserDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSoftwareForUserDeviceWithOptions(request, runtime);
}

/**
 * @summary Batch query tags for private network access applications under the current Alibaba Cloud account.
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
 * @summary Batch query tags for private network access applications under the current Alibaba Cloud account.
 *
 * @param request ListTagsForPrivateAccessApplicationRequest
 * @return ListTagsForPrivateAccessApplicationResponse
 */
ListTagsForPrivateAccessApplicationResponse Client::listTagsForPrivateAccessApplication(const ListTagsForPrivateAccessApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagsForPrivateAccessApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the tags of internal network access policies in your Alibaba Cloud account.
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
 * @summary Queries the tags of internal network access policies in your Alibaba Cloud account.
 *
 * @param request ListTagsForPrivateAccessPolicyRequest
 * @return ListTagsForPrivateAccessPolicyResponse
 */
ListTagsForPrivateAccessPolicyResponse Client::listTagsForPrivateAccessPolicy(const ListTagsForPrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagsForPrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of uninstallation requests for your Alibaba Cloud account.
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
 * @summary Retrieves a list of uninstallation requests for your Alibaba Cloud account.
 *
 * @param request ListUninstallApplicationsRequest
 * @return ListUninstallApplicationsResponse
 */
ListUninstallApplicationsResponse Client::listUninstallApplications(const ListUninstallApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUninstallApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries the application permissions of the logged-in user in the current Alibaba Cloud account.
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
 * @summary Queries the application permissions of the logged-in user in the current Alibaba Cloud account.
 *
 * @param request ListUserApplicationsRequest
 * @return ListUserApplicationsResponse
 */
ListUserApplicationsResponse Client::listUserApplications(const ListUserApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of user endpoint devices under the current Alibaba Cloud account.
 *
 * @param request ListUserDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserDevicesResponse
 */
ListUserDevicesResponse Client::listUserDevicesWithOptions(const ListUserDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppStatuses()) {
    query["AppStatuses"] = request.getAppStatuses();
  }

  if (!!request.hasAppVersions()) {
    query["AppVersions"] = request.getAppVersions();
  }

  if (!!request.hasAutoLoginStatuses()) {
    query["AutoLoginStatuses"] = request.getAutoLoginStatuses();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDepartment()) {
    query["Department"] = request.getDepartment();
  }

  if (!!request.hasDeviceBelong()) {
    query["DeviceBelong"] = request.getDeviceBelong();
  }

  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.getDeviceGroupId();
  }

  if (!!request.hasDeviceStatuses()) {
    query["DeviceStatuses"] = request.getDeviceStatuses();
  }

  if (!!request.hasDeviceTags()) {
    query["DeviceTags"] = request.getDeviceTags();
  }

  if (!!request.hasDeviceTypes()) {
    query["DeviceTypes"] = request.getDeviceTypes();
  }

  if (!!request.hasDlpStatuses()) {
    query["DlpStatuses"] = request.getDlpStatuses();
  }

  if (!!request.hasHostname()) {
    query["Hostname"] = request.getHostname();
  }

  if (!!request.hasIaStatuses()) {
    query["IaStatuses"] = request.getIaStatuses();
  }

  if (!!request.hasInnerIp()) {
    query["InnerIp"] = request.getInnerIp();
  }

  if (!!request.hasMac()) {
    query["Mac"] = request.getMac();
  }

  if (!!request.hasNacStatuses()) {
    query["NacStatuses"] = request.getNacStatuses();
  }

  if (!!request.hasPaStatuses()) {
    query["PaStatuses"] = request.getPaStatuses();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSaseUserId()) {
    query["SaseUserId"] = request.getSaseUserId();
  }

  if (!!request.hasSharingStatus()) {
    query["SharingStatus"] = request.getSharingStatus();
  }

  if (!!request.hasSnBios()) {
    query["SnBios"] = request.getSnBios();
  }

  if (!!request.hasSnSystem()) {
    query["SnSystem"] = request.getSnSystem();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  if (!!request.hasWorkshop()) {
    query["Workshop"] = request.getWorkshop();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserDevices"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserDevicesResponse>();
}

/**
 * @summary Queries the list of user endpoint devices under the current Alibaba Cloud account.
 *
 * @param request ListUserDevicesRequest
 * @return ListUserDevicesResponse
 */
ListUserDevicesResponse Client::listUserDevices(const ListUserDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserDevicesWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about all user groups in your Alibaba Cloud account.
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
 * @summary Retrieves information about all user groups in your Alibaba Cloud account.
 *
 * @param request ListUserGroupsRequest
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroups(const ListUserGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsWithOptions(request, runtime);
}

/**
 * @summary Retrieve user groups for private network access policies in batches under your Alibaba Cloud account.
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
 * @summary Retrieve user groups for private network access policies in batches under your Alibaba Cloud account.
 *
 * @param request ListUserGroupsForPrivateAccessPolicyRequest
 * @return ListUserGroupsForPrivateAccessPolicyResponse
 */
ListUserGroupsForPrivateAccessPolicyResponse Client::listUserGroupsForPrivateAccessPolicy(const ListUserGroupsForPrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsForPrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Lists the user groups associated with device registration policies in your Alibaba Cloud account.
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
 * @summary Lists the user groups associated with device registration policies in your Alibaba Cloud account.
 *
 * @param request ListUserGroupsForRegistrationPolicyRequest
 * @return ListUserGroupsForRegistrationPolicyResponse
 */
ListUserGroupsForRegistrationPolicyResponse Client::listUserGroupsForRegistrationPolicy(const ListUserGroupsForRegistrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsForRegistrationPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of user zero trust policies.
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
 * @summary Queries the list of user zero trust policies.
 *
 * @param request ListUserPrivateAccessPoliciesRequest
 * @return ListUserPrivateAccessPoliciesResponse
 */
ListUserPrivateAccessPoliciesResponse Client::listUserPrivateAccessPolicies(const ListUserPrivateAccessPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserPrivateAccessPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the users for the current Alibaba Cloud account.
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
 * @summary Queries the users for the current Alibaba Cloud account.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Look up an existing watermark information mapping to retrieve the corresponding string-formatted watermark information from numeric-formatted watermark data.
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
 * @summary Look up an existing watermark information mapping to retrieve the corresponding string-formatted watermark information from numeric-formatted watermark data.
 *
 * @param request LookupWmInfoMappingRequest
 * @return LookupWmInfoMappingResponse
 */
LookupWmInfoMappingResponse Client::lookupWmInfoMapping(const LookupWmInfoMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lookupWmInfoMappingWithOptions(request, runtime);
}

/**
 * @summary Modifies an enterprise acceleration policy.
 *
 * @param request ModifyEnterpriseAcceleratePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEnterpriseAcceleratePolicyResponse
 */
ModifyEnterpriseAcceleratePolicyResponse Client::modifyEnterpriseAcceleratePolicyWithOptions(const ModifyEnterpriseAcceleratePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccelerationType()) {
    body["AccelerationType"] = request.getAccelerationType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEapId()) {
    body["EapId"] = request.getEapId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOnTls()) {
    body["OnTls"] = request.getOnTls();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasShowInClient()) {
    body["ShowInClient"] = request.getShowInClient();
  }

  if (!!request.hasUpstreamHost()) {
    body["UpstreamHost"] = request.getUpstreamHost();
  }

  if (!!request.hasUpstreamPort()) {
    body["UpstreamPort"] = request.getUpstreamPort();
  }

  if (!!request.hasUpstreamType()) {
    body["UpstreamType"] = request.getUpstreamType();
  }

  if (!!request.hasUserAttributeGroup()) {
    body["UserAttributeGroup"] = request.getUserAttributeGroup();
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
 * @summary Modifies an enterprise acceleration policy.
 *
 * @param request ModifyEnterpriseAcceleratePolicyRequest
 * @return ModifyEnterpriseAcceleratePolicyResponse
 */
ModifyEnterpriseAcceleratePolicyResponse Client::modifyEnterpriseAcceleratePolicy(const ModifyEnterpriseAcceleratePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

/**
 * @summary Revokes a user device session.
 *
 * @param request RevokeUserDeviceSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeUserDeviceSessionResponse
 */
RevokeUserDeviceSessionResponse Client::revokeUserDeviceSessionWithOptions(const RevokeUserDeviceSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDevTag()) {
    body["DevTag"] = request.getDevTag();
  }

  if (!!request.hasSaseUserId()) {
    body["SaseUserId"] = request.getSaseUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RevokeUserDeviceSession"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeUserDeviceSessionResponse>();
}

/**
 * @summary Revokes a user device session.
 *
 * @param request RevokeUserDeviceSessionRequest
 * @return RevokeUserDeviceSessionResponse
 */
RevokeUserDeviceSessionResponse Client::revokeUserDeviceSession(const RevokeUserDeviceSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeUserDeviceSessionWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI RevokeUserSession is deprecated
 *
 * @summary Revokes a user logon session.
 *
 * @param request RevokeUserSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeUserSessionResponse
 */
RevokeUserSessionResponse Client::revokeUserSessionWithOptions(const RevokeUserSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalIds()) {
    query["ExternalIds"] = request.getExternalIds();
  }

  if (!!request.hasIdpId()) {
    query["IdpId"] = request.getIdpId();
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
 * @summary Revokes a user logon session.
 *
 * @param request RevokeUserSessionRequest
 * @return RevokeUserSessionResponse
 */
RevokeUserSessionResponse Client::revokeUserSession(const RevokeUserSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeUserSessionWithOptions(request, runtime);
}

/**
 * @summary Updates an approval flow under the current Alibaba Cloud account.
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
    request.setMatchSchemaConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMatchSchemaConfigs(), "MatchSchemaConfigs", "json"));
  }

  if (!!tmpReq.hasMatchSchemas()) {
    request.setMatchSchemasShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMatchSchemas(), "MatchSchemas", "json"));
  }

  json query = {};
  if (!!request.hasApprovalType()) {
    query["ApprovalType"] = request.getApprovalType();
  }

  if (!!request.hasEventLabel()) {
    query["EventLabel"] = request.getEventLabel();
  }

  if (!!request.hasExternalConfig()) {
    query["ExternalConfig"] = request.getExternalConfig();
  }

  if (!!request.hasMatchSchemaConfigsShrink()) {
    query["MatchSchemaConfigs"] = request.getMatchSchemaConfigsShrink();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMatchSchemasShrink()) {
    body["MatchSchemas"] = request.getMatchSchemasShrink();
  }

  if (!!request.hasProcessId()) {
    body["ProcessId"] = request.getProcessId();
  }

  if (!!request.hasProcessName()) {
    body["ProcessName"] = request.getProcessName();
  }

  json bodyFlat = {};
  if (!!request.hasProcessNodes()) {
    bodyFlat["ProcessNodes"] = request.getProcessNodes();
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
 * @summary Updates an approval flow under the current Alibaba Cloud account.
 *
 * @param request UpdateApprovalProcessRequest
 * @return UpdateApprovalProcessResponse
 */
UpdateApprovalProcessResponse Client::updateApprovalProcess(const UpdateApprovalProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApprovalProcessWithOptions(request, runtime);
}

/**
 * @summary Updates the status of an approval instance under your Alibaba Cloud account.
 *
 * @param request UpdateApprovalStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApprovalStatusResponse
 */
UpdateApprovalStatusResponse Client::updateApprovalStatusWithOptions(const UpdateApprovalStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApprovalId()) {
    query["ApprovalId"] = request.getApprovalId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Updates the status of an approval instance under your Alibaba Cloud account.
 *
 * @param request UpdateApprovalStatusRequest
 * @return UpdateApprovalStatusResponse
 */
UpdateApprovalStatusResponse Client::updateApprovalStatus(const UpdateApprovalStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApprovalStatusWithOptions(request, runtime);
}

/**
 * @summary Update the auto-start and anti-uninstall policy for your Alibaba Cloud account.
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
    request.setBlockContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBlockContent(), "BlockContent", "json"));
  }

  json body = {};
  if (!!request.hasAllowReport()) {
    body["AllowReport"] = request.getAllowReport();
  }

  if (!!request.hasBlockContentShrink()) {
    body["BlockContent"] = request.getBlockContentShrink();
  }

  if (!!request.hasIsAntiUninstall()) {
    body["IsAntiUninstall"] = request.getIsAntiUninstall();
  }

  if (!!request.hasIsBoot()) {
    body["IsBoot"] = request.getIsBoot();
  }

  json bodyFlat = {};
  if (!!request.hasUserGroupIds()) {
    bodyFlat["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasWhitelistUsers()) {
    bodyFlat["WhitelistUsers"] = request.getWhitelistUsers();
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
 * @summary Update the auto-start and anti-uninstall policy for your Alibaba Cloud account.
 *
 * @param request UpdateBootAndAntiUninstallPolicyRequest
 * @return UpdateBootAndAntiUninstallPolicyResponse
 */
UpdateBootAndAntiUninstallPolicyResponse Client::updateBootAndAntiUninstallPolicy(const UpdateBootAndAntiUninstallPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBootAndAntiUninstallPolicyWithOptions(request, runtime);
}

/**
 * @summary Update user information for a custom identity provider in your Alibaba Cloud account.
 *
 * @param request UpdateClientUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClientUserResponse
 */
UpdateClientUserResponse Client::updateClientUserWithOptions(const UpdateClientUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.getDepartmentId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMobileNumber()) {
    query["MobileNumber"] = request.getMobileNumber();
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
 * @summary Update user information for a custom identity provider in your Alibaba Cloud account.
 *
 * @param request UpdateClientUserRequest
 * @return UpdateClientUserResponse
 */
UpdateClientUserResponse Client::updateClientUser(const UpdateClientUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClientUserWithOptions(request, runtime);
}

/**
 * @summary Sets the password for a specified user that belongs to a custom identity source.
 *
 * @param request UpdateClientUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClientUserPasswordResponse
 */
UpdateClientUserPasswordResponse Client::updateClientUserPasswordWithOptions(const UpdateClientUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
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
 * @summary Sets the password for a specified user that belongs to a custom identity source.
 *
 * @param request UpdateClientUserPasswordRequest
 * @return UpdateClientUserPasswordResponse
 */
UpdateClientUserPasswordResponse Client::updateClientUserPassword(const UpdateClientUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClientUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Sets the status of a specified user from a custom identity source for your Alibaba Cloud account.
 *
 * @param request UpdateClientUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClientUserStatusResponse
 */
UpdateClientUserStatusResponse Client::updateClientUserStatusWithOptions(const UpdateClientUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Sets the status of a specified user from a custom identity source for your Alibaba Cloud account.
 *
 * @param request UpdateClientUserStatusRequest
 * @return UpdateClientUserStatusResponse
 */
UpdateClientUserStatusResponse Client::updateClientUserStatus(const UpdateClientUserStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClientUserStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the name of a domain name list.
 *
 * @param request UpdateDomainMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainMetaResponse
 */
UpdateDomainMetaResponse Client::updateDomainMetaWithOptions(const UpdateDomainMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasListId()) {
    body["ListId"] = request.getListId();
  }

  if (!!request.hasListType()) {
    body["ListType"] = request.getListType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDomainMeta"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainMetaResponse>();
}

/**
 * @summary Updates the name of a domain name list.
 *
 * @param request UpdateDomainMetaRequest
 * @return UpdateDomainMetaResponse
 */
UpdateDomainMetaResponse Client::updateDomainMeta(const UpdateDomainMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainMetaWithOptions(request, runtime);
}

/**
 * @summary Modifies a dynamic route in your Alibaba Cloud account.
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
    bodyFlat["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasApplicationType()) {
    body["ApplicationType"] = request.getApplicationType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDynamicRouteId()) {
    body["DynamicRouteId"] = request.getDynamicRouteId();
  }

  if (!!request.hasDynamicRouteType()) {
    body["DynamicRouteType"] = request.getDynamicRouteType();
  }

  if (!!request.hasModifyType()) {
    body["ModifyType"] = request.getModifyType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNextHop()) {
    body["NextHop"] = request.getNextHop();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasRegionIds()) {
    bodyFlat["RegionIds"] = request.getRegionIds();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.getTagIds();
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
 * @summary Modifies a dynamic route in your Alibaba Cloud account.
 *
 * @param request UpdateDynamicRouteRequest
 * @return UpdateDynamicRouteResponse
 */
UpdateDynamicRouteResponse Client::updateDynamicRoute(const UpdateDynamicRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDynamicRouteWithOptions(request, runtime);
}

/**
 * @summary Update the status of device registration applications that exceed your Alibaba Cloud account\\"s quota.
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
    bodyFlat["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
 * @summary Update the status of device registration applications that exceed your Alibaba Cloud account\\"s quota.
 *
 * @param request UpdateExcessiveDeviceRegistrationApplicationsStatusRequest
 * @return UpdateExcessiveDeviceRegistrationApplicationsStatusResponse
 */
UpdateExcessiveDeviceRegistrationApplicationsStatusResponse Client::updateExcessiveDeviceRegistrationApplicationsStatus(const UpdateExcessiveDeviceRegistrationApplicationsStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateExcessiveDeviceRegistrationApplicationsStatusWithOptions(request, runtime);
}

/**
 * @summary Deletes a department from a custom identity provider for the current Alibaba Cloud account.
 *
 * @param request UpdateIdpDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIdpDepartmentResponse
 */
UpdateIdpDepartmentResponse Client::updateIdpDepartmentWithOptions(const UpdateIdpDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDepartmentId()) {
    query["DepartmentId"] = request.getDepartmentId();
  }

  if (!!request.hasDepartmentName()) {
    query["DepartmentName"] = request.getDepartmentName();
  }

  if (!!request.hasIdpConfigId()) {
    query["IdpConfigId"] = request.getIdpConfigId();
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
 * @summary Deletes a department from a custom identity provider for the current Alibaba Cloud account.
 *
 * @param request UpdateIdpDepartmentRequest
 * @return UpdateIdpDepartmentResponse
 */
UpdateIdpDepartmentResponse Client::updateIdpDepartment(const UpdateIdpDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIdpDepartmentWithOptions(request, runtime);
}

/**
 * @summary Updates the phone number whitelist for visitor access SMS logon.
 *
 * @description - A maximum of 1024 phone numbers are supported.
 * - Duplicate phone numbers are not allowed. Phone numbers in invalid formats are rejected. Only Chinese mainland phone numbers are supported.
 * - You must update all phone numbers at once. Incremental updates are not supported.
 *
 * @param request UpdateNacPortalSmsPhoneWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNacPortalSmsPhoneWhitelistResponse
 */
UpdateNacPortalSmsPhoneWhitelistResponse Client::updateNacPortalSmsPhoneWhitelistWithOptions(const UpdateNacPortalSmsPhoneWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPhones()) {
    query["Phones"] = request.getPhones();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNacPortalSmsPhoneWhitelist"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNacPortalSmsPhoneWhitelistResponse>();
}

/**
 * @summary Updates the phone number whitelist for visitor access SMS logon.
 *
 * @description - A maximum of 1024 phone numbers are supported.
 * - Duplicate phone numbers are not allowed. Phone numbers in invalid formats are rejected. Only Chinese mainland phone numbers are supported.
 * - You must update all phone numbers at once. Incremental updates are not supported.
 *
 * @param request UpdateNacPortalSmsPhoneWhitelistRequest
 * @return UpdateNacPortalSmsPhoneWhitelistResponse
 */
UpdateNacPortalSmsPhoneWhitelistResponse Client::updateNacPortalSmsPhoneWhitelist(const UpdateNacPortalSmsPhoneWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNacPortalSmsPhoneWhitelistWithOptions(request, runtime);
}

/**
 * @summary Updates the network access certificate status for users in your Alibaba Cloud account.
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
    bodyFlat["IdList"] = request.getIdList();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
 * @summary Updates the network access certificate status for users in your Alibaba Cloud account.
 *
 * @param request UpdateNacUserCertStatusRequest
 * @return UpdateNacUserCertStatusResponse
 */
UpdateNacUserCertStatusResponse Client::updateNacUserCertStatus(const UpdateNacUserCertStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNacUserCertStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies an internal-facing access application under the current Alibaba Cloud account.
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
    request.setL7ConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getL7Config(), "L7Config", "json"));
  }

  if (!!tmpReq.hasUnauthorizedAccessConfig()) {
    request.setUnauthorizedAccessConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUnauthorizedAccessConfig(), "UnauthorizedAccessConfig", "json"));
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasAddressGroups()) {
    bodyFlat["AddressGroups"] = request.getAddressGroups();
  }

  if (!!request.hasAddresses()) {
    bodyFlat["Addresses"] = request.getAddresses();
  }

  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasConfigMode()) {
    body["ConfigMode"] = request.getConfigMode();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasL7ConfigShrink()) {
    body["L7Config"] = request.getL7ConfigShrink();
  }

  if (!!request.hasL7ProxyDomainAutomaticPrefix()) {
    body["L7ProxyDomainAutomaticPrefix"] = request.getL7ProxyDomainAutomaticPrefix();
  }

  if (!!request.hasL7ProxyDomainCustom()) {
    body["L7ProxyDomainCustom"] = request.getL7ProxyDomainCustom();
  }

  if (!!request.hasL7ProxyDomainPrivate()) {
    body["L7ProxyDomainPrivate"] = request.getL7ProxyDomainPrivate();
  }

  if (!!request.hasModifyType()) {
    body["ModifyType"] = request.getModifyType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPortRanges()) {
    bodyFlat["PortRanges"] = request.getPortRanges();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.getProtocol();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.getTagIds();
  }

  if (!!request.hasUnauthorizedAccessConfigShrink()) {
    body["UnauthorizedAccessConfig"] = request.getUnauthorizedAccessConfigShrink();
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
 * @summary Modifies an internal-facing access application under the current Alibaba Cloud account.
 *
 * @param request UpdatePrivateAccessApplicationRequest
 * @return UpdatePrivateAccessApplicationResponse
 */
UpdatePrivateAccessApplicationResponse Client::updatePrivateAccessApplication(const UpdatePrivateAccessApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrivateAccessApplicationWithOptions(request, runtime);
}

/**
 * @summary Update an internal network access policy for your Alibaba Cloud account.
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
    bodyFlat["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasApplicationType()) {
    body["ApplicationType"] = request.getApplicationType();
  }

  if (!!request.hasCustomUserAttributes()) {
    bodyFlat["CustomUserAttributes"] = request.getCustomUserAttributes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDeviceAttributeAction()) {
    body["DeviceAttributeAction"] = request.getDeviceAttributeAction();
  }

  if (!!request.hasDeviceAttributeId()) {
    body["DeviceAttributeId"] = request.getDeviceAttributeId();
  }

  if (!!request.hasModifyType()) {
    body["ModifyType"] = request.getModifyType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPolicyAction()) {
    body["PolicyAction"] = request.getPolicyAction();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTagIds()) {
    bodyFlat["TagIds"] = request.getTagIds();
  }

  if (!!request.hasTriggerTemplateId()) {
    body["TriggerTemplateId"] = request.getTriggerTemplateId();
  }

  if (!!request.hasTrustedProcessGroupIds()) {
    bodyFlat["TrustedProcessGroupIds"] = request.getTrustedProcessGroupIds();
  }

  if (!!request.hasTrustedProcessStatus()) {
    body["TrustedProcessStatus"] = request.getTrustedProcessStatus();
  }

  if (!!request.hasTrustedSoftwareIds()) {
    bodyFlat["TrustedSoftwareIds"] = request.getTrustedSoftwareIds();
  }

  if (!!request.hasUserGroupIds()) {
    bodyFlat["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasUserGroupMode()) {
    body["UserGroupMode"] = request.getUserGroupMode();
  }

  if (!!request.hasValidFrom()) {
    body["ValidFrom"] = request.getValidFrom();
  }

  if (!!request.hasValidTimeStatus()) {
    body["ValidTimeStatus"] = request.getValidTimeStatus();
  }

  if (!!request.hasValidUntil()) {
    body["ValidUntil"] = request.getValidUntil();
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
 * @summary Update an internal network access policy for your Alibaba Cloud account.
 *
 * @param request UpdatePrivateAccessPolicyRequest
 * @return UpdatePrivateAccessPolicyResponse
 */
UpdatePrivateAccessPolicyResponse Client::updatePrivateAccessPolicy(const UpdatePrivateAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrivateAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies a device registration policy for your Alibaba Cloud account.
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
    request.setCompanyLimitCountShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCompanyLimitCount(), "CompanyLimitCount", "json"));
  }

  if (!!tmpReq.hasPersonalLimitCount()) {
    request.setPersonalLimitCountShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPersonalLimitCount(), "PersonalLimitCount", "json"));
  }

  json body = {};
  if (!!request.hasCompanyLimitCountShrink()) {
    body["CompanyLimitCount"] = request.getCompanyLimitCountShrink();
  }

  if (!!request.hasCompanyLimitType()) {
    body["CompanyLimitType"] = request.getCompanyLimitType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMatchMode()) {
    body["MatchMode"] = request.getMatchMode();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPersonalLimitCountShrink()) {
    body["PersonalLimitCount"] = request.getPersonalLimitCountShrink();
  }

  if (!!request.hasPersonalLimitType()) {
    body["PersonalLimitType"] = request.getPersonalLimitType();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  json bodyFlat = {};
  if (!!request.hasUserGroupIds()) {
    bodyFlat["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasWhitelist()) {
    bodyFlat["Whitelist"] = request.getWhitelist();
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
 * @summary Modifies a device registration policy for your Alibaba Cloud account.
 *
 * @param request UpdateRegistrationPolicyRequest
 * @return UpdateRegistrationPolicyResponse
 */
UpdateRegistrationPolicyResponse Client::updateRegistrationPolicy(const UpdateRegistrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRegistrationPolicyWithOptions(request, runtime);
}

/**
 * @summary Updates the current handling status and conclusion of a specified risk event.
 *
 * @description ## Request description
 * - This operation allows you to update the handling status of a specific risk event under your Alibaba Cloud account.
 * - When `Status` is set to `Processed`, you must provide the `RiskConfirm` parameter to specify the manually confirmed risk conclusion.
 * - If `Status` is `Unprocess` or `Processing`, do not include the `RiskConfirm` parameter.
 * - The `RiskScene` parameter is optional. If not provided, the system automatically populates it based on `RiskId`.
 * - The `RiskConfirmDesc` field provides additional explanation or remarks for the handling decision. The length must be 1 to 128 characters.
 *
 * @param request UpdateRiskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRiskStatusResponse
 */
UpdateRiskStatusResponse Client::updateRiskStatusWithOptions(const UpdateRiskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRiskConfirm()) {
    body["RiskConfirm"] = request.getRiskConfirm();
  }

  if (!!request.hasRiskConfirmDesc()) {
    body["RiskConfirmDesc"] = request.getRiskConfirmDesc();
  }

  if (!!request.hasRiskId()) {
    body["RiskId"] = request.getRiskId();
  }

  if (!!request.hasRiskScene()) {
    body["RiskScene"] = request.getRiskScene();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateRiskStatus"},
    {"version" , "2023-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRiskStatusResponse>();
}

/**
 * @summary Updates the current handling status and conclusion of a specified risk event.
 *
 * @description ## Request description
 * - This operation allows you to update the handling status of a specific risk event under your Alibaba Cloud account.
 * - When `Status` is set to `Processed`, you must provide the `RiskConfirm` parameter to specify the manually confirmed risk conclusion.
 * - If `Status` is `Unprocess` or `Processing`, do not include the `RiskConfirm` parameter.
 * - The `RiskScene` parameter is optional. If not provided, the system automatically populates it based on `RiskId`.
 * - The `RiskConfirmDesc` field provides additional explanation or remarks for the handling decision. The length must be 1 to 128 characters.
 *
 * @param request UpdateRiskStatusRequest
 * @return UpdateRiskStatusResponse
 */
UpdateRiskStatusResponse Client::updateRiskStatus(const UpdateRiskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRiskStatusWithOptions(request, runtime);
}

/**
 * @summary Batch updates the status of uninstall requests for your Alibaba Cloud account.
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
    bodyFlat["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
 * @summary Batch updates the status of uninstall requests for your Alibaba Cloud account.
 *
 * @param request UpdateUninstallApplicationsStatusRequest
 * @return UpdateUninstallApplicationsStatusResponse
 */
UpdateUninstallApplicationsStatusResponse Client::updateUninstallApplicationsStatus(const UpdateUninstallApplicationsStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUninstallApplicationsStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the sharing status of devices for multiple enterprise users.
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
    bodyFlat["DeviceTags"] = request.getDeviceTags();
  }

  if (!!request.hasSharingStatus()) {
    body["SharingStatus"] = request.getSharingStatus();
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
 * @summary Updates the sharing status of devices for multiple enterprise users.
 *
 * @param request UpdateUserDevicesSharingStatusRequest
 * @return UpdateUserDevicesSharingStatusResponse
 */
UpdateUserDevicesSharingStatusResponse Client::updateUserDevicesSharingStatus(const UpdateUserDevicesSharingStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserDevicesSharingStatusWithOptions(request, runtime);
}

/**
 * @summary Update the status of endpoint devices for your Alibaba Cloud account.
 *
 * @param request UpdateUserDevicesStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserDevicesStatusResponse
 */
UpdateUserDevicesStatusResponse Client::updateUserDevicesStatusWithOptions(const UpdateUserDevicesStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeviceAction()) {
    body["DeviceAction"] = request.getDeviceAction();
  }

  json bodyFlat = {};
  if (!!request.hasDeviceTags()) {
    bodyFlat["DeviceTags"] = request.getDeviceTags();
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
 * @summary Update the status of endpoint devices for your Alibaba Cloud account.
 *
 * @param request UpdateUserDevicesStatusRequest
 * @return UpdateUserDevicesStatusResponse
 */
UpdateUserDevicesStatusResponse Client::updateUserDevicesStatus(const UpdateUserDevicesStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserDevicesStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies a user group under the current Alibaba Cloud account.
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
    bodyFlat["Attributes"] = request.getAttributes();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasModifyType()) {
    body["ModifyType"] = request.getModifyType();
  }

  if (!!request.hasUserGroupId()) {
    body["UserGroupId"] = request.getUserGroupId();
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
 * @summary Modifies a user group under the current Alibaba Cloud account.
 *
 * @param request UpdateUserGroupRequest
 * @return UpdateUserGroupResponse
 */
UpdateUserGroupResponse Client::updateUserGroup(const UpdateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the status of users in your Alibaba Cloud account.
 *
 * @param request UpdateUsersStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUsersStatusResponse
 */
UpdateUsersStatusResponse Client::updateUsersStatusWithOptions(const UpdateUsersStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSaseUserIds()) {
    query["SaseUserIds"] = request.getSaseUserIds();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Updates the status of users in your Alibaba Cloud account.
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