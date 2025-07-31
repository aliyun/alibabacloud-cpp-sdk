// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dataphin_public_20230630.hpp>
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

using namespace Alibabacloud_Dataphin-public20230630;

Alibabacloud_Dataphin-public20230630::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dataphin-public"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dataphin-public20230630::Client::getEndpoint(shared_ptr<string> productId,
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

AddDataServiceProjectMemberResponse Alibabacloud_Dataphin-public20230630::Client::addDataServiceProjectMemberWithOptions(shared_ptr<AddDataServiceProjectMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddDataServiceProjectMemberShrinkRequest> request = make_shared<AddDataServiceProjectMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddDataServiceProjectMemberRequestAddCommand>(tmpReq->addCommand)) {
    request->addCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->addCommand, make_shared<string>("AddCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addCommandShrink)) {
    body->insert(pair<string, string>("AddCommand", *request->addCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDataServiceProjectMember"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDataServiceProjectMemberResponse(callApi(params, req, runtime));
}

AddDataServiceProjectMemberResponse Alibabacloud_Dataphin-public20230630::Client::addDataServiceProjectMember(shared_ptr<AddDataServiceProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDataServiceProjectMemberWithOptions(request, runtime);
}

AddProjectMemberResponse Alibabacloud_Dataphin-public20230630::Client::addProjectMemberWithOptions(shared_ptr<AddProjectMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddProjectMemberShrinkRequest> request = make_shared<AddProjectMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddProjectMemberRequestAddCommand>(tmpReq->addCommand)) {
    request->addCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->addCommand, make_shared<string>("AddCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addCommandShrink)) {
    body->insert(pair<string, string>("AddCommand", *request->addCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddProjectMember"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddProjectMemberResponse(callApi(params, req, runtime));
}

AddProjectMemberResponse Alibabacloud_Dataphin-public20230630::Client::addProjectMember(shared_ptr<AddProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addProjectMemberWithOptions(request, runtime);
}

AddTenantMembersResponse Alibabacloud_Dataphin-public20230630::Client::addTenantMembersWithOptions(shared_ptr<AddTenantMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddTenantMembersShrinkRequest> request = make_shared<AddTenantMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddTenantMembersRequestAddCommand>(tmpReq->addCommand)) {
    request->addCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->addCommand, make_shared<string>("AddCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addCommandShrink)) {
    body->insert(pair<string, string>("AddCommand", *request->addCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTenantMembers"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTenantMembersResponse(callApi(params, req, runtime));
}

AddTenantMembersResponse Alibabacloud_Dataphin-public20230630::Client::addTenantMembers(shared_ptr<AddTenantMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTenantMembersWithOptions(request, runtime);
}

AddTenantMembersBySourceUserResponse Alibabacloud_Dataphin-public20230630::Client::addTenantMembersBySourceUserWithOptions(shared_ptr<AddTenantMembersBySourceUserRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddTenantMembersBySourceUserShrinkRequest> request = make_shared<AddTenantMembersBySourceUserShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddTenantMembersBySourceUserRequestAddCommand>(tmpReq->addCommand)) {
    request->addCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->addCommand, make_shared<string>("AddCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addCommandShrink)) {
    body->insert(pair<string, string>("AddCommand", *request->addCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTenantMembersBySourceUser"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTenantMembersBySourceUserResponse(callApi(params, req, runtime));
}

AddTenantMembersBySourceUserResponse Alibabacloud_Dataphin-public20230630::Client::addTenantMembersBySourceUser(shared_ptr<AddTenantMembersBySourceUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTenantMembersBySourceUserWithOptions(request, runtime);
}

AddUserGroupMemberResponse Alibabacloud_Dataphin-public20230630::Client::addUserGroupMemberWithOptions(shared_ptr<AddUserGroupMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddUserGroupMemberShrinkRequest> request = make_shared<AddUserGroupMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddUserGroupMemberRequestAddCommand>(tmpReq->addCommand)) {
    request->addCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->addCommand, make_shared<string>("AddCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addCommandShrink)) {
    body->insert(pair<string, string>("AddCommand", *request->addCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserGroupMember"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserGroupMemberResponse(callApi(params, req, runtime));
}

AddUserGroupMemberResponse Alibabacloud_Dataphin-public20230630::Client::addUserGroupMember(shared_ptr<AddUserGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserGroupMemberWithOptions(request, runtime);
}

ApplyDataServiceApiResponse Alibabacloud_Dataphin-public20230630::Client::applyDataServiceApiWithOptions(shared_ptr<ApplyDataServiceApiRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyDataServiceApiShrinkRequest> request = make_shared<ApplyDataServiceApiShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ApplyDataServiceApiRequestApplyCommand>(tmpReq->applyCommand)) {
    request->applyCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applyCommand, make_shared<string>("ApplyCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyCommandShrink)) {
    body->insert(pair<string, string>("ApplyCommand", *request->applyCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyDataServiceApi"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyDataServiceApiResponse(callApi(params, req, runtime));
}

ApplyDataServiceApiResponse Alibabacloud_Dataphin-public20230630::Client::applyDataServiceApi(shared_ptr<ApplyDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyDataServiceApiWithOptions(request, runtime);
}

ApplyDataServiceAppResponse Alibabacloud_Dataphin-public20230630::Client::applyDataServiceAppWithOptions(shared_ptr<ApplyDataServiceAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyDataServiceAppShrinkRequest> request = make_shared<ApplyDataServiceAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ApplyDataServiceAppRequestApplyCommand>(tmpReq->applyCommand)) {
    request->applyCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applyCommand, make_shared<string>("ApplyCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyCommandShrink)) {
    body->insert(pair<string, string>("ApplyCommand", *request->applyCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyDataServiceApp"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyDataServiceAppResponse(callApi(params, req, runtime));
}

ApplyDataServiceAppResponse Alibabacloud_Dataphin-public20230630::Client::applyDataServiceApp(shared_ptr<ApplyDataServiceAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyDataServiceAppWithOptions(request, runtime);
}

CheckComputeSourceConnectivityResponse Alibabacloud_Dataphin-public20230630::Client::checkComputeSourceConnectivityWithOptions(shared_ptr<CheckComputeSourceConnectivityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CheckComputeSourceConnectivityShrinkRequest> request = make_shared<CheckComputeSourceConnectivityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CheckComputeSourceConnectivityRequestCheckCommand>(tmpReq->checkCommand)) {
    request->checkCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->checkCommand, make_shared<string>("CheckCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkCommandShrink)) {
    body->insert(pair<string, string>("CheckCommand", *request->checkCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckComputeSourceConnectivity"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckComputeSourceConnectivityResponse(callApi(params, req, runtime));
}

CheckComputeSourceConnectivityResponse Alibabacloud_Dataphin-public20230630::Client::checkComputeSourceConnectivity(shared_ptr<CheckComputeSourceConnectivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkComputeSourceConnectivityWithOptions(request, runtime);
}

CheckComputeSourceConnectivityByIdResponse Alibabacloud_Dataphin-public20230630::Client::checkComputeSourceConnectivityByIdWithOptions(shared_ptr<CheckComputeSourceConnectivityByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckComputeSourceConnectivityById"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckComputeSourceConnectivityByIdResponse(callApi(params, req, runtime));
}

CheckComputeSourceConnectivityByIdResponse Alibabacloud_Dataphin-public20230630::Client::checkComputeSourceConnectivityById(shared_ptr<CheckComputeSourceConnectivityByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkComputeSourceConnectivityByIdWithOptions(request, runtime);
}

CheckDataSourceConnectivityResponse Alibabacloud_Dataphin-public20230630::Client::checkDataSourceConnectivityWithOptions(shared_ptr<CheckDataSourceConnectivityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CheckDataSourceConnectivityShrinkRequest> request = make_shared<CheckDataSourceConnectivityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CheckDataSourceConnectivityRequestCheckCommand>(tmpReq->checkCommand)) {
    request->checkCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->checkCommand, make_shared<string>("CheckCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkCommandShrink)) {
    body->insert(pair<string, string>("CheckCommand", *request->checkCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDataSourceConnectivity"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDataSourceConnectivityResponse(callApi(params, req, runtime));
}

CheckDataSourceConnectivityResponse Alibabacloud_Dataphin-public20230630::Client::checkDataSourceConnectivity(shared_ptr<CheckDataSourceConnectivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDataSourceConnectivityWithOptions(request, runtime);
}

CheckDataSourceConnectivityByIdResponse Alibabacloud_Dataphin-public20230630::Client::checkDataSourceConnectivityByIdWithOptions(shared_ptr<CheckDataSourceConnectivityByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDataSourceConnectivityById"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDataSourceConnectivityByIdResponse(callApi(params, req, runtime));
}

CheckDataSourceConnectivityByIdResponse Alibabacloud_Dataphin-public20230630::Client::checkDataSourceConnectivityById(shared_ptr<CheckDataSourceConnectivityByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDataSourceConnectivityByIdWithOptions(request, runtime);
}

CheckProjectHasDependencyResponse Alibabacloud_Dataphin-public20230630::Client::checkProjectHasDependencyWithOptions(shared_ptr<CheckProjectHasDependencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckProjectHasDependency"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckProjectHasDependencyResponse(callApi(params, req, runtime));
}

CheckProjectHasDependencyResponse Alibabacloud_Dataphin-public20230630::Client::checkProjectHasDependency(shared_ptr<CheckProjectHasDependencyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkProjectHasDependencyWithOptions(request, runtime);
}

CheckResourcePermissionResponse Alibabacloud_Dataphin-public20230630::Client::checkResourcePermissionWithOptions(shared_ptr<CheckResourcePermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CheckResourcePermissionShrinkRequest> request = make_shared<CheckResourcePermissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CheckResourcePermissionRequestCheckCommand>(tmpReq->checkCommand)) {
    request->checkCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->checkCommand, make_shared<string>("CheckCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkCommandShrink)) {
    body->insert(pair<string, string>("CheckCommand", *request->checkCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckResourcePermission"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckResourcePermissionResponse(callApi(params, req, runtime));
}

CheckResourcePermissionResponse Alibabacloud_Dataphin-public20230630::Client::checkResourcePermission(shared_ptr<CheckResourcePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkResourcePermissionWithOptions(request, runtime);
}

CreateAdHocFileResponse Alibabacloud_Dataphin-public20230630::Client::createAdHocFileWithOptions(shared_ptr<CreateAdHocFileRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAdHocFileShrinkRequest> request = make_shared<CreateAdHocFileShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateAdHocFileRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAdHocFile"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAdHocFileResponse(callApi(params, req, runtime));
}

CreateAdHocFileResponse Alibabacloud_Dataphin-public20230630::Client::createAdHocFile(shared_ptr<CreateAdHocFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAdHocFileWithOptions(request, runtime);
}

CreateBatchTaskResponse Alibabacloud_Dataphin-public20230630::Client::createBatchTaskWithOptions(shared_ptr<CreateBatchTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateBatchTaskShrinkRequest> request = make_shared<CreateBatchTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateBatchTaskRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBatchTask"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBatchTaskResponse(callApi(params, req, runtime));
}

CreateBatchTaskResponse Alibabacloud_Dataphin-public20230630::Client::createBatchTask(shared_ptr<CreateBatchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBatchTaskWithOptions(request, runtime);
}

CreateBizEntityResponse Alibabacloud_Dataphin-public20230630::Client::createBizEntityWithOptions(shared_ptr<CreateBizEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateBizEntityShrinkRequest> request = make_shared<CreateBizEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateBizEntityRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBizEntity"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBizEntityResponse(callApi(params, req, runtime));
}

CreateBizEntityResponse Alibabacloud_Dataphin-public20230630::Client::createBizEntity(shared_ptr<CreateBizEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBizEntityWithOptions(request, runtime);
}

CreateBizUnitResponse Alibabacloud_Dataphin-public20230630::Client::createBizUnitWithOptions(shared_ptr<CreateBizUnitRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateBizUnitShrinkRequest> request = make_shared<CreateBizUnitShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateBizUnitRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBizUnit"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBizUnitResponse(callApi(params, req, runtime));
}

CreateBizUnitResponse Alibabacloud_Dataphin-public20230630::Client::createBizUnit(shared_ptr<CreateBizUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBizUnitWithOptions(request, runtime);
}

CreateComputeSourceResponse Alibabacloud_Dataphin-public20230630::Client::createComputeSourceWithOptions(shared_ptr<CreateComputeSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateComputeSourceShrinkRequest> request = make_shared<CreateComputeSourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateComputeSourceRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateComputeSource"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateComputeSourceResponse(callApi(params, req, runtime));
}

CreateComputeSourceResponse Alibabacloud_Dataphin-public20230630::Client::createComputeSource(shared_ptr<CreateComputeSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createComputeSourceWithOptions(request, runtime);
}

CreateDataDomainResponse Alibabacloud_Dataphin-public20230630::Client::createDataDomainWithOptions(shared_ptr<CreateDataDomainRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataDomainShrinkRequest> request = make_shared<CreateDataDomainShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataDomainRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataDomain"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataDomainResponse(callApi(params, req, runtime));
}

CreateDataDomainResponse Alibabacloud_Dataphin-public20230630::Client::createDataDomain(shared_ptr<CreateDataDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataDomainWithOptions(request, runtime);
}

CreateDataServiceApiResponse Alibabacloud_Dataphin-public20230630::Client::createDataServiceApiWithOptions(shared_ptr<CreateDataServiceApiRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataServiceApiShrinkRequest> request = make_shared<CreateDataServiceApiShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataServiceApiRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataServiceApi"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataServiceApiResponse(callApi(params, req, runtime));
}

CreateDataServiceApiResponse Alibabacloud_Dataphin-public20230630::Client::createDataServiceApi(shared_ptr<CreateDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceApiWithOptions(request, runtime);
}

CreateDataSourceResponse Alibabacloud_Dataphin-public20230630::Client::createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataSourceShrinkRequest> request = make_shared<CreateDataSourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataSourceRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataSource"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataSourceResponse(callApi(params, req, runtime));
}

CreateDataSourceResponse Alibabacloud_Dataphin-public20230630::Client::createDataSource(shared_ptr<CreateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataSourceWithOptions(request, runtime);
}

CreateDirectoryResponse Alibabacloud_Dataphin-public20230630::Client::createDirectoryWithOptions(shared_ptr<CreateDirectoryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDirectoryShrinkRequest> request = make_shared<CreateDirectoryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDirectoryRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDirectory"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDirectoryResponse(callApi(params, req, runtime));
}

CreateDirectoryResponse Alibabacloud_Dataphin-public20230630::Client::createDirectory(shared_ptr<CreateDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDirectoryWithOptions(request, runtime);
}

CreateNodeSupplementResponse Alibabacloud_Dataphin-public20230630::Client::createNodeSupplementWithOptions(shared_ptr<CreateNodeSupplementRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateNodeSupplementShrinkRequest> request = make_shared<CreateNodeSupplementShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateNodeSupplementRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNodeSupplement"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNodeSupplementResponse(callApi(params, req, runtime));
}

CreateNodeSupplementResponse Alibabacloud_Dataphin-public20230630::Client::createNodeSupplement(shared_ptr<CreateNodeSupplementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNodeSupplementWithOptions(request, runtime);
}

CreatePipelineNodeResponse Alibabacloud_Dataphin-public20230630::Client::createPipelineNodeWithOptions(shared_ptr<CreatePipelineNodeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePipelineNodeShrinkRequest> request = make_shared<CreatePipelineNodeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreatePipelineNodeRequestCreatePipelineNodeCommand>(tmpReq->createPipelineNodeCommand)) {
    request->createPipelineNodeCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createPipelineNodeCommand, make_shared<string>("CreatePipelineNodeCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createPipelineNodeCommandShrink)) {
    body->insert(pair<string, string>("CreatePipelineNodeCommand", *request->createPipelineNodeCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePipelineNode"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePipelineNodeResponse(callApi(params, req, runtime));
}

CreatePipelineNodeResponse Alibabacloud_Dataphin-public20230630::Client::createPipelineNode(shared_ptr<CreatePipelineNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPipelineNodeWithOptions(request, runtime);
}

CreateResourceResponse Alibabacloud_Dataphin-public20230630::Client::createResourceWithOptions(shared_ptr<CreateResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateResourceShrinkRequest> request = make_shared<CreateResourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateResourceRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResource"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceResponse(callApi(params, req, runtime));
}

CreateResourceResponse Alibabacloud_Dataphin-public20230630::Client::createResource(shared_ptr<CreateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceWithOptions(request, runtime);
}

CreateRowPermissionResponse Alibabacloud_Dataphin-public20230630::Client::createRowPermissionWithOptions(shared_ptr<CreateRowPermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRowPermissionShrinkRequest> request = make_shared<CreateRowPermissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateRowPermissionRequestCreateRowPermissionCommand>(tmpReq->createRowPermissionCommand)) {
    request->createRowPermissionCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createRowPermissionCommand, make_shared<string>("CreateRowPermissionCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createRowPermissionCommandShrink)) {
    body->insert(pair<string, string>("CreateRowPermissionCommand", *request->createRowPermissionCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRowPermission"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRowPermissionResponse(callApi(params, req, runtime));
}

CreateRowPermissionResponse Alibabacloud_Dataphin-public20230630::Client::createRowPermission(shared_ptr<CreateRowPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRowPermissionWithOptions(request, runtime);
}

CreateStreamBatchJobMappingResponse Alibabacloud_Dataphin-public20230630::Client::createStreamBatchJobMappingWithOptions(shared_ptr<CreateStreamBatchJobMappingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateStreamBatchJobMappingShrinkRequest> request = make_shared<CreateStreamBatchJobMappingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand>(tmpReq->streamBatchJobMappingCreateCommand)) {
    request->streamBatchJobMappingCreateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamBatchJobMappingCreateCommand, make_shared<string>("StreamBatchJobMappingCreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->streamBatchJobMappingCreateCommandShrink)) {
    body->insert(pair<string, string>("StreamBatchJobMappingCreateCommand", *request->streamBatchJobMappingCreateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStreamBatchJobMapping"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStreamBatchJobMappingResponse(callApi(params, req, runtime));
}

CreateStreamBatchJobMappingResponse Alibabacloud_Dataphin-public20230630::Client::createStreamBatchJobMapping(shared_ptr<CreateStreamBatchJobMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStreamBatchJobMappingWithOptions(request, runtime);
}

CreateUdfResponse Alibabacloud_Dataphin-public20230630::Client::createUdfWithOptions(shared_ptr<CreateUdfRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateUdfShrinkRequest> request = make_shared<CreateUdfShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateUdfRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUdf"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUdfResponse(callApi(params, req, runtime));
}

CreateUdfResponse Alibabacloud_Dataphin-public20230630::Client::createUdf(shared_ptr<CreateUdfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUdfWithOptions(request, runtime);
}

CreateUserGroupResponse Alibabacloud_Dataphin-public20230630::Client::createUserGroupWithOptions(shared_ptr<CreateUserGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateUserGroupShrinkRequest> request = make_shared<CreateUserGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateUserGroupRequestCreateCommand>(tmpReq->createCommand)) {
    request->createCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createCommand, make_shared<string>("CreateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createCommandShrink)) {
    body->insert(pair<string, string>("CreateCommand", *request->createCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUserGroup"))},
    {"version", boost::any(string("2023-06-30"))},
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

CreateUserGroupResponse Alibabacloud_Dataphin-public20230630::Client::createUserGroup(shared_ptr<CreateUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserGroupWithOptions(request, runtime);
}

DeleteAdHocFileResponse Alibabacloud_Dataphin-public20230630::Client::deleteAdHocFileWithOptions(shared_ptr<DeleteAdHocFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAdHocFile"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAdHocFileResponse(callApi(params, req, runtime));
}

DeleteAdHocFileResponse Alibabacloud_Dataphin-public20230630::Client::deleteAdHocFile(shared_ptr<DeleteAdHocFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAdHocFileWithOptions(request, runtime);
}

DeleteBatchTaskResponse Alibabacloud_Dataphin-public20230630::Client::deleteBatchTaskWithOptions(shared_ptr<DeleteBatchTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteBatchTaskShrinkRequest> request = make_shared<DeleteBatchTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeleteBatchTaskRequestDeleteCommand>(tmpReq->deleteCommand)) {
    request->deleteCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deleteCommand, make_shared<string>("DeleteCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteCommandShrink)) {
    body->insert(pair<string, string>("DeleteCommand", *request->deleteCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBatchTask"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBatchTaskResponse(callApi(params, req, runtime));
}

DeleteBatchTaskResponse Alibabacloud_Dataphin-public20230630::Client::deleteBatchTask(shared_ptr<DeleteBatchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBatchTaskWithOptions(request, runtime);
}

DeleteBizEntityResponse Alibabacloud_Dataphin-public20230630::Client::deleteBizEntityWithOptions(shared_ptr<DeleteBizEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizUnitId)) {
    query->insert(pair<string, long>("BizUnitId", *request->bizUnitId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBizEntity"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBizEntityResponse(callApi(params, req, runtime));
}

DeleteBizEntityResponse Alibabacloud_Dataphin-public20230630::Client::deleteBizEntity(shared_ptr<DeleteBizEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBizEntityWithOptions(request, runtime);
}

DeleteBizUnitResponse Alibabacloud_Dataphin-public20230630::Client::deleteBizUnitWithOptions(shared_ptr<DeleteBizUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBizUnit"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBizUnitResponse(callApi(params, req, runtime));
}

DeleteBizUnitResponse Alibabacloud_Dataphin-public20230630::Client::deleteBizUnit(shared_ptr<DeleteBizUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBizUnitWithOptions(request, runtime);
}

DeleteComputeSourceResponse Alibabacloud_Dataphin-public20230630::Client::deleteComputeSourceWithOptions(shared_ptr<DeleteComputeSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteComputeSource"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteComputeSourceResponse(callApi(params, req, runtime));
}

DeleteComputeSourceResponse Alibabacloud_Dataphin-public20230630::Client::deleteComputeSource(shared_ptr<DeleteComputeSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteComputeSourceWithOptions(request, runtime);
}

DeleteDataDomainResponse Alibabacloud_Dataphin-public20230630::Client::deleteDataDomainWithOptions(shared_ptr<DeleteDataDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizUnitId)) {
    query->insert(pair<string, long>("BizUnitId", *request->bizUnitId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataDomain"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataDomainResponse(callApi(params, req, runtime));
}

DeleteDataDomainResponse Alibabacloud_Dataphin-public20230630::Client::deleteDataDomain(shared_ptr<DeleteDataDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataDomainWithOptions(request, runtime);
}

DeleteDataSourceResponse Alibabacloud_Dataphin-public20230630::Client::deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteDataSourceShrinkRequest> request = make_shared<DeleteDataSourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeleteDataSourceRequestDeleteCommand>(tmpReq->deleteCommand)) {
    request->deleteCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deleteCommand, make_shared<string>("DeleteCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteCommandShrink)) {
    body->insert(pair<string, string>("DeleteCommand", *request->deleteCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSource"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceResponse(callApi(params, req, runtime));
}

DeleteDataSourceResponse Alibabacloud_Dataphin-public20230630::Client::deleteDataSource(shared_ptr<DeleteDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceWithOptions(request, runtime);
}

DeleteDirectoryResponse Alibabacloud_Dataphin-public20230630::Client::deleteDirectoryWithOptions(shared_ptr<DeleteDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDirectory"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDirectoryResponse(callApi(params, req, runtime));
}

DeleteDirectoryResponse Alibabacloud_Dataphin-public20230630::Client::deleteDirectory(shared_ptr<DeleteDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDirectoryWithOptions(request, runtime);
}

DeleteResourceResponse Alibabacloud_Dataphin-public20230630::Client::deleteResourceWithOptions(shared_ptr<DeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResource"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceResponse(callApi(params, req, runtime));
}

DeleteResourceResponse Alibabacloud_Dataphin-public20230630::Client::deleteResource(shared_ptr<DeleteResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteResourceWithOptions(request, runtime);
}

DeleteRowPermissionResponse Alibabacloud_Dataphin-public20230630::Client::deleteRowPermissionWithOptions(shared_ptr<DeleteRowPermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteRowPermissionShrinkRequest> request = make_shared<DeleteRowPermissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeleteRowPermissionRequestDeleteRowPermissionCommand>(tmpReq->deleteRowPermissionCommand)) {
    request->deleteRowPermissionCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deleteRowPermissionCommand, make_shared<string>("DeleteRowPermissionCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteRowPermissionCommandShrink)) {
    body->insert(pair<string, string>("DeleteRowPermissionCommand", *request->deleteRowPermissionCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRowPermission"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRowPermissionResponse(callApi(params, req, runtime));
}

DeleteRowPermissionResponse Alibabacloud_Dataphin-public20230630::Client::deleteRowPermission(shared_ptr<DeleteRowPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRowPermissionWithOptions(request, runtime);
}

DeleteUdfResponse Alibabacloud_Dataphin-public20230630::Client::deleteUdfWithOptions(shared_ptr<DeleteUdfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUdf"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUdfResponse(callApi(params, req, runtime));
}

DeleteUdfResponse Alibabacloud_Dataphin-public20230630::Client::deleteUdf(shared_ptr<DeleteUdfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUdfWithOptions(request, runtime);
}

DeleteUserGroupResponse Alibabacloud_Dataphin-public20230630::Client::deleteUserGroupWithOptions(shared_ptr<DeleteUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserGroup"))},
    {"version", boost::any(string("2023-06-30"))},
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

DeleteUserGroupResponse Alibabacloud_Dataphin-public20230630::Client::deleteUserGroup(shared_ptr<DeleteUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserGroupWithOptions(request, runtime);
}

ExecuteAdHocTaskResponse Alibabacloud_Dataphin-public20230630::Client::executeAdHocTaskWithOptions(shared_ptr<ExecuteAdHocTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExecuteAdHocTaskShrinkRequest> request = make_shared<ExecuteAdHocTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ExecuteAdHocTaskRequestExecuteCommand>(tmpReq->executeCommand)) {
    request->executeCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executeCommand, make_shared<string>("ExecuteCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->executeCommandShrink)) {
    body->insert(pair<string, string>("ExecuteCommand", *request->executeCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAdHocTask"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAdHocTaskResponse(callApi(params, req, runtime));
}

ExecuteAdHocTaskResponse Alibabacloud_Dataphin-public20230630::Client::executeAdHocTask(shared_ptr<ExecuteAdHocTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeAdHocTaskWithOptions(request, runtime);
}

ExecuteManualNodeResponse Alibabacloud_Dataphin-public20230630::Client::executeManualNodeWithOptions(shared_ptr<ExecuteManualNodeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExecuteManualNodeShrinkRequest> request = make_shared<ExecuteManualNodeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ExecuteManualNodeRequestExecuteCommand>(tmpReq->executeCommand)) {
    request->executeCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executeCommand, make_shared<string>("ExecuteCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->executeCommandShrink)) {
    body->insert(pair<string, string>("ExecuteCommand", *request->executeCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteManualNode"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteManualNodeResponse(callApi(params, req, runtime));
}

ExecuteManualNodeResponse Alibabacloud_Dataphin-public20230630::Client::executeManualNode(shared_ptr<ExecuteManualNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeManualNodeWithOptions(request, runtime);
}

FixDataResponse Alibabacloud_Dataphin-public20230630::Client::fixDataWithOptions(shared_ptr<FixDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FixDataShrinkRequest> request = make_shared<FixDataShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FixDataRequestFixDataCommand>(tmpReq->fixDataCommand)) {
    request->fixDataCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fixDataCommand, make_shared<string>("FixDataCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fixDataCommandShrink)) {
    body->insert(pair<string, string>("FixDataCommand", *request->fixDataCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FixData"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FixDataResponse(callApi(params, req, runtime));
}

FixDataResponse Alibabacloud_Dataphin-public20230630::Client::fixData(shared_ptr<FixDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fixDataWithOptions(request, runtime);
}

GetAccountByRowPermissionIdResponse Alibabacloud_Dataphin-public20230630::Client::getAccountByRowPermissionIdWithOptions(shared_ptr<GetAccountByRowPermissionIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAccountByRowPermissionIdShrinkRequest> request = make_shared<GetAccountByRowPermissionIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery>(tmpReq->getAccountByRowPermissionIdQuery)) {
    request->getAccountByRowPermissionIdQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->getAccountByRowPermissionIdQuery, make_shared<string>("GetAccountByRowPermissionIdQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->getAccountByRowPermissionIdQueryShrink)) {
    body->insert(pair<string, string>("GetAccountByRowPermissionIdQuery", *request->getAccountByRowPermissionIdQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountByRowPermissionId"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccountByRowPermissionIdResponse(callApi(params, req, runtime));
}

GetAccountByRowPermissionIdResponse Alibabacloud_Dataphin-public20230630::Client::getAccountByRowPermissionId(shared_ptr<GetAccountByRowPermissionIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountByRowPermissionIdWithOptions(request, runtime);
}

GetAdHocFileResponse Alibabacloud_Dataphin-public20230630::Client::getAdHocFileWithOptions(shared_ptr<GetAdHocFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAdHocFile"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAdHocFileResponse(callApi(params, req, runtime));
}

GetAdHocFileResponse Alibabacloud_Dataphin-public20230630::Client::getAdHocFile(shared_ptr<GetAdHocFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAdHocFileWithOptions(request, runtime);
}

GetAdHocTaskLogResponse Alibabacloud_Dataphin-public20230630::Client::getAdHocTaskLogWithOptions(shared_ptr<GetAdHocTaskLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("Offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subTaskId)) {
    query->insert(pair<string, long>("SubTaskId", *request->subTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAdHocTaskLog"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAdHocTaskLogResponse(callApi(params, req, runtime));
}

GetAdHocTaskLogResponse Alibabacloud_Dataphin-public20230630::Client::getAdHocTaskLog(shared_ptr<GetAdHocTaskLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAdHocTaskLogWithOptions(request, runtime);
}

GetAdHocTaskResultResponse Alibabacloud_Dataphin-public20230630::Client::getAdHocTaskResultWithOptions(shared_ptr<GetAdHocTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subTaskId)) {
    query->insert(pair<string, long>("SubTaskId", *request->subTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAdHocTaskResult"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAdHocTaskResultResponse(callApi(params, req, runtime));
}

GetAdHocTaskResultResponse Alibabacloud_Dataphin-public20230630::Client::getAdHocTaskResult(shared_ptr<GetAdHocTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAdHocTaskResultWithOptions(request, runtime);
}

GetAlertEventResponse Alibabacloud_Dataphin-public20230630::Client::getAlertEventWithOptions(shared_ptr<GetAlertEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlertEvent"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlertEventResponse(callApi(params, req, runtime));
}

GetAlertEventResponse Alibabacloud_Dataphin-public20230630::Client::getAlertEvent(shared_ptr<GetAlertEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlertEventWithOptions(request, runtime);
}

GetBatchTaskInfoResponse Alibabacloud_Dataphin-public20230630::Client::getBatchTaskInfoWithOptions(shared_ptr<GetBatchTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeAllUpStreams)) {
    query->insert(pair<string, bool>("IncludeAllUpStreams", *request->includeAllUpStreams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBatchTaskInfo"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBatchTaskInfoResponse(callApi(params, req, runtime));
}

GetBatchTaskInfoResponse Alibabacloud_Dataphin-public20230630::Client::getBatchTaskInfo(shared_ptr<GetBatchTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBatchTaskInfoWithOptions(request, runtime);
}

GetBatchTaskInfoByVersionResponse Alibabacloud_Dataphin-public20230630::Client::getBatchTaskInfoByVersionWithOptions(shared_ptr<GetBatchTaskInfoByVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->versionId)) {
    query->insert(pair<string, long>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBatchTaskInfoByVersion"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBatchTaskInfoByVersionResponse(callApi(params, req, runtime));
}

GetBatchTaskInfoByVersionResponse Alibabacloud_Dataphin-public20230630::Client::getBatchTaskInfoByVersion(shared_ptr<GetBatchTaskInfoByVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBatchTaskInfoByVersionWithOptions(request, runtime);
}

GetBatchTaskUdfLineagesResponse Alibabacloud_Dataphin-public20230630::Client::getBatchTaskUdfLineagesWithOptions(shared_ptr<GetBatchTaskUdfLineagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBatchTaskUdfLineages"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBatchTaskUdfLineagesResponse(callApi(params, req, runtime));
}

GetBatchTaskUdfLineagesResponse Alibabacloud_Dataphin-public20230630::Client::getBatchTaskUdfLineages(shared_ptr<GetBatchTaskUdfLineagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBatchTaskUdfLineagesWithOptions(request, runtime);
}

GetBatchTaskVersionsResponse Alibabacloud_Dataphin-public20230630::Client::getBatchTaskVersionsWithOptions(shared_ptr<GetBatchTaskVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBatchTaskVersions"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBatchTaskVersionsResponse(callApi(params, req, runtime));
}

GetBatchTaskVersionsResponse Alibabacloud_Dataphin-public20230630::Client::getBatchTaskVersions(shared_ptr<GetBatchTaskVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBatchTaskVersionsWithOptions(request, runtime);
}

GetBizEntityInfoResponse Alibabacloud_Dataphin-public20230630::Client::getBizEntityInfoWithOptions(shared_ptr<GetBizEntityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBizEntityInfo"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBizEntityInfoResponse(callApi(params, req, runtime));
}

GetBizEntityInfoResponse Alibabacloud_Dataphin-public20230630::Client::getBizEntityInfo(shared_ptr<GetBizEntityInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBizEntityInfoWithOptions(request, runtime);
}

GetBizEntityInfoByVersionResponse Alibabacloud_Dataphin-public20230630::Client::getBizEntityInfoByVersionWithOptions(shared_ptr<GetBizEntityInfoByVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->versionId)) {
    query->insert(pair<string, long>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBizEntityInfoByVersion"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBizEntityInfoByVersionResponse(callApi(params, req, runtime));
}

GetBizEntityInfoByVersionResponse Alibabacloud_Dataphin-public20230630::Client::getBizEntityInfoByVersion(shared_ptr<GetBizEntityInfoByVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBizEntityInfoByVersionWithOptions(request, runtime);
}

GetBizUnitInfoResponse Alibabacloud_Dataphin-public20230630::Client::getBizUnitInfoWithOptions(shared_ptr<GetBizUnitInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBizUnitInfo"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBizUnitInfoResponse(callApi(params, req, runtime));
}

GetBizUnitInfoResponse Alibabacloud_Dataphin-public20230630::Client::getBizUnitInfo(shared_ptr<GetBizUnitInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBizUnitInfoWithOptions(request, runtime);
}

GetClusterQueueInfoByEnvResponse Alibabacloud_Dataphin-public20230630::Client::getClusterQueueInfoByEnvWithOptions(shared_ptr<GetClusterQueueInfoByEnvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamBatchMode)) {
    query->insert(pair<string, string>("StreamBatchMode", *request->streamBatchMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterQueueInfoByEnv"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterQueueInfoByEnvResponse(callApi(params, req, runtime));
}

GetClusterQueueInfoByEnvResponse Alibabacloud_Dataphin-public20230630::Client::getClusterQueueInfoByEnv(shared_ptr<GetClusterQueueInfoByEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClusterQueueInfoByEnvWithOptions(request, runtime);
}

GetComputeSourceResponse Alibabacloud_Dataphin-public20230630::Client::getComputeSourceWithOptions(shared_ptr<GetComputeSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetComputeSource"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetComputeSourceResponse(callApi(params, req, runtime));
}

GetComputeSourceResponse Alibabacloud_Dataphin-public20230630::Client::getComputeSource(shared_ptr<GetComputeSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getComputeSourceWithOptions(request, runtime);
}

GetDataDomainInfoResponse Alibabacloud_Dataphin-public20230630::Client::getDataDomainInfoWithOptions(shared_ptr<GetDataDomainInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataDomainInfo"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataDomainInfoResponse(callApi(params, req, runtime));
}

GetDataDomainInfoResponse Alibabacloud_Dataphin-public20230630::Client::getDataDomainInfo(shared_ptr<GetDataDomainInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataDomainInfoWithOptions(request, runtime);
}

GetDataServiceApiCallSummaryResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceApiCallSummaryWithOptions(shared_ptr<GetDataServiceApiCallSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceApiCallSummary"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceApiCallSummaryResponse(callApi(params, req, runtime));
}

GetDataServiceApiCallSummaryResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceApiCallSummary(shared_ptr<GetDataServiceApiCallSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApiCallSummaryWithOptions(request, runtime);
}

GetDataServiceApiCallTrendResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceApiCallTrendWithOptions(shared_ptr<GetDataServiceApiCallTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceApiCallTrend"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceApiCallTrendResponse(callApi(params, req, runtime));
}

GetDataServiceApiCallTrendResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceApiCallTrend(shared_ptr<GetDataServiceApiCallTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApiCallTrendWithOptions(request, runtime);
}

GetDataServiceApiDocumentResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceApiDocumentWithOptions(shared_ptr<GetDataServiceApiDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceApiDocument"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceApiDocumentResponse(callApi(params, req, runtime));
}

GetDataServiceApiDocumentResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceApiDocument(shared_ptr<GetDataServiceApiDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApiDocumentWithOptions(request, runtime);
}

GetDataServiceApiErrorImpactResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceApiErrorImpactWithOptions(shared_ptr<GetDataServiceApiErrorImpactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceApiErrorImpact"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceApiErrorImpactResponse(callApi(params, req, runtime));
}

GetDataServiceApiErrorImpactResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceApiErrorImpact(shared_ptr<GetDataServiceApiErrorImpactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApiErrorImpactWithOptions(request, runtime);
}

GetDataServiceApiGroupsResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceApiGroupsWithOptions(shared_ptr<GetDataServiceApiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceApiGroups"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceApiGroupsResponse(callApi(params, req, runtime));
}

GetDataServiceApiGroupsResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceApiGroups(shared_ptr<GetDataServiceApiGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApiGroupsWithOptions(request, runtime);
}

GetDataServiceAppAuthorizedUsersResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceAppAuthorizedUsersWithOptions(shared_ptr<GetDataServiceAppAuthorizedUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceAppAuthorizedUsers"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceAppAuthorizedUsersResponse(callApi(params, req, runtime));
}

GetDataServiceAppAuthorizedUsersResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceAppAuthorizedUsers(shared_ptr<GetDataServiceAppAuthorizedUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceAppAuthorizedUsersWithOptions(request, runtime);
}

GetDataServiceAppGroupsResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceAppGroupsWithOptions(shared_ptr<GetDataServiceAppGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceAppGroups"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceAppGroupsResponse(callApi(params, req, runtime));
}

GetDataServiceAppGroupsResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceAppGroups(shared_ptr<GetDataServiceAppGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceAppGroupsWithOptions(request, runtime);
}

GetDataServiceAppsByGroupIdResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceAppsByGroupIdWithOptions(shared_ptr<GetDataServiceAppsByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceAppsByGroupId"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceAppsByGroupIdResponse(callApi(params, req, runtime));
}

GetDataServiceAppsByGroupIdResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceAppsByGroupId(shared_ptr<GetDataServiceAppsByGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceAppsByGroupIdWithOptions(request, runtime);
}

GetDataServiceAuthorizedAppsByGroupIdResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceAuthorizedAppsByGroupIdWithOptions(shared_ptr<GetDataServiceAuthorizedAppsByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceAuthorizedAppsByGroupId"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceAuthorizedAppsByGroupIdResponse(callApi(params, req, runtime));
}

GetDataServiceAuthorizedAppsByGroupIdResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceAuthorizedAppsByGroupId(shared_ptr<GetDataServiceAuthorizedAppsByGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceAuthorizedAppsByGroupIdWithOptions(request, runtime);
}

GetDataServiceAuthorizedProjectsResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceAuthorizedProjectsWithOptions(shared_ptr<GetDataServiceAuthorizedProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceAuthorizedProjects"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceAuthorizedProjectsResponse(callApi(params, req, runtime));
}

GetDataServiceAuthorizedProjectsResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceAuthorizedProjects(shared_ptr<GetDataServiceAuthorizedProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceAuthorizedProjectsWithOptions(request, runtime);
}

GetDataServiceMyProjectsResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceMyProjectsWithOptions(shared_ptr<GetDataServiceMyProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceMyProjects"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceMyProjectsResponse(callApi(params, req, runtime));
}

GetDataServiceMyProjectsResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceMyProjects(shared_ptr<GetDataServiceMyProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceMyProjectsWithOptions(request, runtime);
}

GetDataServiceProjectAddableUsersResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceProjectAddableUsersWithOptions(shared_ptr<GetDataServiceProjectAddableUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceProjectAddableUsers"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceProjectAddableUsersResponse(callApi(params, req, runtime));
}

GetDataServiceProjectAddableUsersResponse Alibabacloud_Dataphin-public20230630::Client::getDataServiceProjectAddableUsers(shared_ptr<GetDataServiceProjectAddableUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceProjectAddableUsersWithOptions(request, runtime);
}

GetDataSourceDependenciesResponse Alibabacloud_Dataphin-public20230630::Client::getDataSourceDependenciesWithOptions(shared_ptr<GetDataSourceDependenciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSourceDependencies"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSourceDependenciesResponse(callApi(params, req, runtime));
}

GetDataSourceDependenciesResponse Alibabacloud_Dataphin-public20230630::Client::getDataSourceDependencies(shared_ptr<GetDataSourceDependenciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataSourceDependenciesWithOptions(request, runtime);
}

GetDevObjectDependencyResponse Alibabacloud_Dataphin-public20230630::Client::getDevObjectDependencyWithOptions(shared_ptr<GetDevObjectDependencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->objectFrom)) {
    query->insert(pair<string, string>("ObjectFrom", *request->objectFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    query->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    query->insert(pair<string, string>("ObjectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDevObjectDependency"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDevObjectDependencyResponse(callApi(params, req, runtime));
}

GetDevObjectDependencyResponse Alibabacloud_Dataphin-public20230630::Client::getDevObjectDependency(shared_ptr<GetDevObjectDependencyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDevObjectDependencyWithOptions(request, runtime);
}

GetDirectoryTreeResponse Alibabacloud_Dataphin-public20230630::Client::getDirectoryTreeWithOptions(shared_ptr<GetDirectoryTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDirectoryTree"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDirectoryTreeResponse(callApi(params, req, runtime));
}

GetDirectoryTreeResponse Alibabacloud_Dataphin-public20230630::Client::getDirectoryTree(shared_ptr<GetDirectoryTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDirectoryTreeWithOptions(request, runtime);
}

GetFileStorageCredentialResponse Alibabacloud_Dataphin-public20230630::Client::getFileStorageCredentialWithOptions(shared_ptr<GetFileStorageCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purpose)) {
    query->insert(pair<string, string>("Purpose", *request->purpose));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useVpcEndpoint)) {
    query->insert(pair<string, bool>("UseVpcEndpoint", *request->useVpcEndpoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileStorageCredential"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileStorageCredentialResponse(callApi(params, req, runtime));
}

GetFileStorageCredentialResponse Alibabacloud_Dataphin-public20230630::Client::getFileStorageCredential(shared_ptr<GetFileStorageCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileStorageCredentialWithOptions(request, runtime);
}

GetInstanceDownStreamResponse Alibabacloud_Dataphin-public20230630::Client::getInstanceDownStreamWithOptions(shared_ptr<GetInstanceDownStreamRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetInstanceDownStreamShrinkRequest> request = make_shared<GetInstanceDownStreamShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetInstanceDownStreamRequestInstanceGet>(tmpReq->instanceGet)) {
    request->instanceGetShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceGet, make_shared<string>("InstanceGet"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->downStreamDepth)) {
    query->insert(pair<string, long>("DownStreamDepth", *request->downStreamDepth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runStatus)) {
    query->insert(pair<string, string>("RunStatus", *request->runStatus));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceGetShrink)) {
    body->insert(pair<string, string>("InstanceGet", *request->instanceGetShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceDownStream"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceDownStreamResponse(callApi(params, req, runtime));
}

GetInstanceDownStreamResponse Alibabacloud_Dataphin-public20230630::Client::getInstanceDownStream(shared_ptr<GetInstanceDownStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceDownStreamWithOptions(request, runtime);
}

GetInstanceUpDownStreamResponse Alibabacloud_Dataphin-public20230630::Client::getInstanceUpDownStreamWithOptions(shared_ptr<GetInstanceUpDownStreamRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetInstanceUpDownStreamShrinkRequest> request = make_shared<GetInstanceUpDownStreamShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetInstanceUpDownStreamRequestInstanceId>(tmpReq->instanceId)) {
    request->instanceIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceId, make_shared<string>("InstanceId"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->downStreamDepth)) {
    query->insert(pair<string, long>("DownStreamDepth", *request->downStreamDepth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->upStreamDepth)) {
    query->insert(pair<string, long>("UpStreamDepth", *request->upStreamDepth));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdShrink)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceIdShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceUpDownStream"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceUpDownStreamResponse(callApi(params, req, runtime));
}

GetInstanceUpDownStreamResponse Alibabacloud_Dataphin-public20230630::Client::getInstanceUpDownStream(shared_ptr<GetInstanceUpDownStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceUpDownStreamWithOptions(request, runtime);
}

GetLatestSubmitDetailResponse Alibabacloud_Dataphin-public20230630::Client::getLatestSubmitDetailWithOptions(shared_ptr<GetLatestSubmitDetailRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetLatestSubmitDetailShrinkRequest> request = make_shared<GetLatestSubmitDetailShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetLatestSubmitDetailRequestSubmitDetailQuery>(tmpReq->submitDetailQuery)) {
    request->submitDetailQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->submitDetailQuery, make_shared<string>("SubmitDetailQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->submitDetailQueryShrink)) {
    body->insert(pair<string, string>("SubmitDetailQuery", *request->submitDetailQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLatestSubmitDetail"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLatestSubmitDetailResponse(callApi(params, req, runtime));
}

GetLatestSubmitDetailResponse Alibabacloud_Dataphin-public20230630::Client::getLatestSubmitDetail(shared_ptr<GetLatestSubmitDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLatestSubmitDetailWithOptions(request, runtime);
}

GetMyRolesResponse Alibabacloud_Dataphin-public20230630::Client::getMyRolesWithOptions(shared_ptr<GetMyRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMyRoles"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMyRolesResponse(callApi(params, req, runtime));
}

GetMyRolesResponse Alibabacloud_Dataphin-public20230630::Client::getMyRoles(shared_ptr<GetMyRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMyRolesWithOptions(request, runtime);
}

GetMyTenantsResponse Alibabacloud_Dataphin-public20230630::Client::getMyTenantsWithOptions(shared_ptr<GetMyTenantsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetMyTenantsShrinkRequest> request = make_shared<GetMyTenantsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->featureCodeList)) {
    request->featureCodeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->featureCodeList, make_shared<string>("FeatureCodeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->featureCodeListShrink)) {
    body->insert(pair<string, string>("FeatureCodeList", *request->featureCodeListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMyTenants"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMyTenantsResponse(callApi(params, req, runtime));
}

GetMyTenantsResponse Alibabacloud_Dataphin-public20230630::Client::getMyTenants(shared_ptr<GetMyTenantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMyTenantsWithOptions(request, runtime);
}

GetNodeUpDownStreamResponse Alibabacloud_Dataphin-public20230630::Client::getNodeUpDownStreamWithOptions(shared_ptr<GetNodeUpDownStreamRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetNodeUpDownStreamShrinkRequest> request = make_shared<GetNodeUpDownStreamShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetNodeUpDownStreamRequestNodeId>(tmpReq->nodeId)) {
    request->nodeIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nodeId, make_shared<string>("NodeId"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->downStreamDepth)) {
    query->insert(pair<string, long>("DownStreamDepth", *request->downStreamDepth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->upStreamDepth)) {
    query->insert(pair<string, long>("UpStreamDepth", *request->upStreamDepth));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIdShrink)) {
    body->insert(pair<string, string>("NodeId", *request->nodeIdShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeUpDownStream"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeUpDownStreamResponse(callApi(params, req, runtime));
}

GetNodeUpDownStreamResponse Alibabacloud_Dataphin-public20230630::Client::getNodeUpDownStream(shared_ptr<GetNodeUpDownStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeUpDownStreamWithOptions(request, runtime);
}

GetOperationSubmitStatusResponse Alibabacloud_Dataphin-public20230630::Client::getOperationSubmitStatusWithOptions(shared_ptr<GetOperationSubmitStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOperationSubmitStatus"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOperationSubmitStatusResponse(callApi(params, req, runtime));
}

GetOperationSubmitStatusResponse Alibabacloud_Dataphin-public20230630::Client::getOperationSubmitStatus(shared_ptr<GetOperationSubmitStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOperationSubmitStatusWithOptions(request, runtime);
}

GetPhysicalInstanceResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalInstanceWithOptions(shared_ptr<GetPhysicalInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhysicalInstance"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhysicalInstanceResponse(callApi(params, req, runtime));
}

GetPhysicalInstanceResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalInstance(shared_ptr<GetPhysicalInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhysicalInstanceWithOptions(request, runtime);
}

GetPhysicalInstanceLogResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalInstanceLogWithOptions(shared_ptr<GetPhysicalInstanceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhysicalInstanceLog"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhysicalInstanceLogResponse(callApi(params, req, runtime));
}

GetPhysicalInstanceLogResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalInstanceLog(shared_ptr<GetPhysicalInstanceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhysicalInstanceLogWithOptions(request, runtime);
}

GetPhysicalNodeResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalNodeWithOptions(shared_ptr<GetPhysicalNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhysicalNode"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhysicalNodeResponse(callApi(params, req, runtime));
}

GetPhysicalNodeResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalNode(shared_ptr<GetPhysicalNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhysicalNodeWithOptions(request, runtime);
}

GetPhysicalNodeByOutputNameResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalNodeByOutputNameWithOptions(shared_ptr<GetPhysicalNodeByOutputNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputName)) {
    query->insert(pair<string, string>("OutputName", *request->outputName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhysicalNodeByOutputName"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhysicalNodeByOutputNameResponse(callApi(params, req, runtime));
}

GetPhysicalNodeByOutputNameResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalNodeByOutputName(shared_ptr<GetPhysicalNodeByOutputNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhysicalNodeByOutputNameWithOptions(request, runtime);
}

GetPhysicalNodeContentResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalNodeContentWithOptions(shared_ptr<GetPhysicalNodeContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhysicalNodeContent"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhysicalNodeContentResponse(callApi(params, req, runtime));
}

GetPhysicalNodeContentResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalNodeContent(shared_ptr<GetPhysicalNodeContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhysicalNodeContentWithOptions(request, runtime);
}

GetPhysicalNodeOperationLogResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalNodeOperationLogWithOptions(shared_ptr<GetPhysicalNodeOperationLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhysicalNodeOperationLog"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhysicalNodeOperationLogResponse(callApi(params, req, runtime));
}

GetPhysicalNodeOperationLogResponse Alibabacloud_Dataphin-public20230630::Client::getPhysicalNodeOperationLog(shared_ptr<GetPhysicalNodeOperationLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhysicalNodeOperationLogWithOptions(request, runtime);
}

GetProjectResponse Alibabacloud_Dataphin-public20230630::Client::getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProject"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResponse(callApi(params, req, runtime));
}

GetProjectResponse Alibabacloud_Dataphin-public20230630::Client::getProject(shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectWithOptions(request, runtime);
}

GetProjectByNameResponse Alibabacloud_Dataphin-public20230630::Client::getProjectByNameWithOptions(shared_ptr<GetProjectByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectByName"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectByNameResponse(callApi(params, req, runtime));
}

GetProjectByNameResponse Alibabacloud_Dataphin-public20230630::Client::getProjectByName(shared_ptr<GetProjectByNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectByNameWithOptions(request, runtime);
}

GetProjectProduceUserResponse Alibabacloud_Dataphin-public20230630::Client::getProjectProduceUserWithOptions(shared_ptr<GetProjectProduceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectProduceUser"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectProduceUserResponse(callApi(params, req, runtime));
}

GetProjectProduceUserResponse Alibabacloud_Dataphin-public20230630::Client::getProjectProduceUser(shared_ptr<GetProjectProduceUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectProduceUserWithOptions(request, runtime);
}

GetProjectWhiteListsResponse Alibabacloud_Dataphin-public20230630::Client::getProjectWhiteListsWithOptions(shared_ptr<GetProjectWhiteListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectWhiteLists"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectWhiteListsResponse(callApi(params, req, runtime));
}

GetProjectWhiteListsResponse Alibabacloud_Dataphin-public20230630::Client::getProjectWhiteLists(shared_ptr<GetProjectWhiteListsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectWhiteListsWithOptions(request, runtime);
}

GetQueueEngineVersionByEnvResponse Alibabacloud_Dataphin-public20230630::Client::getQueueEngineVersionByEnvWithOptions(shared_ptr<GetQueueEngineVersionByEnvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamBatchMode)) {
    query->insert(pair<string, string>("StreamBatchMode", *request->streamBatchMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueueEngineVersionByEnv"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueueEngineVersionByEnvResponse(callApi(params, req, runtime));
}

GetQueueEngineVersionByEnvResponse Alibabacloud_Dataphin-public20230630::Client::getQueueEngineVersionByEnv(shared_ptr<GetQueueEngineVersionByEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueueEngineVersionByEnvWithOptions(request, runtime);
}

GetResourceResponse Alibabacloud_Dataphin-public20230630::Client::getResourceWithOptions(shared_ptr<GetResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResource"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceResponse(callApi(params, req, runtime));
}

GetResourceResponse Alibabacloud_Dataphin-public20230630::Client::getResource(shared_ptr<GetResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceWithOptions(request, runtime);
}

GetResourceByVersionResponse Alibabacloud_Dataphin-public20230630::Client::getResourceByVersionWithOptions(shared_ptr<GetResourceByVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->versionId)) {
    query->insert(pair<string, long>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceByVersion"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceByVersionResponse(callApi(params, req, runtime));
}

GetResourceByVersionResponse Alibabacloud_Dataphin-public20230630::Client::getResourceByVersion(shared_ptr<GetResourceByVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceByVersionWithOptions(request, runtime);
}

GetSparkLocalClientInfoResponse Alibabacloud_Dataphin-public20230630::Client::getSparkLocalClientInfoWithOptions(shared_ptr<GetSparkLocalClientInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envEnum)) {
    query->insert(pair<string, string>("EnvEnum", *request->envEnum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkLocalClientInfo"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkLocalClientInfoResponse(callApi(params, req, runtime));
}

GetSparkLocalClientInfoResponse Alibabacloud_Dataphin-public20230630::Client::getSparkLocalClientInfo(shared_ptr<GetSparkLocalClientInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkLocalClientInfoWithOptions(request, runtime);
}

GetStreamJobsResponse Alibabacloud_Dataphin-public20230630::Client::getStreamJobsWithOptions(shared_ptr<GetStreamJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStreamJobs"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStreamJobsResponse(callApi(params, req, runtime));
}

GetStreamJobsResponse Alibabacloud_Dataphin-public20230630::Client::getStreamJobs(shared_ptr<GetStreamJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStreamJobsWithOptions(request, runtime);
}

GetSupplementDagrunResponse Alibabacloud_Dataphin-public20230630::Client::getSupplementDagrunWithOptions(shared_ptr<GetSupplementDagrunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplementId)) {
    query->insert(pair<string, string>("SupplementId", *request->supplementId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSupplementDagrun"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSupplementDagrunResponse(callApi(params, req, runtime));
}

GetSupplementDagrunResponse Alibabacloud_Dataphin-public20230630::Client::getSupplementDagrun(shared_ptr<GetSupplementDagrunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSupplementDagrunWithOptions(request, runtime);
}

GetSupplementDagrunInstanceResponse Alibabacloud_Dataphin-public20230630::Client::getSupplementDagrunInstanceWithOptions(shared_ptr<GetSupplementDagrunInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dagrunId)) {
    query->insert(pair<string, string>("DagrunId", *request->dagrunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSupplementDagrunInstance"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSupplementDagrunInstanceResponse(callApi(params, req, runtime));
}

GetSupplementDagrunInstanceResponse Alibabacloud_Dataphin-public20230630::Client::getSupplementDagrunInstance(shared_ptr<GetSupplementDagrunInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSupplementDagrunInstanceWithOptions(request, runtime);
}

GetTableColumnLineageByTaskIdResponse Alibabacloud_Dataphin-public20230630::Client::getTableColumnLineageByTaskIdWithOptions(shared_ptr<GetTableColumnLineageByTaskIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetTableColumnLineageByTaskIdShrinkRequest> request = make_shared<GetTableColumnLineageByTaskIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery>(tmpReq->tableColumnLineageByTaskIdQuery)) {
    request->tableColumnLineageByTaskIdQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tableColumnLineageByTaskIdQuery, make_shared<string>("TableColumnLineageByTaskIdQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableColumnLineageByTaskIdQueryShrink)) {
    body->insert(pair<string, string>("TableColumnLineageByTaskIdQuery", *request->tableColumnLineageByTaskIdQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableColumnLineageByTaskId"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableColumnLineageByTaskIdResponse(callApi(params, req, runtime));
}

GetTableColumnLineageByTaskIdResponse Alibabacloud_Dataphin-public20230630::Client::getTableColumnLineageByTaskId(shared_ptr<GetTableColumnLineageByTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableColumnLineageByTaskIdWithOptions(request, runtime);
}

GetTableLineageByTaskIdResponse Alibabacloud_Dataphin-public20230630::Client::getTableLineageByTaskIdWithOptions(shared_ptr<GetTableLineageByTaskIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetTableLineageByTaskIdShrinkRequest> request = make_shared<GetTableLineageByTaskIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetTableLineageByTaskIdRequestTableLineageByTaskIdQuery>(tmpReq->tableLineageByTaskIdQuery)) {
    request->tableLineageByTaskIdQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tableLineageByTaskIdQuery, make_shared<string>("TableLineageByTaskIdQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableLineageByTaskIdQueryShrink)) {
    body->insert(pair<string, string>("TableLineageByTaskIdQuery", *request->tableLineageByTaskIdQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableLineageByTaskId"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableLineageByTaskIdResponse(callApi(params, req, runtime));
}

GetTableLineageByTaskIdResponse Alibabacloud_Dataphin-public20230630::Client::getTableLineageByTaskId(shared_ptr<GetTableLineageByTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableLineageByTaskIdWithOptions(request, runtime);
}

GetUdfResponse Alibabacloud_Dataphin-public20230630::Client::getUdfWithOptions(shared_ptr<GetUdfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUdf"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUdfResponse(callApi(params, req, runtime));
}

GetUdfResponse Alibabacloud_Dataphin-public20230630::Client::getUdf(shared_ptr<GetUdfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUdfWithOptions(request, runtime);
}

GetUdfByVersionResponse Alibabacloud_Dataphin-public20230630::Client::getUdfByVersionWithOptions(shared_ptr<GetUdfByVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->versionId)) {
    query->insert(pair<string, long>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUdfByVersion"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUdfByVersionResponse(callApi(params, req, runtime));
}

GetUdfByVersionResponse Alibabacloud_Dataphin-public20230630::Client::getUdfByVersion(shared_ptr<GetUdfByVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUdfByVersionWithOptions(request, runtime);
}

GetUserBySourceIdResponse Alibabacloud_Dataphin-public20230630::Client::getUserBySourceIdWithOptions(shared_ptr<GetUserBySourceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    query->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserBySourceId"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserBySourceIdResponse(callApi(params, req, runtime));
}

GetUserBySourceIdResponse Alibabacloud_Dataphin-public20230630::Client::getUserBySourceId(shared_ptr<GetUserBySourceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserBySourceIdWithOptions(request, runtime);
}

GetUserGroupResponse Alibabacloud_Dataphin-public20230630::Client::getUserGroupWithOptions(shared_ptr<GetUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserGroup"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserGroupResponse(callApi(params, req, runtime));
}

GetUserGroupResponse Alibabacloud_Dataphin-public20230630::Client::getUserGroup(shared_ptr<GetUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserGroupWithOptions(request, runtime);
}

GetUsersResponse Alibabacloud_Dataphin-public20230630::Client::getUsersWithOptions(shared_ptr<GetUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetUsersShrinkRequest> request = make_shared<GetUsersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->userIdList)) {
    request->userIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userIdList, make_shared<string>("UserIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdListShrink)) {
    body->insert(pair<string, string>("UserIdList", *request->userIdListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUsers"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUsersResponse(callApi(params, req, runtime));
}

GetUsersResponse Alibabacloud_Dataphin-public20230630::Client::getUsers(shared_ptr<GetUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUsersWithOptions(request, runtime);
}

GrantDataServiceApiResponse Alibabacloud_Dataphin-public20230630::Client::grantDataServiceApiWithOptions(shared_ptr<GrantDataServiceApiRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GrantDataServiceApiShrinkRequest> request = make_shared<GrantDataServiceApiShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GrantDataServiceApiRequestGrantCommand>(tmpReq->grantCommand)) {
    request->grantCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->grantCommand, make_shared<string>("GrantCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->grantCommandShrink)) {
    body->insert(pair<string, string>("GrantCommand", *request->grantCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantDataServiceApi"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantDataServiceApiResponse(callApi(params, req, runtime));
}

GrantDataServiceApiResponse Alibabacloud_Dataphin-public20230630::Client::grantDataServiceApi(shared_ptr<GrantDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantDataServiceApiWithOptions(request, runtime);
}

GrantResourcePermissionResponse Alibabacloud_Dataphin-public20230630::Client::grantResourcePermissionWithOptions(shared_ptr<GrantResourcePermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GrantResourcePermissionShrinkRequest> request = make_shared<GrantResourcePermissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GrantResourcePermissionRequestGrantCommand>(tmpReq->grantCommand)) {
    request->grantCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->grantCommand, make_shared<string>("GrantCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->grantCommandShrink)) {
    body->insert(pair<string, string>("GrantCommand", *request->grantCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantResourcePermission"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantResourcePermissionResponse(callApi(params, req, runtime));
}

GrantResourcePermissionResponse Alibabacloud_Dataphin-public20230630::Client::grantResourcePermission(shared_ptr<GrantResourcePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantResourcePermissionWithOptions(request, runtime);
}

ListAddableRolesResponse Alibabacloud_Dataphin-public20230630::Client::listAddableRolesWithOptions(shared_ptr<ListAddableRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAddableRoles"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAddableRolesResponse(callApi(params, req, runtime));
}

ListAddableRolesResponse Alibabacloud_Dataphin-public20230630::Client::listAddableRoles(shared_ptr<ListAddableRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAddableRolesWithOptions(request, runtime);
}

ListAddableUsersResponse Alibabacloud_Dataphin-public20230630::Client::listAddableUsersWithOptions(shared_ptr<ListAddableUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAddableUsersShrinkRequest> request = make_shared<ListAddableUsersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListAddableUsersRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAddableUsers"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAddableUsersResponse(callApi(params, req, runtime));
}

ListAddableUsersResponse Alibabacloud_Dataphin-public20230630::Client::listAddableUsers(shared_ptr<ListAddableUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAddableUsersWithOptions(request, runtime);
}

ListAlertEventsResponse Alibabacloud_Dataphin-public20230630::Client::listAlertEventsWithOptions(shared_ptr<ListAlertEventsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAlertEventsShrinkRequest> request = make_shared<ListAlertEventsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListAlertEventsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlertEvents"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlertEventsResponse(callApi(params, req, runtime));
}

ListAlertEventsResponse Alibabacloud_Dataphin-public20230630::Client::listAlertEvents(shared_ptr<ListAlertEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlertEventsWithOptions(request, runtime);
}

ListAlertNotificationsResponse Alibabacloud_Dataphin-public20230630::Client::listAlertNotificationsWithOptions(shared_ptr<ListAlertNotificationsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAlertNotificationsShrinkRequest> request = make_shared<ListAlertNotificationsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListAlertNotificationsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlertNotifications"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlertNotificationsResponse(callApi(params, req, runtime));
}

ListAlertNotificationsResponse Alibabacloud_Dataphin-public20230630::Client::listAlertNotifications(shared_ptr<ListAlertNotificationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlertNotificationsWithOptions(request, runtime);
}

ListApiByAppResponse Alibabacloud_Dataphin-public20230630::Client::listApiByAppWithOptions(shared_ptr<ListApiByAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListApiByAppShrinkRequest> request = make_shared<ListApiByAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListApiByAppRequestPageQuery>(tmpReq->pageQuery)) {
    request->pageQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pageQuery, make_shared<string>("PageQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pageQueryShrink)) {
    body->insert(pair<string, string>("PageQuery", *request->pageQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApiByApp"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApiByAppResponse(callApi(params, req, runtime));
}

ListApiByAppResponse Alibabacloud_Dataphin-public20230630::Client::listApiByApp(shared_ptr<ListApiByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApiByAppWithOptions(request, runtime);
}

ListAuthorizedDataServiceApiDetailsResponse Alibabacloud_Dataphin-public20230630::Client::listAuthorizedDataServiceApiDetailsWithOptions(shared_ptr<ListAuthorizedDataServiceApiDetailsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAuthorizedDataServiceApiDetailsShrinkRequest> request = make_shared<ListAuthorizedDataServiceApiDetailsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListAuthorizedDataServiceApiDetailsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuthorizedDataServiceApiDetails"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthorizedDataServiceApiDetailsResponse(callApi(params, req, runtime));
}

ListAuthorizedDataServiceApiDetailsResponse Alibabacloud_Dataphin-public20230630::Client::listAuthorizedDataServiceApiDetails(shared_ptr<ListAuthorizedDataServiceApiDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthorizedDataServiceApiDetailsWithOptions(request, runtime);
}

ListBizEntitiesResponse Alibabacloud_Dataphin-public20230630::Client::listBizEntitiesWithOptions(shared_ptr<ListBizEntitiesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListBizEntitiesShrinkRequest> request = make_shared<ListBizEntitiesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListBizEntitiesRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBizEntities"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBizEntitiesResponse(callApi(params, req, runtime));
}

ListBizEntitiesResponse Alibabacloud_Dataphin-public20230630::Client::listBizEntities(shared_ptr<ListBizEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBizEntitiesWithOptions(request, runtime);
}

ListBizUnitsResponse Alibabacloud_Dataphin-public20230630::Client::listBizUnitsWithOptions(shared_ptr<ListBizUnitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBizUnits"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBizUnitsResponse(callApi(params, req, runtime));
}

ListBizUnitsResponse Alibabacloud_Dataphin-public20230630::Client::listBizUnits(shared_ptr<ListBizUnitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBizUnitsWithOptions(request, runtime);
}

ListComputeSourcesResponse Alibabacloud_Dataphin-public20230630::Client::listComputeSourcesWithOptions(shared_ptr<ListComputeSourcesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListComputeSourcesShrinkRequest> request = make_shared<ListComputeSourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListComputeSourcesRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListComputeSources"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListComputeSourcesResponse(callApi(params, req, runtime));
}

ListComputeSourcesResponse Alibabacloud_Dataphin-public20230630::Client::listComputeSources(shared_ptr<ListComputeSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listComputeSourcesWithOptions(request, runtime);
}

ListDataDomainsResponse Alibabacloud_Dataphin-public20230630::Client::listDataDomainsWithOptions(shared_ptr<ListDataDomainsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataDomainsShrinkRequest> request = make_shared<ListDataDomainsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDataDomainsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataDomains"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataDomainsResponse(callApi(params, req, runtime));
}

ListDataDomainsResponse Alibabacloud_Dataphin-public20230630::Client::listDataDomains(shared_ptr<ListDataDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataDomainsWithOptions(request, runtime);
}

ListDataServiceApiCallStatisticsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceApiCallStatisticsWithOptions(shared_ptr<ListDataServiceApiCallStatisticsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataServiceApiCallStatisticsShrinkRequest> request = make_shared<ListDataServiceApiCallStatisticsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDataServiceApiCallStatisticsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceApiCallStatistics"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceApiCallStatisticsResponse(callApi(params, req, runtime));
}

ListDataServiceApiCallStatisticsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceApiCallStatistics(shared_ptr<ListDataServiceApiCallStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApiCallStatisticsWithOptions(request, runtime);
}

ListDataServiceApiCallsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceApiCallsWithOptions(shared_ptr<ListDataServiceApiCallsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataServiceApiCallsShrinkRequest> request = make_shared<ListDataServiceApiCallsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDataServiceApiCallsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceApiCalls"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceApiCallsResponse(callApi(params, req, runtime));
}

ListDataServiceApiCallsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceApiCalls(shared_ptr<ListDataServiceApiCallsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApiCallsWithOptions(request, runtime);
}

ListDataServiceApiImpactsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceApiImpactsWithOptions(shared_ptr<ListDataServiceApiImpactsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataServiceApiImpactsShrinkRequest> request = make_shared<ListDataServiceApiImpactsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDataServiceApiImpactsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceApiImpacts"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceApiImpactsResponse(callApi(params, req, runtime));
}

ListDataServiceApiImpactsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceApiImpacts(shared_ptr<ListDataServiceApiImpactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApiImpactsWithOptions(request, runtime);
}

ListDataServiceAuthorizedAppsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceAuthorizedAppsWithOptions(shared_ptr<ListDataServiceAuthorizedAppsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataServiceAuthorizedAppsShrinkRequest> request = make_shared<ListDataServiceAuthorizedAppsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDataServiceAuthorizedAppsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceAuthorizedApps"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceAuthorizedAppsResponse(callApi(params, req, runtime));
}

ListDataServiceAuthorizedAppsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceAuthorizedApps(shared_ptr<ListDataServiceAuthorizedAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceAuthorizedAppsWithOptions(request, runtime);
}

ListDataServiceMyApiPermissionsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceMyApiPermissionsWithOptions(shared_ptr<ListDataServiceMyApiPermissionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataServiceMyApiPermissionsShrinkRequest> request = make_shared<ListDataServiceMyApiPermissionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDataServiceMyApiPermissionsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceMyApiPermissions"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceMyApiPermissionsResponse(callApi(params, req, runtime));
}

ListDataServiceMyApiPermissionsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceMyApiPermissions(shared_ptr<ListDataServiceMyApiPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceMyApiPermissionsWithOptions(request, runtime);
}

ListDataServiceMyAppPermissionsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceMyAppPermissionsWithOptions(shared_ptr<ListDataServiceMyAppPermissionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataServiceMyAppPermissionsShrinkRequest> request = make_shared<ListDataServiceMyAppPermissionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDataServiceMyAppPermissionsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceMyAppPermissions"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceMyAppPermissionsResponse(callApi(params, req, runtime));
}

ListDataServiceMyAppPermissionsResponse Alibabacloud_Dataphin-public20230630::Client::listDataServiceMyAppPermissions(shared_ptr<ListDataServiceMyAppPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceMyAppPermissionsWithOptions(request, runtime);
}

ListDataServicePublishedApisResponse Alibabacloud_Dataphin-public20230630::Client::listDataServicePublishedApisWithOptions(shared_ptr<ListDataServicePublishedApisRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataServicePublishedApisShrinkRequest> request = make_shared<ListDataServicePublishedApisShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDataServicePublishedApisRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServicePublishedApis"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServicePublishedApisResponse(callApi(params, req, runtime));
}

ListDataServicePublishedApisResponse Alibabacloud_Dataphin-public20230630::Client::listDataServicePublishedApis(shared_ptr<ListDataServicePublishedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServicePublishedApisWithOptions(request, runtime);
}

ListDataSourceWithConfigResponse Alibabacloud_Dataphin-public20230630::Client::listDataSourceWithConfigWithOptions(shared_ptr<ListDataSourceWithConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataSourceWithConfigShrinkRequest> request = make_shared<ListDataSourceWithConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDataSourceWithConfigRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSourceWithConfig"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceWithConfigResponse(callApi(params, req, runtime));
}

ListDataSourceWithConfigResponse Alibabacloud_Dataphin-public20230630::Client::listDataSourceWithConfig(shared_ptr<ListDataSourceWithConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourceWithConfigWithOptions(request, runtime);
}

ListFilesResponse Alibabacloud_Dataphin-public20230630::Client::listFilesWithOptions(shared_ptr<ListFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListFilesShrinkRequest> request = make_shared<ListFilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListFilesRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFiles"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFilesResponse(callApi(params, req, runtime));
}

ListFilesResponse Alibabacloud_Dataphin-public20230630::Client::listFiles(shared_ptr<ListFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFilesWithOptions(request, runtime);
}

ListInstancesResponse Alibabacloud_Dataphin-public20230630::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListInstancesShrinkRequest> request = make_shared<ListInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListInstancesRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_Dataphin-public20230630::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesWithOptions(request, runtime);
}

ListNodeDownStreamResponse Alibabacloud_Dataphin-public20230630::Client::listNodeDownStreamWithOptions(shared_ptr<ListNodeDownStreamRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListNodeDownStreamShrinkRequest> request = make_shared<ListNodeDownStreamShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListNodeDownStreamRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodeDownStream"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodeDownStreamResponse(callApi(params, req, runtime));
}

ListNodeDownStreamResponse Alibabacloud_Dataphin-public20230630::Client::listNodeDownStream(shared_ptr<ListNodeDownStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeDownStreamWithOptions(request, runtime);
}

ListNodesResponse Alibabacloud_Dataphin-public20230630::Client::listNodesWithOptions(shared_ptr<ListNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListNodesShrinkRequest> request = make_shared<ListNodesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListNodesRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodes"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodesResponse(callApi(params, req, runtime));
}

ListNodesResponse Alibabacloud_Dataphin-public20230630::Client::listNodes(shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesWithOptions(request, runtime);
}

ListProjectMembersResponse Alibabacloud_Dataphin-public20230630::Client::listProjectMembersWithOptions(shared_ptr<ListProjectMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProjectMembersShrinkRequest> request = make_shared<ListProjectMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListProjectMembersRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectMembers"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectMembersResponse(callApi(params, req, runtime));
}

ListProjectMembersResponse Alibabacloud_Dataphin-public20230630::Client::listProjectMembers(shared_ptr<ListProjectMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectMembersWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_Dataphin-public20230630::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProjectsShrinkRequest> request = make_shared<ListProjectsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListProjectsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectsResponse(callApi(params, req, runtime));
}

ListProjectsResponse Alibabacloud_Dataphin-public20230630::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

ListPublishRecordsResponse Alibabacloud_Dataphin-public20230630::Client::listPublishRecordsWithOptions(shared_ptr<ListPublishRecordsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListPublishRecordsShrinkRequest> request = make_shared<ListPublishRecordsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListPublishRecordsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublishRecords"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPublishRecordsResponse(callApi(params, req, runtime));
}

ListPublishRecordsResponse Alibabacloud_Dataphin-public20230630::Client::listPublishRecords(shared_ptr<ListPublishRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPublishRecordsWithOptions(request, runtime);
}

ListResourcePermissionOperationLogResponse Alibabacloud_Dataphin-public20230630::Client::listResourcePermissionOperationLogWithOptions(shared_ptr<ListResourcePermissionOperationLogRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListResourcePermissionOperationLogShrinkRequest> request = make_shared<ListResourcePermissionOperationLogShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListResourcePermissionOperationLogRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourcePermissionOperationLog"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourcePermissionOperationLogResponse(callApi(params, req, runtime));
}

ListResourcePermissionOperationLogResponse Alibabacloud_Dataphin-public20230630::Client::listResourcePermissionOperationLog(shared_ptr<ListResourcePermissionOperationLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourcePermissionOperationLogWithOptions(request, runtime);
}

ListResourcePermissionsResponse Alibabacloud_Dataphin-public20230630::Client::listResourcePermissionsWithOptions(shared_ptr<ListResourcePermissionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListResourcePermissionsShrinkRequest> request = make_shared<ListResourcePermissionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListResourcePermissionsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourcePermissions"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourcePermissionsResponse(callApi(params, req, runtime));
}

ListResourcePermissionsResponse Alibabacloud_Dataphin-public20230630::Client::listResourcePermissions(shared_ptr<ListResourcePermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourcePermissionsWithOptions(request, runtime);
}

ListRowPermissionResponse Alibabacloud_Dataphin-public20230630::Client::listRowPermissionWithOptions(shared_ptr<ListRowPermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListRowPermissionShrinkRequest> request = make_shared<ListRowPermissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListRowPermissionRequestPageRowPermissionQuery>(tmpReq->pageRowPermissionQuery)) {
    request->pageRowPermissionQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pageRowPermissionQuery, make_shared<string>("PageRowPermissionQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pageRowPermissionQueryShrink)) {
    body->insert(pair<string, string>("PageRowPermissionQuery", *request->pageRowPermissionQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRowPermission"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRowPermissionResponse(callApi(params, req, runtime));
}

ListRowPermissionResponse Alibabacloud_Dataphin-public20230630::Client::listRowPermission(shared_ptr<ListRowPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRowPermissionWithOptions(request, runtime);
}

ListRowPermissionByUserIdResponse Alibabacloud_Dataphin-public20230630::Client::listRowPermissionByUserIdWithOptions(shared_ptr<ListRowPermissionByUserIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListRowPermissionByUserIdShrinkRequest> request = make_shared<ListRowPermissionByUserIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListRowPermissionByUserIdRequestListRowPermissionByUserIdQuery>(tmpReq->listRowPermissionByUserIdQuery)) {
    request->listRowPermissionByUserIdQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listRowPermissionByUserIdQuery, make_shared<string>("ListRowPermissionByUserIdQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listRowPermissionByUserIdQueryShrink)) {
    body->insert(pair<string, string>("ListRowPermissionByUserIdQuery", *request->listRowPermissionByUserIdQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRowPermissionByUserId"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRowPermissionByUserIdResponse(callApi(params, req, runtime));
}

ListRowPermissionByUserIdResponse Alibabacloud_Dataphin-public20230630::Client::listRowPermissionByUserId(shared_ptr<ListRowPermissionByUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRowPermissionByUserIdWithOptions(request, runtime);
}

ListSubmitRecordsResponse Alibabacloud_Dataphin-public20230630::Client::listSubmitRecordsWithOptions(shared_ptr<ListSubmitRecordsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSubmitRecordsShrinkRequest> request = make_shared<ListSubmitRecordsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListSubmitRecordsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubmitRecords"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubmitRecordsResponse(callApi(params, req, runtime));
}

ListSubmitRecordsResponse Alibabacloud_Dataphin-public20230630::Client::listSubmitRecords(shared_ptr<ListSubmitRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSubmitRecordsWithOptions(request, runtime);
}

ListTenantMembersResponse Alibabacloud_Dataphin-public20230630::Client::listTenantMembersWithOptions(shared_ptr<ListTenantMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTenantMembersShrinkRequest> request = make_shared<ListTenantMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListTenantMembersRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTenantMembers"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTenantMembersResponse(callApi(params, req, runtime));
}

ListTenantMembersResponse Alibabacloud_Dataphin-public20230630::Client::listTenantMembers(shared_ptr<ListTenantMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTenantMembersWithOptions(request, runtime);
}

ListUserGroupMembersResponse Alibabacloud_Dataphin-public20230630::Client::listUserGroupMembersWithOptions(shared_ptr<ListUserGroupMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListUserGroupMembersShrinkRequest> request = make_shared<ListUserGroupMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListUserGroupMembersRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserGroupMembers"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserGroupMembersResponse(callApi(params, req, runtime));
}

ListUserGroupMembersResponse Alibabacloud_Dataphin-public20230630::Client::listUserGroupMembers(shared_ptr<ListUserGroupMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserGroupMembersWithOptions(request, runtime);
}

ListUserGroupsResponse Alibabacloud_Dataphin-public20230630::Client::listUserGroupsWithOptions(shared_ptr<ListUserGroupsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListUserGroupsShrinkRequest> request = make_shared<ListUserGroupsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListUserGroupsRequestListQuery>(tmpReq->listQuery)) {
    request->listQueryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listQuery, make_shared<string>("ListQuery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listQueryShrink)) {
    body->insert(pair<string, string>("ListQuery", *request->listQueryShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserGroups"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserGroupsResponse(callApi(params, req, runtime));
}

ListUserGroupsResponse Alibabacloud_Dataphin-public20230630::Client::listUserGroups(shared_ptr<ListUserGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserGroupsWithOptions(request, runtime);
}

OfflineBatchTaskResponse Alibabacloud_Dataphin-public20230630::Client::offlineBatchTaskWithOptions(shared_ptr<OfflineBatchTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineBatchTask"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineBatchTaskResponse(callApi(params, req, runtime));
}

OfflineBatchTaskResponse Alibabacloud_Dataphin-public20230630::Client::offlineBatchTask(shared_ptr<OfflineBatchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return offlineBatchTaskWithOptions(request, runtime);
}

OfflineBizEntityResponse Alibabacloud_Dataphin-public20230630::Client::offlineBizEntityWithOptions(shared_ptr<OfflineBizEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<OfflineBizEntityShrinkRequest> request = make_shared<OfflineBizEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<OfflineBizEntityRequestOfflineCommand>(tmpReq->offlineCommand)) {
    request->offlineCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->offlineCommand, make_shared<string>("OfflineCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->offlineCommandShrink)) {
    body->insert(pair<string, string>("OfflineCommand", *request->offlineCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineBizEntity"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineBizEntityResponse(callApi(params, req, runtime));
}

OfflineBizEntityResponse Alibabacloud_Dataphin-public20230630::Client::offlineBizEntity(shared_ptr<OfflineBizEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return offlineBizEntityWithOptions(request, runtime);
}

OnlineBizEntityResponse Alibabacloud_Dataphin-public20230630::Client::onlineBizEntityWithOptions(shared_ptr<OnlineBizEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<OnlineBizEntityShrinkRequest> request = make_shared<OnlineBizEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<OnlineBizEntityRequestOnlineCommand>(tmpReq->onlineCommand)) {
    request->onlineCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->onlineCommand, make_shared<string>("OnlineCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->onlineCommandShrink)) {
    body->insert(pair<string, string>("OnlineCommand", *request->onlineCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OnlineBizEntity"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OnlineBizEntityResponse(callApi(params, req, runtime));
}

OnlineBizEntityResponse Alibabacloud_Dataphin-public20230630::Client::onlineBizEntity(shared_ptr<OnlineBizEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return onlineBizEntityWithOptions(request, runtime);
}

OperateInstanceResponse Alibabacloud_Dataphin-public20230630::Client::operateInstanceWithOptions(shared_ptr<OperateInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<OperateInstanceShrinkRequest> request = make_shared<OperateInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<OperateInstanceRequestOperateCommand>(tmpReq->operateCommand)) {
    request->operateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operateCommand, make_shared<string>("OperateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operateCommandShrink)) {
    body->insert(pair<string, string>("OperateCommand", *request->operateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateInstance"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateInstanceResponse(callApi(params, req, runtime));
}

OperateInstanceResponse Alibabacloud_Dataphin-public20230630::Client::operateInstance(shared_ptr<OperateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateInstanceWithOptions(request, runtime);
}

ParseBatchTaskDependencyResponse Alibabacloud_Dataphin-public20230630::Client::parseBatchTaskDependencyWithOptions(shared_ptr<ParseBatchTaskDependencyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ParseBatchTaskDependencyShrinkRequest> request = make_shared<ParseBatchTaskDependencyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ParseBatchTaskDependencyRequestParseCommand>(tmpReq->parseCommand)) {
    request->parseCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parseCommand, make_shared<string>("ParseCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->parseCommandShrink)) {
    body->insert(pair<string, string>("ParseCommand", *request->parseCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ParseBatchTaskDependency"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ParseBatchTaskDependencyResponse(callApi(params, req, runtime));
}

ParseBatchTaskDependencyResponse Alibabacloud_Dataphin-public20230630::Client::parseBatchTaskDependency(shared_ptr<ParseBatchTaskDependencyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return parseBatchTaskDependencyWithOptions(request, runtime);
}

PausePhysicalNodeResponse Alibabacloud_Dataphin-public20230630::Client::pausePhysicalNodeWithOptions(shared_ptr<PausePhysicalNodeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PausePhysicalNodeShrinkRequest> request = make_shared<PausePhysicalNodeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PausePhysicalNodeRequestPauseCommand>(tmpReq->pauseCommand)) {
    request->pauseCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pauseCommand, make_shared<string>("PauseCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pauseCommandShrink)) {
    body->insert(pair<string, string>("PauseCommand", *request->pauseCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PausePhysicalNode"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PausePhysicalNodeResponse(callApi(params, req, runtime));
}

PausePhysicalNodeResponse Alibabacloud_Dataphin-public20230630::Client::pausePhysicalNode(shared_ptr<PausePhysicalNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pausePhysicalNodeWithOptions(request, runtime);
}

PublishDataServiceApiResponse Alibabacloud_Dataphin-public20230630::Client::publishDataServiceApiWithOptions(shared_ptr<PublishDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    query->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishDataServiceApi"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishDataServiceApiResponse(callApi(params, req, runtime));
}

PublishDataServiceApiResponse Alibabacloud_Dataphin-public20230630::Client::publishDataServiceApi(shared_ptr<PublishDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishDataServiceApiWithOptions(request, runtime);
}

PublishObjectListResponse Alibabacloud_Dataphin-public20230630::Client::publishObjectListWithOptions(shared_ptr<PublishObjectListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PublishObjectListShrinkRequest> request = make_shared<PublishObjectListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PublishObjectListRequestPublishCommand>(tmpReq->publishCommand)) {
    request->publishCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->publishCommand, make_shared<string>("PublishCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->publishCommandShrink)) {
    body->insert(pair<string, string>("PublishCommand", *request->publishCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishObjectList"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishObjectListResponse(callApi(params, req, runtime));
}

PublishObjectListResponse Alibabacloud_Dataphin-public20230630::Client::publishObjectList(shared_ptr<PublishObjectListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishObjectListWithOptions(request, runtime);
}

RemoveProjectMemberResponse Alibabacloud_Dataphin-public20230630::Client::removeProjectMemberWithOptions(shared_ptr<RemoveProjectMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveProjectMemberShrinkRequest> request = make_shared<RemoveProjectMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveProjectMemberRequestRemoveCommand>(tmpReq->removeCommand)) {
    request->removeCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->removeCommand, make_shared<string>("RemoveCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->removeCommandShrink)) {
    body->insert(pair<string, string>("RemoveCommand", *request->removeCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveProjectMember"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveProjectMemberResponse(callApi(params, req, runtime));
}

RemoveProjectMemberResponse Alibabacloud_Dataphin-public20230630::Client::removeProjectMember(shared_ptr<RemoveProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeProjectMemberWithOptions(request, runtime);
}

RemoveTenantMemberResponse Alibabacloud_Dataphin-public20230630::Client::removeTenantMemberWithOptions(shared_ptr<RemoveTenantMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveTenantMemberShrinkRequest> request = make_shared<RemoveTenantMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveTenantMemberRequestRemoveCommand>(tmpReq->removeCommand)) {
    request->removeCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->removeCommand, make_shared<string>("RemoveCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->removeCommandShrink)) {
    body->insert(pair<string, string>("RemoveCommand", *request->removeCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveTenantMember"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveTenantMemberResponse(callApi(params, req, runtime));
}

RemoveTenantMemberResponse Alibabacloud_Dataphin-public20230630::Client::removeTenantMember(shared_ptr<RemoveTenantMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTenantMemberWithOptions(request, runtime);
}

RemoveUserGroupMemberResponse Alibabacloud_Dataphin-public20230630::Client::removeUserGroupMemberWithOptions(shared_ptr<RemoveUserGroupMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveUserGroupMemberShrinkRequest> request = make_shared<RemoveUserGroupMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveUserGroupMemberRequestRemoveCommand>(tmpReq->removeCommand)) {
    request->removeCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->removeCommand, make_shared<string>("RemoveCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->removeCommandShrink)) {
    body->insert(pair<string, string>("RemoveCommand", *request->removeCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveUserGroupMember"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveUserGroupMemberResponse(callApi(params, req, runtime));
}

RemoveUserGroupMemberResponse Alibabacloud_Dataphin-public20230630::Client::removeUserGroupMember(shared_ptr<RemoveUserGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUserGroupMemberWithOptions(request, runtime);
}

ReplaceProjectWhiteListsResponse Alibabacloud_Dataphin-public20230630::Client::replaceProjectWhiteListsWithOptions(shared_ptr<ReplaceProjectWhiteListsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReplaceProjectWhiteListsShrinkRequest> request = make_shared<ReplaceProjectWhiteListsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ReplaceProjectWhiteListsRequestReplaceCommand>(tmpReq->replaceCommand)) {
    request->replaceCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->replaceCommand, make_shared<string>("ReplaceCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->replaceCommandShrink)) {
    body->insert(pair<string, string>("ReplaceCommand", *request->replaceCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceProjectWhiteLists"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceProjectWhiteListsResponse(callApi(params, req, runtime));
}

ReplaceProjectWhiteListsResponse Alibabacloud_Dataphin-public20230630::Client::replaceProjectWhiteLists(shared_ptr<ReplaceProjectWhiteListsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceProjectWhiteListsWithOptions(request, runtime);
}

ResumePhysicalNodeResponse Alibabacloud_Dataphin-public20230630::Client::resumePhysicalNodeWithOptions(shared_ptr<ResumePhysicalNodeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ResumePhysicalNodeShrinkRequest> request = make_shared<ResumePhysicalNodeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ResumePhysicalNodeRequestResumeCommand>(tmpReq->resumeCommand)) {
    request->resumeCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resumeCommand, make_shared<string>("ResumeCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resumeCommandShrink)) {
    body->insert(pair<string, string>("ResumeCommand", *request->resumeCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumePhysicalNode"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumePhysicalNodeResponse(callApi(params, req, runtime));
}

ResumePhysicalNodeResponse Alibabacloud_Dataphin-public20230630::Client::resumePhysicalNode(shared_ptr<ResumePhysicalNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumePhysicalNodeWithOptions(request, runtime);
}

RevokeDataServiceApiResponse Alibabacloud_Dataphin-public20230630::Client::revokeDataServiceApiWithOptions(shared_ptr<RevokeDataServiceApiRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RevokeDataServiceApiShrinkRequest> request = make_shared<RevokeDataServiceApiShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RevokeDataServiceApiRequestRevokeCommand>(tmpReq->revokeCommand)) {
    request->revokeCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->revokeCommand, make_shared<string>("RevokeCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->revokeCommandShrink)) {
    body->insert(pair<string, string>("RevokeCommand", *request->revokeCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeDataServiceApi"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeDataServiceApiResponse(callApi(params, req, runtime));
}

RevokeDataServiceApiResponse Alibabacloud_Dataphin-public20230630::Client::revokeDataServiceApi(shared_ptr<RevokeDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeDataServiceApiWithOptions(request, runtime);
}

RevokeResourcePermissionResponse Alibabacloud_Dataphin-public20230630::Client::revokeResourcePermissionWithOptions(shared_ptr<RevokeResourcePermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RevokeResourcePermissionShrinkRequest> request = make_shared<RevokeResourcePermissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RevokeResourcePermissionRequestRevokeCommand>(tmpReq->revokeCommand)) {
    request->revokeCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->revokeCommand, make_shared<string>("RevokeCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->revokeCommandShrink)) {
    body->insert(pair<string, string>("RevokeCommand", *request->revokeCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeResourcePermission"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeResourcePermissionResponse(callApi(params, req, runtime));
}

RevokeResourcePermissionResponse Alibabacloud_Dataphin-public20230630::Client::revokeResourcePermission(shared_ptr<RevokeResourcePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeResourcePermissionWithOptions(request, runtime);
}

StopAdHocTaskResponse Alibabacloud_Dataphin-public20230630::Client::stopAdHocTaskWithOptions(shared_ptr<StopAdHocTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopAdHocTask"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopAdHocTaskResponse(callApi(params, req, runtime));
}

StopAdHocTaskResponse Alibabacloud_Dataphin-public20230630::Client::stopAdHocTask(shared_ptr<StopAdHocTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopAdHocTaskWithOptions(request, runtime);
}

SubmitBatchTaskResponse Alibabacloud_Dataphin-public20230630::Client::submitBatchTaskWithOptions(shared_ptr<SubmitBatchTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitBatchTaskShrinkRequest> request = make_shared<SubmitBatchTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitBatchTaskRequestSubmitCommand>(tmpReq->submitCommand)) {
    request->submitCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->submitCommand, make_shared<string>("SubmitCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->submitCommandShrink)) {
    body->insert(pair<string, string>("SubmitCommand", *request->submitCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitBatchTask"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitBatchTaskResponse(callApi(params, req, runtime));
}

SubmitBatchTaskResponse Alibabacloud_Dataphin-public20230630::Client::submitBatchTask(shared_ptr<SubmitBatchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitBatchTaskWithOptions(request, runtime);
}

UpdateAdHocFileResponse Alibabacloud_Dataphin-public20230630::Client::updateAdHocFileWithOptions(shared_ptr<UpdateAdHocFileRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAdHocFileShrinkRequest> request = make_shared<UpdateAdHocFileShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateAdHocFileRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAdHocFile"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAdHocFileResponse(callApi(params, req, runtime));
}

UpdateAdHocFileResponse Alibabacloud_Dataphin-public20230630::Client::updateAdHocFile(shared_ptr<UpdateAdHocFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAdHocFileWithOptions(request, runtime);
}

UpdateBatchTaskResponse Alibabacloud_Dataphin-public20230630::Client::updateBatchTaskWithOptions(shared_ptr<UpdateBatchTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateBatchTaskShrinkRequest> request = make_shared<UpdateBatchTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateBatchTaskRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBatchTask"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBatchTaskResponse(callApi(params, req, runtime));
}

UpdateBatchTaskResponse Alibabacloud_Dataphin-public20230630::Client::updateBatchTask(shared_ptr<UpdateBatchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBatchTaskWithOptions(request, runtime);
}

UpdateBatchTaskUdfLineagesResponse Alibabacloud_Dataphin-public20230630::Client::updateBatchTaskUdfLineagesWithOptions(shared_ptr<UpdateBatchTaskUdfLineagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateBatchTaskUdfLineagesShrinkRequest> request = make_shared<UpdateBatchTaskUdfLineagesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateBatchTaskUdfLineagesRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBatchTaskUdfLineages"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBatchTaskUdfLineagesResponse(callApi(params, req, runtime));
}

UpdateBatchTaskUdfLineagesResponse Alibabacloud_Dataphin-public20230630::Client::updateBatchTaskUdfLineages(shared_ptr<UpdateBatchTaskUdfLineagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBatchTaskUdfLineagesWithOptions(request, runtime);
}

UpdateBizEntityResponse Alibabacloud_Dataphin-public20230630::Client::updateBizEntityWithOptions(shared_ptr<UpdateBizEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateBizEntityShrinkRequest> request = make_shared<UpdateBizEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateBizEntityRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBizEntity"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBizEntityResponse(callApi(params, req, runtime));
}

UpdateBizEntityResponse Alibabacloud_Dataphin-public20230630::Client::updateBizEntity(shared_ptr<UpdateBizEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBizEntityWithOptions(request, runtime);
}

UpdateBizUnitResponse Alibabacloud_Dataphin-public20230630::Client::updateBizUnitWithOptions(shared_ptr<UpdateBizUnitRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateBizUnitShrinkRequest> request = make_shared<UpdateBizUnitShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateBizUnitRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBizUnit"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBizUnitResponse(callApi(params, req, runtime));
}

UpdateBizUnitResponse Alibabacloud_Dataphin-public20230630::Client::updateBizUnit(shared_ptr<UpdateBizUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBizUnitWithOptions(request, runtime);
}

UpdateComputeSourceResponse Alibabacloud_Dataphin-public20230630::Client::updateComputeSourceWithOptions(shared_ptr<UpdateComputeSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateComputeSourceShrinkRequest> request = make_shared<UpdateComputeSourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateComputeSourceRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateComputeSource"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateComputeSourceResponse(callApi(params, req, runtime));
}

UpdateComputeSourceResponse Alibabacloud_Dataphin-public20230630::Client::updateComputeSource(shared_ptr<UpdateComputeSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateComputeSourceWithOptions(request, runtime);
}

UpdateDataDomainResponse Alibabacloud_Dataphin-public20230630::Client::updateDataDomainWithOptions(shared_ptr<UpdateDataDomainRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDataDomainShrinkRequest> request = make_shared<UpdateDataDomainShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDataDomainRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataDomain"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataDomainResponse(callApi(params, req, runtime));
}

UpdateDataDomainResponse Alibabacloud_Dataphin-public20230630::Client::updateDataDomain(shared_ptr<UpdateDataDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataDomainWithOptions(request, runtime);
}

UpdateDataSourceBasicInfoResponse Alibabacloud_Dataphin-public20230630::Client::updateDataSourceBasicInfoWithOptions(shared_ptr<UpdateDataSourceBasicInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDataSourceBasicInfoShrinkRequest> request = make_shared<UpdateDataSourceBasicInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDataSourceBasicInfoRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataSourceBasicInfo"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataSourceBasicInfoResponse(callApi(params, req, runtime));
}

UpdateDataSourceBasicInfoResponse Alibabacloud_Dataphin-public20230630::Client::updateDataSourceBasicInfo(shared_ptr<UpdateDataSourceBasicInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataSourceBasicInfoWithOptions(request, runtime);
}

UpdateDataSourceConfigResponse Alibabacloud_Dataphin-public20230630::Client::updateDataSourceConfigWithOptions(shared_ptr<UpdateDataSourceConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDataSourceConfigShrinkRequest> request = make_shared<UpdateDataSourceConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDataSourceConfigRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataSourceConfig"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataSourceConfigResponse(callApi(params, req, runtime));
}

UpdateDataSourceConfigResponse Alibabacloud_Dataphin-public20230630::Client::updateDataSourceConfig(shared_ptr<UpdateDataSourceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataSourceConfigWithOptions(request, runtime);
}

UpdateFileDirectoryResponse Alibabacloud_Dataphin-public20230630::Client::updateFileDirectoryWithOptions(shared_ptr<UpdateFileDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->directory)) {
    query->insert(pair<string, string>("Directory", *request->directory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFileDirectory"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFileDirectoryResponse(callApi(params, req, runtime));
}

UpdateFileDirectoryResponse Alibabacloud_Dataphin-public20230630::Client::updateFileDirectory(shared_ptr<UpdateFileDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFileDirectoryWithOptions(request, runtime);
}

UpdateFileNameResponse Alibabacloud_Dataphin-public20230630::Client::updateFileNameWithOptions(shared_ptr<UpdateFileNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFileName"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFileNameResponse(callApi(params, req, runtime));
}

UpdateFileNameResponse Alibabacloud_Dataphin-public20230630::Client::updateFileName(shared_ptr<UpdateFileNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFileNameWithOptions(request, runtime);
}

UpdateProjectMemberResponse Alibabacloud_Dataphin-public20230630::Client::updateProjectMemberWithOptions(shared_ptr<UpdateProjectMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateProjectMemberShrinkRequest> request = make_shared<UpdateProjectMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateProjectMemberRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProjectMember"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectMemberResponse(callApi(params, req, runtime));
}

UpdateProjectMemberResponse Alibabacloud_Dataphin-public20230630::Client::updateProjectMember(shared_ptr<UpdateProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectMemberWithOptions(request, runtime);
}

UpdateResourceResponse Alibabacloud_Dataphin-public20230630::Client::updateResourceWithOptions(shared_ptr<UpdateResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateResourceShrinkRequest> request = make_shared<UpdateResourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateResourceRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResource"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceResponse(callApi(params, req, runtime));
}

UpdateResourceResponse Alibabacloud_Dataphin-public20230630::Client::updateResource(shared_ptr<UpdateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResourceWithOptions(request, runtime);
}

UpdateRowPermissionResponse Alibabacloud_Dataphin-public20230630::Client::updateRowPermissionWithOptions(shared_ptr<UpdateRowPermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateRowPermissionShrinkRequest> request = make_shared<UpdateRowPermissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateRowPermissionRequestUpdateRowPermissionCommand>(tmpReq->updateRowPermissionCommand)) {
    request->updateRowPermissionCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateRowPermissionCommand, make_shared<string>("UpdateRowPermissionCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateRowPermissionCommandShrink)) {
    body->insert(pair<string, string>("UpdateRowPermissionCommand", *request->updateRowPermissionCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRowPermission"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRowPermissionResponse(callApi(params, req, runtime));
}

UpdateRowPermissionResponse Alibabacloud_Dataphin-public20230630::Client::updateRowPermission(shared_ptr<UpdateRowPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRowPermissionWithOptions(request, runtime);
}

UpdateTenantComputeEngineResponse Alibabacloud_Dataphin-public20230630::Client::updateTenantComputeEngineWithOptions(shared_ptr<UpdateTenantComputeEngineRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTenantComputeEngineShrinkRequest> request = make_shared<UpdateTenantComputeEngineShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateTenantComputeEngineRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTenantComputeEngine"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTenantComputeEngineResponse(callApi(params, req, runtime));
}

UpdateTenantComputeEngineResponse Alibabacloud_Dataphin-public20230630::Client::updateTenantComputeEngine(shared_ptr<UpdateTenantComputeEngineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTenantComputeEngineWithOptions(request, runtime);
}

UpdateTenantMemberResponse Alibabacloud_Dataphin-public20230630::Client::updateTenantMemberWithOptions(shared_ptr<UpdateTenantMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTenantMemberShrinkRequest> request = make_shared<UpdateTenantMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateTenantMemberRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTenantMember"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTenantMemberResponse(callApi(params, req, runtime));
}

UpdateTenantMemberResponse Alibabacloud_Dataphin-public20230630::Client::updateTenantMember(shared_ptr<UpdateTenantMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTenantMemberWithOptions(request, runtime);
}

UpdateUdfResponse Alibabacloud_Dataphin-public20230630::Client::updateUdfWithOptions(shared_ptr<UpdateUdfRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateUdfShrinkRequest> request = make_shared<UpdateUdfShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateUdfRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUdf"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUdfResponse(callApi(params, req, runtime));
}

UpdateUdfResponse Alibabacloud_Dataphin-public20230630::Client::updateUdf(shared_ptr<UpdateUdfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUdfWithOptions(request, runtime);
}

UpdateUserGroupResponse Alibabacloud_Dataphin-public20230630::Client::updateUserGroupWithOptions(shared_ptr<UpdateUserGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateUserGroupShrinkRequest> request = make_shared<UpdateUserGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateUserGroupRequestUpdateCommand>(tmpReq->updateCommand)) {
    request->updateCommandShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateCommand, make_shared<string>("UpdateCommand"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateCommandShrink)) {
    body->insert(pair<string, string>("UpdateCommand", *request->updateCommandShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserGroup"))},
    {"version", boost::any(string("2023-06-30"))},
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

UpdateUserGroupResponse Alibabacloud_Dataphin-public20230630::Client::updateUserGroup(shared_ptr<UpdateUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserGroupWithOptions(request, runtime);
}

UpdateUserGroupSwitchResponse Alibabacloud_Dataphin-public20230630::Client::updateUserGroupSwitchWithOptions(shared_ptr<UpdateUserGroupSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->active)) {
    query->insert(pair<string, bool>("Active", *request->active));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->opTenantId)) {
    query->insert(pair<string, long>("OpTenantId", *request->opTenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserGroupSwitch"))},
    {"version", boost::any(string("2023-06-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserGroupSwitchResponse(callApi(params, req, runtime));
}

UpdateUserGroupSwitchResponse Alibabacloud_Dataphin-public20230630::Client::updateUserGroupSwitch(shared_ptr<UpdateUserGroupSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserGroupSwitchWithOptions(request, runtime);
}

