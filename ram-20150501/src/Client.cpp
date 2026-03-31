#include <darabonba/Core.hpp>
#include <alibabacloud/Ram20150501.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Ram20150501::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ram20150501
{

AlibabaCloud::Ram20150501::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("ram", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a Resource Access Management (RAM) user to a RAM user group.
 *
 * @param request AddUserToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToGroupResponse
 */
AddUserToGroupResponse Client::addUserToGroupWithOptions(const AddUserToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserToGroup"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserToGroupResponse>();
}

/**
 * @summary Adds a Resource Access Management (RAM) user to a RAM user group.
 *
 * @param request AddUserToGroupRequest
 * @return AddUserToGroupResponse
 */
AddUserToGroupResponse Client::addUserToGroup(const AddUserToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToGroupWithOptions(request, runtime);
}

/**
 * @summary Attaches a policy to a Resource Access Management (RAM) user group.
 *
 * @param request AttachPolicyToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachPolicyToGroupResponse
 */
AttachPolicyToGroupResponse Client::attachPolicyToGroupWithOptions(const AttachPolicyToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachPolicyToGroup"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachPolicyToGroupResponse>();
}

/**
 * @summary Attaches a policy to a Resource Access Management (RAM) user group.
 *
 * @param request AttachPolicyToGroupRequest
 * @return AttachPolicyToGroupResponse
 */
AttachPolicyToGroupResponse Client::attachPolicyToGroup(const AttachPolicyToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPolicyToGroupWithOptions(request, runtime);
}

/**
 * @summary Attaches a policy to a Resource Access Management (RAM) role.
 *
 * @param request AttachPolicyToRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachPolicyToRoleResponse
 */
AttachPolicyToRoleResponse Client::attachPolicyToRoleWithOptions(const AttachPolicyToRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachPolicyToRole"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachPolicyToRoleResponse>();
}

/**
 * @summary Attaches a policy to a Resource Access Management (RAM) role.
 *
 * @param request AttachPolicyToRoleRequest
 * @return AttachPolicyToRoleResponse
 */
AttachPolicyToRoleResponse Client::attachPolicyToRole(const AttachPolicyToRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPolicyToRoleWithOptions(request, runtime);
}

/**
 * @summary Attaches a policy to a Resource Access Management (RAM) user.
 *
 * @param request AttachPolicyToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachPolicyToUserResponse
 */
AttachPolicyToUserResponse Client::attachPolicyToUserWithOptions(const AttachPolicyToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachPolicyToUser"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachPolicyToUserResponse>();
}

/**
 * @summary Attaches a policy to a Resource Access Management (RAM) user.
 *
 * @param request AttachPolicyToUserRequest
 * @return AttachPolicyToUserResponse
 */
AttachPolicyToUserResponse Client::attachPolicyToUser(const AttachPolicyToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPolicyToUserWithOptions(request, runtime);
}

/**
 * @summary Binds a multi-factor authentication (MFA) device to a Resource Access Management (RAM) user.
 *
 * @param request BindMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindMFADeviceResponse
 */
BindMFADeviceResponse Client::bindMFADeviceWithOptions(const BindMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationCode1()) {
    query["AuthenticationCode1"] = request.getAuthenticationCode1();
  }

  if (!!request.hasAuthenticationCode2()) {
    query["AuthenticationCode2"] = request.getAuthenticationCode2();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindMFADevice"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindMFADeviceResponse>();
}

/**
 * @summary Binds a multi-factor authentication (MFA) device to a Resource Access Management (RAM) user.
 *
 * @param request BindMFADeviceRequest
 * @return BindMFADeviceResponse
 */
BindMFADeviceResponse Client::bindMFADevice(const BindMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Changes the password that is used to log on to the console for a Resource Access Management (RAM) user.
 *
 * @description >  This operation is available only for RAM users. Before you call this operation, make sure that `AllowUserToChangePassword` in [SetSecurityPreference](https://help.aliyun.com/document_detail/43765.html) is set to `True`. The value True indicates that RAM users can manage their passwords.
 *
 * @param request ChangePasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangePasswordResponse
 */
ChangePasswordResponse Client::changePasswordWithOptions(const ChangePasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewPassword()) {
    query["NewPassword"] = request.getNewPassword();
  }

  if (!!request.hasOldPassword()) {
    query["OldPassword"] = request.getOldPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangePassword"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangePasswordResponse>();
}

/**
 * @summary Changes the password that is used to log on to the console for a Resource Access Management (RAM) user.
 *
 * @description >  This operation is available only for RAM users. Before you call this operation, make sure that `AllowUserToChangePassword` in [SetSecurityPreference](https://help.aliyun.com/document_detail/43765.html) is set to `True`. The value True indicates that RAM users can manage their passwords.
 *
 * @param request ChangePasswordRequest
 * @return ChangePasswordResponse
 */
ChangePasswordResponse Client::changePassword(const ChangePasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changePasswordWithOptions(request, runtime);
}

/**
 * @summary Deletes the alias of an Alibaba Cloud account.
 *
 * @param request ClearAccountAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearAccountAliasResponse
 */
ClearAccountAliasResponse Client::clearAccountAliasWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ClearAccountAlias"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearAccountAliasResponse>();
}

/**
 * @summary Deletes the alias of an Alibaba Cloud account.
 *
 * @return ClearAccountAliasResponse
 */
ClearAccountAliasResponse Client::clearAccountAlias() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearAccountAliasWithOptions(runtime);
}

/**
 * @summary Creates an AccessKey pair for a Resource Access Management (RAM) user.
 *
 * @param request CreateAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessKeyResponse
 */
CreateAccessKeyResponse Client::createAccessKeyWithOptions(const CreateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessKey"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessKeyResponse>();
}

/**
 * @summary Creates an AccessKey pair for a Resource Access Management (RAM) user.
 *
 * @param request CreateAccessKeyRequest
 * @return CreateAccessKeyResponse
 */
CreateAccessKeyResponse Client::createAccessKey(const CreateAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessKeyWithOptions(request, runtime);
}

/**
 * @summary Creates a RAM user group.
 *
 * @param request CreateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComments()) {
    query["Comments"] = request.getComments();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGroup"},
    {"version" , "2015-05-01"},
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
 * @summary Creates a RAM user group.
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupWithOptions(request, runtime);
}

/**
 * @summary Enables console logon for a Resource Access Management (RAM) user.
 *
 * @param request CreateLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoginProfileResponse
 */
CreateLoginProfileResponse Client::createLoginProfileWithOptions(const CreateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMFABindRequired()) {
    query["MFABindRequired"] = request.getMFABindRequired();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordResetRequired()) {
    query["PasswordResetRequired"] = request.getPasswordResetRequired();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoginProfile"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoginProfileResponse>();
}

/**
 * @summary Enables console logon for a Resource Access Management (RAM) user.
 *
 * @param request CreateLoginProfileRequest
 * @return CreateLoginProfileResponse
 */
CreateLoginProfileResponse Client::createLoginProfile(const CreateLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoginProfileWithOptions(request, runtime);
}

/**
 * @summary Creates a custom policy.
 *
 * @description For more information about policies, see [Policy overview](https://help.aliyun.com/document_detail/93732.html).
 * This topic provides an example on how to create a custom policy to query Elastic Compute Service (ECS) instances in a specific region.
 *
 * @param tmpReq CreatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicyWithOptions(const CreatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePolicyShrinkRequest request = CreatePolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasPolicyDocument()) {
    query["PolicyDocument"] = request.getPolicyDocument();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolicy"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyResponse>();
}

/**
 * @summary Creates a custom policy.
 *
 * @description For more information about policies, see [Policy overview](https://help.aliyun.com/document_detail/93732.html).
 * This topic provides an example on how to create a custom policy to query Elastic Compute Service (ECS) instances in a specific region.
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a version for a policy.
 *
 * @param request CreatePolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyVersionResponse
 */
CreatePolicyVersionResponse Client::createPolicyVersionWithOptions(const CreatePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyDocument()) {
    query["PolicyDocument"] = request.getPolicyDocument();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasRotateStrategy()) {
    query["RotateStrategy"] = request.getRotateStrategy();
  }

  if (!!request.hasSetAsDefault()) {
    query["SetAsDefault"] = request.getSetAsDefault();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolicyVersion"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyVersionResponse>();
}

/**
 * @summary Creates a version for a policy.
 *
 * @param request CreatePolicyVersionRequest
 * @return CreatePolicyVersionResponse
 */
CreatePolicyVersionResponse Client::createPolicyVersion(const CreatePolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyVersionWithOptions(request, runtime);
}

/**
 * @summary Creates a Resource Access Management (RAM) role.
 *
 * @description ### [](#)Operation description
 * For more information about RAM roles, see [Overview of RAM roles](https://help.aliyun.com/document_detail/93689.html).
 *
 * @param tmpReq CreateRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRoleWithOptions(const CreateRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRoleShrinkRequest request = CreateRoleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAssumeRolePolicyDocument()) {
    query["AssumeRolePolicyDocument"] = request.getAssumeRolePolicyDocument();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasMaxSessionDuration()) {
    query["MaxSessionDuration"] = request.getMaxSessionDuration();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRole"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoleResponse>();
}

/**
 * @summary Creates a Resource Access Management (RAM) role.
 *
 * @description ### [](#)Operation description
 * For more information about RAM roles, see [Overview of RAM roles](https://help.aliyun.com/document_detail/93689.html).
 *
 * @param request CreateRoleRequest
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRole(const CreateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoleWithOptions(request, runtime);
}

/**
 * @summary Creates a Resource Access Management (RAM) user.
 *
 * @description This topic provides an example on how to create a RAM user named `alice`.
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComments()) {
    query["Comments"] = request.getComments();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasMobilePhone()) {
    query["MobilePhone"] = request.getMobilePhone();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserResponse>();
}

/**
 * @summary Creates a Resource Access Management (RAM) user.
 *
 * @description This topic provides an example on how to create a RAM user named `alice`.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary Creates a multi-factor authentication (MFA) device.
 *
 * @param request CreateVirtualMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVirtualMFADeviceResponse
 */
CreateVirtualMFADeviceResponse Client::createVirtualMFADeviceWithOptions(const CreateVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVirtualMFADeviceName()) {
    query["VirtualMFADeviceName"] = request.getVirtualMFADeviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVirtualMFADevice"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVirtualMFADeviceResponse>();
}

/**
 * @summary Creates a multi-factor authentication (MFA) device.
 *
 * @param request CreateVirtualMFADeviceRequest
 * @return CreateVirtualMFADeviceResponse
 */
CreateVirtualMFADeviceResponse Client::createVirtualMFADevice(const CreateVirtualMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVirtualMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Decodes the diagnostic information in the response that contains an access denied error. The error is caused by no RAM permissions.
 *
 * @param request DecodeDiagnosticMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DecodeDiagnosticMessageResponse
 */
DecodeDiagnosticMessageResponse Client::decodeDiagnosticMessageWithOptions(const DecodeDiagnosticMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncodedDiagnosticMessage()) {
    query["EncodedDiagnosticMessage"] = request.getEncodedDiagnosticMessage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DecodeDiagnosticMessage"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DecodeDiagnosticMessageResponse>();
}

/**
 * @summary Decodes the diagnostic information in the response that contains an access denied error. The error is caused by no RAM permissions.
 *
 * @param request DecodeDiagnosticMessageRequest
 * @return DecodeDiagnosticMessageResponse
 */
DecodeDiagnosticMessageResponse Client::decodeDiagnosticMessage(const DecodeDiagnosticMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return decodeDiagnosticMessageWithOptions(request, runtime);
}

/**
 * @summary Deletes an AccessKey pair of a Resource Access Management (RAM) user.
 *
 * @param request DeleteAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessKeyResponse
 */
DeleteAccessKeyResponse Client::deleteAccessKeyWithOptions(const DeleteAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessKey"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessKeyResponse>();
}

/**
 * @summary Deletes an AccessKey pair of a Resource Access Management (RAM) user.
 *
 * @param request DeleteAccessKeyRequest
 * @return DeleteAccessKeyResponse
 */
DeleteAccessKeyResponse Client::deleteAccessKey(const DeleteAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes a Resource Access Management (RAM) user group.
 *
 * @description Before you delete a RAM user group, make sure that no policies are attached to the group and no RAM users are included in the group.
 *
 * @param request DeleteGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGroup"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGroupResponse>();
}

/**
 * @summary Deletes a Resource Access Management (RAM) user group.
 *
 * @description Before you delete a RAM user group, make sure that no policies are attached to the group and no RAM users are included in the group.
 *
 * @param request DeleteGroupRequest
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const DeleteGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupWithOptions(request, runtime);
}

/**
 * @summary Disables console logon for a Resource Access Management (RAM) user.
 *
 * @param request DeleteLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoginProfileResponse
 */
DeleteLoginProfileResponse Client::deleteLoginProfileWithOptions(const DeleteLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLoginProfile"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLoginProfileResponse>();
}

/**
 * @summary Disables console logon for a Resource Access Management (RAM) user.
 *
 * @param request DeleteLoginProfileRequest
 * @return DeleteLoginProfileResponse
 */
DeleteLoginProfileResponse Client::deleteLoginProfile(const DeleteLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoginProfileWithOptions(request, runtime);
}

/**
 * @summary Deletes a policy.
 *
 * @param request DeletePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicyWithOptions(const DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCascadingDelete()) {
    query["CascadingDelete"] = request.getCascadingDelete();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicy"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyResponse>();
}

/**
 * @summary Deletes a policy.
 *
 * @param request DeletePolicyRequest
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const DeletePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a policy version.
 *
 * @param request DeletePolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyVersionResponse
 */
DeletePolicyVersionResponse Client::deletePolicyVersionWithOptions(const DeletePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicyVersion"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyVersionResponse>();
}

/**
 * @summary Deletes a policy version.
 *
 * @param request DeletePolicyVersionRequest
 * @return DeletePolicyVersionResponse
 */
DeletePolicyVersionResponse Client::deletePolicyVersion(const DeletePolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyVersionWithOptions(request, runtime);
}

/**
 * @summary Deletes a regular Resource Access Management (RAM) role.
 *
 * @description Before you delete a regular RAM role, call the [DetachPolicyFromRole](https://help.aliyun.com/document_detail/2337680.html) operation to remove all policies from the RAM role.
 * The DeleteRole operation cannot be used to delete service-linked roles and reserved roles for cloud services.
 *
 * @param request DeleteRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRoleWithOptions(const DeleteRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRole"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoleResponse>();
}

/**
 * @summary Deletes a regular Resource Access Management (RAM) role.
 *
 * @description Before you delete a regular RAM role, call the [DetachPolicyFromRole](https://help.aliyun.com/document_detail/2337680.html) operation to remove all policies from the RAM role.
 * The DeleteRole operation cannot be used to delete service-linked roles and reserved roles for cloud services.
 *
 * @param request DeleteRoleRequest
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRole(const DeleteRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoleWithOptions(request, runtime);
}

/**
 * @summary Deletes a Resource Access Management (RAM) user.
 *
 * @description Before you delete a RAM user, make sure that no policies are attached to the RAM user and that the RAM user does not belong to any groups.
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2015-05-01"},
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
 * @summary Deletes a Resource Access Management (RAM) user.
 *
 * @description Before you delete a RAM user, make sure that no policies are attached to the RAM user and that the RAM user does not belong to any groups.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a multi-factor authentication (MFA) device.
 *
 * @param request DeleteVirtualMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVirtualMFADeviceResponse
 */
DeleteVirtualMFADeviceResponse Client::deleteVirtualMFADeviceWithOptions(const DeleteVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVirtualMFADevice"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVirtualMFADeviceResponse>();
}

/**
 * @summary Deletes a multi-factor authentication (MFA) device.
 *
 * @param request DeleteVirtualMFADeviceRequest
 * @return DeleteVirtualMFADeviceResponse
 */
DeleteVirtualMFADeviceResponse Client::deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVirtualMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Detaches a policy from a Resource Access Management (RAM) user group.
 *
 * @param request DetachPolicyFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachPolicyFromGroupResponse
 */
DetachPolicyFromGroupResponse Client::detachPolicyFromGroupWithOptions(const DetachPolicyFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachPolicyFromGroup"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachPolicyFromGroupResponse>();
}

/**
 * @summary Detaches a policy from a Resource Access Management (RAM) user group.
 *
 * @param request DetachPolicyFromGroupRequest
 * @return DetachPolicyFromGroupResponse
 */
DetachPolicyFromGroupResponse Client::detachPolicyFromGroup(const DetachPolicyFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPolicyFromGroupWithOptions(request, runtime);
}

/**
 * @summary Detaches a policy from a Resource Access Management (RAM) role.
 *
 * @param request DetachPolicyFromRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachPolicyFromRoleResponse
 */
DetachPolicyFromRoleResponse Client::detachPolicyFromRoleWithOptions(const DetachPolicyFromRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachPolicyFromRole"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachPolicyFromRoleResponse>();
}

/**
 * @summary Detaches a policy from a Resource Access Management (RAM) role.
 *
 * @param request DetachPolicyFromRoleRequest
 * @return DetachPolicyFromRoleResponse
 */
DetachPolicyFromRoleResponse Client::detachPolicyFromRole(const DetachPolicyFromRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPolicyFromRoleWithOptions(request, runtime);
}

/**
 * @summary Detaches a policy from a Resource Access Management (RAM) user.
 *
 * @param request DetachPolicyFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachPolicyFromUserResponse
 */
DetachPolicyFromUserResponse Client::detachPolicyFromUserWithOptions(const DetachPolicyFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachPolicyFromUser"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachPolicyFromUserResponse>();
}

/**
 * @summary Detaches a policy from a Resource Access Management (RAM) user.
 *
 * @param request DetachPolicyFromUserRequest
 * @return DetachPolicyFromUserResponse
 */
DetachPolicyFromUserResponse Client::detachPolicyFromUser(const DetachPolicyFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPolicyFromUserWithOptions(request, runtime);
}

/**
 * @param request GetAccessKeyLastUsedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessKeyLastUsedResponse
 */
GetAccessKeyLastUsedResponse Client::getAccessKeyLastUsedWithOptions(const GetAccessKeyLastUsedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessKeyLastUsed"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessKeyLastUsedResponse>();
}

/**
 * @param request GetAccessKeyLastUsedRequest
 * @return GetAccessKeyLastUsedResponse
 */
GetAccessKeyLastUsedResponse Client::getAccessKeyLastUsed(const GetAccessKeyLastUsedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessKeyLastUsedWithOptions(request, runtime);
}

/**
 * @summary Queries the alias of an Alibaba Cloud account.
 *
 * @param request GetAccountAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountAliasResponse
 */
GetAccountAliasResponse Client::getAccountAliasWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetAccountAlias"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountAliasResponse>();
}

/**
 * @summary Queries the alias of an Alibaba Cloud account.
 *
 * @return GetAccountAliasResponse
 */
GetAccountAliasResponse Client::getAccountAlias() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountAliasWithOptions(runtime);
}

/**
 * @summary Queries information about a Resource Access Management (RAM) user group.
 *
 * @param request GetGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroupWithOptions(const GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroup"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGroupResponse>();
}

/**
 * @summary Queries information about a Resource Access Management (RAM) user group.
 *
 * @param request GetGroupRequest
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const GetGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the logon configurations of a Resource Access Management (RAM) user.
 *
 * @param request GetLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginProfileResponse
 */
GetLoginProfileResponse Client::getLoginProfileWithOptions(const GetLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoginProfile"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLoginProfileResponse>();
}

/**
 * @summary Queries the logon configurations of a Resource Access Management (RAM) user.
 *
 * @param request GetLoginProfileRequest
 * @return GetLoginProfileResponse
 */
GetLoginProfileResponse Client::getLoginProfile(const GetLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginProfileWithOptions(request, runtime);
}

/**
 * @summary Queries the password policy of Resource Access Management (RAM) users, including the password strength.
 *
 * @param request GetPasswordPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordPolicyResponse
 */
GetPasswordPolicyResponse Client::getPasswordPolicyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetPasswordPolicy"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPasswordPolicyResponse>();
}

