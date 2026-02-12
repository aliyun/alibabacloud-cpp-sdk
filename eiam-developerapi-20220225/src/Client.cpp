#include <darabonba/Core.hpp>
#include <alibabacloud/EiamDeveloperapi20220225.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::EiamDeveloperapi20220225::Models;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{

AlibabaCloud::EiamDeveloperapi20220225::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("eiam-developerapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 将账户加入多个组织
 *
 * @param request AddUserToOrganizationalUnitsRequest
 * @param headers AddUserToOrganizationalUnitsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToOrganizationalUnitsResponse
 */
AddUserToOrganizationalUnitsResponse Client::addUserToOrganizationalUnitsWithOptions(const string &instanceId, const string &applicationId, const string &userId, const AddUserToOrganizationalUnitsRequest &request, const AddUserToOrganizationalUnitsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrganizationalUnitIds()) {
    body["organizationalUnitIds"] = request.getOrganizationalUnitIds();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddUserToOrganizationalUnits"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(userId) , "/actions/addUserToOrganizationalUnits")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<AddUserToOrganizationalUnitsResponse>();
}

/**
 * @summary 将账户加入多个组织
 *
 * @param request AddUserToOrganizationalUnitsRequest
 * @return AddUserToOrganizationalUnitsResponse
 */
AddUserToOrganizationalUnitsResponse Client::addUserToOrganizationalUnits(const string &instanceId, const string &applicationId, const string &userId, const AddUserToOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddUserToOrganizationalUnitsHeaders headers = AddUserToOrganizationalUnitsHeaders();
  return addUserToOrganizationalUnitsWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

/**
 * @summary Adds multiple Employee Identity and Access Management (EIAM) accounts to an EIAM group. If the accounts are already added to the specified group, no update is performed.
 *
 * @param request AddUsersToGroupRequest
 * @param headers AddUsersToGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUsersToGroupResponse
 */
AddUsersToGroupResponse Client::addUsersToGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const AddUsersToGroupRequest &request, const AddUsersToGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserIds()) {
    body["userIds"] = request.getUserIds();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddUsersToGroup"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/actions/addUsersToGroup")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<AddUsersToGroupResponse>();
}

/**
 * @summary Adds multiple Employee Identity and Access Management (EIAM) accounts to an EIAM group. If the accounts are already added to the specified group, no update is performed.
 *
 * @param request AddUsersToGroupRequest
 * @return AddUsersToGroupResponse
 */
AddUsersToGroupResponse Client::addUsersToGroup(const string &instanceId, const string &applicationId, const string &groupId, const AddUsersToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddUsersToGroupHeaders headers = AddUsersToGroupHeaders();
  return addUsersToGroupWithOptions(instanceId, applicationId, groupId, request, headers, runtime);
}

/**
 * @summary Creates a group.
 *
 * @param request CreateGroupRequest
 * @param headers CreateGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const string &instanceId, const string &applicationId, const CreateGroupRequest &request, const CreateGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupExternalId()) {
    body["groupExternalId"] = request.getGroupExternalId();
  }

  if (!!request.hasGroupName()) {
    body["groupName"] = request.getGroupName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroup"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/groups")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<CreateGroupResponse>();
}

/**
 * @summary Creates a group.
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const string &instanceId, const string &applicationId, const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateGroupHeaders headers = CreateGroupHeaders();
  return createGroupWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Creates an organizational unit.
 *
 * @param request CreateOrganizationalUnitRequest
 * @param headers CreateOrganizationalUnitHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrganizationalUnitResponse
 */
CreateOrganizationalUnitResponse Client::createOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const CreateOrganizationalUnitRequest &request, const CreateOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasOrganizationalUnitExternalId()) {
    body["organizationalUnitExternalId"] = request.getOrganizationalUnitExternalId();
  }

  if (!!request.hasOrganizationalUnitName()) {
    body["organizationalUnitName"] = request.getOrganizationalUnitName();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.getParentId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOrganizationalUnit"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/organizationalUnits")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<CreateOrganizationalUnitResponse>();
}

/**
 * @summary Creates an organizational unit.
 *
 * @param request CreateOrganizationalUnitRequest
 * @return CreateOrganizationalUnitResponse
 */
