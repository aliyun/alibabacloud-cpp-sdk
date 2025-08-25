#include <darabonba/Core.hpp>
#include <alibabacloud/EdsUser20210308.hpp>
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
using namespace AlibabaCloud::EdsUser20210308::Models;
namespace AlibabaCloud
{
namespace EdsUser20210308
{

AlibabaCloud::EdsUser20210308::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("eds-user", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 批量设置桌面管理员
 *
 * @param request BatchSetDesktopManagerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetDesktopManagerResponse
 */
BatchSetDesktopManagerResponse Client::batchSetDesktopManagerWithOptions(const BatchSetDesktopManagerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsDesktopManager()) {
    body["IsDesktopManager"] = request.isDesktopManager();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchSetDesktopManager"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSetDesktopManagerResponse>();
}

/**
 * @summary 批量设置桌面管理员
 *
 * @param request BatchSetDesktopManagerRequest
 * @return BatchSetDesktopManagerResponse
 */
BatchSetDesktopManagerResponse Client::batchSetDesktopManager(const BatchSetDesktopManagerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetDesktopManagerWithOptions(request, runtime);
}

/**
 * @summary 管理员修改用户密码
 *
 * @param request ChangeUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeUserPasswordResponse
 */
ChangeUserPasswordResponse Client::changeUserPasswordWithOptions(const ChangeUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasNewPassword()) {
    body["NewPassword"] = request.newPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChangeUserPassword"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeUserPasswordResponse>();
}

/**
 * @summary 管理员修改用户密码
 *
 * @param request ChangeUserPasswordRequest
 * @return ChangeUserPasswordResponse
 */
ChangeUserPasswordResponse Client::changeUserPassword(const ChangeUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Queries whether a property is associated with one or more convenience users.
 *
 * @param request CheckUsedPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUsedPropertyResponse
 */
CheckUsedPropertyResponse Client::checkUsedPropertyWithOptions(const CheckUsedPropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPropertyId()) {
    query["PropertyId"] = request.propertyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckUsedProperty"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckUsedPropertyResponse>();
}

/**
 * @summary Queries whether a property is associated with one or more convenience users.
 *
 * @param request CheckUsedPropertyRequest
 * @return CheckUsedPropertyResponse
 */
CheckUsedPropertyResponse Client::checkUsedProperty(const CheckUsedPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUsedPropertyWithOptions(request, runtime);
}

/**
 * @summary Queries the number of convenience accounts that are associated with the specified custom property value.
 *
 * @description Before you call the operation, you can call the [ListProperty](https://help.aliyun.com/document_detail/410890.html) operation to query the existing user properties and their IDs (PropertyId) and values (PropertyValueId).
 *
 * @param request CheckUsedPropertyValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUsedPropertyValueResponse
 */
CheckUsedPropertyValueResponse Client::checkUsedPropertyValueWithOptions(const CheckUsedPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPropertyId()) {
    query["PropertyId"] = request.propertyId();
  }

  if (!!request.hasPropertyValueId()) {
    query["PropertyValueId"] = request.propertyValueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckUsedPropertyValue"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckUsedPropertyValueResponse>();
}

/**
 * @summary Queries the number of convenience accounts that are associated with the specified custom property value.
 *
 * @description Before you call the operation, you can call the [ListProperty](https://help.aliyun.com/document_detail/410890.html) operation to query the existing user properties and their IDs (PropertyId) and values (PropertyValueId).
 *
 * @param request CheckUsedPropertyValueRequest
 * @return CheckUsedPropertyValueResponse
 */
CheckUsedPropertyValueResponse Client::checkUsedPropertyValue(const CheckUsedPropertyValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUsedPropertyValueWithOptions(request, runtime);
}

/**
 * @summary 创建角色.
 *
 * @param request CreateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasParentGroupId()) {
    query["ParentGroupId"] = request.parentGroupId();
  }

  if (!!request.hasSolutionId()) {
    query["SolutionId"] = request.solutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGroup"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupResponse>();
}

/**
 * @summary 创建角色.
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupWithOptions(request, runtime);
}

/**
 * @summary 创建组织
 *
 * @param request CreateOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrgResponse
 */
CreateOrgResponse Client::createOrgWithOptions(const CreateOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrgName()) {
    query["OrgName"] = request.orgName();
  }

  if (!!request.hasParentOrgId()) {
    query["ParentOrgId"] = request.parentOrgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrg"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrgResponse>();
}

/**
 * @summary 创建组织
 *
 * @param request CreateOrgRequest
 * @return CreateOrgResponse
 */
CreateOrgResponse Client::createOrg(const CreateOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrgWithOptions(request, runtime);
}

/**
 * @summary Creates a user property.
 *
 * @param request CreatePropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePropertyResponse
 */
CreatePropertyResponse Client::createPropertyWithOptions(const CreatePropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPropertyKey()) {
    body["PropertyKey"] = request.propertyKey();
  }

  if (!!request.hasPropertyValues()) {
    body["PropertyValues"] = request.propertyValues();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateProperty"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePropertyResponse>();
}

/**
 * @summary Creates a user property.
 *
 * @param request CreatePropertyRequest
 * @return CreatePropertyResponse
 */
CreatePropertyResponse Client::createProperty(const CreatePropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPropertyWithOptions(request, runtime);
}

/**
 * @summary 创建资源组
 *
 * @param request CreateResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroupWithOptions(const CreateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsResourceGroupWithOfficeSite()) {
    query["IsResourceGroupWithOfficeSite"] = request.isResourceGroupWithOfficeSite();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateResourceGroup"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceGroupResponse>();
}

/**
 * @summary 创建资源组
 *
 * @param request CreateResourceGroupRequest
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroup(const CreateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a convenience user.
 *
 * @description Convenience users are dedicated Elastic Desktop Service (EDS) user accounts and are suitable for scenarios in which you do not need to connect to enterprise Active Directory (AD) systems. The information about a convenience user includes the username, email address, and mobile number. You must specify the username or email address.
 *
 * @param request CreateUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUsersResponse
 */
CreateUsersResponse Client::createUsersWithOptions(const CreateUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoLockTime()) {
    query["AutoLockTime"] = request.autoLockTime();
  }

  if (!!request.hasIsLocalAdmin()) {
    query["IsLocalAdmin"] = request.isLocalAdmin();
  }

  if (!!request.hasPasswordExpireDays()) {
    query["PasswordExpireDays"] = request.passwordExpireDays();
  }

  json body = {};
  if (!!request.hasPassword()) {
    body["Password"] = request.password();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUsers"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUsersResponse>();
}

/**
 * @summary Creates a convenience user.
 *
 * @description Convenience users are dedicated Elastic Desktop Service (EDS) user accounts and are suitable for scenarios in which you do not need to connect to enterprise Active Directory (AD) systems. The information about a convenience user includes the username, email address, and mobile number. You must specify the username or email address.
 *
 * @param request CreateUsersRequest
 * @return CreateUsersResponse
 */
CreateUsersResponse Client::createUsers(const CreateUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUsersWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource group.
 *
 * @param request DeleteResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroupWithOptions(const DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.resourceGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceGroup"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceGroupResponse>();
}

/**
 * @summary Deletes a resource group.
 *
 * @param request DeleteResourceGroupRequest
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroup(const DeleteResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Dissociates a user property from a user.
 *
 * @description Before you call this operation, you can call the FilterUsers operation to query the users that are associated with user properties.
 *
 * @param request DeleteUserPropertyValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserPropertyValueResponse
 */
DeleteUserPropertyValueResponse Client::deleteUserPropertyValueWithOptions(const DeleteUserPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPropertyId()) {
    body["PropertyId"] = request.propertyId();
  }

  if (!!request.hasPropertyValueId()) {
    body["PropertyValueId"] = request.propertyValueId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteUserPropertyValue"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserPropertyValueResponse>();
}

/**
 * @summary Dissociates a user property from a user.
 *
 * @description Before you call this operation, you can call the FilterUsers operation to query the users that are associated with user properties.
 *
 * @param request DeleteUserPropertyValueRequest
 * @return DeleteUserPropertyValueResponse
 */
DeleteUserPropertyValueResponse Client::deleteUserPropertyValue(const DeleteUserPropertyValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserPropertyValueWithOptions(request, runtime);
}

/**
 * @summary 全量同步初始化
 *
 * @param request DescribeGroupUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupUserResponse
 */
DescribeGroupUserResponse Client::describeGroupUserWithOptions(const DescribeGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasSolutionId()) {
    query["SolutionId"] = request.solutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupUser"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupUserResponse>();
}

/**
 * @summary 全量同步初始化
 *
 * @param request DescribeGroupUserRequest
 * @return DescribeGroupUserResponse
 */
DescribeGroupUserResponse Client::describeGroupUser(const DescribeGroupUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupUserWithOptions(request, runtime);
}

/**
 * @summary 全量同步初始化.
 *
 * @param request DescribeGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupsResponse
 */
DescribeGroupsResponse Client::describeGroupsWithOptions(const DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSolutionId()) {
    query["SolutionId"] = request.solutionId();
  }

  if (!!request.hasTransferFileNeedApproval()) {
    query["TransferFileNeedApproval"] = request.transferFileNeedApproval();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroups"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupsResponse>();
}

/**
 * @summary 全量同步初始化.
 *
 * @param request DescribeGroupsRequest
 * @return DescribeGroupsResponse
 */
DescribeGroupsResponse Client::describeGroups(const DescribeGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about virtual multi-factor authentication (MFA) devices that are bound to convenience users.
 *
 * @param request DescribeMfaDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMfaDevicesResponse
 */
DescribeMfaDevicesResponse Client::describeMfaDevicesWithOptions(const DescribeMfaDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.adDomain();
  }

  if (!!request.hasEndUserIds()) {
    query["EndUserIds"] = request.endUserIds();
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

  if (!!request.hasSerialNumbers()) {
    query["SerialNumbers"] = request.serialNumbers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMfaDevices"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMfaDevicesResponse>();
}

/**
 * @summary Queries the information about virtual multi-factor authentication (MFA) devices that are bound to convenience users.
 *
 * @param request DescribeMfaDevicesRequest
 * @return DescribeMfaDevicesResponse
 */
DescribeMfaDevicesResponse Client::describeMfaDevices(const DescribeMfaDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMfaDevicesWithOptions(request, runtime);
}

/**
 * @summary 查找下级组织
 *
 * @param request DescribeOrgByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOrgByLayerResponse
 */
DescribeOrgByLayerResponse Client::describeOrgByLayerWithOptions(const DescribeOrgByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrgName()) {
    body["OrgName"] = request.orgName();
  }

  if (!!request.hasParentOrgId()) {
    body["ParentOrgId"] = request.parentOrgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeOrgByLayer"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOrgByLayerResponse>();
}

/**
 * @summary 查找下级组织
 *
 * @param request DescribeOrgByLayerRequest
 * @return DescribeOrgByLayerResponse
 */
DescribeOrgByLayerResponse Client::describeOrgByLayer(const DescribeOrgByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOrgByLayerWithOptions(request, runtime);
}

/**
 * @summary Queries organizations.
 *
 * @description An organization is in a tree structure. The root organization ID is in the following format: org-aliyun-wy-org-id.
 *
 * @param tmpReq DescribeOrgsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOrgsResponse
 */
DescribeOrgsResponse Client::describeOrgsWithOptions(const DescribeOrgsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeOrgsShrinkRequest request = DescribeOrgsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasShowExtras()) {
    request.setShowExtrasShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.showExtras(), "ShowExtras", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrgName()) {
    query["OrgName"] = request.orgName();
  }

  if (!!request.hasParentOrgId()) {
    query["ParentOrgId"] = request.parentOrgId();
  }

  if (!!request.hasShowExtrasShrink()) {
    query["ShowExtras"] = request.showExtrasShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOrgs"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOrgsResponse>();
}

/**
 * @summary Queries organizations.
 *
 * @description An organization is in a tree structure. The root organization ID is in the following format: org-aliyun-wy-org-id.
 *
 * @param request DescribeOrgsRequest
 * @return DescribeOrgsResponse
 */
DescribeOrgsResponse Client::describeOrgs(const DescribeOrgsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOrgsWithOptions(request, runtime);
}

/**
 * @summary 查看资源组
 *
 * @param request DescribeResourceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceGroupsResponse
 */
DescribeResourceGroupsResponse Client::describeResourceGroupsWithOptions(const DescribeResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNeedContainResourceGroupWithOfficeSite()) {
    query["NeedContainResourceGroupWithOfficeSite"] = request.needContainResourceGroupWithOfficeSite();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.resourceGroupIds();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceGroups"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceGroupsResponse>();
}

/**
 * @summary 查看资源组
 *
 * @param request DescribeResourceGroupsRequest
 * @return DescribeResourceGroupsResponse
 */
DescribeResourceGroupsResponse Client::describeResourceGroups(const DescribeResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about convenience users. The information of a convenience user includes a username, an email address, and a description.
 *
 * @param tmpReq DescribeUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsersResponse
 */
DescribeUsersResponse Client::describeUsersWithOptions(const DescribeUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeUsersShrinkRequest request = DescribeUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterWithAssignedResource()) {
    request.setFilterWithAssignedResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filterWithAssignedResource(), "FilterWithAssignedResource", "json"));
  }

  if (!!tmpReq.hasFilterWithAssignedResources()) {
    request.setFilterWithAssignedResourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filterWithAssignedResources(), "FilterWithAssignedResources", "json"));
  }

  if (!!tmpReq.hasShowExtras()) {
    request.setShowExtrasShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.showExtras(), "ShowExtras", "json"));
  }

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