/**
 * @summary Queries the password policy of Resource Access Management (RAM) users, including the password strength.
 *
 * @return GetPasswordPolicyResponse
 */
GetPasswordPolicyResponse Client::getPasswordPolicy() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordPolicyWithOptions(runtime);
}

/**
 * @summary Queries information about a policy.
 *
 * @param request GetPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicyWithOptions(const GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicy"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyResponse>();
}

/**
 * @summary Queries information about a policy.
 *
 * @param request GetPolicyRequest
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicy(const GetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a policy version.
 *
 * @param request GetPolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyVersionResponse
 */
GetPolicyVersionResponse Client::getPolicyVersionWithOptions(const GetPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicyVersion"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyVersionResponse>();
}

/**
 * @summary Queries the information about a policy version.
 *
 * @param request GetPolicyVersionRequest
 * @return GetPolicyVersionResponse
 */
GetPolicyVersionResponse Client::getPolicyVersion(const GetPolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyVersionWithOptions(request, runtime);
}

/**
 * @summary Queries information about a Resource Access Management (RAM) role.
 *
 * @param request GetRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRoleWithOptions(const GetRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRole"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoleResponse>();
}

/**
 * @summary Queries information about a Resource Access Management (RAM) role.
 *
 * @param request GetRoleRequest
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRole(const GetRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoleWithOptions(request, runtime);
}

/**
 * @summary Queries the security preferences.
 *
 * @param request GetSecurityPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecurityPreferenceResponse
 */