CreateOrganizationalUnitResponse Client::createOrganizationalUnit(const string &instanceId, const string &applicationId, const CreateOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateOrganizationalUnitHeaders headers = CreateOrganizationalUnitHeaders();
  return createOrganizationalUnitWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Creates an Employee Identity and Access Management (EIAM) account in an organizational unit.
 *
 * @param request CreateUserRequest
 * @param headers CreateUserHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const string &instanceId, const string &applicationId, const CreateUserRequest &request, const CreateUserHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomFields()) {
    body["customFields"] = request.getCustomFields();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    body["email"] = request.getEmail();
  }

  if (!!request.hasEmailVerified()) {
    body["emailVerified"] = request.getEmailVerified();
  }

  if (!!request.hasPassword()) {
    body["password"] = request.getPassword();
  }

  if (!!request.hasPasswordInitializationConfig()) {
    body["passwordInitializationConfig"] = request.getPasswordInitializationConfig();
  }

  if (!!request.hasPhoneNumber()) {
    body["phoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasPhoneNumberVerified()) {
    body["phoneNumberVerified"] = request.getPhoneNumberVerified();
  }

  if (!!request.hasPhoneRegion()) {
    body["phoneRegion"] = request.getPhoneRegion();
  }

  if (!!request.hasPrimaryOrganizationalUnitId()) {
    body["primaryOrganizationalUnitId"] = request.getPrimaryOrganizationalUnitId();
  }

  if (!!request.hasUserExternalId()) {
    body["userExternalId"] = request.getUserExternalId();
  }

  if (!!request.hasUsername()) {
    body["username"] = request.getUsername();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<CreateUserResponse>();
}

/**
 * @summary Creates an Employee Identity and Access Management (EIAM) account in an organizational unit.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const string &instanceId, const string &applicationId, const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateUserHeaders headers = CreateUserHeaders();
  return createUserWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Deletes a group.
 *
 * @param headers DeleteGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const DeleteGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGroup"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "DELETE"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<DeleteGroupResponse>();
}

/**
 * @summary Deletes a group.
 *
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const string &instanceId, const string &applicationId, const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteGroupHeaders headers = DeleteGroupHeaders();
  return deleteGroupWithOptions(instanceId, applicationId, groupId, headers, runtime);
}

/**
 * @summary Deletes an organizational unit.
 *
 * @param headers DeleteOrganizationalUnitHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOrganizationalUnitResponse
 */
DeleteOrganizationalUnitResponse Client::deleteOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const DeleteOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOrganizationalUnit"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/organizationalUnits/" , Darabonba::Encode::Encoder::percentEncode(organizationalUnitId))},
    {"method" , "DELETE"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<DeleteOrganizationalUnitResponse>();
}

/**
 * @summary Deletes an organizational unit.
 *
 * @return DeleteOrganizationalUnitResponse
 */
DeleteOrganizationalUnitResponse Client::deleteOrganizationalUnit(const string &instanceId, const string &applicationId, const string &organizationalUnitId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteOrganizationalUnitHeaders headers = DeleteOrganizationalUnitHeaders();
  return deleteOrganizationalUnitWithOptions(instanceId, applicationId, organizationalUnitId, headers, runtime);
}

/**
 * @summary Deletes an Employee Identity and Access Management (EIAM) account.
 *
 * @param headers DeleteUserHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const DeleteUserHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(userId))},
    {"method" , "DELETE"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<DeleteUserResponse>();
}

/**
 * @summary Deletes an Employee Identity and Access Management (EIAM) account.
 *
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const string &instanceId, const string &applicationId, const string &userId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteUserHeaders headers = DeleteUserHeaders();
  return deleteUserWithOptions(instanceId, applicationId, userId, headers, runtime);
}

/**
 * @summary Disables an Employee Identity and Access Management (EIAM) account.
 *
 * @param headers DisableUserHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableUserResponse
 */
DisableUserResponse Client::disableUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const DisableUserHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableUser"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(userId) , "/actions/disable")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<DisableUserResponse>();
}

/**
 * @summary Disables an Employee Identity and Access Management (EIAM) account.
 *
 * @return DisableUserResponse
 */
DisableUserResponse Client::disableUser(const string &instanceId, const string &applicationId, const string &userId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DisableUserHeaders headers = DisableUserHeaders();
  return disableUserWithOptions(instanceId, applicationId, userId, headers, runtime);
}

/**
 * @summary Enables an Employee Identity and Access Management (EIAM) account.
 *
 * @param headers EnableUserHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableUserResponse
 */
EnableUserResponse Client::enableUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const EnableUserHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableUser"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(userId) , "/actions/enable")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<EnableUserResponse>();
}

/**
 * @summary Enables an Employee Identity and Access Management (EIAM) account.
 *
 * @return EnableUserResponse
 */
EnableUserResponse Client::enableUser(const string &instanceId, const string &applicationId, const string &userId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  EnableUserHeaders headers = EnableUserHeaders();
  return enableUserWithOptions(instanceId, applicationId, userId, headers, runtime);
}

/**
 * @summary Generates a device code.
 *
 * @param request GenerateDeviceCodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateDeviceCodeResponse
 */