  json body = {};
  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasEndUserIds()) {
    body["EndUserIds"] = request.endUserIds();
  }

  if (!!request.hasExcludeEndUserIds()) {
    body["ExcludeEndUserIds"] = request.excludeEndUserIds();
  }

  if (!!request.hasExcludeGroupId()) {
    body["ExcludeGroupId"] = request.excludeGroupId();
  }

  if (!!request.hasFilterWithAssignedResourceShrink()) {
    body["FilterWithAssignedResource"] = request.filterWithAssignedResourceShrink();
  }

  if (!!request.hasFilterWithAssignedResourcesShrink()) {
    body["FilterWithAssignedResources"] = request.filterWithAssignedResourcesShrink();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasIsQueryAllSubOrgs()) {
    body["IsQueryAllSubOrgs"] = request.isQueryAllSubOrgs();
  }

  if (!!request.hasOrgId()) {
    body["OrgId"] = request.orgId();
  }

  if (!!request.hasShowExtrasShrink()) {
    body["ShowExtras"] = request.showExtrasShrink();
  }

  if (!!request.hasSolutionId()) {
    body["SolutionId"] = request.solutionId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeUsers"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUsersResponse>();
}

/**
 * @summary Queries the information about convenience users. The information of a convenience user includes a username, an email address, and a description.
 *
 * @param request DescribeUsersRequest
 * @return DescribeUsersResponse
 */
DescribeUsersResponse Client::describeUsers(const DescribeUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsersWithOptions(request, runtime);
}

/**
 * @summary Filters convenience accounts by property.
 *
 * @param tmpReq FilterUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FilterUsersResponse
 */
FilterUsersResponse Client::filterUsersWithOptions(const FilterUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FilterUsersShrinkRequest request = FilterUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrderParam()) {
    request.setOrderParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.orderParam(), "OrderParam", "json"));
  }

  json query = {};
  if (!!request.hasExcludeEndUserIds()) {
    query["ExcludeEndUserIds"] = request.excludeEndUserIds();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasIncludeDesktopCount()) {
    query["IncludeDesktopCount"] = request.includeDesktopCount();
  }

  if (!!request.hasIncludeDesktopGroupCount()) {
    query["IncludeDesktopGroupCount"] = request.includeDesktopGroupCount();
  }

  if (!!request.hasIncludeOrgInfo()) {
    query["IncludeOrgInfo"] = request.includeOrgInfo();
  }

  if (!!request.hasIncludeSupportIdps()) {
    query["IncludeSupportIdps"] = request.includeSupportIdps();
  }

  if (!!request.hasIsQueryAllSubOrgs()) {
    query["IsQueryAllSubOrgs"] = request.isQueryAllSubOrgs();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderParamShrink()) {
    query["OrderParam"] = request.orderParamShrink();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOwnerType()) {
    query["OwnerType"] = request.ownerType();
  }

  if (!!request.hasPropertyFilterParam()) {
    query["PropertyFilterParam"] = request.propertyFilterParam();
  }

  if (!!request.hasPropertyKeyValueFilterParam()) {
    query["PropertyKeyValueFilterParam"] = request.propertyKeyValueFilterParam();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FilterUsers"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FilterUsersResponse>();
}