GetSecurityPreferenceResponse Client::getSecurityPreferenceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetSecurityPreference"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecurityPreferenceResponse>();
}

/**
 * @summary Queries the security preferences.
 *
 * @return GetSecurityPreferenceResponse
 */
GetSecurityPreferenceResponse Client::getSecurityPreference() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityPreferenceWithOptions(runtime);
}

/**
 * @summary Queries information about a Resource Access Management (RAM) user.
 *
 * @description This topic provides an example on how to query information about the RAM user `alice`.
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary Queries information about a Resource Access Management (RAM) user.
 *
 * @description This topic provides an example on how to query information about the RAM user `alice`.
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary Queries the multi-factor authentication (MFA) device that is bound to a Resource Access Management (RAM) user.
 *
 * @param request GetUserMFAInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserMFAInfoResponse
 */
GetUserMFAInfoResponse Client::getUserMFAInfoWithOptions(const GetUserMFAInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserMFAInfo"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserMFAInfoResponse>();
}

/**
 * @summary Queries the multi-factor authentication (MFA) device that is bound to a Resource Access Management (RAM) user.
 *
 * @param request GetUserMFAInfoRequest
 * @return GetUserMFAInfoResponse
 */
GetUserMFAInfoResponse Client::getUserMFAInfo(const GetUserMFAInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserMFAInfoWithOptions(request, runtime);
}