GenerateDeviceCodeResponse Client::generateDeviceCodeWithOptions(const string &instanceId, const string &applicationId, const GenerateDeviceCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScope()) {
    query["scope"] = request.getScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateDeviceCode"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/oauth2/device/code")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GenerateDeviceCodeResponse>();
}

/**
 * @summary Generates a device code.
 *
 * @param request GenerateDeviceCodeRequest
 * @return GenerateDeviceCodeResponse
 */
GenerateDeviceCodeResponse Client::generateDeviceCode(const string &instanceId, const string &applicationId, const GenerateDeviceCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateDeviceCodeWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Generates a token for accessing an application in an instance.
 *
 * @description The following authorization types are supported: authorization code, device code, refresh token, and client credentials.
 *
 * @param request GenerateTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateTokenResponse
 */
GenerateTokenResponse Client::generateTokenWithOptions(const string &instanceId, const string &applicationId, const GenerateTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["client_id"] = request.getClientId();
  }

  if (!!request.hasClientSecret()) {
    query["client_secret"] = request.getClientSecret();
  }

  if (!!request.hasCode()) {
    query["code"] = request.getCode();
  }

  if (!!request.hasCodeVerifier()) {
    query["code_verifier"] = request.getCodeVerifier();
  }

  if (!!request.hasDeviceCode()) {
    query["device_code"] = request.getDeviceCode();
  }

  if (!!request.hasExclusiveTag()) {
    query["exclusive_tag"] = request.getExclusiveTag();
  }

  if (!!request.hasGrantType()) {
    query["grant_type"] = request.getGrantType();
  }

  if (!!request.hasPassword()) {
    query["password"] = request.getPassword();
  }

  if (!!request.hasRedirectUri()) {
    query["redirect_uri"] = request.getRedirectUri();
  }

  if (!!request.hasRefreshToken()) {
    query["refresh_token"] = request.getRefreshToken();
  }

  if (!!request.hasScope()) {
    query["scope"] = request.getScope();
  }

  if (!!request.hasUsername()) {
    query["username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateToken"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/oauth2/token")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GenerateTokenResponse>();
}

/**
 * @summary Generates a token for accessing an application in an instance.
 *
 * @description The following authorization types are supported: authorization code, device code, refresh token, and client credentials.
 *
 * @param request GenerateTokenRequest
 * @return GenerateTokenResponse
 */
GenerateTokenResponse Client::generateToken(const string &instanceId, const string &applicationId, const GenerateTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateTokenWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Queries the synchronization scope of an application in an instance.
 *
 * @description > 
 * *   You can go to the Applications page in the IDaaS console to set the synchronization scope. After an application is created, the application has the permission to call this operation by default.
 *
 * @param headers GetApplicationProvisioningScopeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationProvisioningScopeResponse
 */
GetApplicationProvisioningScopeResponse Client::getApplicationProvisioningScopeWithOptions(const string &instanceId, const string &applicationId, const GetApplicationProvisioningScopeHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationProvisioningScope"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/provisioningScope")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetApplicationProvisioningScopeResponse>();
}

/**
 * @summary Queries the synchronization scope of an application in an instance.
 *
 * @description > 
 * *   You can go to the Applications page in the IDaaS console to set the synchronization scope. After an application is created, the application has the permission to call this operation by default.
 *
 * @return GetApplicationProvisioningScopeResponse
 */
GetApplicationProvisioningScopeResponse Client::getApplicationProvisioningScope(const string &instanceId, const string &applicationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetApplicationProvisioningScopeHeaders headers = GetApplicationProvisioningScopeHeaders();
  return getApplicationProvisioningScopeWithOptions(instanceId, applicationId, headers, runtime);
}

/**
 * @summary Queries the details of a group.
 *
 * @param headers GetGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const GetGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroup"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetGroupResponse>();
}

/**
 * @summary Queries the details of a group.
 *
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const string &instanceId, const string &applicationId, const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetGroupHeaders headers = GetGroupHeaders();
  return getGroupWithOptions(instanceId, applicationId, groupId, headers, runtime);
}

/**
 * @summary Queries the information of an organizational unit.
 *
 * @param headers GetOrganizationalUnitHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrganizationalUnitResponse
 */
GetOrganizationalUnitResponse Client::getOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const GetOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrganizationalUnit"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/organizationalUnits/" , Darabonba::Encode::Encoder::percentEncode(organizationalUnitId))},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetOrganizationalUnitResponse>();
}

/**
 * @summary Queries the information of an organizational unit.
 *
 * @return GetOrganizationalUnitResponse
 */
GetOrganizationalUnitResponse Client::getOrganizationalUnit(const string &instanceId, const string &applicationId, const string &organizationalUnitId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetOrganizationalUnitHeaders headers = GetOrganizationalUnitHeaders();
  return getOrganizationalUnitWithOptions(instanceId, applicationId, organizationalUnitId, headers, runtime);
}