/**
 * @summary Filters convenience accounts by property.
 *
 * @param request FilterUsersRequest
 * @return FilterUsersResponse
 */
FilterUsersResponse Client::filterUsers(const FilterUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return filterUsersWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about the current logon administrator based on the authorization code.
 *
 * @param request GetManagerInfoByAuthCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetManagerInfoByAuthCodeResponse
 */
GetManagerInfoByAuthCodeResponse Client::getManagerInfoByAuthCodeWithOptions(const GetManagerInfoByAuthCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.authCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetManagerInfoByAuthCode"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetManagerInfoByAuthCodeResponse>();
}

/**
 * @summary Obtains the information about the current logon administrator based on the authorization code.
 *
 * @param request GetManagerInfoByAuthCodeRequest
 * @return GetManagerInfoByAuthCodeResponse
 */
GetManagerInfoByAuthCodeResponse Client::getManagerInfoByAuthCode(const GetManagerInfoByAuthCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getManagerInfoByAuthCodeWithOptions(request, runtime);
}

/**
 * @summary 初始化TenantAlias
 *
 * @param request InitTenantAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitTenantAliasResponse
 */
InitTenantAliasResponse Client::initTenantAliasWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "InitTenantAlias"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitTenantAliasResponse>();
}

/**
 * @summary 初始化TenantAlias
 *
 * @return InitTenantAliasResponse
 */
