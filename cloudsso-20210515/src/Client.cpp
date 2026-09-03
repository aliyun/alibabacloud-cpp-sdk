#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudsso20210515.hpp>
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
using namespace AlibabaCloud::Cloudsso20210515::Models;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{

AlibabaCloud::Cloudsso20210515::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("cloudsso", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a Security Assertion Markup Language (SAML) signing certificate.
 *
 * @description You can add up to two SAML signing certificates.
 * This topic provides an example on how to add a SAML signing certificate to the directory `d-00fc2p61****`.
 *
 * @param request AddExternalSAMLIdPCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddExternalSAMLIdPCertificateResponse
 */
AddExternalSAMLIdPCertificateResponse Client::addExternalSAMLIdPCertificateWithOptions(const AddExternalSAMLIdPCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasX509Certificate()) {
    query["X509Certificate"] = request.getX509Certificate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddExternalSAMLIdPCertificate"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddExternalSAMLIdPCertificateResponse>();
}

/**
 * @summary Adds a Security Assertion Markup Language (SAML) signing certificate.
 *
 * @description You can add up to two SAML signing certificates.
 * This topic provides an example on how to add a SAML signing certificate to the directory `d-00fc2p61****`.
 *
 * @param request AddExternalSAMLIdPCertificateRequest
 * @return AddExternalSAMLIdPCertificateResponse
 */
AddExternalSAMLIdPCertificateResponse Client::addExternalSAMLIdPCertificate(const AddExternalSAMLIdPCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addExternalSAMLIdPCertificateWithOptions(request, runtime);
}

/**
 * @summary Adds a policy to an access configuration.
 *
 * @description This topic provides an example on how to add the system policy `AliyunECSFullAccess` to the access configuration `ac-00jhtfl8thteu6uj****`.
 *
 * @param request AddPermissionPolicyToAccessConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPermissionPolicyToAccessConfigurationResponse
 */
AddPermissionPolicyToAccessConfigurationResponse Client::addPermissionPolicyToAccessConfigurationWithOptions(const AddPermissionPolicyToAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasInlinePolicyDocument()) {
    query["InlinePolicyDocument"] = request.getInlinePolicyDocument();
  }

  if (!!request.hasPermissionPolicyName()) {
    query["PermissionPolicyName"] = request.getPermissionPolicyName();
  }

  if (!!request.hasPermissionPolicyType()) {
    query["PermissionPolicyType"] = request.getPermissionPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPermissionPolicyToAccessConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPermissionPolicyToAccessConfigurationResponse>();
}

/**
 * @summary Adds a policy to an access configuration.
 *
 * @description This topic provides an example on how to add the system policy `AliyunECSFullAccess` to the access configuration `ac-00jhtfl8thteu6uj****`.
 *
 * @param request AddPermissionPolicyToAccessConfigurationRequest
 * @return AddPermissionPolicyToAccessConfigurationResponse
 */
AddPermissionPolicyToAccessConfigurationResponse Client::addPermissionPolicyToAccessConfiguration(const AddPermissionPolicyToAccessConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPermissionPolicyToAccessConfigurationWithOptions(request, runtime);
}

/**
 * @summary Adds a user to a group.
 *
 * @description If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot add a user to a group that is synchronized by using SCIM.
 * This topic provides an example on how to add the user `u-00q8wbq42wiltcrk****` to the group `g-00jqzghi2n3o5hkh****`.
 *
 * @param request AddUserToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToGroupResponse
 */
AddUserToGroupResponse Client::addUserToGroupWithOptions(const AddUserToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserToGroup"},
    {"version" , "2021-05-15"},
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
 * @summary Adds a user to a group.
 *
 * @description If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot add a user to a group that is synchronized by using SCIM.
 * This topic provides an example on how to add the user `u-00q8wbq42wiltcrk****` to the group `g-00jqzghi2n3o5hkh****`.
 *
 * @param request AddUserToGroupRequest
 * @return AddUserToGroupResponse
 */
AddUserToGroupResponse Client::addUserToGroup(const AddUserToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToGroupWithOptions(request, runtime);
}

/**
 * @summary Clears the configurations of a Security Assertion Markup Language (SAML) identity provider (IdP).
 *
 * @description If single sign-on (SSO) logon is disabled, you can clear the configurations of a SAML IdP. If SSO logon is enabled, you cannot clear the configurations.
 * This topic provides an example on how to clear the configurations of the SAML IdP within the directory `d-00fc2p61****`.
 *
 * @param request ClearExternalSAMLIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearExternalSAMLIdentityProviderResponse
 */
ClearExternalSAMLIdentityProviderResponse Client::clearExternalSAMLIdentityProviderWithOptions(const ClearExternalSAMLIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearExternalSAMLIdentityProvider"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearExternalSAMLIdentityProviderResponse>();
}

/**
 * @summary Clears the configurations of a Security Assertion Markup Language (SAML) identity provider (IdP).
 *
 * @description If single sign-on (SSO) logon is disabled, you can clear the configurations of a SAML IdP. If SSO logon is enabled, you cannot clear the configurations.
 * This topic provides an example on how to clear the configurations of the SAML IdP within the directory `d-00fc2p61****`.
 *
 * @param request ClearExternalSAMLIdentityProviderRequest
 * @return ClearExternalSAMLIdentityProviderResponse
 */
ClearExternalSAMLIdentityProviderResponse Client::clearExternalSAMLIdentityProvider(const ClearExternalSAMLIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearExternalSAMLIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Assigns access permissions on an account in your resource directory to a user or a group by using an access configuration.
 *
 * @description When you call this operation, an asynchronous task is created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
 * For more information about how to assign permissions on an account in your resource directory, see [Overview of multi-account authorization](https://help.aliyun.com/document_detail/266726.html).
 * This topic provides an example on how to assign access permissions on the account `114240524784****` in your resource directory to the CloudSSO user `u-00q8wbq42wiltcrk****` by using the access configuration `ac-00jhtfl8thteu6uj****`. After the call is successful, the CloudSSO user can access resources within the account in the resource directory.
 *
 * @param request CreateAccessAssignmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessAssignmentResponse
 */
CreateAccessAssignmentResponse Client::createAccessAssignmentWithOptions(const CreateAccessAssignmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOriginTargetId()) {
    query["OriginTargetId"] = request.getOriginTargetId();
  }

  if (!!request.hasPrincipalId()) {
    query["PrincipalId"] = request.getPrincipalId();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessAssignment"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessAssignmentResponse>();
}

/**
 * @summary Assigns access permissions on an account in your resource directory to a user or a group by using an access configuration.
 *
 * @description When you call this operation, an asynchronous task is created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
 * For more information about how to assign permissions on an account in your resource directory, see [Overview of multi-account authorization](https://help.aliyun.com/document_detail/266726.html).
 * This topic provides an example on how to assign access permissions on the account `114240524784****` in your resource directory to the CloudSSO user `u-00q8wbq42wiltcrk****` by using the access configuration `ac-00jhtfl8thteu6uj****`. After the call is successful, the CloudSSO user can access resources within the account in the resource directory.
 *
 * @param request CreateAccessAssignmentRequest
 * @return CreateAccessAssignmentResponse
 */
CreateAccessAssignmentResponse Client::createAccessAssignment(const CreateAccessAssignmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessAssignmentWithOptions(request, runtime);
}

/**
 * @summary Creates an access configuration.
 *
 * @description For more information about access configurations, see [Access configuration overview](https://help.aliyun.com/document_detail/266737.html).
 * This topic provides an example on how to create an access configuration named `ECS-Admin`.
 *
 * @param request CreateAccessConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessConfigurationResponse
 */
CreateAccessConfigurationResponse Client::createAccessConfigurationWithOptions(const CreateAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationName()) {
    query["AccessConfigurationName"] = request.getAccessConfigurationName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasRelayState()) {
    query["RelayState"] = request.getRelayState();
  }

  if (!!request.hasSessionDuration()) {
    query["SessionDuration"] = request.getSessionDuration();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessConfigurationResponse>();
}

/**
 * @summary Creates an access configuration.
 *
 * @description For more information about access configurations, see [Access configuration overview](https://help.aliyun.com/document_detail/266737.html).
 * This topic provides an example on how to create an access configuration named `ECS-Admin`.
 *
 * @param request CreateAccessConfigurationRequest
 * @return CreateAccessConfigurationResponse
 */
CreateAccessConfigurationResponse Client::createAccessConfiguration(const CreateAccessConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates a directory.
 *
 * @description ### [](#)Operation description
 * A directory is a CloudSSO instance. Before you can use CloudSSO, you must create a directory. The directory is used to manage all CloudSSO resources.
 * To create a directory, you must select a region. Alibaba Cloud stores data in the directory only in the region that you select. However, you can deploy Alibaba Cloud resources including Elastic Compute Service (ECS) instances and ApsaraDB RDS instances in other regions. You can also use your cloud account for logons and access the Alibaba Cloud resources in other regions. You can select a region to create a directory based on your security compliance requirements and the geographic location of specific users. If you do not have strict security compliance requirements, we recommend that you select a region that is the closest to the geographical location of the specific users. This way, access to cloud resources is accelerated. You can create the CloudSSO directory in the China (Shanghai), China (Hong Kong), US (Silicon Valley), or Germany (Frankfurt) region.
 * This topic provides an example on how to create a directory named `example` in the China (Shanghai) region.
 * ### [](#)Limits
 * *   You can create only one directory for a management account.
 * *   If you want to change the region of a directory, you must delete the directory and then create a directory in a different region.
 *
 * @param request CreateDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDirectoryResponse
 */
CreateDirectoryResponse Client::createDirectoryWithOptions(const CreateDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryName()) {
    query["DirectoryName"] = request.getDirectoryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDirectory"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDirectoryResponse>();
}

/**
 * @summary Creates a directory.
 *
 * @description ### [](#)Operation description
 * A directory is a CloudSSO instance. Before you can use CloudSSO, you must create a directory. The directory is used to manage all CloudSSO resources.
 * To create a directory, you must select a region. Alibaba Cloud stores data in the directory only in the region that you select. However, you can deploy Alibaba Cloud resources including Elastic Compute Service (ECS) instances and ApsaraDB RDS instances in other regions. You can also use your cloud account for logons and access the Alibaba Cloud resources in other regions. You can select a region to create a directory based on your security compliance requirements and the geographic location of specific users. If you do not have strict security compliance requirements, we recommend that you select a region that is the closest to the geographical location of the specific users. This way, access to cloud resources is accelerated. You can create the CloudSSO directory in the China (Shanghai), China (Hong Kong), US (Silicon Valley), or Germany (Frankfurt) region.
 * This topic provides an example on how to create a directory named `example` in the China (Shanghai) region.
 * ### [](#)Limits
 * *   You can create only one directory for a management account.
 * *   If you want to change the region of a directory, you must delete the directory and then create a directory in a different region.
 *
 * @param request CreateDirectoryRequest
 * @return CreateDirectoryResponse
 */
CreateDirectoryResponse Client::createDirectory(const CreateDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDirectoryWithOptions(request, runtime);
}

/**
 * @summary Creates a group.
 *
 * @description This topic provides an example on how to create a group named `TestGroup`.
 *
 * @param request CreateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGroup"},
    {"version" , "2021-05-15"},
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
 * @summary Creates a group.
 *
 * @description This topic provides an example on how to create a group named `TestGroup`.
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a System for Cross-domain Identity Management (SCIM) credential.
 *
 * @description SCIM credentials are required for SCIM synchronization. You can create up to two SCIM credentials.
 * This topic provides an example on how to create a SCIM credential within the directory `d-00fc2p61****`.
 *
 * @param request CreateSCIMServerCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSCIMServerCredentialResponse
 */
CreateSCIMServerCredentialResponse Client::createSCIMServerCredentialWithOptions(const CreateSCIMServerCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSCIMServerCredential"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSCIMServerCredentialResponse>();
}

/**
 * @summary Creates a System for Cross-domain Identity Management (SCIM) credential.
 *
 * @description SCIM credentials are required for SCIM synchronization. You can create up to two SCIM credentials.
 * This topic provides an example on how to create a SCIM credential within the directory `d-00fc2p61****`.
 *
 * @param request CreateSCIMServerCredentialRequest
 * @return CreateSCIMServerCredentialResponse
 */
CreateSCIMServerCredentialResponse Client::createSCIMServerCredential(const CreateSCIMServerCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSCIMServerCredentialWithOptions(request, runtime);
}

/**
 * @summary Creates a user by calling CreateUser.
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasFirstName()) {
    query["FirstName"] = request.getFirstName();
  }

  if (!!request.hasLastName()) {
    query["LastName"] = request.getLastName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2021-05-15"},
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
 * @summary Creates a user by calling CreateUser.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary Creates a Resource Access Management (RAM) user provisioning.
 *
 * @description You can create a RAM user provisioning for a member in your resource directory to create a RAM user that has the same username as a CloudSSO user. This way, the CloudSSO user can access the resources of the member as the RAM user.
 *
 * @param request CreateUserProvisioningRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserProvisioningResponse
 */
CreateUserProvisioningResponse Client::createUserProvisioningWithOptions(const CreateUserProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletionStrategy()) {
    query["DeletionStrategy"] = request.getDeletionStrategy();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDuplicationStrategy()) {
    query["DuplicationStrategy"] = request.getDuplicationStrategy();
  }

  if (!!request.hasPrincipalId()) {
    query["PrincipalId"] = request.getPrincipalId();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUserProvisioning"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserProvisioningResponse>();
}

/**
 * @summary Creates a Resource Access Management (RAM) user provisioning.
 *
 * @description You can create a RAM user provisioning for a member in your resource directory to create a RAM user that has the same username as a CloudSSO user. This way, the CloudSSO user can access the resources of the member as the RAM user.
 *
 * @param request CreateUserProvisioningRequest
 * @return CreateUserProvisioningResponse
 */
CreateUserProvisioningResponse Client::createUserProvisioning(const CreateUserProvisioningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserProvisioningWithOptions(request, runtime);
}

/**
 * @summary Removes the access permissions on an account in a resource directory.
 *
 * @description When you call this operation, an asynchronous task is created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
 * This topic provides an example on how to remove the access permissions on the account `114240524784****` in the resource directory from the CloudSSO user `u-00q8wbq42wiltcrk****`. The access permissions are assigned by using the access configuration `ac-00jhtfl8thteu6uj****`.
 *
 * @param request DeleteAccessAssignmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessAssignmentResponse
 */
DeleteAccessAssignmentResponse Client::deleteAccessAssignmentWithOptions(const DeleteAccessAssignmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDeprovisionStrategy()) {
    query["DeprovisionStrategy"] = request.getDeprovisionStrategy();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOriginTargetId()) {
    query["OriginTargetId"] = request.getOriginTargetId();
  }

  if (!!request.hasPrincipalId()) {
    query["PrincipalId"] = request.getPrincipalId();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessAssignment"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessAssignmentResponse>();
}

/**
 * @summary Removes the access permissions on an account in a resource directory.
 *
 * @description When you call this operation, an asynchronous task is created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
 * This topic provides an example on how to remove the access permissions on the account `114240524784****` in the resource directory from the CloudSSO user `u-00q8wbq42wiltcrk****`. The access permissions are assigned by using the access configuration `ac-00jhtfl8thteu6uj****`.
 *
 * @param request DeleteAccessAssignmentRequest
 * @return DeleteAccessAssignmentResponse
 */
DeleteAccessAssignmentResponse Client::deleteAccessAssignment(const DeleteAccessAssignmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessAssignmentWithOptions(request, runtime);
}

/**
 * @summary Deletes an access configuration.
 *
 * @description ### [](#)Prerequisites
 * The access configuration that you want to delete is de-provisioned from the accounts in your resource directory. For more information, see [DeprovisionAccessConfiguration](https://help.aliyun.com/document_detail/338352.html).
 * ### [](#)Operation description
 * This topic provides an example on how to delete the access configuration whose ID is `ac-001j9mcm3k7335bc****`.
 *
 * @param request DeleteAccessConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessConfigurationResponse
 */
DeleteAccessConfigurationResponse Client::deleteAccessConfigurationWithOptions(const DeleteAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasForceRemovePermissionPolicies()) {
    query["ForceRemovePermissionPolicies"] = request.getForceRemovePermissionPolicies();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessConfigurationResponse>();
}

/**
 * @summary Deletes an access configuration.
 *
 * @description ### [](#)Prerequisites
 * The access configuration that you want to delete is de-provisioned from the accounts in your resource directory. For more information, see [DeprovisionAccessConfiguration](https://help.aliyun.com/document_detail/338352.html).
 * ### [](#)Operation description
 * This topic provides an example on how to delete the access configuration whose ID is `ac-001j9mcm3k7335bc****`.
 *
 * @param request DeleteAccessConfigurationRequest
 * @return DeleteAccessConfigurationResponse
 */
DeleteAccessConfigurationResponse Client::deleteAccessConfiguration(const DeleteAccessConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessConfigurationWithOptions(request, runtime);
}

/**
 * @summary Deletes a directory.
 *
 * @description ### [](#)Prerequisites
 * No resources are contained in the directory that you want to delete.
 * *   Access permissions on the accounts in your resource directory are removed from all users and groups. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
 * *   Users are deleted. For more information, see [DeleteUser](https://help.aliyun.com/document_detail/341671.html).
 * *   Groups are deleted. For more information, see [DeleteGroup](https://help.aliyun.com/document_detail/341821.html).
 * *   Access configurations are deleted. For more information, see [DeleteAccessConfiguration](https://help.aliyun.com/document_detail/336907.html).
 * *   System for Cross-domain Identity Management (SCIM) credentials are deleted. For more information, see [DeleteSCIMServerCredential](https://help.aliyun.com/document_detail/341842.html).
 * *   Single sign-on (SSO) logon configurations are deleted. For more information, see [ClearExternalSAMLIdentityProvider](https://help.aliyun.com/document_detail/341573.html).
 * ### [](#)Operation description
 * This topic provides an example on how to delete a directory whose ID is `d-00fc2p61****`.
 *
 * @param request DeleteDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDirectoryResponse
 */
DeleteDirectoryResponse Client::deleteDirectoryWithOptions(const DeleteDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDirectory"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDirectoryResponse>();
}

/**
 * @summary Deletes a directory.
 *
 * @description ### [](#)Prerequisites
 * No resources are contained in the directory that you want to delete.
 * *   Access permissions on the accounts in your resource directory are removed from all users and groups. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
 * *   Users are deleted. For more information, see [DeleteUser](https://help.aliyun.com/document_detail/341671.html).
 * *   Groups are deleted. For more information, see [DeleteGroup](https://help.aliyun.com/document_detail/341821.html).
 * *   Access configurations are deleted. For more information, see [DeleteAccessConfiguration](https://help.aliyun.com/document_detail/336907.html).
 * *   System for Cross-domain Identity Management (SCIM) credentials are deleted. For more information, see [DeleteSCIMServerCredential](https://help.aliyun.com/document_detail/341842.html).
 * *   Single sign-on (SSO) logon configurations are deleted. For more information, see [ClearExternalSAMLIdentityProvider](https://help.aliyun.com/document_detail/341573.html).
 * ### [](#)Operation description
 * This topic provides an example on how to delete a directory whose ID is `d-00fc2p61****`.
 *
 * @param request DeleteDirectoryRequest
 * @return DeleteDirectoryResponse
 */
DeleteDirectoryResponse Client::deleteDirectory(const DeleteDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDirectoryWithOptions(request, runtime);
}

/**
 * @summary Deletes a group.
 *
 * @description ### [](#)Prerequisites
 * The group that you want to delete is not associated with the following resources. If the group is associated with the resources, the deletion fails.
 * - Users: You must remove users from the group. For more information, see [RemoveUserFromGroup](https://help.aliyun.com/document_detail/335116.html).
 * - Access permissions: You must remove the access permissions on the accounts in your resource directory from the group. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
 * ### [](#)Operation description
 * If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot delete a group that is synchronized by using SCIM.
 * This topic provides an example on how to delete the group `g-00jqzghi2n3o5hkh****`.
 *
 * @param request DeleteGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGroup"},
    {"version" , "2021-05-15"},
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
 * @summary Deletes a group.
 *
 * @description ### [](#)Prerequisites
 * The group that you want to delete is not associated with the following resources. If the group is associated with the resources, the deletion fails.
 * - Users: You must remove users from the group. For more information, see [RemoveUserFromGroup](https://help.aliyun.com/document_detail/335116.html).
 * - Access permissions: You must remove the access permissions on the accounts in your resource directory from the group. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
 * ### [](#)Operation description
 * If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot delete a group that is synchronized by using SCIM.
 * This topic provides an example on how to delete the group `g-00jqzghi2n3o5hkh****`.
 *
 * @param request DeleteGroupRequest
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const DeleteGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes the MFA device of a user.
 *
 * @description This topic provides an example on how to delete the MFA device `mfa-00ujhet8pycljj7j****` that is attached to the user `u-00q8wbq42wiltcrk****`.
 *
 * @param request DeleteMFADeviceForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMFADeviceForUserResponse
 */
DeleteMFADeviceForUserResponse Client::deleteMFADeviceForUserWithOptions(const DeleteMFADeviceForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMFADeviceId()) {
    query["MFADeviceId"] = request.getMFADeviceId();
  }

  if (!!request.hasMfaType()) {
    query["MfaType"] = request.getMfaType();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMFADeviceForUser"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMFADeviceForUserResponse>();
}

/**
 * @summary Deletes the MFA device of a user.
 *
 * @description This topic provides an example on how to delete the MFA device `mfa-00ujhet8pycljj7j****` that is attached to the user `u-00q8wbq42wiltcrk****`.
 *
 * @param request DeleteMFADeviceForUserRequest
 * @return DeleteMFADeviceForUserResponse
 */
DeleteMFADeviceForUserResponse Client::deleteMFADeviceForUser(const DeleteMFADeviceForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMFADeviceForUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a System for Cross-domain Identity Management (SCIM) credential.
 *
 * @description After a SCIM credential is deleted, the synchronization task that uses the SCIM credential fails.
 * This topic provides an example on how to delete the SCIM credential whose ID is `scimcred-004whl0kvfwcypbi****`.
 *
 * @param request DeleteSCIMServerCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSCIMServerCredentialResponse
 */
DeleteSCIMServerCredentialResponse Client::deleteSCIMServerCredentialWithOptions(const DeleteSCIMServerCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialId()) {
    query["CredentialId"] = request.getCredentialId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSCIMServerCredential"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSCIMServerCredentialResponse>();
}

/**
 * @summary Deletes a System for Cross-domain Identity Management (SCIM) credential.
 *
 * @description After a SCIM credential is deleted, the synchronization task that uses the SCIM credential fails.
 * This topic provides an example on how to delete the SCIM credential whose ID is `scimcred-004whl0kvfwcypbi****`.
 *
 * @param request DeleteSCIMServerCredentialRequest
 * @return DeleteSCIMServerCredentialResponse
 */
DeleteSCIMServerCredentialResponse Client::deleteSCIMServerCredential(const DeleteSCIMServerCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSCIMServerCredentialWithOptions(request, runtime);
}

/**
 * @summary Deletes a user.
 *
 * @description ### [](#)Prerequisites
 * Before you delete a user, make sure that the user is not associated with the following resources. Otherwise, the deletion fails.
 * *   Multi-factor authentication (MFA) devices: You must delete the MFA devices bound to the user. For more information, see [DeleteMFADeviceForUser](https://help.aliyun.com/document_detail/341675.html).
 * *   Access permissions: You must remove the access permissions on the accounts in your resource directory from the user. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
 * *   Groups: You must remove the user from groups. For more information, see [RemoveUserFromGroup](https://help.aliyun.com/document_detail/335116.html).
 * ### [](#)Precautions
 * If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot delete a user that is synchronized by using SCIM.
 * This topic provides an example on how to delete the user whose ID is `u-00q8wbq42wiltcrk****`.
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2021-05-15"},
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
 * @summary Deletes a user.
 *
 * @description ### [](#)Prerequisites
 * Before you delete a user, make sure that the user is not associated with the following resources. Otherwise, the deletion fails.
 * *   Multi-factor authentication (MFA) devices: You must delete the MFA devices bound to the user. For more information, see [DeleteMFADeviceForUser](https://help.aliyun.com/document_detail/341675.html).
 * *   Access permissions: You must remove the access permissions on the accounts in your resource directory from the user. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
 * *   Groups: You must remove the user from groups. For more information, see [RemoveUserFromGroup](https://help.aliyun.com/document_detail/335116.html).
 * ### [](#)Precautions
 * If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot delete a user that is synchronized by using SCIM.
 * This topic provides an example on how to delete the user whose ID is `u-00q8wbq42wiltcrk****`.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a Resource Access Management (RAM) user provisioning.
 *
 * @param request DeleteUserProvisioningRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserProvisioningResponse
 */
DeleteUserProvisioningResponse Client::deleteUserProvisioningWithOptions(const DeleteUserProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletionStrategy()) {
    query["DeletionStrategy"] = request.getDeletionStrategy();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasUserProvisioningId()) {
    query["UserProvisioningId"] = request.getUserProvisioningId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserProvisioning"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserProvisioningResponse>();
}

/**
 * @summary Deletes a Resource Access Management (RAM) user provisioning.
 *
 * @param request DeleteUserProvisioningRequest
 * @return DeleteUserProvisioningResponse
 */
DeleteUserProvisioningResponse Client::deleteUserProvisioning(const DeleteUserProvisioningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserProvisioningWithOptions(request, runtime);
}

/**
 * @summary Deletes a Resource Access Management (RAM) user provisioning event.
 *
 * @param request DeleteUserProvisioningEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserProvisioningEventResponse
 */
DeleteUserProvisioningEventResponse Client::deleteUserProvisioningEventWithOptions(const DeleteUserProvisioningEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasUserProvisioningId()) {
    query["UserProvisioningId"] = request.getUserProvisioningId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserProvisioningEvent"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserProvisioningEventResponse>();
}

/**
 * @summary Deletes a Resource Access Management (RAM) user provisioning event.
 *
 * @param request DeleteUserProvisioningEventRequest
 * @return DeleteUserProvisioningEventResponse
 */
DeleteUserProvisioningEventResponse Client::deleteUserProvisioningEvent(const DeleteUserProvisioningEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserProvisioningEventWithOptions(request, runtime);
}

/**
 * @summary De-provisions an access configuration from an account in your resource directory.
 *
 * @description When you call this operation, an asynchronous task is automatically created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
 * This topic provides an example on how to de-provision the access configuration `ac-00jhtfl8thteu6uj****` from the account `114240524784****` in your resource directory.
 *
 * @param request DeprovisionAccessConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeprovisionAccessConfigurationResponse
 */
DeprovisionAccessConfigurationResponse Client::deprovisionAccessConfigurationWithOptions(const DeprovisionAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOriginTargetId()) {
    query["OriginTargetId"] = request.getOriginTargetId();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeprovisionAccessConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeprovisionAccessConfigurationResponse>();
}

/**
 * @summary De-provisions an access configuration from an account in your resource directory.
 *
 * @description When you call this operation, an asynchronous task is automatically created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
 * This topic provides an example on how to de-provision the access configuration `ac-00jhtfl8thteu6uj****` from the account `114240524784****` in your resource directory.
 *
 * @param request DeprovisionAccessConfigurationRequest
 * @return DeprovisionAccessConfigurationResponse
 */
DeprovisionAccessConfigurationResponse Client::deprovisionAccessConfiguration(const DeprovisionAccessConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deprovisionAccessConfigurationWithOptions(request, runtime);
}

/**
 * @summary Disables the delegated administrator account of CloudSSO.
 *
 * @param request DisableDelegateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDelegateAccountResponse
 */
DisableDelegateAccountResponse Client::disableDelegateAccountWithOptions(const DisableDelegateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDelegateAccount"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDelegateAccountResponse>();
}

/**
 * @summary Disables the delegated administrator account of CloudSSO.
 *
 * @param request DisableDelegateAccountRequest
 * @return DisableDelegateAccountResponse
 */
DisableDelegateAccountResponse Client::disableDelegateAccount(const DisableDelegateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDelegateAccountWithOptions(request, runtime);
}

/**
 * @summary Disables CloudSSO.
 *
 * @description You can disable CloudSSO only when no directories exist in CloudSSO. After you disable CloudSSO, you can re-enable it at any time.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableServiceResponse
 */
DisableServiceResponse Client::disableServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DisableService"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableServiceResponse>();
}

/**
 * @summary Disables CloudSSO.
 *
 * @description You can disable CloudSSO only when no directories exist in CloudSSO. After you disable CloudSSO, you can re-enable it at any time.
 *
 * @return DisableServiceResponse
 */
DisableServiceResponse Client::disableService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableServiceWithOptions(runtime);
}

/**
 * @summary Enables the delegated administrator account of CloudSSO.
 *
 * @description You can use the management account of a resource directory to specify a member of the resource directory as the delegated administrator account of CloudSSO. For more information, see [Add a delegated administrator account](https://help.aliyun.com/document_detail/208117.html).
 * After the delegated administrator account of CloudSSO is specified, you can call this operation to enable the delegated administrator account of CloudSSO to manage CloudSSO resources.
 *
 * @param request EnableDelegateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDelegateAccountResponse
 */
EnableDelegateAccountResponse Client::enableDelegateAccountWithOptions(const EnableDelegateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDelegateAccount"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDelegateAccountResponse>();
}

/**
 * @summary Enables the delegated administrator account of CloudSSO.
 *
 * @description You can use the management account of a resource directory to specify a member of the resource directory as the delegated administrator account of CloudSSO. For more information, see [Add a delegated administrator account](https://help.aliyun.com/document_detail/208117.html).
 * After the delegated administrator account of CloudSSO is specified, you can call this operation to enable the delegated administrator account of CloudSSO to manage CloudSSO resources.
 *
 * @param request EnableDelegateAccountRequest
 * @return EnableDelegateAccountResponse
 */
EnableDelegateAccountResponse Client::enableDelegateAccount(const EnableDelegateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDelegateAccountWithOptions(request, runtime);
}

/**
 * @summary Enables CloudSSO.
 *
 * @description Only users under the management account of a resource directory who have the permissions to enable CloudSSO can call this operation. For more information, see [Enable CloudSSO](https://help.aliyun.com/document_detail/262819.html).
 * By calling this operation, you agree to the [Alibaba Cloud International Website Product Terms of Service](https://www.alibabacloud.com/help/doc-detail/42416.htm).
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableServiceResponse
 */
EnableServiceResponse Client::enableServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "EnableService"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableServiceResponse>();
}

/**
 * @summary Enables CloudSSO.
 *
 * @description Only users under the management account of a resource directory who have the permissions to enable CloudSSO can call this operation. For more information, see [Enable CloudSSO](https://help.aliyun.com/document_detail/262819.html).
 * By calling this operation, you agree to the [Alibaba Cloud International Website Product Terms of Service](https://www.alibabacloud.com/help/doc-detail/42416.htm).
 *
 * @return EnableServiceResponse
 */
EnableServiceResponse Client::enableService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableServiceWithOptions(runtime);
}

/**
 * @summary Queries the information about an access configuration.
 *
 * @description This topic provides an example on how to query the information about the access configuration whose ID is `ac-00ccule7tadaijxc****`.
 *
 * @param request GetAccessConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessConfigurationResponse
 */
GetAccessConfigurationResponse Client::getAccessConfigurationWithOptions(const GetAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessConfigurationResponse>();
}

/**
 * @summary Queries the information about an access configuration.
 *
 * @description This topic provides an example on how to query the information about the access configuration whose ID is `ac-00ccule7tadaijxc****`.
 *
 * @param request GetAccessConfigurationRequest
 * @return GetAccessConfigurationResponse
 */
GetAccessConfigurationResponse Client::getAccessConfiguration(const GetAccessConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the attribute passing settings of a specified directory to retrieve the current configuration of the SourceIdentity pass-through mode.
 *
 * @description You must have the cloudsso:GetAttributePassingSetting permission to call this operation. If the directory is not explicitly configured, SourceIdentityPassing returns Disabled by default.
 *
 * @param request GetAttributePassingSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAttributePassingSettingResponse
 */
GetAttributePassingSettingResponse Client::getAttributePassingSettingWithOptions(const GetAttributePassingSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAttributePassingSetting"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAttributePassingSettingResponse>();
}

/**
 * @summary Queries the attribute passing settings of a specified directory to retrieve the current configuration of the SourceIdentity pass-through mode.
 *
 * @description You must have the cloudsso:GetAttributePassingSetting permission to call this operation. If the directory is not explicitly configured, SourceIdentityPassing returns Disabled by default.
 *
 * @param request GetAttributePassingSettingRequest
 * @return GetAttributePassingSettingResponse
 */
GetAttributePassingSettingResponse Client::getAttributePassingSetting(const GetAttributePassingSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAttributePassingSettingWithOptions(request, runtime);
}

/**
 * @summary Queries information about a directory.
 *
 * @description This topic provides an example on how to query information about the directory whose ID is `d-00fc2p61****`.
 *
 * @param request GetDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDirectoryResponse
 */
GetDirectoryResponse Client::getDirectoryWithOptions(const GetDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDirectory"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDirectoryResponse>();
}

/**
 * @summary Queries information about a directory.
 *
 * @description This topic provides an example on how to query information about the directory whose ID is `d-00fc2p61****`.
 *
 * @param request GetDirectoryRequest
 * @return GetDirectoryResponse
 */
GetDirectoryResponse Client::getDirectory(const GetDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDirectoryWithOptions(request, runtime);
}

/**
 * @summary Queries information about a Security Assertion Markup Language (SAML) service provider (SP).
 *
 * @description During SAML 2.0-based single sign-on (SSO) logon, CloudSSO is an SP, and the identity management system of an enterprise is an identity provider (IdP).
 * This topic provides an example on how to query information about the SP within the directory `d-00fc2p61****`.
 *
 * @param request GetDirectorySAMLServiceProviderInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDirectorySAMLServiceProviderInfoResponse
 */
GetDirectorySAMLServiceProviderInfoResponse Client::getDirectorySAMLServiceProviderInfoWithOptions(const GetDirectorySAMLServiceProviderInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDirectorySAMLServiceProviderInfo"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDirectorySAMLServiceProviderInfoResponse>();
}

/**
 * @summary Queries information about a Security Assertion Markup Language (SAML) service provider (SP).
 *
 * @description During SAML 2.0-based single sign-on (SSO) logon, CloudSSO is an SP, and the identity management system of an enterprise is an identity provider (IdP).
 * This topic provides an example on how to query information about the SP within the directory `d-00fc2p61****`.
 *
 * @param request GetDirectorySAMLServiceProviderInfoRequest
 * @return GetDirectorySAMLServiceProviderInfoResponse
 */
GetDirectorySAMLServiceProviderInfoResponse Client::getDirectorySAMLServiceProviderInfo(const GetDirectorySAMLServiceProviderInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDirectorySAMLServiceProviderInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of a directory.
 *
 * @description This topic provides an example on how to query the statistics of a directory whose ID is `d-00fc2p61****`. The statistics include the number of users, quota for users, number of groups, quota for groups, number of access configurations, quota for access configurations, number of access permissions that are assigned, number of system policies that can be configured for an access configuration, number of System for Cross-domain Identity Management (SCIM) credentials, number of asynchronous tasks, status of single sign-on (SSO) logon, and status of SCIM synchronization.
 *
 * @param request GetDirectoryStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDirectoryStatisticsResponse
 */
GetDirectoryStatisticsResponse Client::getDirectoryStatisticsWithOptions(const GetDirectoryStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDirectoryStatistics"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDirectoryStatisticsResponse>();
}

/**
 * @summary Queries the statistics of a directory.
 *
 * @description This topic provides an example on how to query the statistics of a directory whose ID is `d-00fc2p61****`. The statistics include the number of users, quota for users, number of groups, quota for groups, number of access configurations, quota for access configurations, number of access permissions that are assigned, number of system policies that can be configured for an access configuration, number of System for Cross-domain Identity Management (SCIM) credentials, number of asynchronous tasks, status of single sign-on (SSO) logon, and status of SCIM synchronization.
 *
 * @param request GetDirectoryStatisticsRequest
 * @return GetDirectoryStatisticsResponse
 */
GetDirectoryStatisticsResponse Client::getDirectoryStatistics(const GetDirectoryStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDirectoryStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a Security Assertion Markup Language (SAML) identity provider (IdP).
 *
 * @description This topic provides an example on how to query the configurations of the SAML IdP within the directory `d-00fc2p61****`.
 *
 * @param request GetExternalSAMLIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExternalSAMLIdentityProviderResponse
 */
GetExternalSAMLIdentityProviderResponse Client::getExternalSAMLIdentityProviderWithOptions(const GetExternalSAMLIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExternalSAMLIdentityProvider"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExternalSAMLIdentityProviderResponse>();
}

/**
 * @summary Queries the configurations of a Security Assertion Markup Language (SAML) identity provider (IdP).
 *
 * @description This topic provides an example on how to query the configurations of the SAML IdP within the directory `d-00fc2p61****`.
 *
 * @param request GetExternalSAMLIdentityProviderRequest
 * @return GetExternalSAMLIdentityProviderResponse
 */
GetExternalSAMLIdentityProviderResponse Client::getExternalSAMLIdentityProvider(const GetExternalSAMLIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExternalSAMLIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Queries information about a group.
 *
 * @description This topic provides an example on how to query information about the group `g-00jqzghi2n3o5hkh****` in the directory `d-00fc2p61****`.
 *
 * @param request GetGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroupWithOptions(const GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroup"},
    {"version" , "2021-05-15"},
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
 * @summary Queries information about a group.
 *
 * @description This topic provides an example on how to query information about the group `g-00jqzghi2n3o5hkh****` in the directory `d-00fc2p61****`.
 *
 * @param request GetGroupRequest
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const GetGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the logon preference of CloudSSO users.
 *
 * @param request GetLoginPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginPreferenceResponse
 */
GetLoginPreferenceResponse Client::getLoginPreferenceWithOptions(const GetLoginPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoginPreference"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLoginPreferenceResponse>();
}

/**
 * @summary Queries the logon preference of CloudSSO users.
 *
 * @param request GetLoginPreferenceRequest
 * @return GetLoginPreferenceResponse
 */
GetLoginPreferenceResponse Client::getLoginPreference(const GetLoginPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginPreferenceWithOptions(request, runtime);
}

/**
 * @summary Queries the global multi-factor authentication (MFA) configuration.
 *
 * @description When username-password logon is enabled, you can retrieve the global MFA verification policy for user logon.
 * This topic provides an example on how to query the global MFA verification policy for CloudSSO users in the directory `u-00q8wbq42wiltcrk****`.
 *
 * @param request GetMFAAuthenticationSettingInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMFAAuthenticationSettingInfoResponse
 */
GetMFAAuthenticationSettingInfoResponse Client::getMFAAuthenticationSettingInfoWithOptions(const GetMFAAuthenticationSettingInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMFAAuthenticationSettingInfo"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMFAAuthenticationSettingInfoResponse>();
}

/**
 * @summary Queries the global multi-factor authentication (MFA) configuration.
 *
 * @description When username-password logon is enabled, you can retrieve the global MFA verification policy for user logon.
 * This topic provides an example on how to query the global MFA verification policy for CloudSSO users in the directory `u-00q8wbq42wiltcrk****`.
 *
 * @param request GetMFAAuthenticationSettingInfoRequest
 * @return GetMFAAuthenticationSettingInfoResponse
 */
GetMFAAuthenticationSettingInfoResponse Client::getMFAAuthenticationSettingInfo(const GetMFAAuthenticationSettingInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMFAAuthenticationSettingInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the multi-factor authentication (MFA) setting of all users.
 *
 * @description >  This operation is no longer maintained and updated. You can call the [GetMFAAuthenticationSettingInfo](https://help.aliyun.com/document_detail/611286.html) operation to query more detailed information.
 * This topic provides an example on how to query the MFA setting of the users that belong to the directory named `d-00fc2p61****`. The returned result shows that MFA is enabled for all the users.
 *
 * @param request GetMFAAuthenticationSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMFAAuthenticationSettingsResponse
 */
GetMFAAuthenticationSettingsResponse Client::getMFAAuthenticationSettingsWithOptions(const GetMFAAuthenticationSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMFAAuthenticationSettings"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMFAAuthenticationSettingsResponse>();
}

/**
 * @summary Queries the multi-factor authentication (MFA) setting of all users.
 *
 * @description >  This operation is no longer maintained and updated. You can call the [GetMFAAuthenticationSettingInfo](https://help.aliyun.com/document_detail/611286.html) operation to query more detailed information.
 * This topic provides an example on how to query the MFA setting of the users that belong to the directory named `d-00fc2p61****`. The returned result shows that MFA is enabled for all the users.
 *
 * @param request GetMFAAuthenticationSettingsRequest
 * @return GetMFAAuthenticationSettingsResponse
 */
GetMFAAuthenticationSettingsResponse Client::getMFAAuthenticationSettings(const GetMFAAuthenticationSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMFAAuthenticationSettingsWithOptions(request, runtime);
}

/**
 * @summary Checks whether multi-factor authentication (MFA) is enabled for users.
 *
 * @description This topic provides an example on how to check whether MFA is enabled for users in the directory whose ID is `d-00fc2p61****`. The returned result shows that MFA is in the Enabled state.
 *
 * @param request GetMFAAuthenticationStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMFAAuthenticationStatusResponse
 */
GetMFAAuthenticationStatusResponse Client::getMFAAuthenticationStatusWithOptions(const GetMFAAuthenticationStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMFAAuthenticationStatus"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMFAAuthenticationStatusResponse>();
}

/**
 * @summary Checks whether multi-factor authentication (MFA) is enabled for users.
 *
 * @description This topic provides an example on how to check whether MFA is enabled for users in the directory whose ID is `d-00fc2p61****`. The returned result shows that MFA is in the Enabled state.
 *
 * @param request GetMFAAuthenticationStatusRequest
 * @return GetMFAAuthenticationStatusResponse
 */
GetMFAAuthenticationStatusResponse Client::getMFAAuthenticationStatus(const GetMFAAuthenticationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMFAAuthenticationStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the password policy of CloudSSO users.
 *
 * @param request GetPasswordPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordPolicyResponse
 */
GetPasswordPolicyResponse Client::getPasswordPolicyWithOptions(const GetPasswordPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPasswordPolicy"},
    {"version" , "2021-05-15"},
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
 * @summary Queries the password policy of CloudSSO users.
 *
 * @param request GetPasswordPolicyRequest
 * @return GetPasswordPolicyResponse
 */
GetPasswordPolicyResponse Client::getPasswordPolicy(const GetPasswordPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the status of System for Cross-domain Identity Management (SCIM) synchronization.
 *
 * @description This topic provides an example on how to query the status of SCIM synchronization within the directory `d-00fc2p61****`. The returned result shows that SCIM synchronization is in the Enabled state.
 *
 * @param request GetSCIMSynchronizationStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSCIMSynchronizationStatusResponse
 */
GetSCIMSynchronizationStatusResponse Client::getSCIMSynchronizationStatusWithOptions(const GetSCIMSynchronizationStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSCIMSynchronizationStatus"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSCIMSynchronizationStatusResponse>();
}

/**
 * @summary Queries the status of System for Cross-domain Identity Management (SCIM) synchronization.
 *
 * @description This topic provides an example on how to query the status of SCIM synchronization within the directory `d-00fc2p61****`. The returned result shows that SCIM synchronization is in the Enabled state.
 *
 * @param request GetSCIMSynchronizationStatusRequest
 * @return GetSCIMSynchronizationStatusResponse
 */
GetSCIMSynchronizationStatusResponse Client::getSCIMSynchronizationStatus(const GetSCIMSynchronizationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSCIMSynchronizationStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the status of CloudSSO.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceStatusResponse
 */
GetServiceStatusResponse Client::getServiceStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetServiceStatus"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceStatusResponse>();
}

/**
 * @summary Queries the status of CloudSSO.
 *
 * @return GetServiceStatusResponse
 */
GetServiceStatusResponse Client::getServiceStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceStatusWithOptions(runtime);
}

/**
 * @summary Queries information about an asynchronous task.
 *
 * @description This topic provides an example on how to query the information about the task whose ID is `t-shfqw1u1edszvxw5****`.
 *
 * @param request GetTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary Queries information about an asynchronous task.
 *
 * @description This topic provides an example on how to query the information about the task whose ID is `t-shfqw1u1edszvxw5****`.
 *
 * @param request GetTaskRequest
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const GetTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the status of an asynchronous task.
 *
 * @description You can call the GetTaskStatus operation to query the status of an asynchronous task. If you want to query more information about an asynchronous task, call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation.
 * This topic provides an example on how to query the information about the task whose ID is `t-shfqw1u1edszvxw5****`.
 *
 * @param request GetTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskStatusResponse
 */
GetTaskStatusResponse Client::getTaskStatusWithOptions(const GetTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskStatus"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskStatusResponse>();
}

/**
 * @summary Queries the status of an asynchronous task.
 *
 * @description You can call the GetTaskStatus operation to query the status of an asynchronous task. If you want to query more information about an asynchronous task, call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation.
 * This topic provides an example on how to query the information about the task whose ID is `t-shfqw1u1edszvxw5****`.
 *
 * @param request GetTaskStatusRequest
 * @return GetTaskStatusResponse
 */
GetTaskStatusResponse Client::getTaskStatus(const GetTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a specified user.
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2021-05-15"},
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
 * @summary Queries the information about a specified user.
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary Queries the ID of a user in a resource directory by using the ExternalId parameter.
 *
 * @param tmpReq GetUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserIdResponse
 */
GetUserIdResponse Client::getUserIdWithOptions(const GetUserIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetUserIdShrinkRequest request = GetUserIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExternalId()) {
    request.setExternalIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExternalId(), "ExternalId", "json"));
  }

  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasExternalIdShrink()) {
    query["ExternalId"] = request.getExternalIdShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserId"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserIdResponse>();
}

/**
 * @summary Queries the ID of a user in a resource directory by using the ExternalId parameter.
 *
 * @param request GetUserIdRequest
 * @return GetUserIdResponse
 */
GetUserIdResponse Client::getUserId(const GetUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserIdWithOptions(request, runtime);
}

/**
 * @summary Queries the multi-factor authentication (MFA) setting of a single user.
 *
 * @description This topic provides an example on how to query the MFA setting of the user named `u-00q8wbq42wiltcrk****`. The returned result shows that MFA is enabled for the user.
 *
 * @param request GetUserMFAAuthenticationSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserMFAAuthenticationSettingsResponse
 */
GetUserMFAAuthenticationSettingsResponse Client::getUserMFAAuthenticationSettingsWithOptions(const GetUserMFAAuthenticationSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserMFAAuthenticationSettings"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserMFAAuthenticationSettingsResponse>();
}

/**
 * @summary Queries the multi-factor authentication (MFA) setting of a single user.
 *
 * @description This topic provides an example on how to query the MFA setting of the user named `u-00q8wbq42wiltcrk****`. The returned result shows that MFA is enabled for the user.
 *
 * @param request GetUserMFAAuthenticationSettingsRequest
 * @return GetUserMFAAuthenticationSettingsResponse
 */
GetUserMFAAuthenticationSettingsResponse Client::getUserMFAAuthenticationSettings(const GetUserMFAAuthenticationSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserMFAAuthenticationSettingsWithOptions(request, runtime);
}

/**
 * @summary Queries a Resource Access Management (RAM) user provisioning.
 *
 * @param request GetUserProvisioningRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserProvisioningResponse
 */
GetUserProvisioningResponse Client::getUserProvisioningWithOptions(const GetUserProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasUserProvisioningId()) {
    query["UserProvisioningId"] = request.getUserProvisioningId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserProvisioning"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserProvisioningResponse>();
}

/**
 * @summary Queries a Resource Access Management (RAM) user provisioning.
 *
 * @param request GetUserProvisioningRequest
 * @return GetUserProvisioningResponse
 */
GetUserProvisioningResponse Client::getUserProvisioning(const GetUserProvisioningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserProvisioningWithOptions(request, runtime);
}

/**
 * @summary Queries the global configurations of a Resource Access Management (RAM) user provisioning.
 *
 * @param request GetUserProvisioningConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserProvisioningConfigurationResponse
 */
GetUserProvisioningConfigurationResponse Client::getUserProvisioningConfigurationWithOptions(const GetUserProvisioningConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserProvisioningConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserProvisioningConfigurationResponse>();
}

/**
 * @summary Queries the global configurations of a Resource Access Management (RAM) user provisioning.
 *
 * @param request GetUserProvisioningConfigurationRequest
 * @return GetUserProvisioningConfigurationResponse
 */
GetUserProvisioningConfigurationResponse Client::getUserProvisioningConfiguration(const GetUserProvisioningConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserProvisioningConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a Resource Access Management (RAM) user provisioning.
 *
 * @param request GetUserProvisioningEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserProvisioningEventResponse
 */
GetUserProvisioningEventResponse Client::getUserProvisioningEventWithOptions(const GetUserProvisioningEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserProvisioningEvent"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserProvisioningEventResponse>();
}

/**
 * @summary Queries the information about a Resource Access Management (RAM) user provisioning.
 *
 * @param request GetUserProvisioningEventRequest
 * @return GetUserProvisioningEventResponse
 */
GetUserProvisioningEventResponse Client::getUserProvisioningEvent(const GetUserProvisioningEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserProvisioningEventWithOptions(request, runtime);
}

/**
 * @summary Queries statistics of Resource Access Management (RAM) user provisioning events that are created for the member in a resource directory.
 *
 * @param request GetUserProvisioningRdAccountStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserProvisioningRdAccountStatisticsResponse
 */
GetUserProvisioningRdAccountStatisticsResponse Client::getUserProvisioningRdAccountStatisticsWithOptions(const GetUserProvisioningRdAccountStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasRdMemberId()) {
    query["RdMemberId"] = request.getRdMemberId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserProvisioningRdAccountStatistics"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserProvisioningRdAccountStatisticsResponse>();
}

/**
 * @summary Queries statistics of Resource Access Management (RAM) user provisioning events that are created for the member in a resource directory.
 *
 * @param request GetUserProvisioningRdAccountStatisticsRequest
 * @return GetUserProvisioningRdAccountStatisticsResponse
 */
GetUserProvisioningRdAccountStatisticsResponse Client::getUserProvisioningRdAccountStatistics(const GetUserProvisioningRdAccountStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserProvisioningRdAccountStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of a Resource Access Management (RAM) user provisioning.
 *
 * @param request GetUserProvisioningStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserProvisioningStatisticsResponse
 */
GetUserProvisioningStatisticsResponse Client::getUserProvisioningStatisticsWithOptions(const GetUserProvisioningStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasUserProvisioningId()) {
    query["UserProvisioningId"] = request.getUserProvisioningId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserProvisioningStatistics"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserProvisioningStatisticsResponse>();
}

/**
 * @summary Queries the statistics of a Resource Access Management (RAM) user provisioning.
 *
 * @param request GetUserProvisioningStatisticsRequest
 * @return GetUserProvisioningStatisticsResponse
 */
GetUserProvisioningStatisticsResponse Client::getUserProvisioningStatistics(const GetUserProvisioningStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserProvisioningStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the access permissions that are assigned.
 *
 * @description This topic provides an example on how to query the assigned access permissions on the account `114240524784****` in your resource directory. The returned result shows that access permissions on the account in your resource directory is assigned to one user.
 *
 * @param request ListAccessAssignmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessAssignmentsResponse
 */
ListAccessAssignmentsResponse Client::listAccessAssignmentsWithOptions(const ListAccessAssignmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOriginTargetId()) {
    query["OriginTargetId"] = request.getOriginTargetId();
  }

  if (!!request.hasPrincipalId()) {
    query["PrincipalId"] = request.getPrincipalId();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessAssignments"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessAssignmentsResponse>();
}

/**
 * @summary Queries the access permissions that are assigned.
 *
 * @description This topic provides an example on how to query the assigned access permissions on the account `114240524784****` in your resource directory. The returned result shows that access permissions on the account in your resource directory is assigned to one user.
 *
 * @param request ListAccessAssignmentsRequest
 * @return ListAccessAssignmentsResponse
 */
ListAccessAssignmentsResponse Client::listAccessAssignments(const ListAccessAssignmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessAssignmentsWithOptions(request, runtime);
}

/**
 * @summary Queries the access configurations that are provisioned.
 *
 * @description This topic provides an example on how to query the accounts for which the access permission `ac-00ccule7tadaijxc****` is provisioned. The returned result shows that the access configuration is provisioned for two accounts in your resource directory.
 *
 * @param request ListAccessConfigurationProvisioningsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessConfigurationProvisioningsResponse
 */
ListAccessConfigurationProvisioningsResponse Client::listAccessConfigurationProvisioningsWithOptions(const ListAccessConfigurationProvisioningsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOriginTargetId()) {
    query["OriginTargetId"] = request.getOriginTargetId();
  }

  if (!!request.hasProvisioningStatus()) {
    query["ProvisioningStatus"] = request.getProvisioningStatus();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessConfigurationProvisionings"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessConfigurationProvisioningsResponse>();
}

/**
 * @summary Queries the access configurations that are provisioned.
 *
 * @description This topic provides an example on how to query the accounts for which the access permission `ac-00ccule7tadaijxc****` is provisioned. The returned result shows that the access configuration is provisioned for two accounts in your resource directory.
 *
 * @param request ListAccessConfigurationProvisioningsRequest
 * @return ListAccessConfigurationProvisioningsResponse
 */
ListAccessConfigurationProvisioningsResponse Client::listAccessConfigurationProvisionings(const ListAccessConfigurationProvisioningsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessConfigurationProvisioningsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of access configurations.
 *
 * @description This topic provides an example on how to query the access configurations in the directory `d-00fc2p61****`. The response shows that there are two access configurations: `VPC-Admin` and `ECS-Admin`.
 *
 * @param request ListAccessConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessConfigurationsResponse
 */
ListAccessConfigurationsResponse Client::listAccessConfigurationsWithOptions(const ListAccessConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
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

  if (!!request.hasStatusNotifications()) {
    query["StatusNotifications"] = request.getStatusNotifications();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessConfigurations"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessConfigurationsResponse>();
}

/**
 * @summary Queries the list of access configurations.
 *
 * @description This topic provides an example on how to query the access configurations in the directory `d-00fc2p61****`. The response shows that there are two access configurations: `VPC-Admin` and `ECS-Admin`.
 *
 * @param request ListAccessConfigurationsRequest
 * @return ListAccessConfigurationsResponse
 */
ListAccessConfigurationsResponse Client::listAccessConfigurations(const ListAccessConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Queries directories.
 *
 * @description This topic provides an example on how to query the directories within your Alibaba Cloud account. The returned result shows that only one directory with the ID `d-00fc2p61****` is created within your Alibaba Cloud account.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDirectoriesResponse
 */
ListDirectoriesResponse Client::listDirectoriesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListDirectories"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDirectoriesResponse>();
}

/**
 * @summary Queries directories.
 *
 * @description This topic provides an example on how to query the directories within your Alibaba Cloud account. The returned result shows that only one directory with the ID `d-00fc2p61****` is created within your Alibaba Cloud account.
 *
 * @return ListDirectoriesResponse
 */
ListDirectoriesResponse Client::listDirectories() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDirectoriesWithOptions(runtime);
}

/**
 * @summary Queries Security Assertion Markup Language (SAML) signing certificates.
 *
 * @description This topic provides an example on how to query the SAML signing certificates within the directory `d-00fc2p61****`. The returned result shows that the directory contains one SAML signing certificate.
 *
 * @param request ListExternalSAMLIdPCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExternalSAMLIdPCertificatesResponse
 */
ListExternalSAMLIdPCertificatesResponse Client::listExternalSAMLIdPCertificatesWithOptions(const ListExternalSAMLIdPCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExternalSAMLIdPCertificates"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExternalSAMLIdPCertificatesResponse>();
}

/**
 * @summary Queries Security Assertion Markup Language (SAML) signing certificates.
 *
 * @description This topic provides an example on how to query the SAML signing certificates within the directory `d-00fc2p61****`. The returned result shows that the directory contains one SAML signing certificate.
 *
 * @param request ListExternalSAMLIdPCertificatesRequest
 * @return ListExternalSAMLIdPCertificatesResponse
 */
ListExternalSAMLIdPCertificatesResponse Client::listExternalSAMLIdPCertificates(const ListExternalSAMLIdPCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExternalSAMLIdPCertificatesWithOptions(request, runtime);
}

/**
 * @summary Queries the users in a group.
 *
 * @description This topic provides an example on how to query the users in the group `g-00jqzghi2n3o5hkh****`. The returned result shows that the group contains the user `Alice` and the user `user1`.
 *
 * @param request ListGroupMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupMembersResponse
 */
ListGroupMembersResponse Client::listGroupMembersWithOptions(const ListGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupMembers"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupMembersResponse>();
}

/**
 * @summary Queries the users in a group.
 *
 * @description This topic provides an example on how to query the users in the group `g-00jqzghi2n3o5hkh****`. The returned result shows that the group contains the user `Alice` and the user `user1`.
 *
 * @param request ListGroupMembersRequest
 * @return ListGroupMembersResponse
 */
ListGroupMembersResponse Client::listGroupMembers(const ListGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupMembersWithOptions(request, runtime);
}

/**
 * @summary Queries groups.
 *
 * @description This topic provides an example on how to query the groups in the directory `d-00fc2p61****`. The returned result shows that the directory contains three groups. The groups `group1` and `group2` are synchronized from an external identity provider (IdP). The group `TestGroup` is manually created in CloudSSO.
 *
 * @param request ListGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroupsWithOptions(const ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
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

  if (!!request.hasProvisionType()) {
    query["ProvisionType"] = request.getProvisionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroups"},
    {"version" , "2021-05-15"},
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
 * @summary Queries groups.
 *
 * @description This topic provides an example on how to query the groups in the directory `d-00fc2p61****`. The returned result shows that the directory contains three groups. The groups `group1` and `group2` are synchronized from an external identity provider (IdP). The group `TestGroup` is manually created in CloudSSO.
 *
 * @param request ListGroupsRequest
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroups(const ListGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the groups to which a user is added.
 *
 * @description This topic provides an example on how to query the groups to which the user `u-00q8wbq42wiltcrk****` is added. The returned result shows that the user is added to both the `TestGroup` and the `group1` groups.
 *
 * @param request ListJoinedGroupsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJoinedGroupsForUserResponse
 */
ListJoinedGroupsForUserResponse Client::listJoinedGroupsForUserWithOptions(const ListJoinedGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJoinedGroupsForUser"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJoinedGroupsForUserResponse>();
}

/**
 * @summary Queries the groups to which a user is added.
 *
 * @description This topic provides an example on how to query the groups to which the user `u-00q8wbq42wiltcrk****` is added. The returned result shows that the user is added to both the `TestGroup` and the `group1` groups.
 *
 * @param request ListJoinedGroupsForUserRequest
 * @return ListJoinedGroupsForUserResponse
 */
ListJoinedGroupsForUserResponse Client::listJoinedGroupsForUser(const ListJoinedGroupsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJoinedGroupsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the MFA device list of a user. Each user can have a maximum of two MFA devices.
 *
 * @description This topic provides an example on how to query the MFA device list of the user `u-00q8wbq42wiltcrk****`. The response shows that the user has one MFA device named `Alice-MFA1`.
 *
 * @param request ListMFADevicesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMFADevicesForUserResponse
 */
ListMFADevicesForUserResponse Client::listMFADevicesForUserWithOptions(const ListMFADevicesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMFADevicesForUser"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMFADevicesForUserResponse>();
}

/**
 * @summary Queries the MFA device list of a user. Each user can have a maximum of two MFA devices.
 *
 * @description This topic provides an example on how to query the MFA device list of the user `u-00q8wbq42wiltcrk****`. The response shows that the user has one MFA device named `Alice-MFA1`.
 *
 * @param request ListMFADevicesForUserRequest
 * @return ListMFADevicesForUserResponse
 */
ListMFADevicesForUserResponse Client::listMFADevicesForUser(const ListMFADevicesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMFADevicesForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the policies that are created for an access configuration.
 *
 * @description This topic provides an example on how to query the policies that are created for the access configuration `ac-00jhtfl8thteu6uj****`. The returned result shows that the access configuration contains one system policy and one inline policy.
 *
 * @param request ListPermissionPoliciesInAccessConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionPoliciesInAccessConfigurationResponse
 */
ListPermissionPoliciesInAccessConfigurationResponse Client::listPermissionPoliciesInAccessConfigurationWithOptions(const ListPermissionPoliciesInAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasPermissionPolicyType()) {
    query["PermissionPolicyType"] = request.getPermissionPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPermissionPoliciesInAccessConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionPoliciesInAccessConfigurationResponse>();
}

/**
 * @summary Queries the policies that are created for an access configuration.
 *
 * @description This topic provides an example on how to query the policies that are created for the access configuration `ac-00jhtfl8thteu6uj****`. The returned result shows that the access configuration contains one system policy and one inline policy.
 *
 * @param request ListPermissionPoliciesInAccessConfigurationRequest
 * @return ListPermissionPoliciesInAccessConfigurationResponse
 */
ListPermissionPoliciesInAccessConfigurationResponse Client::listPermissionPoliciesInAccessConfiguration(const ListPermissionPoliciesInAccessConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPermissionPoliciesInAccessConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries Cross-domain Identity Management (SCIM) credentials.
 *
 * @description This topic provides an example on how to query the SCIM credentials within the `d-00fc2p61****` directory.
 *
 * @param request ListSCIMServerCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSCIMServerCredentialsResponse
 */
ListSCIMServerCredentialsResponse Client::listSCIMServerCredentialsWithOptions(const ListSCIMServerCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSCIMServerCredentials"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSCIMServerCredentialsResponse>();
}

/**
 * @summary Queries Cross-domain Identity Management (SCIM) credentials.
 *
 * @description This topic provides an example on how to query the SCIM credentials within the `d-00fc2p61****` directory.
 *
 * @param request ListSCIMServerCredentialsRequest
 * @return ListSCIMServerCredentialsResponse
 */
ListSCIMServerCredentialsResponse Client::listSCIMServerCredentials(const ListSCIMServerCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSCIMServerCredentialsWithOptions(request, runtime);
}

/**
 * @summary Queries asynchronous tasks.
 *
 * @description By default, this operation queries the tasks within the previous 24 hours. This operation allows you to query the tasks within a maximum of 7 days. You can specify the start time of the query by using `Filter`.
 * This topic provides an example on how to query the tasks within the previous 24 hours.
 *
 * @param request ListTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const ListTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
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

  if (!!request.hasPrincipalId()) {
    query["PrincipalId"] = request.getPrincipalId();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTasks"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTasksResponse>();
}

/**
 * @summary Queries asynchronous tasks.
 *
 * @description By default, this operation queries the tasks within the previous 24 hours. This operation allows you to query the tasks within a maximum of 7 days. You can specify the start time of the query by using `Filter`.
 * This topic provides an example on how to query the tasks within the previous 24 hours.
 *
 * @param request ListTasksRequest
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasks(const ListTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTasksWithOptions(request, runtime);
}

/**
 * @summary Queries Resource Access Management (RAM) user provisioning events.
 *
 * @param request ListUserProvisioningEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserProvisioningEventsResponse
 */
ListUserProvisioningEventsResponse Client::listUserProvisioningEventsWithOptions(const ListUserProvisioningEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasUserProvisioningId()) {
    query["UserProvisioningId"] = request.getUserProvisioningId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserProvisioningEvents"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserProvisioningEventsResponse>();
}

/**
 * @summary Queries Resource Access Management (RAM) user provisioning events.
 *
 * @param request ListUserProvisioningEventsRequest
 * @return ListUserProvisioningEventsResponse
 */
ListUserProvisioningEventsResponse Client::listUserProvisioningEvents(const ListUserProvisioningEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserProvisioningEventsWithOptions(request, runtime);
}

/**
 * @summary Queries Resource Access Management (RAM) user provisionings.
 *
 * @param request ListUserProvisioningsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserProvisioningsResponse
 */
ListUserProvisioningsResponse Client::listUserProvisioningsWithOptions(const ListUserProvisioningsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPrincipalId()) {
    query["PrincipalId"] = request.getPrincipalId();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserProvisionings"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserProvisioningsResponse>();
}

/**
 * @summary Queries Resource Access Management (RAM) user provisionings.
 *
 * @param request ListUserProvisioningsRequest
 * @return ListUserProvisioningsResponse
 */
ListUserProvisioningsResponse Client::listUserProvisionings(const ListUserProvisioningsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserProvisioningsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of users.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
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

  if (!!request.hasProvisionType()) {
    query["ProvisionType"] = request.getProvisionType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2021-05-15"},
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
 * @summary Queries a list of users.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Provisions an access configuration for an account in your resource directory.
 *
 * @description When you call this operation, an asynchronous task is automatically created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
 * This topic provides an example on how to provision the access configuration `ac-00jhtfl8thteu6uj****` for the account `114240524784****` in your resource directory.
 *
 * @param request ProvisionAccessConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProvisionAccessConfigurationResponse
 */
ProvisionAccessConfigurationResponse Client::provisionAccessConfigurationWithOptions(const ProvisionAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOriginTargetId()) {
    query["OriginTargetId"] = request.getOriginTargetId();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ProvisionAccessConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProvisionAccessConfigurationResponse>();
}

/**
 * @summary Provisions an access configuration for an account in your resource directory.
 *
 * @description When you call this operation, an asynchronous task is automatically created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
 * This topic provides an example on how to provision the access configuration `ac-00jhtfl8thteu6uj****` for the account `114240524784****` in your resource directory.
 *
 * @param request ProvisionAccessConfigurationRequest
 * @return ProvisionAccessConfigurationResponse
 */
ProvisionAccessConfigurationResponse Client::provisionAccessConfiguration(const ProvisionAccessConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return provisionAccessConfigurationWithOptions(request, runtime);
}

/**
 * @summary Removes a Security Assertion Markup Language (SAML) signing certificate.
 *
 * @description This topic provides an example on how to remove the SAML signing certificate whose ID is `idp-c-00dt9gnl7fmjaw9c****`.
 *
 * @param request RemoveExternalSAMLIdPCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveExternalSAMLIdPCertificateResponse
 */
RemoveExternalSAMLIdPCertificateResponse Client::removeExternalSAMLIdPCertificateWithOptions(const RemoveExternalSAMLIdPCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertificateId()) {
    query["CertificateId"] = request.getCertificateId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveExternalSAMLIdPCertificate"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveExternalSAMLIdPCertificateResponse>();
}

/**
 * @summary Removes a Security Assertion Markup Language (SAML) signing certificate.
 *
 * @description This topic provides an example on how to remove the SAML signing certificate whose ID is `idp-c-00dt9gnl7fmjaw9c****`.
 *
 * @param request RemoveExternalSAMLIdPCertificateRequest
 * @return RemoveExternalSAMLIdPCertificateResponse
 */
RemoveExternalSAMLIdPCertificateResponse Client::removeExternalSAMLIdPCertificate(const RemoveExternalSAMLIdPCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeExternalSAMLIdPCertificateWithOptions(request, runtime);
}

/**
 * @summary Removes a policy from an access configuration.
 *
 * @description After you remove an inline policy from an access configuration, the policy cannot be restored.
 * This topic provides an example on how to remove the system policy `AliyunECSFullAccess` from the access configuration `ac-00jhtfl8thteu6uj****`.
 *
 * @param request RemovePermissionPolicyFromAccessConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePermissionPolicyFromAccessConfigurationResponse
 */
RemovePermissionPolicyFromAccessConfigurationResponse Client::removePermissionPolicyFromAccessConfigurationWithOptions(const RemovePermissionPolicyFromAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasPermissionPolicyName()) {
    query["PermissionPolicyName"] = request.getPermissionPolicyName();
  }

  if (!!request.hasPermissionPolicyType()) {
    query["PermissionPolicyType"] = request.getPermissionPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemovePermissionPolicyFromAccessConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePermissionPolicyFromAccessConfigurationResponse>();
}

/**
 * @summary Removes a policy from an access configuration.
 *
 * @description After you remove an inline policy from an access configuration, the policy cannot be restored.
 * This topic provides an example on how to remove the system policy `AliyunECSFullAccess` from the access configuration `ac-00jhtfl8thteu6uj****`.
 *
 * @param request RemovePermissionPolicyFromAccessConfigurationRequest
 * @return RemovePermissionPolicyFromAccessConfigurationResponse
 */
RemovePermissionPolicyFromAccessConfigurationResponse Client::removePermissionPolicyFromAccessConfiguration(const RemovePermissionPolicyFromAccessConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePermissionPolicyFromAccessConfigurationWithOptions(request, runtime);
}

/**
 * @summary Removes a user from a group.
 *
 * @description If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot remove a user from a group that is synchronized by using SCIM.
 * This topic provides an example on how to remove the user `u-00q8wbq42wiltcrk****` from the group `g-00jqzghi2n3o5hkh****`.
 *
 * @param request RemoveUserFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserFromGroupResponse
 */
RemoveUserFromGroupResponse Client::removeUserFromGroupWithOptions(const RemoveUserFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUserFromGroup"},
    {"version" , "2021-05-15"},
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
 * @summary Removes a user from a group.
 *
 * @description If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot remove a user from a group that is synchronized by using SCIM.
 * This topic provides an example on how to remove the user `u-00q8wbq42wiltcrk****` from the group `g-00jqzghi2n3o5hkh****`.
 *
 * @param request RemoveUserFromGroupRequest
 * @return RemoveUserFromGroupResponse
 */
RemoveUserFromGroupResponse Client::removeUserFromGroup(const RemoveUserFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserFromGroupWithOptions(request, runtime);
}

/**
 * @summary Resets the password of a user.
 *
 * @description If a user forgets the password, the password expires, or the password poses security risks, a CloudSSO administrator can reset the password for the user.
 * > After you enable single sign-on (SSO) logon, the password of a user cannot be reset.
 * This topic provides an example on how to reset the password of the user `u-00q8wbq42wiltcrk****`. The new password is automatically generated by the system.
 *
 * @param request ResetUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPasswordWithOptions(const ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGenerateRandomPassword()) {
    query["GenerateRandomPassword"] = request.getGenerateRandomPassword();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRequirePasswordResetForNextLogin()) {
    query["RequirePasswordResetForNextLogin"] = request.getRequirePasswordResetForNextLogin();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetUserPassword"},
    {"version" , "2021-05-15"},
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
 * @summary Resets the password of a user.
 *
 * @description If a user forgets the password, the password expires, or the password poses security risks, a CloudSSO administrator can reset the password for the user.
 * > After you enable single sign-on (SSO) logon, the password of a user cannot be reset.
 * This topic provides an example on how to reset the password of the user `u-00q8wbq42wiltcrk****`. The new password is automatically generated by the system.
 *
 * @param request ResetUserPasswordRequest
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPassword(const ResetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Retries a Resource Access Management (RAM) user provisioning event.
 *
 * @param request RetryUserProvisioningEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryUserProvisioningEventResponse
 */
RetryUserProvisioningEventResponse Client::retryUserProvisioningEventWithOptions(const RetryUserProvisioningEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDuplicationStrategy()) {
    query["DuplicationStrategy"] = request.getDuplicationStrategy();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryUserProvisioningEvent"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryUserProvisioningEventResponse>();
}

/**
 * @summary Retries a Resource Access Management (RAM) user provisioning event.
 *
 * @param request RetryUserProvisioningEventRequest
 * @return RetryUserProvisioningEventResponse
 */
RetryUserProvisioningEventResponse Client::retryUserProvisioningEvent(const RetryUserProvisioningEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryUserProvisioningEventWithOptions(request, runtime);
}

/**
 * @summary Configures a Security Assertion Markup Language (SAML) identity provider (IdP).
 *
 * @description During SAML 2.0-based single sign-on (SSO) logon, CloudSSO is a service provider (SP), and the identity management system of an enterprise is an IdP.
 * You can use one of the following methods to configure a SAML IdP. You can obtain the required metadata file or parameter values from your IdP.
 * *   Use the metadata file: You can specify the `EncodedMetadataDocument` parameter to upload the metadata file.
 * *   Manually configure the IdP: You can manually specify the following parameters for your IdP: `EntityId`, `LoginUrl`, `WantRequestSigned`, and `X509Certificate`.
 * If you have configured a SAML IdP, the existing configurations are replaced after you call this operation.
 * *   If the IdP is configured by using the metadata file, all existing configurations are replaced with new configurations.
 * *   If the IdP is manually configured, the original parameter values that are different from the new parameter values are replaced.
 * >  If SSO logon is enabled, new configurations immediately take effect. Take note of the impacts on the production environment.
 * This topic provides an example on how to configure an IdP by using the metadata file within the directory `d-00fc2p61****`.
 *
 * @param request SetExternalSAMLIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetExternalSAMLIdentityProviderResponse
 */
SetExternalSAMLIdentityProviderResponse Client::setExternalSAMLIdentityProviderWithOptions(const SetExternalSAMLIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindingType()) {
    query["BindingType"] = request.getBindingType();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEncodedMetadataDocument()) {
    query["EncodedMetadataDocument"] = request.getEncodedMetadataDocument();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasLoginUrl()) {
    query["LoginUrl"] = request.getLoginUrl();
  }

  if (!!request.hasSSOStatus()) {
    query["SSOStatus"] = request.getSSOStatus();
  }

  if (!!request.hasWantRequestSigned()) {
    query["WantRequestSigned"] = request.getWantRequestSigned();
  }

  if (!!request.hasX509Certificate()) {
    query["X509Certificate"] = request.getX509Certificate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetExternalSAMLIdentityProvider"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetExternalSAMLIdentityProviderResponse>();
}

/**
 * @summary Configures a Security Assertion Markup Language (SAML) identity provider (IdP).
 *
 * @description During SAML 2.0-based single sign-on (SSO) logon, CloudSSO is a service provider (SP), and the identity management system of an enterprise is an IdP.
 * You can use one of the following methods to configure a SAML IdP. You can obtain the required metadata file or parameter values from your IdP.
 * *   Use the metadata file: You can specify the `EncodedMetadataDocument` parameter to upload the metadata file.
 * *   Manually configure the IdP: You can manually specify the following parameters for your IdP: `EntityId`, `LoginUrl`, `WantRequestSigned`, and `X509Certificate`.
 * If you have configured a SAML IdP, the existing configurations are replaced after you call this operation.
 * *   If the IdP is configured by using the metadata file, all existing configurations are replaced with new configurations.
 * *   If the IdP is manually configured, the original parameter values that are different from the new parameter values are replaced.
 * >  If SSO logon is enabled, new configurations immediately take effect. Take note of the impacts on the production environment.
 * This topic provides an example on how to configure an IdP by using the metadata file within the directory `d-00fc2p61****`.
 *
 * @param request SetExternalSAMLIdentityProviderRequest
 * @return SetExternalSAMLIdentityProviderResponse
 */
SetExternalSAMLIdentityProviderResponse Client::setExternalSAMLIdentityProvider(const SetExternalSAMLIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setExternalSAMLIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Configures the logon preference of CloudSSO users.
 *
 * @param request SetLoginPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoginPreferenceResponse
 */
SetLoginPreferenceResponse Client::setLoginPreferenceWithOptions(const SetLoginPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowUserToGetCredentials()) {
    query["AllowUserToGetCredentials"] = request.getAllowUserToGetCredentials();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasLoginNetworkMasks()) {
    query["LoginNetworkMasks"] = request.getLoginNetworkMasks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoginPreference"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoginPreferenceResponse>();
}

/**
 * @summary Configures the logon preference of CloudSSO users.
 *
 * @param request SetLoginPreferenceRequest
 * @return SetLoginPreferenceResponse
 */
SetLoginPreferenceResponse Client::setLoginPreference(const SetLoginPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoginPreferenceWithOptions(request, runtime);
}

/**
 * @summary Enables or disables multi-factor authentication (MFA) for users in a directory.
 *
 * @description If a CloudSSO administrator enables username-password logon for users, CloudSSO automatically enables MFA to improve security. The administrator can call this operation to enable or disable MFA based on the business requirements.
 * This topic provides an example on how to enable MFA for users.
 *
 * @param request SetMFAAuthenticationStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetMFAAuthenticationStatusResponse
 */
SetMFAAuthenticationStatusResponse Client::setMFAAuthenticationStatusWithOptions(const SetMFAAuthenticationStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMFAAuthenticationStatus()) {
    query["MFAAuthenticationStatus"] = request.getMFAAuthenticationStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetMFAAuthenticationStatus"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetMFAAuthenticationStatusResponse>();
}

/**
 * @summary Enables or disables multi-factor authentication (MFA) for users in a directory.
 *
 * @description If a CloudSSO administrator enables username-password logon for users, CloudSSO automatically enables MFA to improve security. The administrator can call this operation to enable or disable MFA based on the business requirements.
 * This topic provides an example on how to enable MFA for users.
 *
 * @param request SetMFAAuthenticationStatusRequest
 * @return SetMFAAuthenticationStatusResponse
 */
SetMFAAuthenticationStatusResponse Client::setMFAAuthenticationStatus(const SetMFAAuthenticationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setMFAAuthenticationStatusWithOptions(request, runtime);
}

/**
 * @summary Configures a password policy for CloudSSO users.
 *
 * @param request SetPasswordPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordPolicyResponse
 */
SetPasswordPolicyResponse Client::setPasswordPolicyWithOptions(const SetPasswordPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMaxLoginAttempts()) {
    query["MaxLoginAttempts"] = request.getMaxLoginAttempts();
  }

  if (!!request.hasMaxPasswordAge()) {
    query["MaxPasswordAge"] = request.getMaxPasswordAge();
  }

  if (!!request.hasMinPasswordDifferentChars()) {
    query["MinPasswordDifferentChars"] = request.getMinPasswordDifferentChars();
  }

  if (!!request.hasMinPasswordLength()) {
    query["MinPasswordLength"] = request.getMinPasswordLength();
  }

  if (!!request.hasPasswordNotContainUsername()) {
    query["PasswordNotContainUsername"] = request.getPasswordNotContainUsername();
  }

  if (!!request.hasPasswordReusePrevention()) {
    query["PasswordReusePrevention"] = request.getPasswordReusePrevention();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPasswordPolicy"},
    {"version" , "2021-05-15"},
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
 * @summary Configures a password policy for CloudSSO users.
 *
 * @param request SetPasswordPolicyRequest
 * @return SetPasswordPolicyResponse
 */
SetPasswordPolicyResponse Client::setPasswordPolicy(const SetPasswordPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordPolicyWithOptions(request, runtime);
}

/**
 * @summary Enables or disables System for Cross-domain Identity Management (SCIM) synchronization.
 *
 * @description You can synchronize users or groups from an external identity provider (IdP) that supports SCIM 2.0 to CloudSSO only after SCIM synchronization is enabled. If you disable SCIM synchronization, you can no longer synchronize users or groups to CloudSSO. The following list describes the impacts after SCIM synchronization is enabled or disabled:
 * *   After you enable SCIM synchronization, you cannot modify or delete the users or groups that are synchronized to CloudSSO by using SCIM. In addition, you cannot add users to or remove users from the groups. However, you can change the passwords of the users and enable or disable the logon of the users.
 * *   After you disable SCIM synchronization, you can modify and delete the users and groups that are synchronized to CloudSSO by using SCIM. You can also add users to or remove users from the groups.
 * This topic provides an example on how to enable SCIM synchronization within the directory `d-00fc2p61****`.
 *
 * @param request SetSCIMSynchronizationStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSCIMSynchronizationStatusResponse
 */
SetSCIMSynchronizationStatusResponse Client::setSCIMSynchronizationStatusWithOptions(const SetSCIMSynchronizationStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasSCIMSynchronizationStatus()) {
    query["SCIMSynchronizationStatus"] = request.getSCIMSynchronizationStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetSCIMSynchronizationStatus"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSCIMSynchronizationStatusResponse>();
}

/**
 * @summary Enables or disables System for Cross-domain Identity Management (SCIM) synchronization.
 *
 * @description You can synchronize users or groups from an external identity provider (IdP) that supports SCIM 2.0 to CloudSSO only after SCIM synchronization is enabled. If you disable SCIM synchronization, you can no longer synchronize users or groups to CloudSSO. The following list describes the impacts after SCIM synchronization is enabled or disabled:
 * *   After you enable SCIM synchronization, you cannot modify or delete the users or groups that are synchronized to CloudSSO by using SCIM. In addition, you cannot add users to or remove users from the groups. However, you can change the passwords of the users and enable or disable the logon of the users.
 * *   After you disable SCIM synchronization, you can modify and delete the users and groups that are synchronized to CloudSSO by using SCIM. You can also add users to or remove users from the groups.
 * This topic provides an example on how to enable SCIM synchronization within the directory `d-00fc2p61****`.
 *
 * @param request SetSCIMSynchronizationStatusRequest
 * @return SetSCIMSynchronizationStatusResponse
 */
SetSCIMSynchronizationStatusResponse Client::setSCIMSynchronizationStatus(const SetSCIMSynchronizationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSCIMSynchronizationStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies information about an access configuration.
 *
 * @description You can modify the `Description`, `SessionDuration`, and `RelayState` parameters for an access configuration.
 * This topic provides an example on how to change the initial web page in the access configuration `ac-00jhtfl8thteu6uj****` to `https://cloudsso.console.aliyun.com`.
 *
 * @param request UpdateAccessConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccessConfigurationResponse
 */
UpdateAccessConfigurationResponse Client::updateAccessConfigurationWithOptions(const UpdateAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.getNewDescription();
  }

  if (!!request.hasNewRelayState()) {
    query["NewRelayState"] = request.getNewRelayState();
  }

  if (!!request.hasNewSessionDuration()) {
    query["NewSessionDuration"] = request.getNewSessionDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccessConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAccessConfigurationResponse>();
}

/**
 * @summary Modifies information about an access configuration.
 *
 * @description You can modify the `Description`, `SessionDuration`, and `RelayState` parameters for an access configuration.
 * This topic provides an example on how to change the initial web page in the access configuration `ac-00jhtfl8thteu6uj****` to `https://cloudsso.console.aliyun.com`.
 *
 * @param request UpdateAccessConfigurationRequest
 * @return UpdateAccessConfigurationResponse
 */
UpdateAccessConfigurationResponse Client::updateAccessConfiguration(const UpdateAccessConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccessConfigurationWithOptions(request, runtime);
}

/**
 * @summary Updates the attribute passing settings for a specified directory, allowing you to set the SourceIdentity pass-through mode to IdP, UserName, or Disabled.
 *
 * @description You must have the cloudsso:UpdateAttributePassingSetting permission to call this operation. If the SourceIdentityPassing request parameter is not specified, the existing value is retained. If an invalid enum value is specified, the InvalidParameter.SourceIdentityPassing error is returned.
 *
 * @param request UpdateAttributePassingSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAttributePassingSettingResponse
 */
UpdateAttributePassingSettingResponse Client::updateAttributePassingSettingWithOptions(const UpdateAttributePassingSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasSourceIdentityPassing()) {
    query["SourceIdentityPassing"] = request.getSourceIdentityPassing();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAttributePassingSetting"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAttributePassingSettingResponse>();
}

/**
 * @summary Updates the attribute passing settings for a specified directory, allowing you to set the SourceIdentity pass-through mode to IdP, UserName, or Disabled.
 *
 * @description You must have the cloudsso:UpdateAttributePassingSetting permission to call this operation. If the SourceIdentityPassing request parameter is not specified, the existing value is retained. If an invalid enum value is specified, the InvalidParameter.SourceIdentityPassing error is returned.
 *
 * @param request UpdateAttributePassingSettingRequest
 * @return UpdateAttributePassingSettingResponse
 */
UpdateAttributePassingSettingResponse Client::updateAttributePassingSetting(const UpdateAttributePassingSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAttributePassingSettingWithOptions(request, runtime);
}

/**
 * @summary Changes the name of a directory.
 *
 * @description After you change the name of a directory, the URL that is used to log on to the CloudSSO user portal is changed. You must notify the CloudSSO users of the correct URL.
 * This topic provides an example on how to change the name of a directory to `new-example`.
 *
 * @param request UpdateDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDirectoryResponse
 */
UpdateDirectoryResponse Client::updateDirectoryWithOptions(const UpdateDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasNewDirectoryName()) {
    query["NewDirectoryName"] = request.getNewDirectoryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDirectory"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDirectoryResponse>();
}

/**
 * @summary Changes the name of a directory.
 *
 * @description After you change the name of a directory, the URL that is used to log on to the CloudSSO user portal is changed. You must notify the CloudSSO users of the correct URL.
 * This topic provides an example on how to change the name of a directory to `new-example`.
 *
 * @param request UpdateDirectoryRequest
 * @return UpdateDirectoryResponse
 */
UpdateDirectoryResponse Client::updateDirectory(const UpdateDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDirectoryWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a group.
 *
 * @description You can modify `GroupName` and `Description` for a group.
 * > If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot modify information about a group that is synchronized by using SCIM.
 * This topic provides an example on how to modify the name of the group `g-00jqzghi2n3o5hkh****` to `NewTestGroup`.
 *
 * @param request UpdateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroupWithOptions(const UpdateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.getNewDescription();
  }

  if (!!request.hasNewGroupName()) {
    query["NewGroupName"] = request.getNewGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGroup"},
    {"version" , "2021-05-15"},
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
 * @summary Modifies the information about a group.
 *
 * @description You can modify `GroupName` and `Description` for a group.
 * > If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot modify information about a group that is synchronized by using SCIM.
 * This topic provides an example on how to modify the name of the group `g-00jqzghi2n3o5hkh****` to `NewTestGroup`.
 *
 * @param request UpdateGroupRequest
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroup(const UpdateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies an inline policy that is created for an access configuration.
 *
 * @description This topic provides an example on how to modify an inline policy that is created for the access configuration `ac-00jhtfl8thteu6uj****`.
 *
 * @param request UpdateInlinePolicyForAccessConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInlinePolicyForAccessConfigurationResponse
 */
UpdateInlinePolicyForAccessConfigurationResponse Client::updateInlinePolicyForAccessConfigurationWithOptions(const UpdateInlinePolicyForAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessConfigurationId()) {
    query["AccessConfigurationId"] = request.getAccessConfigurationId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasInlinePolicyName()) {
    query["InlinePolicyName"] = request.getInlinePolicyName();
  }

  if (!!request.hasNewInlinePolicyDocument()) {
    query["NewInlinePolicyDocument"] = request.getNewInlinePolicyDocument();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInlinePolicyForAccessConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInlinePolicyForAccessConfigurationResponse>();
}

/**
 * @summary Modifies an inline policy that is created for an access configuration.
 *
 * @description This topic provides an example on how to modify an inline policy that is created for the access configuration `ac-00jhtfl8thteu6uj****`.
 *
 * @param request UpdateInlinePolicyForAccessConfigurationRequest
 * @return UpdateInlinePolicyForAccessConfigurationResponse
 */
UpdateInlinePolicyForAccessConfigurationResponse Client::updateInlinePolicyForAccessConfiguration(const UpdateInlinePolicyForAccessConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInlinePolicyForAccessConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the global multi-factor authentication (MFA) settings.
 *
 * @description When username-password logon is enabled, you can configure the global MFA verification policy for user logon.
 * This topic provides an example on how to enable MFA verification for all CloudSSO users in the directory `d-00fc2p61****`.
 *
 * @param tmpReq UpdateMFAAuthenticationSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMFAAuthenticationSettingsResponse
 */
UpdateMFAAuthenticationSettingsResponse Client::updateMFAAuthenticationSettingsWithOptions(const UpdateMFAAuthenticationSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMFAAuthenticationSettingsShrinkRequest request = UpdateMFAAuthenticationSettingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedVerificationTypes()) {
    request.setAllowedVerificationTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllowedVerificationTypes(), "AllowedVerificationTypes", "json"));
  }

  json query = {};
  if (!!request.hasAllowedVerificationTypesShrink()) {
    query["AllowedVerificationTypes"] = request.getAllowedVerificationTypesShrink();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMFAAuthenticationSettings()) {
    query["MFAAuthenticationSettings"] = request.getMFAAuthenticationSettings();
  }

  if (!!request.hasOperationForRiskLogin()) {
    query["OperationForRiskLogin"] = request.getOperationForRiskLogin();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMFAAuthenticationSettings"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMFAAuthenticationSettingsResponse>();
}

/**
 * @summary Modifies the global multi-factor authentication (MFA) settings.
 *
 * @description When username-password logon is enabled, you can configure the global MFA verification policy for user logon.
 * This topic provides an example on how to enable MFA verification for all CloudSSO users in the directory `d-00fc2p61****`.
 *
 * @param request UpdateMFAAuthenticationSettingsRequest
 * @return UpdateMFAAuthenticationSettingsResponse
 */
UpdateMFAAuthenticationSettingsResponse Client::updateMFAAuthenticationSettings(const UpdateMFAAuthenticationSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMFAAuthenticationSettingsWithOptions(request, runtime);
}

/**
 * @summary Enables or disables a System for Cross-domain Identity Management (SCIM) credential.
 *
 * @description This topic provides an example on how to disable the SCIM credential whose ID is `scimcred-004whl0kvfwcypbi****`. After the SCIM credential is disabled, the synchronization task that uses the SCIM credential fails. You can call this operation again to enable the SCIM credential.
 *
 * @param request UpdateSCIMServerCredentialStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSCIMServerCredentialStatusResponse
 */
UpdateSCIMServerCredentialStatusResponse Client::updateSCIMServerCredentialStatusWithOptions(const UpdateSCIMServerCredentialStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialId()) {
    query["CredentialId"] = request.getCredentialId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasNewStatus()) {
    query["NewStatus"] = request.getNewStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSCIMServerCredentialStatus"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSCIMServerCredentialStatusResponse>();
}

/**
 * @summary Enables or disables a System for Cross-domain Identity Management (SCIM) credential.
 *
 * @description This topic provides an example on how to disable the SCIM credential whose ID is `scimcred-004whl0kvfwcypbi****`. After the SCIM credential is disabled, the synchronization task that uses the SCIM credential fails. You can call this operation again to enable the SCIM credential.
 *
 * @param request UpdateSCIMServerCredentialStatusRequest
 * @return UpdateSCIMServerCredentialStatusResponse
 */
UpdateSCIMServerCredentialStatusResponse Client::updateSCIMServerCredentialStatus(const UpdateSCIMServerCredentialStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSCIMServerCredentialStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies information about a user.
 *
 * @description You can modify `FirstName`, `LastName`, `DisplayName`, `Email`, and `Description` for a user. You cannot modify `UserName` for a user.
 * > If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot modify information about a user that is synchronized by using SCIM.
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.getNewDescription();
  }

  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.getNewDisplayName();
  }

  if (!!request.hasNewEmail()) {
    query["NewEmail"] = request.getNewEmail();
  }

  if (!!request.hasNewFirstName()) {
    query["NewFirstName"] = request.getNewFirstName();
  }

  if (!!request.hasNewLastName()) {
    query["NewLastName"] = request.getNewLastName();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2021-05-15"},
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
 * @summary Modifies information about a user.
 *
 * @description You can modify `FirstName`, `LastName`, `DisplayName`, `Email`, and `Description` for a user. You cannot modify `UserName` for a user.
 * > If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot modify information about a user that is synchronized by using SCIM.
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}

/**
 * @summary Modifies the multi-factor authentication (MFA) setting of a single user.
 *
 * @description If you call the [UpdateMFAAuthenticationSettings](https://help.aliyun.com/document_detail/450134.html) operation to set the MFAAuthenticationSettings parameter to `Byuser`, user-specific settings are applied. Then, you must call the UpdateUserMFAAuthenticationSettings operation to configure MFA for each user.
 * By default, the MFAAuthenticationSettings parameter is set to `Enabled` for a new user.
 * This topic provides an example on how to enable MFA for the user named `u-00q8wbq42wiltcrk****`.
 *
 * @param request UpdateUserMFAAuthenticationSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserMFAAuthenticationSettingsResponse
 */
UpdateUserMFAAuthenticationSettingsResponse Client::updateUserMFAAuthenticationSettingsWithOptions(const UpdateUserMFAAuthenticationSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserMFAAuthenticationSettings()) {
    query["UserMFAAuthenticationSettings"] = request.getUserMFAAuthenticationSettings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserMFAAuthenticationSettings"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserMFAAuthenticationSettingsResponse>();
}

/**
 * @summary Modifies the multi-factor authentication (MFA) setting of a single user.
 *
 * @description If you call the [UpdateMFAAuthenticationSettings](https://help.aliyun.com/document_detail/450134.html) operation to set the MFAAuthenticationSettings parameter to `Byuser`, user-specific settings are applied. Then, you must call the UpdateUserMFAAuthenticationSettings operation to configure MFA for each user.
 * By default, the MFAAuthenticationSettings parameter is set to `Enabled` for a new user.
 * This topic provides an example on how to enable MFA for the user named `u-00q8wbq42wiltcrk****`.
 *
 * @param request UpdateUserMFAAuthenticationSettingsRequest
 * @return UpdateUserMFAAuthenticationSettingsResponse
 */
UpdateUserMFAAuthenticationSettingsResponse Client::updateUserMFAAuthenticationSettings(const UpdateUserMFAAuthenticationSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserMFAAuthenticationSettingsWithOptions(request, runtime);
}

/**
 * @summary Modifies a Resource Access Management (RAM) user provisioning.
 *
 * @param request UpdateUserProvisioningRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserProvisioningResponse
 */
UpdateUserProvisioningResponse Client::updateUserProvisioningWithOptions(const UpdateUserProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasNewDeletionStrategy()) {
    query["NewDeletionStrategy"] = request.getNewDeletionStrategy();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.getNewDescription();
  }

  if (!!request.hasNewDuplicationStrategy()) {
    query["NewDuplicationStrategy"] = request.getNewDuplicationStrategy();
  }

  if (!!request.hasUserProvisioningId()) {
    query["UserProvisioningId"] = request.getUserProvisioningId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserProvisioning"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserProvisioningResponse>();
}

/**
 * @summary Modifies a Resource Access Management (RAM) user provisioning.
 *
 * @param request UpdateUserProvisioningRequest
 * @return UpdateUserProvisioningResponse
 */
UpdateUserProvisioningResponse Client::updateUserProvisioning(const UpdateUserProvisioningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserProvisioningWithOptions(request, runtime);
}

/**
 * @summary Modifies the global configurations of a Resource Access Management (RAM) user provisioning.
 *
 * @param request UpdateUserProvisioningConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserProvisioningConfigurationResponse
 */
UpdateUserProvisioningConfigurationResponse Client::updateUserProvisioningConfigurationWithOptions(const UpdateUserProvisioningConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasNewDefaultLandingPage()) {
    query["NewDefaultLandingPage"] = request.getNewDefaultLandingPage();
  }

  if (!!request.hasNewSessionDuration()) {
    query["NewSessionDuration"] = request.getNewSessionDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserProvisioningConfiguration"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserProvisioningConfigurationResponse>();
}

/**
 * @summary Modifies the global configurations of a Resource Access Management (RAM) user provisioning.
 *
 * @param request UpdateUserProvisioningConfigurationRequest
 * @return UpdateUserProvisioningConfigurationResponse
 */
UpdateUserProvisioningConfigurationResponse Client::updateUserProvisioningConfiguration(const UpdateUserProvisioningConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserProvisioningConfigurationWithOptions(request, runtime);
}

/**
 * @summary Changes the status of a user.
 *
 * @description This topic provides an example on how to change the status of the user whose ID is `u-00q8wbq42wiltcrk****` to Disabled. Users in the Disabled state cannot log on to the CloudSSO user portal.
 *
 * @param request UpdateUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserStatusResponse
 */
UpdateUserStatusResponse Client::updateUserStatusWithOptions(const UpdateUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasNewStatus()) {
    query["NewStatus"] = request.getNewStatus();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserStatus"},
    {"version" , "2021-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserStatusResponse>();
}

/**
 * @summary Changes the status of a user.
 *
 * @description This topic provides an example on how to change the status of the user whose ID is `u-00q8wbq42wiltcrk****` to Disabled. Users in the Disabled state cannot log on to the CloudSSO user portal.
 *
 * @param request UpdateUserStatusRequest
 * @return UpdateUserStatusResponse
 */
UpdateUserStatusResponse Client::updateUserStatus(const UpdateUserStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserStatusWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cloudsso20210515