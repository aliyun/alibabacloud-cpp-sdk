// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/csas_20230120.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Csas20230120;

Alibabacloud_Csas20230120::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("csas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Csas20230120::Client::getEndpoint(shared_ptr<string> productId,
                                                      shared_ptr<string> regionId,
                                                      shared_ptr<string> endpointRule,
                                                      shared_ptr<string> network,
                                                      shared_ptr<string> suffix,
                                                      shared_ptr<map<string, string>> endpointMap,
                                                      shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AttachApplication2ConnectorResponse Alibabacloud_Csas20230120::Client::attachApplication2ConnectorWithOptions(shared_ptr<AttachApplication2ConnectorRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AttachApplication2ConnectorShrinkRequest> request = make_shared<AttachApplication2ConnectorShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->applicationIds)) {
    request->applicationIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applicationIds, make_shared<string>("ApplicationIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationIdsShrink)) {
    body->insert(pair<string, string>("ApplicationIds", *request->applicationIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectorId)) {
    body->insert(pair<string, string>("ConnectorId", *request->connectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachApplication2Connector"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachApplication2ConnectorResponse(callApi(params, req, runtime));
}

AttachApplication2ConnectorResponse Alibabacloud_Csas20230120::Client::attachApplication2Connector(shared_ptr<AttachApplication2ConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachApplication2ConnectorWithOptions(request, runtime);
}

AttachPolicy2ApprovalProcessResponse Alibabacloud_Csas20230120::Client::attachPolicy2ApprovalProcessWithOptions(shared_ptr<AttachPolicy2ApprovalProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyType)) {
    body->insert(pair<string, string>("PolicyType", *request->policyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processId)) {
    body->insert(pair<string, string>("ProcessId", *request->processId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachPolicy2ApprovalProcess"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachPolicy2ApprovalProcessResponse(callApi(params, req, runtime));
}

AttachPolicy2ApprovalProcessResponse Alibabacloud_Csas20230120::Client::attachPolicy2ApprovalProcess(shared_ptr<AttachPolicy2ApprovalProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachPolicy2ApprovalProcessWithOptions(request, runtime);
}

CreateApprovalProcessResponse Alibabacloud_Csas20230120::Client::createApprovalProcessWithOptions(shared_ptr<CreateApprovalProcessRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateApprovalProcessShrinkRequest> request = make_shared<CreateApprovalProcessShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateApprovalProcessRequestMatchSchemas>(tmpReq->matchSchemas)) {
    request->matchSchemasShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->matchSchemas, make_shared<string>("MatchSchemas"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchSchemasShrink)) {
    body->insert(pair<string, string>("MatchSchemas", *request->matchSchemasShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processName)) {
    body->insert(pair<string, string>("ProcessName", *request->processName));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<vector<string>>>(request->processNodes)) {
    bodyFlat->insert(pair<string, vector<vector<string>>>("ProcessNodes", *request->processNodes));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApprovalProcess"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApprovalProcessResponse(callApi(params, req, runtime));
}

CreateApprovalProcessResponse Alibabacloud_Csas20230120::Client::createApprovalProcess(shared_ptr<CreateApprovalProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApprovalProcessWithOptions(request, runtime);
}

CreateClientUserResponse Alibabacloud_Csas20230120::Client::createClientUserWithOptions(shared_ptr<CreateClientUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentId)) {
    query->insert(pair<string, string>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idpConfigId)) {
    query->insert(pair<string, string>("IdpConfigId", *request->idpConfigId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobileNumber)) {
    query->insert(pair<string, string>("MobileNumber", *request->mobileNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClientUser"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClientUserResponse(callApi(params, req, runtime));
}

CreateClientUserResponse Alibabacloud_Csas20230120::Client::createClientUser(shared_ptr<CreateClientUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClientUserWithOptions(request, runtime);
}

CreateDynamicRouteResponse Alibabacloud_Csas20230120::Client::createDynamicRouteWithOptions(shared_ptr<CreateDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationIds)) {
    bodyFlat->insert(pair<string, vector<string>>("ApplicationIds", *request->applicationIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationType)) {
    body->insert(pair<string, string>("ApplicationType", *request->applicationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicRouteType)) {
    body->insert(pair<string, string>("DynamicRouteType", *request->dynamicRouteType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHop)) {
    body->insert(pair<string, string>("NextHop", *request->nextHop));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->regionIds)) {
    bodyFlat->insert(pair<string, vector<string>>("RegionIds", *request->regionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagIds)) {
    bodyFlat->insert(pair<string, vector<string>>("TagIds", *request->tagIds));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDynamicRoute"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDynamicRouteResponse(callApi(params, req, runtime));
}

CreateDynamicRouteResponse Alibabacloud_Csas20230120::Client::createDynamicRoute(shared_ptr<CreateDynamicRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDynamicRouteWithOptions(request, runtime);
}

CreateEnterpriseAcceleratePolicyResponse Alibabacloud_Csas20230120::Client::createEnterpriseAcceleratePolicyWithOptions(shared_ptr<CreateEnterpriseAcceleratePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerationType)) {
    body->insert(pair<string, string>("AccelerationType", *request->accelerationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priority)) {
    body->insert(pair<string, string>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showInClient)) {
    body->insert(pair<string, long>("ShowInClient", *request->showInClient));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upstreamHost)) {
    body->insert(pair<string, string>("UpstreamHost", *request->upstreamHost));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->upstreamPort)) {
    body->insert(pair<string, long>("UpstreamPort", *request->upstreamPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upstreamType)) {
    body->insert(pair<string, string>("UpstreamType", *request->upstreamType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAttributeGroup)) {
    body->insert(pair<string, string>("UserAttributeGroup", *request->userAttributeGroup));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnterpriseAcceleratePolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEnterpriseAcceleratePolicyResponse(callApi(params, req, runtime));
}

CreateEnterpriseAcceleratePolicyResponse Alibabacloud_Csas20230120::Client::createEnterpriseAcceleratePolicy(shared_ptr<CreateEnterpriseAcceleratePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

CreateEnterpriseAccelerateTargetResponse Alibabacloud_Csas20230120::Client::createEnterpriseAccelerateTargetWithOptions(shared_ptr<CreateEnterpriseAccelerateTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eapId)) {
    body->insert(pair<string, string>("EapId", *request->eapId));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->target)) {
    bodyFlat->insert(pair<string, vector<string>>("Target", *request->target));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnterpriseAccelerateTarget"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEnterpriseAccelerateTargetResponse(callApi(params, req, runtime));
}

CreateEnterpriseAccelerateTargetResponse Alibabacloud_Csas20230120::Client::createEnterpriseAccelerateTarget(shared_ptr<CreateEnterpriseAccelerateTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEnterpriseAccelerateTargetWithOptions(request, runtime);
}

CreateIdpDepartmentResponse Alibabacloud_Csas20230120::Client::createIdpDepartmentWithOptions(shared_ptr<CreateIdpDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentName)) {
    query->insert(pair<string, string>("DepartmentName", *request->departmentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idpConfigId)) {
    query->insert(pair<string, string>("IdpConfigId", *request->idpConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIdpDepartment"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIdpDepartmentResponse(callApi(params, req, runtime));
}

CreateIdpDepartmentResponse Alibabacloud_Csas20230120::Client::createIdpDepartment(shared_ptr<CreateIdpDepartmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIdpDepartmentWithOptions(request, runtime);
}

CreatePrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::createPrivateAccessApplicationWithOptions(shared_ptr<CreatePrivateAccessApplicationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePrivateAccessApplicationShrinkRequest> request = make_shared<CreatePrivateAccessApplicationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PAL7Config>(tmpReq->l7Config)) {
    request->l7ConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->l7Config, make_shared<string>("L7Config"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->addresses)) {
    bodyFlat->insert(pair<string, vector<string>>("Addresses", *request->addresses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->browserAccessStatus)) {
    body->insert(pair<string, string>("BrowserAccessStatus", *request->browserAccessStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->l7ConfigShrink)) {
    body->insert(pair<string, string>("L7Config", *request->l7ConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->l7ProxyDomainAutomaticPrefix)) {
    body->insert(pair<string, string>("L7ProxyDomainAutomaticPrefix", *request->l7ProxyDomainAutomaticPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->l7ProxyDomainCustom)) {
    body->insert(pair<string, string>("L7ProxyDomainCustom", *request->l7ProxyDomainCustom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePrivateAccessApplicationShrinkRequestPortRanges>>(request->portRanges)) {
    bodyFlat->insert(pair<string, vector<CreatePrivateAccessApplicationShrinkRequestPortRanges>>("PortRanges", *request->portRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagIds)) {
    bodyFlat->insert(pair<string, vector<string>>("TagIds", *request->tagIds));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePrivateAccessApplication"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePrivateAccessApplicationResponse(callApi(params, req, runtime));
}

CreatePrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::createPrivateAccessApplication(shared_ptr<CreatePrivateAccessApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPrivateAccessApplicationWithOptions(request, runtime);
}

CreatePrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::createPrivateAccessPolicyWithOptions(shared_ptr<CreatePrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationIds)) {
    bodyFlat->insert(pair<string, vector<string>>("ApplicationIds", *request->applicationIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationType)) {
    body->insert(pair<string, string>("ApplicationType", *request->applicationType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePrivateAccessPolicyRequestCustomUserAttributes>>(request->customUserAttributes)) {
    bodyFlat->insert(pair<string, vector<CreatePrivateAccessPolicyRequestCustomUserAttributes>>("CustomUserAttributes", *request->customUserAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceAttributeAction)) {
    body->insert(pair<string, string>("DeviceAttributeAction", *request->deviceAttributeAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceAttributeId)) {
    body->insert(pair<string, string>("DeviceAttributeId", *request->deviceAttributeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyAction)) {
    body->insert(pair<string, string>("PolicyAction", *request->policyAction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagIds)) {
    bodyFlat->insert(pair<string, vector<string>>("TagIds", *request->tagIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerTemplateId)) {
    body->insert(pair<string, string>("TriggerTemplateId", *request->triggerTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->trustedProcessGroupIds)) {
    bodyFlat->insert(pair<string, vector<string>>("TrustedProcessGroupIds", *request->trustedProcessGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trustedProcessStatus)) {
    body->insert(pair<string, string>("TrustedProcessStatus", *request->trustedProcessStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->trustedSoftwareIds)) {
    bodyFlat->insert(pair<string, vector<string>>("TrustedSoftwareIds", *request->trustedSoftwareIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userGroupIds)) {
    bodyFlat->insert(pair<string, vector<string>>("UserGroupIds", *request->userGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupMode)) {
    body->insert(pair<string, string>("UserGroupMode", *request->userGroupMode));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePrivateAccessPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePrivateAccessPolicyResponse(callApi(params, req, runtime));
}

CreatePrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::createPrivateAccessPolicy(shared_ptr<CreatePrivateAccessPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPrivateAccessPolicyWithOptions(request, runtime);
}

CreatePrivateAccessTagResponse Alibabacloud_Csas20230120::Client::createPrivateAccessTagWithOptions(shared_ptr<CreatePrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePrivateAccessTag"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePrivateAccessTagResponse(callApi(params, req, runtime));
}

CreatePrivateAccessTagResponse Alibabacloud_Csas20230120::Client::createPrivateAccessTag(shared_ptr<CreatePrivateAccessTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPrivateAccessTagWithOptions(request, runtime);
}

CreateRegistrationPolicyResponse Alibabacloud_Csas20230120::Client::createRegistrationPolicyWithOptions(shared_ptr<CreateRegistrationPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRegistrationPolicyShrinkRequest> request = make_shared<CreateRegistrationPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateRegistrationPolicyRequestCompanyLimitCount>(tmpReq->companyLimitCount)) {
    request->companyLimitCountShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->companyLimitCount, make_shared<string>("CompanyLimitCount"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateRegistrationPolicyRequestPersonalLimitCount>(tmpReq->personalLimitCount)) {
    request->personalLimitCountShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->personalLimitCount, make_shared<string>("PersonalLimitCount"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->companyLimitCountShrink)) {
    body->insert(pair<string, string>("CompanyLimitCount", *request->companyLimitCountShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->companyLimitType)) {
    body->insert(pair<string, string>("CompanyLimitType", *request->companyLimitType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchMode)) {
    body->insert(pair<string, string>("MatchMode", *request->matchMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->personalLimitCountShrink)) {
    body->insert(pair<string, string>("PersonalLimitCount", *request->personalLimitCountShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->personalLimitType)) {
    body->insert(pair<string, string>("PersonalLimitType", *request->personalLimitType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userGroupIds)) {
    bodyFlat->insert(pair<string, vector<string>>("UserGroupIds", *request->userGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->whitelist)) {
    bodyFlat->insert(pair<string, vector<string>>("Whitelist", *request->whitelist));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRegistrationPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRegistrationPolicyResponse(callApi(params, req, runtime));
}

CreateRegistrationPolicyResponse Alibabacloud_Csas20230120::Client::createRegistrationPolicy(shared_ptr<CreateRegistrationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRegistrationPolicyWithOptions(request, runtime);
}

CreateUserGroupResponse Alibabacloud_Csas20230120::Client::createUserGroupWithOptions(shared_ptr<CreateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateUserGroupRequestAttributes>>(request->attributes)) {
    bodyFlat->insert(pair<string, vector<CreateUserGroupRequestAttributes>>("Attributes", *request->attributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUserGroup"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUserGroupResponse(callApi(params, req, runtime));
}

CreateUserGroupResponse Alibabacloud_Csas20230120::Client::createUserGroup(shared_ptr<CreateUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserGroupWithOptions(request, runtime);
}

CreateWmBaseImageResponse Alibabacloud_Csas20230120::Client::createWmBaseImageWithOptions(shared_ptr<CreateWmBaseImageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateWmBaseImageShrinkRequest> request = make_shared<CreateWmBaseImageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateWmBaseImageRequestImageControl>(tmpReq->imageControl)) {
    request->imageControlShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->imageControl, make_shared<string>("ImageControl"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    body->insert(pair<string, long>("Height", *request->height));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageControlShrink)) {
    body->insert(pair<string, string>("ImageControl", *request->imageControlShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opacity)) {
    body->insert(pair<string, long>("Opacity", *request->opacity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scale)) {
    body->insert(pair<string, long>("Scale", *request->scale));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->width)) {
    body->insert(pair<string, long>("Width", *request->width));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wmInfoBytesB64)) {
    body->insert(pair<string, string>("WmInfoBytesB64", *request->wmInfoBytesB64));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->wmInfoSize)) {
    body->insert(pair<string, long>("WmInfoSize", *request->wmInfoSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wmInfoUint)) {
    body->insert(pair<string, string>("WmInfoUint", *request->wmInfoUint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wmType)) {
    body->insert(pair<string, string>("WmType", *request->wmType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWmBaseImage"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWmBaseImageResponse(callApi(params, req, runtime));
}

CreateWmBaseImageResponse Alibabacloud_Csas20230120::Client::createWmBaseImage(shared_ptr<CreateWmBaseImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWmBaseImageWithOptions(request, runtime);
}

CreateWmEmbedTaskResponse Alibabacloud_Csas20230120::Client::createWmEmbedTaskWithOptions(shared_ptr<CreateWmEmbedTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateWmEmbedTaskShrinkRequest> request = make_shared<CreateWmEmbedTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateWmEmbedTaskRequestCsvControl>(tmpReq->csvControl)) {
    request->csvControlShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->csvControl, make_shared<string>("CsvControl"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateWmEmbedTaskRequestDocumentControl>(tmpReq->documentControl)) {
    request->documentControlShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documentControl, make_shared<string>("DocumentControl"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->csvControlShrink)) {
    query->insert(pair<string, string>("CsvControl", *request->csvControlShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentControlShrink)) {
    body->insert(pair<string, string>("DocumentControl", *request->documentControlShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filename)) {
    body->insert(pair<string, string>("Filename", *request->filename));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->imageEmbedJpegQuality)) {
    body->insert(pair<string, long>("ImageEmbedJpegQuality", *request->imageEmbedJpegQuality));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->imageEmbedLevel)) {
    body->insert(pair<string, long>("ImageEmbedLevel", *request->imageEmbedLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoBitrate)) {
    body->insert(pair<string, string>("VideoBitrate", *request->videoBitrate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->videoIsLong)) {
    body->insert(pair<string, bool>("VideoIsLong", *request->videoIsLong));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wmInfoBytesB64)) {
    body->insert(pair<string, string>("WmInfoBytesB64", *request->wmInfoBytesB64));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->wmInfoSize)) {
    body->insert(pair<string, long>("WmInfoSize", *request->wmInfoSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wmInfoUint)) {
    body->insert(pair<string, string>("WmInfoUint", *request->wmInfoUint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wmType)) {
    body->insert(pair<string, string>("WmType", *request->wmType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWmEmbedTask"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWmEmbedTaskResponse(callApi(params, req, runtime));
}

CreateWmEmbedTaskResponse Alibabacloud_Csas20230120::Client::createWmEmbedTask(shared_ptr<CreateWmEmbedTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWmEmbedTaskWithOptions(request, runtime);
}

CreateWmExtractTaskResponse Alibabacloud_Csas20230120::Client::createWmExtractTaskWithOptions(shared_ptr<CreateWmExtractTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateWmExtractTaskShrinkRequest> request = make_shared<CreateWmExtractTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateWmExtractTaskRequestCsvControl>(tmpReq->csvControl)) {
    request->csvControlShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->csvControl, make_shared<string>("CsvControl"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->csvControlShrink)) {
    query->insert(pair<string, string>("CsvControl", *request->csvControlShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isClientEmbed)) {
    query->insert(pair<string, bool>("IsClientEmbed", *request->isClientEmbed));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->documentIsCapture)) {
    body->insert(pair<string, bool>("DocumentIsCapture", *request->documentIsCapture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filename)) {
    body->insert(pair<string, string>("Filename", *request->filename));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->videoIsLong)) {
    body->insert(pair<string, bool>("VideoIsLong", *request->videoIsLong));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoSpeed)) {
    body->insert(pair<string, string>("VideoSpeed", *request->videoSpeed));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->wmInfoSize)) {
    body->insert(pair<string, long>("WmInfoSize", *request->wmInfoSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wmType)) {
    body->insert(pair<string, string>("WmType", *request->wmType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWmExtractTask"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWmExtractTaskResponse(callApi(params, req, runtime));
}

CreateWmExtractTaskResponse Alibabacloud_Csas20230120::Client::createWmExtractTask(shared_ptr<CreateWmExtractTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWmExtractTaskWithOptions(request, runtime);
}

CreateWmInfoMappingResponse Alibabacloud_Csas20230120::Client::createWmInfoMappingWithOptions(shared_ptr<CreateWmInfoMappingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->wmInfoBytesB64)) {
    body->insert(pair<string, string>("WmInfoBytesB64", *request->wmInfoBytesB64));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->wmInfoSize)) {
    body->insert(pair<string, long>("WmInfoSize", *request->wmInfoSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wmType)) {
    body->insert(pair<string, string>("WmType", *request->wmType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWmInfoMapping"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWmInfoMappingResponse(callApi(params, req, runtime));
}

CreateWmInfoMappingResponse Alibabacloud_Csas20230120::Client::createWmInfoMapping(shared_ptr<CreateWmInfoMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWmInfoMappingWithOptions(request, runtime);
}

DeleteApprovalProcessesResponse Alibabacloud_Csas20230120::Client::deleteApprovalProcessesWithOptions(shared_ptr<DeleteApprovalProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->processIds)) {
    bodyFlat->insert(pair<string, vector<string>>("ProcessIds", *request->processIds));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApprovalProcesses"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApprovalProcessesResponse(callApi(params, req, runtime));
}

DeleteApprovalProcessesResponse Alibabacloud_Csas20230120::Client::deleteApprovalProcesses(shared_ptr<DeleteApprovalProcessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApprovalProcessesWithOptions(request, runtime);
}

DeleteClientUserResponse Alibabacloud_Csas20230120::Client::deleteClientUserWithOptions(shared_ptr<DeleteClientUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClientUser"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClientUserResponse(callApi(params, req, runtime));
}

DeleteClientUserResponse Alibabacloud_Csas20230120::Client::deleteClientUser(shared_ptr<DeleteClientUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClientUserWithOptions(request, runtime);
}

DeleteDynamicRouteResponse Alibabacloud_Csas20230120::Client::deleteDynamicRouteWithOptions(shared_ptr<DeleteDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicRouteId)) {
    query->insert(pair<string, string>("DynamicRouteId", *request->dynamicRouteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDynamicRoute"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDynamicRouteResponse(callApi(params, req, runtime));
}

DeleteDynamicRouteResponse Alibabacloud_Csas20230120::Client::deleteDynamicRoute(shared_ptr<DeleteDynamicRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDynamicRouteWithOptions(request, runtime);
}

DeleteEnterpriseAcceleratePolicyResponse Alibabacloud_Csas20230120::Client::deleteEnterpriseAcceleratePolicyWithOptions(shared_ptr<DeleteEnterpriseAcceleratePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eapId)) {
    body->insert(pair<string, string>("EapId", *request->eapId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnterpriseAcceleratePolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnterpriseAcceleratePolicyResponse(callApi(params, req, runtime));
}

DeleteEnterpriseAcceleratePolicyResponse Alibabacloud_Csas20230120::Client::deleteEnterpriseAcceleratePolicy(shared_ptr<DeleteEnterpriseAcceleratePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

DeleteEnterpriseAccelerateTargetResponse Alibabacloud_Csas20230120::Client::deleteEnterpriseAccelerateTargetWithOptions(shared_ptr<DeleteEnterpriseAccelerateTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eapId)) {
    body->insert(pair<string, string>("EapId", *request->eapId));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->target)) {
    bodyFlat->insert(pair<string, vector<string>>("Target", *request->target));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnterpriseAccelerateTarget"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnterpriseAccelerateTargetResponse(callApi(params, req, runtime));
}

DeleteEnterpriseAccelerateTargetResponse Alibabacloud_Csas20230120::Client::deleteEnterpriseAccelerateTarget(shared_ptr<DeleteEnterpriseAccelerateTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnterpriseAccelerateTargetWithOptions(request, runtime);
}

DeleteIdpDepartmentResponse Alibabacloud_Csas20230120::Client::deleteIdpDepartmentWithOptions(shared_ptr<DeleteIdpDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentId)) {
    query->insert(pair<string, string>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idpConfigId)) {
    query->insert(pair<string, string>("IdpConfigId", *request->idpConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIdpDepartment"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIdpDepartmentResponse(callApi(params, req, runtime));
}

DeleteIdpDepartmentResponse Alibabacloud_Csas20230120::Client::deleteIdpDepartment(shared_ptr<DeleteIdpDepartmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIdpDepartmentWithOptions(request, runtime);
}

DeleteOtpConfigResponse Alibabacloud_Csas20230120::Client::deleteOtpConfigWithOptions(shared_ptr<DeleteOtpConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOtpConfig"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteOtpConfigResponse(callApi(params, req, runtime));
}

DeleteOtpConfigResponse Alibabacloud_Csas20230120::Client::deleteOtpConfig(shared_ptr<DeleteOtpConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOtpConfigWithOptions(request, runtime);
}

DeletePrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::deletePrivateAccessApplicationWithOptions(shared_ptr<DeletePrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationId)) {
    body->insert(pair<string, string>("ApplicationId", *request->applicationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePrivateAccessApplication"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePrivateAccessApplicationResponse(callApi(params, req, runtime));
}

DeletePrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::deletePrivateAccessApplication(shared_ptr<DeletePrivateAccessApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePrivateAccessApplicationWithOptions(request, runtime);
}

DeletePrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::deletePrivateAccessPolicyWithOptions(shared_ptr<DeletePrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePrivateAccessPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePrivateAccessPolicyResponse(callApi(params, req, runtime));
}

DeletePrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::deletePrivateAccessPolicy(shared_ptr<DeletePrivateAccessPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePrivateAccessPolicyWithOptions(request, runtime);
}

DeletePrivateAccessTagResponse Alibabacloud_Csas20230120::Client::deletePrivateAccessTagWithOptions(shared_ptr<DeletePrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagId)) {
    body->insert(pair<string, string>("TagId", *request->tagId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePrivateAccessTag"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePrivateAccessTagResponse(callApi(params, req, runtime));
}

DeletePrivateAccessTagResponse Alibabacloud_Csas20230120::Client::deletePrivateAccessTag(shared_ptr<DeletePrivateAccessTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePrivateAccessTagWithOptions(request, runtime);
}

DeleteRegistrationPoliciesResponse Alibabacloud_Csas20230120::Client::deleteRegistrationPoliciesWithOptions(shared_ptr<DeleteRegistrationPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyIds)) {
    bodyFlat->insert(pair<string, vector<string>>("PolicyIds", *request->policyIds));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRegistrationPolicies"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRegistrationPoliciesResponse(callApi(params, req, runtime));
}

DeleteRegistrationPoliciesResponse Alibabacloud_Csas20230120::Client::deleteRegistrationPolicies(shared_ptr<DeleteRegistrationPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRegistrationPoliciesWithOptions(request, runtime);
}

DeleteUserDevicesResponse Alibabacloud_Csas20230120::Client::deleteUserDevicesWithOptions(shared_ptr<DeleteUserDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceTags)) {
    bodyFlat->insert(pair<string, vector<string>>("DeviceTags", *request->deviceTags));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserDevices"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserDevicesResponse(callApi(params, req, runtime));
}

DeleteUserDevicesResponse Alibabacloud_Csas20230120::Client::deleteUserDevices(shared_ptr<DeleteUserDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserDevicesWithOptions(request, runtime);
}

DeleteUserGroupResponse Alibabacloud_Csas20230120::Client::deleteUserGroupWithOptions(shared_ptr<DeleteUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    body->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserGroup"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserGroupResponse(callApi(params, req, runtime));
}

DeleteUserGroupResponse Alibabacloud_Csas20230120::Client::deleteUserGroup(shared_ptr<DeleteUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserGroupWithOptions(request, runtime);
}

DetachApplication2ConnectorResponse Alibabacloud_Csas20230120::Client::detachApplication2ConnectorWithOptions(shared_ptr<DetachApplication2ConnectorRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetachApplication2ConnectorShrinkRequest> request = make_shared<DetachApplication2ConnectorShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->applicationIds)) {
    request->applicationIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applicationIds, make_shared<string>("ApplicationIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationIdsShrink)) {
    body->insert(pair<string, string>("ApplicationIds", *request->applicationIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectorId)) {
    body->insert(pair<string, string>("ConnectorId", *request->connectorId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachApplication2Connector"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachApplication2ConnectorResponse(callApi(params, req, runtime));
}

DetachApplication2ConnectorResponse Alibabacloud_Csas20230120::Client::detachApplication2Connector(shared_ptr<DetachApplication2ConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachApplication2ConnectorWithOptions(request, runtime);
}

DetachPolicy2ApprovalProcessResponse Alibabacloud_Csas20230120::Client::detachPolicy2ApprovalProcessWithOptions(shared_ptr<DetachPolicy2ApprovalProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyType)) {
    body->insert(pair<string, string>("PolicyType", *request->policyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processId)) {
    body->insert(pair<string, string>("ProcessId", *request->processId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachPolicy2ApprovalProcess"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachPolicy2ApprovalProcessResponse(callApi(params, req, runtime));
}

DetachPolicy2ApprovalProcessResponse Alibabacloud_Csas20230120::Client::detachPolicy2ApprovalProcess(shared_ptr<DetachPolicy2ApprovalProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachPolicy2ApprovalProcessWithOptions(request, runtime);
}

DisableEnterpriseAcceleratePolicyResponse Alibabacloud_Csas20230120::Client::disableEnterpriseAcceleratePolicyWithOptions(shared_ptr<DisableEnterpriseAcceleratePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eapId)) {
    body->insert(pair<string, string>("EapId", *request->eapId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableEnterpriseAcceleratePolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableEnterpriseAcceleratePolicyResponse(callApi(params, req, runtime));
}

DisableEnterpriseAcceleratePolicyResponse Alibabacloud_Csas20230120::Client::disableEnterpriseAcceleratePolicy(shared_ptr<DisableEnterpriseAcceleratePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

EnableEnterpriseAcceleratePolicyResponse Alibabacloud_Csas20230120::Client::enableEnterpriseAcceleratePolicyWithOptions(shared_ptr<EnableEnterpriseAcceleratePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eapId)) {
    body->insert(pair<string, string>("EapId", *request->eapId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableEnterpriseAcceleratePolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableEnterpriseAcceleratePolicyResponse(callApi(params, req, runtime));
}

EnableEnterpriseAcceleratePolicyResponse Alibabacloud_Csas20230120::Client::enableEnterpriseAcceleratePolicy(shared_ptr<EnableEnterpriseAcceleratePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

ExportUserDevicesResponse Alibabacloud_Csas20230120::Client::exportUserDevicesWithOptions(shared_ptr<ExportUserDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appStatuses)) {
    bodyFlat->insert(pair<string, vector<string>>("AppStatuses", *request->appStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->department)) {
    body->insert(pair<string, string>("Department", *request->department));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceBelong)) {
    body->insert(pair<string, string>("DeviceBelong", *request->deviceBelong));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceStatuses)) {
    bodyFlat->insert(pair<string, vector<string>>("DeviceStatuses", *request->deviceStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceTags)) {
    bodyFlat->insert(pair<string, vector<string>>("DeviceTags", *request->deviceTags));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceTypes)) {
    bodyFlat->insert(pair<string, vector<string>>("DeviceTypes", *request->deviceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dlpStatuses)) {
    bodyFlat->insert(pair<string, vector<string>>("DlpStatuses", *request->dlpStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostname)) {
    body->insert(pair<string, string>("Hostname", *request->hostname));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iaStatuses)) {
    bodyFlat->insert(pair<string, vector<string>>("IaStatuses", *request->iaStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mac)) {
    body->insert(pair<string, string>("Mac", *request->mac));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nacStatuses)) {
    bodyFlat->insert(pair<string, vector<string>>("NacStatuses", *request->nacStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->paStatuses)) {
    bodyFlat->insert(pair<string, vector<string>>("PaStatuses", *request->paStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saseUserId)) {
    body->insert(pair<string, string>("SaseUserId", *request->saseUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sharingStatus)) {
    body->insert(pair<string, bool>("SharingStatus", *request->sharingStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("Username", *request->username));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportUserDevices"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportUserDevicesResponse(callApi(params, req, runtime));
}

ExportUserDevicesResponse Alibabacloud_Csas20230120::Client::exportUserDevices(shared_ptr<ExportUserDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportUserDevicesWithOptions(request, runtime);
}

GetActiveIdpConfigResponse Alibabacloud_Csas20230120::Client::getActiveIdpConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetActiveIdpConfig"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetActiveIdpConfigResponse(callApi(params, req, runtime));
}

GetActiveIdpConfigResponse Alibabacloud_Csas20230120::Client::getActiveIdpConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getActiveIdpConfigWithOptions(runtime);
}

GetApprovalResponse Alibabacloud_Csas20230120::Client::getApprovalWithOptions(shared_ptr<GetApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApproval"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApprovalResponse(callApi(params, req, runtime));
}

GetApprovalResponse Alibabacloud_Csas20230120::Client::getApproval(shared_ptr<GetApprovalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getApprovalWithOptions(request, runtime);
}

GetApprovalProcessResponse Alibabacloud_Csas20230120::Client::getApprovalProcessWithOptions(shared_ptr<GetApprovalProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApprovalProcess"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApprovalProcessResponse(callApi(params, req, runtime));
}

GetApprovalProcessResponse Alibabacloud_Csas20230120::Client::getApprovalProcess(shared_ptr<GetApprovalProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getApprovalProcessWithOptions(request, runtime);
}

GetApprovalSchemaResponse Alibabacloud_Csas20230120::Client::getApprovalSchemaWithOptions(shared_ptr<GetApprovalSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApprovalSchema"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApprovalSchemaResponse(callApi(params, req, runtime));
}

GetApprovalSchemaResponse Alibabacloud_Csas20230120::Client::getApprovalSchema(shared_ptr<GetApprovalSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getApprovalSchemaWithOptions(request, runtime);
}

GetBootAndAntiUninstallPolicyResponse Alibabacloud_Csas20230120::Client::getBootAndAntiUninstallPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBootAndAntiUninstallPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBootAndAntiUninstallPolicyResponse(callApi(params, req, runtime));
}

GetBootAndAntiUninstallPolicyResponse Alibabacloud_Csas20230120::Client::getBootAndAntiUninstallPolicy() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBootAndAntiUninstallPolicyWithOptions(runtime);
}

GetClientUserResponse Alibabacloud_Csas20230120::Client::getClientUserWithOptions(shared_ptr<GetClientUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClientUser"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClientUserResponse(callApi(params, req, runtime));
}

GetClientUserResponse Alibabacloud_Csas20230120::Client::getClientUser(shared_ptr<GetClientUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClientUserWithOptions(request, runtime);
}

GetDynamicRouteResponse Alibabacloud_Csas20230120::Client::getDynamicRouteWithOptions(shared_ptr<GetDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDynamicRoute"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDynamicRouteResponse(callApi(params, req, runtime));
}

GetDynamicRouteResponse Alibabacloud_Csas20230120::Client::getDynamicRoute(shared_ptr<GetDynamicRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDynamicRouteWithOptions(request, runtime);
}

GetIdpConfigResponse Alibabacloud_Csas20230120::Client::getIdpConfigWithOptions(shared_ptr<GetIdpConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIdpConfig"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIdpConfigResponse(callApi(params, req, runtime));
}

GetIdpConfigResponse Alibabacloud_Csas20230120::Client::getIdpConfig(shared_ptr<GetIdpConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIdpConfigWithOptions(request, runtime);
}

GetPrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::getPrivateAccessApplicationWithOptions(shared_ptr<GetPrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPrivateAccessApplication"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPrivateAccessApplicationResponse(callApi(params, req, runtime));
}

GetPrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::getPrivateAccessApplication(shared_ptr<GetPrivateAccessApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPrivateAccessApplicationWithOptions(request, runtime);
}

GetPrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::getPrivateAccessPolicyWithOptions(shared_ptr<GetPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPrivateAccessPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPrivateAccessPolicyResponse(callApi(params, req, runtime));
}

GetPrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::getPrivateAccessPolicy(shared_ptr<GetPrivateAccessPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPrivateAccessPolicyWithOptions(request, runtime);
}

GetRegistrationPolicyResponse Alibabacloud_Csas20230120::Client::getRegistrationPolicyWithOptions(shared_ptr<GetRegistrationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegistrationPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRegistrationPolicyResponse(callApi(params, req, runtime));
}

GetRegistrationPolicyResponse Alibabacloud_Csas20230120::Client::getRegistrationPolicy(shared_ptr<GetRegistrationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRegistrationPolicyWithOptions(request, runtime);
}

GetUserDeviceResponse Alibabacloud_Csas20230120::Client::getUserDeviceWithOptions(shared_ptr<GetUserDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserDevice"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserDeviceResponse(callApi(params, req, runtime));
}

GetUserDeviceResponse Alibabacloud_Csas20230120::Client::getUserDevice(shared_ptr<GetUserDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserDeviceWithOptions(request, runtime);
}

GetUserGroupResponse Alibabacloud_Csas20230120::Client::getUserGroupWithOptions(shared_ptr<GetUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserGroup"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserGroupResponse(callApi(params, req, runtime));
}

GetUserGroupResponse Alibabacloud_Csas20230120::Client::getUserGroup(shared_ptr<GetUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserGroupWithOptions(request, runtime);
}

GetWmEmbedTaskResponse Alibabacloud_Csas20230120::Client::getWmEmbedTaskWithOptions(shared_ptr<GetWmEmbedTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWmEmbedTask"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWmEmbedTaskResponse(callApi(params, req, runtime));
}

GetWmEmbedTaskResponse Alibabacloud_Csas20230120::Client::getWmEmbedTask(shared_ptr<GetWmEmbedTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWmEmbedTaskWithOptions(request, runtime);
}

GetWmExtractTaskResponse Alibabacloud_Csas20230120::Client::getWmExtractTaskWithOptions(shared_ptr<GetWmExtractTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWmExtractTask"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWmExtractTaskResponse(callApi(params, req, runtime));
}

GetWmExtractTaskResponse Alibabacloud_Csas20230120::Client::getWmExtractTask(shared_ptr<GetWmExtractTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWmExtractTaskWithOptions(request, runtime);
}

ImportEnterpriseAccelerateTargetsResponse Alibabacloud_Csas20230120::Client::importEnterpriseAccelerateTargetsWithOptions(shared_ptr<ImportEnterpriseAccelerateTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eapId)) {
    body->insert(pair<string, string>("EapId", *request->eapId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportEnterpriseAccelerateTargets"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportEnterpriseAccelerateTargetsResponse(callApi(params, req, runtime));
}

ImportEnterpriseAccelerateTargetsResponse Alibabacloud_Csas20230120::Client::importEnterpriseAccelerateTargets(shared_ptr<ImportEnterpriseAccelerateTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importEnterpriseAccelerateTargetsWithOptions(request, runtime);
}

ListApplicationsForPrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::listApplicationsForPrivateAccessPolicyWithOptions(shared_ptr<ListApplicationsForPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplicationsForPrivateAccessPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationsForPrivateAccessPolicyResponse(callApi(params, req, runtime));
}

ListApplicationsForPrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::listApplicationsForPrivateAccessPolicy(shared_ptr<ListApplicationsForPrivateAccessPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplicationsForPrivateAccessPolicyWithOptions(request, runtime);
}

ListApplicationsForPrivateAccessTagResponse Alibabacloud_Csas20230120::Client::listApplicationsForPrivateAccessTagWithOptions(shared_ptr<ListApplicationsForPrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplicationsForPrivateAccessTag"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationsForPrivateAccessTagResponse(callApi(params, req, runtime));
}

ListApplicationsForPrivateAccessTagResponse Alibabacloud_Csas20230120::Client::listApplicationsForPrivateAccessTag(shared_ptr<ListApplicationsForPrivateAccessTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplicationsForPrivateAccessTagWithOptions(request, runtime);
}

ListApprovalProcessesResponse Alibabacloud_Csas20230120::Client::listApprovalProcessesWithOptions(shared_ptr<ListApprovalProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApprovalProcesses"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApprovalProcessesResponse(callApi(params, req, runtime));
}

ListApprovalProcessesResponse Alibabacloud_Csas20230120::Client::listApprovalProcesses(shared_ptr<ListApprovalProcessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApprovalProcessesWithOptions(request, runtime);
}

ListApprovalProcessesForApprovalSchemasResponse Alibabacloud_Csas20230120::Client::listApprovalProcessesForApprovalSchemasWithOptions(shared_ptr<ListApprovalProcessesForApprovalSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApprovalProcessesForApprovalSchemas"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApprovalProcessesForApprovalSchemasResponse(callApi(params, req, runtime));
}

ListApprovalProcessesForApprovalSchemasResponse Alibabacloud_Csas20230120::Client::listApprovalProcessesForApprovalSchemas(shared_ptr<ListApprovalProcessesForApprovalSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApprovalProcessesForApprovalSchemasWithOptions(request, runtime);
}

ListApprovalSchemasResponse Alibabacloud_Csas20230120::Client::listApprovalSchemasWithOptions(shared_ptr<ListApprovalSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApprovalSchemas"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApprovalSchemasResponse(callApi(params, req, runtime));
}

ListApprovalSchemasResponse Alibabacloud_Csas20230120::Client::listApprovalSchemas(shared_ptr<ListApprovalSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApprovalSchemasWithOptions(request, runtime);
}

ListApprovalSchemasForApprovalProcessesResponse Alibabacloud_Csas20230120::Client::listApprovalSchemasForApprovalProcessesWithOptions(shared_ptr<ListApprovalSchemasForApprovalProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApprovalSchemasForApprovalProcesses"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApprovalSchemasForApprovalProcessesResponse(callApi(params, req, runtime));
}

ListApprovalSchemasForApprovalProcessesResponse Alibabacloud_Csas20230120::Client::listApprovalSchemasForApprovalProcesses(shared_ptr<ListApprovalSchemasForApprovalProcessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApprovalSchemasForApprovalProcessesWithOptions(request, runtime);
}

ListApprovalsResponse Alibabacloud_Csas20230120::Client::listApprovalsWithOptions(shared_ptr<ListApprovalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApprovals"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApprovalsResponse(callApi(params, req, runtime));
}

ListApprovalsResponse Alibabacloud_Csas20230120::Client::listApprovals(shared_ptr<ListApprovalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApprovalsWithOptions(request, runtime);
}

ListClientUsersResponse Alibabacloud_Csas20230120::Client::listClientUsersWithOptions(shared_ptr<ListClientUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClientUsers"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClientUsersResponse(callApi(params, req, runtime));
}

ListClientUsersResponse Alibabacloud_Csas20230120::Client::listClientUsers(shared_ptr<ListClientUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClientUsersWithOptions(request, runtime);
}

ListConnectorsResponse Alibabacloud_Csas20230120::Client::listConnectorsWithOptions(shared_ptr<ListConnectorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConnectors"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConnectorsResponse(callApi(params, req, runtime));
}

ListConnectorsResponse Alibabacloud_Csas20230120::Client::listConnectors(shared_ptr<ListConnectorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectorsWithOptions(request, runtime);
}

ListDynamicDisposalProcessesResponse Alibabacloud_Csas20230120::Client::listDynamicDisposalProcessesWithOptions(shared_ptr<ListDynamicDisposalProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDynamicDisposalProcesses"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDynamicDisposalProcessesResponse(callApi(params, req, runtime));
}

ListDynamicDisposalProcessesResponse Alibabacloud_Csas20230120::Client::listDynamicDisposalProcesses(shared_ptr<ListDynamicDisposalProcessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDynamicDisposalProcessesWithOptions(request, runtime);
}

ListDynamicRouteRegionsResponse Alibabacloud_Csas20230120::Client::listDynamicRouteRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDynamicRouteRegions"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDynamicRouteRegionsResponse(callApi(params, req, runtime));
}

ListDynamicRouteRegionsResponse Alibabacloud_Csas20230120::Client::listDynamicRouteRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDynamicRouteRegionsWithOptions(runtime);
}

ListDynamicRoutesResponse Alibabacloud_Csas20230120::Client::listDynamicRoutesWithOptions(shared_ptr<ListDynamicRoutesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDynamicRoutes"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDynamicRoutesResponse(callApi(params, req, runtime));
}

ListDynamicRoutesResponse Alibabacloud_Csas20230120::Client::listDynamicRoutes(shared_ptr<ListDynamicRoutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDynamicRoutesWithOptions(request, runtime);
}

ListEnterpriseAccelerateLogsResponse Alibabacloud_Csas20230120::Client::listEnterpriseAccelerateLogsWithOptions(shared_ptr<ListEnterpriseAccelerateLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnterpriseAccelerateLogs"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnterpriseAccelerateLogsResponse(callApi(params, req, runtime));
}

ListEnterpriseAccelerateLogsResponse Alibabacloud_Csas20230120::Client::listEnterpriseAccelerateLogs(shared_ptr<ListEnterpriseAccelerateLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnterpriseAccelerateLogsWithOptions(request, runtime);
}

ListEnterpriseAcceleratePoliciesResponse Alibabacloud_Csas20230120::Client::listEnterpriseAcceleratePoliciesWithOptions(shared_ptr<ListEnterpriseAcceleratePoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnterpriseAcceleratePolicies"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnterpriseAcceleratePoliciesResponse(callApi(params, req, runtime));
}

ListEnterpriseAcceleratePoliciesResponse Alibabacloud_Csas20230120::Client::listEnterpriseAcceleratePolicies(shared_ptr<ListEnterpriseAcceleratePoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnterpriseAcceleratePoliciesWithOptions(request, runtime);
}

ListEnterpriseAccelerateTargetsResponse Alibabacloud_Csas20230120::Client::listEnterpriseAccelerateTargetsWithOptions(shared_ptr<ListEnterpriseAccelerateTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnterpriseAccelerateTargets"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnterpriseAccelerateTargetsResponse(callApi(params, req, runtime));
}

ListEnterpriseAccelerateTargetsResponse Alibabacloud_Csas20230120::Client::listEnterpriseAccelerateTargets(shared_ptr<ListEnterpriseAccelerateTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnterpriseAccelerateTargetsWithOptions(request, runtime);
}

ListExcessiveDeviceRegistrationApplicationsResponse Alibabacloud_Csas20230120::Client::listExcessiveDeviceRegistrationApplicationsWithOptions(shared_ptr<ListExcessiveDeviceRegistrationApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExcessiveDeviceRegistrationApplications"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExcessiveDeviceRegistrationApplicationsResponse(callApi(params, req, runtime));
}

ListExcessiveDeviceRegistrationApplicationsResponse Alibabacloud_Csas20230120::Client::listExcessiveDeviceRegistrationApplications(shared_ptr<ListExcessiveDeviceRegistrationApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listExcessiveDeviceRegistrationApplicationsWithOptions(request, runtime);
}

ListIdpConfigsResponse Alibabacloud_Csas20230120::Client::listIdpConfigsWithOptions(shared_ptr<ListIdpConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIdpConfigs"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIdpConfigsResponse(callApi(params, req, runtime));
}

ListIdpConfigsResponse Alibabacloud_Csas20230120::Client::listIdpConfigs(shared_ptr<ListIdpConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIdpConfigsWithOptions(request, runtime);
}

ListIdpDepartmentsResponse Alibabacloud_Csas20230120::Client::listIdpDepartmentsWithOptions(shared_ptr<ListIdpDepartmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIdpDepartments"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIdpDepartmentsResponse(callApi(params, req, runtime));
}

ListIdpDepartmentsResponse Alibabacloud_Csas20230120::Client::listIdpDepartments(shared_ptr<ListIdpDepartmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIdpDepartmentsWithOptions(request, runtime);
}

ListNacUserCertResponse Alibabacloud_Csas20230120::Client::listNacUserCertWithOptions(shared_ptr<ListNacUserCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->department)) {
    query->insert(pair<string, string>("Department", *request->department));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    query->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNacUserCert"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNacUserCertResponse(callApi(params, req, runtime));
}

ListNacUserCertResponse Alibabacloud_Csas20230120::Client::listNacUserCert(shared_ptr<ListNacUserCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNacUserCertWithOptions(request, runtime);
}

ListPolicesForPrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::listPolicesForPrivateAccessApplicationWithOptions(shared_ptr<ListPolicesForPrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPolicesForPrivateAccessApplication"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPolicesForPrivateAccessApplicationResponse(callApi(params, req, runtime));
}

ListPolicesForPrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::listPolicesForPrivateAccessApplication(shared_ptr<ListPolicesForPrivateAccessApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPolicesForPrivateAccessApplicationWithOptions(request, runtime);
}

ListPolicesForPrivateAccessTagResponse Alibabacloud_Csas20230120::Client::listPolicesForPrivateAccessTagWithOptions(shared_ptr<ListPolicesForPrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPolicesForPrivateAccessTag"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPolicesForPrivateAccessTagResponse(callApi(params, req, runtime));
}

ListPolicesForPrivateAccessTagResponse Alibabacloud_Csas20230120::Client::listPolicesForPrivateAccessTag(shared_ptr<ListPolicesForPrivateAccessTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPolicesForPrivateAccessTagWithOptions(request, runtime);
}

ListPolicesForUserGroupResponse Alibabacloud_Csas20230120::Client::listPolicesForUserGroupWithOptions(shared_ptr<ListPolicesForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPolicesForUserGroup"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPolicesForUserGroupResponse(callApi(params, req, runtime));
}

ListPolicesForUserGroupResponse Alibabacloud_Csas20230120::Client::listPolicesForUserGroup(shared_ptr<ListPolicesForUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPolicesForUserGroupWithOptions(request, runtime);
}

ListPopTrafficStatisticsResponse Alibabacloud_Csas20230120::Client::listPopTrafficStatisticsWithOptions(shared_ptr<ListPopTrafficStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPopTrafficStatistics"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPopTrafficStatisticsResponse(callApi(params, req, runtime));
}

ListPopTrafficStatisticsResponse Alibabacloud_Csas20230120::Client::listPopTrafficStatistics(shared_ptr<ListPopTrafficStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPopTrafficStatisticsWithOptions(request, runtime);
}

ListPrivateAccessApplicationsResponse Alibabacloud_Csas20230120::Client::listPrivateAccessApplicationsWithOptions(shared_ptr<ListPrivateAccessApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessModes)) {
    query->insert(pair<string, string>("AccessModes", *request->accessModes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationIds)) {
    query->insert(pair<string, vector<string>>("ApplicationIds", *request->applicationIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectorId)) {
    query->insert(pair<string, string>("ConnectorId", *request->connectorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagId)) {
    query->insert(pair<string, string>("TagId", *request->tagId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrivateAccessApplications"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrivateAccessApplicationsResponse(callApi(params, req, runtime));
}

ListPrivateAccessApplicationsResponse Alibabacloud_Csas20230120::Client::listPrivateAccessApplications(shared_ptr<ListPrivateAccessApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrivateAccessApplicationsWithOptions(request, runtime);
}

ListPrivateAccessApplicationsForDynamicRouteResponse Alibabacloud_Csas20230120::Client::listPrivateAccessApplicationsForDynamicRouteWithOptions(shared_ptr<ListPrivateAccessApplicationsForDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrivateAccessApplicationsForDynamicRoute"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrivateAccessApplicationsForDynamicRouteResponse(callApi(params, req, runtime));
}

ListPrivateAccessApplicationsForDynamicRouteResponse Alibabacloud_Csas20230120::Client::listPrivateAccessApplicationsForDynamicRoute(shared_ptr<ListPrivateAccessApplicationsForDynamicRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrivateAccessApplicationsForDynamicRouteWithOptions(request, runtime);
}

ListPrivateAccessPolicesResponse Alibabacloud_Csas20230120::Client::listPrivateAccessPolicesWithOptions(shared_ptr<ListPrivateAccessPolicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrivateAccessPolices"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrivateAccessPolicesResponse(callApi(params, req, runtime));
}

ListPrivateAccessPolicesResponse Alibabacloud_Csas20230120::Client::listPrivateAccessPolices(shared_ptr<ListPrivateAccessPolicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrivateAccessPolicesWithOptions(request, runtime);
}

ListPrivateAccessTagsResponse Alibabacloud_Csas20230120::Client::listPrivateAccessTagsWithOptions(shared_ptr<ListPrivateAccessTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrivateAccessTags"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrivateAccessTagsResponse(callApi(params, req, runtime));
}

ListPrivateAccessTagsResponse Alibabacloud_Csas20230120::Client::listPrivateAccessTags(shared_ptr<ListPrivateAccessTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrivateAccessTagsWithOptions(request, runtime);
}

ListPrivateAccessTagsForDynamicRouteResponse Alibabacloud_Csas20230120::Client::listPrivateAccessTagsForDynamicRouteWithOptions(shared_ptr<ListPrivateAccessTagsForDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrivateAccessTagsForDynamicRoute"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrivateAccessTagsForDynamicRouteResponse(callApi(params, req, runtime));
}

ListPrivateAccessTagsForDynamicRouteResponse Alibabacloud_Csas20230120::Client::listPrivateAccessTagsForDynamicRoute(shared_ptr<ListPrivateAccessTagsForDynamicRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrivateAccessTagsForDynamicRouteWithOptions(request, runtime);
}

ListRegistrationPoliciesResponse Alibabacloud_Csas20230120::Client::listRegistrationPoliciesWithOptions(shared_ptr<ListRegistrationPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegistrationPolicies"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRegistrationPoliciesResponse(callApi(params, req, runtime));
}

ListRegistrationPoliciesResponse Alibabacloud_Csas20230120::Client::listRegistrationPolicies(shared_ptr<ListRegistrationPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegistrationPoliciesWithOptions(request, runtime);
}

ListRegistrationPoliciesForUserGroupResponse Alibabacloud_Csas20230120::Client::listRegistrationPoliciesForUserGroupWithOptions(shared_ptr<ListRegistrationPoliciesForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegistrationPoliciesForUserGroup"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRegistrationPoliciesForUserGroupResponse(callApi(params, req, runtime));
}

ListRegistrationPoliciesForUserGroupResponse Alibabacloud_Csas20230120::Client::listRegistrationPoliciesForUserGroup(shared_ptr<ListRegistrationPoliciesForUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegistrationPoliciesForUserGroupWithOptions(request, runtime);
}

ListSoftwareForUserDeviceResponse Alibabacloud_Csas20230120::Client::listSoftwareForUserDeviceWithOptions(shared_ptr<ListSoftwareForUserDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSoftwareForUserDevice"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSoftwareForUserDeviceResponse(callApi(params, req, runtime));
}

ListSoftwareForUserDeviceResponse Alibabacloud_Csas20230120::Client::listSoftwareForUserDevice(shared_ptr<ListSoftwareForUserDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSoftwareForUserDeviceWithOptions(request, runtime);
}

ListTagsForPrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::listTagsForPrivateAccessApplicationWithOptions(shared_ptr<ListTagsForPrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagsForPrivateAccessApplication"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagsForPrivateAccessApplicationResponse(callApi(params, req, runtime));
}

ListTagsForPrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::listTagsForPrivateAccessApplication(shared_ptr<ListTagsForPrivateAccessApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagsForPrivateAccessApplicationWithOptions(request, runtime);
}

ListTagsForPrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::listTagsForPrivateAccessPolicyWithOptions(shared_ptr<ListTagsForPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagsForPrivateAccessPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagsForPrivateAccessPolicyResponse(callApi(params, req, runtime));
}

ListTagsForPrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::listTagsForPrivateAccessPolicy(shared_ptr<ListTagsForPrivateAccessPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagsForPrivateAccessPolicyWithOptions(request, runtime);
}

ListUninstallApplicationsResponse Alibabacloud_Csas20230120::Client::listUninstallApplicationsWithOptions(shared_ptr<ListUninstallApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUninstallApplications"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUninstallApplicationsResponse(callApi(params, req, runtime));
}

ListUninstallApplicationsResponse Alibabacloud_Csas20230120::Client::listUninstallApplications(shared_ptr<ListUninstallApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUninstallApplicationsWithOptions(request, runtime);
}

ListUserApplicationsResponse Alibabacloud_Csas20230120::Client::listUserApplicationsWithOptions(shared_ptr<ListUserApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserApplications"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserApplicationsResponse(callApi(params, req, runtime));
}

ListUserApplicationsResponse Alibabacloud_Csas20230120::Client::listUserApplications(shared_ptr<ListUserApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserApplicationsWithOptions(request, runtime);
}

ListUserDevicesResponse Alibabacloud_Csas20230120::Client::listUserDevicesWithOptions(shared_ptr<ListUserDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserDevices"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserDevicesResponse(callApi(params, req, runtime));
}

ListUserDevicesResponse Alibabacloud_Csas20230120::Client::listUserDevices(shared_ptr<ListUserDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserDevicesWithOptions(request, runtime);
}

ListUserGroupsResponse Alibabacloud_Csas20230120::Client::listUserGroupsWithOptions(shared_ptr<ListUserGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserGroups"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserGroupsResponse(callApi(params, req, runtime));
}

ListUserGroupsResponse Alibabacloud_Csas20230120::Client::listUserGroups(shared_ptr<ListUserGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserGroupsWithOptions(request, runtime);
}

ListUserGroupsForPrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::listUserGroupsForPrivateAccessPolicyWithOptions(shared_ptr<ListUserGroupsForPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserGroupsForPrivateAccessPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserGroupsForPrivateAccessPolicyResponse(callApi(params, req, runtime));
}

ListUserGroupsForPrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::listUserGroupsForPrivateAccessPolicy(shared_ptr<ListUserGroupsForPrivateAccessPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserGroupsForPrivateAccessPolicyWithOptions(request, runtime);
}

ListUserGroupsForRegistrationPolicyResponse Alibabacloud_Csas20230120::Client::listUserGroupsForRegistrationPolicyWithOptions(shared_ptr<ListUserGroupsForRegistrationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserGroupsForRegistrationPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserGroupsForRegistrationPolicyResponse(callApi(params, req, runtime));
}

ListUserGroupsForRegistrationPolicyResponse Alibabacloud_Csas20230120::Client::listUserGroupsForRegistrationPolicy(shared_ptr<ListUserGroupsForRegistrationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserGroupsForRegistrationPolicyWithOptions(request, runtime);
}

ListUserPrivateAccessPoliciesResponse Alibabacloud_Csas20230120::Client::listUserPrivateAccessPoliciesWithOptions(shared_ptr<ListUserPrivateAccessPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserPrivateAccessPolicies"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserPrivateAccessPoliciesResponse(callApi(params, req, runtime));
}

ListUserPrivateAccessPoliciesResponse Alibabacloud_Csas20230120::Client::listUserPrivateAccessPolicies(shared_ptr<ListUserPrivateAccessPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserPrivateAccessPoliciesWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Csas20230120::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsers"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersResponse(callApi(params, req, runtime));
}

ListUsersResponse Alibabacloud_Csas20230120::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

LookupWmInfoMappingResponse Alibabacloud_Csas20230120::Client::lookupWmInfoMappingWithOptions(shared_ptr<LookupWmInfoMappingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LookupWmInfoMapping"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LookupWmInfoMappingResponse(callApi(params, req, runtime));
}

LookupWmInfoMappingResponse Alibabacloud_Csas20230120::Client::lookupWmInfoMapping(shared_ptr<LookupWmInfoMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lookupWmInfoMappingWithOptions(request, runtime);
}

ModifyEnterpriseAcceleratePolicyResponse Alibabacloud_Csas20230120::Client::modifyEnterpriseAcceleratePolicyWithOptions(shared_ptr<ModifyEnterpriseAcceleratePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerationType)) {
    body->insert(pair<string, string>("AccelerationType", *request->accelerationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eapId)) {
    body->insert(pair<string, string>("EapId", *request->eapId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->onTls)) {
    body->insert(pair<string, long>("OnTls", *request->onTls));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showInClient)) {
    body->insert(pair<string, long>("ShowInClient", *request->showInClient));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upstreamHost)) {
    body->insert(pair<string, string>("UpstreamHost", *request->upstreamHost));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->upstreamPort)) {
    body->insert(pair<string, long>("UpstreamPort", *request->upstreamPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upstreamType)) {
    body->insert(pair<string, string>("UpstreamType", *request->upstreamType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAttributeGroup)) {
    body->insert(pair<string, string>("UserAttributeGroup", *request->userAttributeGroup));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEnterpriseAcceleratePolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyEnterpriseAcceleratePolicyResponse(callApi(params, req, runtime));
}

ModifyEnterpriseAcceleratePolicyResponse Alibabacloud_Csas20230120::Client::modifyEnterpriseAcceleratePolicy(shared_ptr<ModifyEnterpriseAcceleratePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEnterpriseAcceleratePolicyWithOptions(request, runtime);
}

RevokeUserSessionResponse Alibabacloud_Csas20230120::Client::revokeUserSessionWithOptions(shared_ptr<RevokeUserSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalIds)) {
    query->insert(pair<string, string>("ExternalIds", *request->externalIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idpId)) {
    query->insert(pair<string, string>("IdpId", *request->idpId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeUserSession"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeUserSessionResponse(callApi(params, req, runtime));
}

RevokeUserSessionResponse Alibabacloud_Csas20230120::Client::revokeUserSession(shared_ptr<RevokeUserSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeUserSessionWithOptions(request, runtime);
}

UpdateApprovalProcessResponse Alibabacloud_Csas20230120::Client::updateApprovalProcessWithOptions(shared_ptr<UpdateApprovalProcessRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateApprovalProcessShrinkRequest> request = make_shared<UpdateApprovalProcessShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateApprovalProcessRequestMatchSchemas>(tmpReq->matchSchemas)) {
    request->matchSchemasShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->matchSchemas, make_shared<string>("MatchSchemas"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchSchemasShrink)) {
    body->insert(pair<string, string>("MatchSchemas", *request->matchSchemasShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processId)) {
    body->insert(pair<string, string>("ProcessId", *request->processId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processName)) {
    body->insert(pair<string, string>("ProcessName", *request->processName));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<vector<string>>>(request->processNodes)) {
    bodyFlat->insert(pair<string, vector<vector<string>>>("ProcessNodes", *request->processNodes));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApprovalProcess"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApprovalProcessResponse(callApi(params, req, runtime));
}

UpdateApprovalProcessResponse Alibabacloud_Csas20230120::Client::updateApprovalProcess(shared_ptr<UpdateApprovalProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateApprovalProcessWithOptions(request, runtime);
}

UpdateApprovalStatusResponse Alibabacloud_Csas20230120::Client::updateApprovalStatusWithOptions(shared_ptr<UpdateApprovalStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalId)) {
    query->insert(pair<string, string>("ApprovalId", *request->approvalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApprovalStatus"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApprovalStatusResponse(callApi(params, req, runtime));
}

UpdateApprovalStatusResponse Alibabacloud_Csas20230120::Client::updateApprovalStatus(shared_ptr<UpdateApprovalStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateApprovalStatusWithOptions(request, runtime);
}

UpdateBootAndAntiUninstallPolicyResponse Alibabacloud_Csas20230120::Client::updateBootAndAntiUninstallPolicyWithOptions(shared_ptr<UpdateBootAndAntiUninstallPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateBootAndAntiUninstallPolicyShrinkRequest> request = make_shared<UpdateBootAndAntiUninstallPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateBootAndAntiUninstallPolicyRequestBlockContent>(tmpReq->blockContent)) {
    request->blockContentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->blockContent, make_shared<string>("BlockContent"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowReport)) {
    body->insert(pair<string, bool>("AllowReport", *request->allowReport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blockContentShrink)) {
    body->insert(pair<string, string>("BlockContent", *request->blockContentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAntiUninstall)) {
    body->insert(pair<string, bool>("IsAntiUninstall", *request->isAntiUninstall));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBoot)) {
    body->insert(pair<string, bool>("IsBoot", *request->isBoot));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userGroupIds)) {
    bodyFlat->insert(pair<string, vector<string>>("UserGroupIds", *request->userGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->whitelistUsers)) {
    bodyFlat->insert(pair<string, vector<string>>("WhitelistUsers", *request->whitelistUsers));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBootAndAntiUninstallPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBootAndAntiUninstallPolicyResponse(callApi(params, req, runtime));
}

UpdateBootAndAntiUninstallPolicyResponse Alibabacloud_Csas20230120::Client::updateBootAndAntiUninstallPolicy(shared_ptr<UpdateBootAndAntiUninstallPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBootAndAntiUninstallPolicyWithOptions(request, runtime);
}

UpdateClientUserResponse Alibabacloud_Csas20230120::Client::updateClientUserWithOptions(shared_ptr<UpdateClientUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentId)) {
    query->insert(pair<string, string>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobileNumber)) {
    query->insert(pair<string, string>("MobileNumber", *request->mobileNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateClientUser"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateClientUserResponse(callApi(params, req, runtime));
}

UpdateClientUserResponse Alibabacloud_Csas20230120::Client::updateClientUser(shared_ptr<UpdateClientUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateClientUserWithOptions(request, runtime);
}

UpdateClientUserPasswordResponse Alibabacloud_Csas20230120::Client::updateClientUserPasswordWithOptions(shared_ptr<UpdateClientUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateClientUserPassword"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateClientUserPasswordResponse(callApi(params, req, runtime));
}

UpdateClientUserPasswordResponse Alibabacloud_Csas20230120::Client::updateClientUserPassword(shared_ptr<UpdateClientUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateClientUserPasswordWithOptions(request, runtime);
}

UpdateClientUserStatusResponse Alibabacloud_Csas20230120::Client::updateClientUserStatusWithOptions(shared_ptr<UpdateClientUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateClientUserStatus"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateClientUserStatusResponse(callApi(params, req, runtime));
}

UpdateClientUserStatusResponse Alibabacloud_Csas20230120::Client::updateClientUserStatus(shared_ptr<UpdateClientUserStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateClientUserStatusWithOptions(request, runtime);
}

UpdateDynamicRouteResponse Alibabacloud_Csas20230120::Client::updateDynamicRouteWithOptions(shared_ptr<UpdateDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationIds)) {
    bodyFlat->insert(pair<string, vector<string>>("ApplicationIds", *request->applicationIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationType)) {
    body->insert(pair<string, string>("ApplicationType", *request->applicationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicRouteId)) {
    body->insert(pair<string, string>("DynamicRouteId", *request->dynamicRouteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicRouteType)) {
    body->insert(pair<string, string>("DynamicRouteType", *request->dynamicRouteType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyType)) {
    body->insert(pair<string, string>("ModifyType", *request->modifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextHop)) {
    body->insert(pair<string, string>("NextHop", *request->nextHop));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->regionIds)) {
    bodyFlat->insert(pair<string, vector<string>>("RegionIds", *request->regionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagIds)) {
    bodyFlat->insert(pair<string, vector<string>>("TagIds", *request->tagIds));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDynamicRoute"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDynamicRouteResponse(callApi(params, req, runtime));
}

UpdateDynamicRouteResponse Alibabacloud_Csas20230120::Client::updateDynamicRoute(shared_ptr<UpdateDynamicRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDynamicRouteWithOptions(request, runtime);
}

UpdateExcessiveDeviceRegistrationApplicationsStatusResponse Alibabacloud_Csas20230120::Client::updateExcessiveDeviceRegistrationApplicationsStatusWithOptions(shared_ptr<UpdateExcessiveDeviceRegistrationApplicationsStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationIds)) {
    bodyFlat->insert(pair<string, vector<string>>("ApplicationIds", *request->applicationIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateExcessiveDeviceRegistrationApplicationsStatus"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateExcessiveDeviceRegistrationApplicationsStatusResponse(callApi(params, req, runtime));
}

UpdateExcessiveDeviceRegistrationApplicationsStatusResponse Alibabacloud_Csas20230120::Client::updateExcessiveDeviceRegistrationApplicationsStatus(shared_ptr<UpdateExcessiveDeviceRegistrationApplicationsStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateExcessiveDeviceRegistrationApplicationsStatusWithOptions(request, runtime);
}

UpdateIdpDepartmentResponse Alibabacloud_Csas20230120::Client::updateIdpDepartmentWithOptions(shared_ptr<UpdateIdpDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentId)) {
    query->insert(pair<string, string>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentName)) {
    query->insert(pair<string, string>("DepartmentName", *request->departmentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idpConfigId)) {
    query->insert(pair<string, string>("IdpConfigId", *request->idpConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIdpDepartment"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIdpDepartmentResponse(callApi(params, req, runtime));
}

UpdateIdpDepartmentResponse Alibabacloud_Csas20230120::Client::updateIdpDepartment(shared_ptr<UpdateIdpDepartmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIdpDepartmentWithOptions(request, runtime);
}

UpdateNacUserCertStatusResponse Alibabacloud_Csas20230120::Client::updateNacUserCertStatusWithOptions(shared_ptr<UpdateNacUserCertStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateNacUserCertStatusRequestIdList>>(request->idList)) {
    bodyFlat->insert(pair<string, vector<UpdateNacUserCertStatusRequestIdList>>("IdList", *request->idList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNacUserCertStatus"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNacUserCertStatusResponse(callApi(params, req, runtime));
}

UpdateNacUserCertStatusResponse Alibabacloud_Csas20230120::Client::updateNacUserCertStatus(shared_ptr<UpdateNacUserCertStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNacUserCertStatusWithOptions(request, runtime);
}

UpdatePrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::updatePrivateAccessApplicationWithOptions(shared_ptr<UpdatePrivateAccessApplicationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdatePrivateAccessApplicationShrinkRequest> request = make_shared<UpdatePrivateAccessApplicationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PAL7Config>(tmpReq->l7Config)) {
    request->l7ConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->l7Config, make_shared<string>("L7Config"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->addresses)) {
    bodyFlat->insert(pair<string, vector<string>>("Addresses", *request->addresses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationId)) {
    body->insert(pair<string, string>("ApplicationId", *request->applicationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->l7ConfigShrink)) {
    body->insert(pair<string, string>("L7Config", *request->l7ConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->l7ProxyDomainAutomaticPrefix)) {
    body->insert(pair<string, string>("L7ProxyDomainAutomaticPrefix", *request->l7ProxyDomainAutomaticPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->l7ProxyDomainCustom)) {
    body->insert(pair<string, string>("L7ProxyDomainCustom", *request->l7ProxyDomainCustom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->l7ProxyDomainPrivate)) {
    body->insert(pair<string, string>("L7ProxyDomainPrivate", *request->l7ProxyDomainPrivate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyType)) {
    body->insert(pair<string, string>("ModifyType", *request->modifyType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdatePrivateAccessApplicationShrinkRequestPortRanges>>(request->portRanges)) {
    bodyFlat->insert(pair<string, vector<UpdatePrivateAccessApplicationShrinkRequestPortRanges>>("PortRanges", *request->portRanges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagIds)) {
    bodyFlat->insert(pair<string, vector<string>>("TagIds", *request->tagIds));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrivateAccessApplication"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePrivateAccessApplicationResponse(callApi(params, req, runtime));
}

UpdatePrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::updatePrivateAccessApplication(shared_ptr<UpdatePrivateAccessApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrivateAccessApplicationWithOptions(request, runtime);
}

UpdatePrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::updatePrivateAccessPolicyWithOptions(shared_ptr<UpdatePrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationIds)) {
    bodyFlat->insert(pair<string, vector<string>>("ApplicationIds", *request->applicationIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationType)) {
    body->insert(pair<string, string>("ApplicationType", *request->applicationType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdatePrivateAccessPolicyRequestCustomUserAttributes>>(request->customUserAttributes)) {
    bodyFlat->insert(pair<string, vector<UpdatePrivateAccessPolicyRequestCustomUserAttributes>>("CustomUserAttributes", *request->customUserAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceAttributeAction)) {
    body->insert(pair<string, string>("DeviceAttributeAction", *request->deviceAttributeAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceAttributeId)) {
    body->insert(pair<string, string>("DeviceAttributeId", *request->deviceAttributeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyType)) {
    body->insert(pair<string, string>("ModifyType", *request->modifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyAction)) {
    body->insert(pair<string, string>("PolicyAction", *request->policyAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagIds)) {
    bodyFlat->insert(pair<string, vector<string>>("TagIds", *request->tagIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerTemplateId)) {
    body->insert(pair<string, string>("TriggerTemplateId", *request->triggerTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->trustedProcessGroupIds)) {
    bodyFlat->insert(pair<string, vector<string>>("TrustedProcessGroupIds", *request->trustedProcessGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trustedProcessStatus)) {
    body->insert(pair<string, string>("TrustedProcessStatus", *request->trustedProcessStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->trustedSoftwareIds)) {
    bodyFlat->insert(pair<string, vector<string>>("TrustedSoftwareIds", *request->trustedSoftwareIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userGroupIds)) {
    bodyFlat->insert(pair<string, vector<string>>("UserGroupIds", *request->userGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupMode)) {
    body->insert(pair<string, string>("UserGroupMode", *request->userGroupMode));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrivateAccessPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePrivateAccessPolicyResponse(callApi(params, req, runtime));
}

UpdatePrivateAccessPolicyResponse Alibabacloud_Csas20230120::Client::updatePrivateAccessPolicy(shared_ptr<UpdatePrivateAccessPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrivateAccessPolicyWithOptions(request, runtime);
}

UpdateRegistrationPolicyResponse Alibabacloud_Csas20230120::Client::updateRegistrationPolicyWithOptions(shared_ptr<UpdateRegistrationPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateRegistrationPolicyShrinkRequest> request = make_shared<UpdateRegistrationPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateRegistrationPolicyRequestCompanyLimitCount>(tmpReq->companyLimitCount)) {
    request->companyLimitCountShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->companyLimitCount, make_shared<string>("CompanyLimitCount"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateRegistrationPolicyRequestPersonalLimitCount>(tmpReq->personalLimitCount)) {
    request->personalLimitCountShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->personalLimitCount, make_shared<string>("PersonalLimitCount"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->companyLimitCountShrink)) {
    body->insert(pair<string, string>("CompanyLimitCount", *request->companyLimitCountShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->companyLimitType)) {
    body->insert(pair<string, string>("CompanyLimitType", *request->companyLimitType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchMode)) {
    body->insert(pair<string, string>("MatchMode", *request->matchMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->personalLimitCountShrink)) {
    body->insert(pair<string, string>("PersonalLimitCount", *request->personalLimitCountShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->personalLimitType)) {
    body->insert(pair<string, string>("PersonalLimitType", *request->personalLimitType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    body->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userGroupIds)) {
    bodyFlat->insert(pair<string, vector<string>>("UserGroupIds", *request->userGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->whitelist)) {
    bodyFlat->insert(pair<string, vector<string>>("Whitelist", *request->whitelist));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRegistrationPolicy"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRegistrationPolicyResponse(callApi(params, req, runtime));
}

UpdateRegistrationPolicyResponse Alibabacloud_Csas20230120::Client::updateRegistrationPolicy(shared_ptr<UpdateRegistrationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRegistrationPolicyWithOptions(request, runtime);
}

UpdateUninstallApplicationsStatusResponse Alibabacloud_Csas20230120::Client::updateUninstallApplicationsStatusWithOptions(shared_ptr<UpdateUninstallApplicationsStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationIds)) {
    bodyFlat->insert(pair<string, vector<string>>("ApplicationIds", *request->applicationIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUninstallApplicationsStatus"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUninstallApplicationsStatusResponse(callApi(params, req, runtime));
}

UpdateUninstallApplicationsStatusResponse Alibabacloud_Csas20230120::Client::updateUninstallApplicationsStatus(shared_ptr<UpdateUninstallApplicationsStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUninstallApplicationsStatusWithOptions(request, runtime);
}

UpdateUserDevicesSharingStatusResponse Alibabacloud_Csas20230120::Client::updateUserDevicesSharingStatusWithOptions(shared_ptr<UpdateUserDevicesSharingStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceTags)) {
    bodyFlat->insert(pair<string, vector<string>>("DeviceTags", *request->deviceTags));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sharingStatus)) {
    body->insert(pair<string, bool>("SharingStatus", *request->sharingStatus));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserDevicesSharingStatus"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserDevicesSharingStatusResponse(callApi(params, req, runtime));
}

UpdateUserDevicesSharingStatusResponse Alibabacloud_Csas20230120::Client::updateUserDevicesSharingStatus(shared_ptr<UpdateUserDevicesSharingStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserDevicesSharingStatusWithOptions(request, runtime);
}

UpdateUserDevicesStatusResponse Alibabacloud_Csas20230120::Client::updateUserDevicesStatusWithOptions(shared_ptr<UpdateUserDevicesStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceAction)) {
    body->insert(pair<string, string>("DeviceAction", *request->deviceAction));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceTags)) {
    bodyFlat->insert(pair<string, vector<string>>("DeviceTags", *request->deviceTags));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserDevicesStatus"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserDevicesStatusResponse(callApi(params, req, runtime));
}

UpdateUserDevicesStatusResponse Alibabacloud_Csas20230120::Client::updateUserDevicesStatus(shared_ptr<UpdateUserDevicesStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserDevicesStatusWithOptions(request, runtime);
}

UpdateUserGroupResponse Alibabacloud_Csas20230120::Client::updateUserGroupWithOptions(shared_ptr<UpdateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateUserGroupRequestAttributes>>(request->attributes)) {
    bodyFlat->insert(pair<string, vector<UpdateUserGroupRequestAttributes>>("Attributes", *request->attributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyType)) {
    body->insert(pair<string, string>("ModifyType", *request->modifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    body->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserGroup"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserGroupResponse(callApi(params, req, runtime));
}

UpdateUserGroupResponse Alibabacloud_Csas20230120::Client::updateUserGroup(shared_ptr<UpdateUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserGroupWithOptions(request, runtime);
}

UpdateUsersStatusResponse Alibabacloud_Csas20230120::Client::updateUsersStatusWithOptions(shared_ptr<UpdateUsersStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->saseUserIds)) {
    query->insert(pair<string, vector<string>>("SaseUserIds", *request->saseUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUsersStatus"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUsersStatusResponse(callApi(params, req, runtime));
}

UpdateUsersStatusResponse Alibabacloud_Csas20230120::Client::updateUsersStatus(shared_ptr<UpdateUsersStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUsersStatusWithOptions(request, runtime);
}