InitTenantAliasResponse Client::initTenantAlias() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initTenantAliasWithOptions(runtime);
}

/**
 * @summary Queries all user properties within an Alibaba Cloud account.
 *
 * @param request ListPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPropertyResponse
 */
ListPropertyResponse Client::listPropertyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListProperty"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPropertyResponse>();
}

/**
 * @summary Queries all user properties within an Alibaba Cloud account.
 *
 * @return ListPropertyResponse
 */
ListPropertyResponse Client::listProperty() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPropertyWithOptions(runtime);
}

/**
 * @summary Queries property values of a user property.
 *
 * @param request ListPropertyValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPropertyValueResponse
 */
ListPropertyValueResponse Client::listPropertyValueWithOptions(const ListPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPropertyId()) {
    query["PropertyId"] = request.propertyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPropertyValue"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPropertyValueResponse>();
}

/**
 * @summary Queries property values of a user property.
 *
 * @param request ListPropertyValueRequest
 * @return ListPropertyValueResponse
 */
ListPropertyValueResponse Client::listPropertyValue(const ListPropertyValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPropertyValueWithOptions(request, runtime);
}

/**
 * @summary Locks a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
 *
 * @description After a virtual MFA device is locked, the status of the virtual MFA device changes to LOCKED. The convenience user to which the MFA device is bound cannot log on to the cloud desktop that resides in the workspace with the MFA feature enabled because the identity of the convenience user cannot be verified based on the virtual MFA device. You can call the [UnlockMfaDevice](https://help.aliyun.com/document_detail/286534.html) operation to unlock the virtual MFA device.
 *
 * @param request LockMfaDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LockMfaDeviceResponse
 */