/**
 * @summary Obtains the ID of an organizational unit based on the external ID
 *
 * @param request GetOrganizationalUnitIdByExternalIdRequest
 * @param headers GetOrganizationalUnitIdByExternalIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrganizationalUnitIdByExternalIdResponse
 */
GetOrganizationalUnitIdByExternalIdResponse Client::getOrganizationalUnitIdByExternalIdWithOptions(const string &instanceId, const string &applicationId, const GetOrganizationalUnitIdByExternalIdRequest &request, const GetOrganizationalUnitIdByExternalIdHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrganizationalUnitExternalId()) {
    body["organizationalUnitExternalId"] = request.getOrganizationalUnitExternalId();
  }

  if (!!request.hasOrganizationalUnitSourceId()) {
    body["organizationalUnitSourceId"] = request.getOrganizationalUnitSourceId();
  }

  if (!!request.hasOrganizationalUnitSourceType()) {
    body["organizationalUnitSourceType"] = request.getOrganizationalUnitSourceType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetOrganizationalUnitIdByExternalId"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/organizationalUnits/_/actions/getOrganizationalUnitIdByExternalId")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetOrganizationalUnitIdByExternalIdResponse>();
}

/**
 * @summary Obtains the ID of an organizational unit based on the external ID
 *
 * @param request GetOrganizationalUnitIdByExternalIdRequest
 * @return GetOrganizationalUnitIdByExternalIdResponse
 */
GetOrganizationalUnitIdByExternalIdResponse Client::getOrganizationalUnitIdByExternalId(const string &instanceId, const string &applicationId, const GetOrganizationalUnitIdByExternalIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetOrganizationalUnitIdByExternalIdHeaders headers = GetOrganizationalUnitIdByExternalIdHeaders();
  return getOrganizationalUnitIdByExternalIdWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Queries the details of an Employee Identity and Access Management (EIAM) account.
 *
 * @param headers GetUserHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const GetUserHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(userId))},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetUserResponse>();
}

/**
 * @summary Queries the details of an Employee Identity and Access Management (EIAM) account.
 *
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const string &instanceId, const string &applicationId, const string &userId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserHeaders headers = GetUserHeaders();
  return getUserWithOptions(instanceId, applicationId, userId, headers, runtime);
}

/**
 * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account by email address.
 *
 * @param request GetUserIdByEmailRequest
 * @param headers GetUserIdByEmailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserIdByEmailResponse
 */
GetUserIdByEmailResponse Client::getUserIdByEmailWithOptions(const string &instanceId, const string &applicationId, const GetUserIdByEmailRequest &request, const GetUserIdByEmailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEmail()) {
    body["email"] = request.getEmail();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUserIdByEmail"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/_/actions/getUserIdByEmail")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetUserIdByEmailResponse>();
}

/**
 * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account by email address.
 *
 * @param request GetUserIdByEmailRequest
 * @return GetUserIdByEmailResponse
 */
GetUserIdByEmailResponse Client::getUserIdByEmail(const string &instanceId, const string &applicationId, const GetUserIdByEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserIdByEmailHeaders headers = GetUserIdByEmailHeaders();
  return getUserIdByEmailWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the mobile number.
 *
 * @param request GetUserIdByPhoneNumberRequest
 * @param headers GetUserIdByPhoneNumberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserIdByPhoneNumberResponse
 */
GetUserIdByPhoneNumberResponse Client::getUserIdByPhoneNumberWithOptions(const string &instanceId, const string &applicationId, const GetUserIdByPhoneNumberRequest &request, const GetUserIdByPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPhoneNumber()) {
    body["phoneNumber"] = request.getPhoneNumber();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUserIdByPhoneNumber"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/_/actions/getUserIdByPhoneNumber")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetUserIdByPhoneNumberResponse>();
}

/**
 * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the mobile number.
 *
 * @param request GetUserIdByPhoneNumberRequest
 * @return GetUserIdByPhoneNumberResponse
 */
GetUserIdByPhoneNumberResponse Client::getUserIdByPhoneNumber(const string &instanceId, const string &applicationId, const GetUserIdByPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserIdByPhoneNumberHeaders headers = GetUserIdByPhoneNumberHeaders();
  return getUserIdByPhoneNumberWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the external ID.
 *
 * @param request GetUserIdByUserExternalIdRequest
 * @param headers GetUserIdByUserExternalIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserIdByUserExternalIdResponse
 */
GetUserIdByUserExternalIdResponse Client::getUserIdByUserExternalIdWithOptions(const string &instanceId, const string &applicationId, const GetUserIdByUserExternalIdRequest &request, const GetUserIdByUserExternalIdHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserExternalId()) {
    body["userExternalId"] = request.getUserExternalId();
  }

  if (!!request.hasUserSourceId()) {
    body["userSourceId"] = request.getUserSourceId();
  }

  if (!!request.hasUserSourceType()) {
    body["userSourceType"] = request.getUserSourceType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUserIdByUserExternalId"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/_/actions/getUserIdByExternalId")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetUserIdByUserExternalIdResponse>();
}

