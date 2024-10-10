// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/quickbi_public_20220101.hpp>
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

using namespace Alibabacloud_Quickbi-public20220101;

Alibabacloud_Quickbi-public20220101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("quickbi-public"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Quickbi-public20220101::Client::getEndpoint(shared_ptr<string> productId,
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

AddDataLevelPermissionRuleUsersResponse Alibabacloud_Quickbi-public20220101::Client::addDataLevelPermissionRuleUsersWithOptions(shared_ptr<AddDataLevelPermissionRuleUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addUserModel)) {
    query->insert(pair<string, string>("AddUserModel", *request->addUserModel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDataLevelPermissionRuleUsers"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDataLevelPermissionRuleUsersResponse(callApi(params, req, runtime));
}

AddDataLevelPermissionRuleUsersResponse Alibabacloud_Quickbi-public20220101::Client::addDataLevelPermissionRuleUsers(shared_ptr<AddDataLevelPermissionRuleUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDataLevelPermissionRuleUsersWithOptions(request, runtime);
}

AddDataLevelPermissionWhiteListResponse Alibabacloud_Quickbi-public20220101::Client::addDataLevelPermissionWhiteListWithOptions(shared_ptr<AddDataLevelPermissionWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cubeId)) {
    query->insert(pair<string, string>("CubeId", *request->cubeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetIds)) {
    query->insert(pair<string, string>("TargetIds", *request->targetIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDataLevelPermissionWhiteList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDataLevelPermissionWhiteListResponse(callApi(params, req, runtime));
}

AddDataLevelPermissionWhiteListResponse Alibabacloud_Quickbi-public20220101::Client::addDataLevelPermissionWhiteList(shared_ptr<AddDataLevelPermissionWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDataLevelPermissionWhiteListWithOptions(request, runtime);
}

AddShareReportResponse Alibabacloud_Quickbi-public20220101::Client::addShareReportWithOptions(shared_ptr<AddShareReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->authPoint)) {
    query->insert(pair<string, long>("AuthPoint", *request->authPoint));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expireDate)) {
    query->insert(pair<string, long>("ExpireDate", *request->expireDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareToId)) {
    query->insert(pair<string, string>("ShareToId", *request->shareToId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shareToType)) {
    query->insert(pair<string, long>("ShareToType", *request->shareToType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->worksId)) {
    query->insert(pair<string, string>("WorksId", *request->worksId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddShareReport"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddShareReportResponse(callApi(params, req, runtime));
}

AddShareReportResponse Alibabacloud_Quickbi-public20220101::Client::addShareReport(shared_ptr<AddShareReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addShareReportWithOptions(request, runtime);
}

AddUserResponse Alibabacloud_Quickbi-public20220101::Client::addUserWithOptions(shared_ptr<AddUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->adminUser)) {
    query->insert(pair<string, bool>("AdminUser", *request->adminUser));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->authAdminUser)) {
    query->insert(pair<string, bool>("AuthAdminUser", *request->authAdminUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nickName)) {
    query->insert(pair<string, string>("NickName", *request->nickName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userType)) {
    query->insert(pair<string, long>("UserType", *request->userType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleIds)) {
    body->insert(pair<string, string>("RoleIds", *request->roleIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUser"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserResponse(callApi(params, req, runtime));
}

AddUserResponse Alibabacloud_Quickbi-public20220101::Client::addUser(shared_ptr<AddUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserWithOptions(request, runtime);
}

AddUserGroupMemberResponse Alibabacloud_Quickbi-public20220101::Client::addUserGroupMemberWithOptions(shared_ptr<AddUserGroupMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdList)) {
    query->insert(pair<string, string>("UserIdList", *request->userIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserGroupMember"))},
    {"version", boost::any(string("2022-01-01"))},
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

AddUserGroupMemberResponse Alibabacloud_Quickbi-public20220101::Client::addUserGroupMember(shared_ptr<AddUserGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserGroupMemberWithOptions(request, runtime);
}

AddUserGroupMembersResponse Alibabacloud_Quickbi-public20220101::Client::addUserGroupMembersWithOptions(shared_ptr<AddUserGroupMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupIds)) {
    query->insert(pair<string, string>("UserGroupIds", *request->userGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserGroupMembers"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserGroupMembersResponse(callApi(params, req, runtime));
}

AddUserGroupMembersResponse Alibabacloud_Quickbi-public20220101::Client::addUserGroupMembers(shared_ptr<AddUserGroupMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserGroupMembersWithOptions(request, runtime);
}

AddUserTagMetaResponse Alibabacloud_Quickbi-public20220101::Client::addUserTagMetaWithOptions(shared_ptr<AddUserTagMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagDescription)) {
    query->insert(pair<string, string>("TagDescription", *request->tagDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserTagMeta"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserTagMetaResponse(callApi(params, req, runtime));
}

AddUserTagMetaResponse Alibabacloud_Quickbi-public20220101::Client::addUserTagMeta(shared_ptr<AddUserTagMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserTagMetaWithOptions(request, runtime);
}

AddUserToWorkspaceResponse Alibabacloud_Quickbi-public20220101::Client::addUserToWorkspaceWithOptions(shared_ptr<AddUserToWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    query->insert(pair<string, long>("RoleId", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserToWorkspace"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserToWorkspaceResponse(callApi(params, req, runtime));
}

AddUserToWorkspaceResponse Alibabacloud_Quickbi-public20220101::Client::addUserToWorkspace(shared_ptr<AddUserToWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserToWorkspaceWithOptions(request, runtime);
}

AddWorkspaceUsersResponse Alibabacloud_Quickbi-public20220101::Client::addWorkspaceUsersWithOptions(shared_ptr<AddWorkspaceUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    query->insert(pair<string, long>("RoleId", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    query->insert(pair<string, string>("UserIds", *request->userIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddWorkspaceUsers"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddWorkspaceUsersResponse(callApi(params, req, runtime));
}

AddWorkspaceUsersResponse Alibabacloud_Quickbi-public20220101::Client::addWorkspaceUsers(shared_ptr<AddWorkspaceUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addWorkspaceUsersWithOptions(request, runtime);
}

AllotDatasetAccelerationTaskResponse Alibabacloud_Quickbi-public20220101::Client::allotDatasetAccelerationTaskWithOptions(shared_ptr<AllotDatasetAccelerationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cubeId)) {
    query->insert(pair<string, string>("CubeId", *request->cubeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllotDatasetAccelerationTask"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllotDatasetAccelerationTaskResponse(callApi(params, req, runtime));
}

AllotDatasetAccelerationTaskResponse Alibabacloud_Quickbi-public20220101::Client::allotDatasetAccelerationTask(shared_ptr<AllotDatasetAccelerationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allotDatasetAccelerationTaskWithOptions(request, runtime);
}

AuthorizeMenuResponse Alibabacloud_Quickbi-public20220101::Client::authorizeMenuWithOptions(shared_ptr<AuthorizeMenuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->authPointsValue)) {
    query->insert(pair<string, long>("AuthPointsValue", *request->authPointsValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataPortalId)) {
    query->insert(pair<string, string>("DataPortalId", *request->dataPortalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->menuIds)) {
    query->insert(pair<string, string>("MenuIds", *request->menuIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupIds)) {
    query->insert(pair<string, string>("UserGroupIds", *request->userGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    query->insert(pair<string, string>("UserIds", *request->userIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeMenu"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthorizeMenuResponse(callApi(params, req, runtime));
}

AuthorizeMenuResponse Alibabacloud_Quickbi-public20220101::Client::authorizeMenu(shared_ptr<AuthorizeMenuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeMenuWithOptions(request, runtime);
}

BatchAddFeishuUsersResponse Alibabacloud_Quickbi-public20220101::Client::batchAddFeishuUsersWithOptions(shared_ptr<BatchAddFeishuUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->feishuUsers)) {
    query->insert(pair<string, string>("FeishuUsers", *request->feishuUsers));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAdmin)) {
    query->insert(pair<string, bool>("IsAdmin", *request->isAdmin));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAuthAdmin)) {
    query->insert(pair<string, bool>("IsAuthAdmin", *request->isAuthAdmin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupIds)) {
    query->insert(pair<string, string>("UserGroupIds", *request->userGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userType)) {
    query->insert(pair<string, long>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchAddFeishuUsers"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchAddFeishuUsersResponse(callApi(params, req, runtime));
}

BatchAddFeishuUsersResponse Alibabacloud_Quickbi-public20220101::Client::batchAddFeishuUsers(shared_ptr<BatchAddFeishuUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddFeishuUsersWithOptions(request, runtime);
}

CancelAuthorizationMenuResponse Alibabacloud_Quickbi-public20220101::Client::cancelAuthorizationMenuWithOptions(shared_ptr<CancelAuthorizationMenuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataPortalId)) {
    query->insert(pair<string, string>("DataPortalId", *request->dataPortalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->menuIds)) {
    query->insert(pair<string, string>("MenuIds", *request->menuIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupIds)) {
    query->insert(pair<string, string>("UserGroupIds", *request->userGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    query->insert(pair<string, string>("UserIds", *request->userIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelAuthorizationMenu"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelAuthorizationMenuResponse(callApi(params, req, runtime));
}

CancelAuthorizationMenuResponse Alibabacloud_Quickbi-public20220101::Client::cancelAuthorizationMenu(shared_ptr<CancelAuthorizationMenuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelAuthorizationMenuWithOptions(request, runtime);
}

CancelCollectionResponse Alibabacloud_Quickbi-public20220101::Client::cancelCollectionWithOptions(shared_ptr<CancelCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->worksId)) {
    query->insert(pair<string, string>("WorksId", *request->worksId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelCollection"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelCollectionResponse(callApi(params, req, runtime));
}

CancelCollectionResponse Alibabacloud_Quickbi-public20220101::Client::cancelCollection(shared_ptr<CancelCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelCollectionWithOptions(request, runtime);
}

CancelReportShareResponse Alibabacloud_Quickbi-public20220101::Client::cancelReportShareWithOptions(shared_ptr<CancelReportShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    query->insert(pair<string, string>("ReportId", *request->reportId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareToIds)) {
    query->insert(pair<string, string>("ShareToIds", *request->shareToIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shareToType)) {
    query->insert(pair<string, long>("ShareToType", *request->shareToType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelReportShare"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelReportShareResponse(callApi(params, req, runtime));
}

CancelReportShareResponse Alibabacloud_Quickbi-public20220101::Client::cancelReportShare(shared_ptr<CancelReportShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelReportShareWithOptions(request, runtime);
}

ChangeVisibilityModelResponse Alibabacloud_Quickbi-public20220101::Client::changeVisibilityModelWithOptions(shared_ptr<ChangeVisibilityModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataPortalId)) {
    query->insert(pair<string, string>("DataPortalId", *request->dataPortalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->menuIds)) {
    query->insert(pair<string, string>("MenuIds", *request->menuIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showOnlyWithAccess)) {
    query->insert(pair<string, bool>("ShowOnlyWithAccess", *request->showOnlyWithAccess));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeVisibilityModel"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeVisibilityModelResponse(callApi(params, req, runtime));
}

ChangeVisibilityModelResponse Alibabacloud_Quickbi-public20220101::Client::changeVisibilityModel(shared_ptr<ChangeVisibilityModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeVisibilityModelWithOptions(request, runtime);
}

CheckReadableResponse Alibabacloud_Quickbi-public20220101::Client::checkReadableWithOptions(shared_ptr<CheckReadableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->worksId)) {
    query->insert(pair<string, string>("WorksId", *request->worksId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckReadable"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckReadableResponse(callApi(params, req, runtime));
}

CheckReadableResponse Alibabacloud_Quickbi-public20220101::Client::checkReadable(shared_ptr<CheckReadableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkReadableWithOptions(request, runtime);
}

CreateTicketResponse Alibabacloud_Quickbi-public20220101::Client::createTicketWithOptions(shared_ptr<CreateTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->accountType)) {
    query->insert(pair<string, long>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cmptId)) {
    query->insert(pair<string, string>("CmptId", *request->cmptId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expireTime)) {
    query->insert(pair<string, long>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalParam)) {
    query->insert(pair<string, string>("GlobalParam", *request->globalParam));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ticketNum)) {
    query->insert(pair<string, long>("TicketNum", *request->ticketNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkParam)) {
    query->insert(pair<string, string>("WatermarkParam", *request->watermarkParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->worksId)) {
    query->insert(pair<string, string>("WorksId", *request->worksId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTicket"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTicketResponse(callApi(params, req, runtime));
}

CreateTicketResponse Alibabacloud_Quickbi-public20220101::Client::createTicket(shared_ptr<CreateTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTicketWithOptions(request, runtime);
}

CreateTicket4CopilotResponse Alibabacloud_Quickbi-public20220101::Client::createTicket4CopilotWithOptions(shared_ptr<CreateTicket4CopilotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->accountType)) {
    query->insert(pair<string, long>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->copilotId)) {
    query->insert(pair<string, string>("CopilotId", *request->copilotId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expireTime)) {
    query->insert(pair<string, long>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ticketNum)) {
    query->insert(pair<string, long>("TicketNum", *request->ticketNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTicket4Copilot"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTicket4CopilotResponse(callApi(params, req, runtime));
}

CreateTicket4CopilotResponse Alibabacloud_Quickbi-public20220101::Client::createTicket4Copilot(shared_ptr<CreateTicket4CopilotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTicket4CopilotWithOptions(request, runtime);
}

CreateUserGroupResponse Alibabacloud_Quickbi-public20220101::Client::createUserGroupWithOptions(shared_ptr<CreateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->parentUserGroupId)) {
    query->insert(pair<string, string>("ParentUserGroupId", *request->parentUserGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupDescription)) {
    query->insert(pair<string, string>("UserGroupDescription", *request->userGroupDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupName)) {
    query->insert(pair<string, string>("UserGroupName", *request->userGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUserGroup"))},
    {"version", boost::any(string("2022-01-01"))},
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

CreateUserGroupResponse Alibabacloud_Quickbi-public20220101::Client::createUserGroup(shared_ptr<CreateUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserGroupWithOptions(request, runtime);
}

DataSetBloodResponse Alibabacloud_Quickbi-public20220101::Client::dataSetBloodWithOptions(shared_ptr<DataSetBloodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSetIds)) {
    query->insert(pair<string, string>("DataSetIds", *request->dataSetIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->worksType)) {
    query->insert(pair<string, string>("WorksType", *request->worksType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DataSetBlood"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DataSetBloodResponse(callApi(params, req, runtime));
}

DataSetBloodResponse Alibabacloud_Quickbi-public20220101::Client::dataSetBlood(shared_ptr<DataSetBloodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dataSetBloodWithOptions(request, runtime);
}

DataSourceBloodResponse Alibabacloud_Quickbi-public20220101::Client::dataSourceBloodWithOptions(shared_ptr<DataSourceBloodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    query->insert(pair<string, string>("DataSourceId", *request->dataSourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DataSourceBlood"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DataSourceBloodResponse(callApi(params, req, runtime));
}

DataSourceBloodResponse Alibabacloud_Quickbi-public20220101::Client::dataSourceBlood(shared_ptr<DataSourceBloodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dataSourceBloodWithOptions(request, runtime);
}

DelayTicketExpireTimeResponse Alibabacloud_Quickbi-public20220101::Client::delayTicketExpireTimeWithOptions(shared_ptr<DelayTicketExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->expireTime)) {
    query->insert(pair<string, long>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ticket)) {
    query->insert(pair<string, string>("Ticket", *request->ticket));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DelayTicketExpireTime"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DelayTicketExpireTimeResponse(callApi(params, req, runtime));
}

DelayTicketExpireTimeResponse Alibabacloud_Quickbi-public20220101::Client::delayTicketExpireTime(shared_ptr<DelayTicketExpireTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return delayTicketExpireTimeWithOptions(request, runtime);
}

DeleteDataLevelPermissionRuleUsersResponse Alibabacloud_Quickbi-public20220101::Client::deleteDataLevelPermissionRuleUsersWithOptions(shared_ptr<DeleteDataLevelPermissionRuleUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteUserModel)) {
    query->insert(pair<string, string>("DeleteUserModel", *request->deleteUserModel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataLevelPermissionRuleUsers"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataLevelPermissionRuleUsersResponse(callApi(params, req, runtime));
}

DeleteDataLevelPermissionRuleUsersResponse Alibabacloud_Quickbi-public20220101::Client::deleteDataLevelPermissionRuleUsers(shared_ptr<DeleteDataLevelPermissionRuleUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataLevelPermissionRuleUsersWithOptions(request, runtime);
}

DeleteDataLevelRuleConfigResponse Alibabacloud_Quickbi-public20220101::Client::deleteDataLevelRuleConfigWithOptions(shared_ptr<DeleteDataLevelRuleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cubeId)) {
    query->insert(pair<string, string>("CubeId", *request->cubeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataLevelRuleConfig"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataLevelRuleConfigResponse(callApi(params, req, runtime));
}

DeleteDataLevelRuleConfigResponse Alibabacloud_Quickbi-public20220101::Client::deleteDataLevelRuleConfig(shared_ptr<DeleteDataLevelRuleConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataLevelRuleConfigWithOptions(request, runtime);
}

DeleteTicketResponse Alibabacloud_Quickbi-public20220101::Client::deleteTicketWithOptions(shared_ptr<DeleteTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ticket)) {
    query->insert(pair<string, string>("Ticket", *request->ticket));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTicket"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTicketResponse(callApi(params, req, runtime));
}

DeleteTicketResponse Alibabacloud_Quickbi-public20220101::Client::deleteTicket(shared_ptr<DeleteTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTicketWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->transferUserId)) {
    query->insert(pair<string, string>("TransferUserId", *request->transferUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUser"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserResponse(callApi(params, req, runtime));
}

DeleteUserResponse Alibabacloud_Quickbi-public20220101::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

DeleteUserFromWorkspaceResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserFromWorkspaceWithOptions(shared_ptr<DeleteUserFromWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserFromWorkspace"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserFromWorkspaceResponse(callApi(params, req, runtime));
}

DeleteUserFromWorkspaceResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserFromWorkspace(shared_ptr<DeleteUserFromWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserFromWorkspaceWithOptions(request, runtime);
}

DeleteUserGroupResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserGroupWithOptions(shared_ptr<DeleteUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserGroup"))},
    {"version", boost::any(string("2022-01-01"))},
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

DeleteUserGroupResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserGroup(shared_ptr<DeleteUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserGroupWithOptions(request, runtime);
}

DeleteUserGroupMemberResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserGroupMemberWithOptions(shared_ptr<DeleteUserGroupMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserGroupMember"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserGroupMemberResponse(callApi(params, req, runtime));
}

DeleteUserGroupMemberResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserGroupMember(shared_ptr<DeleteUserGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserGroupMemberWithOptions(request, runtime);
}

DeleteUserGroupMembersResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserGroupMembersWithOptions(shared_ptr<DeleteUserGroupMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupIds)) {
    query->insert(pair<string, string>("UserGroupIds", *request->userGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserGroupMembers"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserGroupMembersResponse(callApi(params, req, runtime));
}

DeleteUserGroupMembersResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserGroupMembers(shared_ptr<DeleteUserGroupMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserGroupMembersWithOptions(request, runtime);
}

DeleteUserTagMetaResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserTagMetaWithOptions(shared_ptr<DeleteUserTagMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagId)) {
    query->insert(pair<string, string>("TagId", *request->tagId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserTagMeta"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserTagMetaResponse(callApi(params, req, runtime));
}

DeleteUserTagMetaResponse Alibabacloud_Quickbi-public20220101::Client::deleteUserTagMeta(shared_ptr<DeleteUserTagMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserTagMetaWithOptions(request, runtime);
}

GetMailTaskStatusResponse Alibabacloud_Quickbi-public20220101::Client::getMailTaskStatusWithOptions(shared_ptr<GetMailTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mailId)) {
    query->insert(pair<string, string>("MailId", *request->mailId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMailTaskStatus"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMailTaskStatusResponse(callApi(params, req, runtime));
}

GetMailTaskStatusResponse Alibabacloud_Quickbi-public20220101::Client::getMailTaskStatus(shared_ptr<GetMailTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMailTaskStatusWithOptions(request, runtime);
}

GetUserGroupInfoResponse Alibabacloud_Quickbi-public20220101::Client::getUserGroupInfoWithOptions(shared_ptr<GetUserGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserGroupInfo"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserGroupInfoResponse(callApi(params, req, runtime));
}

GetUserGroupInfoResponse Alibabacloud_Quickbi-public20220101::Client::getUserGroupInfo(shared_ptr<GetUserGroupInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserGroupInfoWithOptions(request, runtime);
}

GetWorksEmbedListResponse Alibabacloud_Quickbi-public20220101::Client::getWorksEmbedListWithOptions(shared_ptr<GetWorksEmbedListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->worksType)) {
    query->insert(pair<string, string>("WorksType", *request->worksType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wsId)) {
    query->insert(pair<string, string>("WsId", *request->wsId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorksEmbedList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorksEmbedListResponse(callApi(params, req, runtime));
}

GetWorksEmbedListResponse Alibabacloud_Quickbi-public20220101::Client::getWorksEmbedList(shared_ptr<GetWorksEmbedListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorksEmbedListWithOptions(request, runtime);
}

ListApiDatasourceResponse Alibabacloud_Quickbi-public20220101::Client::listApiDatasourceWithOptions(shared_ptr<ListApiDatasourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApiDatasource"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApiDatasourceResponse(callApi(params, req, runtime));
}

ListApiDatasourceResponse Alibabacloud_Quickbi-public20220101::Client::listApiDatasource(shared_ptr<ListApiDatasourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApiDatasourceWithOptions(request, runtime);
}

ListByUserGroupIdResponse Alibabacloud_Quickbi-public20220101::Client::listByUserGroupIdWithOptions(shared_ptr<ListByUserGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupIds)) {
    query->insert(pair<string, string>("UserGroupIds", *request->userGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListByUserGroupId"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListByUserGroupIdResponse(callApi(params, req, runtime));
}

ListByUserGroupIdResponse Alibabacloud_Quickbi-public20220101::Client::listByUserGroupId(shared_ptr<ListByUserGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listByUserGroupIdWithOptions(request, runtime);
}

ListCollectionsResponse Alibabacloud_Quickbi-public20220101::Client::listCollectionsWithOptions(shared_ptr<ListCollectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCollections"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCollectionsResponse(callApi(params, req, runtime));
}

ListCollectionsResponse Alibabacloud_Quickbi-public20220101::Client::listCollections(shared_ptr<ListCollectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCollectionsWithOptions(request, runtime);
}

ListCubeDataLevelPermissionConfigResponse Alibabacloud_Quickbi-public20220101::Client::listCubeDataLevelPermissionConfigWithOptions(shared_ptr<ListCubeDataLevelPermissionConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cubeId)) {
    query->insert(pair<string, string>("CubeId", *request->cubeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCubeDataLevelPermissionConfig"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCubeDataLevelPermissionConfigResponse(callApi(params, req, runtime));
}

ListCubeDataLevelPermissionConfigResponse Alibabacloud_Quickbi-public20220101::Client::listCubeDataLevelPermissionConfig(shared_ptr<ListCubeDataLevelPermissionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCubeDataLevelPermissionConfigWithOptions(request, runtime);
}

ListDataLevelPermissionWhiteListResponse Alibabacloud_Quickbi-public20220101::Client::listDataLevelPermissionWhiteListWithOptions(shared_ptr<ListDataLevelPermissionWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cubeId)) {
    query->insert(pair<string, string>("CubeId", *request->cubeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataLevelPermissionWhiteList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataLevelPermissionWhiteListResponse(callApi(params, req, runtime));
}

ListDataLevelPermissionWhiteListResponse Alibabacloud_Quickbi-public20220101::Client::listDataLevelPermissionWhiteList(shared_ptr<ListDataLevelPermissionWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataLevelPermissionWhiteListWithOptions(request, runtime);
}

ListFavoriteReportsResponse Alibabacloud_Quickbi-public20220101::Client::listFavoriteReportsWithOptions(shared_ptr<ListFavoriteReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->treeType)) {
    query->insert(pair<string, string>("TreeType", *request->treeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFavoriteReports"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFavoriteReportsResponse(callApi(params, req, runtime));
}

ListFavoriteReportsResponse Alibabacloud_Quickbi-public20220101::Client::listFavoriteReports(shared_ptr<ListFavoriteReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFavoriteReportsWithOptions(request, runtime);
}

ListOrganizationRoleUsersResponse Alibabacloud_Quickbi-public20220101::Client::listOrganizationRoleUsersWithOptions(shared_ptr<ListOrganizationRoleUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    query->insert(pair<string, long>("RoleId", *request->roleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrganizationRoleUsers"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrganizationRoleUsersResponse(callApi(params, req, runtime));
}

ListOrganizationRoleUsersResponse Alibabacloud_Quickbi-public20220101::Client::listOrganizationRoleUsers(shared_ptr<ListOrganizationRoleUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOrganizationRoleUsersWithOptions(request, runtime);
}

ListOrganizationRolesResponse Alibabacloud_Quickbi-public20220101::Client::listOrganizationRolesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrganizationRoles"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrganizationRolesResponse(callApi(params, req, runtime));
}

ListOrganizationRolesResponse Alibabacloud_Quickbi-public20220101::Client::listOrganizationRoles() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOrganizationRolesWithOptions(runtime);
}

ListPortalMenuAuthorizationResponse Alibabacloud_Quickbi-public20220101::Client::listPortalMenuAuthorizationWithOptions(shared_ptr<ListPortalMenuAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataPortalId)) {
    query->insert(pair<string, string>("DataPortalId", *request->dataPortalId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPortalMenuAuthorization"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPortalMenuAuthorizationResponse(callApi(params, req, runtime));
}

ListPortalMenuAuthorizationResponse Alibabacloud_Quickbi-public20220101::Client::listPortalMenuAuthorization(shared_ptr<ListPortalMenuAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPortalMenuAuthorizationWithOptions(request, runtime);
}

ListPortalMenusResponse Alibabacloud_Quickbi-public20220101::Client::listPortalMenusWithOptions(shared_ptr<ListPortalMenusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataPortalId)) {
    query->insert(pair<string, string>("DataPortalId", *request->dataPortalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPortalMenus"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPortalMenusResponse(callApi(params, req, runtime));
}

ListPortalMenusResponse Alibabacloud_Quickbi-public20220101::Client::listPortalMenus(shared_ptr<ListPortalMenusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPortalMenusWithOptions(request, runtime);
}

ListRecentViewReportsResponse Alibabacloud_Quickbi-public20220101::Client::listRecentViewReportsWithOptions(shared_ptr<ListRecentViewReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offsetDay)) {
    query->insert(pair<string, long>("OffsetDay", *request->offsetDay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryMode)) {
    query->insert(pair<string, string>("QueryMode", *request->queryMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->treeType)) {
    query->insert(pair<string, string>("TreeType", *request->treeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRecentViewReports"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRecentViewReportsResponse(callApi(params, req, runtime));
}

ListRecentViewReportsResponse Alibabacloud_Quickbi-public20220101::Client::listRecentViewReports(shared_ptr<ListRecentViewReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRecentViewReportsWithOptions(request, runtime);
}

ListSharedReportsResponse Alibabacloud_Quickbi-public20220101::Client::listSharedReportsWithOptions(shared_ptr<ListSharedReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->treeType)) {
    query->insert(pair<string, string>("TreeType", *request->treeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSharedReports"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSharedReportsResponse(callApi(params, req, runtime));
}

ListSharedReportsResponse Alibabacloud_Quickbi-public20220101::Client::listSharedReports(shared_ptr<ListSharedReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSharedReportsWithOptions(request, runtime);
}

ListUserGroupsByUserIdResponse Alibabacloud_Quickbi-public20220101::Client::listUserGroupsByUserIdWithOptions(shared_ptr<ListUserGroupsByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserGroupsByUserId"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserGroupsByUserIdResponse(callApi(params, req, runtime));
}

ListUserGroupsByUserIdResponse Alibabacloud_Quickbi-public20220101::Client::listUserGroupsByUserId(shared_ptr<ListUserGroupsByUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserGroupsByUserIdWithOptions(request, runtime);
}

ListWorkspaceRoleUsersResponse Alibabacloud_Quickbi-public20220101::Client::listWorkspaceRoleUsersWithOptions(shared_ptr<ListWorkspaceRoleUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    query->insert(pair<string, long>("RoleId", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkspaceRoleUsers"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkspaceRoleUsersResponse(callApi(params, req, runtime));
}

ListWorkspaceRoleUsersResponse Alibabacloud_Quickbi-public20220101::Client::listWorkspaceRoleUsers(shared_ptr<ListWorkspaceRoleUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkspaceRoleUsersWithOptions(request, runtime);
}

ListWorkspaceRolesResponse Alibabacloud_Quickbi-public20220101::Client::listWorkspaceRolesWithOptions(shared_ptr<ListWorkspaceRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkspaceRoles"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkspaceRolesResponse(callApi(params, req, runtime));
}

ListWorkspaceRolesResponse Alibabacloud_Quickbi-public20220101::Client::listWorkspaceRoles(shared_ptr<ListWorkspaceRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkspaceRolesWithOptions(request, runtime);
}

ManualRunMailTaskResponse Alibabacloud_Quickbi-public20220101::Client::manualRunMailTaskWithOptions(shared_ptr<ManualRunMailTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mailId)) {
    query->insert(pair<string, string>("MailId", *request->mailId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ManualRunMailTask"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ManualRunMailTaskResponse(callApi(params, req, runtime));
}

ManualRunMailTaskResponse Alibabacloud_Quickbi-public20220101::Client::manualRunMailTask(shared_ptr<ManualRunMailTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return manualRunMailTaskWithOptions(request, runtime);
}

ModifyApiDatasourceParametersResponse Alibabacloud_Quickbi-public20220101::Client::modifyApiDatasourceParametersWithOptions(shared_ptr<ModifyApiDatasourceParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    query->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApiDatasourceParameters"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyApiDatasourceParametersResponse(callApi(params, req, runtime));
}

ModifyApiDatasourceParametersResponse Alibabacloud_Quickbi-public20220101::Client::modifyApiDatasourceParameters(shared_ptr<ModifyApiDatasourceParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiDatasourceParametersWithOptions(request, runtime);
}

ModifyCopilotEmbedConfigResponse Alibabacloud_Quickbi-public20220101::Client::modifyCopilotEmbedConfigWithOptions(shared_ptr<ModifyCopilotEmbedConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentName)) {
    query->insert(pair<string, string>("AgentName", *request->agentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->copilotId)) {
    query->insert(pair<string, string>("CopilotId", *request->copilotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataRange)) {
    query->insert(pair<string, string>("DataRange", *request->dataRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCopilotEmbedConfig"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCopilotEmbedConfigResponse(callApi(params, req, runtime));
}

ModifyCopilotEmbedConfigResponse Alibabacloud_Quickbi-public20220101::Client::modifyCopilotEmbedConfig(shared_ptr<ModifyCopilotEmbedConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCopilotEmbedConfigWithOptions(request, runtime);
}

QueryApprovalInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryApprovalInfoWithOptions(shared_ptr<QueryApprovalInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryApprovalInfo"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryApprovalInfoResponse(callApi(params, req, runtime));
}

QueryApprovalInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryApprovalInfo(shared_ptr<QueryApprovalInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryApprovalInfoWithOptions(request, runtime);
}

QueryAuditLogResponse Alibabacloud_Quickbi-public20220101::Client::queryAuditLogWithOptions(shared_ptr<QueryAuditLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logType)) {
    query->insert(pair<string, string>("LogType", *request->logType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorId)) {
    query->insert(pair<string, string>("OperatorId", *request->operatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorTypes)) {
    query->insert(pair<string, string>("OperatorTypes", *request->operatorTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAuditLog"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAuditLogResponse(callApi(params, req, runtime));
}

QueryAuditLogResponse Alibabacloud_Quickbi-public20220101::Client::queryAuditLog(shared_ptr<QueryAuditLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAuditLogWithOptions(request, runtime);
}

QueryComponentPerformanceResponse Alibabacloud_Quickbi-public20220101::Client::queryComponentPerformanceWithOptions(shared_ptr<QueryComponentPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->costTimeAvgMin)) {
    query->insert(pair<string, long>("CostTimeAvgMin", *request->costTimeAvgMin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    query->insert(pair<string, string>("ReportId", *request->reportId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryComponentPerformance"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryComponentPerformanceResponse(callApi(params, req, runtime));
}

QueryComponentPerformanceResponse Alibabacloud_Quickbi-public20220101::Client::queryComponentPerformance(shared_ptr<QueryComponentPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryComponentPerformanceWithOptions(request, runtime);
}

QueryCopilotEmbedConfigResponse Alibabacloud_Quickbi-public20220101::Client::queryCopilotEmbedConfigWithOptions(shared_ptr<QueryCopilotEmbedConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCopilotEmbedConfig"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCopilotEmbedConfigResponse(callApi(params, req, runtime));
}

QueryCopilotEmbedConfigResponse Alibabacloud_Quickbi-public20220101::Client::queryCopilotEmbedConfig(shared_ptr<QueryCopilotEmbedConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCopilotEmbedConfigWithOptions(request, runtime);
}

QueryCubeOptimizationResponse Alibabacloud_Quickbi-public20220101::Client::queryCubeOptimizationWithOptions(shared_ptr<QueryCubeOptimizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCubeOptimization"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCubeOptimizationResponse(callApi(params, req, runtime));
}

QueryCubeOptimizationResponse Alibabacloud_Quickbi-public20220101::Client::queryCubeOptimization(shared_ptr<QueryCubeOptimizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCubeOptimizationWithOptions(request, runtime);
}

QueryCubePerformanceResponse Alibabacloud_Quickbi-public20220101::Client::queryCubePerformanceWithOptions(shared_ptr<QueryCubePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->costTimeAvgMin)) {
    query->insert(pair<string, long>("CostTimeAvgMin", *request->costTimeAvgMin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cubeId)) {
    query->insert(pair<string, string>("CubeId", *request->cubeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCubePerformance"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCubePerformanceResponse(callApi(params, req, runtime));
}

QueryCubePerformanceResponse Alibabacloud_Quickbi-public20220101::Client::queryCubePerformance(shared_ptr<QueryCubePerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCubePerformanceWithOptions(request, runtime);
}

QueryDataResponse Alibabacloud_Quickbi-public20220101::Client::queryDataWithOptions(shared_ptr<QueryDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conditions)) {
    query->insert(pair<string, string>("Conditions", *request->conditions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnFields)) {
    query->insert(pair<string, string>("ReturnFields", *request->returnFields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryData"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDataResponse(callApi(params, req, runtime));
}

QueryDataResponse Alibabacloud_Quickbi-public20220101::Client::queryData(shared_ptr<QueryDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDataWithOptions(request, runtime);
}

QueryDataRangeResponse Alibabacloud_Quickbi-public20220101::Client::queryDataRangeWithOptions(shared_ptr<QueryDataRangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDataRange"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDataRangeResponse(callApi(params, req, runtime));
}

QueryDataRangeResponse Alibabacloud_Quickbi-public20220101::Client::queryDataRange(shared_ptr<QueryDataRangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDataRangeWithOptions(request, runtime);
}

QueryDataServiceResponse Alibabacloud_Quickbi-public20220101::Client::queryDataServiceWithOptions(shared_ptr<QueryDataServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conditions)) {
    query->insert(pair<string, string>("Conditions", *request->conditions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnFields)) {
    query->insert(pair<string, string>("ReturnFields", *request->returnFields));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDataService"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDataServiceResponse(callApi(params, req, runtime));
}

QueryDataServiceResponse Alibabacloud_Quickbi-public20220101::Client::queryDataService(shared_ptr<QueryDataServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDataServiceWithOptions(request, runtime);
}

QueryDataServiceListResponse Alibabacloud_Quickbi-public20220101::Client::queryDataServiceListWithOptions(shared_ptr<QueryDataServiceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDataServiceList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDataServiceListResponse(callApi(params, req, runtime));
}

QueryDataServiceListResponse Alibabacloud_Quickbi-public20220101::Client::queryDataServiceList(shared_ptr<QueryDataServiceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDataServiceListWithOptions(request, runtime);
}

QueryDatasetDetailInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryDatasetDetailInfoWithOptions(shared_ptr<QueryDatasetDetailInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetId)) {
    query->insert(pair<string, string>("DatasetId", *request->datasetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDatasetDetailInfo"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDatasetDetailInfoResponse(callApi(params, req, runtime));
}

QueryDatasetDetailInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryDatasetDetailInfo(shared_ptr<QueryDatasetDetailInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDatasetDetailInfoWithOptions(request, runtime);
}

QueryDatasetInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryDatasetInfoWithOptions(shared_ptr<QueryDatasetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetId)) {
    query->insert(pair<string, string>("DatasetId", *request->datasetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDatasetInfo"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDatasetInfoResponse(callApi(params, req, runtime));
}

QueryDatasetInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryDatasetInfo(shared_ptr<QueryDatasetInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDatasetInfoWithOptions(request, runtime);
}

QueryDatasetListResponse Alibabacloud_Quickbi-public20220101::Client::queryDatasetListWithOptions(shared_ptr<QueryDatasetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withChildren)) {
    query->insert(pair<string, bool>("WithChildren", *request->withChildren));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDatasetList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDatasetListResponse(callApi(params, req, runtime));
}

QueryDatasetListResponse Alibabacloud_Quickbi-public20220101::Client::queryDatasetList(shared_ptr<QueryDatasetListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDatasetListWithOptions(request, runtime);
}

QueryDatasetSwitchInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryDatasetSwitchInfoWithOptions(shared_ptr<QueryDatasetSwitchInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cubeId)) {
    query->insert(pair<string, string>("CubeId", *request->cubeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDatasetSwitchInfo"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDatasetSwitchInfoResponse(callApi(params, req, runtime));
}

QueryDatasetSwitchInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryDatasetSwitchInfo(shared_ptr<QueryDatasetSwitchInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDatasetSwitchInfoWithOptions(request, runtime);
}

QueryEmbeddedInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryEmbeddedInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEmbeddedInfo"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEmbeddedInfoResponse(callApi(params, req, runtime));
}

QueryEmbeddedInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryEmbeddedInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEmbeddedInfoWithOptions(runtime);
}

QueryEmbeddedStatusResponse Alibabacloud_Quickbi-public20220101::Client::queryEmbeddedStatusWithOptions(shared_ptr<QueryEmbeddedStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->worksId)) {
    query->insert(pair<string, string>("WorksId", *request->worksId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEmbeddedStatus"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEmbeddedStatusResponse(callApi(params, req, runtime));
}

QueryEmbeddedStatusResponse Alibabacloud_Quickbi-public20220101::Client::queryEmbeddedStatus(shared_ptr<QueryEmbeddedStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEmbeddedStatusWithOptions(request, runtime);
}

QueryOrganizationRoleConfigResponse Alibabacloud_Quickbi-public20220101::Client::queryOrganizationRoleConfigWithOptions(shared_ptr<QueryOrganizationRoleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    query->insert(pair<string, long>("RoleId", *request->roleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrganizationRoleConfig"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrganizationRoleConfigResponse(callApi(params, req, runtime));
}

QueryOrganizationRoleConfigResponse Alibabacloud_Quickbi-public20220101::Client::queryOrganizationRoleConfig(shared_ptr<QueryOrganizationRoleConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrganizationRoleConfigWithOptions(request, runtime);
}

QueryOrganizationWorkspaceListResponse Alibabacloud_Quickbi-public20220101::Client::queryOrganizationWorkspaceListWithOptions(shared_ptr<QueryOrganizationWorkspaceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrganizationWorkspaceList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrganizationWorkspaceListResponse(callApi(params, req, runtime));
}

QueryOrganizationWorkspaceListResponse Alibabacloud_Quickbi-public20220101::Client::queryOrganizationWorkspaceList(shared_ptr<QueryOrganizationWorkspaceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrganizationWorkspaceListWithOptions(request, runtime);
}

QueryReadableResourcesListByUserIdResponse Alibabacloud_Quickbi-public20220101::Client::queryReadableResourcesListByUserIdWithOptions(shared_ptr<QueryReadableResourcesListByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryReadableResourcesListByUserId"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryReadableResourcesListByUserIdResponse(callApi(params, req, runtime));
}

QueryReadableResourcesListByUserIdResponse Alibabacloud_Quickbi-public20220101::Client::queryReadableResourcesListByUserId(shared_ptr<QueryReadableResourcesListByUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryReadableResourcesListByUserIdWithOptions(request, runtime);
}

QueryReportPerformanceResponse Alibabacloud_Quickbi-public20220101::Client::queryReportPerformanceWithOptions(shared_ptr<QueryReportPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->costTimeAvgMin)) {
    query->insert(pair<string, long>("CostTimeAvgMin", *request->costTimeAvgMin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    query->insert(pair<string, string>("ReportId", *request->reportId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryReportPerformance"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryReportPerformanceResponse(callApi(params, req, runtime));
}

QueryReportPerformanceResponse Alibabacloud_Quickbi-public20220101::Client::queryReportPerformance(shared_ptr<QueryReportPerformanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryReportPerformanceWithOptions(request, runtime);
}

QueryShareListResponse Alibabacloud_Quickbi-public20220101::Client::queryShareListWithOptions(shared_ptr<QueryShareListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    query->insert(pair<string, string>("ReportId", *request->reportId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryShareList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryShareListResponse(callApi(params, req, runtime));
}

QueryShareListResponse Alibabacloud_Quickbi-public20220101::Client::queryShareList(shared_ptr<QueryShareListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryShareListWithOptions(request, runtime);
}

QuerySharesToUserListResponse Alibabacloud_Quickbi-public20220101::Client::querySharesToUserListWithOptions(shared_ptr<QuerySharesToUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySharesToUserList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySharesToUserListResponse(callApi(params, req, runtime));
}

QuerySharesToUserListResponse Alibabacloud_Quickbi-public20220101::Client::querySharesToUserList(shared_ptr<QuerySharesToUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySharesToUserListWithOptions(request, runtime);
}

QueryTicketInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryTicketInfoWithOptions(shared_ptr<QueryTicketInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ticket)) {
    query->insert(pair<string, string>("Ticket", *request->ticket));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTicketInfo"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTicketInfoResponse(callApi(params, req, runtime));
}

QueryTicketInfoResponse Alibabacloud_Quickbi-public20220101::Client::queryTicketInfo(shared_ptr<QueryTicketInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTicketInfoWithOptions(request, runtime);
}

QueryUserGroupListByParentIdResponse Alibabacloud_Quickbi-public20220101::Client::queryUserGroupListByParentIdWithOptions(shared_ptr<QueryUserGroupListByParentIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->parentUserGroupId)) {
    query->insert(pair<string, string>("ParentUserGroupId", *request->parentUserGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserGroupListByParentId"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserGroupListByParentIdResponse(callApi(params, req, runtime));
}

QueryUserGroupListByParentIdResponse Alibabacloud_Quickbi-public20220101::Client::queryUserGroupListByParentId(shared_ptr<QueryUserGroupListByParentIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserGroupListByParentIdWithOptions(request, runtime);
}

QueryUserGroupMemberResponse Alibabacloud_Quickbi-public20220101::Client::queryUserGroupMemberWithOptions(shared_ptr<QueryUserGroupMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserGroupMember"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserGroupMemberResponse(callApi(params, req, runtime));
}

QueryUserGroupMemberResponse Alibabacloud_Quickbi-public20220101::Client::queryUserGroupMember(shared_ptr<QueryUserGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserGroupMemberWithOptions(request, runtime);
}

QueryUserInfoByAccountResponse Alibabacloud_Quickbi-public20220101::Client::queryUserInfoByAccountWithOptions(shared_ptr<QueryUserInfoByAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    query->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentAccountName)) {
    query->insert(pair<string, string>("ParentAccountName", *request->parentAccountName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserInfoByAccount"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserInfoByAccountResponse(callApi(params, req, runtime));
}

QueryUserInfoByAccountResponse Alibabacloud_Quickbi-public20220101::Client::queryUserInfoByAccount(shared_ptr<QueryUserInfoByAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserInfoByAccountWithOptions(request, runtime);
}

QueryUserInfoByUserIdResponse Alibabacloud_Quickbi-public20220101::Client::queryUserInfoByUserIdWithOptions(shared_ptr<QueryUserInfoByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserInfoByUserId"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserInfoByUserIdResponse(callApi(params, req, runtime));
}

QueryUserInfoByUserIdResponse Alibabacloud_Quickbi-public20220101::Client::queryUserInfoByUserId(shared_ptr<QueryUserInfoByUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserInfoByUserIdWithOptions(request, runtime);
}

QueryUserListResponse Alibabacloud_Quickbi-public20220101::Client::queryUserListWithOptions(shared_ptr<QueryUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserListResponse(callApi(params, req, runtime));
}

QueryUserListResponse Alibabacloud_Quickbi-public20220101::Client::queryUserList(shared_ptr<QueryUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserListWithOptions(request, runtime);
}

QueryUserRoleInfoInWorkspaceResponse Alibabacloud_Quickbi-public20220101::Client::queryUserRoleInfoInWorkspaceWithOptions(shared_ptr<QueryUserRoleInfoInWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserRoleInfoInWorkspace"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserRoleInfoInWorkspaceResponse(callApi(params, req, runtime));
}

QueryUserRoleInfoInWorkspaceResponse Alibabacloud_Quickbi-public20220101::Client::queryUserRoleInfoInWorkspace(shared_ptr<QueryUserRoleInfoInWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserRoleInfoInWorkspaceWithOptions(request, runtime);
}

QueryUserTagMetaListResponse Alibabacloud_Quickbi-public20220101::Client::queryUserTagMetaListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserTagMetaList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserTagMetaListResponse(callApi(params, req, runtime));
}

QueryUserTagMetaListResponse Alibabacloud_Quickbi-public20220101::Client::queryUserTagMetaList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserTagMetaListWithOptions(runtime);
}

QueryUserTagValueListResponse Alibabacloud_Quickbi-public20220101::Client::queryUserTagValueListWithOptions(shared_ptr<QueryUserTagValueListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserTagValueList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserTagValueListResponse(callApi(params, req, runtime));
}

QueryUserTagValueListResponse Alibabacloud_Quickbi-public20220101::Client::queryUserTagValueList(shared_ptr<QueryUserTagValueListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserTagValueListWithOptions(request, runtime);
}

QueryWorksResponse Alibabacloud_Quickbi-public20220101::Client::queryWorksWithOptions(shared_ptr<QueryWorksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->worksId)) {
    query->insert(pair<string, string>("WorksId", *request->worksId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWorks"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWorksResponse(callApi(params, req, runtime));
}

QueryWorksResponse Alibabacloud_Quickbi-public20220101::Client::queryWorks(shared_ptr<QueryWorksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWorksWithOptions(request, runtime);
}

QueryWorksBloodRelationshipResponse Alibabacloud_Quickbi-public20220101::Client::queryWorksBloodRelationshipWithOptions(shared_ptr<QueryWorksBloodRelationshipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->worksId)) {
    query->insert(pair<string, string>("WorksId", *request->worksId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWorksBloodRelationship"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWorksBloodRelationshipResponse(callApi(params, req, runtime));
}

QueryWorksBloodRelationshipResponse Alibabacloud_Quickbi-public20220101::Client::queryWorksBloodRelationship(shared_ptr<QueryWorksBloodRelationshipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWorksBloodRelationshipWithOptions(request, runtime);
}

QueryWorksByOrganizationResponse Alibabacloud_Quickbi-public20220101::Client::queryWorksByOrganizationWithOptions(shared_ptr<QueryWorksByOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->thirdPartAuthFlag)) {
    query->insert(pair<string, long>("ThirdPartAuthFlag", *request->thirdPartAuthFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->worksType)) {
    query->insert(pair<string, string>("WorksType", *request->worksType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWorksByOrganization"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWorksByOrganizationResponse(callApi(params, req, runtime));
}

QueryWorksByOrganizationResponse Alibabacloud_Quickbi-public20220101::Client::queryWorksByOrganization(shared_ptr<QueryWorksByOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWorksByOrganizationWithOptions(request, runtime);
}

QueryWorksByWorkspaceResponse Alibabacloud_Quickbi-public20220101::Client::queryWorksByWorkspaceWithOptions(shared_ptr<QueryWorksByWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->thirdPartAuthFlag)) {
    query->insert(pair<string, long>("ThirdPartAuthFlag", *request->thirdPartAuthFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->worksType)) {
    query->insert(pair<string, string>("WorksType", *request->worksType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWorksByWorkspace"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWorksByWorkspaceResponse(callApi(params, req, runtime));
}

QueryWorksByWorkspaceResponse Alibabacloud_Quickbi-public20220101::Client::queryWorksByWorkspace(shared_ptr<QueryWorksByWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWorksByWorkspaceWithOptions(request, runtime);
}

QueryWorkspaceRoleConfigResponse Alibabacloud_Quickbi-public20220101::Client::queryWorkspaceRoleConfigWithOptions(shared_ptr<QueryWorkspaceRoleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    query->insert(pair<string, long>("RoleId", *request->roleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWorkspaceRoleConfig"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWorkspaceRoleConfigResponse(callApi(params, req, runtime));
}

QueryWorkspaceRoleConfigResponse Alibabacloud_Quickbi-public20220101::Client::queryWorkspaceRoleConfig(shared_ptr<QueryWorkspaceRoleConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWorkspaceRoleConfigWithOptions(request, runtime);
}

QueryWorkspaceUserListResponse Alibabacloud_Quickbi-public20220101::Client::queryWorkspaceUserListWithOptions(shared_ptr<QueryWorkspaceUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWorkspaceUserList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWorkspaceUserListResponse(callApi(params, req, runtime));
}

QueryWorkspaceUserListResponse Alibabacloud_Quickbi-public20220101::Client::queryWorkspaceUserList(shared_ptr<QueryWorkspaceUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWorkspaceUserListWithOptions(request, runtime);
}

ResultCallbackResponse Alibabacloud_Quickbi-public20220101::Client::resultCallbackWithOptions(shared_ptr<ResultCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationId)) {
    query->insert(pair<string, string>("ApplicationId", *request->applicationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->handleReason)) {
    query->insert(pair<string, string>("HandleReason", *request->handleReason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResultCallback"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResultCallbackResponse(callApi(params, req, runtime));
}

ResultCallbackResponse Alibabacloud_Quickbi-public20220101::Client::resultCallback(shared_ptr<ResultCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resultCallbackWithOptions(request, runtime);
}

SaveFavoritesResponse Alibabacloud_Quickbi-public20220101::Client::saveFavoritesWithOptions(shared_ptr<SaveFavoritesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->worksId)) {
    query->insert(pair<string, string>("WorksId", *request->worksId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveFavorites"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveFavoritesResponse(callApi(params, req, runtime));
}

SaveFavoritesResponse Alibabacloud_Quickbi-public20220101::Client::saveFavorites(shared_ptr<SaveFavoritesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveFavoritesWithOptions(request, runtime);
}

SetDataLevelPermissionExtraConfigResponse Alibabacloud_Quickbi-public20220101::Client::setDataLevelPermissionExtraConfigWithOptions(shared_ptr<SetDataLevelPermissionExtraConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cubeId)) {
    query->insert(pair<string, string>("CubeId", *request->cubeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->missHitPolicy)) {
    query->insert(pair<string, string>("MissHitPolicy", *request->missHitPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDataLevelPermissionExtraConfig"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDataLevelPermissionExtraConfigResponse(callApi(params, req, runtime));
}

SetDataLevelPermissionExtraConfigResponse Alibabacloud_Quickbi-public20220101::Client::setDataLevelPermissionExtraConfig(shared_ptr<SetDataLevelPermissionExtraConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDataLevelPermissionExtraConfigWithOptions(request, runtime);
}

SetDataLevelPermissionRuleConfigResponse Alibabacloud_Quickbi-public20220101::Client::setDataLevelPermissionRuleConfigWithOptions(shared_ptr<SetDataLevelPermissionRuleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleModel)) {
    query->insert(pair<string, string>("RuleModel", *request->ruleModel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDataLevelPermissionRuleConfig"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDataLevelPermissionRuleConfigResponse(callApi(params, req, runtime));
}

SetDataLevelPermissionRuleConfigResponse Alibabacloud_Quickbi-public20220101::Client::setDataLevelPermissionRuleConfig(shared_ptr<SetDataLevelPermissionRuleConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDataLevelPermissionRuleConfigWithOptions(request, runtime);
}

SetDataLevelPermissionWhiteListResponse Alibabacloud_Quickbi-public20220101::Client::setDataLevelPermissionWhiteListWithOptions(shared_ptr<SetDataLevelPermissionWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->whiteListModel)) {
    query->insert(pair<string, string>("WhiteListModel", *request->whiteListModel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDataLevelPermissionWhiteList"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDataLevelPermissionWhiteListResponse(callApi(params, req, runtime));
}

SetDataLevelPermissionWhiteListResponse Alibabacloud_Quickbi-public20220101::Client::setDataLevelPermissionWhiteList(shared_ptr<SetDataLevelPermissionWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDataLevelPermissionWhiteListWithOptions(request, runtime);
}

UpdateDataLevelPermissionStatusResponse Alibabacloud_Quickbi-public20220101::Client::updateDataLevelPermissionStatusWithOptions(shared_ptr<UpdateDataLevelPermissionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cubeId)) {
    query->insert(pair<string, string>("CubeId", *request->cubeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isOpen)) {
    query->insert(pair<string, long>("IsOpen", *request->isOpen));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataLevelPermissionStatus"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataLevelPermissionStatusResponse(callApi(params, req, runtime));
}

UpdateDataLevelPermissionStatusResponse Alibabacloud_Quickbi-public20220101::Client::updateDataLevelPermissionStatus(shared_ptr<UpdateDataLevelPermissionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataLevelPermissionStatusWithOptions(request, runtime);
}

UpdateEmbeddedStatusResponse Alibabacloud_Quickbi-public20220101::Client::updateEmbeddedStatusWithOptions(shared_ptr<UpdateEmbeddedStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->thirdPartAuthFlag)) {
    query->insert(pair<string, bool>("ThirdPartAuthFlag", *request->thirdPartAuthFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->worksId)) {
    query->insert(pair<string, string>("WorksId", *request->worksId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEmbeddedStatus"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEmbeddedStatusResponse(callApi(params, req, runtime));
}

UpdateEmbeddedStatusResponse Alibabacloud_Quickbi-public20220101::Client::updateEmbeddedStatus(shared_ptr<UpdateEmbeddedStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEmbeddedStatusWithOptions(request, runtime);
}

UpdateTicketNumResponse Alibabacloud_Quickbi-public20220101::Client::updateTicketNumWithOptions(shared_ptr<UpdateTicketNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ticket)) {
    query->insert(pair<string, string>("Ticket", *request->ticket));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ticketNum)) {
    query->insert(pair<string, long>("TicketNum", *request->ticketNum));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTicketNum"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTicketNumResponse(callApi(params, req, runtime));
}

UpdateTicketNumResponse Alibabacloud_Quickbi-public20220101::Client::updateTicketNum(shared_ptr<UpdateTicketNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTicketNumWithOptions(request, runtime);
}

UpdateUserResponse Alibabacloud_Quickbi-public20220101::Client::updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->adminUser)) {
    query->insert(pair<string, bool>("AdminUser", *request->adminUser));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->authAdminUser)) {
    query->insert(pair<string, bool>("AuthAdminUser", *request->authAdminUser));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDeleted)) {
    query->insert(pair<string, bool>("IsDeleted", *request->isDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nickName)) {
    query->insert(pair<string, string>("NickName", *request->nickName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleIds)) {
    query->insert(pair<string, string>("RoleIds", *request->roleIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userType)) {
    query->insert(pair<string, long>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUser"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserResponse(callApi(params, req, runtime));
}

UpdateUserResponse Alibabacloud_Quickbi-public20220101::Client::updateUser(shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserWithOptions(request, runtime);
}

UpdateUserGroupResponse Alibabacloud_Quickbi-public20220101::Client::updateUserGroupWithOptions(shared_ptr<UpdateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupDescription)) {
    query->insert(pair<string, string>("UserGroupDescription", *request->userGroupDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupName)) {
    query->insert(pair<string, string>("UserGroupName", *request->userGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserGroup"))},
    {"version", boost::any(string("2022-01-01"))},
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

UpdateUserGroupResponse Alibabacloud_Quickbi-public20220101::Client::updateUserGroup(shared_ptr<UpdateUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserGroupWithOptions(request, runtime);
}

UpdateUserTagMetaResponse Alibabacloud_Quickbi-public20220101::Client::updateUserTagMetaWithOptions(shared_ptr<UpdateUserTagMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagDescription)) {
    query->insert(pair<string, string>("TagDescription", *request->tagDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagId)) {
    query->insert(pair<string, string>("TagId", *request->tagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserTagMeta"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserTagMetaResponse(callApi(params, req, runtime));
}

UpdateUserTagMetaResponse Alibabacloud_Quickbi-public20220101::Client::updateUserTagMeta(shared_ptr<UpdateUserTagMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserTagMetaWithOptions(request, runtime);
}

UpdateUserTagValueResponse Alibabacloud_Quickbi-public20220101::Client::updateUserTagValueWithOptions(shared_ptr<UpdateUserTagValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagId)) {
    query->insert(pair<string, string>("TagId", *request->tagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValue)) {
    query->insert(pair<string, string>("TagValue", *request->tagValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserTagValue"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserTagValueResponse(callApi(params, req, runtime));
}

UpdateUserTagValueResponse Alibabacloud_Quickbi-public20220101::Client::updateUserTagValue(shared_ptr<UpdateUserTagValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserTagValueWithOptions(request, runtime);
}

UpdateWorkspaceUserRoleResponse Alibabacloud_Quickbi-public20220101::Client::updateWorkspaceUserRoleWithOptions(shared_ptr<UpdateWorkspaceUserRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    query->insert(pair<string, long>("RoleId", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkspaceUserRole"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkspaceUserRoleResponse(callApi(params, req, runtime));
}

UpdateWorkspaceUserRoleResponse Alibabacloud_Quickbi-public20220101::Client::updateWorkspaceUserRole(shared_ptr<UpdateWorkspaceUserRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWorkspaceUserRoleWithOptions(request, runtime);
}

UpdateWorkspaceUsersRoleResponse Alibabacloud_Quickbi-public20220101::Client::updateWorkspaceUsersRoleWithOptions(shared_ptr<UpdateWorkspaceUsersRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->roleId)) {
    query->insert(pair<string, long>("RoleId", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    query->insert(pair<string, string>("UserIds", *request->userIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkspaceUsersRole"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkspaceUsersRoleResponse(callApi(params, req, runtime));
}

UpdateWorkspaceUsersRoleResponse Alibabacloud_Quickbi-public20220101::Client::updateWorkspaceUsersRole(shared_ptr<UpdateWorkspaceUsersRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWorkspaceUsersRoleWithOptions(request, runtime);
}

WithdrawAllUserGroupsResponse Alibabacloud_Quickbi-public20220101::Client::withdrawAllUserGroupsWithOptions(shared_ptr<WithdrawAllUserGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WithdrawAllUserGroups"))},
    {"version", boost::any(string("2022-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WithdrawAllUserGroupsResponse(callApi(params, req, runtime));
}

WithdrawAllUserGroupsResponse Alibabacloud_Quickbi-public20220101::Client::withdrawAllUserGroups(shared_ptr<WithdrawAllUserGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return withdrawAllUserGroupsWithOptions(request, runtime);
}