LockMfaDeviceResponse Client::lockMfaDeviceWithOptions(const LockMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.adDomain();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.serialNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LockMfaDevice"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LockMfaDeviceResponse>();
}

/**
 * @summary Locks a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
 *
 * @description After a virtual MFA device is locked, the status of the virtual MFA device changes to LOCKED. The convenience user to which the MFA device is bound cannot log on to the cloud desktop that resides in the workspace with the MFA feature enabled because the identity of the convenience user cannot be verified based on the virtual MFA device. You can call the [UnlockMfaDevice](https://help.aliyun.com/document_detail/286534.html) operation to unlock the virtual MFA device.
 *
 * @param request LockMfaDeviceRequest
 * @return LockMfaDeviceResponse
 */
LockMfaDeviceResponse Client::lockMfaDevice(const LockMfaDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lockMfaDeviceWithOptions(request, runtime);
}

/**
 * @summary Locks one or more convenience users.
 *
 * @param request LockUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LockUsersResponse
 */
LockUsersResponse Client::lockUsersWithOptions(const LockUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogoutSession()) {
    query["LogoutSession"] = request.logoutSession();
  }

  json body = {};
  if (!!request.hasUsers()) {
    body["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "LockUsers"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LockUsersResponse>();
}

/**
 * @summary Locks one or more convenience users.
 *
 * @param request LockUsersRequest
 * @return LockUsersResponse
 */
LockUsersResponse Client::lockUsers(const LockUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lockUsersWithOptions(request, runtime);
}

/**
 * @summary 修改角色.
 *
 * @param request ModifyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGroupResponse
 */
ModifyGroupResponse Client::modifyGroupWithOptions(const ModifyGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNewGroupName()) {
    query["NewGroupName"] = request.newGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyGroup"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGroupResponse>();
}

/**
 * @summary 修改角色.
 *
 * @param request ModifyGroupRequest
 * @return ModifyGroupResponse
 */
ModifyGroupResponse Client::modifyGroup(const ModifyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGroupWithOptions(request, runtime);
}

/**
 * @summary 修改组织
 *
 * @param request ModifyOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOrgResponse
 */
ModifyOrgResponse Client::modifyOrgWithOptions(const ModifyOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOrgName()) {
    query["OrgName"] = request.orgName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyOrg"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOrgResponse>();
}

/**
 * @summary 修改组织
 *
 * @param request ModifyOrgRequest
 * @return ModifyOrgResponse
 */
ModifyOrgResponse Client::modifyOrg(const ModifyOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyOrgWithOptions(request, runtime);
}

/**
 * @summary Modifies user information.
 *
 * @param request ModifyUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUserWithOptions(const ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.phone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUser"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserResponse>();
}

/**
 * @summary Modifies user information.
 *
 * @param request ModifyUserRequest
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUser(const ModifyUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserWithOptions(request, runtime);
}

/**
 * @summary 移动组织
 *
 * @param request MoveOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveOrgResponse
 */
MoveOrgResponse Client::moveOrgWithOptions(const MoveOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNewParentOrgId()) {
    body["NewParentOrgId"] = request.newParentOrgId();
  }

  if (!!request.hasOrgId()) {
    body["OrgId"] = request.orgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MoveOrg"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveOrgResponse>();
}

/**
 * @summary 移动组织
 *
 * @param request MoveOrgRequest
 * @return MoveOrgResponse
 */
MoveOrgResponse Client::moveOrg(const MoveOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveOrgWithOptions(request, runtime);
}

/**
 * @summary 移动用户组织
 *
 * @param request MoveUserOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveUserOrgResponse
 */
MoveUserOrgResponse Client::moveUserOrgWithOptions(const MoveUserOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndUserIds()) {
    body["EndUserIds"] = request.endUserIds();
  }

  if (!!request.hasOrgId()) {
    body["OrgId"] = request.orgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MoveUserOrg"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveUserOrgResponse>();
}

/**
 * @summary 移动用户组织
 *
 * @param request MoveUserOrgRequest
 * @return MoveUserOrgResponse
 */
MoveUserOrgResponse Client::moveUserOrg(const MoveUserOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveUserOrgWithOptions(request, runtime);
}

/**
 * @summary 查询edu同步信息
 *
 * @param request QuerySyncStatusByAliUidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySyncStatusByAliUidResponse
 */
QuerySyncStatusByAliUidResponse Client::querySyncStatusByAliUidWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "QuerySyncStatusByAliUid"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySyncStatusByAliUidResponse>();
}