/**
 * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the external ID.
 *
 * @param request GetUserIdByUserExternalIdRequest
 * @return GetUserIdByUserExternalIdResponse
 */
GetUserIdByUserExternalIdResponse Client::getUserIdByUserExternalId(const string &instanceId, const string &applicationId, const GetUserIdByUserExternalIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserIdByUserExternalIdHeaders headers = GetUserIdByUserExternalIdHeaders();
  return getUserIdByUserExternalIdWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the username.
 *
 * @param request GetUserIdByUsernameRequest
 * @param headers GetUserIdByUsernameHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserIdByUsernameResponse
 */
GetUserIdByUsernameResponse Client::getUserIdByUsernameWithOptions(const string &instanceId, const string &applicationId, const GetUserIdByUsernameRequest &request, const GetUserIdByUsernameHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUsername()) {
    body["username"] = request.getUsername();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUserIdByUsername"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/_/actions/getUserIdByUsername")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetUserIdByUsernameResponse>();
}

/**
 * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the username.
 *
 * @param request GetUserIdByUsernameRequest
 * @return GetUserIdByUsernameResponse
 */
GetUserIdByUsernameResponse Client::getUserIdByUsername(const string &instanceId, const string &applicationId, const GetUserIdByUsernameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserIdByUsernameHeaders headers = GetUserIdByUsernameHeaders();
  return getUserIdByUsernameWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Queries the information of a user by using the user token.
 *
 * @param headers GetUserInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserInfoResponse
 */
GetUserInfoResponse Client::getUserInfoWithOptions(const string &instanceId, const string &applicationId, const GetUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserInfo"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/oauth2/userinfo")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetUserInfoResponse>();
}

/**
 * @summary Queries the information of a user by using the user token.
 *
 * @return GetUserInfoResponse
 */
GetUserInfoResponse Client::getUserInfo(const string &instanceId, const string &applicationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserInfoHeaders headers = GetUserInfoHeaders();
  return getUserInfoWithOptions(instanceId, applicationId, headers, runtime);
}

/**
 * @summary Queries information about Employee Identity and Access Management (EIAM) groups by page.
 *
 * @param request ListGroupsRequest
 * @param headers ListGroupsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroupsWithOptions(const string &instanceId, const string &applicationId, const ListGroupsRequest &request, const ListGroupsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupNameStartWith()) {
    query["groupNameStartWith"] = request.getGroupNameStartWith();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroups"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/groups")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListGroupsResponse>();
}

/**
 * @summary Queries information about Employee Identity and Access Management (EIAM) groups by page.
 *
 * @param request ListGroupsRequest
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroups(const string &instanceId, const string &applicationId, const ListGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListGroupsHeaders headers = ListGroupsHeaders();
  return listGroupsWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary 获取账户关联组列表
 *
 * @param request ListGroupsForUserRequest
 * @param headers ListGroupsForUserHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const ListGroupsForUserRequest &request, const ListGroupsForUserHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupsForUser"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(userId) , "/actions/listGroupsForUser")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListGroupsForUserResponse>();
}

/**
 * @summary 获取账户关联组列表
 *
 * @param request ListGroupsForUserRequest
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUser(const string &instanceId, const string &applicationId, const string &userId, const ListGroupsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListGroupsForUserHeaders headers = ListGroupsForUserHeaders();
  return listGroupsForUserWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

/**
 * @summary Queries the information of all the parent organizational units of an organizational unit.
 *
 * @param headers ListOrganizationalUnitParentIdsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationalUnitParentIdsResponse
 */
ListOrganizationalUnitParentIdsResponse Client::listOrganizationalUnitParentIdsWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const ListOrganizationalUnitParentIdsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrganizationalUnitParentIds"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/organizationalUnits/" , Darabonba::Encode::Encoder::percentEncode(organizationalUnitId) , "/parentIds")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListOrganizationalUnitParentIdsResponse>();
}

/**
 * @summary Queries the information of all the parent organizational units of an organizational unit.
 *
 * @return ListOrganizationalUnitParentIdsResponse
 */
ListOrganizationalUnitParentIdsResponse Client::listOrganizationalUnitParentIds(const string &instanceId, const string &applicationId, const string &organizationalUnitId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListOrganizationalUnitParentIdsHeaders headers = ListOrganizationalUnitParentIdsHeaders();
  return listOrganizationalUnitParentIdsWithOptions(instanceId, applicationId, organizationalUnitId, headers, runtime);
}

