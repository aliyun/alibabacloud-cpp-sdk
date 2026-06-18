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
  this->_endpointMap = json({
    {"cn-shanghai" , "eds-user.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "eds-user.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Add or remove local administrator permissions on a cloud computer for a convenience account.
 *
 * @description A convenience account with local administrator permissions can install software or modify certain system settings on the cloud computer.
 *
 * @param request BatchSetDesktopManagerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetDesktopManagerResponse
 */
BatchSetDesktopManagerResponse Client::batchSetDesktopManagerWithOptions(const BatchSetDesktopManagerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasIsDesktopManager()) {
    body["IsDesktopManager"] = request.getIsDesktopManager();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
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
 * @summary Add or remove local administrator permissions on a cloud computer for a convenience account.
 *
 * @description A convenience account with local administrator permissions can install software or modify certain system settings on the cloud computer.
 *
 * @param request BatchSetDesktopManagerRequest
 * @return BatchSetDesktopManagerResponse
 */
BatchSetDesktopManagerResponse Client::batchSetDesktopManager(const BatchSetDesktopManagerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetDesktopManagerWithOptions(request, runtime);
}

/**
 * @summary When the administrator activates the mode, you can use this API to modify the user logon password.
 *
 * @param request ChangeUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeUserPasswordResponse
 */
ChangeUserPasswordResponse Client::changeUserPasswordWithOptions(const ChangeUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasNewPassword()) {
    body["NewPassword"] = request.getNewPassword();
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
 * @summary When the administrator activates the mode, you can use this API to modify the user logon password.
 *
 * @param request ChangeUserPasswordRequest
 * @return ChangeUserPasswordResponse
 */
ChangeUserPasswordResponse Client::changeUserPassword(const ChangeUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Query the number of convenience accounts associated with a specified custom property.
 *
 * @param request CheckUsedPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUsedPropertyResponse
 */
CheckUsedPropertyResponse Client::checkUsedPropertyWithOptions(const CheckUsedPropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasPropertyId()) {
    query["PropertyId"] = request.getPropertyId();
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
 * @summary Query the number of convenience accounts associated with a specified custom property.
 *
 * @param request CheckUsedPropertyRequest
 * @return CheckUsedPropertyResponse
 */
CheckUsedPropertyResponse Client::checkUsedProperty(const CheckUsedPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUsedPropertyWithOptions(request, runtime);
}

/**
 * @summary Query the number of convenience accounts associated with a specified custom attribute value.
 *
 * @param request CheckUsedPropertyValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUsedPropertyValueResponse
 */
CheckUsedPropertyValueResponse Client::checkUsedPropertyValueWithOptions(const CheckUsedPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasPropertyId()) {
    query["PropertyId"] = request.getPropertyId();
  }

  if (!!request.hasPropertyValueId()) {
    query["PropertyValueId"] = request.getPropertyValueId();
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
 * @summary Query the number of convenience accounts associated with a specified custom attribute value.
 *
 * @param request CheckUsedPropertyValueRequest
 * @return CheckUsedPropertyValueResponse
 */
CheckUsedPropertyValueResponse Client::checkUsedPropertyValue(const CheckUsedPropertyValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUsedPropertyValueWithOptions(request, runtime);
}

/**
 * @summary Create a group.
 *
 * @param request CreateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasParentGroupId()) {
    query["ParentGroupId"] = request.getParentGroupId();
  }

  if (!!request.hasSolutionId()) {
    query["SolutionId"] = request.getSolutionId();
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
 * @summary Create a group.
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupWithOptions(request, runtime);
}

/**
 * @summary Create an organization.
 *
 * @param request CreateOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrgResponse
 */
CreateOrgResponse Client::createOrgWithOptions(const CreateOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasOrgName()) {
    query["OrgName"] = request.getOrgName();
  }

  if (!!request.hasParentOrgId()) {
    query["ParentOrgId"] = request.getParentOrgId();
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
 * @summary Create an organization.
 *
 * @param request CreateOrgRequest
 * @return CreateOrgResponse
 */
CreateOrgResponse Client::createOrg(const CreateOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrgWithOptions(request, runtime);
}

/**
 * @summary Create a user attribute.
 *
 * @description - You can create up to 10 different properties under one Alibaba Cloud account. Each property includes a property name (PropertyKey) and multiple attribute values (PropertyValue).  
 * - You can add up to 50 different attribute values to a single property.
 *
 * @param request CreatePropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePropertyResponse
 */
CreatePropertyResponse Client::createPropertyWithOptions(const CreatePropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasPropertyKey()) {
    body["PropertyKey"] = request.getPropertyKey();
  }

  if (!!request.hasPropertyValues()) {
    body["PropertyValues"] = request.getPropertyValues();
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
 * @summary Create a user attribute.
 *
 * @description - You can create up to 10 different properties under one Alibaba Cloud account. Each property includes a property name (PropertyKey) and multiple attribute values (PropertyValue).  
 * - You can add up to 50 different attribute values to a single property.
 *
 * @param request CreatePropertyRequest
 * @return CreatePropertyResponse
 */
CreatePropertyResponse Client::createProperty(const CreatePropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPropertyWithOptions(request, runtime);
}

/**
 * @summary Creates a resource group.
 *
 * @param request CreateResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroupWithOptions(const CreateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasEnableAliyunResourceGroup()) {
    query["EnableAliyunResourceGroup"] = request.getEnableAliyunResourceGroup();
  }

  if (!!request.hasIsResourceGroupWithOfficeSite()) {
    query["IsResourceGroupWithOfficeSite"] = request.getIsResourceGroupWithOfficeSite();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasResourceClassification()) {
    query["ResourceClassification"] = request.getResourceClassification();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.getResourceGroupName();
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
 * @summary Creates a resource group.
 *
 * @param request CreateResourceGroupRequest
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroup(const CreateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Easily create accounts for your end users.
 *
 * @description <props="china">
 * A convenience account is a dedicated account system in Wuying Workspace for simple use cases that do not require enterprise AD integration. Accounts require a username, and either an email or a phone number.
 * <props="intl">
 * A convenience account is a dedicated account system in Wuying Workspace for simple use cases that do not require enterprise AD integration. Accounts require both a username and an email.
 *
 * @param request CreateUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUsersResponse
 */
CreateUsersResponse Client::createUsersWithOptions(const CreateUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoLockTime()) {
    query["AutoLockTime"] = request.getAutoLockTime();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasIsLocalAdmin()) {
    query["IsLocalAdmin"] = request.getIsLocalAdmin();
  }

  if (!!request.hasPasswordExpireDays()) {
    query["PasswordExpireDays"] = request.getPasswordExpireDays();
  }

  json body = {};
  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
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
 * @summary Easily create accounts for your end users.
 *
 * @description <props="china">
 * A convenience account is a dedicated account system in Wuying Workspace for simple use cases that do not require enterprise AD integration. Accounts require a username, and either an email or a phone number.
 * <props="intl">
 * A convenience account is a dedicated account system in Wuying Workspace for simple use cases that do not require enterprise AD integration. Accounts require both a username and an email.
 *
 * @param request CreateUsersRequest
 * @return CreateUsersResponse
 */
CreateUsersResponse Client::createUsers(const CreateUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUsersWithOptions(request, runtime);
}

/**
 * @summary Delete a resource group.
 *
 * @param request DeleteResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroupWithOptions(const DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.getResourceGroupIds();
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
 * @summary Delete a resource group.
 *
 * @param request DeleteResourceGroupRequest
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroup(const DeleteResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Detach a user from a user attribute.
 *
 * @param request DeleteUserPropertyValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserPropertyValueResponse
 */
DeleteUserPropertyValueResponse Client::deleteUserPropertyValueWithOptions(const DeleteUserPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasPropertyId()) {
    body["PropertyId"] = request.getPropertyId();
  }

  if (!!request.hasPropertyValueId()) {
    body["PropertyValueId"] = request.getPropertyValueId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
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
 * @summary Detach a user from a user attribute.
 *
 * @param request DeleteUserPropertyValueRequest
 * @return DeleteUserPropertyValueResponse
 */
DeleteUserPropertyValueResponse Client::deleteUserPropertyValue(const DeleteUserPropertyValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserPropertyValueWithOptions(request, runtime);
}

/**
 * @summary Query group members.
 *
 * @param request DescribeGroupUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupUserResponse
 */
DescribeGroupUserResponse Client::describeGroupUserWithOptions(const DescribeGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSolutionId()) {
    query["SolutionId"] = request.getSolutionId();
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
 * @summary Query group members.
 *
 * @param request DescribeGroupUserRequest
 * @return DescribeGroupUserResponse
 */
DescribeGroupUserResponse Client::describeGroupUser(const DescribeGroupUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupUserWithOptions(request, runtime);
}

/**
 * @summary Query user groups.
 *
 * @param request DescribeGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupsResponse
 */
DescribeGroupsResponse Client::describeGroupsWithOptions(const DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasExcludeAttachedLoginPolicyGroups()) {
    query["ExcludeAttachedLoginPolicyGroups"] = request.getExcludeAttachedLoginPolicyGroups();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasIdpId()) {
    query["IdpId"] = request.getIdpId();
  }

  if (!!request.hasLoginPolicyId()) {
    query["LoginPolicyId"] = request.getLoginPolicyId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSolutionId()) {
    query["SolutionId"] = request.getSolutionId();
  }

  if (!!request.hasTransferFileNeedApproval()) {
    query["TransferFileNeedApproval"] = request.getTransferFileNeedApproval();
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
 * @summary Query user groups.
 *
 * @param request DescribeGroupsRequest
 * @return DescribeGroupsResponse
 */
DescribeGroupsResponse Client::describeGroups(const DescribeGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupsWithOptions(request, runtime);
}

/**
 * @summary Lists virtual MFA devices bound to directory accounts.
 *
 * @param request DescribeMfaDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMfaDevicesResponse
 */
DescribeMfaDevicesResponse Client::describeMfaDevicesWithOptions(const DescribeMfaDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.getAdDomain();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasEndUserIds()) {
    query["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSerialNumbers()) {
    query["SerialNumbers"] = request.getSerialNumbers();
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
 * @summary Lists virtual MFA devices bound to directory accounts.
 *
 * @param request DescribeMfaDevicesRequest
 * @return DescribeMfaDevicesResponse
 */
DescribeMfaDevicesResponse Client::describeMfaDevices(const DescribeMfaDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMfaDevicesWithOptions(request, runtime);
}

/**
 * @summary Find subordinate organizations.
 *
 * @param request DescribeOrgByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOrgByLayerResponse
 */
DescribeOrgByLayerResponse Client::describeOrgByLayerWithOptions(const DescribeOrgByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasOrgName()) {
    body["OrgName"] = request.getOrgName();
  }

  if (!!request.hasParentOrgId()) {
    body["ParentOrgId"] = request.getParentOrgId();
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
 * @summary Find subordinate organizations.
 *
 * @param request DescribeOrgByLayerRequest
 * @return DescribeOrgByLayerResponse
 */
DescribeOrgByLayerResponse Client::describeOrgByLayer(const DescribeOrgByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOrgByLayerWithOptions(request, runtime);
}

/**
 * @summary Queries a list of organizations.
 *
 * @description Organizations are arranged in a tree-like structure. The root organization ID is org-aliyun-wy-org-id.
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
    request.setShowExtrasShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShowExtras(), "ShowExtras", "json"));
  }

  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasIncludeOrgIds()) {
    query["IncludeOrgIds"] = request.getIncludeOrgIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrgName()) {
    query["OrgName"] = request.getOrgName();
  }

  if (!!request.hasParentOrgId()) {
    query["ParentOrgId"] = request.getParentOrgId();
  }

  if (!!request.hasShowExtrasShrink()) {
    query["ShowExtras"] = request.getShowExtrasShrink();
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
 * @summary Queries a list of organizations.
 *
 * @description Organizations are arranged in a tree-like structure. The root organization ID is org-aliyun-wy-org-id.
 *
 * @param request DescribeOrgsRequest
 * @return DescribeOrgsResponse
 */
DescribeOrgsResponse Client::describeOrgs(const DescribeOrgsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOrgsWithOptions(request, runtime);
}

/**
 * @summary View resource groups.
 *
 * @param request DescribeResourceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceGroupsResponse
 */
DescribeResourceGroupsResponse Client::describeResourceGroupsWithOptions(const DescribeResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunResourceGroupIds()) {
    query["AliyunResourceGroupIds"] = request.getAliyunResourceGroupIds();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasNeedContainResourceGroupWithOfficeSite()) {
    query["NeedContainResourceGroupWithOfficeSite"] = request.getNeedContainResourceGroupWithOfficeSite();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasResourceClassification()) {
    query["ResourceClassification"] = request.getResourceClassification();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.getResourceGroupName();
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
 * @summary View resource groups.
 *
 * @param request DescribeResourceGroupsRequest
 * @return DescribeResourceGroupsResponse
 */
DescribeResourceGroupsResponse Client::describeResourceGroups(const DescribeResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceGroupsWithOptions(request, runtime);
}

/**
 * @summary Query user basic information
 *
 * @param request DescribeUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserResponse
 */
DescribeUserResponse Client::describeUserWithOptions(const DescribeUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRequireExtraAttributes()) {
    query["RequireExtraAttributes"] = request.getRequireExtraAttributes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUser"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserResponse>();
}

/**
 * @summary Query user basic information
 *
 * @param request DescribeUserRequest
 * @return DescribeUserResponse
 */
DescribeUserResponse Client::describeUser(const DescribeUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserWithOptions(request, runtime);
}

/**
 * @summary Retrieves directory account information, including the username, email address, and display name.
 *
 * @param tmpReq DescribeUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsersResponse
 */
DescribeUsersResponse Client::describeUsersWithOptions(const DescribeUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeUsersShrinkRequest request = DescribeUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterMap()) {
    request.setFilterMapShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterMap(), "FilterMap", "json"));
  }

  if (!!tmpReq.hasFilterWithAssignedResource()) {
    request.setFilterWithAssignedResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterWithAssignedResource(), "FilterWithAssignedResource", "json"));
  }

  if (!!tmpReq.hasFilterWithAssignedResources()) {
    request.setFilterWithAssignedResourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterWithAssignedResources(), "FilterWithAssignedResources", "json"));
  }

  if (!!tmpReq.hasShowExtras()) {
    request.setShowExtrasShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShowExtras(), "ShowExtras", "json"));
  }

  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasFilterMapShrink()) {
    query["FilterMap"] = request.getFilterMapShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  json body = {};
  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasEndUserIds()) {
    body["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasExcludeEndUserIds()) {
    body["ExcludeEndUserIds"] = request.getExcludeEndUserIds();
  }

  if (!!request.hasExcludeGroupId()) {
    body["ExcludeGroupId"] = request.getExcludeGroupId();
  }

  if (!!request.hasFilterWithAssignedResourceShrink()) {
    body["FilterWithAssignedResource"] = request.getFilterWithAssignedResourceShrink();
  }

  if (!!request.hasFilterWithAssignedResourcesShrink()) {
    body["FilterWithAssignedResources"] = request.getFilterWithAssignedResourcesShrink();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIsQueryAllSubOrgs()) {
    body["IsQueryAllSubOrgs"] = request.getIsQueryAllSubOrgs();
  }

  if (!!request.hasOrgId()) {
    body["OrgId"] = request.getOrgId();
  }

  if (!!request.hasShowExtrasShrink()) {
    body["ShowExtras"] = request.getShowExtrasShrink();
  }

  if (!!request.hasSolutionId()) {
    body["SolutionId"] = request.getSolutionId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
 * @summary Retrieves directory account information, including the username, email address, and display name.
 *
 * @param request DescribeUsersRequest
 * @return DescribeUsersResponse
 */
DescribeUsersResponse Client::describeUsers(const DescribeUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsersWithOptions(request, runtime);
}

/**
 * @summary Filter account information by user attribute.
 *
 * @param tmpReq FilterUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FilterUsersResponse
 */
FilterUsersResponse Client::filterUsersWithOptions(const FilterUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FilterUsersShrinkRequest request = FilterUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterMap()) {
    request.setFilterMapShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterMap(), "FilterMap", "json"));
  }

  if (!!tmpReq.hasOrderParam()) {
    request.setOrderParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOrderParam(), "OrderParam", "json"));
  }

  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasExcludeEndUserIds()) {
    query["ExcludeEndUserIds"] = request.getExcludeEndUserIds();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasFilterMapShrink()) {
    query["FilterMap"] = request.getFilterMapShrink();
  }

  if (!!request.hasIncludeDesktopCount()) {
    query["IncludeDesktopCount"] = request.getIncludeDesktopCount();
  }

  if (!!request.hasIncludeDesktopGroupCount()) {
    query["IncludeDesktopGroupCount"] = request.getIncludeDesktopGroupCount();
  }

  if (!!request.hasIncludeEndUserIds()) {
    query["IncludeEndUserIds"] = request.getIncludeEndUserIds();
  }

  if (!!request.hasIncludeOrgInfo()) {
    query["IncludeOrgInfo"] = request.getIncludeOrgInfo();
  }

  if (!!request.hasIncludeSupportIdps()) {
    query["IncludeSupportIdps"] = request.getIncludeSupportIdps();
  }

  if (!!request.hasIsQueryAllSubOrgs()) {
    query["IsQueryAllSubOrgs"] = request.getIsQueryAllSubOrgs();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderParamShrink()) {
    query["OrderParam"] = request.getOrderParamShrink();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.getOrgId();
  }

  if (!!request.hasOwnerType()) {
    query["OwnerType"] = request.getOwnerType();
  }

  if (!!request.hasPropertyFilterParam()) {
    query["PropertyFilterParam"] = request.getPropertyFilterParam();
  }

  if (!!request.hasPropertyKeyValueFilterParam()) {
    query["PropertyKeyValueFilterParam"] = request.getPropertyKeyValueFilterParam();
  }

  if (!!request.hasShowExtras()) {
    query["ShowExtras"] = request.getShowExtras();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Filter account information by user attribute.
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
    query["AuthCode"] = request.getAuthCode();
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
 * @summary Initialize the organization ID.
 *
 * @param request InitTenantAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitTenantAliasResponse
 */
InitTenantAliasResponse Client::initTenantAliasWithOptions(const InitTenantAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @summary Initialize the organization ID.
 *
 * @param request InitTenantAliasRequest
 * @return InitTenantAliasResponse
 */
InitTenantAliasResponse Client::initTenantAlias(const InitTenantAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initTenantAliasWithOptions(request, runtime);
}

/**
 * @summary Query the list of existing user attributes under the current account.
 *
 * @param request ListPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPropertyResponse
 */
ListPropertyResponse Client::listPropertyWithOptions(const ListPropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @summary Query the list of existing user attributes under the current account.
 *
 * @param request ListPropertyRequest
 * @return ListPropertyResponse
 */
ListPropertyResponse Client::listProperty(const ListPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPropertyWithOptions(request, runtime);
}

/**
 * @summary Query the list of attribute values for a specific user attribute.
 *
 * @param request ListPropertyValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPropertyValueResponse
 */
ListPropertyValueResponse Client::listPropertyValueWithOptions(const ListPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasPropertyId()) {
    query["PropertyId"] = request.getPropertyId();
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
 * @summary Query the list of attribute values for a specific user attribute.
 *
 * @param request ListPropertyValueRequest
 * @return ListPropertyValueResponse
 */
ListPropertyValueResponse Client::listPropertyValue(const ListPropertyValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPropertyValueWithOptions(request, runtime);
}

/**
 * @summary Lock the virtual MFA device attached to a convenience account.
 *
 * @description After locking, the status of the virtual MFA device changes to LOCKED. When the associated convenience account attempts to log on to a WUYING Terminal through an office network with MFA enabled, authentication will fail due to the locked MFA device, preventing successful logon. You can invoke [UnlockMfaDevice](~~UnlockMfaDevice~~) to unlock it.
 *
 * @param request LockMfaDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LockMfaDeviceResponse
 */
LockMfaDeviceResponse Client::lockMfaDeviceWithOptions(const LockMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.getAdDomain();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
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
 * @summary Lock the virtual MFA device attached to a convenience account.
 *
 * @description After locking, the status of the virtual MFA device changes to LOCKED. When the associated convenience account attempts to log on to a WUYING Terminal through an office network with MFA enabled, authentication will fail due to the locked MFA device, preventing successful logon. You can invoke [UnlockMfaDevice](~~UnlockMfaDevice~~) to unlock it.
 *
 * @param request LockMfaDeviceRequest
 * @return LockMfaDeviceResponse
 */
LockMfaDeviceResponse Client::lockMfaDevice(const LockMfaDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lockMfaDeviceWithOptions(request, runtime);
}

/**
 * @summary Locks one or more convenience accounts. Locked convenience accounts cannot be used to sign in to Wuying clients.
 *
 * @description For security purposes, you can lock convenience accounts. Locked convenience users cannot sign in to Wuying clients, and therefore cannot access any Wuying cloud resources.
 * > Call the [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) operation to check the lock status of convenience accounts. The `Status` value in the response is 0 for unlocked accounts and 9 for locked accounts.
 *
 * @param request LockUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LockUsersResponse
 */
LockUsersResponse Client::lockUsersWithOptions(const LockUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasLogoutSession()) {
    query["LogoutSession"] = request.getLogoutSession();
  }

  json body = {};
  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
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
 * @summary Locks one or more convenience accounts. Locked convenience accounts cannot be used to sign in to Wuying clients.
 *
 * @description For security purposes, you can lock convenience accounts. Locked convenience users cannot sign in to Wuying clients, and therefore cannot access any Wuying cloud resources.
 * > Call the [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) operation to check the lock status of convenience accounts. The `Status` value in the response is 0 for unlocked accounts and 9 for locked accounts.
 *
 * @param request LockUsersRequest
 * @return LockUsersResponse
 */
LockUsersResponse Client::lockUsers(const LockUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lockUsersWithOptions(request, runtime);
}

/**
 * @summary Modify the name and description of a group.
 *
 * @param request ModifyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGroupResponse
 */
ModifyGroupResponse Client::modifyGroupWithOptions(const ModifyGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasNewGroupName()) {
    query["NewGroupName"] = request.getNewGroupName();
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
 * @summary Modify the name and description of a group.
 *
 * @param request ModifyGroupRequest
 * @return ModifyGroupResponse
 */
ModifyGroupResponse Client::modifyGroup(const ModifyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGroupWithOptions(request, runtime);
}

/**
 * @summary Modify an organization.
 *
 * @param request ModifyOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOrgResponse
 */
ModifyOrgResponse Client::modifyOrgWithOptions(const ModifyOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.getOrgId();
  }

  if (!!request.hasOrgName()) {
    query["OrgName"] = request.getOrgName();
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
 * @summary Modify an organization.
 *
 * @param request ModifyOrgRequest
 * @return ModifyOrgResponse
 */
ModifyOrgResponse Client::modifyOrg(const ModifyOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyOrgWithOptions(request, runtime);
}

/**
 * @summary Modify the contact information of a convenience account.
 *
 * @param request ModifyUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUserWithOptions(const ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
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
 * @summary Modify the contact information of a convenience account.
 *
 * @param request ModifyUserRequest
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUser(const ModifyUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserWithOptions(request, runtime);
}

/**
 * @summary Shift organization.
 *
 * @param request MoveOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveOrgResponse
 */
MoveOrgResponse Client::moveOrgWithOptions(const MoveOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasNewParentOrgId()) {
    body["NewParentOrgId"] = request.getNewParentOrgId();
  }

  if (!!request.hasOrgId()) {
    body["OrgId"] = request.getOrgId();
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
 * @summary Shift organization.
 *
 * @param request MoveOrgRequest
 * @return MoveOrgResponse
 */
MoveOrgResponse Client::moveOrg(const MoveOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveOrgWithOptions(request, runtime);
}

/**
 * @summary Shift users to the target organization architecture.
 *
 * @param request MoveUserOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveUserOrgResponse
 */
MoveUserOrgResponse Client::moveUserOrgWithOptions(const MoveUserOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasEndUserIds()) {
    body["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasOrgId()) {
    body["OrgId"] = request.getOrgId();
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
 * @summary Shift users to the target organization architecture.
 *
 * @param request MoveUserOrgRequest
 * @return MoveUserOrgResponse
 */
MoveUserOrgResponse Client::moveUserOrg(const MoveUserOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveUserOrgWithOptions(request, runtime);
}

/**
 * @summary Query the user synchronization status.
 *
 * @param request QuerySyncStatusByAliUidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySyncStatusByAliUidResponse
 */
QuerySyncStatusByAliUidResponse Client::querySyncStatusByAliUidWithOptions(const QuerySyncStatusByAliUidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @summary Query the user synchronization status.
 *
 * @param request QuerySyncStatusByAliUidRequest
 * @return QuerySyncStatusByAliUidResponse
 */
QuerySyncStatusByAliUidResponse Client::querySyncStatusByAliUid(const QuerySyncStatusByAliUidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySyncStatusByAliUidWithOptions(request, runtime);
}

/**
 * @summary Delete a group. Supports batch operations.
 *
 * @param request RemoveGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveGroupResponse
 */
RemoveGroupResponse Client::removeGroupWithOptions(const RemoveGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
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
 * @summary Delete a group. Supports batch operations.
 *
 * @param request RemoveGroupRequest
 * @return RemoveGroupResponse
 */
RemoveGroupResponse Client::removeGroup(const RemoveGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeGroupWithOptions(request, runtime);
}

/**
 * @summary Delete the virtual MFA device attached to a convenience account.
 *
 * @description Deleting the virtual MFA device attached to a convenience account unbinds the MFA device, which is equivalent to resetting or disabling it. The corresponding convenience account must reattach a new virtual MFA device when logging on to a WUYING Terminal.
 *
 * @param request RemoveMfaDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveMfaDeviceResponse
 */
RemoveMfaDeviceResponse Client::removeMfaDeviceWithOptions(const RemoveMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.getAdDomain();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
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
 * @summary Delete the virtual MFA device attached to a convenience account.
 *
 * @description Deleting the virtual MFA device attached to a convenience account unbinds the MFA device, which is equivalent to resetting or disabling it. The corresponding convenience account must reattach a new virtual MFA device when logging on to a WUYING Terminal.
 *
 * @param request RemoveMfaDeviceRequest
 * @return RemoveMfaDeviceResponse
 */
RemoveMfaDeviceResponse Client::removeMfaDevice(const RemoveMfaDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeMfaDeviceWithOptions(request, runtime);
}

/**
 * @summary Remove an organization.
 *
 * @param request RemoveOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveOrgResponse
 */
RemoveOrgResponse Client::removeOrgWithOptions(const RemoveOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasOrgId()) {
    body["OrgId"] = request.getOrgId();
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
 * @summary Remove an organization.
 *
 * @param request RemoveOrgRequest
 * @return RemoveOrgResponse
 */
RemoveOrgResponse Client::removeOrg(const RemoveOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeOrgWithOptions(request, runtime);
}

/**
 * @summary Delete a set of user attributes.
 *
 * @param request RemovePropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePropertyResponse
 */
RemovePropertyResponse Client::removePropertyWithOptions(const RemovePropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  json body = {};
  if (!!request.hasPropertyId()) {
    body["PropertyId"] = request.getPropertyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
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
 * @summary Delete a set of user attributes.
 *
 * @param request RemovePropertyRequest
 * @return RemovePropertyResponse
 */
RemovePropertyResponse Client::removeProperty(const RemovePropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePropertyWithOptions(request, runtime);
}

/**
 * @summary Delete one or more convenience accounts.
 *
 * @param request RemoveUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsersWithOptions(const RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
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
 * @summary Delete one or more convenience accounts.
 *
 * @param request RemoveUsersRequest
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsers(const RemoveUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersWithOptions(request, runtime);
}

/**
 * @summary Reset the password of a convenience account, including generating a password reset token and sending a password reset email to the mailbox of the convenience account.
 *
 * @param request ResetUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPasswordWithOptions(const ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasNotifyType()) {
    body["NotifyType"] = request.getNotifyType();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
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
 * @summary Reset the password of a convenience account, including generating a password reset token and sending a password reset email to the mailbox of the convenience account.
 *
 * @param request ResetUserPasswordRequest
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPassword(const ResetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Associate a user attribute with a specific user.
 *
 * @param request SetUserPropertyValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetUserPropertyValueResponse
 */
SetUserPropertyValueResponse Client::setUserPropertyValueWithOptions(const SetUserPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasPropertyId()) {
    body["PropertyId"] = request.getPropertyId();
  }

  if (!!request.hasPropertyValueId()) {
    body["PropertyValueId"] = request.getPropertyValueId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
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
 * @summary Associate a user attribute with a specific user.
 *
 * @param request SetUserPropertyValueRequest
 * @return SetUserPropertyValueResponse
 */
SetUserPropertyValueResponse Client::setUserPropertyValue(const SetUserPropertyValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setUserPropertyValueWithOptions(request, runtime);
}

/**
 * @summary Synchronize all education information.
 *
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
 * @summary Synchronize all education information.
 *
 * @return SyncAllEduInfoResponse
 */
SyncAllEduInfoResponse Client::syncAllEduInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncAllEduInfoWithOptions(runtime);
}

/**
 * @summary 将资源转移到资源组中
 *
 * @param request TransferResourcesIntoGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferResourcesIntoGroupResponse
 */
TransferResourcesIntoGroupResponse Client::transferResourcesIntoGroupWithOptions(const TransferResourcesIntoGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferResourcesIntoGroup"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferResourcesIntoGroupResponse>();
}

/**
 * @summary 将资源转移到资源组中
 *
 * @param request TransferResourcesIntoGroupRequest
 * @return TransferResourcesIntoGroupResponse
 */
TransferResourcesIntoGroupResponse Client::transferResourcesIntoGroup(const TransferResourcesIntoGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferResourcesIntoGroupWithOptions(request, runtime);
}

/**
 * @summary 将资源从资源组中转出
 *
 * @param request TransferResourcesOutofGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferResourcesOutofGroupResponse
 */
TransferResourcesOutofGroupResponse Client::transferResourcesOutofGroupWithOptions(const TransferResourcesOutofGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
  }

  if (!!request.hasTargetResourceGroupId()) {
    query["TargetResourceGroupId"] = request.getTargetResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferResourcesOutofGroup"},
    {"version" , "2021-03-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferResourcesOutofGroupResponse>();
}

/**
 * @summary 将资源从资源组中转出
 *
 * @param request TransferResourcesOutofGroupRequest
 * @return TransferResourcesOutofGroupResponse
 */
TransferResourcesOutofGroupResponse Client::transferResourcesOutofGroup(const TransferResourcesOutofGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferResourcesOutofGroupWithOptions(request, runtime);
}

/**
 * @summary Unlock the virtual MFA device attached to a convenience account.
 *
 * @param request UnlockMfaDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockMfaDeviceResponse
 */
UnlockMfaDeviceResponse Client::unlockMfaDeviceWithOptions(const UnlockMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.getAdDomain();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
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
 * @summary Unlock the virtual MFA device attached to a convenience account.
 *
 * @param request UnlockMfaDeviceRequest
 * @return UnlockMfaDeviceResponse
 */
UnlockMfaDeviceResponse Client::unlockMfaDevice(const UnlockMfaDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockMfaDeviceWithOptions(request, runtime);
}

/**
 * @summary Unlock one or more convenience accounts. After being unlocked, the convenience accounts can log on to WUYING Terminal.
 *
 * @description Locked convenience accounts cannot log on to WUYING Terminal and therefore cannot access any WUYING cloud resources. To allow a convenience account to log on to WUYING Terminal, you must first unlock it.  
 * > You can invoke [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query convenience account information. If the value of `Status` in the returned data is 0, the convenience account is not locked. If the value of `Status` is 9, the convenience account is locked.
 *
 * @param request UnlockUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockUsersResponse
 */
UnlockUsersResponse Client::unlockUsersWithOptions(const UnlockUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoLockTime()) {
    query["AutoLockTime"] = request.getAutoLockTime();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  json body = {};
  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
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
 * @summary Unlock one or more convenience accounts. After being unlocked, the convenience accounts can log on to WUYING Terminal.
 *
 * @description Locked convenience accounts cannot log on to WUYING Terminal and therefore cannot access any WUYING cloud resources. To allow a convenience account to log on to WUYING Terminal, you must first unlock it.  
 * > You can invoke [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query convenience account information. If the value of `Status` in the returned data is 0, the convenience account is not locked. If the value of `Status` is 9, the convenience account is locked.
 *
 * @param request UnlockUsersRequest
 * @return UnlockUsersResponse
 */
UnlockUsersResponse Client::unlockUsers(const UnlockUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockUsersWithOptions(request, runtime);
}

/**
 * @summary Modify User Attributes.
 *
 * @param request UpdatePropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePropertyResponse
 */
UpdatePropertyResponse Client::updatePropertyWithOptions(const UpdatePropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  json body = {};
  if (!!request.hasPropertyId()) {
    body["PropertyId"] = request.getPropertyId();
  }

  if (!!request.hasPropertyKey()) {
    body["PropertyKey"] = request.getPropertyKey();
  }

  if (!!request.hasPropertyValues()) {
    body["PropertyValues"] = request.getPropertyValues();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
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
 * @summary Modify User Attributes.
 *
 * @param request UpdatePropertyRequest
 * @return UpdatePropertyResponse
 */
UpdatePropertyResponse Client::updateProperty(const UpdatePropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePropertyWithOptions(request, runtime);
}

/**
 * @summary Add users to a group in batch.
 *
 * @param request UserBatchJoinGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UserBatchJoinGroupResponse
 */
UserBatchJoinGroupResponse Client::userBatchJoinGroupWithOptions(const UserBatchJoinGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasEndUserIds()) {
    body["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.getGroupId();
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
 * @summary Add users to a group in batch.
 *
 * @param request UserBatchJoinGroupRequest
 * @return UserBatchJoinGroupResponse
 */
UserBatchJoinGroupResponse Client::userBatchJoinGroup(const UserBatchJoinGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return userBatchJoinGroupWithOptions(request, runtime);
}

/**
 * @summary Remove users from a group in batch.
 *
 * @param request UserBatchQuitGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UserBatchQuitGroupResponse
 */
UserBatchQuitGroupResponse Client::userBatchQuitGroupWithOptions(const UserBatchQuitGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasEndUserIds()) {
    body["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.getGroupId();
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
 * @summary Remove users from a group in batch.
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