/**
 * @summary Queries all AccessKey pairs that belong to a Resource Access Management (RAM) user.
 *
 * @param request ListAccessKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessKeysResponse
 */
ListAccessKeysResponse Client::listAccessKeysWithOptions(const ListAccessKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessKeys"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessKeysResponse>();
}

/**
 * @summary Queries all AccessKey pairs that belong to a Resource Access Management (RAM) user.
 *
 * @param request ListAccessKeysRequest
 * @return ListAccessKeysResponse
 */
ListAccessKeysResponse Client::listAccessKeys(const ListAccessKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the entities to which a policy is attached.
 *
 * @param request ListEntitiesForPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEntitiesForPolicyResponse
 */
ListEntitiesForPolicyResponse Client::listEntitiesForPolicyWithOptions(const ListEntitiesForPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEntitiesForPolicy"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEntitiesForPolicyResponse>();
}

/**
 * @summary Queries the entities to which a policy is attached.
 *
 * @param request ListEntitiesForPolicyRequest
 * @return ListEntitiesForPolicyResponse
 */
ListEntitiesForPolicyResponse Client::listEntitiesForPolicy(const ListEntitiesForPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEntitiesForPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries Resource Access Management (RAM) user groups.
 *
 * @param request ListGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroupsWithOptions(const ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroups"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupsResponse>();
}

/**
 * @summary Queries Resource Access Management (RAM) user groups.
 *
 * @param request ListGroupsRequest
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroups(const ListGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the Resource Access Management (RAM) user groups to which a RAM user belongs.
 *
 * @description ### [](#)
 * This topic provides an example on how to query the RAM user groups to which the RAM user `Alice` belongs. The response shows that `Alice` belongs to the RAM user group named `Dev-Team`.
 *
 * @param request ListGroupsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUserWithOptions(const ListGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupsForUser"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupsForUserResponse>();
}

/**
 * @summary Queries the Resource Access Management (RAM) user groups to which a RAM user belongs.
 *
 * @description ### [](#)
 * This topic provides an example on how to query the RAM user groups to which the RAM user `Alice` belongs. The response shows that `Alice` belongs to the RAM user group named `Dev-Team`.
 *
 * @param request ListGroupsForUserRequest
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUser(const ListGroupsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries a list of policies.
 *
 * @param tmpReq ListPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPoliciesWithOptions(const ListPoliciesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPoliciesShrinkRequest request = ListPoliciesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicies"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesResponse>();
}

/**
 * @summary Queries a list of policies.
 *
 * @param request ListPoliciesRequest
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPolicies(const ListPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the policies that are attached to a Resource Access Management (RAM) user group.
 *
 * @param request ListPoliciesForGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesForGroupResponse
 */
ListPoliciesForGroupResponse Client::listPoliciesForGroupWithOptions(const ListPoliciesForGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPoliciesForGroup"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesForGroupResponse>();
}

/**
 * @summary Queries the policies that are attached to a Resource Access Management (RAM) user group.
 *
 * @param request ListPoliciesForGroupRequest
 * @return ListPoliciesForGroupResponse
 */
ListPoliciesForGroupResponse Client::listPoliciesForGroup(const ListPoliciesForGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesForGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the policies that are attached to a Resource Access Management (RAM) role.
 *
 * @param request ListPoliciesForRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesForRoleResponse
 */
ListPoliciesForRoleResponse Client::listPoliciesForRoleWithOptions(const ListPoliciesForRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPoliciesForRole"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesForRoleResponse>();
}

/**
 * @summary Queries the policies that are attached to a Resource Access Management (RAM) role.
 *
 * @param request ListPoliciesForRoleRequest
 * @return ListPoliciesForRoleResponse
 */
ListPoliciesForRoleResponse Client::listPoliciesForRole(const ListPoliciesForRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesForRoleWithOptions(request, runtime);
}

/**
 * @summary Queries the policies that are attached to a RAM user.
 *
 * @description > You can call this operation to query only the policies that are attached to Alibaba Cloud accounts. You cannot query the policies that are attached to resource groups.
 *
 * @param request ListPoliciesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesForUserResponse
 */
ListPoliciesForUserResponse Client::listPoliciesForUserWithOptions(const ListPoliciesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPoliciesForUser"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesForUserResponse>();
}

/**
 * @summary Queries the policies that are attached to a RAM user.
 *
 * @description > You can call this operation to query only the policies that are attached to Alibaba Cloud accounts. You cannot query the policies that are attached to resource groups.
 *
 * @param request ListPoliciesForUserRequest
 * @return ListPoliciesForUserResponse
 */
ListPoliciesForUserResponse Client::listPoliciesForUser(const ListPoliciesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the versions of a policy.
 *
 * @param request ListPolicyVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicyVersionsResponse
 */
ListPolicyVersionsResponse Client::listPolicyVersionsWithOptions(const ListPolicyVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicyVersions"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicyVersionsResponse>();
}

/**
 * @summary Queries the versions of a policy.
 *
 * @param request ListPolicyVersionsRequest
 * @return ListPolicyVersionsResponse
 */
ListPolicyVersionsResponse Client::listPolicyVersions(const ListPolicyVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicyVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries all Resource Access Management (RAM) roles.
 *
 * @param tmpReq ListRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListRolesShrinkRequest request = ListRolesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

/**
 * @summary Queries all Resource Access Management (RAM) roles.
 *
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRolesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to cloud resources which are Resource Access Management (RAM) roles and policies.
 *
 * @param tmpReq ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceNames()) {
    request.setResourceNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceNames(), "ResourceNames", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceNamesShrink()) {
    query["ResourceNames"] = request.getResourceNamesShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are added to cloud resources which are Resource Access Management (RAM) roles and policies.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all RAM users.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Queries the information about all RAM users.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Queries Resource Access Management (RAM) users in a RAM user group.
 *
 * @param request ListUsersForGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroupWithOptions(const ListUsersForGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsersForGroup"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersForGroupResponse>();
}

/**
 * @summary Queries Resource Access Management (RAM) users in a RAM user group.
 *
 * @param request ListUsersForGroupRequest
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroup(const ListUsersForGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersForGroupWithOptions(request, runtime);
}

/**
 * @summary Queries multi-factor authentication (MFA) devices.
 *
 * @param request ListVirtualMFADevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVirtualMFADevicesResponse
 */
ListVirtualMFADevicesResponse Client::listVirtualMFADevicesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListVirtualMFADevices"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVirtualMFADevicesResponse>();
}

/**
 * @summary Queries multi-factor authentication (MFA) devices.
 *
 * @return ListVirtualMFADevicesResponse
 */
ListVirtualMFADevicesResponse Client::listVirtualMFADevices() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVirtualMFADevicesWithOptions(runtime);
}

/**
 * @summary Removes a Resource Access Management (RAM) user from a RAM user group.
 *
 * @param request RemoveUserFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserFromGroupResponse
 */
RemoveUserFromGroupResponse Client::removeUserFromGroupWithOptions(const RemoveUserFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUserFromGroup"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserFromGroupResponse>();
}

/**
 * @summary Removes a Resource Access Management (RAM) user from a RAM user group.
 *
 * @param request RemoveUserFromGroupRequest
 * @return RemoveUserFromGroupResponse
 */
RemoveUserFromGroupResponse Client::removeUserFromGroup(const RemoveUserFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserFromGroupWithOptions(request, runtime);
}

/**
 * @summary Configures an alias for an Alibaba Cloud account.
 *
 * @param request SetAccountAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAccountAliasResponse
 */
SetAccountAliasResponse Client::setAccountAliasWithOptions(const SetAccountAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountAlias()) {
    query["AccountAlias"] = request.getAccountAlias();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAccountAlias"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAccountAliasResponse>();
}

/**
 * @summary Configures an alias for an Alibaba Cloud account.
 *
 * @param request SetAccountAliasRequest
 * @return SetAccountAliasResponse
 */
SetAccountAliasResponse Client::setAccountAlias(const SetAccountAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAccountAliasWithOptions(request, runtime);
}

/**
 * @summary Specifies a version for a policy as the default version.
 *
 * @param request SetDefaultPolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultPolicyVersionResponse
 */
SetDefaultPolicyVersionResponse Client::setDefaultPolicyVersionWithOptions(const SetDefaultPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDefaultPolicyVersion"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultPolicyVersionResponse>();
}

/**
 * @summary Specifies a version for a policy as the default version.
 *
 * @param request SetDefaultPolicyVersionRequest
 * @return SetDefaultPolicyVersionResponse
 */
SetDefaultPolicyVersionResponse Client::setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultPolicyVersionWithOptions(request, runtime);
}

/**
 * @summary Configures the password policy for Resource Access Management (RAM) users, including the password strength.
 *
 * @param request SetPasswordPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordPolicyResponse
 */
SetPasswordPolicyResponse Client::setPasswordPolicyWithOptions(const SetPasswordPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHardExpiry()) {
    query["HardExpiry"] = request.getHardExpiry();
  }

  if (!!request.hasMaxLoginAttemps()) {
    query["MaxLoginAttemps"] = request.getMaxLoginAttemps();
  }

  if (!!request.hasMaxPasswordAge()) {
    query["MaxPasswordAge"] = request.getMaxPasswordAge();
  }

  if (!!request.hasMinimumPasswordLength()) {
    query["MinimumPasswordLength"] = request.getMinimumPasswordLength();
  }

  if (!!request.hasPasswordReusePrevention()) {
    query["PasswordReusePrevention"] = request.getPasswordReusePrevention();
  }

  if (!!request.hasRequireLowercaseCharacters()) {
    query["RequireLowercaseCharacters"] = request.getRequireLowercaseCharacters();
  }

  if (!!request.hasRequireNumbers()) {
    query["RequireNumbers"] = request.getRequireNumbers();
  }

  if (!!request.hasRequireSymbols()) {
    query["RequireSymbols"] = request.getRequireSymbols();
  }

  if (!!request.hasRequireUppercaseCharacters()) {
    query["RequireUppercaseCharacters"] = request.getRequireUppercaseCharacters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPasswordPolicy"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPasswordPolicyResponse>();
}

/**
 * @summary Configures the password policy for Resource Access Management (RAM) users, including the password strength.
 *
 * @param request SetPasswordPolicyRequest
 * @return SetPasswordPolicyResponse
 */
SetPasswordPolicyResponse Client::setPasswordPolicy(const SetPasswordPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordPolicyWithOptions(request, runtime);
}

/**
 * @summary Configures the security preferences.
 *
 * @param request SetSecurityPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSecurityPreferenceResponse
 */
SetSecurityPreferenceResponse Client::setSecurityPreferenceWithOptions(const SetSecurityPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowUserToChangePassword()) {
    query["AllowUserToChangePassword"] = request.getAllowUserToChangePassword();
  }

  if (!!request.hasAllowUserToManageAccessKeys()) {
    query["AllowUserToManageAccessKeys"] = request.getAllowUserToManageAccessKeys();
  }

  if (!!request.hasAllowUserToManageMFADevices()) {
    query["AllowUserToManageMFADevices"] = request.getAllowUserToManageMFADevices();
  }

  if (!!request.hasAllowUserToManagePublicKeys()) {
    query["AllowUserToManagePublicKeys"] = request.getAllowUserToManagePublicKeys();
  }

  if (!!request.hasEnableSaveMFATicket()) {
    query["EnableSaveMFATicket"] = request.getEnableSaveMFATicket();
  }

  if (!!request.hasLoginNetworkMasks()) {
    query["LoginNetworkMasks"] = request.getLoginNetworkMasks();
  }

  if (!!request.hasLoginSessionDuration()) {
    query["LoginSessionDuration"] = request.getLoginSessionDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetSecurityPreference"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSecurityPreferenceResponse>();
}

/**
 * @summary Configures the security preferences.
 *
 * @param request SetSecurityPreferenceRequest
 * @return SetSecurityPreferenceResponse
 */
SetSecurityPreferenceResponse Client::setSecurityPreference(const SetSecurityPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSecurityPreferenceWithOptions(request, runtime);
}

/**
 * @summary Adds tags to cloud resources which are Resource Access Management (RAM) roles and policies.
 *
 * @param tmpReq TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TagResourcesShrinkRequest request = TagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceNames()) {
    request.setResourceNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceNames(), "ResourceNames", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasResourceNamesShrink()) {
    query["ResourceNames"] = request.getResourceNamesShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to cloud resources which are Resource Access Management (RAM) roles and policies.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbinds a multi-factor authentication (MFA) device from a Resource Access Management (RAM) user.
 *
 * @param request UnbindMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindMFADeviceResponse
 */
UnbindMFADeviceResponse Client::unbindMFADeviceWithOptions(const UnbindMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindMFADevice"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindMFADeviceResponse>();
}

/**
 * @summary Unbinds a multi-factor authentication (MFA) device from a Resource Access Management (RAM) user.
 *
 * @param request UnbindMFADeviceRequest
 * @return UnbindMFADeviceResponse
 */
UnbindMFADeviceResponse Client::unbindMFADevice(const UnbindMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Removes tags from cloud resources that are Resource Access Management (RAM) roles and policies.
 *
 * @param tmpReq UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UntagResourcesShrinkRequest request = UntagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceNames()) {
    request.setResourceNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceNames(), "ResourceNames", "json"));
  }

  if (!!tmpReq.hasTagKeys()) {
    request.setTagKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKeys(), "TagKeys", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasResourceNamesShrink()) {
    query["ResourceNames"] = request.getResourceNamesShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeysShrink()) {
    query["TagKeys"] = request.getTagKeysShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from cloud resources that are Resource Access Management (RAM) roles and policies.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Changes the status of an AccessKey pair that belongs to a Resource Access Management (RAM) user.
 *
 * @param request UpdateAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccessKeyResponse
 */
UpdateAccessKeyResponse Client::updateAccessKeyWithOptions(const UpdateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccessKey"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAccessKeyResponse>();
}

/**
 * @summary Changes the status of an AccessKey pair that belongs to a Resource Access Management (RAM) user.
 *
 * @param request UpdateAccessKeyRequest
 * @return UpdateAccessKeyResponse
 */
UpdateAccessKeyResponse Client::updateAccessKey(const UpdateAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccessKeyWithOptions(request, runtime);
}

/**
 * @summary Modifies a Resource Access Management (RAM) user group.
 *
 * @param request UpdateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroupWithOptions(const UpdateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasNewComments()) {
    query["NewComments"] = request.getNewComments();
  }

  if (!!request.hasNewGroupName()) {
    query["NewGroupName"] = request.getNewGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGroup"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGroupResponse>();
}

/**
 * @summary Modifies a Resource Access Management (RAM) user group.
 *
 * @param request UpdateGroupRequest
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroup(const UpdateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the logon configurations of a Resource Access Management (RAM) user.
 *
 * @param request UpdateLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoginProfileResponse
 */
UpdateLoginProfileResponse Client::updateLoginProfileWithOptions(const UpdateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMFABindRequired()) {
    query["MFABindRequired"] = request.getMFABindRequired();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordResetRequired()) {
    query["PasswordResetRequired"] = request.getPasswordResetRequired();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLoginProfile"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoginProfileResponse>();
}

/**
 * @summary Modifies the logon configurations of a Resource Access Management (RAM) user.
 *
 * @param request UpdateLoginProfileRequest
 * @return UpdateLoginProfileResponse
 */
UpdateLoginProfileResponse Client::updateLoginProfile(const UpdateLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoginProfileWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a custom policy.
 *
 * @description ### [](#)
 * You can call this operation to modify only the description of a custom policy. You cannot modify the description of a system policy.
 *
 * @param request UpdatePolicyDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolicyDescriptionResponse
 */
UpdatePolicyDescriptionResponse Client::updatePolicyDescriptionWithOptions(const UpdatePolicyDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.getNewDescription();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePolicyDescription"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolicyDescriptionResponse>();
}

/**
 * @summary Modifies the description of a custom policy.
 *
 * @description ### [](#)
 * You can call this operation to modify only the description of a custom policy. You cannot modify the description of a system policy.
 *
 * @param request UpdatePolicyDescriptionRequest
 * @return UpdatePolicyDescriptionResponse
 */
UpdatePolicyDescriptionResponse Client::updatePolicyDescription(const UpdatePolicyDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolicyDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies information about a Resource Access Management (RAM) role.
 *
 * @description This topic provides an example on how to change the description of `ECSAdmin` to `ECS administrator`.
 *
 * @param request UpdateRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRoleWithOptions(const UpdateRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewAssumeRolePolicyDocument()) {
    query["NewAssumeRolePolicyDocument"] = request.getNewAssumeRolePolicyDocument();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.getNewDescription();
  }

  if (!!request.hasNewMaxSessionDuration()) {
    query["NewMaxSessionDuration"] = request.getNewMaxSessionDuration();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRole"},
    {"version" , "2015-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoleResponse>();
}

/**
 * @summary Modifies information about a Resource Access Management (RAM) role.
 *
 * @description This topic provides an example on how to change the description of `ECSAdmin` to `ECS administrator`.
 *
 * @param request UpdateRoleRequest
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRole(const UpdateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRoleWithOptions(request, runtime);
}

/**
 * @summary Modifies information about a Resource Access Management (RAM) user.
 *
 * @description This topic provides an example on how to change the name of a RAM user from `zhangq****` to `xiaoq****`.
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewComments()) {
    query["NewComments"] = request.getNewComments();
  }

  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.getNewDisplayName();
  }

  if (!!request.hasNewEmail()) {
    query["NewEmail"] = request.getNewEmail();
  }

  if (!!request.hasNewMobilePhone()) {
    query["NewMobilePhone"] = request.getNewMobilePhone();
  }

  if (!!request.hasNewUserName()) {
    query["NewUserName"] = request.getNewUserName();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2015-05-01"},
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
 * @summary Modifies information about a Resource Access Management (RAM) user.
 *
 * @description This topic provides an example on how to change the name of a RAM user from `zhangq****` to `xiaoq****`.
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ram20150501