/**
 * @summary Queries the information of Employee Identity and Access Management (EIAM) organizational units by page.
 *
 * @param request ListOrganizationalUnitsRequest
 * @param headers ListOrganizationalUnitsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationalUnitsResponse
 */
ListOrganizationalUnitsResponse Client::listOrganizationalUnitsWithOptions(const string &instanceId, const string &applicationId, const ListOrganizationalUnitsRequest &request, const ListOrganizationalUnitsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasParentId()) {
    query["parentId"] = request.getParentId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrganizationalUnits"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/organizationalUnits")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListOrganizationalUnitsResponse>();
}

/**
 * @summary Queries the information of Employee Identity and Access Management (EIAM) organizational units by page.
 *
 * @param request ListOrganizationalUnitsRequest
 * @return ListOrganizationalUnitsResponse
 */
ListOrganizationalUnitsResponse Client::listOrganizationalUnits(const string &instanceId, const string &applicationId, const ListOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListOrganizationalUnitsHeaders headers = ListOrganizationalUnitsHeaders();
  return listOrganizationalUnitsWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Queries the information of Employee Identity and Access Management (EIAM) accounts by page.
 *
 * @param request ListUsersRequest
 * @param headers ListUsersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const string &instanceId, const string &applicationId, const ListUsersRequest &request, const ListUsersHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrganizationalUnitId()) {
    query["organizationalUnitId"] = request.getOrganizationalUnitId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Queries the information of Employee Identity and Access Management (EIAM) accounts by page.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const string &instanceId, const string &applicationId, const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListUsersHeaders headers = ListUsersHeaders();
  return listUsersWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary Queries accounts in an Employee Identity and Access Management (EIAM) group.
 *
 * @param request ListUsersForGroupRequest
 * @param headers ListUsersForGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const ListUsersForGroupRequest &request, const ListUsersForGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsersForGroup"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/actions/listUsersForGroup")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListUsersForGroupResponse>();
}

/**
 * @summary Queries accounts in an Employee Identity and Access Management (EIAM) group.
 *
 * @param request ListUsersForGroupRequest
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroup(const string &instanceId, const string &applicationId, const string &groupId, const ListUsersForGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListUsersForGroupHeaders headers = ListUsersForGroupHeaders();
  return listUsersForGroupWithOptions(instanceId, applicationId, groupId, request, headers, runtime);
}

/**
 * @summary 获取云角色（CloudAccountRole）的临时访问凭证
 *
 * @param request ObtainCloudAccountRoleAccessCredentialRequest
 * @param headers ObtainCloudAccountRoleAccessCredentialHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ObtainCloudAccountRoleAccessCredentialResponse
 */
ObtainCloudAccountRoleAccessCredentialResponse Client::obtainCloudAccountRoleAccessCredentialWithOptions(const string &instanceId, const ObtainCloudAccountRoleAccessCredentialRequest &request, const ObtainCloudAccountRoleAccessCredentialHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudAccountRoleExternalId()) {
    query["cloudAccountRoleExternalId"] = request.getCloudAccountRoleExternalId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ObtainCloudAccountRoleAccessCredential"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/cloudAccountRoles/_/actions/obtainAccessCredential")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ObtainCloudAccountRoleAccessCredentialResponse>();
}

/**
 * @summary 获取云角色（CloudAccountRole）的临时访问凭证
 *
 * @param request ObtainCloudAccountRoleAccessCredentialRequest
 * @return ObtainCloudAccountRoleAccessCredentialResponse
 */
ObtainCloudAccountRoleAccessCredentialResponse Client::obtainCloudAccountRoleAccessCredential(const string &instanceId, const ObtainCloudAccountRoleAccessCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ObtainCloudAccountRoleAccessCredentialHeaders headers = ObtainCloudAccountRoleAccessCredentialHeaders();
  return obtainCloudAccountRoleAccessCredentialWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 获取凭据明文。
 *
 * @param request ObtainCredentialRequest
 * @param headers ObtainCredentialHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ObtainCredentialResponse
 */
ObtainCredentialResponse Client::obtainCredentialWithOptions(const string &instanceId, const ObtainCredentialRequest &request, const ObtainCredentialHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialIdentifier()) {
    query["credentialIdentifier"] = request.getCredentialIdentifier();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ObtainCredential"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/credentials/_/actions/obtain")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ObtainCredentialResponse>();
}

/**
 * @summary 获取凭据明文。
 *
 * @param request ObtainCredentialRequest
 * @return ObtainCredentialResponse
 */
