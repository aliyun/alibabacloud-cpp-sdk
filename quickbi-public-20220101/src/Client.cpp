#include <darabonba/Core.hpp>
#include <alibabacloud/QuickbiPublic20220101.hpp>
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
using namespace AlibabaCloud::QuickbiPublic20220101::Models;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{

AlibabaCloud::QuickbiPublic20220101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("quickbi-public", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Add selected groups of people incrementally for a single row and column permission rule.
 *
 * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.\\n
 *
 * @param request AddDataLevelPermissionRuleUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDataLevelPermissionRuleUsersResponse
 */
AddDataLevelPermissionRuleUsersResponse Client::addDataLevelPermissionRuleUsersWithOptions(const AddDataLevelPermissionRuleUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddUserModel()) {
    query["AddUserModel"] = request.addUserModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDataLevelPermissionRuleUsers"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDataLevelPermissionRuleUsersResponse>();
}

/**
 * @summary Add selected groups of people incrementally for a single row and column permission rule.
 *
 * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.\\n
 *
 * @param request AddDataLevelPermissionRuleUsersRequest
 * @return AddDataLevelPermissionRuleUsersResponse
 */
AddDataLevelPermissionRuleUsersResponse Client::addDataLevelPermissionRuleUsers(const AddDataLevelPermissionRuleUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDataLevelPermissionRuleUsersWithOptions(request, runtime);
}

/**
 * @summary 43342***435,1553a****41231
 *
 * @description ROW_LEVEL
 *
 * @param request AddDataLevelPermissionWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDataLevelPermissionWhiteListResponse
 */
AddDataLevelPermissionWhiteListResponse Client::addDataLevelPermissionWhiteListWithOptions(const AddDataLevelPermissionWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasTargetIds()) {
    query["TargetIds"] = request.targetIds();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.targetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDataLevelPermissionWhiteList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDataLevelPermissionWhiteListResponse>();
}

/**
 * @summary 43342***435,1553a****41231
 *
 * @description ROW_LEVEL
 *
 * @param request AddDataLevelPermissionWhiteListRequest
 * @return AddDataLevelPermissionWhiteListResponse
 */
AddDataLevelPermissionWhiteListResponse Client::addDataLevelPermissionWhiteList(const AddDataLevelPermissionWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDataLevelPermissionWhiteListWithOptions(request, runtime);
}

/**
 * @summary 创建数据源
 *
 * @param request AddDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDataSourceResponse
 */
AddDataSourceResponse Client::addDataSourceWithOptions(const AddDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddModel()) {
    query["AddModel"] = request.addModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDataSource"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDataSourceResponse>();
}

/**
 * @summary 创建数据源
 *
 * @param request AddDataSourceRequest
 * @return AddDataSourceResponse
 */
AddDataSourceResponse Client::addDataSource(const AddDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDataSourceWithOptions(request, runtime);
}

/**
 * @summary Add a sharing configuration for data works.
 *
 * @param request AddShareReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddShareReportResponse
 */
AddShareReportResponse Client::addShareReportWithOptions(const AddShareReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthPoint()) {
    query["AuthPoint"] = request.authPoint();
  }

  if (!!request.hasExpireDate()) {
    query["ExpireDate"] = request.expireDate();
  }

  if (!!request.hasShareToId()) {
    query["ShareToId"] = request.shareToId();
  }

  if (!!request.hasShareToType()) {
    query["ShareToType"] = request.shareToType();
  }

  if (!!request.hasWorksId()) {
    query["WorksId"] = request.worksId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddShareReport"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddShareReportResponse>();
}

/**
 * @summary Add a sharing configuration for data works.
 *
 * @param request AddShareReportRequest
 * @return AddShareReportResponse
 */
AddShareReportResponse Client::addShareReport(const AddShareReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addShareReportWithOptions(request, runtime);
}

/**
 * @summary Add an organization member.
 *
 * @param request AddUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserResponse
 */
AddUserResponse Client::addUserWithOptions(const AddUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAdminUser()) {
    query["AdminUser"] = request.adminUser();
  }

  if (!!request.hasAuthAdminUser()) {
    query["AuthAdminUser"] = request.authAdminUser();
  }

  if (!!request.hasNickName()) {
    query["NickName"] = request.nickName();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.userType();
  }

  json body = {};
  if (!!request.hasRoleIds()) {
    body["RoleIds"] = request.roleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddUser"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserResponse>();
}

/**
 * @summary Add an organization member.
 *
 * @param request AddUserRequest
 * @return AddUserResponse
 */
AddUserResponse Client::addUser(const AddUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserWithOptions(request, runtime);
}

/**
 * @summary Adds an organization member to a specified user group.
 *
 * @param request AddUserGroupMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserGroupMemberResponse
 */
AddUserGroupMemberResponse Client::addUserGroupMemberWithOptions(const AddUserGroupMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.userGroupId();
  }

  if (!!request.hasUserIdList()) {
    query["UserIdList"] = request.userIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserGroupMember"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserGroupMemberResponse>();
}

/**
 * @summary Adds an organization member to a specified user group.
 *
 * @param request AddUserGroupMemberRequest
 * @return AddUserGroupMemberResponse
 */
AddUserGroupMemberResponse Client::addUserGroupMember(const AddUserGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserGroupMemberWithOptions(request, runtime);
}

/**
 * @summary Add users to a specified user group at a time.
 *
 * @param request AddUserGroupMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserGroupMembersResponse
 */
AddUserGroupMembersResponse Client::addUserGroupMembersWithOptions(const AddUserGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserGroupMembers"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserGroupMembersResponse>();
}

/**
 * @summary Add users to a specified user group at a time.
 *
 * @param request AddUserGroupMembersRequest
 * @return AddUserGroupMembersResponse
 */
AddUserGroupMembersResponse Client::addUserGroupMembers(const AddUserGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserGroupMembersWithOptions(request, runtime);
}

/**
 * @summary Add organization member tag metadata.
 *
 * @param request AddUserTagMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserTagMetaResponse
 */
AddUserTagMetaResponse Client::addUserTagMetaWithOptions(const AddUserTagMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTagDescription()) {
    query["TagDescription"] = request.tagDescription();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserTagMeta"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserTagMetaResponse>();
}

/**
 * @summary Add organization member tag metadata.
 *
 * @param request AddUserTagMetaRequest
 * @return AddUserTagMetaResponse
 */
AddUserTagMetaResponse Client::addUserTagMeta(const AddUserTagMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserTagMetaWithOptions(request, runtime);
}

/**
 * @summary Add a member to the specified workspace.
 *
 * @param request AddUserToWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToWorkspaceResponse
 */
AddUserToWorkspaceResponse Client::addUserToWorkspaceWithOptions(const AddUserToWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserToWorkspace"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserToWorkspaceResponse>();
}

/**
 * @summary Add a member to the specified workspace.
 *
 * @param request AddUserToWorkspaceRequest
 * @return AddUserToWorkspaceResponse
 */
AddUserToWorkspaceResponse Client::addUserToWorkspace(const AddUserToWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Batch add members to the workspace.
 *
 * @param request AddWorkspaceUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddWorkspaceUsersResponse
 */
AddWorkspaceUsersResponse Client::addWorkspaceUsersWithOptions(const AddWorkspaceUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddWorkspaceUsers"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddWorkspaceUsersResponse>();
}

/**
 * @summary Batch add members to the workspace.
 *
 * @param request AddWorkspaceUsersRequest
 * @return AddWorkspaceUsersResponse
 */
AddWorkspaceUsersResponse Client::addWorkspaceUsers(const AddWorkspaceUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addWorkspaceUsersWithOptions(request, runtime);
}

/**
 * @summary Trigger the collection acceleration of the Quick engine for datasets.
 *
 * @param request AllotDatasetAccelerationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllotDatasetAccelerationTaskResponse
 */
AllotDatasetAccelerationTaskResponse Client::allotDatasetAccelerationTaskWithOptions(const AllotDatasetAccelerationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllotDatasetAccelerationTask"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllotDatasetAccelerationTaskResponse>();
}

/**
 * @summary Trigger the collection acceleration of the Quick engine for datasets.
 *
 * @param request AllotDatasetAccelerationTaskRequest
 * @return AllotDatasetAccelerationTaskResponse
 */
AllotDatasetAccelerationTaskResponse Client::allotDatasetAccelerationTask(const AllotDatasetAccelerationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allotDatasetAccelerationTaskWithOptions(request, runtime);
}

/**
 * @summary Batch authorization of BI portal menu will be skipped automatically.
 *
 * @param request AuthorizeMenuRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeMenuResponse
 */
AuthorizeMenuResponse Client::authorizeMenuWithOptions(const AuthorizeMenuRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthPointsValue()) {
    query["AuthPointsValue"] = request.authPointsValue();
  }

  if (!!request.hasDataPortalId()) {
    query["DataPortalId"] = request.dataPortalId();
  }

  if (!!request.hasMenuIds()) {
    query["MenuIds"] = request.menuIds();
  }

  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeMenu"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeMenuResponse>();
}

/**
 * @summary Batch authorization of BI portal menu will be skipped automatically.
 *
 * @param request AuthorizeMenuRequest
 * @return AuthorizeMenuResponse
 */
AuthorizeMenuResponse Client::authorizeMenu(const AuthorizeMenuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeMenuWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI BatchAddFeishuUsers is deprecated
 *
 * @summary 批量添加飞书用户。
 *
 * @param request BatchAddFeishuUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchAddFeishuUsersResponse
 */
BatchAddFeishuUsersResponse Client::batchAddFeishuUsersWithOptions(const BatchAddFeishuUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeishuUsers()) {
    query["FeishuUsers"] = request.feishuUsers();
  }

  if (!!request.hasIsAdmin()) {
    query["IsAdmin"] = request.isAdmin();
  }

  if (!!request.hasIsAuthAdmin()) {
    query["IsAuthAdmin"] = request.isAuthAdmin();
  }

  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.userType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchAddFeishuUsers"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchAddFeishuUsersResponse>();
}

/**
 * @deprecated OpenAPI BatchAddFeishuUsers is deprecated
 *
 * @summary 批量添加飞书用户。
 *
 * @param request BatchAddFeishuUsersRequest
 * @return BatchAddFeishuUsersResponse
 */
BatchAddFeishuUsersResponse Client::batchAddFeishuUsers(const BatchAddFeishuUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchAddFeishuUsersWithOptions(request, runtime);
}

/**
 * @summary Cancel the authorization records for specified users and user groups based on the portal menu ID.
 *
 * @param request CancelAuthorizationMenuRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAuthorizationMenuResponse
 */
CancelAuthorizationMenuResponse Client::cancelAuthorizationMenuWithOptions(const CancelAuthorizationMenuRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataPortalId()) {
    query["DataPortalId"] = request.dataPortalId();
  }

  if (!!request.hasMenuIds()) {
    query["MenuIds"] = request.menuIds();
  }

  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelAuthorizationMenu"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAuthorizationMenuResponse>();
}

/**
 * @summary Cancel the authorization records for specified users and user groups based on the portal menu ID.
 *
 * @param request CancelAuthorizationMenuRequest
 * @return CancelAuthorizationMenuResponse
 */
CancelAuthorizationMenuResponse Client::cancelAuthorizationMenu(const CancelAuthorizationMenuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAuthorizationMenuWithOptions(request, runtime);
}

/**
 * @summary Cancel the data works from the user\\"s collection.
 *
 * @param request CancelCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCollectionResponse
 */
CancelCollectionResponse Client::cancelCollectionWithOptions(const CancelCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorksId()) {
    query["WorksId"] = request.worksId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelCollection"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCollectionResponse>();
}

/**
 * @summary Cancel the data works from the user\\"s collection.
 *
 * @param request CancelCollectionRequest
 * @return CancelCollectionResponse
 */
CancelCollectionResponse Client::cancelCollection(const CancelCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCollectionWithOptions(request, runtime);
}

/**
 * @summary Delete a share authorization for a data work.
 *
 * @param request CancelReportShareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelReportShareResponse
 */
CancelReportShareResponse Client::cancelReportShareWithOptions(const CancelReportShareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  if (!!request.hasShareToIds()) {
    query["ShareToIds"] = request.shareToIds();
  }

  if (!!request.hasShareToType()) {
    query["ShareToType"] = request.shareToType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelReportShare"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelReportShareResponse>();
}

/**
 * @summary Delete a share authorization for a data work.
 *
 * @param request CancelReportShareRequest
 * @return CancelReportShareResponse
 */
CancelReportShareResponse Client::cancelReportShare(const CancelReportShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelReportShareWithOptions(request, runtime);
}

/**
 * @summary Modifies the visibility mode of the BI portal menu and whether the menu is only authorized to be visible.
 *
 * @param request ChangeVisibilityModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeVisibilityModelResponse
 */
ChangeVisibilityModelResponse Client::changeVisibilityModelWithOptions(const ChangeVisibilityModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataPortalId()) {
    query["DataPortalId"] = request.dataPortalId();
  }

  if (!!request.hasMenuIds()) {
    query["MenuIds"] = request.menuIds();
  }

  if (!!request.hasShowOnlyWithAccess()) {
    query["ShowOnlyWithAccess"] = request.showOnlyWithAccess();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeVisibilityModel"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeVisibilityModelResponse>();
}

/**
 * @summary Modifies the visibility mode of the BI portal menu and whether the menu is only authorized to be visible.
 *
 * @param request ChangeVisibilityModelRequest
 * @return ChangeVisibilityModelResponse
 */
ChangeVisibilityModelResponse Client::changeVisibilityModel(const ChangeVisibilityModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeVisibilityModelWithOptions(request, runtime);
}

/**
 * @summary 检查给定的cubeId是否存在
 *
 * @param request CheckDatasetExistedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDatasetExistedResponse
 */
CheckDatasetExistedResponse Client::checkDatasetExistedWithOptions(const CheckDatasetExistedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDatasetExisted"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDatasetExistedResponse>();
}

/**
 * @summary 检查给定的cubeId是否存在
 *
 * @param request CheckDatasetExistedRequest
 * @return CheckDatasetExistedResponse
 */
CheckDatasetExistedResponse Client::checkDatasetExisted(const CheckDatasetExistedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDatasetExistedWithOptions(request, runtime);
}

/**
 * @summary 判断用户是否属于组织
 *
 * @param request CheckOrganizationMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckOrganizationMemberResponse
 */
CheckOrganizationMemberResponse Client::checkOrganizationMemberWithOptions(const CheckOrganizationMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckOrganizationMember"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckOrganizationMemberResponse>();
}

/**
 * @summary 判断用户是否属于组织
 *
 * @param request CheckOrganizationMemberRequest
 * @return CheckOrganizationMemberResponse
 */
CheckOrganizationMemberResponse Client::checkOrganizationMember(const CheckOrganizationMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkOrganizationMemberWithOptions(request, runtime);
}

/**
 * @summary Queries whether a user has permissions to view data works, such as dashboards and workbooks.
 *
 * @param request CheckReadableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckReadableResponse
 */
CheckReadableResponse Client::checkReadableWithOptions(const CheckReadableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorksId()) {
    query["WorksId"] = request.worksId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckReadable"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckReadableResponse>();
}

/**
 * @summary Queries whether a user has permissions to view data works, such as dashboards and workbooks.
 *
 * @param request CheckReadableRequest
 * @return CheckReadableResponse
 */
CheckReadableResponse Client::checkReadable(const CheckReadableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkReadableWithOptions(request, runtime);
}

/**
 * @summary 根据自定义sql创建数据集
 *
 * @param request CreateCubeBySqlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCubeBySqlResponse
 */
CreateCubeBySqlResponse Client::createCubeBySqlWithOptions(const CreateCubeBySqlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaption()) {
    query["Caption"] = request.caption();
  }

  if (!!request.hasCustomSql()) {
    query["CustomSql"] = request.customSql();
  }

  if (!!request.hasDsId()) {
    query["DsId"] = request.dsId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCubeBySql"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCubeBySqlResponse>();
}

/**
 * @summary 根据自定义sql创建数据集
 *
 * @param request CreateCubeBySqlRequest
 * @return CreateCubeBySqlResponse
 */
CreateCubeBySqlResponse Client::createCubeBySql(const CreateCubeBySqlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCubeBySqlWithOptions(request, runtime);
}

/**
 * @summary 根据物理表名称创建数据集
 *
 * @param request CreateDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDatasetWithOptions(const CreateDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDsId()) {
    query["DsId"] = request.dsId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasTargetDirectoryId()) {
    query["TargetDirectoryId"] = request.targetDirectoryId();
  }

  if (!!request.hasUserDefineCubeName()) {
    query["UserDefineCubeName"] = request.userDefineCubeName();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataset"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetResponse>();
}

/**
 * @summary 根据物理表名称创建数据集
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasetWithOptions(request, runtime);
}

/**
 * @summary Generate a ticket for third-party embedding.
 *
 * @description For detailed usage, please refer to [Report Embedding Data Permission Control and Parameter Passing Security Enhancement Solution](https://help.aliyun.com/document_detail/391291.html).
 *
 * @param request CreateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicketWithOptions(const CreateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasCmptId()) {
    query["CmptId"] = request.cmptId();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasGlobalParam()) {
    query["GlobalParam"] = request.globalParam();
  }

  if (!!request.hasTicketNum()) {
    query["TicketNum"] = request.ticketNum();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWatermarkParam()) {
    query["WatermarkParam"] = request.watermarkParam();
  }

  if (!!request.hasWorksId()) {
    query["WorksId"] = request.worksId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTicket"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTicketResponse>();
}

/**
 * @summary Generate a ticket for third-party embedding.
 *
 * @description For detailed usage, please refer to [Report Embedding Data Permission Control and Parameter Passing Security Enhancement Solution](https://help.aliyun.com/document_detail/391291.html).
 *
 * @param request CreateTicketRequest
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicket(const CreateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTicketWithOptions(request, runtime);
}

/**
 * @summary Generate an embedding ticket for Smart Q.
 *
 * @param request CreateTicket4CopilotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTicket4CopilotResponse
 */
CreateTicket4CopilotResponse Client::createTicket4CopilotWithOptions(const CreateTicket4CopilotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasCopilotId()) {
    query["CopilotId"] = request.copilotId();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasTicketNum()) {
    query["TicketNum"] = request.ticketNum();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTicket4Copilot"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTicket4CopilotResponse>();
}

/**
 * @summary Generate an embedding ticket for Smart Q.
 *
 * @param request CreateTicket4CopilotRequest
 * @return CreateTicket4CopilotResponse
 */
CreateTicket4CopilotResponse Client::createTicket4Copilot(const CreateTicket4CopilotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTicket4CopilotWithOptions(request, runtime);
}

/**
 * @summary Create a user group. You can specify a parent user group.
 *
 * @param request CreateUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroupWithOptions(const CreateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParentUserGroupId()) {
    query["ParentUserGroupId"] = request.parentUserGroupId();
  }

  if (!!request.hasUserGroupDescription()) {
    query["UserGroupDescription"] = request.userGroupDescription();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.userGroupId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.userGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUserGroup"},
    {"version" , "2022-01-01"},
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
 * @summary Create a user group. You can specify a parent user group.
 *
 * @param request CreateUserGroupRequest
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroup(const CreateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserGroupWithOptions(request, runtime);
}

/**
 * @summary 数据解读开放接口
 *
 * @param request DataInterpretationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DataInterpretationResponse
 */
DataInterpretationResponse Client::dataInterpretationWithOptions(const DataInterpretationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasData()) {
    query["Data"] = request.data();
  }

  if (!!request.hasModelCode()) {
    query["ModelCode"] = request.modelCode();
  }

  if (!!request.hasPromptForceOverride()) {
    query["PromptForceOverride"] = request.promptForceOverride();
  }

  if (!!request.hasUserPrompt()) {
    query["UserPrompt"] = request.userPrompt();
  }

  if (!!request.hasUserQuestion()) {
    query["UserQuestion"] = request.userQuestion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DataInterpretation"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DataInterpretationResponse>();
}

/**
 * @summary 数据解读开放接口
 *
 * @param request DataInterpretationRequest
 * @return DataInterpretationResponse
 */
DataInterpretationResponse Client::dataInterpretation(const DataInterpretationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dataInterpretationWithOptions(request, runtime);
}

/**
 * @summary Query works information under the specified dataset.
 *
 * @param request DataSetBloodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DataSetBloodResponse
 */
DataSetBloodResponse Client::dataSetBloodWithOptions(const DataSetBloodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSetIds()) {
    query["DataSetIds"] = request.dataSetIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorksType()) {
    query["WorksType"] = request.worksType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DataSetBlood"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DataSetBloodResponse>();
}

/**
 * @summary Query works information under the specified dataset.
 *
 * @param request DataSetBloodRequest
 * @return DataSetBloodResponse
 */
DataSetBloodResponse Client::dataSetBlood(const DataSetBloodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dataSetBloodWithOptions(request, runtime);
}

/**
 * @summary Query dataset information under the specified data source
 *
 * @param request DataSourceBloodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DataSourceBloodResponse
 */
DataSourceBloodResponse Client::dataSourceBloodWithOptions(const DataSourceBloodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DataSourceBlood"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DataSourceBloodResponse>();
}

/**
 * @summary Query dataset information under the specified data source
 *
 * @param request DataSourceBloodRequest
 * @return DataSourceBloodResponse
 */
DataSourceBloodResponse Client::dataSourceBlood(const DataSourceBloodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dataSourceBloodWithOptions(request, runtime);
}

/**
 * @summary Update the expiration time of the ticket embedded in the report.
 *
 * @param request DelayTicketExpireTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DelayTicketExpireTimeResponse
 */
DelayTicketExpireTimeResponse Client::delayTicketExpireTimeWithOptions(const DelayTicketExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasTicket()) {
    query["Ticket"] = request.ticket();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DelayTicketExpireTime"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DelayTicketExpireTimeResponse>();
}

/**
 * @summary Update the expiration time of the ticket embedded in the report.
 *
 * @param request DelayTicketExpireTimeRequest
 * @return DelayTicketExpireTimeResponse
 */
DelayTicketExpireTimeResponse Client::delayTicketExpireTime(const DelayTicketExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return delayTicketExpireTimeWithOptions(request, runtime);
}

/**
 * @summary { "ruleId": "a5bb24da- ***-a891683e14da", // The ID of the row-column permission rule. "cubeId": "7c7223ae- ***-3c744528014b", // The ID of the dataset. "delModel": { "userGroups": [ "0d5fb19b- ***-1248 fc27ca51", // Delete the user group ID of the user group. "3d2c23d4-***-f6390f325c2d" ], "users": [ "4334 ***358", // Delete the UserID of the user group. "Huang***3fa822" ] } }
 *
 * @description {"ruleId":"a5bb24da-***-a891683e14da","cubeId":"7c7223ae-***-3c744528014b","delModel":{"userGroups":["0d5fb19b-***-1248fc27ca51","3d2c23d4-***-f6390f325c2d"],"users":["4334***358","Huang***3fa822"]}}
 *
 * @param request DeleteDataLevelPermissionRuleUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLevelPermissionRuleUsersResponse
 */
DeleteDataLevelPermissionRuleUsersResponse Client::deleteDataLevelPermissionRuleUsersWithOptions(const DeleteDataLevelPermissionRuleUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteUserModel()) {
    query["DeleteUserModel"] = request.deleteUserModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLevelPermissionRuleUsers"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLevelPermissionRuleUsersResponse>();
}

/**
 * @summary { "ruleId": "a5bb24da- ***-a891683e14da", // The ID of the row-column permission rule. "cubeId": "7c7223ae- ***-3c744528014b", // The ID of the dataset. "delModel": { "userGroups": [ "0d5fb19b- ***-1248 fc27ca51", // Delete the user group ID of the user group. "3d2c23d4-***-f6390f325c2d" ], "users": [ "4334 ***358", // Delete the UserID of the user group. "Huang***3fa822" ] } }
 *
 * @description {"ruleId":"a5bb24da-***-a891683e14da","cubeId":"7c7223ae-***-3c744528014b","delModel":{"userGroups":["0d5fb19b-***-1248fc27ca51","3d2c23d4-***-f6390f325c2d"],"users":["4334***358","Huang***3fa822"]}}
 *
 * @param request DeleteDataLevelPermissionRuleUsersRequest
 * @return DeleteDataLevelPermissionRuleUsersResponse
 */
DeleteDataLevelPermissionRuleUsersResponse Client::deleteDataLevelPermissionRuleUsers(const DeleteDataLevelPermissionRuleUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLevelPermissionRuleUsersWithOptions(request, runtime);
}

/**
 * @summary The ID of the request.
 *
 * @description The ID of the training dataset that you want to remove from the specified custom linguistic model.
 *
 * @param request DeleteDataLevelRuleConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataLevelRuleConfigResponse
 */
DeleteDataLevelRuleConfigResponse Client::deleteDataLevelRuleConfigWithOptions(const DeleteDataLevelRuleConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataLevelRuleConfig"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataLevelRuleConfigResponse>();
}

/**
 * @summary The ID of the request.
 *
 * @description The ID of the training dataset that you want to remove from the specified custom linguistic model.
 *
 * @param request DeleteDataLevelRuleConfigRequest
 * @return DeleteDataLevelRuleConfigResponse
 */
DeleteDataLevelRuleConfigResponse Client::deleteDataLevelRuleConfig(const DeleteDataLevelRuleConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataLevelRuleConfigWithOptions(request, runtime);
}

/**
 * @summary Delete Third-Party Embedded Ticket
 *
 * @param request DeleteTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTicketResponse
 */
DeleteTicketResponse Client::deleteTicketWithOptions(const DeleteTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTicket()) {
    query["Ticket"] = request.ticket();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTicket"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTicketResponse>();
}

/**
 * @summary Delete Third-Party Embedded Ticket
 *
 * @param request DeleteTicketRequest
 * @return DeleteTicketResponse
 */
DeleteTicketResponse Client::deleteTicket(const DeleteTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTicketWithOptions(request, runtime);
}

/**
 * @summary Delete the specified organization user.
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTransferUserId()) {
    query["TransferUserId"] = request.transferUserId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserResponse>();
}

/**
 * @summary Delete the specified organization user.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Delete a member from the specified workspace.
 *
 * @param request DeleteUserFromWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserFromWorkspaceResponse
 */
DeleteUserFromWorkspaceResponse Client::deleteUserFromWorkspaceWithOptions(const DeleteUserFromWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserFromWorkspace"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserFromWorkspaceResponse>();
}

/**
 * @summary Delete a member from the specified workspace.
 *
 * @param request DeleteUserFromWorkspaceRequest
 * @return DeleteUserFromWorkspaceResponse
 */
DeleteUserFromWorkspaceResponse Client::deleteUserFromWorkspace(const DeleteUserFromWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserFromWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a user group in an organization.
 *
 * @param request DeleteUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroupWithOptions(const DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.userGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserGroup"},
    {"version" , "2022-01-01"},
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
 * @summary Deletes a user group in an organization.
 *
 * @param request DeleteUserGroupRequest
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroup(const DeleteUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified member from a specified user group.
 *
 * @param request DeleteUserGroupMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserGroupMemberResponse
 */
DeleteUserGroupMemberResponse Client::deleteUserGroupMemberWithOptions(const DeleteUserGroupMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.userGroupId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserGroupMember"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserGroupMemberResponse>();
}

/**
 * @summary Deletes a specified member from a specified user group.
 *
 * @param request DeleteUserGroupMemberRequest
 * @return DeleteUserGroupMemberResponse
 */
DeleteUserGroupMemberResponse Client::deleteUserGroupMember(const DeleteUserGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserGroupMemberWithOptions(request, runtime);
}

/**
 * @summary Batch remove specified users from user groups.
 *
 * @param request DeleteUserGroupMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserGroupMembersResponse
 */
DeleteUserGroupMembersResponse Client::deleteUserGroupMembersWithOptions(const DeleteUserGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserGroupMembers"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserGroupMembersResponse>();
}

/**
 * @summary Batch remove specified users from user groups.
 *
 * @param request DeleteUserGroupMembersRequest
 * @return DeleteUserGroupMembersResponse
 */
DeleteUserGroupMembersResponse Client::deleteUserGroupMembers(const DeleteUserGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserGroupMembersWithOptions(request, runtime);
}

/**
 * @summary Deletes the tag metadata of an organization member.
 *
 * @param request DeleteUserTagMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserTagMetaResponse
 */
DeleteUserTagMetaResponse Client::deleteUserTagMetaWithOptions(const DeleteUserTagMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTagId()) {
    query["TagId"] = request.tagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserTagMeta"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserTagMetaResponse>();
}

/**
 * @summary Deletes the tag metadata of an organization member.
 *
 * @param request DeleteUserTagMetaRequest
 * @return DeleteUserTagMetaResponse
 */
DeleteUserTagMetaResponse Client::deleteUserTagMeta(const DeleteUserTagMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserTagMetaWithOptions(request, runtime);
}

/**
 * @summary Get Data Source Information
 *
 * @param request GetDataSourceConnectionInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataSourceConnectionInfoResponse
 */
GetDataSourceConnectionInfoResponse Client::getDataSourceConnectionInfoWithOptions(const GetDataSourceConnectionInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDsId()) {
    query["DsId"] = request.dsId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataSourceConnectionInfo"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataSourceConnectionInfoResponse>();
}

/**
 * @summary Get Data Source Information
 *
 * @param request GetDataSourceConnectionInfoRequest
 * @return GetDataSourceConnectionInfoResponse
 */
GetDataSourceConnectionInfoResponse Client::getDataSourceConnectionInfo(const GetDataSourceConnectionInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataSourceConnectionInfoWithOptions(request, runtime);
}

/**
 * @summary Check the running status of mail tasks within an organization
 *
 * @param request GetMailTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMailTaskStatusResponse
 */
GetMailTaskStatusResponse Client::getMailTaskStatusWithOptions(const GetMailTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMailId()) {
    query["MailId"] = request.mailId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMailTaskStatus"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMailTaskStatusResponse>();
}

/**
 * @summary Check the running status of mail tasks within an organization
 *
 * @param request GetMailTaskStatusRequest
 * @return GetMailTaskStatusResponse
 */
GetMailTaskStatusResponse Client::getMailTaskStatus(const GetMailTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMailTaskStatusWithOptions(request, runtime);
}

/**
 * @summary Search for user group information based on the keyword of the user group name.
 *
 * @param request GetUserGroupInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserGroupInfoResponse
 */
GetUserGroupInfoResponse Client::getUserGroupInfoWithOptions(const GetUserGroupInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserGroupInfo"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserGroupInfoResponse>();
}

/**
 * @summary Search for user group information based on the keyword of the user group name.
 *
 * @param request GetUserGroupInfoRequest
 * @return GetUserGroupInfoResponse
 */
GetUserGroupInfoResponse Client::getUserGroupInfo(const GetUserGroupInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserGroupInfoWithOptions(request, runtime);
}

/**
 * @summary Query the list of embedded reports
 *
 * @param request GetWorksEmbedListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorksEmbedListResponse
 */
GetWorksEmbedListResponse Client::getWorksEmbedListWithOptions(const GetWorksEmbedListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasWorksType()) {
    query["WorksType"] = request.worksType();
  }

  if (!!request.hasWsId()) {
    query["WsId"] = request.wsId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorksEmbedList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorksEmbedListResponse>();
}

/**
 * @summary Query the list of embedded reports
 *
 * @param request GetWorksEmbedListRequest
 * @return GetWorksEmbedListResponse
 */
GetWorksEmbedListResponse Client::getWorksEmbedList(const GetWorksEmbedListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorksEmbedListWithOptions(request, runtime);
}

/**
 * @summary Queries API data sources.
 *
 * @description For more information about the parameters, see [Create an API data source](https://help.aliyun.com/document_detail/409330.html).
 *
 * @param request ListApiDatasourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiDatasourceResponse
 */
ListApiDatasourceResponse Client::listApiDatasourceWithOptions(const ListApiDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiDatasource"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiDatasourceResponse>();
}

/**
 * @summary Queries API data sources.
 *
 * @description For more information about the parameters, see [Create an API data source](https://help.aliyun.com/document_detail/409330.html).
 *
 * @param request ListApiDatasourceRequest
 * @return ListApiDatasourceResponse
 */
ListApiDatasourceResponse Client::listApiDatasource(const ListApiDatasourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApiDatasourceWithOptions(request, runtime);
}

/**
 * @summary Queries user group information at a time by user group ID.
 *
 * @param request ListByUserGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListByUserGroupIdResponse
 */
ListByUserGroupIdResponse Client::listByUserGroupIdWithOptions(const ListByUserGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.userGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListByUserGroupId"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListByUserGroupIdResponse>();
}

/**
 * @summary Queries user group information at a time by user group ID.
 *
 * @param request ListByUserGroupIdRequest
 * @return ListByUserGroupIdResponse
 */
ListByUserGroupIdResponse Client::listByUserGroupId(const ListByUserGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listByUserGroupIdWithOptions(request, runtime);
}

/**
 * @summary The ID of the work.
 *
 * @param request ListCollectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCollectionsResponse
 */
ListCollectionsResponse Client::listCollectionsWithOptions(const ListCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCollections"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCollectionsResponse>();
}

/**
 * @summary The ID of the work.
 *
 * @param request ListCollectionsRequest
 * @return ListCollectionsResponse
 */
ListCollectionsResponse Client::listCollections(const ListCollectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCollectionsWithOptions(request, runtime);
}

/**
 * @summary You can this operation to obtain a list of row and column permission configurations for a specified dataset.
 *
 * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.
 *
 * @param request ListCubeDataLevelPermissionConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCubeDataLevelPermissionConfigResponse
 */
ListCubeDataLevelPermissionConfigResponse Client::listCubeDataLevelPermissionConfigWithOptions(const ListCubeDataLevelPermissionConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCubeDataLevelPermissionConfig"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCubeDataLevelPermissionConfigResponse>();
}

/**
 * @summary You can this operation to obtain a list of row and column permission configurations for a specified dataset.
 *
 * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.
 *
 * @param request ListCubeDataLevelPermissionConfigRequest
 * @return ListCubeDataLevelPermissionConfigResponse
 */
ListCubeDataLevelPermissionConfigResponse Client::listCubeDataLevelPermissionConfig(const ListCubeDataLevelPermissionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCubeDataLevelPermissionConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieve the whitelist for dataset row and column permissions based on the type of permission.
 *
 * @description > This API only supports the new row and column permission model of Quick BI. If you are still using the old row and column permissions, please migrate to the new row and column permission model before calling this interface. To migrate to the new row and column permission model, follow these steps: In Organization Management -> Security Configuration -> Upgrade Row and Column Permissions, click **One-Click Upgrade** to upgrade to the new row-level permissions.
 *
 * @param request ListDataLevelPermissionWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataLevelPermissionWhiteListResponse
 */
ListDataLevelPermissionWhiteListResponse Client::listDataLevelPermissionWhiteListWithOptions(const ListDataLevelPermissionWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataLevelPermissionWhiteList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataLevelPermissionWhiteListResponse>();
}

/**
 * @summary Retrieve the whitelist for dataset row and column permissions based on the type of permission.
 *
 * @description > This API only supports the new row and column permission model of Quick BI. If you are still using the old row and column permissions, please migrate to the new row and column permission model before calling this interface. To migrate to the new row and column permission model, follow these steps: In Organization Management -> Security Configuration -> Upgrade Row and Column Permissions, click **One-Click Upgrade** to upgrade to the new row-level permissions.
 *
 * @param request ListDataLevelPermissionWhiteListRequest
 * @return ListDataLevelPermissionWhiteListResponse
 */
ListDataLevelPermissionWhiteListResponse Client::listDataLevelPermissionWhiteList(const ListDataLevelPermissionWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataLevelPermissionWhiteListWithOptions(request, runtime);
}

/**
 * @summary Query all data sources under the specified space
 *
 * @param request ListDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceResponse
 */
ListDataSourceResponse Client::listDataSourceWithOptions(const ListDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDsType()) {
    query["DsType"] = request.dsType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSource"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceResponse>();
}

/**
 * @summary Query all data sources under the specified space
 *
 * @param request ListDataSourceRequest
 * @return ListDataSourceResponse
 */
ListDataSourceResponse Client::listDataSource(const ListDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourceWithOptions(request, runtime);
}

/**
 * @summary Overview
 *
 * @param request ListFavoriteReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFavoriteReportsResponse
 */
ListFavoriteReportsResponse Client::listFavoriteReportsWithOptions(const ListFavoriteReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTreeType()) {
    query["TreeType"] = request.treeType();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFavoriteReports"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFavoriteReportsResponse>();
}

/**
 * @summary Overview
 *
 * @param request ListFavoriteReportsRequest
 * @return ListFavoriteReportsResponse
 */
ListFavoriteReportsResponse Client::listFavoriteReports(const ListFavoriteReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFavoriteReportsWithOptions(request, runtime);
}

/**
 * @summary Get user list under the specified organization role.
 *
 * @param request ListOrganizationRoleUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationRoleUsersResponse
 */
ListOrganizationRoleUsersResponse Client::listOrganizationRoleUsersWithOptions(const ListOrganizationRoleUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrganizationRoleUsers"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOrganizationRoleUsersResponse>();
}

/**
 * @summary Get user list under the specified organization role.
 *
 * @param request ListOrganizationRoleUsersRequest
 * @return ListOrganizationRoleUsersResponse
 */
ListOrganizationRoleUsersResponse Client::listOrganizationRoleUsers(const ListOrganizationRoleUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrganizationRoleUsersWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of custom roles at the organization level.
 *
 * @param request ListOrganizationRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationRolesResponse
 */
ListOrganizationRolesResponse Client::listOrganizationRolesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListOrganizationRoles"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOrganizationRolesResponse>();
}

/**
 * @summary Retrieve the list of custom roles at the organization level.
 *
 * @return ListOrganizationRolesResponse
 */
ListOrganizationRolesResponse Client::listOrganizationRoles() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrganizationRolesWithOptions(runtime);
}

/**
 * @summary Obtains the list of authorization details for a BI portal menu.
 *
 * @param request ListPortalMenuAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPortalMenuAuthorizationResponse
 */
ListPortalMenuAuthorizationResponse Client::listPortalMenuAuthorizationWithOptions(const ListPortalMenuAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataPortalId()) {
    query["DataPortalId"] = request.dataPortalId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPortalMenuAuthorization"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPortalMenuAuthorizationResponse>();
}

/**
 * @summary Obtains the list of authorization details for a BI portal menu.
 *
 * @param request ListPortalMenuAuthorizationRequest
 * @return ListPortalMenuAuthorizationResponse
 */
ListPortalMenuAuthorizationResponse Client::listPortalMenuAuthorization(const ListPortalMenuAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPortalMenuAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Gets a hierarchical list of menus under a specific BI portal.
 *
 * @param request ListPortalMenusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPortalMenusResponse
 */
ListPortalMenusResponse Client::listPortalMenusWithOptions(const ListPortalMenusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataPortalId()) {
    query["DataPortalId"] = request.dataPortalId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPortalMenus"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPortalMenusResponse>();
}

/**
 * @summary Gets a hierarchical list of menus under a specific BI portal.
 *
 * @param request ListPortalMenusRequest
 * @return ListPortalMenusResponse
 */
ListPortalMenusResponse Client::listPortalMenus(const ListPortalMenusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPortalMenusWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to obtain a list of the most frequently viewed and footsteps displayed in the homepage dashboard for a specified user.
 *
 * @param request ListRecentViewReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecentViewReportsResponse
 */
ListRecentViewReportsResponse Client::listRecentViewReportsWithOptions(const ListRecentViewReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasOffsetDay()) {
    query["OffsetDay"] = request.offsetDay();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryMode()) {
    query["QueryMode"] = request.queryMode();
  }

  if (!!request.hasTreeType()) {
    query["TreeType"] = request.treeType();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecentViewReports"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecentViewReportsResponse>();
}

/**
 * @summary You can call this operation to obtain a list of the most frequently viewed and footsteps displayed in the homepage dashboard for a specified user.
 *
 * @param request ListRecentViewReportsRequest
 * @return ListRecentViewReportsResponse
 */
ListRecentViewReportsResponse Client::listRecentViewReports(const ListRecentViewReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecentViewReportsWithOptions(request, runtime);
}

/**
 * @summary You can this operation to obtain the list of authorized works displayed on the homepage of a specified user.
 *
 * @param request ListSharedReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSharedReportsResponse
 */
ListSharedReportsResponse Client::listSharedReportsWithOptions(const ListSharedReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTreeType()) {
    query["TreeType"] = request.treeType();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSharedReports"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSharedReportsResponse>();
}

/**
 * @summary You can this operation to obtain the list of authorized works displayed on the homepage of a specified user.
 *
 * @param request ListSharedReportsRequest
 * @return ListSharedReportsResponse
 */
ListSharedReportsResponse Client::listSharedReports(const ListSharedReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSharedReportsWithOptions(request, runtime);
}

/**
 * @summary Queries all user groups to which a user belongs based on the user ID.
 *
 * @param request ListUserGroupsByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupsByUserIdResponse
 */
ListUserGroupsByUserIdResponse Client::listUserGroupsByUserIdWithOptions(const ListUserGroupsByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserGroupsByUserId"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupsByUserIdResponse>();
}

/**
 * @summary Queries all user groups to which a user belongs based on the user ID.
 *
 * @param request ListUserGroupsByUserIdRequest
 * @return ListUserGroupsByUserIdResponse
 */
ListUserGroupsByUserIdResponse Client::listUserGroupsByUserId(const ListUserGroupsByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsByUserIdWithOptions(request, runtime);
}

/**
 * @summary Get user list under the specified workspace role.
 *
 * @param request ListWorkspaceRoleUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspaceRoleUsersResponse
 */
ListWorkspaceRoleUsersResponse Client::listWorkspaceRoleUsersWithOptions(const ListWorkspaceRoleUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaceRoleUsers"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspaceRoleUsersResponse>();
}

/**
 * @summary Get user list under the specified workspace role.
 *
 * @param request ListWorkspaceRoleUsersRequest
 * @return ListWorkspaceRoleUsersResponse
 */
ListWorkspaceRoleUsersResponse Client::listWorkspaceRoleUsers(const ListWorkspaceRoleUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkspaceRoleUsersWithOptions(request, runtime);
}

/**
 * @summary Get the list of workspace roles.
 *
 * @param request ListWorkspaceRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspaceRolesResponse
 */
ListWorkspaceRolesResponse Client::listWorkspaceRolesWithOptions(const ListWorkspaceRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaceRoles"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspaceRolesResponse>();
}

/**
 * @summary Get the list of workspace roles.
 *
 * @param request ListWorkspaceRolesRequest
 * @return ListWorkspaceRolesResponse
 */
ListWorkspaceRolesResponse Client::listWorkspaceRoles(const ListWorkspaceRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkspaceRolesWithOptions(request, runtime);
}

/**
 * @summary 查询用户所有空间角色列表
 *
 * @param request ListWorkspaceUserRolesByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspaceUserRolesByUserIdResponse
 */
ListWorkspaceUserRolesByUserIdResponse Client::listWorkspaceUserRolesByUserIdWithOptions(const ListWorkspaceUserRolesByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaceUserRolesByUserId"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspaceUserRolesByUserIdResponse>();
}

/**
 * @summary 查询用户所有空间角色列表
 *
 * @param request ListWorkspaceUserRolesByUserIdRequest
 * @return ListWorkspaceUserRolesByUserIdResponse
 */
ListWorkspaceUserRolesByUserIdResponse Client::listWorkspaceUserRolesByUserId(const ListWorkspaceUserRolesByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkspaceUserRolesByUserIdWithOptions(request, runtime);
}

/**
 * @summary Manually Execute Email Task
 *
 * @param request ManualRunMailTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManualRunMailTaskResponse
 */
ManualRunMailTaskResponse Client::manualRunMailTaskWithOptions(const ManualRunMailTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMailId()) {
    query["MailId"] = request.mailId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ManualRunMailTask"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManualRunMailTaskResponse>();
}

/**
 * @summary Manually Execute Email Task
 *
 * @param request ManualRunMailTaskRequest
 * @return ManualRunMailTaskResponse
 */
ManualRunMailTaskResponse Client::manualRunMailTask(const ManualRunMailTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manualRunMailTaskWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a specified API data source.
 *
 * @description When you modify a query statement, you can modify only the top-level JsonObject. You cannot modify parameters that are nested in multiple layers. For more information about the parameters, see [Create an API data source](https://help.aliyun.com/document_detail/409330.html).
 *
 * @param request ModifyApiDatasourceParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApiDatasourceParametersResponse
 */
ModifyApiDatasourceParametersResponse Client::modifyApiDatasourceParametersWithOptions(const ModifyApiDatasourceParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.apiId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApiDatasourceParameters"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApiDatasourceParametersResponse>();
}

/**
 * @summary Modifies the configurations of a specified API data source.
 *
 * @description When you modify a query statement, you can modify only the top-level JsonObject. You cannot modify parameters that are nested in multiple layers. For more information about the parameters, see [Create an API data source](https://help.aliyun.com/document_detail/409330.html).
 *
 * @param request ModifyApiDatasourceParametersRequest
 * @return ModifyApiDatasourceParametersResponse
 */
ModifyApiDatasourceParametersResponse Client::modifyApiDatasourceParameters(const ModifyApiDatasourceParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApiDatasourceParametersWithOptions(request, runtime);
}

/**
 * @summary Modify Intelligent Query Embedding Configuration
 *
 * @param request ModifyCopilotEmbedConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCopilotEmbedConfigResponse
 */
ModifyCopilotEmbedConfigResponse Client::modifyCopilotEmbedConfigWithOptions(const ModifyCopilotEmbedConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.agentName();
  }

  if (!!request.hasCopilotId()) {
    query["CopilotId"] = request.copilotId();
  }

  if (!!request.hasDataRange()) {
    query["DataRange"] = request.dataRange();
  }

  if (!!request.hasModuleName()) {
    query["ModuleName"] = request.moduleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCopilotEmbedConfig"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCopilotEmbedConfigResponse>();
}

/**
 * @summary Modify Intelligent Query Embedding Configuration
 *
 * @param request ModifyCopilotEmbedConfigRequest
 * @return ModifyCopilotEmbedConfigResponse
 */
ModifyCopilotEmbedConfigResponse Client::modifyCopilotEmbedConfig(const ModifyCopilotEmbedConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCopilotEmbedConfigWithOptions(request, runtime);
}

/**
 * @summary Get approval flow information based on the approver.
 *
 * @param request QueryApprovalInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryApprovalInfoResponse
 */
QueryApprovalInfoResponse Client::queryApprovalInfoWithOptions(const QueryApprovalInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryApprovalInfo"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryApprovalInfoResponse>();
}

/**
 * @summary Get approval flow information based on the approver.
 *
 * @param request QueryApprovalInfoRequest
 * @return QueryApprovalInfoResponse
 */
QueryApprovalInfoResponse Client::queryApprovalInfo(const QueryApprovalInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryApprovalInfoWithOptions(request, runtime);
}

/**
 * @summary Query audit log information.
 *
 * @param request QueryAuditLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAuditLogResponse
 */
QueryAuditLogResponse Client::queryAuditLogWithOptions(const QueryAuditLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessSourceFlag()) {
    query["AccessSourceFlag"] = request.accessSourceFlag();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.logType();
  }

  if (!!request.hasOperatorId()) {
    query["OperatorId"] = request.operatorId();
  }

  if (!!request.hasOperatorTypes()) {
    query["OperatorTypes"] = request.operatorTypes();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasUserAccessDevice()) {
    query["UserAccessDevice"] = request.userAccessDevice();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAuditLog"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAuditLogResponse>();
}

/**
 * @summary Query audit log information.
 *
 * @param request QueryAuditLogRequest
 * @return QueryAuditLogResponse
 */
QueryAuditLogResponse Client::queryAuditLog(const QueryAuditLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAuditLogWithOptions(request, runtime);
}

/**
 * @summary Queries component performance logs.
 *
 * @param request QueryComponentPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryComponentPerformanceResponse
 */
QueryComponentPerformanceResponse Client::queryComponentPerformanceWithOptions(const QueryComponentPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCostTimeAvgMin()) {
    query["CostTimeAvgMin"] = request.costTimeAvgMin();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryComponentPerformance"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryComponentPerformanceResponse>();
}

/**
 * @summary Queries component performance logs.
 *
 * @param request QueryComponentPerformanceRequest
 * @return QueryComponentPerformanceResponse
 */
QueryComponentPerformanceResponse Client::queryComponentPerformance(const QueryComponentPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryComponentPerformanceWithOptions(request, runtime);
}

/**
 * @summary Get the List of Configurations for Activating XiaoQ Embedding
 *
 * @param request QueryCopilotEmbedConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCopilotEmbedConfigResponse
 */
QueryCopilotEmbedConfigResponse Client::queryCopilotEmbedConfigWithOptions(const QueryCopilotEmbedConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCopilotEmbedConfig"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCopilotEmbedConfigResponse>();
}

/**
 * @summary Get the List of Configurations for Activating XiaoQ Embedding
 *
 * @param request QueryCopilotEmbedConfigRequest
 * @return QueryCopilotEmbedConfigResponse
 */
QueryCopilotEmbedConfigResponse Client::queryCopilotEmbedConfig(const QueryCopilotEmbedConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCopilotEmbedConfigWithOptions(request, runtime);
}

/**
 * @summary Queries dataset optimization suggestions.
 *
 * @param request QueryCubeOptimizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCubeOptimizationResponse
 */
QueryCubeOptimizationResponse Client::queryCubeOptimizationWithOptions(const QueryCubeOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCubeOptimization"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCubeOptimizationResponse>();
}

/**
 * @summary Queries dataset optimization suggestions.
 *
 * @param request QueryCubeOptimizationRequest
 * @return QueryCubeOptimizationResponse
 */
QueryCubeOptimizationResponse Client::queryCubeOptimization(const QueryCubeOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCubeOptimizationWithOptions(request, runtime);
}

/**
 * @summary Queries the performance logs of a dataset.
 *
 * @param request QueryCubePerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCubePerformanceResponse
 */
QueryCubePerformanceResponse Client::queryCubePerformanceWithOptions(const QueryCubePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCostTimeAvgMin()) {
    query["CostTimeAvgMin"] = request.costTimeAvgMin();
  }

  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCubePerformance"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCubePerformanceResponse>();
}

/**
 * @summary Queries the performance logs of a dataset.
 *
 * @param request QueryCubePerformanceRequest
 * @return QueryCubePerformanceResponse
 */
QueryCubePerformanceResponse Client::queryCubePerformance(const QueryCubePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCubePerformanceWithOptions(request, runtime);
}

/**
 * @summary 查询仪表板的问数资源信息
 *
 * @param request QueryDashboardNl2sqlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDashboardNl2sqlResponse
 */
QueryDashboardNl2sqlResponse Client::queryDashboardNl2sqlWithOptions(const QueryDashboardNl2sqlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDashboardNl2sql"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDashboardNl2sqlResponse>();
}

/**
 * @summary 查询仪表板的问数资源信息
 *
 * @param request QueryDashboardNl2sqlRequest
 * @return QueryDashboardNl2sqlResponse
 */
QueryDashboardNl2sqlResponse Client::queryDashboardNl2sql(const QueryDashboardNl2sqlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDashboardNl2sqlWithOptions(request, runtime);
}

/**
 * @summary Invoke the open data service API.
 *
 * @description ### Prerequisites
 * You need to create a data service API through Quick BI\\"s data service. For more details, see: [Data Service](https://help.aliyun.com/document_detail/144980.html).
 * ### Usage Restrictions
 * * The data service feature is only available to professional edition customers.
 * * The timeout for data service API calls is 60s, and the QPS for a single API is 10 times/second.
 * * If row-level permissions are enabled on the dataset referenced by the data service API, the API call will also be intercepted by the row-level permission policy.
 *
 * @param request QueryDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDataResponse
 */
QueryDataResponse Client::queryDataWithOptions(const QueryDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.apiId();
  }

  if (!!request.hasConditions()) {
    query["Conditions"] = request.conditions();
  }

  if (!!request.hasReturnFields()) {
    query["ReturnFields"] = request.returnFields();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryData"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDataResponse>();
}

/**
 * @summary Invoke the open data service API.
 *
 * @description ### Prerequisites
 * You need to create a data service API through Quick BI\\"s data service. For more details, see: [Data Service](https://help.aliyun.com/document_detail/144980.html).
 * ### Usage Restrictions
 * * The data service feature is only available to professional edition customers.
 * * The timeout for data service API calls is 60s, and the QPS for a single API is 10 times/second.
 * * If row-level permissions are enabled on the dataset referenced by the data service API, the API call will also be intercepted by the row-level permission policy.
 *
 * @param request QueryDataRequest
 * @return QueryDataResponse
 */
QueryDataResponse Client::queryData(const QueryDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDataWithOptions(request, runtime);
}

/**
 * @summary Get Data Range Catalog List
 *
 * @param request QueryDataRangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDataRangeResponse
 */
QueryDataRangeResponse Client::queryDataRangeWithOptions(const QueryDataRangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDataRange"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDataRangeResponse>();
}

/**
 * @summary Get Data Range Catalog List
 *
 * @param request QueryDataRangeRequest
 * @return QueryDataRangeResponse
 */
QueryDataRangeResponse Client::queryDataRange(const QueryDataRangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDataRangeWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI QueryDataService is deprecated, please use quickbi-public::2022-01-01::QueryData instead.
 *
 * @summary Invoke an already created API in the data service.
 *
 * @description #### Prerequisites
 * You create the data service API through Quick BI\\"s data service. For more details, see [Data Service](https://help.aliyun.com/document_detail/144980.html).
 * #### Usage Restrictions
 * * The data service feature is only available to professional edition customers. 
 * * The timeout for data service API calls is 60s, and the QPS for a single API is 10 times/second.
 * * If row-level permissions are enabled on the dataset referenced by the data service API, the API call may be intercepted by the row-level permission policy.
 *
 * @param request QueryDataServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDataServiceResponse
 */
QueryDataServiceResponse Client::queryDataServiceWithOptions(const QueryDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.apiId();
  }

  if (!!request.hasConditions()) {
    query["Conditions"] = request.conditions();
  }

  if (!!request.hasReturnFields()) {
    query["ReturnFields"] = request.returnFields();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDataService"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDataServiceResponse>();
}

/**
 * @deprecated OpenAPI QueryDataService is deprecated, please use quickbi-public::2022-01-01::QueryData instead.
 *
 * @summary Invoke an already created API in the data service.
 *
 * @description #### Prerequisites
 * You create the data service API through Quick BI\\"s data service. For more details, see [Data Service](https://help.aliyun.com/document_detail/144980.html).
 * #### Usage Restrictions
 * * The data service feature is only available to professional edition customers. 
 * * The timeout for data service API calls is 60s, and the QPS for a single API is 10 times/second.
 * * If row-level permissions are enabled on the dataset referenced by the data service API, the API call may be intercepted by the row-level permission policy.
 *
 * @param request QueryDataServiceRequest
 * @return QueryDataServiceResponse
 */
QueryDataServiceResponse Client::queryDataService(const QueryDataServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDataServiceWithOptions(request, runtime);
}

/**
 * @summary Query Data Service API List
 *
 * @param request QueryDataServiceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDataServiceListResponse
 */
QueryDataServiceListResponse Client::queryDataServiceListWithOptions(const QueryDataServiceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDataServiceList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDataServiceListResponse>();
}

/**
 * @summary Query Data Service API List
 *
 * @param request QueryDataServiceListRequest
 * @return QueryDataServiceListResponse
 */
QueryDataServiceListResponse Client::queryDataServiceList(const QueryDataServiceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDataServiceListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified dataset, including the data source, directory, and dataset model.
 *
 * @description The data source, directory, and dataset model (including dimensions, measures, physical fields, custom SQL text, and association relationships).
 *
 * @param request QueryDatasetDetailInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDatasetDetailInfoResponse
 */
QueryDatasetDetailInfoResponse Client::queryDatasetDetailInfoWithOptions(const QueryDatasetDetailInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.datasetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDatasetDetailInfo"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDatasetDetailInfoResponse>();
}

/**
 * @summary Queries the details of a specified dataset, including the data source, directory, and dataset model.
 *
 * @description The data source, directory, and dataset model (including dimensions, measures, physical fields, custom SQL text, and association relationships).
 *
 * @param request QueryDatasetDetailInfoRequest
 * @return QueryDatasetDetailInfoResponse
 */
QueryDatasetDetailInfoResponse Client::queryDatasetDetailInfo(const QueryDatasetDetailInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDatasetDetailInfoWithOptions(request, runtime);
}

/**
 * @summary Indicates whether the table is a custom SQL table. Valid values:
 * \\*   true: custom SQL table
 * \\*   false: non-custom SQL table
 *
 * @param request QueryDatasetInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDatasetInfoResponse
 */
QueryDatasetInfoResponse Client::queryDatasetInfoWithOptions(const QueryDatasetInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetId()) {
    query["DatasetId"] = request.datasetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDatasetInfo"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDatasetInfoResponse>();
}

/**
 * @summary Indicates whether the table is a custom SQL table. Valid values:
 * \\*   true: custom SQL table
 * \\*   false: non-custom SQL table
 *
 * @param request QueryDatasetInfoRequest
 * @return QueryDatasetInfoResponse
 */
QueryDatasetInfoResponse Client::queryDatasetInfo(const QueryDatasetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDatasetInfoWithOptions(request, runtime);
}

/**
 * @summary The name of the training dataset.
 *
 * @param request QueryDatasetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDatasetListResponse
 */
QueryDatasetListResponse Client::queryDatasetListWithOptions(const QueryDatasetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasWithChildren()) {
    query["WithChildren"] = request.withChildren();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDatasetList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDatasetListResponse>();
}

/**
 * @summary The name of the training dataset.
 *
 * @param request QueryDatasetListRequest
 * @return QueryDatasetListResponse
 */
QueryDatasetListResponse Client::queryDatasetList(const QueryDatasetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDatasetListWithOptions(request, runtime);
}

/**
 * @summary Check if the Dataset has Enabled Smart Query
 *
 * @param request QueryDatasetSmartqStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDatasetSmartqStatusResponse
 */
QueryDatasetSmartqStatusResponse Client::queryDatasetSmartqStatusWithOptions(const QueryDatasetSmartqStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDatasetSmartqStatus"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDatasetSmartqStatusResponse>();
}

/**
 * @summary Check if the Dataset has Enabled Smart Query
 *
 * @param request QueryDatasetSmartqStatusRequest
 * @return QueryDatasetSmartqStatusResponse
 */
QueryDatasetSmartqStatusResponse Client::queryDatasetSmartqStatus(const QueryDatasetSmartqStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDatasetSmartqStatusWithOptions(request, runtime);
}

/**
 * @summary 获取指定数据集的行级权限开关状态。
 *
 * @param request QueryDatasetSwitchInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDatasetSwitchInfoResponse
 */
QueryDatasetSwitchInfoResponse Client::queryDatasetSwitchInfoWithOptions(const QueryDatasetSwitchInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDatasetSwitchInfo"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDatasetSwitchInfoResponse>();
}

/**
 * @summary 获取指定数据集的行级权限开关状态。
 *
 * @param request QueryDatasetSwitchInfoRequest
 * @return QueryDatasetSwitchInfoResponse
 */
QueryDatasetSwitchInfoResponse Client::queryDatasetSwitchInfo(const QueryDatasetSwitchInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDatasetSwitchInfoWithOptions(request, runtime);
}

/**
 * @summary Obtain the embedding configuration in the organization, including the maximum number of embeddings and the number of embeddings.
 *
 * @param request QueryEmbeddedInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEmbeddedInfoResponse
 */
QueryEmbeddedInfoResponse Client::queryEmbeddedInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "QueryEmbeddedInfo"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEmbeddedInfoResponse>();
}

/**
 * @summary Obtain the embedding configuration in the organization, including the maximum number of embeddings and the number of embeddings.
 *
 * @return QueryEmbeddedInfoResponse
 */
QueryEmbeddedInfoResponse Client::queryEmbeddedInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEmbeddedInfoWithOptions(runtime);
}

/**
 * @summary Queries whether embedding is enabled for a report.
 *
 * @param request QueryEmbeddedStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEmbeddedStatusResponse
 */
QueryEmbeddedStatusResponse Client::queryEmbeddedStatusWithOptions(const QueryEmbeddedStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorksId()) {
    query["WorksId"] = request.worksId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEmbeddedStatus"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEmbeddedStatusResponse>();
}

/**
 * @summary Queries whether embedding is enabled for a report.
 *
 * @param request QueryEmbeddedStatusRequest
 * @return QueryEmbeddedStatusResponse
 */
QueryEmbeddedStatusResponse Client::queryEmbeddedStatus(const QueryEmbeddedStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEmbeddedStatusWithOptions(request, runtime);
}

/**
 * @summary 通过数据集ID查询最近一次加速任务
 *
 * @param request QueryLastAccelerationEngineJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLastAccelerationEngineJobResponse
 */
QueryLastAccelerationEngineJobResponse Client::queryLastAccelerationEngineJobWithOptions(const QueryLastAccelerationEngineJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryLastAccelerationEngineJob"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLastAccelerationEngineJobResponse>();
}

/**
 * @summary 通过数据集ID查询最近一次加速任务
 *
 * @param request QueryLastAccelerationEngineJobRequest
 * @return QueryLastAccelerationEngineJobResponse
 */
QueryLastAccelerationEngineJobResponse Client::queryLastAccelerationEngineJob(const QueryLastAccelerationEngineJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryLastAccelerationEngineJobWithOptions(request, runtime);
}

/**
 * @summary Check which datasets and analysis themes the user has question authorization for
 *
 * @param request QueryLlmCubeWithThemeListByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLlmCubeWithThemeListByUserIdResponse
 */
QueryLlmCubeWithThemeListByUserIdResponse Client::queryLlmCubeWithThemeListByUserIdWithOptions(const QueryLlmCubeWithThemeListByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryLlmCubeWithThemeListByUserId"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLlmCubeWithThemeListByUserIdResponse>();
}

/**
 * @summary Check which datasets and analysis themes the user has question authorization for
 *
 * @param request QueryLlmCubeWithThemeListByUserIdRequest
 * @return QueryLlmCubeWithThemeListByUserIdResponse
 */
QueryLlmCubeWithThemeListByUserIdResponse Client::queryLlmCubeWithThemeListByUserId(const QueryLlmCubeWithThemeListByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryLlmCubeWithThemeListByUserIdWithOptions(request, runtime);
}

/**
 * @summary Gets the configuration of the specified organization role.
 *
 * @param request QueryOrganizationRoleConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOrganizationRoleConfigResponse
 */
QueryOrganizationRoleConfigResponse Client::queryOrganizationRoleConfigWithOptions(const QueryOrganizationRoleConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryOrganizationRoleConfig"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOrganizationRoleConfigResponse>();
}

/**
 * @summary Gets the configuration of the specified organization role.
 *
 * @param request QueryOrganizationRoleConfigRequest
 * @return QueryOrganizationRoleConfigResponse
 */
QueryOrganizationRoleConfigResponse Client::queryOrganizationRoleConfig(const QueryOrganizationRoleConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOrganizationRoleConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of workspaces under the current organization.
 *
 * @param request QueryOrganizationWorkspaceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOrganizationWorkspaceListResponse
 */
QueryOrganizationWorkspaceListResponse Client::queryOrganizationWorkspaceListWithOptions(const QueryOrganizationWorkspaceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryOrganizationWorkspaceList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOrganizationWorkspaceListResponse>();
}

/**
 * @summary Retrieve the list of workspaces under the current organization.
 *
 * @param request QueryOrganizationWorkspaceListRequest
 * @return QueryOrganizationWorkspaceListResponse
 */
QueryOrganizationWorkspaceListResponse Client::queryOrganizationWorkspaceList(const QueryOrganizationWorkspaceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOrganizationWorkspaceListWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI QueryReadableResourcesListByUserId is deprecated, please use quickbi-public::2022-01-01::QueryReadableResourcesListByUserIdV2 instead.
 *
 * @summary Queries the list of works that a user has the permission to view, including the statements that are authorized to share in a space.
 *
 * @param request QueryReadableResourcesListByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryReadableResourcesListByUserIdResponse
 */
QueryReadableResourcesListByUserIdResponse Client::queryReadableResourcesListByUserIdWithOptions(const QueryReadableResourcesListByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryReadableResourcesListByUserId"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryReadableResourcesListByUserIdResponse>();
}

/**
 * @deprecated OpenAPI QueryReadableResourcesListByUserId is deprecated, please use quickbi-public::2022-01-01::QueryReadableResourcesListByUserIdV2 instead.
 *
 * @summary Queries the list of works that a user has the permission to view, including the statements that are authorized to share in a space.
 *
 * @param request QueryReadableResourcesListByUserIdRequest
 * @return QueryReadableResourcesListByUserIdResponse
 */
QueryReadableResourcesListByUserIdResponse Client::queryReadableResourcesListByUserId(const QueryReadableResourcesListByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryReadableResourcesListByUserIdWithOptions(request, runtime);
}

/**
 * @summary Query list of works user has permission to view (new)
 *
 * @param request QueryReadableResourcesListByUserIdV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryReadableResourcesListByUserIdV2Response
 */
QueryReadableResourcesListByUserIdV2Response Client::queryReadableResourcesListByUserIdV2WithOptions(const QueryReadableResourcesListByUserIdV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkType()) {
    query["WorkType"] = request.workType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryReadableResourcesListByUserIdV2"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryReadableResourcesListByUserIdV2Response>();
}

/**
 * @summary Query list of works user has permission to view (new)
 *
 * @param request QueryReadableResourcesListByUserIdV2Request
 * @return QueryReadableResourcesListByUserIdV2Response
 */
QueryReadableResourcesListByUserIdV2Response Client::queryReadableResourcesListByUserIdV2(const QueryReadableResourcesListByUserIdV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryReadableResourcesListByUserIdV2WithOptions(request, runtime);
}

/**
 * @summary Queries report performance logs.
 *
 * @param request QueryReportPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryReportPerformanceResponse
 */
QueryReportPerformanceResponse Client::queryReportPerformanceWithOptions(const QueryReportPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCostTimeAvgMin()) {
    query["CostTimeAvgMin"] = request.costTimeAvgMin();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryReportPerformance"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryReportPerformanceResponse>();
}

/**
 * @summary Queries report performance logs.
 *
 * @param request QueryReportPerformanceRequest
 * @return QueryReportPerformanceResponse
 */
QueryReportPerformanceResponse Client::queryReportPerformance(const QueryReportPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryReportPerformanceWithOptions(request, runtime);
}

/**
 * @summary Query the list of objects to which a work has been shared, returning only the sharing configurations that are still within their validity period.
 *
 * @param request QueryShareListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryShareListResponse
 */
QueryShareListResponse Client::queryShareListWithOptions(const QueryShareListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryShareList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryShareListResponse>();
}

/**
 * @summary Query the list of objects to which a work has been shared, returning only the sharing configurations that are still within their validity period.
 *
 * @param request QueryShareListRequest
 * @return QueryShareListResponse
 */
QueryShareListResponse Client::queryShareList(const QueryShareListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryShareListWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query the list of works authorized to a user.
 *
 * @param request QuerySharesToUserListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySharesToUserListResponse
 */
QuerySharesToUserListResponse Client::querySharesToUserListWithOptions(const QuerySharesToUserListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySharesToUserList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySharesToUserListResponse>();
}

/**
 * @summary You can call this operation to query the list of works authorized to a user.
 *
 * @param request QuerySharesToUserListRequest
 * @return QuerySharesToUserListResponse
 */
QuerySharesToUserListResponse Client::querySharesToUserList(const QuerySharesToUserListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySharesToUserListWithOptions(request, runtime);
}

/**
 * @summary Check if a user has permission for a specific smart question dataset
 *
 * @param request QuerySmartqPermissionByCubeIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySmartqPermissionByCubeIdResponse
 */
QuerySmartqPermissionByCubeIdResponse Client::querySmartqPermissionByCubeIdWithOptions(const QuerySmartqPermissionByCubeIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmartqPermissionByCubeId"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmartqPermissionByCubeIdResponse>();
}

/**
 * @summary Check if a user has permission for a specific smart question dataset
 *
 * @param request QuerySmartqPermissionByCubeIdRequest
 * @return QuerySmartqPermissionByCubeIdResponse
 */
QuerySmartqPermissionByCubeIdResponse Client::querySmartqPermissionByCubeId(const QuerySmartqPermissionByCubeIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmartqPermissionByCubeIdWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of a specified ticket for a report that is not embedded in the report.
 *
 * @param request QueryTicketInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTicketInfoResponse
 */
QueryTicketInfoResponse Client::queryTicketInfoWithOptions(const QueryTicketInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTicket()) {
    query["Ticket"] = request.ticket();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTicketInfo"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTicketInfoResponse>();
}

/**
 * @summary Obtains the details of a specified ticket for a report that is not embedded in the report.
 *
 * @param request QueryTicketInfoRequest
 * @return QueryTicketInfoResponse
 */
QueryTicketInfoResponse Client::queryTicketInfo(const QueryTicketInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTicketInfoWithOptions(request, runtime);
}

/**
 * @summary You can this operation to obtain information about child user groups under a specified parent user group.
 *
 * @param request QueryUserGroupListByParentIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserGroupListByParentIdResponse
 */
QueryUserGroupListByParentIdResponse Client::queryUserGroupListByParentIdWithOptions(const QueryUserGroupListByParentIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParentUserGroupId()) {
    query["ParentUserGroupId"] = request.parentUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUserGroupListByParentId"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserGroupListByParentIdResponse>();
}

/**
 * @summary You can this operation to obtain information about child user groups under a specified parent user group.
 *
 * @param request QueryUserGroupListByParentIdRequest
 * @return QueryUserGroupListByParentIdResponse
 */
QueryUserGroupListByParentIdResponse Client::queryUserGroupListByParentId(const QueryUserGroupListByParentIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserGroupListByParentIdWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of members under a user group.
 *
 * @param request QueryUserGroupMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserGroupMemberResponse
 */
QueryUserGroupMemberResponse Client::queryUserGroupMemberWithOptions(const QueryUserGroupMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.userGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUserGroupMember"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserGroupMemberResponse>();
}

/**
 * @summary Retrieve the list of members under a user group.
 *
 * @param request QueryUserGroupMemberRequest
 * @return QueryUserGroupMemberResponse
 */
QueryUserGroupMemberResponse Client::queryUserGroupMember(const QueryUserGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserGroupMemberWithOptions(request, runtime);
}

/**
 * @summary Queries user information based on the Alibaba Cloud ID or Alibaba Cloud account name.
 *
 * @param request QueryUserInfoByAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserInfoByAccountResponse
 */
QueryUserInfoByAccountResponse Client::queryUserInfoByAccountWithOptions(const QueryUserInfoByAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasParentAccountName()) {
    query["ParentAccountName"] = request.parentAccountName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUserInfoByAccount"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserInfoByAccountResponse>();
}

/**
 * @summary Queries user information based on the Alibaba Cloud ID or Alibaba Cloud account name.
 *
 * @param request QueryUserInfoByAccountRequest
 * @return QueryUserInfoByAccountResponse
 */
QueryUserInfoByAccountResponse Client::queryUserInfoByAccount(const QueryUserInfoByAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserInfoByAccountWithOptions(request, runtime);
}

/**
 * @summary Queries user information based on the user ID.
 *
 * @param request QueryUserInfoByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserInfoByUserIdResponse
 */
QueryUserInfoByUserIdResponse Client::queryUserInfoByUserIdWithOptions(const QueryUserInfoByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUserInfoByUserId"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserInfoByUserIdResponse>();
}

/**
 * @summary Queries user information based on the user ID.
 *
 * @param request QueryUserInfoByUserIdRequest
 * @return QueryUserInfoByUserIdResponse
 */
QueryUserInfoByUserIdResponse Client::queryUserInfoByUserId(const QueryUserInfoByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserInfoByUserIdWithOptions(request, runtime);
}

/**
 * @summary Queries the members of an organization.
 *
 * @param request QueryUserListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserListResponse
 */
QueryUserListResponse Client::queryUserListWithOptions(const QueryUserListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUserList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserListResponse>();
}

/**
 * @summary Queries the members of an organization.
 *
 * @param request QueryUserListRequest
 * @return QueryUserListResponse
 */
QueryUserListResponse Client::queryUserList(const QueryUserListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserListWithOptions(request, runtime);
}

/**
 * @summary Get the preset workspace role information for a specified workspace member.
 *
 * @param request QueryUserRoleInfoInWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserRoleInfoInWorkspaceResponse
 */
QueryUserRoleInfoInWorkspaceResponse Client::queryUserRoleInfoInWorkspaceWithOptions(const QueryUserRoleInfoInWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUserRoleInfoInWorkspace"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserRoleInfoInWorkspaceResponse>();
}

/**
 * @summary Get the preset workspace role information for a specified workspace member.
 *
 * @param request QueryUserRoleInfoInWorkspaceRequest
 * @return QueryUserRoleInfoInWorkspaceResponse
 */
QueryUserRoleInfoInWorkspaceResponse Client::queryUserRoleInfoInWorkspace(const QueryUserRoleInfoInWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserRoleInfoInWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Queries the metadata list of member tags in an organization.
 *
 * @param request QueryUserTagMetaListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserTagMetaListResponse
 */
QueryUserTagMetaListResponse Client::queryUserTagMetaListWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "QueryUserTagMetaList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserTagMetaListResponse>();
}

/**
 * @summary Queries the metadata list of member tags in an organization.
 *
 * @return QueryUserTagMetaListResponse
 */
QueryUserTagMetaListResponse Client::queryUserTagMetaList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserTagMetaListWithOptions(runtime);
}

/**
 * @summary Query the list of specific user tag values.
 *
 * @param request QueryUserTagValueListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserTagValueListResponse
 */
QueryUserTagValueListResponse Client::queryUserTagValueListWithOptions(const QueryUserTagValueListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUserTagValueList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserTagValueListResponse>();
}

/**
 * @summary Query the list of specific user tag values.
 *
 * @param request QueryUserTagValueListRequest
 * @return QueryUserTagValueListResponse
 */
QueryUserTagValueListResponse Client::queryUserTagValueList(const QueryUserTagValueListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserTagValueListWithOptions(request, runtime);
}

/**
 * @summary Queries information about a specified data work.
 *
 * @param request QueryWorksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryWorksResponse
 */
QueryWorksResponse Client::queryWorksWithOptions(const QueryWorksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorksId()) {
    query["WorksId"] = request.worksId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryWorks"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryWorksResponse>();
}

/**
 * @summary Queries information about a specified data work.
 *
 * @param request QueryWorksRequest
 * @return QueryWorksResponse
 */
QueryWorksResponse Client::queryWorks(const QueryWorksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryWorksWithOptions(request, runtime);
}

/**
 * @summary Obtains the kinship of a data work, including the datasets referenced by each component and query field information. Currently, only supported data works include dashboards, workbooks, and self-service data retrieval.
 *
 * @param request QueryWorksBloodRelationshipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryWorksBloodRelationshipResponse
 */
QueryWorksBloodRelationshipResponse Client::queryWorksBloodRelationshipWithOptions(const QueryWorksBloodRelationshipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorksId()) {
    query["WorksId"] = request.worksId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryWorksBloodRelationship"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryWorksBloodRelationshipResponse>();
}

/**
 * @summary Obtains the kinship of a data work, including the datasets referenced by each component and query field information. Currently, only supported data works include dashboards, workbooks, and self-service data retrieval.
 *
 * @param request QueryWorksBloodRelationshipRequest
 * @return QueryWorksBloodRelationshipResponse
 */
QueryWorksBloodRelationshipResponse Client::queryWorksBloodRelationship(const QueryWorksBloodRelationshipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryWorksBloodRelationshipWithOptions(request, runtime);
}

/**
 * @summary Query all works under the entire organization, with the option to specify the type of work.
 *
 * @param request QueryWorksByOrganizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryWorksByOrganizationResponse
 */
QueryWorksByOrganizationResponse Client::queryWorksByOrganizationWithOptions(const QueryWorksByOrganizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasThirdPartAuthFlag()) {
    query["ThirdPartAuthFlag"] = request.thirdPartAuthFlag();
  }

  if (!!request.hasWorksType()) {
    query["WorksType"] = request.worksType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryWorksByOrganization"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryWorksByOrganizationResponse>();
}

/**
 * @summary Query all works under the entire organization, with the option to specify the type of work.
 *
 * @param request QueryWorksByOrganizationRequest
 * @return QueryWorksByOrganizationResponse
 */
QueryWorksByOrganizationResponse Client::queryWorksByOrganization(const QueryWorksByOrganizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryWorksByOrganizationWithOptions(request, runtime);
}

/**
 * @summary Queries all works in a workspace under an organization. You can specify the type of work.
 *
 * @param request QueryWorksByWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryWorksByWorkspaceResponse
 */
QueryWorksByWorkspaceResponse Client::queryWorksByWorkspaceWithOptions(const QueryWorksByWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasThirdPartAuthFlag()) {
    query["ThirdPartAuthFlag"] = request.thirdPartAuthFlag();
  }

  if (!!request.hasWorksType()) {
    query["WorksType"] = request.worksType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryWorksByWorkspace"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryWorksByWorkspaceResponse>();
}

/**
 * @summary Queries all works in a workspace under an organization. You can specify the type of work.
 *
 * @param request QueryWorksByWorkspaceRequest
 * @return QueryWorksByWorkspaceResponse
 */
QueryWorksByWorkspaceResponse Client::queryWorksByWorkspace(const QueryWorksByWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryWorksByWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Get Configuration Information for a Specified Workspace Role
 *
 * @param request QueryWorkspaceRoleConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryWorkspaceRoleConfigResponse
 */
QueryWorkspaceRoleConfigResponse Client::queryWorkspaceRoleConfigWithOptions(const QueryWorkspaceRoleConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryWorkspaceRoleConfig"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryWorkspaceRoleConfigResponse>();
}

/**
 * @summary Get Configuration Information for a Specified Workspace Role
 *
 * @param request QueryWorkspaceRoleConfigRequest
 * @return QueryWorkspaceRoleConfigResponse
 */
QueryWorkspaceRoleConfigResponse Client::queryWorkspaceRoleConfig(const QueryWorkspaceRoleConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryWorkspaceRoleConfigWithOptions(request, runtime);
}

/**
 * @summary Query the list of members under a specified workspace.
 *
 * @param request QueryWorkspaceUserListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryWorkspaceUserListResponse
 */
QueryWorkspaceUserListResponse Client::queryWorkspaceUserListWithOptions(const QueryWorkspaceUserListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryWorkspaceUserList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryWorkspaceUserListResponse>();
}

/**
 * @summary Query the list of members under a specified workspace.
 *
 * @param request QueryWorkspaceUserListRequest
 * @return QueryWorkspaceUserListResponse
 */
QueryWorkspaceUserListResponse Client::queryWorkspaceUserList(const QueryWorkspaceUserListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryWorkspaceUserListWithOptions(request, runtime);
}

/**
 * @summary You can customize the callback interface for approval processes to process Quick BI approval processes.
 *
 * @param request ResultCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResultCallbackResponse
 */
ResultCallbackResponse Client::resultCallbackWithOptions(const ResultCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasHandleReason()) {
    query["HandleReason"] = request.handleReason();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResultCallback"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResultCallbackResponse>();
}

/**
 * @summary You can customize the callback interface for approval processes to process Quick BI approval processes.
 *
 * @param request ResultCallbackRequest
 * @return ResultCallbackResponse
 */
ResultCallbackResponse Client::resultCallback(const ResultCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resultCallbackWithOptions(request, runtime);
}

/**
 * @summary Add a user\\"s favorite work
 *
 * @param request SaveFavoritesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveFavoritesResponse
 */
SaveFavoritesResponse Client::saveFavoritesWithOptions(const SaveFavoritesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorksId()) {
    query["WorksId"] = request.worksId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveFavorites"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveFavoritesResponse>();
}

/**
 * @summary Add a user\\"s favorite work
 *
 * @param request SaveFavoritesRequest
 * @return SaveFavoritesResponse
 */
SaveFavoritesResponse Client::saveFavorites(const SaveFavoritesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveFavoritesWithOptions(request, runtime);
}

/**
 * @summary 设置行列权限的额外配置
 *
 * @param request SetDataLevelPermissionExtraConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDataLevelPermissionExtraConfigResponse
 */
SetDataLevelPermissionExtraConfigResponse Client::setDataLevelPermissionExtraConfigWithOptions(const SetDataLevelPermissionExtraConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  if (!!request.hasMissHitPolicy()) {
    query["MissHitPolicy"] = request.missHitPolicy();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDataLevelPermissionExtraConfig"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDataLevelPermissionExtraConfigResponse>();
}

/**
 * @summary 设置行列权限的额外配置
 *
 * @param request SetDataLevelPermissionExtraConfigRequest
 * @return SetDataLevelPermissionExtraConfigResponse
 */
SetDataLevelPermissionExtraConfigResponse Client::setDataLevelPermissionExtraConfig(const SetDataLevelPermissionExtraConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDataLevelPermissionExtraConfigWithOptions(request, runtime);
}

/**
 * @summary 设置单条数据集行列权限配置信息（新增和更新）
 *
 * @param request SetDataLevelPermissionRuleConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDataLevelPermissionRuleConfigResponse
 */
SetDataLevelPermissionRuleConfigResponse Client::setDataLevelPermissionRuleConfigWithOptions(const SetDataLevelPermissionRuleConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleModel()) {
    query["RuleModel"] = request.ruleModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDataLevelPermissionRuleConfig"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDataLevelPermissionRuleConfigResponse>();
}

/**
 * @summary 设置单条数据集行列权限配置信息（新增和更新）
 *
 * @param request SetDataLevelPermissionRuleConfigRequest
 * @return SetDataLevelPermissionRuleConfigResponse
 */
SetDataLevelPermissionRuleConfigResponse Client::setDataLevelPermissionRuleConfig(const SetDataLevelPermissionRuleConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDataLevelPermissionRuleConfigWithOptions(request, runtime);
}

/**
 * @summary Sets the whitelist for the specified row-level permissions.
 *
 * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.
 *
 * @param request SetDataLevelPermissionWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDataLevelPermissionWhiteListResponse
 */
SetDataLevelPermissionWhiteListResponse Client::setDataLevelPermissionWhiteListWithOptions(const SetDataLevelPermissionWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWhiteListModel()) {
    query["WhiteListModel"] = request.whiteListModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDataLevelPermissionWhiteList"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDataLevelPermissionWhiteListResponse>();
}

/**
 * @summary Sets the whitelist for the specified row-level permissions.
 *
 * @description > : You can only Quick BI the new row-column permission model. If you are still using the old row-column permission model, migrate to the new row-column permission model before you call this operation. To migrate row-level permissions to the new row-level permission model, perform the following steps: Choose Organizations> Security Configurations> Upgrade Row-Level Permissions. On the Upgrade Row-Level Permissions page, click **Upgrade**.
 *
 * @param request SetDataLevelPermissionWhiteListRequest
 * @return SetDataLevelPermissionWhiteListResponse
 */
SetDataLevelPermissionWhiteListResponse Client::setDataLevelPermissionWhiteList(const SetDataLevelPermissionWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDataLevelPermissionWhiteListWithOptions(request, runtime);
}

/**
 * @summary Synchronize the question count permissions of a specified user to other users
 *
 * @param request SmartqAuthTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SmartqAuthTransferResponse
 */
SmartqAuthTransferResponse Client::smartqAuthTransferWithOptions(const SmartqAuthTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOriginUserId()) {
    query["OriginUserId"] = request.originUserId();
  }

  if (!!request.hasTargetUserIds()) {
    query["TargetUserIds"] = request.targetUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SmartqAuthTransfer"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SmartqAuthTransferResponse>();
}

/**
 * @summary Synchronize the question count permissions of a specified user to other users
 *
 * @param request SmartqAuthTransferRequest
 * @return SmartqAuthTransferResponse
 */
SmartqAuthTransferResponse Client::smartqAuthTransfer(const SmartqAuthTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return smartqAuthTransferWithOptions(request, runtime);
}

/**
 * @summary Batch Management of Smart Q\\\\\\&A Authorizations
 *
 * @description Used for batch management of smart Q&A authorizations. Repeatedly adding an authorization will be treated as a new addition; repeatedly deleting an authorization will be skipped by default and will not be recorded in the audit log.
 *
 * @param request SmartqAuthorizeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SmartqAuthorizeResponse
 */
SmartqAuthorizeResponse Client::smartqAuthorizeWithOptions(const SmartqAuthorizeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeIds()) {
    query["CubeIds"] = request.cubeIds();
  }

  if (!!request.hasExpireDay()) {
    query["ExpireDay"] = request.expireDay();
  }

  if (!!request.hasLlmCubeThemes()) {
    query["LlmCubeThemes"] = request.llmCubeThemes();
  }

  if (!!request.hasLlmCubes()) {
    query["LlmCubes"] = request.llmCubes();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.operationType();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SmartqAuthorize"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SmartqAuthorizeResponse>();
}

/**
 * @summary Batch Management of Smart Q\\\\\\&A Authorizations
 *
 * @description Used for batch management of smart Q&A authorizations. Repeatedly adding an authorization will be treated as a new addition; repeatedly deleting an authorization will be skipped by default and will not be recorded in the audit log.
 *
 * @param request SmartqAuthorizeRequest
 * @return SmartqAuthorizeResponse
 */
SmartqAuthorizeResponse Client::smartqAuthorize(const SmartqAuthorizeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return smartqAuthorizeWithOptions(request, runtime);
}

/**
 * @summary Query Capability Open
 *
 * @description Special Note: When a user is authorized to call this API, it is assumed that the user has the permission to query the corresponding data by passing in the userId as that user.
 *
 * @param request SmartqQueryAbilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SmartqQueryAbilityResponse
 */
SmartqQueryAbilityResponse Client::smartqQueryAbilityWithOptions(const SmartqQueryAbilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserQuestion()) {
    query["UserQuestion"] = request.userQuestion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SmartqQueryAbility"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SmartqQueryAbilityResponse>();
}

/**
 * @summary Query Capability Open
 *
 * @description Special Note: When a user is authorized to call this API, it is assumed that the user has the permission to query the corresponding data by passing in the userId as that user.
 *
 * @param request SmartqQueryAbilityRequest
 * @return SmartqQueryAbilityResponse
 */
SmartqQueryAbilityResponse Client::smartqQueryAbility(const SmartqQueryAbilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return smartqQueryAbilityWithOptions(request, runtime);
}

/**
 * @summary 更新自定义sql数据集
 *
 * @param request UpdateCubeBySqlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCubeBySqlResponse
 */
UpdateCubeBySqlResponse Client::updateCubeBySqlWithOptions(const UpdateCubeBySqlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  if (!!request.hasCustomSql()) {
    query["CustomSql"] = request.customSql();
  }

  if (!!request.hasDsId()) {
    query["DsId"] = request.dsId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCubeBySql"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCubeBySqlResponse>();
}

/**
 * @summary 更新自定义sql数据集
 *
 * @param request UpdateCubeBySqlRequest
 * @return UpdateCubeBySqlResponse
 */
UpdateCubeBySqlResponse Client::updateCubeBySql(const UpdateCubeBySqlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCubeBySqlWithOptions(request, runtime);
}

/**
 * @summary Indicates whether the request is successful. Valid values:
 * *   true: The request was successful.
 * *   false: The request failed.
 *
 * @description The execution result of the interface. Valid values:
 * *   true: The request was successful.
 * *   false: The request failed.
 *
 * @param request UpdateDataLevelPermissionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataLevelPermissionStatusResponse
 */
UpdateDataLevelPermissionStatusResponse Client::updateDataLevelPermissionStatusWithOptions(const UpdateDataLevelPermissionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCubeId()) {
    query["CubeId"] = request.cubeId();
  }

  if (!!request.hasIsOpen()) {
    query["IsOpen"] = request.isOpen();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataLevelPermissionStatus"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataLevelPermissionStatusResponse>();
}

/**
 * @summary Indicates whether the request is successful. Valid values:
 * *   true: The request was successful.
 * *   false: The request failed.
 *
 * @description The execution result of the interface. Valid values:
 * *   true: The request was successful.
 * *   false: The request failed.
 *
 * @param request UpdateDataLevelPermissionStatusRequest
 * @return UpdateDataLevelPermissionStatusResponse
 */
UpdateDataLevelPermissionStatusResponse Client::updateDataLevelPermissionStatus(const UpdateDataLevelPermissionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataLevelPermissionStatusWithOptions(request, runtime);
}

/**
 * @summary 修改数据源配置
 *
 * @param request UpdateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSourceWithOptions(const UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUpdateModel()) {
    query["UpdateModel"] = request.updateModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataSource"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataSourceResponse>();
}

/**
 * @summary 修改数据源配置
 *
 * @param request UpdateDataSourceRequest
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSource(const UpdateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceWithOptions(request, runtime);
}

/**
 * @summary Change the embedding status of a report, turn on embedding, or turn off embedding.
 *
 * @param request UpdateEmbeddedStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEmbeddedStatusResponse
 */
UpdateEmbeddedStatusResponse Client::updateEmbeddedStatusWithOptions(const UpdateEmbeddedStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasThirdPartAuthFlag()) {
    query["ThirdPartAuthFlag"] = request.thirdPartAuthFlag();
  }

  if (!!request.hasWorksId()) {
    query["WorksId"] = request.worksId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEmbeddedStatus"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEmbeddedStatusResponse>();
}

/**
 * @summary Change the embedding status of a report, turn on embedding, or turn off embedding.
 *
 * @param request UpdateEmbeddedStatusRequest
 * @return UpdateEmbeddedStatusResponse
 */
UpdateEmbeddedStatusResponse Client::updateEmbeddedStatus(const UpdateEmbeddedStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEmbeddedStatusWithOptions(request, runtime);
}

/**
 * @summary Update the ticket quantity on the specified ticket used for the exemption embedded report.
 *
 * @param request UpdateTicketNumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTicketNumResponse
 */
UpdateTicketNumResponse Client::updateTicketNumWithOptions(const UpdateTicketNumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTicket()) {
    query["Ticket"] = request.ticket();
  }

  if (!!request.hasTicketNum()) {
    query["TicketNum"] = request.ticketNum();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTicketNum"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTicketNumResponse>();
}

/**
 * @summary Update the ticket quantity on the specified ticket used for the exemption embedded report.
 *
 * @param request UpdateTicketNumRequest
 * @return UpdateTicketNumResponse
 */
UpdateTicketNumResponse Client::updateTicketNum(const UpdateTicketNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTicketNumWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a specified member in an organization.
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdminUser()) {
    query["AdminUser"] = request.adminUser();
  }

  if (!!request.hasAuthAdminUser()) {
    query["AuthAdminUser"] = request.authAdminUser();
  }

  if (!!request.hasIsDeleted()) {
    query["IsDeleted"] = request.isDeleted();
  }

  if (!!request.hasNickName()) {
    query["NickName"] = request.nickName();
  }

  if (!!request.hasRoleIds()) {
    query["RoleIds"] = request.roleIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.userType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserResponse>();
}

/**
 * @summary Updates the information of a specified member in an organization.
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}

/**
 * @summary Updates information about a specified user group in an organization.
 *
 * @param request UpdateUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserGroupResponse
 */
UpdateUserGroupResponse Client::updateUserGroupWithOptions(const UpdateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserGroupDescription()) {
    query["UserGroupDescription"] = request.userGroupDescription();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.userGroupId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.userGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserGroup"},
    {"version" , "2022-01-01"},
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
 * @summary Updates information about a specified user group in an organization.
 *
 * @param request UpdateUserGroupRequest
 * @return UpdateUserGroupResponse
 */
UpdateUserGroupResponse Client::updateUserGroup(const UpdateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserGroupWithOptions(request, runtime);
}

/**
 * @summary Used for updating the metadata of organization member tags
 *
 * @param request UpdateUserTagMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserTagMetaResponse
 */
UpdateUserTagMetaResponse Client::updateUserTagMetaWithOptions(const UpdateUserTagMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTagDescription()) {
    query["TagDescription"] = request.tagDescription();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.tagId();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserTagMeta"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserTagMetaResponse>();
}

/**
 * @summary Used for updating the metadata of organization member tags
 *
 * @param request UpdateUserTagMetaRequest
 * @return UpdateUserTagMetaResponse
 */
UpdateUserTagMetaResponse Client::updateUserTagMeta(const UpdateUserTagMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserTagMetaWithOptions(request, runtime);
}

/**
 * @summary Update the tag value of an organization member.
 *
 * @param request UpdateUserTagValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserTagValueResponse
 */
UpdateUserTagValueResponse Client::updateUserTagValueWithOptions(const UpdateUserTagValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTagId()) {
    query["TagId"] = request.tagId();
  }

  if (!!request.hasTagValue()) {
    query["TagValue"] = request.tagValue();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserTagValue"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserTagValueResponse>();
}

/**
 * @summary Update the tag value of an organization member.
 *
 * @param request UpdateUserTagValueRequest
 * @return UpdateUserTagValueResponse
 */
UpdateUserTagValueResponse Client::updateUserTagValue(const UpdateUserTagValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserTagValueWithOptions(request, runtime);
}

/**
 * @summary Modify the role of a specified member under the workspace, existing roles will be overwritten.
 *
 * @param request UpdateWorkspaceUserRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceUserRoleResponse
 */
UpdateWorkspaceUserRoleResponse Client::updateWorkspaceUserRoleWithOptions(const UpdateWorkspaceUserRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  if (!!request.hasRoleIds()) {
    query["RoleIds"] = request.roleIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWorkspaceUserRole"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceUserRoleResponse>();
}

/**
 * @summary Modify the role of a specified member under the workspace, existing roles will be overwritten.
 *
 * @param request UpdateWorkspaceUserRoleRequest
 * @return UpdateWorkspaceUserRoleResponse
 */
UpdateWorkspaceUserRoleResponse Client::updateWorkspaceUserRole(const UpdateWorkspaceUserRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkspaceUserRoleWithOptions(request, runtime);
}

/**
 * @summary Batch update the role information of workspace members, existing roles will be overwritten
 *
 * @param request UpdateWorkspaceUsersRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceUsersRoleResponse
 */
UpdateWorkspaceUsersRoleResponse Client::updateWorkspaceUsersRoleWithOptions(const UpdateWorkspaceUsersRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWorkspaceUsersRole"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceUsersRoleResponse>();
}

/**
 * @summary Batch update the role information of workspace members, existing roles will be overwritten
 *
 * @param request UpdateWorkspaceUsersRoleRequest
 * @return UpdateWorkspaceUsersRoleResponse
 */
UpdateWorkspaceUsersRoleResponse Client::updateWorkspaceUsersRole(const UpdateWorkspaceUsersRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkspaceUsersRoleWithOptions(request, runtime);
}

/**
 * @summary Make the user exit all user groups. This process is irreversible. Exercise caution when performing this operation.
 *
 * @param request WithdrawAllUserGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WithdrawAllUserGroupsResponse
 */
WithdrawAllUserGroupsResponse Client::withdrawAllUserGroupsWithOptions(const WithdrawAllUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WithdrawAllUserGroups"},
    {"version" , "2022-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WithdrawAllUserGroupsResponse>();
}

/**
 * @summary Make the user exit all user groups. This process is irreversible. Exercise caution when performing this operation.
 *
 * @param request WithdrawAllUserGroupsRequest
 * @return WithdrawAllUserGroupsResponse
 */
WithdrawAllUserGroupsResponse Client::withdrawAllUserGroups(const WithdrawAllUserGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return withdrawAllUserGroupsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101