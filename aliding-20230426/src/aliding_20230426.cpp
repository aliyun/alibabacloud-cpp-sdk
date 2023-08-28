// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/aliding_20230426.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Aliding20230426;

Alibabacloud_Aliding20230426::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aliding"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Aliding20230426::Client::getEndpoint(shared_ptr<string> productId,
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

AddWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::addWorkspaceDocMembersWithOptions(shared_ptr<AddWorkspaceDocMembersRequest> tmpReq, shared_ptr<AddWorkspaceDocMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddWorkspaceDocMembersShrinkRequest> request = make_shared<AddWorkspaceDocMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<AddWorkspaceDocMembersShrinkHeaders> headers = make_shared<AddWorkspaceDocMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceDocMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddWorkspaceDocMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceDocMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddWorkspaceDocMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/addWorkspaceDocMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddWorkspaceDocMembersResponse(callApi(params, req, runtime));
}

AddWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::addWorkspaceDocMembers(shared_ptr<AddWorkspaceDocMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddWorkspaceDocMembersHeaders> headers = make_shared<AddWorkspaceDocMembersHeaders>();
  return addWorkspaceDocMembersWithOptions(request, headers, runtime);
}

AddWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::addWorkspaceMembersWithOptions(shared_ptr<AddWorkspaceMembersRequest> tmpReq, shared_ptr<AddWorkspaceMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddWorkspaceMembersShrinkRequest> request = make_shared<AddWorkspaceMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<AddWorkspaceMembersShrinkHeaders> headers = make_shared<AddWorkspaceMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddWorkspaceMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddWorkspaceMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/addWorkspaceMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddWorkspaceMembersResponse(callApi(params, req, runtime));
}

AddWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::addWorkspaceMembers(shared_ptr<AddWorkspaceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddWorkspaceMembersHeaders> headers = make_shared<AddWorkspaceMembersHeaders>();
  return addWorkspaceMembersWithOptions(request, headers, runtime);
}

CreateSheetResponse Alibabacloud_Aliding20230426::Client::createSheetWithOptions(shared_ptr<CreateSheetRequest> tmpReq, shared_ptr<CreateSheetHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSheetShrinkRequest> request = make_shared<CreateSheetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateSheetShrinkHeaders> headers = make_shared<CreateSheetShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateSheetHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSheetRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSheet"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/createSheet"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSheetResponse(callApi(params, req, runtime));
}

CreateSheetResponse Alibabacloud_Aliding20230426::Client::createSheet(shared_ptr<CreateSheetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateSheetHeaders> headers = make_shared<CreateSheetHeaders>();
  return createSheetWithOptions(request, headers, runtime);
}