ObtainCredentialResponse Client::obtainCredential(const string &instanceId, const ObtainCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ObtainCredentialHeaders headers = ObtainCredentialHeaders();
  return obtainCredentialWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Modifies information about an Employee Identity and Access Management (EIAM) group.
 *
 * @param request PatchGroupRequest
 * @param headers PatchGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PatchGroupResponse
 */
PatchGroupResponse Client::patchGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const PatchGroupRequest &request, const PatchGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupName()) {
    body["groupName"] = request.getGroupName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PatchGroup"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "PATCH"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<PatchGroupResponse>();
}

/**
 * @summary Modifies information about an Employee Identity and Access Management (EIAM) group.
 *
 * @param request PatchGroupRequest
 * @return PatchGroupResponse
 */
PatchGroupResponse Client::patchGroup(const string &instanceId, const string &applicationId, const string &groupId, const PatchGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PatchGroupHeaders headers = PatchGroupHeaders();
  return patchGroupWithOptions(instanceId, applicationId, groupId, request, headers, runtime);
}

/**
 * @summary Modifies an EIAM organizational unit.
 *
 * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
 *
 * @param request PatchOrganizationalUnitRequest
 * @param headers PatchOrganizationalUnitHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PatchOrganizationalUnitResponse
 */
PatchOrganizationalUnitResponse Client::patchOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const PatchOrganizationalUnitRequest &request, const PatchOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasOrganizationalUnitName()) {
    body["organizationalUnitName"] = request.getOrganizationalUnitName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PatchOrganizationalUnit"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/organizationalUnits/" , Darabonba::Encode::Encoder::percentEncode(organizationalUnitId))},
    {"method" , "PATCH"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<PatchOrganizationalUnitResponse>();
}

/**
 * @summary Modifies an EIAM organizational unit.
 *
 * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
 *
 * @param request PatchOrganizationalUnitRequest
 * @return PatchOrganizationalUnitResponse
 */
PatchOrganizationalUnitResponse Client::patchOrganizationalUnit(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const PatchOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PatchOrganizationalUnitHeaders headers = PatchOrganizationalUnitHeaders();
  return patchOrganizationalUnitWithOptions(instanceId, applicationId, organizationalUnitId, request, headers, runtime);
}

/**
 * @summary Modifies an Employee Identity and Access Management (EIAM) account.
 *
 * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
 *
 * @param request PatchUserRequest
 * @param headers PatchUserHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PatchUserResponse
 */