/**
 * @summary 查询edu同步信息
 *
 * @return QuerySyncStatusByAliUidResponse
 */
QuerySyncStatusByAliUidResponse Client::querySyncStatusByAliUid() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySyncStatusByAliUidWithOptions(runtime);
}

/**
 * @summary 删除角色.
 *
 * @param request RemoveGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveGroupResponse
 */
RemoveGroupResponse Client::removeGroupWithOptions(const RemoveGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveGroup"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveGroupResponse>();
}

/**
 * @summary 删除角色.
 *
 * @param request RemoveGroupRequest
 * @return RemoveGroupResponse
 */
RemoveGroupResponse Client::removeGroup(const RemoveGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeGroupWithOptions(request, runtime);
}

/**
 * @summary Removes a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
 *
 * @description If you remove a virtual MFA device that is bound to a convenience user, the convenience user can no longer use the virtual MFA device to log on to cloud desktops. Before the convenience user can log on to cloud desktops again, a new virtual MFA device must be bound to the convenience user.
 *
 * @param request RemoveMfaDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveMfaDeviceResponse
 */
RemoveMfaDeviceResponse Client::removeMfaDeviceWithOptions(const RemoveMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.adDomain();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.serialNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveMfaDevice"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveMfaDeviceResponse>();
}