CreateTodoTaskResponse Alibabacloud_Aliding20230426::Client::createTodoTaskWithOptions(shared_ptr<CreateTodoTaskRequest> tmpReq, shared_ptr<CreateTodoTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateTodoTaskShrinkRequest> request = make_shared<CreateTodoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateTodoTaskShrinkHeaders> headers = make_shared<CreateTodoTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateTodoTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTodoTaskRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTodoTaskRequestContentFieldList>>(tmpReq->contentFieldList)) {
    request->contentFieldListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contentFieldList, make_shared<string>("contentFieldList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTodoTaskRequestDetailUrl>(tmpReq->detailUrl)) {
    request->detailUrlShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->detailUrl, make_shared<string>("detailUrl"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->executorIds)) {
    request->executorIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executorIds, make_shared<string>("executorIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTodoTaskRequestNotifyConfigs>(tmpReq->notifyConfigs)) {
    request->notifyConfigsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notifyConfigs, make_shared<string>("notifyConfigs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->participantIds)) {
    request->participantIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->participantIds, make_shared<string>("participantIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorId)) {
    query->insert(pair<string, string>("operatorId", *request->operatorId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentFieldListShrink)) {
    body->insert(pair<string, string>("contentFieldList", *request->contentFieldListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorId)) {
    body->insert(pair<string, string>("creatorId", *request->creatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailUrlShrink)) {
    body->insert(pair<string, string>("detailUrl", *request->detailUrlShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dueTime)) {
    body->insert(pair<string, long>("dueTime", *request->dueTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorIdsShrink)) {
    body->insert(pair<string, string>("executorIds", *request->executorIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isOnlyShowExecutor)) {
    body->insert(pair<string, bool>("isOnlyShowExecutor", *request->isOnlyShowExecutor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyConfigsShrink)) {
    body->insert(pair<string, string>("notifyConfigs", *request->notifyConfigsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->participantIdsShrink)) {
    body->insert(pair<string, string>("participantIds", *request->participantIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    body->insert(pair<string, string>("sourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("subject", *request->subject));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTodoTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/createTodoTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTodoTaskResponse(callApi(params, req, runtime));
}

CreateTodoTaskResponse Alibabacloud_Aliding20230426::Client::createTodoTask(shared_ptr<CreateTodoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateTodoTaskHeaders> headers = make_shared<CreateTodoTaskHeaders>();
  return createTodoTaskWithOptions(request, headers, runtime);
}

CreateWorkspaceResponse Alibabacloud_Aliding20230426::Client::createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> tmpReq, shared_ptr<CreateWorkspaceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateWorkspaceShrinkRequest> request = make_shared<CreateWorkspaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateWorkspaceShrinkHeaders> headers = make_shared<CreateWorkspaceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateWorkspaceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateWorkspaceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkspace"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/createWorkspace"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkspaceResponse(callApi(params, req, runtime));
}

CreateWorkspaceResponse Alibabacloud_Aliding20230426::Client::createWorkspace(shared_ptr<CreateWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateWorkspaceHeaders> headers = make_shared<CreateWorkspaceHeaders>();
  return createWorkspaceWithOptions(request, headers, runtime);
}

CreateWorkspaceDocResponse Alibabacloud_Aliding20230426::Client::createWorkspaceDocWithOptions(shared_ptr<CreateWorkspaceDocRequest> tmpReq, shared_ptr<CreateWorkspaceDocHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateWorkspaceDocShrinkRequest> request = make_shared<CreateWorkspaceDocShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateWorkspaceDocShrinkHeaders> headers = make_shared<CreateWorkspaceDocShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateWorkspaceDocHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateWorkspaceDocRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    body->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentNodeId)) {
    body->insert(pair<string, string>("ParentNodeId", *request->parentNodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkspaceDoc"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/createWorkspaceDoc"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkspaceDocResponse(callApi(params, req, runtime));
}

CreateWorkspaceDocResponse Alibabacloud_Aliding20230426::Client::createWorkspaceDoc(shared_ptr<CreateWorkspaceDocRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateWorkspaceDocHeaders> headers = make_shared<CreateWorkspaceDocHeaders>();
  return createWorkspaceDocWithOptions(request, headers, runtime);
}

DeleteTodoTaskResponse Alibabacloud_Aliding20230426::Client::deleteTodoTaskWithOptions(shared_ptr<DeleteTodoTaskRequest> tmpReq, shared_ptr<DeleteTodoTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteTodoTaskShrinkRequest> request = make_shared<DeleteTodoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteTodoTaskShrinkHeaders> headers = make_shared<DeleteTodoTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteTodoTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteTodoTaskRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorId)) {
    body->insert(pair<string, string>("operatorId", *request->operatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTodoTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/deleteTodoTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTodoTaskResponse(callApi(params, req, runtime));
}

DeleteTodoTaskResponse Alibabacloud_Aliding20230426::Client::deleteTodoTask(shared_ptr<DeleteTodoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteTodoTaskHeaders> headers = make_shared<DeleteTodoTaskHeaders>();
  return deleteTodoTaskWithOptions(request, headers, runtime);
}

DeleteWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::deleteWorkspaceDocMembersWithOptions(shared_ptr<DeleteWorkspaceDocMembersRequest> tmpReq, shared_ptr<DeleteWorkspaceDocMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteWorkspaceDocMembersShrinkRequest> request = make_shared<DeleteWorkspaceDocMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteWorkspaceDocMembersShrinkHeaders> headers = make_shared<DeleteWorkspaceDocMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteWorkspaceDocMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DeleteWorkspaceDocMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteWorkspaceDocMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkspaceDocMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/deleteWorkspaceDocMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkspaceDocMembersResponse(callApi(params, req, runtime));
}

DeleteWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::deleteWorkspaceDocMembers(shared_ptr<DeleteWorkspaceDocMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteWorkspaceDocMembersHeaders> headers = make_shared<DeleteWorkspaceDocMembersHeaders>();
  return deleteWorkspaceDocMembersWithOptions(request, headers, runtime);
}

DeleteWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::deleteWorkspaceMembersWithOptions(shared_ptr<DeleteWorkspaceMembersRequest> tmpReq, shared_ptr<DeleteWorkspaceMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteWorkspaceMembersShrinkRequest> request = make_shared<DeleteWorkspaceMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteWorkspaceMembersShrinkHeaders> headers = make_shared<DeleteWorkspaceMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteWorkspaceMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DeleteWorkspaceMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteWorkspaceMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkspaceMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/deleteWorkspaceMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkspaceMembersResponse(callApi(params, req, runtime));
}

DeleteWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::deleteWorkspaceMembers(shared_ptr<DeleteWorkspaceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteWorkspaceMembersHeaders> headers = make_shared<DeleteWorkspaceMembersHeaders>();
  return deleteWorkspaceMembersWithOptions(request, headers, runtime);
}

GetUserResponse Alibabacloud_Aliding20230426::Client::getUserWithOptions(shared_ptr<GetUserRequest> tmpReq, shared_ptr<GetUserHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetUserShrinkRequest> request = make_shared<GetUserShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetUserShrinkHeaders> headers = make_shared<GetUserShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetUserHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetUserRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("language", *request->language));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUser"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/getUser"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserResponse(callApi(params, req, runtime));
}

GetUserResponse Alibabacloud_Aliding20230426::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserHeaders> headers = make_shared<GetUserHeaders>();
  return getUserWithOptions(request, headers, runtime);
}

InsertRowsBeforeResponse Alibabacloud_Aliding20230426::Client::insertRowsBeforeWithOptions(shared_ptr<InsertRowsBeforeRequest> tmpReq, shared_ptr<InsertRowsBeforeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertRowsBeforeShrinkRequest> request = make_shared<InsertRowsBeforeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<InsertRowsBeforeShrinkHeaders> headers = make_shared<InsertRowsBeforeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<InsertRowsBeforeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<InsertRowsBeforeRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->row)) {
    body->insert(pair<string, long>("Row", *request->row));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rowCount)) {
    body->insert(pair<string, long>("RowCount", *request->rowCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertRowsBefore"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/insertRowsBefore"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertRowsBeforeResponse(callApi(params, req, runtime));
}

InsertRowsBeforeResponse Alibabacloud_Aliding20230426::Client::insertRowsBefore(shared_ptr<InsertRowsBeforeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsertRowsBeforeHeaders> headers = make_shared<InsertRowsBeforeHeaders>();
  return insertRowsBeforeWithOptions(request, headers, runtime);
}

QueryOrgTodoTasksResponse Alibabacloud_Aliding20230426::Client::queryOrgTodoTasksWithOptions(shared_ptr<QueryOrgTodoTasksRequest> tmpReq, shared_ptr<QueryOrgTodoTasksHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryOrgTodoTasksShrinkRequest> request = make_shared<QueryOrgTodoTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryOrgTodoTasksShrinkHeaders> headers = make_shared<QueryOrgTodoTasksShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryOrgTodoTasksHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryOrgTodoTasksRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDone)) {
    body->insert(pair<string, bool>("isDone", *request->isDone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrgTodoTasks"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/queryOrgTodoTasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrgTodoTasksResponse(callApi(params, req, runtime));
}

QueryOrgTodoTasksResponse Alibabacloud_Aliding20230426::Client::queryOrgTodoTasks(shared_ptr<QueryOrgTodoTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryOrgTodoTasksHeaders> headers = make_shared<QueryOrgTodoTasksHeaders>();
  return queryOrgTodoTasksWithOptions(request, headers, runtime);
}

UpdateTodoTaskResponse Alibabacloud_Aliding20230426::Client::updateTodoTaskWithOptions(shared_ptr<UpdateTodoTaskRequest> tmpReq, shared_ptr<UpdateTodoTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTodoTaskShrinkRequest> request = make_shared<UpdateTodoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateTodoTaskShrinkHeaders> headers = make_shared<UpdateTodoTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateTodoTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTodoTaskRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->executorIds)) {
    request->executorIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executorIds, make_shared<string>("executorIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->participantIds)) {
    request->participantIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->participantIds, make_shared<string>("participantIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->done)) {
    body->insert(pair<string, bool>("done", *request->done));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dueTime)) {
    body->insert(pair<string, long>("dueTime", *request->dueTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorIdsShrink)) {
    body->insert(pair<string, string>("executorIds", *request->executorIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->participantIdsShrink)) {
    body->insert(pair<string, string>("participantIds", *request->participantIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTodoTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/updateTodoTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTodoTaskResponse(callApi(params, req, runtime));
}

UpdateTodoTaskResponse Alibabacloud_Aliding20230426::Client::updateTodoTask(shared_ptr<UpdateTodoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateTodoTaskHeaders> headers = make_shared<UpdateTodoTaskHeaders>();
  return updateTodoTaskWithOptions(request, headers, runtime);
}

UpdateTodoTaskExecutorStatusResponse Alibabacloud_Aliding20230426::Client::updateTodoTaskExecutorStatusWithOptions(shared_ptr<UpdateTodoTaskExecutorStatusRequest> tmpReq, shared_ptr<UpdateTodoTaskExecutorStatusHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTodoTaskExecutorStatusShrinkRequest> request = make_shared<UpdateTodoTaskExecutorStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateTodoTaskExecutorStatusShrinkHeaders> headers = make_shared<UpdateTodoTaskExecutorStatusShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateTodoTaskExecutorStatusHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTodoTaskExecutorStatusRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTodoTaskExecutorStatusRequestExecutorStatusList>>(tmpReq->executorStatusList)) {
    request->executorStatusListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executorStatusList, make_shared<string>("executorStatusList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorStatusListShrink)) {
    body->insert(pair<string, string>("executorStatusList", *request->executorStatusListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorId)) {
    body->insert(pair<string, string>("operatorId", *request->operatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTodoTaskExecutorStatus"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/updateTodoTaskExecutorStatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTodoTaskExecutorStatusResponse(callApi(params, req, runtime));
}

UpdateTodoTaskExecutorStatusResponse Alibabacloud_Aliding20230426::Client::updateTodoTaskExecutorStatus(shared_ptr<UpdateTodoTaskExecutorStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateTodoTaskExecutorStatusHeaders> headers = make_shared<UpdateTodoTaskExecutorStatusHeaders>();
  return updateTodoTaskExecutorStatusWithOptions(request, headers, runtime);
}

UpdateWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::updateWorkspaceDocMembersWithOptions(shared_ptr<UpdateWorkspaceDocMembersRequest> tmpReq, shared_ptr<UpdateWorkspaceDocMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateWorkspaceDocMembersShrinkRequest> request = make_shared<UpdateWorkspaceDocMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateWorkspaceDocMembersShrinkHeaders> headers = make_shared<UpdateWorkspaceDocMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateWorkspaceDocMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateWorkspaceDocMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateWorkspaceDocMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkspaceDocMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/updateWorkspaceDocMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkspaceDocMembersResponse(callApi(params, req, runtime));
}

UpdateWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::updateWorkspaceDocMembers(shared_ptr<UpdateWorkspaceDocMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateWorkspaceDocMembersHeaders> headers = make_shared<UpdateWorkspaceDocMembersHeaders>();
  return updateWorkspaceDocMembersWithOptions(request, headers, runtime);
}

UpdateWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::updateWorkspaceMembersWithOptions(shared_ptr<UpdateWorkspaceMembersRequest> tmpReq, shared_ptr<UpdateWorkspaceMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateWorkspaceMembersShrinkRequest> request = make_shared<UpdateWorkspaceMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateWorkspaceMembersShrinkHeaders> headers = make_shared<UpdateWorkspaceMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateWorkspaceMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateWorkspaceMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateWorkspaceMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkspaceMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/updateWorkspaceMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkspaceMembersResponse(callApi(params, req, runtime));
}

UpdateWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::updateWorkspaceMembers(shared_ptr<UpdateWorkspaceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateWorkspaceMembersHeaders> headers = make_shared<UpdateWorkspaceMembersHeaders>();
  return updateWorkspaceMembersWithOptions(request, headers, runtime);
}