PatchUserResponse Client::patchUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const PatchUserRequest &request, const PatchUserHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomFields()) {
    body["customFields"] = request.getCustomFields();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    body["email"] = request.getEmail();
  }

  if (!!request.hasEmailVerified()) {
    body["emailVerified"] = request.getEmailVerified();
  }

  if (!!request.hasPhoneNumber()) {
    body["phoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasPhoneNumberVerified()) {
    body["phoneNumberVerified"] = request.getPhoneNumberVerified();
  }

  if (!!request.hasPhoneRegion()) {
    body["phoneRegion"] = request.getPhoneRegion();
  }

  if (!!request.hasUsername()) {
    body["username"] = request.getUsername();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PatchUser"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(userId))},
    {"method" , "PATCH"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<PatchUserResponse>();
}

/**
 * @summary Modifies an Employee Identity and Access Management (EIAM) account.
 *
 * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
 *
 * @param request PatchUserRequest
 * @return PatchUserResponse
 */
PatchUserResponse Client::patchUser(const string &instanceId, const string &applicationId, const string &userId, const PatchUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PatchUserHeaders headers = PatchUserHeaders();
  return patchUserWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

/**
 * @summary 将账户从多个组织移除【不支持移除主组织】
 *
 * @param request RemoveUserFromOrganizationalUnitsRequest
 * @param headers RemoveUserFromOrganizationalUnitsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserFromOrganizationalUnitsResponse
 */
RemoveUserFromOrganizationalUnitsResponse Client::removeUserFromOrganizationalUnitsWithOptions(const string &instanceId, const string &applicationId, const string &userId, const RemoveUserFromOrganizationalUnitsRequest &request, const RemoveUserFromOrganizationalUnitsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrganizationalUnitIds()) {
    body["organizationalUnitIds"] = request.getOrganizationalUnitIds();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveUserFromOrganizationalUnits"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(userId) , "/actions/removeUserFromOrganizationalUnits")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<RemoveUserFromOrganizationalUnitsResponse>();
}

/**
 * @summary 将账户从多个组织移除【不支持移除主组织】
 *
 * @param request RemoveUserFromOrganizationalUnitsRequest
 * @return RemoveUserFromOrganizationalUnitsResponse
 */
RemoveUserFromOrganizationalUnitsResponse Client::removeUserFromOrganizationalUnits(const string &instanceId, const string &applicationId, const string &userId, const RemoveUserFromOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RemoveUserFromOrganizationalUnitsHeaders headers = RemoveUserFromOrganizationalUnitsHeaders();
  return removeUserFromOrganizationalUnitsWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

/**
 * @summary Removes multiple Employee Identity and Access Management (EIAM) accounts from an EIAM group. If an account does not belong to the group, the removal succeeds by default.
 *
 * @param request RemoveUsersFromGroupRequest
 * @param headers RemoveUsersFromGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersFromGroupResponse
 */
RemoveUsersFromGroupResponse Client::removeUsersFromGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const RemoveUsersFromGroupRequest &request, const RemoveUsersFromGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserIds()) {
    body["userIds"] = request.getUserIds();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveUsersFromGroup"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/actions/removeUsersFromGroup")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<RemoveUsersFromGroupResponse>();
}

/**
 * @summary Removes multiple Employee Identity and Access Management (EIAM) accounts from an EIAM group. If an account does not belong to the group, the removal succeeds by default.
 *
 * @param request RemoveUsersFromGroupRequest
 * @return RemoveUsersFromGroupResponse
 */
RemoveUsersFromGroupResponse Client::removeUsersFromGroup(const string &instanceId, const string &applicationId, const string &groupId, const RemoveUsersFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RemoveUsersFromGroupHeaders headers = RemoveUsersFromGroupHeaders();
  return removeUsersFromGroupWithOptions(instanceId, applicationId, groupId, request, headers, runtime);
}

/**
 * @summary Revokes an access token or refresh token.
 *
 * @param request RevokeTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeTokenResponse
 */
RevokeTokenResponse Client::revokeTokenWithOptions(const string &instanceId, const string &applicationId, const RevokeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["client_id"] = request.getClientId();
  }

  if (!!request.hasClientSecret()) {
    query["client_secret"] = request.getClientSecret();
  }

  if (!!request.hasToken()) {
    query["token"] = request.getToken();
  }

  if (!!request.hasTokenTypeHint()) {
    query["token_type_hint"] = request.getTokenTypeHint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeToken"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/oauth2/revoke")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<RevokeTokenResponse>();
}

/**
 * @summary Revokes an access token or refresh token.
 *
 * @param request RevokeTokenRequest
 * @return RevokeTokenResponse
 */
RevokeTokenResponse Client::revokeToken(const string &instanceId, const string &applicationId, const RevokeTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeTokenWithOptions(instanceId, applicationId, request, headers, runtime);
}

/**
 * @summary 将指定组织设置为账户主组织，移除旧主组织，加入新主组织。
 *
 * @param request SetUserPrimaryOrganizationalUnitRequest
 * @param headers SetUserPrimaryOrganizationalUnitHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetUserPrimaryOrganizationalUnitResponse
 */
SetUserPrimaryOrganizationalUnitResponse Client::setUserPrimaryOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &userId, const SetUserPrimaryOrganizationalUnitRequest &request, const SetUserPrimaryOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrganizationalUnitId()) {
    body["organizationalUnitId"] = request.getOrganizationalUnitId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetUserPrimaryOrganizationalUnit"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(userId) , "/actions/setUserPrimaryOrganizationalUnit")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<SetUserPrimaryOrganizationalUnitResponse>();
}

/**
 * @summary 将指定组织设置为账户主组织，移除旧主组织，加入新主组织。
 *
 * @param request SetUserPrimaryOrganizationalUnitRequest
 * @return SetUserPrimaryOrganizationalUnitResponse
 */
SetUserPrimaryOrganizationalUnitResponse Client::setUserPrimaryOrganizationalUnit(const string &instanceId, const string &applicationId, const string &userId, const SetUserPrimaryOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SetUserPrimaryOrganizationalUnitHeaders headers = SetUserPrimaryOrganizationalUnitHeaders();
  return setUserPrimaryOrganizationalUnitWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

/**
 * @summary 更新账户密码
 *
 * @param request UpdateUserPasswordRequest
 * @param headers UpdateUserPasswordHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserPasswordResponse
 */
UpdateUserPasswordResponse Client::updateUserPasswordWithOptions(const string &instanceId, const string &applicationId, const string &userId, const UpdateUserPasswordRequest &request, const UpdateUserPasswordHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPassword()) {
    body["password"] = request.getPassword();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUserPassword"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v2/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/" , Darabonba::Encode::Encoder::percentEncode(applicationId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(userId) , "/actions/updateUserPassword")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<UpdateUserPasswordResponse>();
}

/**
 * @summary 更新账户密码
 *
 * @param request UpdateUserPasswordRequest
 * @return UpdateUserPasswordResponse
 */
UpdateUserPasswordResponse Client::updateUserPassword(const string &instanceId, const string &applicationId, const string &userId, const UpdateUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateUserPasswordHeaders headers = UpdateUserPasswordHeaders();
  return updateUserPasswordWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225