/**
 * @summary Removes a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
 *
 * @description If you remove a virtual MFA device that is bound to a convenience user, the convenience user can no longer use the virtual MFA device to log on to cloud desktops. Before the convenience user can log on to cloud desktops again, a new virtual MFA device must be bound to the convenience user.
 *
 * @param request RemoveMfaDeviceRequest
 * @return RemoveMfaDeviceResponse
 */
RemoveMfaDeviceResponse Client::removeMfaDevice(const RemoveMfaDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeMfaDeviceWithOptions(request, runtime);
}

/**
 * @summary 移除组织
 *
 * @param request RemoveOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveOrgResponse
 */
RemoveOrgResponse Client::removeOrgWithOptions(const RemoveOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrgId()) {
    body["OrgId"] = request.orgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveOrg"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveOrgResponse>();
}

/**
 * @summary 移除组织
 *
 * @param request RemoveOrgRequest
 * @return RemoveOrgResponse
 */
RemoveOrgResponse Client::removeOrg(const RemoveOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeOrgWithOptions(request, runtime);
}

/**
 * @summary Deletes a user property.
 *
 * @param request RemovePropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePropertyResponse
 */
RemovePropertyResponse Client::removePropertyWithOptions(const RemovePropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPropertyId()) {
    body["PropertyId"] = request.propertyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveProperty"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePropertyResponse>();
}

/**
 * @summary Deletes a user property.
 *
 * @param request RemovePropertyRequest
 * @return RemovePropertyResponse
 */
RemovePropertyResponse Client::removeProperty(const RemovePropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePropertyWithOptions(request, runtime);
}

/**
 * @summary Removes one or more convenience users.
 *
 * @param request RemoveUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsersWithOptions(const RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUsers()) {
    body["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveUsers"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUsersResponse>();
}

/**
 * @summary Removes one or more convenience users.
 *
 * @param request RemoveUsersRequest
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsers(const RemoveUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersWithOptions(request, runtime);
}

/**
 * @summary Resets the password for a convenience user. If you call this operation, a token that is used to reset the password is generated, and the system sends a password reset email that includes the token to the email address of the convenience user.
 *
 * @param request ResetUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPasswordWithOptions(const ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNotifyType()) {
    body["NotifyType"] = request.notifyType();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResetUserPassword"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetUserPasswordResponse>();
}

/**
 * @summary Resets the password for a convenience user. If you call this operation, a token that is used to reset the password is generated, and the system sends a password reset email that includes the token to the email address of the convenience user.
 *
 * @param request ResetUserPasswordRequest
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPassword(const ResetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Associates a user property with a convenience user.
 *
 * @param request SetUserPropertyValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetUserPropertyValueResponse
 */
SetUserPropertyValueResponse Client::setUserPropertyValueWithOptions(const SetUserPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPropertyId()) {
    body["PropertyId"] = request.propertyId();
  }

  if (!!request.hasPropertyValueId()) {
    body["PropertyValueId"] = request.propertyValueId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetUserPropertyValue"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetUserPropertyValueResponse>();
}

/**
 * @summary Associates a user property with a convenience user.
 *
 * @param request SetUserPropertyValueRequest
 * @return SetUserPropertyValueResponse
 */
