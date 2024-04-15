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

CreatePrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::createPrivateAccessApplicationWithOptions(shared_ptr<CreatePrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->addresses)) {
    bodyFlat->insert(pair<string, vector<string>>("Addresses", *request->addresses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePrivateAccessApplicationRequestPortRanges>>(request->portRanges)) {
    bodyFlat->insert(pair<string, vector<CreatePrivateAccessApplicationRequestPortRanges>>("PortRanges", *request->portRanges));
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
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrivateAccessApplications"))},
    {"version", boost::any(string("2023-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
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

UpdatePrivateAccessApplicationResponse Alibabacloud_Csas20230120::Client::updatePrivateAccessApplicationWithOptions(shared_ptr<UpdatePrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyType)) {
    body->insert(pair<string, string>("ModifyType", *request->modifyType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdatePrivateAccessApplicationRequestPortRanges>>(request->portRanges)) {
    bodyFlat->insert(pair<string, vector<UpdatePrivateAccessApplicationRequestPortRanges>>("PortRanges", *request->portRanges));
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