SetUserPropertyValueResponse Client::setUserPropertyValue(const SetUserPropertyValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setUserPropertyValueWithOptions(request, runtime);
}

/**
 * @summary 从钉钉手动同步老师学生信息
 *
 * @param request SyncAllEduInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncAllEduInfoResponse
 */
SyncAllEduInfoResponse Client::syncAllEduInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "SyncAllEduInfo"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncAllEduInfoResponse>();
}

/**
 * @summary 从钉钉手动同步老师学生信息
 *
 * @return SyncAllEduInfoResponse
 */
SyncAllEduInfoResponse Client::syncAllEduInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncAllEduInfoWithOptions(runtime);
}

/**
 * @summary Unlocks a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
 *
 * @param request UnlockMfaDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockMfaDeviceResponse
 */
UnlockMfaDeviceResponse Client::unlockMfaDeviceWithOptions(const UnlockMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.adDomain();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.serialNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnlockMfaDevice"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockMfaDeviceResponse>();
}

/**
 * @summary Unlocks a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
 *
 * @param request UnlockMfaDeviceRequest
 * @return UnlockMfaDeviceResponse
 */
UnlockMfaDeviceResponse Client::unlockMfaDevice(const UnlockMfaDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockMfaDeviceWithOptions(request, runtime);
}

/**
 * @summary Unlocks one or more convenience users.
 *
 * @param request UnlockUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockUsersResponse
 */
UnlockUsersResponse Client::unlockUsersWithOptions(const UnlockUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoLockTime()) {
    query["AutoLockTime"] = request.autoLockTime();
  }

  json body = {};
  if (!!request.hasUsers()) {
    body["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UnlockUsers"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockUsersResponse>();
}

/**
 * @summary Unlocks one or more convenience users.
 *
 * @param request UnlockUsersRequest
 * @return UnlockUsersResponse
 */
UnlockUsersResponse Client::unlockUsers(const UnlockUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockUsersWithOptions(request, runtime);
}

/**
 * @summary Modifies a user property.
 *
 * @param request UpdatePropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePropertyResponse
 */
UpdatePropertyResponse Client::updatePropertyWithOptions(const UpdatePropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPropertyId()) {
    body["PropertyId"] = request.propertyId();
  }

  if (!!request.hasPropertyKey()) {
    body["PropertyKey"] = request.propertyKey();
  }

  if (!!request.hasPropertyValues()) {
    body["PropertyValues"] = request.propertyValues();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateProperty"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePropertyResponse>();
}

/**
 * @summary Modifies a user property.
 *
 * @param request UpdatePropertyRequest
 * @return UpdatePropertyResponse
 */
UpdatePropertyResponse Client::updateProperty(const UpdatePropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePropertyWithOptions(request, runtime);
}

/**
 * @summary 用户批量分配角色
 *
 * @param request UserBatchJoinGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UserBatchJoinGroupResponse
 */
UserBatchJoinGroupResponse Client::userBatchJoinGroupWithOptions(const UserBatchJoinGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndUserIds()) {
    body["EndUserIds"] = request.endUserIds();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UserBatchJoinGroup"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UserBatchJoinGroupResponse>();
}

/**
 * @summary 用户批量分配角色
 *
 * @param request UserBatchJoinGroupRequest
 * @return UserBatchJoinGroupResponse
 */
UserBatchJoinGroupResponse Client::userBatchJoinGroup(const UserBatchJoinGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return userBatchJoinGroupWithOptions(request, runtime);
}

/**
 * @summary 用户批量移出角色
 *
 * @param request UserBatchQuitGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UserBatchQuitGroupResponse
 */
UserBatchQuitGroupResponse Client::userBatchQuitGroupWithOptions(const UserBatchQuitGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndUserIds()) {
    body["EndUserIds"] = request.endUserIds();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UserBatchQuitGroup"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UserBatchQuitGroupResponse>();
}

/**
 * @summary 用户批量移出角色
 *
 * @param request UserBatchQuitGroupRequest
 * @return UserBatchQuitGroupResponse
 */
UserBatchQuitGroupResponse Client::userBatchQuitGroup(const UserBatchQuitGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return userBatchQuitGroupWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace EdsUser20210308