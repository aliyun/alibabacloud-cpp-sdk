#include <darabonba/Core.hpp>
#include <alibabacloud/Eiam20211201.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Eiam20211201::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Eiam20211201
{

AlibabaCloud::Eiam20211201::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"eu-central-1" , "eiam.eu-central-1.aliyuncs.com"},
    {"cn-hongkong" , "eiam.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "eiam.cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-5" , "eiam.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-1" , "eiam.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "eiam.ap-northeast-2.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("eiam", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds an application account for a specified employee under the current application.
 *
 * @param request AddApplicationAccountToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddApplicationAccountToUserResponse
 */
AddApplicationAccountToUserResponse Client::addApplicationAccountToUserWithOptions(const AddApplicationAccountToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationUsername()) {
    query["ApplicationUsername"] = request.getApplicationUsername();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddApplicationAccountToUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddApplicationAccountToUserResponse>();
}

/**
 * @summary Adds an application account for a specified employee under the current application.
 *
 * @param request AddApplicationAccountToUserRequest
 * @return AddApplicationAccountToUserResponse
 */
AddApplicationAccountToUserResponse Client::addApplicationAccountToUser(const AddApplicationAccountToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addApplicationAccountToUserWithOptions(request, runtime);
}

/**
 * @summary Adds an application to an authorization rule.
 *
 * @param request AddApplicationToAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddApplicationToAuthorizationRuleResponse
 */
AddApplicationToAuthorizationRuleResponse Client::addApplicationToAuthorizationRuleWithOptions(const AddApplicationToAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasValidityPeriod()) {
    query["ValidityPeriod"] = request.getValidityPeriod();
  }

  if (!!request.hasValidityType()) {
    query["ValidityType"] = request.getValidityType();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddApplicationToAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddApplicationToAuthorizationRuleResponse>();
}

/**
 * @summary Adds an application to an authorization rule.
 *
 * @param request AddApplicationToAuthorizationRuleRequest
 * @return AddApplicationToAuthorizationRuleResponse
 */
AddApplicationToAuthorizationRuleResponse Client::addApplicationToAuthorizationRule(const AddApplicationToAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addApplicationToAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Adds terms to a brand.
 *
 * @param request AddCustomPrivacyPoliciesToBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomPrivacyPoliciesToBrandResponse
 */
AddCustomPrivacyPoliciesToBrandResponse Client::addCustomPrivacyPoliciesToBrandWithOptions(const AddCustomPrivacyPoliciesToBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasCustomPrivacyPolicyIds()) {
    query["CustomPrivacyPolicyIds"] = request.getCustomPrivacyPolicyIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddCustomPrivacyPoliciesToBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomPrivacyPoliciesToBrandResponse>();
}

/**
 * @summary Adds terms to a brand.
 *
 * @param request AddCustomPrivacyPoliciesToBrandRequest
 * @return AddCustomPrivacyPoliciesToBrandResponse
 */
AddCustomPrivacyPoliciesToBrandResponse Client::addCustomPrivacyPoliciesToBrand(const AddCustomPrivacyPoliciesToBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomPrivacyPoliciesToBrandWithOptions(request, runtime);
}

/**
 * @summary Adds a group to an authorization rule.
 *
 * @param request AddGroupToAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGroupToAuthorizationRuleResponse
 */
AddGroupToAuthorizationRuleResponse Client::addGroupToAuthorizationRuleWithOptions(const AddGroupToAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasValidityPeriod()) {
    query["ValidityPeriod"] = request.getValidityPeriod();
  }

  if (!!request.hasValidityType()) {
    query["ValidityType"] = request.getValidityType();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddGroupToAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGroupToAuthorizationRuleResponse>();
}

/**
 * @summary Adds a group to an authorization rule.
 *
 * @param request AddGroupToAuthorizationRuleRequest
 * @return AddGroupToAuthorizationRuleResponse
 */
AddGroupToAuthorizationRuleResponse Client::addGroupToAuthorizationRule(const AddGroupToAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGroupToAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Adds an account to an authorization rule.
 *
 * @param request AddUserToAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToAuthorizationRuleResponse
 */
AddUserToAuthorizationRuleResponse Client::addUserToAuthorizationRuleWithOptions(const AddUserToAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasValidityPeriod()) {
    query["ValidityPeriod"] = request.getValidityPeriod();
  }

  if (!!request.hasValidityType()) {
    query["ValidityType"] = request.getValidityType();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddUserToAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserToAuthorizationRuleResponse>();
}

/**
 * @summary Adds an account to an authorization rule.
 *
 * @param request AddUserToAuthorizationRuleRequest
 * @return AddUserToAuthorizationRuleResponse
 */
AddUserToAuthorizationRuleResponse Client::addUserToAuthorizationRule(const AddUserToAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Adds a specified EIAM account to multiple EIAM organizations. If the account already exists in an organization, the operation returns a success response directly.
 *
 * @param request AddUserToOrganizationalUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToOrganizationalUnitsResponse
 */
AddUserToOrganizationalUnitsResponse Client::addUserToOrganizationalUnitsWithOptions(const AddUserToOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.getOrganizationalUnitIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserToOrganizationalUnits"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserToOrganizationalUnitsResponse>();
}

/**
 * @summary Adds a specified EIAM account to multiple EIAM organizations. If the account already exists in an organization, the operation returns a success response directly.
 *
 * @param request AddUserToOrganizationalUnitsRequest
 * @return AddUserToOrganizationalUnitsResponse
 */
AddUserToOrganizationalUnitsResponse Client::addUserToOrganizationalUnits(const AddUserToOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToOrganizationalUnitsWithOptions(request, runtime);
}

/**
 * @summary Adds multiple Employee Identity and Access Management (EIAM) accounts to a specified EIAM account group.
 *
 * @param request AddUsersToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUsersToGroupResponse
 */
AddUsersToGroupResponse Client::addUsersToGroupWithOptions(const AddUsersToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUsersToGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUsersToGroupResponse>();
}

/**
 * @summary Adds multiple Employee Identity and Access Management (EIAM) accounts to a specified EIAM account group.
 *
 * @param request AddUsersToGroupRequest
 * @return AddUsersToGroupResponse
 */
AddUsersToGroupResponse Client::addUsersToGroup(const AddUsersToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUsersToGroupWithOptions(request, runtime);
}

/**
 * @summary Grants multiple EIAM groups access to an application in a batch.
 *
 * @param request AuthorizeApplicationToGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeApplicationToGroupsResponse
 */
AuthorizeApplicationToGroupsResponse Client::authorizeApplicationToGroupsWithOptions(const AuthorizeApplicationToGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeApplicationToGroups"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeApplicationToGroupsResponse>();
}

/**
 * @summary Grants multiple EIAM groups access to an application in a batch.
 *
 * @param request AuthorizeApplicationToGroupsRequest
 * @return AuthorizeApplicationToGroupsResponse
 */
AuthorizeApplicationToGroupsResponse Client::authorizeApplicationToGroups(const AuthorizeApplicationToGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeApplicationToGroupsWithOptions(request, runtime);
}

/**
 * @summary Grants access to an application for multiple EIAM organizations in a batch operation.
 *
 * @param request AuthorizeApplicationToOrganizationalUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeApplicationToOrganizationalUnitsResponse
 */
AuthorizeApplicationToOrganizationalUnitsResponse Client::authorizeApplicationToOrganizationalUnitsWithOptions(const AuthorizeApplicationToOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.getOrganizationalUnitIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeApplicationToOrganizationalUnits"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeApplicationToOrganizationalUnitsResponse>();
}

/**
 * @summary Grants access to an application for multiple EIAM organizations in a batch operation.
 *
 * @param request AuthorizeApplicationToOrganizationalUnitsRequest
 * @return AuthorizeApplicationToOrganizationalUnitsResponse
 */
AuthorizeApplicationToOrganizationalUnitsResponse Client::authorizeApplicationToOrganizationalUnits(const AuthorizeApplicationToOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeApplicationToOrganizationalUnitsWithOptions(request, runtime);
}

/**
 * @summary Grants multiple EIAM accounts access to an application in a batch.
 *
 * @param request AuthorizeApplicationToUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeApplicationToUsersResponse
 */
AuthorizeApplicationToUsersResponse Client::authorizeApplicationToUsersWithOptions(const AuthorizeApplicationToUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeApplicationToUsers"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeApplicationToUsersResponse>();
}

/**
 * @summary Grants multiple EIAM accounts access to an application in a batch.
 *
 * @param request AuthorizeApplicationToUsersRequest
 * @return AuthorizeApplicationToUsersResponse
 */
AuthorizeApplicationToUsersResponse Client::authorizeApplicationToUsers(const AuthorizeApplicationToUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeApplicationToUsersWithOptions(request, runtime);
}

/**
 * @summary Grants Scope permissions under a specified ResourceServer to a Client application.
 *
 * @param request AuthorizeResourceServerScopesToClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeResourceServerScopesToClientResponse
 */
AuthorizeResourceServerScopesToClientResponse Client::authorizeResourceServerScopesToClientWithOptions(const AuthorizeResourceServerScopesToClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientApplicationId()) {
    query["ClientApplicationId"] = request.getClientApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerApplicationId()) {
    query["ResourceServerApplicationId"] = request.getResourceServerApplicationId();
  }

  if (!!request.hasResourceServerScopeIds()) {
    query["ResourceServerScopeIds"] = request.getResourceServerScopeIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeResourceServerScopesToClient"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeResourceServerScopesToClientResponse>();
}

/**
 * @summary Grants Scope permissions under a specified ResourceServer to a Client application.
 *
 * @param request AuthorizeResourceServerScopesToClientRequest
 * @return AuthorizeResourceServerScopesToClientResponse
 */
AuthorizeResourceServerScopesToClientResponse Client::authorizeResourceServerScopesToClient(const AuthorizeResourceServerScopesToClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeResourceServerScopesToClientWithOptions(request, runtime);
}

/**
 * @summary Grants Scope permissions under a specified ResourceServer to a group.
 *
 * @param request AuthorizeResourceServerScopesToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeResourceServerScopesToGroupResponse
 */
AuthorizeResourceServerScopesToGroupResponse Client::authorizeResourceServerScopesToGroupWithOptions(const AuthorizeResourceServerScopesToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerScopeIds()) {
    query["ResourceServerScopeIds"] = request.getResourceServerScopeIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeResourceServerScopesToGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeResourceServerScopesToGroupResponse>();
}

/**
 * @summary Grants Scope permissions under a specified ResourceServer to a group.
 *
 * @param request AuthorizeResourceServerScopesToGroupRequest
 * @return AuthorizeResourceServerScopesToGroupResponse
 */
AuthorizeResourceServerScopesToGroupResponse Client::authorizeResourceServerScopesToGroup(const AuthorizeResourceServerScopesToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeResourceServerScopesToGroupWithOptions(request, runtime);
}

/**
 * @summary Grants scope permissions under a specified ResourceServer to an organizational unit.
 *
 * @param request AuthorizeResourceServerScopesToOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeResourceServerScopesToOrganizationalUnitResponse
 */
AuthorizeResourceServerScopesToOrganizationalUnitResponse Client::authorizeResourceServerScopesToOrganizationalUnitWithOptions(const AuthorizeResourceServerScopesToOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  if (!!request.hasResourceServerScopeIds()) {
    query["ResourceServerScopeIds"] = request.getResourceServerScopeIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeResourceServerScopesToOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeResourceServerScopesToOrganizationalUnitResponse>();
}

/**
 * @summary Grants scope permissions under a specified ResourceServer to an organizational unit.
 *
 * @param request AuthorizeResourceServerScopesToOrganizationalUnitRequest
 * @return AuthorizeResourceServerScopesToOrganizationalUnitResponse
 */
AuthorizeResourceServerScopesToOrganizationalUnitResponse Client::authorizeResourceServerScopesToOrganizationalUnit(const AuthorizeResourceServerScopesToOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeResourceServerScopesToOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Grants Scope permissions under a specified ResourceServer to an account.
 *
 * @param request AuthorizeResourceServerScopesToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeResourceServerScopesToUserResponse
 */
AuthorizeResourceServerScopesToUserResponse Client::authorizeResourceServerScopesToUserWithOptions(const AuthorizeResourceServerScopesToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerScopeIds()) {
    query["ResourceServerScopeIds"] = request.getResourceServerScopeIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeResourceServerScopesToUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeResourceServerScopesToUserResponse>();
}

/**
 * @summary Grants Scope permissions under a specified ResourceServer to an account.
 *
 * @param request AuthorizeResourceServerScopesToUserRequest
 * @return AuthorizeResourceServerScopesToUserResponse
 */
AuthorizeResourceServerScopesToUserResponse Client::authorizeResourceServerScopesToUser(const AuthorizeResourceServerScopesToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeResourceServerScopesToUserWithOptions(request, runtime);
}

/**
 * @summary Authorizes a specified ResourceServer for a Client application.
 *
 * @param request AuthorizeResourceServerToClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeResourceServerToClientResponse
 */
AuthorizeResourceServerToClientResponse Client::authorizeResourceServerToClientWithOptions(const AuthorizeResourceServerToClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientApplicationId()) {
    query["ClientApplicationId"] = request.getClientApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerApplicationId()) {
    query["ResourceServerApplicationId"] = request.getResourceServerApplicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeResourceServerToClient"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeResourceServerToClientResponse>();
}

/**
 * @summary Authorizes a specified ResourceServer for a Client application.
 *
 * @param request AuthorizeResourceServerToClientRequest
 * @return AuthorizeResourceServerToClientResponse
 */
AuthorizeResourceServerToClientResponse Client::authorizeResourceServerToClient(const AuthorizeResourceServerToClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeResourceServerToClientWithOptions(request, runtime);
}

/**
 * @summary Associates a third-party logon account.
 *
 * @param request BindUserAuthnSourceMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindUserAuthnSourceMappingResponse
 */
BindUserAuthnSourceMappingResponse Client::bindUserAuthnSourceMappingWithOptions(const BindUserAuthnSourceMappingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserExternalId()) {
    query["UserExternalId"] = request.getUserExternalId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindUserAuthnSourceMapping"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindUserAuthnSourceMappingResponse>();
}

/**
 * @summary Associates a third-party logon account.
 *
 * @param request BindUserAuthnSourceMappingRequest
 * @return BindUserAuthnSourceMappingResponse
 */
BindUserAuthnSourceMappingResponse Client::bindUserAuthnSourceMapping(const BindUserAuthnSourceMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindUserAuthnSourceMappingWithOptions(request, runtime);
}

/**
 * @summary Checks whether the primary organization for application synchronization is within the application synchronization scope.
 *
 * @param request CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse
 */
CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse Client::checkApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(const CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserPrimaryOrganizationalUnitId()) {
    query["UserPrimaryOrganizationalUnitId"] = request.getUserPrimaryOrganizationalUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckApplicationProvisioningUserPrimaryOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse>();
}

/**
 * @summary Checks whether the primary organization for application synchronization is within the application synchronization scope.
 *
 * @param request CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest
 * @return CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse
 */
CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse Client::checkApplicationProvisioningUserPrimaryOrganizationalUnit(const CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Checks whether an instance can be deleted.
 *
 * @param request CheckInstanceForDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckInstanceForDeleteResponse
 */
CheckInstanceForDeleteResponse Client::checkInstanceForDeleteWithOptions(const CheckInstanceForDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckInstanceForDelete"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckInstanceForDeleteResponse>();
}

/**
 * @summary Checks whether an instance can be deleted.
 *
 * @param request CheckInstanceForDeleteRequest
 * @return CheckInstanceForDeleteResponse
 */
CheckInstanceForDeleteResponse Client::checkInstanceForDelete(const CheckInstanceForDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkInstanceForDeleteWithOptions(request, runtime);
}

/**
 * @summary Determines whether an instance has the feature of a specific module.
 *
 * @param request CheckInstanceModuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckInstanceModuleStatusResponse
 */
CheckInstanceModuleStatusResponse Client::checkInstanceModuleStatusWithOptions(const CheckInstanceModuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureKey()) {
    query["FeatureKey"] = request.getFeatureKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModuleKey()) {
    query["ModuleKey"] = request.getModuleKey();
  }

  if (!!request.hasSubFeatureKey()) {
    query["SubFeatureKey"] = request.getSubFeatureKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckInstanceModuleStatus"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckInstanceModuleStatusResponse>();
}

/**
 * @summary Determines whether an instance has the feature of a specific module.
 *
 * @param request CheckInstanceModuleStatusRequest
 * @return CheckInstanceModuleStatusResponse
 */
CheckInstanceModuleStatusResponse Client::checkInstanceModuleStatus(const CheckInstanceModuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkInstanceModuleStatusWithOptions(request, runtime);
}

/**
 * @summary Creates an application resource in a specified EIAM instance.
 *
 * @description EIAM supports two standard SSO protocols for application access: SAML 2.0 and OIDC. This parameter cannot be changed after it is specified. Create the application based on the SSO protocol type used in your business scenario.
 *
 * @param request CreateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplicationWithOptions(const CreateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationIdentityType()) {
    query["ApplicationIdentityType"] = request.getApplicationIdentityType();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasApplicationOwner()) {
    query["ApplicationOwner"] = request.getApplicationOwner();
  }

  if (!!request.hasApplicationSourceType()) {
    query["ApplicationSourceType"] = request.getApplicationSourceType();
  }

  if (!!request.hasApplicationTemplateId()) {
    query["ApplicationTemplateId"] = request.getApplicationTemplateId();
  }

  if (!!request.hasCustomFields()) {
    query["CustomFields"] = request.getCustomFields();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogoUrl()) {
    query["LogoUrl"] = request.getLogoUrl();
  }

  if (!!request.hasSsoType()) {
    query["SsoType"] = request.getSsoType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplication"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationResponse>();
}

/**
 * @summary Creates an application resource in a specified EIAM instance.
 *
 * @description EIAM supports two standard SSO protocols for application access: SAML 2.0 and OIDC. This parameter cannot be changed after it is specified. Create the application based on the SSO protocol type used in your business scenario.
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationWithOptions(request, runtime);
}

/**
 * @summary Creates a client secret for an EIAM application. You can create a maximum of two client secrets for each EIAM application.
 *
 * @param request CreateApplicationClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationClientSecretResponse
 */
CreateApplicationClientSecretResponse Client::createApplicationClientSecretWithOptions(const CreateApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasExpirationTime()) {
    query["ExpirationTime"] = request.getExpirationTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationClientSecret"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationClientSecretResponse>();
}

/**
 * @summary Creates a client secret for an EIAM application. You can create a maximum of two client secrets for each EIAM application.
 *
 * @param request CreateApplicationClientSecretRequest
 * @return CreateApplicationClientSecretResponse
 */
CreateApplicationClientSecretResponse Client::createApplicationClientSecret(const CreateApplicationClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationClientSecretWithOptions(request, runtime);
}

/**
 * @summary Creates an application federated identity credential.
 *
 * @param request CreateApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationFederatedCredentialResponse
 */
CreateApplicationFederatedCredentialResponse Client::createApplicationFederatedCredentialWithOptions(const CreateApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialName()) {
    query["ApplicationFederatedCredentialName"] = request.getApplicationFederatedCredentialName();
  }

  if (!!request.hasApplicationFederatedCredentialType()) {
    query["ApplicationFederatedCredentialType"] = request.getApplicationFederatedCredentialType();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAttributeMappings()) {
    query["AttributeMappings"] = request.getAttributeMappings();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.getFederatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOidcVerificationConfig()) {
    query["OidcVerificationConfig"] = request.getOidcVerificationConfig();
  }

  if (!!request.hasPkcs7VerificationConfig()) {
    query["Pkcs7VerificationConfig"] = request.getPkcs7VerificationConfig();
  }

  if (!!request.hasVerificationCondition()) {
    query["VerificationCondition"] = request.getVerificationCondition();
  }

  if (!!request.hasVerificationMode()) {
    query["VerificationMode"] = request.getVerificationMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationFederatedCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationFederatedCredentialResponse>();
}

/**
 * @summary Creates an application federated identity credential.
 *
 * @param request CreateApplicationFederatedCredentialRequest
 * @return CreateApplicationFederatedCredentialResponse
 */
CreateApplicationFederatedCredentialResponse Client::createApplicationFederatedCredential(const CreateApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary Creates an application role.
 *
 * @param request CreateApplicationRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationRoleResponse
 */
CreateApplicationRoleResponse Client::createApplicationRoleWithOptions(const CreateApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleName()) {
    query["ApplicationRoleName"] = request.getApplicationRoleName();
  }

  if (!!request.hasApplicationRoleValue()) {
    query["ApplicationRoleValue"] = request.getApplicationRoleValue();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationRole"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationRoleResponse>();
}

/**
 * @summary Creates an application role.
 *
 * @param request CreateApplicationRoleRequest
 * @return CreateApplicationRoleResponse
 */
CreateApplicationRoleResponse Client::createApplicationRole(const CreateApplicationRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationRoleWithOptions(request, runtime);
}

/**
 * @summary Creates an application token.
 *
 * @param request CreateApplicationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationTokenResponse
 */
CreateApplicationTokenResponse Client::createApplicationTokenWithOptions(const CreateApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationTokenType()) {
    query["ApplicationTokenType"] = request.getApplicationTokenType();
  }

  if (!!request.hasExpirationTime()) {
    query["ExpirationTime"] = request.getExpirationTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationTokenResponse>();
}

/**
 * @summary Creates an application token.
 *
 * @param request CreateApplicationTokenRequest
 * @return CreateApplicationTokenResponse
 */
CreateApplicationTokenResponse Client::createApplicationToken(const CreateApplicationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationTokenWithOptions(request, runtime);
}

/**
 * @summary Creates an authorization resource.
 *
 * @param request CreateAuthorizationResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAuthorizationResourceResponse
 */
CreateAuthorizationResourceResponse Client::createAuthorizationResourceWithOptions(const CreateAuthorizationResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationResourceEntityId()) {
    query["AuthorizationResourceEntityId"] = request.getAuthorizationResourceEntityId();
  }

  if (!!request.hasAuthorizationResourceEntityType()) {
    query["AuthorizationResourceEntityType"] = request.getAuthorizationResourceEntityType();
  }

  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAuthorizationResource"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAuthorizationResourceResponse>();
}

/**
 * @summary Creates an authorization resource.
 *
 * @param request CreateAuthorizationResourceRequest
 * @return CreateAuthorizationResourceResponse
 */
CreateAuthorizationResourceResponse Client::createAuthorizationResource(const CreateAuthorizationResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAuthorizationResourceWithOptions(request, runtime);
}

/**
 * @summary Creates an authorization rule.
 *
 * @param request CreateAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAuthorizationRuleResponse
 */
CreateAuthorizationRuleResponse Client::createAuthorizationRuleWithOptions(const CreateAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationResourceScope()) {
    query["AuthorizationResourceScope"] = request.getAuthorizationResourceScope();
  }

  if (!!request.hasAuthorizationRuleName()) {
    query["AuthorizationRuleName"] = request.getAuthorizationRuleName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAuthorizationRuleResponse>();
}

/**
 * @summary Creates an authorization rule.
 *
 * @param request CreateAuthorizationRuleRequest
 * @return CreateAuthorizationRuleResponse
 */
CreateAuthorizationRuleResponse Client::createAuthorizationRule(const CreateAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a brand.
 *
 * @param request CreateBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBrandResponse
 */
CreateBrandResponse Client::createBrandWithOptions(const CreateBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandName()) {
    query["BrandName"] = request.getBrandName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBrandResponse>();
}

/**
 * @summary Creates a brand.
 *
 * @param request CreateBrandRequest
 * @return CreateBrandResponse
 */
CreateBrandResponse Client::createBrand(const CreateBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBrandWithOptions(request, runtime);
}

/**
 * @summary Creates a ClientPublicKey for an application. When an M2M client uses the PRIVATE_KEY_JWT method to request the token endpoint, this public key is used by the M2M authorization server to verify the assertion carried in the client\\"s token endpoint request.
 *
 * @param request CreateClientPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientPublicKeyResponse
 */
CreateClientPublicKeyResponse Client::createClientPublicKeyWithOptions(const CreateClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithmType()) {
    query["AlgorithmType"] = request.getAlgorithmType();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPublicKey()) {
    query["PublicKey"] = request.getPublicKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateClientPublicKey"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClientPublicKeyResponse>();
}

/**
 * @summary Creates a ClientPublicKey for an application. When an M2M client uses the PRIVATE_KEY_JWT method to request the token endpoint, this public key is used by the M2M authorization server to verify the assertion carried in the client\\"s token endpoint request.
 *
 * @param request CreateClientPublicKeyRequest
 * @return CreateClientPublicKeyResponse
 */
CreateClientPublicKeyResponse Client::createClientPublicKey(const CreateClientPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Creates a cloud account resource in a specified EIAM instance.
 *
 * @description **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of IDaaS EIAM.**
 *
 * @param request CreateCloudAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudAccountResponse
 */
CreateCloudAccountResponse Client::createCloudAccountWithOptions(const CreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudAccountExternalId()) {
    query["CloudAccountExternalId"] = request.getCloudAccountExternalId();
  }

  if (!!request.hasCloudAccountName()) {
    query["CloudAccountName"] = request.getCloudAccountName();
  }

  if (!!request.hasCloudAccountProviderName()) {
    query["CloudAccountProviderName"] = request.getCloudAccountProviderName();
  }

  if (!!request.hasCloudAccountSite()) {
    query["CloudAccountSite"] = request.getCloudAccountSite();
  }

  if (!!request.hasCloudAccountVendorType()) {
    query["CloudAccountVendorType"] = request.getCloudAccountVendorType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudAccount"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudAccountResponse>();
}

/**
 * @summary Creates a cloud account resource in a specified EIAM instance.
 *
 * @description **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of IDaaS EIAM.**
 *
 * @param request CreateCloudAccountRequest
 * @return CreateCloudAccountResponse
 */
CreateCloudAccountResponse Client::createCloudAccount(const CreateCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a cloud role for a specified Alibaba Cloud account.
 *
 * @param request CreateCloudAccountRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudAccountRoleResponse
 */
CreateCloudAccountRoleResponse Client::createCloudAccountRoleWithOptions(const CreateCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasCloudAccountRoleName()) {
    query["CloudAccountRoleName"] = request.getCloudAccountRoleName();
  }

  if (!!request.hasCloudAccountRoleType()) {
    query["CloudAccountRoleType"] = request.getCloudAccountRoleType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudAccountRole"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudAccountRoleResponse>();
}

/**
 * @summary Creates a cloud role for a specified Alibaba Cloud account.
 *
 * @param request CreateCloudAccountRoleRequest
 * @return CreateCloudAccountRoleResponse
 */
CreateCloudAccountRoleResponse Client::createCloudAccountRole(const CreateCloudAccountRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudAccountRoleWithOptions(request, runtime);
}

/**
 * @summary Creates a conditional access policy.
 *
 * @description Creates a conditional access policy.
 *
 * @param request CreateConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConditionalAccessPolicyResponse
 */
CreateConditionalAccessPolicyResponse Client::createConditionalAccessPolicyWithOptions(const CreateConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConditionalAccessPolicyName()) {
    query["ConditionalAccessPolicyName"] = request.getConditionalAccessPolicyName();
  }

  if (!!request.hasConditionalAccessPolicyType()) {
    query["ConditionalAccessPolicyType"] = request.getConditionalAccessPolicyType();
  }

  if (!!request.hasConditionsConfig()) {
    query["ConditionsConfig"] = request.getConditionsConfig();
  }

  if (!!request.hasDecisionConfig()) {
    query["DecisionConfig"] = request.getDecisionConfig();
  }

  if (!!request.hasDecisionType()) {
    query["DecisionType"] = request.getDecisionType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEvaluateAt()) {
    query["EvaluateAt"] = request.getEvaluateAt();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConditionalAccessPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConditionalAccessPolicyResponse>();
}

/**
 * @summary Creates a conditional access policy.
 *
 * @description Creates a conditional access policy.
 *
 * @param request CreateConditionalAccessPolicyRequest
 * @return CreateConditionalAccessPolicyResponse
 */
CreateConditionalAccessPolicyResponse Client::createConditionalAccessPolicy(const CreateConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a credential resource in a specified EIAM instance.
 *
 * @param request CreateCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCredentialResponse
 */
CreateCredentialResponse Client::createCredentialWithOptions(const CreateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCredentialContent()) {
    query["CredentialContent"] = request.getCredentialContent();
  }

  if (!!request.hasCredentialExternalId()) {
    query["CredentialExternalId"] = request.getCredentialExternalId();
  }

  if (!!request.hasCredentialIdentifier()) {
    query["CredentialIdentifier"] = request.getCredentialIdentifier();
  }

  if (!!request.hasCredentialName()) {
    query["CredentialName"] = request.getCredentialName();
  }

  if (!!request.hasCredentialScenarioLabel()) {
    query["CredentialScenarioLabel"] = request.getCredentialScenarioLabel();
  }

  if (!!request.hasCredentialSharingScope()) {
    query["CredentialSharingScope"] = request.getCredentialSharingScope();
  }

  if (!!request.hasCredentialSubjectId()) {
    query["CredentialSubjectId"] = request.getCredentialSubjectId();
  }

  if (!!request.hasCredentialSubjectType()) {
    query["CredentialSubjectType"] = request.getCredentialSubjectType();
  }

  if (!!request.hasCredentialType()) {
    query["CredentialType"] = request.getCredentialType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExclusiveUserId()) {
    query["ExclusiveUserId"] = request.getExclusiveUserId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCredentialResponse>();
}

/**
 * @summary Creates a credential resource in a specified EIAM instance.
 *
 * @param request CreateCredentialRequest
 * @return CreateCredentialResponse
 */
CreateCredentialResponse Client::createCredential(const CreateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCredentialWithOptions(request, runtime);
}

/**
 * @summary Creates a credential provider.
 *
 * @param request CreateCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCredentialProviderResponse
 */
CreateCredentialProviderResponse Client::createCredentialProviderWithOptions(const CreateCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCredentialProviderConfig()) {
    query["CredentialProviderConfig"] = request.getCredentialProviderConfig();
  }

  if (!!request.hasCredentialProviderIdentifier()) {
    query["CredentialProviderIdentifier"] = request.getCredentialProviderIdentifier();
  }

  if (!!request.hasCredentialProviderName()) {
    query["CredentialProviderName"] = request.getCredentialProviderName();
  }

  if (!!request.hasCredentialProviderType()) {
    query["CredentialProviderType"] = request.getCredentialProviderType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCredentialProviderResponse>();
}

/**
 * @summary Creates a credential provider.
 *
 * @param request CreateCredentialProviderRequest
 * @return CreateCredentialProviderResponse
 */
CreateCredentialProviderResponse Client::createCredentialProvider(const CreateCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Creates an extended field.
 *
 * @param request CreateCustomFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomFieldResponse
 */
CreateCustomFieldResponse Client::createCustomFieldWithOptions(const CreateCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultValue()) {
    query["DefaultValue"] = request.getDefaultValue();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEncrypted()) {
    query["Encrypted"] = request.getEncrypted();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasFieldDataConfig()) {
    query["FieldDataConfig"] = request.getFieldDataConfig();
  }

  if (!!request.hasFieldDataType()) {
    query["FieldDataType"] = request.getFieldDataType();
  }

  if (!!request.hasFieldDisplayName()) {
    query["FieldDisplayName"] = request.getFieldDisplayName();
  }

  if (!!request.hasFieldDisplayType()) {
    query["FieldDisplayType"] = request.getFieldDisplayType();
  }

  if (!!request.hasFieldName()) {
    query["FieldName"] = request.getFieldName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequired()) {
    query["Required"] = request.getRequired();
  }

  if (!!request.hasUnique()) {
    query["Unique"] = request.getUnique();
  }

  if (!!request.hasUserPermission()) {
    query["UserPermission"] = request.getUserPermission();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomField"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomFieldResponse>();
}

/**
 * @summary Creates an extended field.
 *
 * @param request CreateCustomFieldRequest
 * @return CreateCustomFieldResponse
 */
CreateCustomFieldResponse Client::createCustomField(const CreateCustomFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomFieldWithOptions(request, runtime);
}

/**
 * @summary You can create custom terms.
 *
 * @param request CreateCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomPrivacyPolicyResponse
 */
CreateCustomPrivacyPolicyResponse Client::createCustomPrivacyPolicyWithOptions(const CreateCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCustomPrivacyPolicyContents()) {
    query["CustomPrivacyPolicyContents"] = request.getCustomPrivacyPolicyContents();
  }

  if (!!request.hasCustomPrivacyPolicyName()) {
    query["CustomPrivacyPolicyName"] = request.getCustomPrivacyPolicyName();
  }

  if (!!request.hasDefaultLanguageCode()) {
    query["DefaultLanguageCode"] = request.getDefaultLanguageCode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserConsentType()) {
    query["UserConsentType"] = request.getUserConsentType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomPrivacyPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomPrivacyPolicyResponse>();
}

/**
 * @summary You can create custom terms.
 *
 * @param request CreateCustomPrivacyPolicyRequest
 * @return CreateCustomPrivacyPolicyResponse
 */
CreateCustomPrivacyPolicyResponse Client::createCustomPrivacyPolicy(const CreateCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a custom domain name for an EIAM (Entity and Identity Access Management) instance.
 *
 * @param request CreateDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomainWithOptions(const CreateDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasFiling()) {
    query["Filing"] = request.getFiling();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDomain"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDomainResponse>();
}

/**
 * @summary Creates a custom domain name for an EIAM (Entity and Identity Access Management) instance.
 *
 * @param request CreateDomainRequest
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomain(const CreateDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDomainWithOptions(request, runtime);
}

/**
 * @summary Creates a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request CreateDomainProxyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDomainProxyTokenResponse
 */
CreateDomainProxyTokenResponse Client::createDomainProxyTokenWithOptions(const CreateDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDomainProxyToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDomainProxyTokenResponse>();
}

/**
 * @summary Creates a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request CreateDomainProxyTokenRequest
 * @return CreateDomainProxyTokenResponse
 */
CreateDomainProxyTokenResponse Client::createDomainProxyToken(const CreateDomainProxyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDomainProxyTokenWithOptions(request, runtime);
}

/**
 * @summary Creates a federated trust source.
 *
 * @param request CreateFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFederatedCredentialProviderResponse
 */
CreateFederatedCredentialProviderResponse Client::createFederatedCredentialProviderWithOptions(const CreateFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudIdPProviderConfig()) {
    query["CloudIdPProviderConfig"] = request.getCloudIdPProviderConfig();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFederatedCredentialProviderName()) {
    query["FederatedCredentialProviderName"] = request.getFederatedCredentialProviderName();
  }

  if (!!request.hasFederatedCredentialProviderType()) {
    query["FederatedCredentialProviderType"] = request.getFederatedCredentialProviderType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  if (!!request.hasOidcProviderConfig()) {
    query["OidcProviderConfig"] = request.getOidcProviderConfig();
  }

  if (!!request.hasPkcs7ProviderConfig()) {
    query["Pkcs7ProviderConfig"] = request.getPkcs7ProviderConfig();
  }

  if (!!request.hasPrivateCaProviderConfig()) {
    query["PrivateCaProviderConfig"] = request.getPrivateCaProviderConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFederatedCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFederatedCredentialProviderResponse>();
}

/**
 * @summary Creates a federated trust source.
 *
 * @param request CreateFederatedCredentialProviderRequest
 * @return CreateFederatedCredentialProviderResponse
 */
CreateFederatedCredentialProviderResponse Client::createFederatedCredentialProvider(const CreateFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Create an EIAM account group.
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

  if (!!request.hasGroupExternalId()) {
    query["GroupExternalId"] = request.getGroupExternalId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGroup"},
    {"version" , "2021-12-01"},
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
 * @summary Create an EIAM account group.
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupWithOptions(request, runtime);
}

/**
 * @summary Create an identity provider.
 *
 * @param request CreateIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdentityProviderResponse
 */
CreateIdentityProviderResponse Client::createIdentityProviderWithOptions(const CreateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthnConfig()) {
    query["AuthnConfig"] = request.getAuthnConfig();
  }

  if (!!request.hasAutoCreateUserConfig()) {
    query["AutoCreateUserConfig"] = request.getAutoCreateUserConfig();
  }

  if (!!request.hasAutoUpdateUserConfig()) {
    query["AutoUpdateUserConfig"] = request.getAutoUpdateUserConfig();
  }

  if (!!request.hasBindingConfig()) {
    query["BindingConfig"] = request.getBindingConfig();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDingtalkAppConfig()) {
    query["DingtalkAppConfig"] = request.getDingtalkAppConfig();
  }

  if (!!request.hasIdentityProviderName()) {
    query["IdentityProviderName"] = request.getIdentityProviderName();
  }

  if (!!request.hasIdentityProviderType()) {
    query["IdentityProviderType"] = request.getIdentityProviderType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLarkConfig()) {
    query["LarkConfig"] = request.getLarkConfig();
  }

  if (!!request.hasLdapConfig()) {
    query["LdapConfig"] = request.getLdapConfig();
  }

  if (!!request.hasLogoUrl()) {
    query["LogoUrl"] = request.getLogoUrl();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  if (!!request.hasOidcConfig()) {
    query["OidcConfig"] = request.getOidcConfig();
  }

  if (!!request.hasSamlConfig()) {
    query["SamlConfig"] = request.getSamlConfig();
  }

  if (!!request.hasUdPullConfig()) {
    query["UdPullConfig"] = request.getUdPullConfig();
  }

  if (!!request.hasUdPushConfig()) {
    query["UdPushConfig"] = request.getUdPushConfig();
  }

  if (!!request.hasWeComConfig()) {
    query["WeComConfig"] = request.getWeComConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIdentityProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIdentityProviderResponse>();
}

/**
 * @summary Create an identity provider.
 *
 * @param request CreateIdentityProviderRequest
 * @return CreateIdentityProviderResponse
 */
CreateIdentityProviderResponse Client::createIdentityProvider(const CreateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Creates a status check job for an identity provider.
 *
 * @param request CreateIdentityProviderStatusCheckJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdentityProviderStatusCheckJobResponse
 */
CreateIdentityProviderStatusCheckJobResponse Client::createIdentityProviderStatusCheckJobWithOptions(const CreateIdentityProviderStatusCheckJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIdentityProviderStatusCheckJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIdentityProviderStatusCheckJobResponse>();
}

/**
 * @summary Creates a status check job for an identity provider.
 *
 * @param request CreateIdentityProviderStatusCheckJobRequest
 * @return CreateIdentityProviderStatusCheckJobResponse
 */
CreateIdentityProviderStatusCheckJobResponse Client::createIdentityProviderStatusCheckJob(const CreateIdentityProviderStatusCheckJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIdentityProviderStatusCheckJobWithOptions(request, runtime);
}

/**
 * @summary Creates an instance based on which all capabilities of Identity as a Service (IDaaS) Enterprise Identity and Access Management (EIAM) are provided.
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates an instance based on which all capabilities of Identity as a Service (IDaaS) Enterprise Identity and Access Management (EIAM) are provided.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a trial License for an instance.
 *
 * @param request CreateInstanceTrialLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceTrialLicenseResponse
 */
CreateInstanceTrialLicenseResponse Client::createInstanceTrialLicenseWithOptions(const CreateInstanceTrialLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstanceTrialLicense"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceTrialLicenseResponse>();
}

/**
 * @summary Creates a trial License for an instance.
 *
 * @param request CreateInstanceTrialLicenseRequest
 * @return CreateInstanceTrialLicenseResponse
 */
CreateInstanceTrialLicenseResponse Client::createInstanceTrialLicense(const CreateInstanceTrialLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceTrialLicenseWithOptions(request, runtime);
}

/**
 * @summary Creates a network access endpoint.
 *
 * @param request CreateNetworkAccessEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkAccessEndpointResponse
 */
CreateNetworkAccessEndpointResponse Client::createNetworkAccessEndpointWithOptions(const CreateNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkAccessEndpointName()) {
    query["NetworkAccessEndpointName"] = request.getNetworkAccessEndpointName();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVpcRegionId()) {
    query["VpcRegionId"] = request.getVpcRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkAccessEndpoint"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkAccessEndpointResponse>();
}

/**
 * @summary Creates a network access endpoint.
 *
 * @param request CreateNetworkAccessEndpointRequest
 * @return CreateNetworkAccessEndpointResponse
 */
CreateNetworkAccessEndpointResponse Client::createNetworkAccessEndpoint(const CreateNetworkAccessEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkAccessEndpointWithOptions(request, runtime);
}

/**
 * @summary Creates a network zone object.
 *
 * @param request CreateNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkZoneResponse
 */
CreateNetworkZoneResponse Client::createNetworkZoneWithOptions(const CreateNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpv4Cidrs()) {
    query["Ipv4Cidrs"] = request.getIpv4Cidrs();
  }

  if (!!request.hasIpv6Cidrs()) {
    query["Ipv6Cidrs"] = request.getIpv6Cidrs();
  }

  if (!!request.hasNetworkZoneName()) {
    query["NetworkZoneName"] = request.getNetworkZoneName();
  }

  if (!!request.hasNetworkZoneType()) {
    query["NetworkZoneType"] = request.getNetworkZoneType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkZone"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkZoneResponse>();
}

/**
 * @summary Creates a network zone object.
 *
 * @param request CreateNetworkZoneRequest
 * @return CreateNetworkZoneResponse
 */
CreateNetworkZoneResponse Client::createNetworkZone(const CreateNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary Creates an EIAM organization under a specified organization.
 *
 * @param request CreateOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrganizationalUnitResponse
 */
CreateOrganizationalUnitResponse Client::createOrganizationalUnitWithOptions(const CreateOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitExternalId()) {
    query["OrganizationalUnitExternalId"] = request.getOrganizationalUnitExternalId();
  }

  if (!!request.hasOrganizationalUnitName()) {
    query["OrganizationalUnitName"] = request.getOrganizationalUnitName();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrganizationalUnitResponse>();
}

/**
 * @summary Creates an EIAM organization under a specified organization.
 *
 * @param request CreateOrganizationalUnitRequest
 * @return CreateOrganizationalUnitResponse
 */
CreateOrganizationalUnitResponse Client::createOrganizationalUnit(const CreateOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Creates a scope permission for a specified resource server.
 *
 * @param request CreateResourceServerScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceServerScopeResponse
 */
CreateResourceServerScopeResponse Client::createResourceServerScopeWithOptions(const CreateResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAuthorizationType()) {
    query["AuthorizationType"] = request.getAuthorizationType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerScopeName()) {
    query["ResourceServerScopeName"] = request.getResourceServerScopeName();
  }

  if (!!request.hasResourceServerScopeType()) {
    query["ResourceServerScopeType"] = request.getResourceServerScopeType();
  }

  if (!!request.hasResourceServerScopeValue()) {
    query["ResourceServerScopeValue"] = request.getResourceServerScopeValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateResourceServerScope"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceServerScopeResponse>();
}

/**
 * @summary Creates a scope permission for a specified resource server.
 *
 * @param request CreateResourceServerScopeRequest
 * @return CreateResourceServerScopeResponse
 */
CreateResourceServerScopeResponse Client::createResourceServerScope(const CreateResourceServerScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceServerScopeWithOptions(request, runtime);
}

/**
 * @summary Creates an EIAM account in a specified EIAM instance.
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCustomFields()) {
    query["CustomFields"] = request.getCustomFields();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasEmailVerified()) {
    query["EmailVerified"] = request.getEmailVerified();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.getOrganizationalUnitIds();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordInitializationConfig()) {
    query["PasswordInitializationConfig"] = request.getPasswordInitializationConfig();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasPhoneNumberVerified()) {
    query["PhoneNumberVerified"] = request.getPhoneNumberVerified();
  }

  if (!!request.hasPhoneRegion()) {
    query["PhoneRegion"] = request.getPhoneRegion();
  }

  if (!!request.hasPrimaryOrganizationalUnitId()) {
    query["PrimaryOrganizationalUnitId"] = request.getPrimaryOrganizationalUnitId();
  }

  if (!!request.hasUserExternalId()) {
    query["UserExternalId"] = request.getUserExternalId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2021-12-01"},
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
 * @summary Creates an EIAM account in a specified EIAM instance.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary Deletes an EIAM application resource.
 *
 * @description Before deleting a specified EIAM application, make sure the application is no longer in use. After the application is deleted, all configuration data is permanently deleted and cannot be recovered.
 *
 * @param request DeleteApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplication"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationResponse>();
}

/**
 * @summary Deletes an EIAM application resource.
 *
 * @description Before deleting a specified EIAM application, make sure the application is no longer in use. After the application is deleted, all configuration data is permanently deleted and cannot be recovered.
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationWithOptions(request, runtime);
}

/**
 * @summary Deletes a client secret of an EIAM application.
 *
 * @param request DeleteApplicationClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationClientSecretResponse
 */
DeleteApplicationClientSecretResponse Client::deleteApplicationClientSecretWithOptions(const DeleteApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.getSecretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationClientSecret"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationClientSecretResponse>();
}

/**
 * @summary Deletes a client secret of an EIAM application.
 *
 * @param request DeleteApplicationClientSecretRequest
 * @return DeleteApplicationClientSecretResponse
 */
DeleteApplicationClientSecretResponse Client::deleteApplicationClientSecret(const DeleteApplicationClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationClientSecretWithOptions(request, runtime);
}

/**
 * @summary Deletes a federated identity credential of an application.
 *
 * @param request DeleteApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationFederatedCredentialResponse
 */
DeleteApplicationFederatedCredentialResponse Client::deleteApplicationFederatedCredentialWithOptions(const DeleteApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.getApplicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationFederatedCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationFederatedCredentialResponse>();
}

/**
 * @summary Deletes a federated identity credential of an application.
 *
 * @param request DeleteApplicationFederatedCredentialRequest
 * @return DeleteApplicationFederatedCredentialResponse
 */
DeleteApplicationFederatedCredentialResponse Client::deleteApplicationFederatedCredential(const DeleteApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary Deletes an application role.
 *
 * @param request DeleteApplicationRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationRoleResponse
 */
DeleteApplicationRoleResponse Client::deleteApplicationRoleWithOptions(const DeleteApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationRole"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationRoleResponse>();
}

/**
 * @summary Deletes an application role.
 *
 * @param request DeleteApplicationRoleRequest
 * @return DeleteApplicationRoleResponse
 */
DeleteApplicationRoleResponse Client::deleteApplicationRole(const DeleteApplicationRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationRoleWithOptions(request, runtime);
}

/**
 * @summary Deletes an ApplicationToken.
 *
 * @param request DeleteApplicationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationTokenResponse
 */
DeleteApplicationTokenResponse Client::deleteApplicationTokenWithOptions(const DeleteApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationTokenId()) {
    query["ApplicationTokenId"] = request.getApplicationTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationTokenResponse>();
}

/**
 * @summary Deletes an ApplicationToken.
 *
 * @param request DeleteApplicationTokenRequest
 * @return DeleteApplicationTokenResponse
 */
DeleteApplicationTokenResponse Client::deleteApplicationToken(const DeleteApplicationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationTokenWithOptions(request, runtime);
}

/**
 * @summary Deletes an authorized resource.
 *
 * @param request DeleteAuthorizationResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAuthorizationResourceResponse
 */
DeleteAuthorizationResourceResponse Client::deleteAuthorizationResourceWithOptions(const DeleteAuthorizationResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationResourceId()) {
    query["AuthorizationResourceId"] = request.getAuthorizationResourceId();
  }

  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAuthorizationResource"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAuthorizationResourceResponse>();
}

/**
 * @summary Deletes an authorized resource.
 *
 * @param request DeleteAuthorizationResourceRequest
 * @return DeleteAuthorizationResourceResponse
 */
DeleteAuthorizationResourceResponse Client::deleteAuthorizationResource(const DeleteAuthorizationResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAuthorizationResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes an authorization rule. The authorization rule can be deleted only when it is in the disabled state.
 *
 * @param request DeleteAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAuthorizationRuleResponse
 */
DeleteAuthorizationRuleResponse Client::deleteAuthorizationRuleWithOptions(const DeleteAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAuthorizationRuleResponse>();
}

/**
 * @summary Deletes an authorization rule. The authorization rule can be deleted only when it is in the disabled state.
 *
 * @param request DeleteAuthorizationRuleRequest
 * @return DeleteAuthorizationRuleResponse
 */
DeleteAuthorizationRuleResponse Client::deleteAuthorizationRule(const DeleteAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Delete Brand
 *
 * @param request DeleteBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBrandResponse
 */
DeleteBrandResponse Client::deleteBrandWithOptions(const DeleteBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBrandResponse>();
}

/**
 * @summary Delete Brand
 *
 * @param request DeleteBrandRequest
 * @return DeleteBrandResponse
 */
DeleteBrandResponse Client::deleteBrand(const DeleteBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBrandWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified application ClientPublicKey.
 *
 * @param request DeleteClientPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientPublicKeyResponse
 */
DeleteClientPublicKeyResponse Client::deleteClientPublicKeyWithOptions(const DeleteClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientPublicKeyId()) {
    query["ClientPublicKeyId"] = request.getClientPublicKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClientPublicKey"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClientPublicKeyResponse>();
}

/**
 * @summary Deletes a specified application ClientPublicKey.
 *
 * @param request DeleteClientPublicKeyRequest
 * @return DeleteClientPublicKeyResponse
 */
DeleteClientPublicKeyResponse Client::deleteClientPublicKey(const DeleteClientPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes an Alibaba Cloud account resource.
 *
 * @param request DeleteCloudAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudAccountResponse
 */
DeleteCloudAccountResponse Client::deleteCloudAccountWithOptions(const DeleteCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudAccount"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudAccountResponse>();
}

/**
 * @summary Deletes an Alibaba Cloud account resource.
 *
 * @param request DeleteCloudAccountRequest
 * @return DeleteCloudAccountResponse
 */
DeleteCloudAccountResponse Client::deleteCloudAccount(const DeleteCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a cloud role from a specified Alibaba Cloud account.
 *
 * @description You must disable the cloud role before you delete it. After you delete the role, all related data is also deleted and cannot be recovered.
 *
 * @param request DeleteCloudAccountRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudAccountRoleResponse
 */
DeleteCloudAccountRoleResponse Client::deleteCloudAccountRoleWithOptions(const DeleteCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasCloudAccountRoleId()) {
    query["CloudAccountRoleId"] = request.getCloudAccountRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudAccountRole"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudAccountRoleResponse>();
}

/**
 * @summary Deletes a cloud role from a specified Alibaba Cloud account.
 *
 * @description You must disable the cloud role before you delete it. After you delete the role, all related data is also deleted and cannot be recovered.
 *
 * @param request DeleteCloudAccountRoleRequest
 * @return DeleteCloudAccountRoleResponse
 */
DeleteCloudAccountRoleResponse Client::deleteCloudAccountRole(const DeleteCloudAccountRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudAccountRoleWithOptions(request, runtime);
}

/**
 * @summary Deletes a conditional access policy.
 *
 * @description Before you delete a conditional access policy, make sure that the policy is no longer in use. After the policy is deleted, all configuration data is permanently removed and cannot be recovered.
 *
 * @param request DeleteConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConditionalAccessPolicyResponse
 */
DeleteConditionalAccessPolicyResponse Client::deleteConditionalAccessPolicyWithOptions(const DeleteConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.getConditionalAccessPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConditionalAccessPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConditionalAccessPolicyResponse>();
}

/**
 * @summary Deletes a conditional access policy.
 *
 * @description Before you delete a conditional access policy, make sure that the policy is no longer in use. After the policy is deleted, all configuration data is permanently removed and cannot be recovered.
 *
 * @param request DeleteConditionalAccessPolicyRequest
 * @return DeleteConditionalAccessPolicyResponse
 */
DeleteConditionalAccessPolicyResponse Client::deleteConditionalAccessPolicy(const DeleteConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a credential resource.
 *
 * @param request DeleteCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCredentialResponse
 */
DeleteCredentialResponse Client::deleteCredentialWithOptions(const DeleteCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialId()) {
    query["CredentialId"] = request.getCredentialId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCredentialResponse>();
}

/**
 * @summary Deletes a credential resource.
 *
 * @param request DeleteCredentialRequest
 * @return DeleteCredentialResponse
 */
DeleteCredentialResponse Client::deleteCredential(const DeleteCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCredentialWithOptions(request, runtime);
}

/**
 * @summary Deletes a credential provider.
 *
 * @param request DeleteCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCredentialProviderResponse
 */
DeleteCredentialProviderResponse Client::deleteCredentialProviderWithOptions(const DeleteCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialProviderId()) {
    query["CredentialProviderId"] = request.getCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCredentialProviderResponse>();
}

/**
 * @summary Deletes a credential provider.
 *
 * @param request DeleteCredentialProviderRequest
 * @return DeleteCredentialProviderResponse
 */
DeleteCredentialProviderResponse Client::deleteCredentialProvider(const DeleteCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Deletes an extended character field.
 *
 * @param request DeleteCustomFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomFieldResponse
 */
DeleteCustomFieldResponse Client::deleteCustomFieldWithOptions(const DeleteCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFieldId()) {
    query["FieldId"] = request.getFieldId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomField"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomFieldResponse>();
}

/**
 * @summary Deletes an extended character field.
 *
 * @param request DeleteCustomFieldRequest
 * @return DeleteCustomFieldResponse
 */
DeleteCustomFieldResponse Client::deleteCustomField(const DeleteCustomFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomFieldWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom clause.
 *
 * @param request DeleteCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomPrivacyPolicyResponse
 */
DeleteCustomPrivacyPolicyResponse Client::deleteCustomPrivacyPolicyWithOptions(const DeleteCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyId()) {
    query["CustomPrivacyPolicyId"] = request.getCustomPrivacyPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomPrivacyPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomPrivacyPolicyResponse>();
}

/**
 * @summary Deletes a custom clause.
 *
 * @param request DeleteCustomPrivacyPolicyRequest
 * @return DeleteCustomPrivacyPolicyResponse
 */
DeleteCustomPrivacyPolicyResponse Client::deleteCustomPrivacyPolicy(const DeleteCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom domain name of a specified Employee Identity and Access Management (EIAM) instance. Deletion of the instance initialization domain name or default domain name is rejected.
 *
 * @param request DeleteDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomainWithOptions(const DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomain"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainResponse>();
}

/**
 * @summary Deletes a custom domain name of a specified Employee Identity and Access Management (EIAM) instance. Deletion of the instance initialization domain name or default domain name is rejected.
 *
 * @param request DeleteDomainRequest
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomain(const DeleteDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes a proxy token for a specified domain name of an EIAM instance. Only proxy tokens in the disabled state can be deleted.
 *
 * @param request DeleteDomainProxyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainProxyTokenResponse
 */
DeleteDomainProxyTokenResponse Client::deleteDomainProxyTokenWithOptions(const DeleteDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasDomainProxyTokenId()) {
    query["DomainProxyTokenId"] = request.getDomainProxyTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomainProxyToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainProxyTokenResponse>();
}

/**
 * @summary Deletes a proxy token for a specified domain name of an EIAM instance. Only proxy tokens in the disabled state can be deleted.
 *
 * @param request DeleteDomainProxyTokenRequest
 * @return DeleteDomainProxyTokenResponse
 */
DeleteDomainProxyTokenResponse Client::deleteDomainProxyToken(const DeleteDomainProxyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainProxyTokenWithOptions(request, runtime);
}

/**
 * @summary Deletes a federated credential provider.
 *
 * @param request DeleteFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFederatedCredentialProviderResponse
 */
DeleteFederatedCredentialProviderResponse Client::deleteFederatedCredentialProviderWithOptions(const DeleteFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.getFederatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFederatedCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFederatedCredentialProviderResponse>();
}

/**
 * @summary Deletes a federated credential provider.
 *
 * @param request DeleteFederatedCredentialProviderRequest
 * @return DeleteFederatedCredentialProviderResponse
 */
DeleteFederatedCredentialProviderResponse Client::deleteFederatedCredentialProvider(const DeleteFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Delete an EIAM account group.
 *
 * @param request DeleteGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGroup"},
    {"version" , "2021-12-01"},
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
 * @summary Delete an EIAM account group.
 *
 * @param request DeleteGroupRequest
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const DeleteGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an identity provider.
 *
 * @param request DeleteIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProviderWithOptions(const DeleteIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIdentityProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIdentityProviderResponse>();
}

/**
 * @summary Deletes an identity provider.
 *
 * @param request DeleteIdentityProviderRequest
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProvider(const DeleteIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Deletes an Employee Identity and Access Management (EIAM) instance that you no longer use.
 *
 * @description Make sure that the instance is no longer in use. After an EIAM instance is deleted, all related data is deleted.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes an Employee Identity and Access Management (EIAM) instance that you no longer use.
 *
 * @description Make sure that the instance is no longer in use. After an EIAM instance is deleted, all related data is deleted.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a dedicated network access endpoint.
 *
 * @param request DeleteNetworkAccessEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkAccessEndpointResponse
 */
DeleteNetworkAccessEndpointResponse Client::deleteNetworkAccessEndpointWithOptions(const DeleteNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkAccessEndpoint"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkAccessEndpointResponse>();
}

/**
 * @summary Deletes a dedicated network access endpoint.
 *
 * @param request DeleteNetworkAccessEndpointRequest
 * @return DeleteNetworkAccessEndpointResponse
 */
DeleteNetworkAccessEndpointResponse Client::deleteNetworkAccessEndpoint(const DeleteNetworkAccessEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkAccessEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes a network zone object.
 *
 * @param request DeleteNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkZoneResponse
 */
DeleteNetworkZoneResponse Client::deleteNetworkZoneWithOptions(const DeleteNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.getNetworkZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkZone"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkZoneResponse>();
}

/**
 * @summary Deletes a network zone object.
 *
 * @param request DeleteNetworkZoneRequest
 * @return DeleteNetworkZoneResponse
 */
DeleteNetworkZoneResponse Client::deleteNetworkZone(const DeleteNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified EIAM organizational unit. The deletion fails if the organizational unit contains EIAM accounts or child organizational units.
 *
 * @param request DeleteOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOrganizationalUnitResponse
 */
DeleteOrganizationalUnitResponse Client::deleteOrganizationalUnitWithOptions(const DeleteOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOrganizationalUnitResponse>();
}

/**
 * @summary Deletes a specified EIAM organizational unit. The deletion fails if the organizational unit contains EIAM accounts or child organizational units.
 *
 * @param request DeleteOrganizationalUnitRequest
 * @return DeleteOrganizationalUnitResponse
 */
DeleteOrganizationalUnitResponse Client::deleteOrganizationalUnit(const DeleteOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Deletes all data of a specified organization. This operation can force delete all accounts and sub-organizations under the specified organization.
 *
 * @param request DeleteOrganizationalUnitChildrenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOrganizationalUnitChildrenResponse
 */
DeleteOrganizationalUnitChildrenResponse Client::deleteOrganizationalUnitChildrenWithOptions(const DeleteOrganizationalUnitChildrenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOrganizationalUnitChildren"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOrganizationalUnitChildrenResponse>();
}

/**
 * @summary Deletes all data of a specified organization. This operation can force delete all accounts and sub-organizations under the specified organization.
 *
 * @param request DeleteOrganizationalUnitChildrenRequest
 * @return DeleteOrganizationalUnitChildrenResponse
 */
DeleteOrganizationalUnitChildrenResponse Client::deleteOrganizationalUnitChildren(const DeleteOrganizationalUnitChildrenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOrganizationalUnitChildrenWithOptions(request, runtime);
}

/**
 * @summary Deletes a scope permission under a specified ResourceServer.
 *
 * @param request DeleteResourceServerScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceServerScopeResponse
 */
DeleteResourceServerScopeResponse Client::deleteResourceServerScopeWithOptions(const DeleteResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerScopeId()) {
    query["ResourceServerScopeId"] = request.getResourceServerScopeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceServerScope"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceServerScopeResponse>();
}

/**
 * @summary Deletes a scope permission under a specified ResourceServer.
 *
 * @param request DeleteResourceServerScopeRequest
 * @return DeleteResourceServerScopeResponse
 */
DeleteResourceServerScopeResponse Client::deleteResourceServerScope(const DeleteResourceServerScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceServerScopeWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified EIAM account and purges all information associated with the account.
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2021-12-01"},
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
 * @summary Deletes a specified EIAM account and purges all information associated with the account.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple accounts in a batch.
 *
 * @param request DeleteUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUsersResponse
 */
DeleteUsersResponse Client::deleteUsersWithOptions(const DeleteUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUsers"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUsersResponse>();
}

/**
 * @summary Deletes multiple accounts in a batch.
 *
 * @param request DeleteUsersRequest
 * @return DeleteUsersResponse
 */
DeleteUsersResponse Client::deleteUsers(const DeleteUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUsersWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified WebAuthn authenticator.
 *
 * @param request DeleteWebAuthnAuthenticatorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebAuthnAuthenticatorResponse
 */
DeleteWebAuthnAuthenticatorResponse Client::deleteWebAuthnAuthenticatorWithOptions(const DeleteWebAuthnAuthenticatorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticatorId()) {
    query["AuthenticatorId"] = request.getAuthenticatorId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebAuthnAuthenticator"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebAuthnAuthenticatorResponse>();
}

/**
 * @summary Deletes the specified WebAuthn authenticator.
 *
 * @param request DeleteWebAuthnAuthenticatorRequest
 * @return DeleteWebAuthnAuthenticatorResponse
 */
DeleteWebAuthnAuthenticatorResponse Client::deleteWebAuthnAuthenticator(const DeleteWebAuthnAuthenticatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebAuthnAuthenticatorWithOptions(request, runtime);
}

/**
 * @summary Disables an application by changing its status from enabled to disabled, making all capabilities of the application unavailable.
 *
 * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable (such as SSO and account synchronization). Confirm that you are aware of the risks that this operation may cause.
 *
 * @param request DisableApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationResponse
 */
DisableApplicationResponse Client::disableApplicationWithOptions(const DisableApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplication"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationResponse>();
}

/**
 * @summary Disables an application by changing its status from enabled to disabled, making all capabilities of the application unavailable.
 *
 * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable (such as SSO and account synchronization). Confirm that you are aware of the risks that this operation may cause.
 *
 * @param request DisableApplicationRequest
 * @return DisableApplicationResponse
 */
DisableApplicationResponse Client::disableApplication(const DisableApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationWithOptions(request, runtime);
}

/**
 * @summary Disables the Developer API feature for an Employee Identity and Access Management (EIAM) application.
 *
 * @param request DisableApplicationApiInvokeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationApiInvokeResponse
 */
DisableApplicationApiInvokeResponse Client::disableApplicationApiInvokeWithOptions(const DisableApplicationApiInvokeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationApiInvoke"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationApiInvokeResponse>();
}

/**
 * @summary Disables the Developer API feature for an Employee Identity and Access Management (EIAM) application.
 *
 * @param request DisableApplicationApiInvokeRequest
 * @return DisableApplicationApiInvokeResponse
 */
DisableApplicationApiInvokeResponse Client::disableApplicationApiInvoke(const DisableApplicationApiInvokeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationApiInvokeWithOptions(request, runtime);
}

/**
 * @summary Disables a client key of an Employee Identity and Access Management (EIAM) application.
 *
 * @param request DisableApplicationClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationClientSecretResponse
 */
DisableApplicationClientSecretResponse Client::disableApplicationClientSecretWithOptions(const DisableApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.getSecretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationClientSecret"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationClientSecretResponse>();
}

/**
 * @summary Disables a client key of an Employee Identity and Access Management (EIAM) application.
 *
 * @param request DisableApplicationClientSecretRequest
 * @return DisableApplicationClientSecretResponse
 */
DisableApplicationClientSecretResponse Client::disableApplicationClientSecret(const DisableApplicationClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationClientSecretWithOptions(request, runtime);
}

/**
 * @summary Disables a federated identity credential for an application.
 *
 * @param request DisableApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationFederatedCredentialResponse
 */
DisableApplicationFederatedCredentialResponse Client::disableApplicationFederatedCredentialWithOptions(const DisableApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.getApplicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationFederatedCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationFederatedCredentialResponse>();
}

/**
 * @summary Disables a federated identity credential for an application.
 *
 * @param request DisableApplicationFederatedCredentialRequest
 * @return DisableApplicationFederatedCredentialResponse
 */
DisableApplicationFederatedCredentialResponse Client::disableApplicationFederatedCredential(const DisableApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary Disables the machine-to-machine (M2M) client feature for an application. This feature enables an application to act as an OAuth client and make calls to access resources.
 *
 * @param request DisableApplicationM2MClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationM2MClientResponse
 */
DisableApplicationM2MClientResponse Client::disableApplicationM2MClientWithOptions(const DisableApplicationM2MClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationM2MClient"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationM2MClientResponse>();
}

/**
 * @summary Disables the machine-to-machine (M2M) client feature for an application. This feature enables an application to act as an OAuth client and make calls to access resources.
 *
 * @param request DisableApplicationM2MClientRequest
 * @return DisableApplicationM2MClientResponse
 */
DisableApplicationM2MClientResponse Client::disableApplicationM2MClient(const DisableApplicationM2MClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationM2MClientWithOptions(request, runtime);
}

/**
 * @summary Disables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request DisableApplicationProvisioningRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationProvisioningResponse
 */
DisableApplicationProvisioningResponse Client::disableApplicationProvisioningWithOptions(const DisableApplicationProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationProvisioning"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationProvisioningResponse>();
}

/**
 * @summary Disables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request DisableApplicationProvisioningRequest
 * @return DisableApplicationProvisioningResponse
 */
DisableApplicationProvisioningResponse Client::disableApplicationProvisioning(const DisableApplicationProvisioningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationProvisioningWithOptions(request, runtime);
}

/**
 * @summary Disables the ResourceServer capability of a specified application.
 *
 * @param request DisableApplicationResourceServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationResourceServerResponse
 */
DisableApplicationResourceServerResponse Client::disableApplicationResourceServerWithOptions(const DisableApplicationResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationResourceServer"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationResourceServerResponse>();
}

/**
 * @summary Disables the ResourceServer capability of a specified application.
 *
 * @param request DisableApplicationResourceServerRequest
 * @return DisableApplicationResourceServerResponse
 */
DisableApplicationResourceServerResponse Client::disableApplicationResourceServer(const DisableApplicationResourceServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationResourceServerWithOptions(request, runtime);
}

/**
 * @summary Disables the single sign-on (SSO) feature for an Employee Identity and Access Management (EIAM) application. This way, employees cannot log on to the application by using SSO.
 *
 * @param request DisableApplicationSsoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationSsoResponse
 */
DisableApplicationSsoResponse Client::disableApplicationSsoWithOptions(const DisableApplicationSsoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationSso"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationSsoResponse>();
}

/**
 * @summary Disables the single sign-on (SSO) feature for an Employee Identity and Access Management (EIAM) application. This way, employees cannot log on to the application by using SSO.
 *
 * @param request DisableApplicationSsoRequest
 * @return DisableApplicationSsoResponse
 */
DisableApplicationSsoResponse Client::disableApplicationSso(const DisableApplicationSsoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationSsoWithOptions(request, runtime);
}

/**
 * @summary Disables an application token.
 *
 * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that this operation may cause.
 *
 * @param request DisableApplicationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationTokenResponse
 */
DisableApplicationTokenResponse Client::disableApplicationTokenWithOptions(const DisableApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationTokenId()) {
    query["ApplicationTokenId"] = request.getApplicationTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationTokenResponse>();
}

/**
 * @summary Disables an application token.
 *
 * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that this operation may cause.
 *
 * @param request DisableApplicationTokenRequest
 * @return DisableApplicationTokenResponse
 */
DisableApplicationTokenResponse Client::disableApplicationToken(const DisableApplicationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationTokenWithOptions(request, runtime);
}

/**
 * @summary Disables an authorization rule.
 *
 * @param request DisableAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAuthorizationRuleResponse
 */
DisableAuthorizationRuleResponse Client::disableAuthorizationRuleWithOptions(const DisableAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DisableAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAuthorizationRuleResponse>();
}

/**
 * @summary Disables an authorization rule.
 *
 * @param request DisableAuthorizationRuleRequest
 * @return DisableAuthorizationRuleResponse
 */
DisableAuthorizationRuleResponse Client::disableAuthorizationRule(const DisableAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Disables a brand.
 *
 * @param request DisableBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableBrandResponse
 */
DisableBrandResponse Client::disableBrandWithOptions(const DisableBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableBrandResponse>();
}

/**
 * @summary Disables a brand.
 *
 * @param request DisableBrandRequest
 * @return DisableBrandResponse
 */
DisableBrandResponse Client::disableBrand(const DisableBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableBrandWithOptions(request, runtime);
}

/**
 * @summary Disables a specified application ClientPublicKey.
 *
 * @param request DisableClientPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableClientPublicKeyResponse
 */
DisableClientPublicKeyResponse Client::disableClientPublicKeyWithOptions(const DisableClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientPublicKeyId()) {
    query["ClientPublicKeyId"] = request.getClientPublicKeyId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableClientPublicKey"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableClientPublicKeyResponse>();
}

/**
 * @summary Disables a specified application ClientPublicKey.
 *
 * @param request DisableClientPublicKeyRequest
 * @return DisableClientPublicKeyResponse
 */
DisableClientPublicKeyResponse Client::disableClientPublicKey(const DisableClientPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableClientPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Disables a cloud role for a specified Alibaba Cloud account.
 *
 * @param request DisableCloudAccountRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCloudAccountRoleResponse
 */
DisableCloudAccountRoleResponse Client::disableCloudAccountRoleWithOptions(const DisableCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasCloudAccountRoleId()) {
    query["CloudAccountRoleId"] = request.getCloudAccountRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableCloudAccountRole"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableCloudAccountRoleResponse>();
}

/**
 * @summary Disables a cloud role for a specified Alibaba Cloud account.
 *
 * @param request DisableCloudAccountRoleRequest
 * @return DisableCloudAccountRoleResponse
 */
DisableCloudAccountRoleResponse Client::disableCloudAccountRole(const DisableCloudAccountRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableCloudAccountRoleWithOptions(request, runtime);
}

/**
 * @summary Disables a conditional access policy.
 *
 * @description When you change a conditional access policy from the enabled state to the disabled state, the policy no longer intercepts requests. Confirm that you are aware of the security risks that this operation may cause.
 *
 * @param request DisableConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableConditionalAccessPolicyResponse
 */
DisableConditionalAccessPolicyResponse Client::disableConditionalAccessPolicyWithOptions(const DisableConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.getConditionalAccessPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableConditionalAccessPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableConditionalAccessPolicyResponse>();
}

/**
 * @summary Disables a conditional access policy.
 *
 * @description When you change a conditional access policy from the enabled state to the disabled state, the policy no longer intercepts requests. Confirm that you are aware of the security risks that this operation may cause.
 *
 * @param request DisableConditionalAccessPolicyRequest
 * @return DisableConditionalAccessPolicyResponse
 */
DisableConditionalAccessPolicyResponse Client::disableConditionalAccessPolicy(const DisableConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Disables a credential resource.
 *
 * @param request DisableCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCredentialResponse
 */
DisableCredentialResponse Client::disableCredentialWithOptions(const DisableCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCredentialId()) {
    query["CredentialId"] = request.getCredentialId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableCredentialResponse>();
}

/**
 * @summary Disables a credential resource.
 *
 * @param request DisableCredentialRequest
 * @return DisableCredentialResponse
 */
DisableCredentialResponse Client::disableCredential(const DisableCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableCredentialWithOptions(request, runtime);
}

/**
 * @summary Disables a credential provider.
 *
 * @param request DisableCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCredentialProviderResponse
 */
DisableCredentialProviderResponse Client::disableCredentialProviderWithOptions(const DisableCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialProviderId()) {
    query["CredentialProviderId"] = request.getCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableCredentialProviderResponse>();
}

/**
 * @summary Disables a credential provider.
 *
 * @param request DisableCredentialProviderRequest
 * @return DisableCredentialProviderResponse
 */
DisableCredentialProviderResponse Client::disableCredentialProvider(const DisableCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Disables a field.
 *
 * @param request DisableCustomFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCustomFieldResponse
 */
DisableCustomFieldResponse Client::disableCustomFieldWithOptions(const DisableCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFieldId()) {
    query["FieldId"] = request.getFieldId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableCustomField"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableCustomFieldResponse>();
}

/**
 * @summary Disables a field.
 *
 * @param request DisableCustomFieldRequest
 * @return DisableCustomFieldResponse
 */
DisableCustomFieldResponse Client::disableCustomField(const DisableCustomFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableCustomFieldWithOptions(request, runtime);
}

/**
 * @summary Disables a custom term.
 *
 * @param request DisableCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCustomPrivacyPolicyResponse
 */
DisableCustomPrivacyPolicyResponse Client::disableCustomPrivacyPolicyWithOptions(const DisableCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyId()) {
    query["CustomPrivacyPolicyId"] = request.getCustomPrivacyPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableCustomPrivacyPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableCustomPrivacyPolicyResponse>();
}

/**
 * @summary Disables a custom term.
 *
 * @param request DisableCustomPrivacyPolicyRequest
 * @return DisableCustomPrivacyPolicyResponse
 */
DisableCustomPrivacyPolicyResponse Client::disableCustomPrivacyPolicy(const DisableCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Disables a specified domain proxy token for an EIAM instance. After the token is disabled, domain usage is affected.
 *
 * @param request DisableDomainProxyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDomainProxyTokenResponse
 */
DisableDomainProxyTokenResponse Client::disableDomainProxyTokenWithOptions(const DisableDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasDomainProxyTokenId()) {
    query["DomainProxyTokenId"] = request.getDomainProxyTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDomainProxyToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDomainProxyTokenResponse>();
}

/**
 * @summary Disables a specified domain proxy token for an EIAM instance. After the token is disabled, domain usage is affected.
 *
 * @param request DisableDomainProxyTokenRequest
 * @return DisableDomainProxyTokenResponse
 */
DisableDomainProxyTokenResponse Client::disableDomainProxyToken(const DisableDomainProxyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDomainProxyTokenWithOptions(request, runtime);
}

/**
 * @summary Disables a federated credential provider.
 *
 * @param request DisableFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableFederatedCredentialProviderResponse
 */
DisableFederatedCredentialProviderResponse Client::disableFederatedCredentialProviderWithOptions(const DisableFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.getFederatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableFederatedCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableFederatedCredentialProviderResponse>();
}

/**
 * @summary Disables a federated credential provider.
 *
 * @param request DisableFederatedCredentialProviderRequest
 * @return DisableFederatedCredentialProviderResponse
 */
DisableFederatedCredentialProviderResponse Client::disableFederatedCredentialProvider(const DisableFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Disables the advanced configuration.
 *
 * @param request DisableIdentityProviderAdvancedAbilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableIdentityProviderAdvancedAbilityResponse
 */
DisableIdentityProviderAdvancedAbilityResponse Client::disableIdentityProviderAdvancedAbilityWithOptions(const DisableIdentityProviderAdvancedAbilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableIdentityProviderAdvancedAbility"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableIdentityProviderAdvancedAbilityResponse>();
}

/**
 * @summary Disables the advanced configuration.
 *
 * @param request DisableIdentityProviderAdvancedAbilityRequest
 * @return DisableIdentityProviderAdvancedAbilityResponse
 */
DisableIdentityProviderAdvancedAbilityResponse Client::disableIdentityProviderAdvancedAbility(const DisableIdentityProviderAdvancedAbilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableIdentityProviderAdvancedAbilityWithOptions(request, runtime);
}

/**
 * @summary Disables authentication.
 *
 * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that this operation may cause.
 *
 * @param request DisableIdentityProviderAuthnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableIdentityProviderAuthnResponse
 */
DisableIdentityProviderAuthnResponse Client::disableIdentityProviderAuthnWithOptions(const DisableIdentityProviderAuthnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableIdentityProviderAuthn"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableIdentityProviderAuthnResponse>();
}

/**
 * @summary Disables authentication.
 *
 * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that this operation may cause.
 *
 * @param request DisableIdentityProviderAuthnRequest
 * @return DisableIdentityProviderAuthnResponse
 */
DisableIdentityProviderAuthnResponse Client::disableIdentityProviderAuthn(const DisableIdentityProviderAuthnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableIdentityProviderAuthnWithOptions(request, runtime);
}

/**
 * @summary Disables the inbound synchronization feature of an identity provider.
 *
 * @param request DisableIdentityProviderUdPullRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableIdentityProviderUdPullResponse
 */
DisableIdentityProviderUdPullResponse Client::disableIdentityProviderUdPullWithOptions(const DisableIdentityProviderUdPullRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableIdentityProviderUdPull"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableIdentityProviderUdPullResponse>();
}

/**
 * @summary Disables the inbound synchronization feature of an identity provider.
 *
 * @param request DisableIdentityProviderUdPullRequest
 * @return DisableIdentityProviderUdPullResponse
 */
DisableIdentityProviderUdPullResponse Client::disableIdentityProviderUdPull(const DisableIdentityProviderUdPullRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableIdentityProviderUdPullWithOptions(request, runtime);
}

/**
 * @summary Disables automatic redirect from the initialization domain to the default domain for an EIAM instance. After disabling, accessing the portal via the initialization domain will no longer redirect to the default domain.
 *
 * @param request DisableInitDomainAutoRedirectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableInitDomainAutoRedirectResponse
 */
DisableInitDomainAutoRedirectResponse Client::disableInitDomainAutoRedirectWithOptions(const DisableInitDomainAutoRedirectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableInitDomainAutoRedirect"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableInitDomainAutoRedirectResponse>();
}

/**
 * @summary Disables automatic redirect from the initialization domain to the default domain for an EIAM instance. After disabling, accessing the portal via the initialization domain will no longer redirect to the default domain.
 *
 * @param request DisableInitDomainAutoRedirectRequest
 * @return DisableInitDomainAutoRedirectResponse
 */
DisableInitDomainAutoRedirectResponse Client::disableInitDomainAutoRedirect(const DisableInitDomainAutoRedirectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableInitDomainAutoRedirectWithOptions(request, runtime);
}

/**
 * @summary Disables an internal authentication source.
 *
 * @param request DisableInternalAuthenticationSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableInternalAuthenticationSourceResponse
 */
DisableInternalAuthenticationSourceResponse Client::disableInternalAuthenticationSourceWithOptions(const DisableInternalAuthenticationSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationSourceId()) {
    query["AuthenticationSourceId"] = request.getAuthenticationSourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableInternalAuthenticationSource"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableInternalAuthenticationSourceResponse>();
}

/**
 * @summary Disables an internal authentication source.
 *
 * @param request DisableInternalAuthenticationSourceRequest
 * @return DisableInternalAuthenticationSourceResponse
 */
DisableInternalAuthenticationSourceResponse Client::disableInternalAuthenticationSource(const DisableInternalAuthenticationSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableInternalAuthenticationSourceWithOptions(request, runtime);
}

/**
 * @summary Disables the custom subject feature for a specified resource server.
 *
 * @param request DisableResourceServerCustomSubjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableResourceServerCustomSubjectResponse
 */
DisableResourceServerCustomSubjectResponse Client::disableResourceServerCustomSubjectWithOptions(const DisableResourceServerCustomSubjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableResourceServerCustomSubject"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableResourceServerCustomSubjectResponse>();
}

/**
 * @summary Disables the custom subject feature for a specified resource server.
 *
 * @param request DisableResourceServerCustomSubjectRequest
 * @return DisableResourceServerCustomSubjectResponse
 */
DisableResourceServerCustomSubjectResponse Client::disableResourceServerCustomSubject(const DisableResourceServerCustomSubjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableResourceServerCustomSubjectWithOptions(request, runtime);
}

/**
 * @summary Sets an account status to disabled. If the account is already disabled, the operation returns success directly.
 *
 * @param request DisableUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableUserResponse
 */
DisableUserResponse Client::disableUserWithOptions(const DisableUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableUserResponse>();
}

/**
 * @summary Sets an account status to disabled. If the account is already disabled, the operation returns success directly.
 *
 * @param request DisableUserRequest
 * @return DisableUserResponse
 */
DisableUserResponse Client::disableUser(const DisableUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableUserWithOptions(request, runtime);
}

/**
 * @summary Enables a disabled Employee Identity and Access Management (EIAM) application.
 *
 * @param request EnableApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationResponse
 */
EnableApplicationResponse Client::enableApplicationWithOptions(const EnableApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplication"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationResponse>();
}

/**
 * @summary Enables a disabled Employee Identity and Access Management (EIAM) application.
 *
 * @param request EnableApplicationRequest
 * @return EnableApplicationResponse
 */
EnableApplicationResponse Client::enableApplication(const EnableApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationWithOptions(request, runtime);
}

/**
 * @summary You can call the EnableApplicationApiInvoke operation to enable Developer API calls for an EIAM application.
 *
 * @param request EnableApplicationApiInvokeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationApiInvokeResponse
 */
EnableApplicationApiInvokeResponse Client::enableApplicationApiInvokeWithOptions(const EnableApplicationApiInvokeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationApiInvoke"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationApiInvokeResponse>();
}

/**
 * @summary You can call the EnableApplicationApiInvoke operation to enable Developer API calls for an EIAM application.
 *
 * @param request EnableApplicationApiInvokeRequest
 * @return EnableApplicationApiInvokeResponse
 */
EnableApplicationApiInvokeResponse Client::enableApplicationApiInvoke(const EnableApplicationApiInvokeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationApiInvokeWithOptions(request, runtime);
}

/**
 * @summary Enables the client key of an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request EnableApplicationClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationClientSecretResponse
 */
EnableApplicationClientSecretResponse Client::enableApplicationClientSecretWithOptions(const EnableApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.getSecretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationClientSecret"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationClientSecretResponse>();
}

/**
 * @summary Enables the client key of an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request EnableApplicationClientSecretRequest
 * @return EnableApplicationClientSecretResponse
 */
EnableApplicationClientSecretResponse Client::enableApplicationClientSecret(const EnableApplicationClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationClientSecretWithOptions(request, runtime);
}

/**
 * @summary Enables an application federated credential.
 *
 * @param request EnableApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationFederatedCredentialResponse
 */
EnableApplicationFederatedCredentialResponse Client::enableApplicationFederatedCredentialWithOptions(const EnableApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.getApplicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationFederatedCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationFederatedCredentialResponse>();
}

/**
 * @summary Enables an application federated credential.
 *
 * @param request EnableApplicationFederatedCredentialRequest
 * @return EnableApplicationFederatedCredentialResponse
 */
EnableApplicationFederatedCredentialResponse Client::enableApplicationFederatedCredential(const EnableApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary Enables the machine-to-machine (M2M) client feature for an application. This allows the application to act as a caller (an OAuth client) to access resources.
 *
 * @param request EnableApplicationM2MClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationM2MClientResponse
 */
EnableApplicationM2MClientResponse Client::enableApplicationM2MClientWithOptions(const EnableApplicationM2MClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationM2MClient"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationM2MClientResponse>();
}

/**
 * @summary Enables the machine-to-machine (M2M) client feature for an application. This allows the application to act as a caller (an OAuth client) to access resources.
 *
 * @param request EnableApplicationM2MClientRequest
 * @return EnableApplicationM2MClientResponse
 */
EnableApplicationM2MClientResponse Client::enableApplicationM2MClient(const EnableApplicationM2MClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationM2MClientWithOptions(request, runtime);
}

/**
 * @summary Enables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request EnableApplicationProvisioningRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationProvisioningResponse
 */
EnableApplicationProvisioningResponse Client::enableApplicationProvisioningWithOptions(const EnableApplicationProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationProvisioning"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationProvisioningResponse>();
}

/**
 * @summary Enables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request EnableApplicationProvisioningRequest
 * @return EnableApplicationProvisioningResponse
 */
EnableApplicationProvisioningResponse Client::enableApplicationProvisioning(const EnableApplicationProvisioningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationProvisioningWithOptions(request, runtime);
}

/**
 * @summary Enables the ResourceServer feature for a specified application.
 *
 * @param request EnableApplicationResourceServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationResourceServerResponse
 */
EnableApplicationResourceServerResponse Client::enableApplicationResourceServerWithOptions(const EnableApplicationResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationResourceServer"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationResourceServerResponse>();
}

/**
 * @summary Enables the ResourceServer feature for a specified application.
 *
 * @param request EnableApplicationResourceServerRequest
 * @return EnableApplicationResourceServerResponse
 */
EnableApplicationResourceServerResponse Client::enableApplicationResourceServer(const EnableApplicationResourceServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationResourceServerWithOptions(request, runtime);
}

/**
 * @summary Enables the SSO feature for an EIAM application.
 *
 * @param request EnableApplicationSsoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationSsoResponse
 */
EnableApplicationSsoResponse Client::enableApplicationSsoWithOptions(const EnableApplicationSsoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationSso"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationSsoResponse>();
}

/**
 * @summary Enables the SSO feature for an EIAM application.
 *
 * @param request EnableApplicationSsoRequest
 * @return EnableApplicationSsoResponse
 */
EnableApplicationSsoResponse Client::enableApplicationSso(const EnableApplicationSsoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationSsoWithOptions(request, runtime);
}

/**
 * @summary Enables an application token.
 *
 * @param request EnableApplicationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationTokenResponse
 */
EnableApplicationTokenResponse Client::enableApplicationTokenWithOptions(const EnableApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationTokenId()) {
    query["ApplicationTokenId"] = request.getApplicationTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationTokenResponse>();
}

/**
 * @summary Enables an application token.
 *
 * @param request EnableApplicationTokenRequest
 * @return EnableApplicationTokenResponse
 */
EnableApplicationTokenResponse Client::enableApplicationToken(const EnableApplicationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationTokenWithOptions(request, runtime);
}

/**
 * @summary Enables an authorization rule.
 *
 * @param request EnableAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAuthorizationRuleResponse
 */
EnableAuthorizationRuleResponse Client::enableAuthorizationRuleWithOptions(const EnableAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAuthorizationRuleResponse>();
}

/**
 * @summary Enables an authorization rule.
 *
 * @param request EnableAuthorizationRuleRequest
 * @return EnableAuthorizationRuleResponse
 */
EnableAuthorizationRuleResponse Client::enableAuthorizationRule(const EnableAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Enables a brand.
 *
 * @param request EnableBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableBrandResponse
 */
EnableBrandResponse Client::enableBrandWithOptions(const EnableBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableBrandResponse>();
}

/**
 * @summary Enables a brand.
 *
 * @param request EnableBrandRequest
 * @return EnableBrandResponse
 */
EnableBrandResponse Client::enableBrand(const EnableBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableBrandWithOptions(request, runtime);
}

/**
 * @summary Enables a specified application ClientPublicKey.
 *
 * @param request EnableClientPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableClientPublicKeyResponse
 */
EnableClientPublicKeyResponse Client::enableClientPublicKeyWithOptions(const EnableClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientPublicKeyId()) {
    query["ClientPublicKeyId"] = request.getClientPublicKeyId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableClientPublicKey"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableClientPublicKeyResponse>();
}

/**
 * @summary Enables a specified application ClientPublicKey.
 *
 * @param request EnableClientPublicKeyRequest
 * @return EnableClientPublicKeyResponse
 */
EnableClientPublicKeyResponse Client::enableClientPublicKey(const EnableClientPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableClientPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Enables a cloud role for a specified Alibaba Cloud account.
 *
 * @param request EnableCloudAccountRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableCloudAccountRoleResponse
 */
EnableCloudAccountRoleResponse Client::enableCloudAccountRoleWithOptions(const EnableCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasCloudAccountRoleId()) {
    query["CloudAccountRoleId"] = request.getCloudAccountRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableCloudAccountRole"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableCloudAccountRoleResponse>();
}

/**
 * @summary Enables a cloud role for a specified Alibaba Cloud account.
 *
 * @param request EnableCloudAccountRoleRequest
 * @return EnableCloudAccountRoleResponse
 */
EnableCloudAccountRoleResponse Client::enableCloudAccountRole(const EnableCloudAccountRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableCloudAccountRoleWithOptions(request, runtime);
}

/**
 * @summary Enables a conditional access policy.
 *
 * @description When you change a conditional access policy from enabled to disabled, the policy no longer intercepts requests. Confirm that you are aware of the risks that this operation may cause.
 *
 * @param request EnableConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableConditionalAccessPolicyResponse
 */
EnableConditionalAccessPolicyResponse Client::enableConditionalAccessPolicyWithOptions(const EnableConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.getConditionalAccessPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableConditionalAccessPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableConditionalAccessPolicyResponse>();
}

/**
 * @summary Enables a conditional access policy.
 *
 * @description When you change a conditional access policy from enabled to disabled, the policy no longer intercepts requests. Confirm that you are aware of the risks that this operation may cause.
 *
 * @param request EnableConditionalAccessPolicyRequest
 * @return EnableConditionalAccessPolicyResponse
 */
EnableConditionalAccessPolicyResponse Client::enableConditionalAccessPolicy(const EnableConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Enables a credential resource.
 *
 * @param request EnableCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableCredentialResponse
 */
EnableCredentialResponse Client::enableCredentialWithOptions(const EnableCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCredentialId()) {
    query["CredentialId"] = request.getCredentialId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableCredentialResponse>();
}

/**
 * @summary Enables a credential resource.
 *
 * @param request EnableCredentialRequest
 * @return EnableCredentialResponse
 */
EnableCredentialResponse Client::enableCredential(const EnableCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableCredentialWithOptions(request, runtime);
}

/**
 * @summary Enables a credential provider.
 *
 * @param request EnableCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableCredentialProviderResponse
 */
EnableCredentialProviderResponse Client::enableCredentialProviderWithOptions(const EnableCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialProviderId()) {
    query["CredentialProviderId"] = request.getCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableCredentialProviderResponse>();
}

/**
 * @summary Enables a credential provider.
 *
 * @param request EnableCredentialProviderRequest
 * @return EnableCredentialProviderResponse
 */
EnableCredentialProviderResponse Client::enableCredentialProvider(const EnableCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Enables a field.
 *
 * @description **Before you use this operation, make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of IDaaS EIAM.**.
 *
 * @param request EnableCustomFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableCustomFieldResponse
 */
EnableCustomFieldResponse Client::enableCustomFieldWithOptions(const EnableCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFieldId()) {
    query["FieldId"] = request.getFieldId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableCustomField"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableCustomFieldResponse>();
}

/**
 * @summary Enables a field.
 *
 * @description **Before you use this operation, make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of IDaaS EIAM.**.
 *
 * @param request EnableCustomFieldRequest
 * @return EnableCustomFieldResponse
 */
EnableCustomFieldResponse Client::enableCustomField(const EnableCustomFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableCustomFieldWithOptions(request, runtime);
}

/**
 * @summary Enables a custom clause.
 *
 * @param request EnableCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableCustomPrivacyPolicyResponse
 */
EnableCustomPrivacyPolicyResponse Client::enableCustomPrivacyPolicyWithOptions(const EnableCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyId()) {
    query["CustomPrivacyPolicyId"] = request.getCustomPrivacyPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableCustomPrivacyPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableCustomPrivacyPolicyResponse>();
}

/**
 * @summary Enables a custom clause.
 *
 * @param request EnableCustomPrivacyPolicyRequest
 * @return EnableCustomPrivacyPolicyResponse
 */
EnableCustomPrivacyPolicyResponse Client::enableCustomPrivacyPolicy(const EnableCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Enables a domain proxy token for a specified EIAM instance domain name to verify domain security.
 *
 * @param request EnableDomainProxyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDomainProxyTokenResponse
 */
EnableDomainProxyTokenResponse Client::enableDomainProxyTokenWithOptions(const EnableDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasDomainProxyTokenId()) {
    query["DomainProxyTokenId"] = request.getDomainProxyTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDomainProxyToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDomainProxyTokenResponse>();
}

/**
 * @summary Enables a domain proxy token for a specified EIAM instance domain name to verify domain security.
 *
 * @param request EnableDomainProxyTokenRequest
 * @return EnableDomainProxyTokenResponse
 */
EnableDomainProxyTokenResponse Client::enableDomainProxyToken(const EnableDomainProxyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDomainProxyTokenWithOptions(request, runtime);
}

/**
 * @summary Enables a federated credential provider.
 *
 * @param request EnableFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableFederatedCredentialProviderResponse
 */
EnableFederatedCredentialProviderResponse Client::enableFederatedCredentialProviderWithOptions(const EnableFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.getFederatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableFederatedCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableFederatedCredentialProviderResponse>();
}

/**
 * @summary Enables a federated credential provider.
 *
 * @param request EnableFederatedCredentialProviderRequest
 * @return EnableFederatedCredentialProviderResponse
 */
EnableFederatedCredentialProviderResponse Client::enableFederatedCredentialProvider(const EnableFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Enables advanced configuration.
 *
 * @param request EnableIdentityProviderAdvancedAbilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableIdentityProviderAdvancedAbilityResponse
 */
EnableIdentityProviderAdvancedAbilityResponse Client::enableIdentityProviderAdvancedAbilityWithOptions(const EnableIdentityProviderAdvancedAbilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableIdentityProviderAdvancedAbility"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableIdentityProviderAdvancedAbilityResponse>();
}

/**
 * @summary Enables advanced configuration.
 *
 * @param request EnableIdentityProviderAdvancedAbilityRequest
 * @return EnableIdentityProviderAdvancedAbilityResponse
 */
EnableIdentityProviderAdvancedAbilityResponse Client::enableIdentityProviderAdvancedAbility(const EnableIdentityProviderAdvancedAbilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableIdentityProviderAdvancedAbilityWithOptions(request, runtime);
}

/**
 * @summary Enables authentication.
 *
 * @description When you change a conditional access policy from enabled to disabled, the policy no longer intercepts requests. Make sure that you are aware of the risks that this operation may cause.
 *
 * @param request EnableIdentityProviderAuthnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableIdentityProviderAuthnResponse
 */
EnableIdentityProviderAuthnResponse Client::enableIdentityProviderAuthnWithOptions(const EnableIdentityProviderAuthnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableIdentityProviderAuthn"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableIdentityProviderAuthnResponse>();
}

/**
 * @summary Enables authentication.
 *
 * @description When you change a conditional access policy from enabled to disabled, the policy no longer intercepts requests. Make sure that you are aware of the risks that this operation may cause.
 *
 * @param request EnableIdentityProviderAuthnRequest
 * @return EnableIdentityProviderAuthnResponse
 */
EnableIdentityProviderAuthnResponse Client::enableIdentityProviderAuthn(const EnableIdentityProviderAuthnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableIdentityProviderAuthnWithOptions(request, runtime);
}

/**
 * @summary Enables the inbound synchronization feature for an identity provider.
 *
 * @param request EnableIdentityProviderUdPullRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableIdentityProviderUdPullResponse
 */
EnableIdentityProviderUdPullResponse Client::enableIdentityProviderUdPullWithOptions(const EnableIdentityProviderUdPullRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableIdentityProviderUdPull"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableIdentityProviderUdPullResponse>();
}

/**
 * @summary Enables the inbound synchronization feature for an identity provider.
 *
 * @param request EnableIdentityProviderUdPullRequest
 * @return EnableIdentityProviderUdPullResponse
 */
EnableIdentityProviderUdPullResponse Client::enableIdentityProviderUdPull(const EnableIdentityProviderUdPullRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableIdentityProviderUdPullWithOptions(request, runtime);
}

/**
 * @summary Enables automatic redirection from the initialization domain to the default domain for an EIAM instance. After this feature is enabled, accessing the portal through the initialization domain will redirect to the default domain address.
 *
 * @param request EnableInitDomainAutoRedirectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInitDomainAutoRedirectResponse
 */
EnableInitDomainAutoRedirectResponse Client::enableInitDomainAutoRedirectWithOptions(const EnableInitDomainAutoRedirectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableInitDomainAutoRedirect"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableInitDomainAutoRedirectResponse>();
}

/**
 * @summary Enables automatic redirection from the initialization domain to the default domain for an EIAM instance. After this feature is enabled, accessing the portal through the initialization domain will redirect to the default domain address.
 *
 * @param request EnableInitDomainAutoRedirectRequest
 * @return EnableInitDomainAutoRedirectResponse
 */
EnableInitDomainAutoRedirectResponse Client::enableInitDomainAutoRedirect(const EnableInitDomainAutoRedirectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableInitDomainAutoRedirectWithOptions(request, runtime);
}

/**
 * @summary Enables an internal authentication source.
 *
 * @param request EnableInternalAuthenticationSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInternalAuthenticationSourceResponse
 */
EnableInternalAuthenticationSourceResponse Client::enableInternalAuthenticationSourceWithOptions(const EnableInternalAuthenticationSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationSourceId()) {
    query["AuthenticationSourceId"] = request.getAuthenticationSourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableInternalAuthenticationSource"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableInternalAuthenticationSourceResponse>();
}

/**
 * @summary Enables an internal authentication source.
 *
 * @param request EnableInternalAuthenticationSourceRequest
 * @return EnableInternalAuthenticationSourceResponse
 */
EnableInternalAuthenticationSourceResponse Client::enableInternalAuthenticationSource(const EnableInternalAuthenticationSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableInternalAuthenticationSourceWithOptions(request, runtime);
}

/**
 * @summary Enables the custom subject feature for a specified resource server. After this feature is enabled, the subject of an issued access token changes from <clientId> to <clientId>:<client.activeSubjectUrn>. The `client.activeSubjectUrn` is set in the attribute mapping of the application\\"s federated identity provider.
 *
 * @param request EnableResourceServerCustomSubjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableResourceServerCustomSubjectResponse
 */
EnableResourceServerCustomSubjectResponse Client::enableResourceServerCustomSubjectWithOptions(const EnableResourceServerCustomSubjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableResourceServerCustomSubject"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableResourceServerCustomSubjectResponse>();
}

/**
 * @summary Enables the custom subject feature for a specified resource server. After this feature is enabled, the subject of an issued access token changes from <clientId> to <clientId>:<client.activeSubjectUrn>. The `client.activeSubjectUrn` is set in the attribute mapping of the application\\"s federated identity provider.
 *
 * @param request EnableResourceServerCustomSubjectRequest
 * @return EnableResourceServerCustomSubjectResponse
 */
EnableResourceServerCustomSubjectResponse Client::enableResourceServerCustomSubject(const EnableResourceServerCustomSubjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableResourceServerCustomSubjectWithOptions(request, runtime);
}

/**
 * @summary Sets an account to the enabled state.
 *
 * @param request EnableUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableUserResponse
 */
EnableUserResponse Client::enableUserWithOptions(const EnableUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableUserResponse>();
}

/**
 * @summary Sets an account to the enabled state.
 *
 * @param request EnableUserRequest
 * @return EnableUserResponse
 */
EnableUserResponse Client::enableUser(const EnableUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableUserWithOptions(request, runtime);
}

/**
 * @summary Resolves the metadata for an identity provider.
 *
 * @param request ExecIdentityProviderMetadataUrlResolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecIdentityProviderMetadataUrlResolutionResponse
 */
ExecIdentityProviderMetadataUrlResolutionResponse Client::execIdentityProviderMetadataUrlResolutionWithOptions(const ExecIdentityProviderMetadataUrlResolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  if (!!request.hasOidcIssuer()) {
    query["OidcIssuer"] = request.getOidcIssuer();
  }

  if (!!request.hasSamlMetadataUrl()) {
    query["SamlMetadataUrl"] = request.getSamlMetadataUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecIdentityProviderMetadataUrlResolution"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecIdentityProviderMetadataUrlResolutionResponse>();
}

/**
 * @summary Resolves the metadata for an identity provider.
 *
 * @param request ExecIdentityProviderMetadataUrlResolutionRequest
 * @return ExecIdentityProviderMetadataUrlResolutionResponse
 */
ExecIdentityProviderMetadataUrlResolutionResponse Client::execIdentityProviderMetadataUrlResolution(const ExecIdentityProviderMetadataUrlResolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return execIdentityProviderMetadataUrlResolutionWithOptions(request, runtime);
}

/**
 * @summary Generates a download URL for file import results.
 *
 * @param request GenerateDownloadUrlForSynchronizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateDownloadUrlForSynchronizationJobResponse
 */
GenerateDownloadUrlForSynchronizationJobResponse Client::generateDownloadUrlForSynchronizationJobWithOptions(const GenerateDownloadUrlForSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.getSynchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateDownloadUrlForSynchronizationJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateDownloadUrlForSynchronizationJobResponse>();
}

/**
 * @summary Generates a download URL for file import results.
 *
 * @param request GenerateDownloadUrlForSynchronizationJobRequest
 * @return GenerateDownloadUrlForSynchronizationJobResponse
 */
GenerateDownloadUrlForSynchronizationJobResponse Client::generateDownloadUrlForSynchronizationJob(const GenerateDownloadUrlForSynchronizationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateDownloadUrlForSynchronizationJobWithOptions(request, runtime);
}

/**
 * @summary Generates a file import template.
 *
 * @param request GenerateFileImportTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateFileImportTemplateResponse
 */
GenerateFileImportTemplateResponse Client::generateFileImportTemplateWithOptions(const GenerateFileImportTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateFileImportTemplate"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateFileImportTemplateResponse>();
}

/**
 * @summary Generates a file import template.
 *
 * @param request GenerateFileImportTemplateRequest
 * @return GenerateFileImportTemplateResponse
 */
GenerateFileImportTemplateResponse Client::generateFileImportTemplate(const GenerateFileImportTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateFileImportTemplateWithOptions(request, runtime);
}

/**
 * @summary Obtains an access token for accessing a resource server by using a specified application as the client identity.
 *
 * @param request GenerateOauthTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateOauthTokenResponse
 */
GenerateOauthTokenResponse Client::generateOauthTokenWithOptions(const GenerateOauthTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAudience()) {
    query["Audience"] = request.getAudience();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScopeValues()) {
    query["ScopeValues"] = request.getScopeValues();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateOauthToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateOauthTokenResponse>();
}

/**
 * @summary Obtains an access token for accessing a resource server by using a specified application as the client identity.
 *
 * @param request GenerateOauthTokenRequest
 * @return GenerateOauthTokenResponse
 */
GenerateOauthTokenResponse Client::generateOauthToken(const GenerateOauthTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateOauthTokenWithOptions(request, runtime);
}

/**
 * @summary Get Upload Authentication
 *
 * @param request GenerateUploadAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateUploadAuthResponse
 */
GenerateUploadAuthResponse Client::generateUploadAuthWithOptions(const GenerateUploadAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPurpose()) {
    query["Purpose"] = request.getPurpose();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateUploadAuth"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateUploadAuthResponse>();
}

/**
 * @summary Get Upload Authentication
 *
 * @param request GenerateUploadAuthRequest
 * @return GenerateUploadAuthResponse
 */
GenerateUploadAuthResponse Client::generateUploadAuth(const GenerateUploadAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUploadAuthWithOptions(request, runtime);
}

/**
 * @summary Generates a WebAuthn authenticator registration URL.
 *
 * @param request GenerateWebAuthnAuthenticatorRegistrationUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateWebAuthnAuthenticatorRegistrationUrlResponse
 */
GenerateWebAuthnAuthenticatorRegistrationUrlResponse Client::generateWebAuthnAuthenticatorRegistrationUrlWithOptions(const GenerateWebAuthnAuthenticatorRegistrationUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateWebAuthnAuthenticatorRegistrationUrl"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateWebAuthnAuthenticatorRegistrationUrlResponse>();
}

/**
 * @summary Generates a WebAuthn authenticator registration URL.
 *
 * @param request GenerateWebAuthnAuthenticatorRegistrationUrlRequest
 * @return GenerateWebAuthnAuthenticatorRegistrationUrlResponse
 */
GenerateWebAuthnAuthenticatorRegistrationUrlResponse Client::generateWebAuthnAuthenticatorRegistrationUrl(const GenerateWebAuthnAuthenticatorRegistrationUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateWebAuthnAuthenticatorRegistrationUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified EIAM application.
 *
 * @param request GetApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplication"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationResponse>();
}

/**
 * @summary Retrieves the details of a specified EIAM application.
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationWithOptions(request, runtime);
}

/**
 * @summary Retrieves the advanced configuration of an application.
 *
 * @param request GetApplicationAdvancedConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationAdvancedConfigResponse
 */
GetApplicationAdvancedConfigResponse Client::getApplicationAdvancedConfigWithOptions(const GetApplicationAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationAdvancedConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationAdvancedConfigResponse>();
}

/**
 * @summary Retrieves the advanced configuration of an application.
 *
 * @param request GetApplicationAdvancedConfigRequest
 * @return GetApplicationAdvancedConfigResponse
 */
GetApplicationAdvancedConfigResponse Client::getApplicationAdvancedConfig(const GetApplicationAdvancedConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationAdvancedConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the federated identity credential of an application.
 *
 * @param request GetApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationFederatedCredentialResponse
 */
GetApplicationFederatedCredentialResponse Client::getApplicationFederatedCredentialWithOptions(const GetApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.getApplicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationFederatedCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationFederatedCredentialResponse>();
}

/**
 * @summary Retrieves the federated identity credential of an application.
 *
 * @param request GetApplicationFederatedCredentialRequest
 * @return GetApplicationFederatedCredentialResponse
 */
GetApplicationFederatedCredentialResponse Client::getApplicationFederatedCredential(const GetApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary Queries the Developer API authorization scope of an EIAM application.
 *
 * @param request GetApplicationGrantScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationGrantScopeResponse
 */
GetApplicationGrantScopeResponse Client::getApplicationGrantScopeWithOptions(const GetApplicationGrantScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationGrantScope"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationGrantScopeResponse>();
}

/**
 * @summary Queries the Developer API authorization scope of an EIAM application.
 *
 * @param request GetApplicationGrantScopeRequest
 * @return GetApplicationGrantScopeResponse
 */
GetApplicationGrantScopeResponse Client::getApplicationGrantScope(const GetApplicationGrantScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationGrantScopeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the account synchronization configuration for an Entity Identity and Access Management (EIAM) application.
 *
 * @param request GetApplicationProvisioningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationProvisioningConfigResponse
 */
GetApplicationProvisioningConfigResponse Client::getApplicationProvisioningConfigWithOptions(const GetApplicationProvisioningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationProvisioningConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationProvisioningConfigResponse>();
}

/**
 * @summary Retrieves the account synchronization configuration for an Entity Identity and Access Management (EIAM) application.
 *
 * @param request GetApplicationProvisioningConfigRequest
 * @return GetApplicationProvisioningConfigResponse
 */
GetApplicationProvisioningConfigResponse Client::getApplicationProvisioningConfig(const GetApplicationProvisioningConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationProvisioningConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the account synchronization scope of applications in Identity as a Service (IDaaS) Employee IAM (EIAM). This scope is the same as the scope within which developers can call the DeveloperAPI to query and manage accounts.
 *
 * @param request GetApplicationProvisioningScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationProvisioningScopeResponse
 */
GetApplicationProvisioningScopeResponse Client::getApplicationProvisioningScopeWithOptions(const GetApplicationProvisioningScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationProvisioningScope"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationProvisioningScopeResponse>();
}

/**
 * @summary Queries the account synchronization scope of applications in Identity as a Service (IDaaS) Employee IAM (EIAM). This scope is the same as the scope within which developers can call the DeveloperAPI to query and manage accounts.
 *
 * @param request GetApplicationProvisioningScopeRequest
 * @return GetApplicationProvisioningScopeResponse
 */
GetApplicationProvisioningScopeResponse Client::getApplicationProvisioningScope(const GetApplicationProvisioningScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationProvisioningScopeWithOptions(request, runtime);
}

/**
 * @summary Queries the synchronization configuration of a specified application.
 *
 * @param request GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
 */
GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse Client::getApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(const GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationProvisioningUserPrimaryOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse>();
}

/**
 * @summary Queries the synchronization configuration of a specified application.
 *
 * @param request GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
 * @return GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
 */
GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse Client::getApplicationProvisioningUserPrimaryOrganizationalUnit(const GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Retrieves application role information.
 *
 * @param request GetApplicationRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationRoleResponse
 */
GetApplicationRoleResponse Client::getApplicationRoleWithOptions(const GetApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationRole"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationRoleResponse>();
}

/**
 * @summary Retrieves application role information.
 *
 * @param request GetApplicationRoleRequest
 * @return GetApplicationRoleResponse
 */
GetApplicationRoleResponse Client::getApplicationRole(const GetApplicationRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationRoleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the single sign-on (SSO) configuration for an application in EIAM.
 *
 * @param request GetApplicationSsoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationSsoConfigResponse
 */
GetApplicationSsoConfigResponse Client::getApplicationSsoConfigWithOptions(const GetApplicationSsoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationSsoConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationSsoConfigResponse>();
}

/**
 * @summary Retrieves the single sign-on (SSO) configuration for an application in EIAM.
 *
 * @param request GetApplicationSsoConfigRequest
 * @return GetApplicationSsoConfigResponse
 */
GetApplicationSsoConfigResponse Client::getApplicationSsoConfig(const GetApplicationSsoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationSsoConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves application template information.
 *
 * @param request GetApplicationTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationTemplateResponse
 */
GetApplicationTemplateResponse Client::getApplicationTemplateWithOptions(const GetApplicationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationTemplateId()) {
    query["ApplicationTemplateId"] = request.getApplicationTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationTemplate"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationTemplateResponse>();
}

/**
 * @summary Retrieves application template information.
 *
 * @param request GetApplicationTemplateRequest
 * @return GetApplicationTemplateResponse
 */
GetApplicationTemplateResponse Client::getApplicationTemplate(const GetApplicationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries information about an authorized resource.
 *
 * @param request GetAuthorizationResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuthorizationResourceResponse
 */
GetAuthorizationResourceResponse Client::getAuthorizationResourceWithOptions(const GetAuthorizationResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationResourceId()) {
    query["AuthorizationResourceId"] = request.getAuthorizationResourceId();
  }

  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuthorizationResource"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuthorizationResourceResponse>();
}

/**
 * @summary Queries information about an authorized resource.
 *
 * @param request GetAuthorizationResourceRequest
 * @return GetAuthorizationResourceResponse
 */
GetAuthorizationResourceResponse Client::getAuthorizationResource(const GetAuthorizationResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthorizationResourceWithOptions(request, runtime);
}

/**
 * @summary Query information about an authorization rule.
 *
 * @param request GetAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuthorizationRuleResponse
 */
GetAuthorizationRuleResponse Client::getAuthorizationRuleWithOptions(const GetAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuthorizationRuleResponse>();
}

/**
 * @summary Query information about an authorization rule.
 *
 * @param request GetAuthorizationRuleRequest
 * @return GetAuthorizationRuleResponse
 */
GetAuthorizationRuleResponse Client::getAuthorizationRule(const GetAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Queries an authorization server.
 *
 * @param request GetAuthorizationServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuthorizationServerResponse
 */
GetAuthorizationServerResponse Client::getAuthorizationServerWithOptions(const GetAuthorizationServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationServerId()) {
    query["AuthorizationServerId"] = request.getAuthorizationServerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuthorizationServer"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuthorizationServerResponse>();
}

/**
 * @summary Queries an authorization server.
 *
 * @param request GetAuthorizationServerRequest
 * @return GetAuthorizationServerResponse
 */
GetAuthorizationServerResponse Client::getAuthorizationServer(const GetAuthorizationServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthorizationServerWithOptions(request, runtime);
}

/**
 * @summary Get Brand Details
 *
 * @param request GetBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBrandResponse
 */
GetBrandResponse Client::getBrandWithOptions(const GetBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBrandResponse>();
}

/**
 * @summary Get Brand Details
 *
 * @param request GetBrandRequest
 * @return GetBrandResponse
 */
GetBrandResponse Client::getBrand(const GetBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBrandWithOptions(request, runtime);
}

/**
 * @summary Queries the ClientPublicKey of a specified application.
 *
 * @param request GetClientPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClientPublicKeyResponse
 */
GetClientPublicKeyResponse Client::getClientPublicKeyWithOptions(const GetClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientPublicKeyId()) {
    query["ClientPublicKeyId"] = request.getClientPublicKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClientPublicKey"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClientPublicKeyResponse>();
}

/**
 * @summary Queries the ClientPublicKey of a specified application.
 *
 * @param request GetClientPublicKeyRequest
 * @return GetClientPublicKeyResponse
 */
GetClientPublicKeyResponse Client::getClientPublicKey(const GetClientPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the resource information of a cloud account.
 *
 * @param request GetCloudAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCloudAccountResponse
 */
GetCloudAccountResponse Client::getCloudAccountWithOptions(const GetCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCloudAccount"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCloudAccountResponse>();
}

/**
 * @summary Queries the resource information of a cloud account.
 *
 * @param request GetCloudAccountRequest
 * @return GetCloudAccountResponse
 */
GetCloudAccountResponse Client::getCloudAccount(const GetCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCloudAccountWithOptions(request, runtime);
}

/**
 * @summary Queries the resource information of a cloud role.
 *
 * @param request GetCloudAccountRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCloudAccountRoleResponse
 */
GetCloudAccountRoleResponse Client::getCloudAccountRoleWithOptions(const GetCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasCloudAccountRoleId()) {
    query["CloudAccountRoleId"] = request.getCloudAccountRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCloudAccountRole"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCloudAccountRoleResponse>();
}

/**
 * @summary Queries the resource information of a cloud role.
 *
 * @param request GetCloudAccountRoleRequest
 * @return GetCloudAccountRoleResponse
 */
GetCloudAccountRoleResponse Client::getCloudAccountRole(const GetCloudAccountRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCloudAccountRoleWithOptions(request, runtime);
}

/**
 * @summary Get a conditional access policy.
 *
 * @description Query a conditional access policy.
 *
 * @param request GetConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConditionalAccessPolicyResponse
 */
GetConditionalAccessPolicyResponse Client::getConditionalAccessPolicyWithOptions(const GetConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.getConditionalAccessPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConditionalAccessPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConditionalAccessPolicyResponse>();
}

/**
 * @summary Get a conditional access policy.
 *
 * @description Query a conditional access policy.
 *
 * @param request GetConditionalAccessPolicyRequest
 * @return GetConditionalAccessPolicyResponse
 */
GetConditionalAccessPolicyResponse Client::getConditionalAccessPolicy(const GetConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a credential resource.
 *
 * @param request GetCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCredentialResponse
 */
GetCredentialResponse Client::getCredentialWithOptions(const GetCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialId()) {
    query["CredentialId"] = request.getCredentialId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCredentialResponse>();
}

/**
 * @summary Queries the information about a credential resource.
 *
 * @param request GetCredentialRequest
 * @return GetCredentialResponse
 */
GetCredentialResponse Client::getCredential(const GetCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCredentialWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a credential provider.
 *
 * @param request GetCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCredentialProviderResponse
 */
GetCredentialProviderResponse Client::getCredentialProviderWithOptions(const GetCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialProviderId()) {
    query["CredentialProviderId"] = request.getCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCredentialProviderResponse>();
}

/**
 * @summary Queries the details of a credential provider.
 *
 * @param request GetCredentialProviderRequest
 * @return GetCredentialProviderResponse
 */
GetCredentialProviderResponse Client::getCredentialProvider(const GetCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Retrieves the information about an extended field.
 *
 * @param request GetCustomFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomFieldResponse
 */
GetCustomFieldResponse Client::getCustomFieldWithOptions(const GetCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFieldId()) {
    query["FieldId"] = request.getFieldId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomField"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomFieldResponse>();
}

/**
 * @summary Retrieves the information about an extended field.
 *
 * @param request GetCustomFieldRequest
 * @return GetCustomFieldResponse
 */
GetCustomFieldResponse Client::getCustomField(const GetCustomFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomFieldWithOptions(request, runtime);
}

/**
 * @summary Retrieves a custom privacy policy.
 *
 * @param request GetCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomPrivacyPolicyResponse
 */
GetCustomPrivacyPolicyResponse Client::getCustomPrivacyPolicyWithOptions(const GetCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyId()) {
    query["CustomPrivacyPolicyId"] = request.getCustomPrivacyPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomPrivacyPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomPrivacyPolicyResponse>();
}

/**
 * @summary Retrieves a custom privacy policy.
 *
 * @param request GetCustomPrivacyPolicyRequest
 * @return GetCustomPrivacyPolicyResponse
 */
GetCustomPrivacyPolicyResponse Client::getCustomPrivacyPolicy(const GetCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a domain name for an EIAM instance.
 *
 * @param request GetDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDomainResponse
 */
GetDomainResponse Client::getDomainWithOptions(const GetDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDomain"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDomainResponse>();
}

/**
 * @summary Retrieves information about a domain name for an EIAM instance.
 *
 * @param request GetDomainRequest
 * @return GetDomainResponse
 */
GetDomainResponse Client::getDomain(const GetDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the DNS Challenge record for a specified EIAM domain name. This record is used to verify domain ownership.
 *
 * @param request GetDomainDnsChallengeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDomainDnsChallengeResponse
 */
GetDomainDnsChallengeResponse Client::getDomainDnsChallengeWithOptions(const GetDomainDnsChallengeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDomainDnsChallenge"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDomainDnsChallengeResponse>();
}

/**
 * @summary Queries the DNS Challenge record for a specified EIAM domain name. This record is used to verify domain ownership.
 *
 * @param request GetDomainDnsChallengeRequest
 * @return GetDomainDnsChallengeResponse
 */
GetDomainDnsChallengeResponse Client::getDomainDnsChallenge(const GetDomainDnsChallengeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDomainDnsChallengeWithOptions(request, runtime);
}

/**
 * @summary Retrieve a federated credential provider.
 *
 * @param request GetFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFederatedCredentialProviderResponse
 */
GetFederatedCredentialProviderResponse Client::getFederatedCredentialProviderWithOptions(const GetFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.getFederatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFederatedCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFederatedCredentialProviderResponse>();
}

/**
 * @summary Retrieve a federated credential provider.
 *
 * @param request GetFederatedCredentialProviderRequest
 * @return GetFederatedCredentialProviderResponse
 */
GetFederatedCredentialProviderResponse Client::getFederatedCredentialProvider(const GetFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Queries the forgot password policy of a specified EIAM instance.
 *
 * @param request GetForgetPasswordConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetForgetPasswordConfigurationResponse
 */
GetForgetPasswordConfigurationResponse Client::getForgetPasswordConfigurationWithOptions(const GetForgetPasswordConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetForgetPasswordConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetForgetPasswordConfigurationResponse>();
}

/**
 * @summary Queries the forgot password policy of a specified EIAM instance.
 *
 * @param request GetForgetPasswordConfigurationRequest
 * @return GetForgetPasswordConfigurationResponse
 */
GetForgetPasswordConfigurationResponse Client::getForgetPasswordConfiguration(const GetForgetPasswordConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getForgetPasswordConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an EIAM account group.
 *
 * @param request GetGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroupWithOptions(const GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroup"},
    {"version" , "2021-12-01"},
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
 * @summary Queries the details of an EIAM account group.
 *
 * @param request GetGroupRequest
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const GetGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves an identity provider.
 *
 * @param request GetIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProviderWithOptions(const GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderResponse>();
}

/**
 * @summary Retrieves an identity provider.
 *
 * @param request GetIdentityProviderRequest
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProvider(const GetIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Retrieves advanced configuration information.
 *
 * @param request GetIdentityProviderAdvancedConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderAdvancedConfigurationResponse
 */
GetIdentityProviderAdvancedConfigurationResponse Client::getIdentityProviderAdvancedConfigurationWithOptions(const GetIdentityProviderAdvancedConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProviderAdvancedConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderAdvancedConfigurationResponse>();
}

/**
 * @summary Retrieves advanced configuration information.
 *
 * @param request GetIdentityProviderAdvancedConfigurationRequest
 * @return GetIdentityProviderAdvancedConfigurationResponse
 */
GetIdentityProviderAdvancedConfigurationResponse Client::getIdentityProviderAdvancedConfiguration(const GetIdentityProviderAdvancedConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderAdvancedConfigurationWithOptions(request, runtime);
}

/**
 * @summary Retrieves an IdP check task.
 *
 * @param request GetIdentityProviderStatusCheckJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderStatusCheckJobResponse
 */
GetIdentityProviderStatusCheckJobResponse Client::getIdentityProviderStatusCheckJobWithOptions(const GetIdentityProviderStatusCheckJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasIdentityProviderStatusCheckJobId()) {
    query["IdentityProviderStatusCheckJobId"] = request.getIdentityProviderStatusCheckJobId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProviderStatusCheckJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderStatusCheckJobResponse>();
}

/**
 * @summary Retrieves an IdP check task.
 *
 * @param request GetIdentityProviderStatusCheckJobRequest
 * @return GetIdentityProviderStatusCheckJobResponse
 */
GetIdentityProviderStatusCheckJobResponse Client::getIdentityProviderStatusCheckJob(const GetIdentityProviderStatusCheckJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderStatusCheckJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves the inbound synchronization configuration of an identity provider (IdP).
 *
 * @param request GetIdentityProviderUdPullConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderUdPullConfigurationResponse
 */
GetIdentityProviderUdPullConfigurationResponse Client::getIdentityProviderUdPullConfigurationWithOptions(const GetIdentityProviderUdPullConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProviderUdPullConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderUdPullConfigurationResponse>();
}

/**
 * @summary Retrieves the inbound synchronization configuration of an identity provider (IdP).
 *
 * @param request GetIdentityProviderUdPullConfigurationRequest
 * @return GetIdentityProviderUdPullConfigurationResponse
 */
GetIdentityProviderUdPullConfigurationResponse Client::getIdentityProviderUdPullConfiguration(const GetIdentityProviderUdPullConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderUdPullConfigurationWithOptions(request, runtime);
}

/**
 * @summary Retrieve the IdP outbound synchronization configuration.
 *
 * @param request GetIdentityProviderUdPushConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderUdPushConfigurationResponse
 */
GetIdentityProviderUdPushConfigurationResponse Client::getIdentityProviderUdPushConfigurationWithOptions(const GetIdentityProviderUdPushConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProviderUdPushConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderUdPushConfigurationResponse>();
}

/**
 * @summary Retrieve the IdP outbound synchronization configuration.
 *
 * @param request GetIdentityProviderUdPushConfigurationRequest
 * @return GetIdentityProviderUdPushConfigurationResponse
 */
GetIdentityProviderUdPushConfigurationResponse Client::getIdentityProviderUdPushConfiguration(const GetIdentityProviderUdPushConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderUdPushConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an EIAM instance.
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Queries the details of an EIAM instance.
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries instance control items.
 *
 * @param request GetInstanceControlConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceControlConfigurationResponse
 */
GetInstanceControlConfigurationResponse Client::getInstanceControlConfigurationWithOptions(const GetInstanceControlConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasElementName()) {
    query["ElementName"] = request.getElementName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceControlConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceControlConfigurationResponse>();
}

/**
 * @summary Queries instance control items.
 *
 * @param request GetInstanceControlConfigurationRequest
 * @return GetInstanceControlConfigurationResponse
 */
GetInstanceControlConfigurationResponse Client::getInstanceControlConfiguration(const GetInstanceControlConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceControlConfigurationWithOptions(request, runtime);
}

/**
 * @summary Retrieves the language and time zone information of an instance.
 *
 * @param request GetInstanceGlobalizationConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceGlobalizationConfigResponse
 */
GetInstanceGlobalizationConfigResponse Client::getInstanceGlobalizationConfigWithOptions(const GetInstanceGlobalizationConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceGlobalizationConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceGlobalizationConfigResponse>();
}

/**
 * @summary Retrieves the language and time zone information of an instance.
 *
 * @param request GetInstanceGlobalizationConfigRequest
 * @return GetInstanceGlobalizationConfigResponse
 */
GetInstanceGlobalizationConfigResponse Client::getInstanceGlobalizationConfig(const GetInstanceGlobalizationConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceGlobalizationConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the active license information for an instance.
 *
 * @description Ensure the instance is not in use before deletion. Deleting an EIAM instance permanently removes all of its associated data.
 *
 * @param request GetInstanceLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceLicenseResponse
 */
GetInstanceLicenseResponse Client::getInstanceLicenseWithOptions(const GetInstanceLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceLicense"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceLicenseResponse>();
}

/**
 * @summary Queries the active license information for an instance.
 *
 * @description Ensure the instance is not in use before deletion. Deleting an EIAM instance permanently removes all of its associated data.
 *
 * @param request GetInstanceLicenseRequest
 * @return GetInstanceLicenseResponse
 */
GetInstanceLicenseResponse Client::getInstanceLicense(const GetInstanceLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceLicenseWithOptions(request, runtime);
}

/**
 * @summary Retrieves all module information under a first-level module.
 *
 * @param request GetInstanceModuleInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceModuleInfoResponse
 */
GetInstanceModuleInfoResponse Client::getInstanceModuleInfoWithOptions(const GetInstanceModuleInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModuleKey()) {
    query["ModuleKey"] = request.getModuleKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceModuleInfo"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceModuleInfoResponse>();
}

/**
 * @summary Retrieves all module information under a first-level module.
 *
 * @param request GetInstanceModuleInfoRequest
 * @return GetInstanceModuleInfoResponse
 */
GetInstanceModuleInfoResponse Client::getInstanceModuleInfo(const GetInstanceModuleInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceModuleInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the quota of a single type for an instance.
 *
 * @param request GetInstanceQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceQuotaResponse
 */
GetInstanceQuotaResponse Client::getInstanceQuotaWithOptions(const GetInstanceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQuotaKey()) {
    query["QuotaKey"] = request.getQuotaKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceQuota"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceQuotaResponse>();
}

/**
 * @summary Retrieves the quota of a single type for an instance.
 *
 * @param request GetInstanceQuotaRequest
 * @return GetInstanceQuotaResponse
 */
GetInstanceQuotaResponse Client::getInstanceQuota(const GetInstanceQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceQuotaWithOptions(request, runtime);
}

/**
 * @summary Retrieves the trial status of an instance.
 *
 * @param request GetInstanceTrialStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceTrialStatusResponse
 */
GetInstanceTrialStatusResponse Client::getInstanceTrialStatusWithOptions(const GetInstanceTrialStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceTrialStatus"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceTrialStatusResponse>();
}

/**
 * @summary Retrieves the trial status of an instance.
 *
 * @param request GetInstanceTrialStatusRequest
 * @return GetInstanceTrialStatusResponse
 */
GetInstanceTrialStatusResponse Client::getInstanceTrialStatus(const GetInstanceTrialStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceTrialStatusWithOptions(request, runtime);
}

/**
 * @summary Sets the post-logon redirect application for a brand.
 *
 * @param request GetLoginRedirectApplicationForBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginRedirectApplicationForBrandResponse
 */
GetLoginRedirectApplicationForBrandResponse Client::getLoginRedirectApplicationForBrandWithOptions(const GetLoginRedirectApplicationForBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoginRedirectApplicationForBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLoginRedirectApplicationForBrandResponse>();
}

/**
 * @summary Sets the post-logon redirect application for a brand.
 *
 * @param request GetLoginRedirectApplicationForBrandRequest
 * @return GetLoginRedirectApplicationForBrandResponse
 */
GetLoginRedirectApplicationForBrandResponse Client::getLoginRedirectApplicationForBrand(const GetLoginRedirectApplicationForBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginRedirectApplicationForBrandWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a specified network access endpoint.
 *
 * @param request GetNetworkAccessEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkAccessEndpointResponse
 */
GetNetworkAccessEndpointResponse Client::getNetworkAccessEndpointWithOptions(const GetNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNetworkAccessEndpoint"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetworkAccessEndpointResponse>();
}

/**
 * @summary Queries the information about a specified network access endpoint.
 *
 * @param request GetNetworkAccessEndpointRequest
 * @return GetNetworkAccessEndpointResponse
 */
GetNetworkAccessEndpointResponse Client::getNetworkAccessEndpoint(const GetNetworkAccessEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkAccessEndpointWithOptions(request, runtime);
}

/**
 * @summary Retrieves a network zone object.
 *
 * @param request GetNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkZoneResponse
 */
GetNetworkZoneResponse Client::getNetworkZoneWithOptions(const GetNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.getNetworkZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNetworkZone"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetworkZoneResponse>();
}

/**
 * @summary Retrieves a network zone object.
 *
 * @param request GetNetworkZoneRequest
 * @return GetNetworkZoneResponse
 */
GetNetworkZoneResponse Client::getNetworkZone(const GetNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary Queries the information of an EIAM organizational unit.
 *
 * @param request GetOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrganizationalUnitResponse
 */
GetOrganizationalUnitResponse Client::getOrganizationalUnitWithOptions(const GetOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrganizationalUnitResponse>();
}

/**
 * @summary Queries the information of an EIAM organizational unit.
 *
 * @param request GetOrganizationalUnitRequest
 * @return GetOrganizationalUnitResponse
 */
GetOrganizationalUnitResponse Client::getOrganizationalUnit(const GetOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Retrieves the password complexity policy for a specified EIAM instance.
 *
 * @param request GetPasswordComplexityConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordComplexityConfigurationResponse
 */
GetPasswordComplexityConfigurationResponse Client::getPasswordComplexityConfigurationWithOptions(const GetPasswordComplexityConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPasswordComplexityConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPasswordComplexityConfigurationResponse>();
}

/**
 * @summary Retrieves the password complexity policy for a specified EIAM instance.
 *
 * @param request GetPasswordComplexityConfigurationRequest
 * @return GetPasswordComplexityConfigurationResponse
 */
GetPasswordComplexityConfigurationResponse Client::getPasswordComplexityConfiguration(const GetPasswordComplexityConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordComplexityConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the password expiration policy of a specified EIAM instance.
 *
 * @param request GetPasswordExpirationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordExpirationConfigurationResponse
 */
GetPasswordExpirationConfigurationResponse Client::getPasswordExpirationConfigurationWithOptions(const GetPasswordExpirationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPasswordExpirationConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPasswordExpirationConfigurationResponse>();
}

/**
 * @summary Queries the password expiration policy of a specified EIAM instance.
 *
 * @param request GetPasswordExpirationConfigurationRequest
 * @return GetPasswordExpirationConfigurationResponse
 */
GetPasswordExpirationConfigurationResponse Client::getPasswordExpirationConfiguration(const GetPasswordExpirationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordExpirationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the password history policy of a specified EIAM instance.
 *
 * @param request GetPasswordHistoryConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordHistoryConfigurationResponse
 */
GetPasswordHistoryConfigurationResponse Client::getPasswordHistoryConfigurationWithOptions(const GetPasswordHistoryConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPasswordHistoryConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPasswordHistoryConfigurationResponse>();
}

/**
 * @summary Queries the password history policy of a specified EIAM instance.
 *
 * @param request GetPasswordHistoryConfigurationRequest
 * @return GetPasswordHistoryConfigurationResponse
 */
GetPasswordHistoryConfigurationResponse Client::getPasswordHistoryConfiguration(const GetPasswordHistoryConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordHistoryConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the password initialization policy of Employee Identity and Access Management (EIAM).
 *
 * @param request GetPasswordInitializationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordInitializationConfigurationResponse
 */
GetPasswordInitializationConfigurationResponse Client::getPasswordInitializationConfigurationWithOptions(const GetPasswordInitializationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPasswordInitializationConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPasswordInitializationConfigurationResponse>();
}

/**
 * @summary Queries the password initialization policy of Employee Identity and Access Management (EIAM).
 *
 * @param request GetPasswordInitializationConfigurationRequest
 * @return GetPasswordInitializationConfigurationResponse
 */
GetPasswordInitializationConfigurationResponse Client::getPasswordInitializationConfiguration(const GetPasswordInitializationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordInitializationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the scope permissions under a specified ResourceServer.
 *
 * @param request GetResourceServerScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceServerScopeResponse
 */
GetResourceServerScopeResponse Client::getResourceServerScopeWithOptions(const GetResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerScopeId()) {
    query["ResourceServerScopeId"] = request.getResourceServerScopeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceServerScope"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceServerScopeResponse>();
}

/**
 * @summary Queries the scope permissions under a specified ResourceServer.
 *
 * @param request GetResourceServerScopeRequest
 * @return GetResourceServerScopeResponse
 */
GetResourceServerScopeResponse Client::getResourceServerScope(const GetResourceServerScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceServerScopeWithOptions(request, runtime);
}

/**
 * @summary Queries the root organizational unit information of EIAM.
 *
 * @param request GetRootOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRootOrganizationalUnitResponse
 */
GetRootOrganizationalUnitResponse Client::getRootOrganizationalUnitWithOptions(const GetRootOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRootOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRootOrganizationalUnitResponse>();
}

/**
 * @summary Queries the root organizational unit information of EIAM.
 *
 * @param request GetRootOrganizationalUnitRequest
 * @return GetRootOrganizationalUnitResponse
 */
GetRootOrganizationalUnitResponse Client::getRootOrganizationalUnit(const GetRootOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRootOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Retrieves the service quota.
 *
 * @param request GetServiceQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceQuotaResponse
 */
GetServiceQuotaResponse Client::getServiceQuotaWithOptions(const GetServiceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQuotaType()) {
    query["QuotaType"] = request.getQuotaType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceQuota"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceQuotaResponse>();
}

/**
 * @summary Retrieves the service quota.
 *
 * @param request GetServiceQuotaRequest
 * @return GetServiceQuotaResponse
 */
GetServiceQuotaResponse Client::getServiceQuota(const GetServiceQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceQuotaWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about a single synchronization job.
 *
 * @param request GetSynchronizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSynchronizationJobResponse
 */
GetSynchronizationJobResponse Client::getSynchronizationJobWithOptions(const GetSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.getSynchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSynchronizationJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSynchronizationJobResponse>();
}

/**
 * @summary Obtains the information about a single synchronization job.
 *
 * @param request GetSynchronizationJobRequest
 * @return GetSynchronizationJobResponse
 */
GetSynchronizationJobResponse Client::getSynchronizationJob(const GetSynchronizationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSynchronizationJobWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an EIAM account.
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2021-12-01"},
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
 * @summary Queries the details of an EIAM account.
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary View the list of invocation events.
 *
 * @param request ListActionTrackEventTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListActionTrackEventTypesResponse
 */
ListActionTrackEventTypesResponse Client::listActionTrackEventTypesWithOptions(const ListActionTrackEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListActionTrackEventTypes"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListActionTrackEventTypesResponse>();
}

/**
 * @summary View the list of invocation events.
 *
 * @param request ListActionTrackEventTypesRequest
 * @return ListActionTrackEventTypesResponse
 */
ListActionTrackEventTypesResponse Client::listActionTrackEventTypes(const ListActionTrackEventTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listActionTrackEventTypesWithOptions(request, runtime);
}

/**
 * @summary Queries the application accounts of an application by paging.
 *
 * @param request ListApplicationAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationAccountsResponse
 */
ListApplicationAccountsResponse Client::listApplicationAccountsWithOptions(const ListApplicationAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationAccounts"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationAccountsResponse>();
}

/**
 * @summary Queries the application accounts of an application by paging.
 *
 * @param request ListApplicationAccountsRequest
 * @return ListApplicationAccountsResponse
 */
ListApplicationAccountsResponse Client::listApplicationAccounts(const ListApplicationAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries all accounts that belong to a specified user in an application.
 *
 * @description This operation queries only applications that are directly assigned to an organization. You can use the **ApplicationIds** parameter to filter the applications.
 *
 * @param request ListApplicationAccountsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationAccountsForUserResponse
 */
ListApplicationAccountsForUserResponse Client::listApplicationAccountsForUserWithOptions(const ListApplicationAccountsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationAccountsForUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationAccountsForUserResponse>();
}

/**
 * @summary Queries all accounts that belong to a specified user in an application.
 *
 * @description This operation queries only applications that are directly assigned to an organization. You can use the **ApplicationIds** parameter to filter the applications.
 *
 * @param request ListApplicationAccountsForUserRequest
 * @return ListApplicationAccountsForUserResponse
 */
ListApplicationAccountsForUserResponse Client::listApplicationAccountsForUser(const ListApplicationAccountsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationAccountsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries all client secrets for an EIAM application. The key data in the response is masked. To obtain an unmasked key, call the ObtainApplicationClientSecret operation.
 *
 * @param request ListApplicationClientSecretsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationClientSecretsResponse
 */
ListApplicationClientSecretsResponse Client::listApplicationClientSecretsWithOptions(const ListApplicationClientSecretsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationClientSecrets"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationClientSecretsResponse>();
}

/**
 * @summary Queries all client secrets for an EIAM application. The key data in the response is masked. To obtain an unmasked key, call the ObtainApplicationClientSecret operation.
 *
 * @param request ListApplicationClientSecretsRequest
 * @return ListApplicationClientSecretsResponse
 */
ListApplicationClientSecretsResponse Client::listApplicationClientSecrets(const ListApplicationClientSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationClientSecretsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of application federated credentials.
 *
 * @param request ListApplicationFederatedCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationFederatedCredentialsResponse
 */
ListApplicationFederatedCredentialsResponse Client::listApplicationFederatedCredentialsWithOptions(const ListApplicationFederatedCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialType()) {
    query["ApplicationFederatedCredentialType"] = request.getApplicationFederatedCredentialType();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationFederatedCredentials"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationFederatedCredentialsResponse>();
}

/**
 * @summary Queries a list of application federated credentials.
 *
 * @param request ListApplicationFederatedCredentialsRequest
 * @return ListApplicationFederatedCredentialsResponse
 */
ListApplicationFederatedCredentialsResponse Client::listApplicationFederatedCredentials(const ListApplicationFederatedCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationFederatedCredentialsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of application federated credentials by federated trust source ID.
 *
 * @param request ListApplicationFederatedCredentialsForProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationFederatedCredentialsForProviderResponse
 */
ListApplicationFederatedCredentialsForProviderResponse Client::listApplicationFederatedCredentialsForProviderWithOptions(const ListApplicationFederatedCredentialsForProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.getFederatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationFederatedCredentialsForProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationFederatedCredentialsForProviderResponse>();
}

/**
 * @summary Queries the list of application federated credentials by federated trust source ID.
 *
 * @param request ListApplicationFederatedCredentialsForProviderRequest
 * @return ListApplicationFederatedCredentialsForProviderResponse
 */
ListApplicationFederatedCredentialsForProviderResponse Client::listApplicationFederatedCredentialsForProvider(const ListApplicationFederatedCredentialsForProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationFederatedCredentialsForProviderWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of application roles using a cursor.
 *
 * @param request ListApplicationRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationRolesResponse
 */
ListApplicationRolesResponse Client::listApplicationRolesWithOptions(const ListApplicationRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListApplicationRoles"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationRolesResponse>();
}

/**
 * @summary Retrieves a list of application roles using a cursor.
 *
 * @param request ListApplicationRolesRequest
 * @return ListApplicationRolesResponse
 */
ListApplicationRolesResponse Client::listApplicationRoles(const ListApplicationRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationRolesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of account synchronization types supported by an application.
 *
 * @param request ListApplicationSupportedProvisionProtocolTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationSupportedProvisionProtocolTypesResponse
 */
ListApplicationSupportedProvisionProtocolTypesResponse Client::listApplicationSupportedProvisionProtocolTypesWithOptions(const ListApplicationSupportedProvisionProtocolTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationSupportedProvisionProtocolTypes"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationSupportedProvisionProtocolTypesResponse>();
}

/**
 * @summary Queries the list of account synchronization types supported by an application.
 *
 * @param request ListApplicationSupportedProvisionProtocolTypesRequest
 * @return ListApplicationSupportedProvisionProtocolTypesResponse
 */
ListApplicationSupportedProvisionProtocolTypesResponse Client::listApplicationSupportedProvisionProtocolTypes(const ListApplicationSupportedProvisionProtocolTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationSupportedProvisionProtocolTypesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of application tokens.
 *
 * @param request ListApplicationTokensRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationTokensResponse
 */
ListApplicationTokensResponse Client::listApplicationTokensWithOptions(const ListApplicationTokensRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationTokenType()) {
    query["ApplicationTokenType"] = request.getApplicationTokenType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationTokens"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationTokensResponse>();
}

/**
 * @summary Retrieves the list of application tokens.
 *
 * @param request ListApplicationTokensRequest
 * @return ListApplicationTokensResponse
 */
ListApplicationTokensResponse Client::listApplicationTokens(const ListApplicationTokensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationTokensWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query to retrieve information about one or more EIAM applications with paging.
 *
 * @param request ListApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplicationsWithOptions(const ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationCreationType()) {
    query["ApplicationCreationType"] = request.getApplicationCreationType();
  }

  if (!!request.hasApplicationIdentityType()) {
    query["ApplicationIdentityType"] = request.getApplicationIdentityType();
  }

  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasAuthorizationType()) {
    query["AuthorizationType"] = request.getAuthorizationType();
  }

  if (!!request.hasCustomFields()) {
    query["CustomFields"] = request.getCustomFields();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasM2MClientStatus()) {
    query["M2MClientStatus"] = request.getM2MClientStatus();
  }

  if (!!request.hasManagedServiceCode()) {
    query["ManagedServiceCode"] = request.getManagedServiceCode();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceServerStatus()) {
    query["ResourceServerStatus"] = request.getResourceServerStatus();
  }

  if (!!request.hasServiceManaged()) {
    query["ServiceManaged"] = request.getServiceManaged();
  }

  if (!!request.hasSsoType()) {
    query["SsoType"] = request.getSsoType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplications"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsResponse>();
}

/**
 * @summary Performs a paged query to retrieve information about one or more EIAM applications with paging.
 *
 * @param request ListApplicationsRequest
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplications(const ListApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsWithOptions(request, runtime);
}

/**
 * @summary Lists the applications associated with an authorization rule.
 *
 * @param request ListApplicationsForAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForAuthorizationRuleResponse
 */
ListApplicationsForAuthorizationRuleResponse Client::listApplicationsForAuthorizationRuleWithOptions(const ListApplicationsForAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListApplicationsForAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsForAuthorizationRuleResponse>();
}

/**
 * @summary Lists the applications associated with an authorization rule.
 *
 * @param request ListApplicationsForAuthorizationRuleRequest
 * @return ListApplicationsForAuthorizationRuleResponse
 */
ListApplicationsForAuthorizationRuleResponse Client::listApplicationsForAuthorizationRule(const ListApplicationsForAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Query the list of applications accessible to an EIAM group.
 *
 * @param request ListApplicationsForGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForGroupResponse
 */
ListApplicationsForGroupResponse Client::listApplicationsForGroupWithOptions(const ListApplicationsForGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationsForGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsForGroupResponse>();
}

/**
 * @summary Query the list of applications accessible to an EIAM group.
 *
 * @param request ListApplicationsForGroupRequest
 * @return ListApplicationsForGroupResponse
 */
ListApplicationsForGroupResponse Client::listApplicationsForGroup(const ListApplicationsForGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves application information under a network access endpoint.
 *
 * @param request ListApplicationsForNetworkAccessEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForNetworkAccessEndpointResponse
 */
ListApplicationsForNetworkAccessEndpointResponse Client::listApplicationsForNetworkAccessEndpointWithOptions(const ListApplicationsForNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationsForNetworkAccessEndpoint"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsForNetworkAccessEndpointResponse>();
}

/**
 * @summary Retrieves application information under a network access endpoint.
 *
 * @param request ListApplicationsForNetworkAccessEndpointRequest
 * @return ListApplicationsForNetworkAccessEndpointResponse
 */
ListApplicationsForNetworkAccessEndpointResponse Client::listApplicationsForNetworkAccessEndpoint(const ListApplicationsForNetworkAccessEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForNetworkAccessEndpointWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of applications associated with a network domain.
 *
 * @param request ListApplicationsForNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForNetworkZoneResponse
 */
ListApplicationsForNetworkZoneResponse Client::listApplicationsForNetworkZoneWithOptions(const ListApplicationsForNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.getNetworkZoneId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationsForNetworkZone"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsForNetworkZoneResponse>();
}

/**
 * @summary Retrieves the list of applications associated with a network domain.
 *
 * @param request ListApplicationsForNetworkZoneRequest
 * @return ListApplicationsForNetworkZoneResponse
 */
ListApplicationsForNetworkZoneResponse Client::listApplicationsForNetworkZone(const ListApplicationsForNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary Queries the list of applications accessible to an EIAM organizational unit by paging. The response includes application IDs. To obtain detailed application information, call the GetApplication operation.
 *
 * @description This operation queries only the direct permissions of the organizational unit, that is, applications directly assigned to the organizational unit. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
 *
 * @param request ListApplicationsForOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForOrganizationalUnitResponse
 */
ListApplicationsForOrganizationalUnitResponse Client::listApplicationsForOrganizationalUnitWithOptions(const ListApplicationsForOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationsForOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsForOrganizationalUnitResponse>();
}

/**
 * @summary Queries the list of applications accessible to an EIAM organizational unit by paging. The response includes application IDs. To obtain detailed application information, call the GetApplication operation.
 *
 * @description This operation queries only the direct permissions of the organizational unit, that is, applications directly assigned to the organizational unit. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
 *
 * @param request ListApplicationsForOrganizationalUnitRequest
 * @return ListApplicationsForOrganizationalUnitResponse
 */
ListApplicationsForOrganizationalUnitResponse Client::listApplicationsForOrganizationalUnit(const ListApplicationsForOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Queries the applications that an EIAM account can access and returns a paginated list of application IDs. To retrieve detailed information about a specific application, call the GetApplication operation.
 *
 * @param request ListApplicationsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForUserResponse
 */
ListApplicationsForUserResponse Client::listApplicationsForUserWithOptions(const ListApplicationsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.getApplicationIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryMode()) {
    query["QueryMode"] = request.getQueryMode();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationsForUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsForUserResponse>();
}

/**
 * @summary Queries the applications that an EIAM account can access and returns a paginated list of application IDs. To retrieve detailed information about a specific application, call the GetApplication operation.
 *
 * @param request ListApplicationsForUserRequest
 * @return ListApplicationsForUserResponse
 */
ListApplicationsForUserResponse Client::listApplicationsForUser(const ListApplicationsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries a list of authorization resource information.
 *
 * @param request ListAuthorizationResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizationResourcesResponse
 */
ListAuthorizationResourcesResponse Client::listAuthorizationResourcesWithOptions(const ListAuthorizationResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListAuthorizationResources"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizationResourcesResponse>();
}

/**
 * @summary Queries a list of authorization resource information.
 *
 * @param request ListAuthorizationResourcesRequest
 * @return ListAuthorizationResourcesResponse
 */
ListAuthorizationResourcesResponse Client::listAuthorizationResources(const ListAuthorizationResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizationResourcesWithOptions(request, runtime);
}

/**
 * @summary Lists authorization rules.
 *
 * @param request ListAuthorizationRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizationRulesResponse
 */
ListAuthorizationRulesResponse Client::listAuthorizationRulesWithOptions(const ListAuthorizationRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListAuthorizationRules"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizationRulesResponse>();
}

/**
 * @summary Lists authorization rules.
 *
 * @param request ListAuthorizationRulesRequest
 * @return ListAuthorizationRulesResponse
 */
ListAuthorizationRulesResponse Client::listAuthorizationRules(const ListAuthorizationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizationRulesWithOptions(request, runtime);
}

/**
 * @summary Lists the authorization rules associated with an application.
 *
 * @param request ListAuthorizationRulesForApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizationRulesForApplicationResponse
 */
ListAuthorizationRulesForApplicationResponse Client::listAuthorizationRulesForApplicationWithOptions(const ListAuthorizationRulesForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListAuthorizationRulesForApplication"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizationRulesForApplicationResponse>();
}

/**
 * @summary Lists the authorization rules associated with an application.
 *
 * @param request ListAuthorizationRulesForApplicationRequest
 * @return ListAuthorizationRulesForApplicationResponse
 */
ListAuthorizationRulesForApplicationResponse Client::listAuthorizationRulesForApplication(const ListAuthorizationRulesForApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizationRulesForApplicationWithOptions(request, runtime);
}

/**
 * @summary Lists the authorization rules associated with a group.
 *
 * @param request ListAuthorizationRulesForGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizationRulesForGroupResponse
 */
ListAuthorizationRulesForGroupResponse Client::listAuthorizationRulesForGroupWithOptions(const ListAuthorizationRulesForGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListAuthorizationRulesForGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizationRulesForGroupResponse>();
}

/**
 * @summary Lists the authorization rules associated with a group.
 *
 * @param request ListAuthorizationRulesForGroupRequest
 * @return ListAuthorizationRulesForGroupResponse
 */
ListAuthorizationRulesForGroupResponse Client::listAuthorizationRulesForGroup(const ListAuthorizationRulesForGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizationRulesForGroupWithOptions(request, runtime);
}

/**
 * @summary Lists the authorization rules associated with an account.
 *
 * @param request ListAuthorizationRulesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizationRulesForUserResponse
 */
ListAuthorizationRulesForUserResponse Client::listAuthorizationRulesForUserWithOptions(const ListAuthorizationRulesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListAuthorizationRulesForUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizationRulesForUserResponse>();
}

/**
 * @summary Lists the authorization rules associated with an account.
 *
 * @param request ListAuthorizationRulesForUserRequest
 * @return ListAuthorizationRulesForUserResponse
 */
ListAuthorizationRulesForUserResponse Client::listAuthorizationRulesForUser(const ListAuthorizationRulesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizationRulesForUserWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of all authorization servers under an instance.
 *
 * @param request ListAuthorizationServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizationServersResponse
 */
ListAuthorizationServersResponse Client::listAuthorizationServersWithOptions(const ListAuthorizationServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListAuthorizationServers"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizationServersResponse>();
}

/**
 * @summary Retrieves a list of all authorization servers under an instance.
 *
 * @param request ListAuthorizationServersRequest
 * @return ListAuthorizationServersResponse
 */
ListAuthorizationServersResponse Client::listAuthorizationServers(const ListAuthorizationServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizationServersWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of brands.
 *
 * @param request ListBrandsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBrandsResponse
 */
ListBrandsResponse Client::listBrandsWithOptions(const ListBrandsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBrands"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBrandsResponse>();
}

/**
 * @summary Retrieves a list of brands.
 *
 * @param request ListBrandsRequest
 * @return ListBrandsResponse
 */
ListBrandsResponse Client::listBrands(const ListBrandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBrandsWithOptions(request, runtime);
}

/**
 * @summary Lists the client public keys for a specified application using a cursor.
 *
 * @param request ListClientPublicKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClientPublicKeysResponse
 */
ListClientPublicKeysResponse Client::listClientPublicKeysWithOptions(const ListClientPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListClientPublicKeys"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClientPublicKeysResponse>();
}

/**
 * @summary Lists the client public keys for a specified application using a cursor.
 *
 * @param request ListClientPublicKeysRequest
 * @return ListClientPublicKeysResponse
 */
ListClientPublicKeysResponse Client::listClientPublicKeys(const ListClientPublicKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientPublicKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more cloud roles by using paging.
 *
 * @param request ListCloudAccountRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudAccountRolesResponse
 */
ListCloudAccountRolesResponse Client::listCloudAccountRolesWithOptions(const ListCloudAccountRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListCloudAccountRoles"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudAccountRolesResponse>();
}

/**
 * @summary Queries the information about one or more cloud roles by using paging.
 *
 * @param request ListCloudAccountRolesRequest
 * @return ListCloudAccountRolesResponse
 */
ListCloudAccountRolesResponse Client::listCloudAccountRoles(const ListCloudAccountRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudAccountRolesWithOptions(request, runtime);
}

/**
 * @summary Queries information about one or more cloud accounts by using paging.
 *
 * @param request ListCloudAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudAccountsResponse
 */
ListCloudAccountsResponse Client::listCloudAccountsWithOptions(const ListCloudAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListCloudAccounts"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudAccountsResponse>();
}

/**
 * @summary Queries information about one or more cloud accounts by using paging.
 *
 * @param request ListCloudAccountsRequest
 * @return ListCloudAccountsResponse
 */
ListCloudAccountsResponse Client::listCloudAccounts(const ListCloudAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudAccountsWithOptions(request, runtime);
}

/**
 * @summary List conditional access policies.
 *
 * @description Query the list of conditional access policies with pagination.
 *
 * @param request ListConditionalAccessPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConditionalAccessPoliciesResponse
 */
ListConditionalAccessPoliciesResponse Client::listConditionalAccessPoliciesWithOptions(const ListConditionalAccessPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConditionalAccessPolicies"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConditionalAccessPoliciesResponse>();
}

/**
 * @summary List conditional access policies.
 *
 * @description Query the list of conditional access policies with pagination.
 *
 * @param request ListConditionalAccessPoliciesRequest
 * @return ListConditionalAccessPoliciesResponse
 */
ListConditionalAccessPoliciesResponse Client::listConditionalAccessPolicies(const ListConditionalAccessPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConditionalAccessPoliciesWithOptions(request, runtime);
}

/**
 * @summary List conditional access policies associated with an application.
 *
 * @param request ListConditionalAccessPoliciesForApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConditionalAccessPoliciesForApplicationResponse
 */
ListConditionalAccessPoliciesForApplicationResponse Client::listConditionalAccessPoliciesForApplicationWithOptions(const ListConditionalAccessPoliciesForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConditionalAccessPoliciesForApplication"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConditionalAccessPoliciesForApplicationResponse>();
}

/**
 * @summary List conditional access policies associated with an application.
 *
 * @param request ListConditionalAccessPoliciesForApplicationRequest
 * @return ListConditionalAccessPoliciesForApplicationResponse
 */
ListConditionalAccessPoliciesForApplicationResponse Client::listConditionalAccessPoliciesForApplication(const ListConditionalAccessPoliciesForApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConditionalAccessPoliciesForApplicationWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of conditional access policies associated with a network zone.
 *
 * @description Retrieves the list of conditional access policies associated with a network zone.
 *
 * @param request ListConditionalAccessPoliciesForNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConditionalAccessPoliciesForNetworkZoneResponse
 */
ListConditionalAccessPoliciesForNetworkZoneResponse Client::listConditionalAccessPoliciesForNetworkZoneWithOptions(const ListConditionalAccessPoliciesForNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.getNetworkZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConditionalAccessPoliciesForNetworkZone"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConditionalAccessPoliciesForNetworkZoneResponse>();
}

/**
 * @summary Retrieves the list of conditional access policies associated with a network zone.
 *
 * @description Retrieves the list of conditional access policies associated with a network zone.
 *
 * @param request ListConditionalAccessPoliciesForNetworkZoneRequest
 * @return ListConditionalAccessPoliciesForNetworkZoneResponse
 */
ListConditionalAccessPoliciesForNetworkZoneResponse Client::listConditionalAccessPoliciesForNetworkZone(const ListConditionalAccessPoliciesForNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConditionalAccessPoliciesForNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of conditional access policies associated with a user.
 *
 * @param request ListConditionalAccessPoliciesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConditionalAccessPoliciesForUserResponse
 */
ListConditionalAccessPoliciesForUserResponse Client::listConditionalAccessPoliciesForUserWithOptions(const ListConditionalAccessPoliciesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConditionalAccessPoliciesForUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConditionalAccessPoliciesForUserResponse>();
}

/**
 * @summary Retrieves the list of conditional access policies associated with a user.
 *
 * @param request ListConditionalAccessPoliciesForUserRequest
 * @return ListConditionalAccessPoliciesForUserResponse
 */
ListConditionalAccessPoliciesForUserResponse Client::listConditionalAccessPoliciesForUser(const ListConditionalAccessPoliciesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConditionalAccessPoliciesForUserWithOptions(request, runtime);
}

/**
 * @summary Lists credential providers.
 *
 * @param request ListCredentialProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCredentialProvidersResponse
 */
ListCredentialProvidersResponse Client::listCredentialProvidersWithOptions(const ListCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialProviderIds()) {
    query["CredentialProviderIds"] = request.getCredentialProviderIds();
  }

  if (!!request.hasCredentialProviderTypes()) {
    query["CredentialProviderTypes"] = request.getCredentialProviderTypes();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStatuses()) {
    query["Statuses"] = request.getStatuses();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCredentialProviders"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCredentialProvidersResponse>();
}

/**
 * @summary Lists credential providers.
 *
 * @param request ListCredentialProvidersRequest
 * @return ListCredentialProvidersResponse
 */
ListCredentialProvidersResponse Client::listCredentialProviders(const ListCredentialProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCredentialProvidersWithOptions(request, runtime);
}

/**
 * @summary Queries the information of one or more credentials by using paging.
 *
 * @param request ListCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentialsWithOptions(const ListCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialExternalIds()) {
    query["CredentialExternalIds"] = request.getCredentialExternalIds();
  }

  if (!!request.hasCredentialIds()) {
    query["CredentialIds"] = request.getCredentialIds();
  }

  if (!!request.hasCredentialSharingScopes()) {
    query["CredentialSharingScopes"] = request.getCredentialSharingScopes();
  }

  if (!!request.hasCredentialTypes()) {
    query["CredentialTypes"] = request.getCredentialTypes();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStatuses()) {
    query["Statuses"] = request.getStatuses();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCredentials"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCredentialsResponse>();
}

/**
 * @summary Queries the information of one or more credentials by using paging.
 *
 * @param request ListCredentialsRequest
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentials(const ListCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCredentialsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of custom terms.
 *
 * @param request ListCustomPrivacyPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomPrivacyPoliciesResponse
 */
ListCustomPrivacyPoliciesResponse Client::listCustomPrivacyPoliciesWithOptions(const ListCustomPrivacyPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyNameStartsWith()) {
    query["CustomPrivacyPolicyNameStartsWith"] = request.getCustomPrivacyPolicyNameStartsWith();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomPrivacyPolicies"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomPrivacyPoliciesResponse>();
}

/**
 * @summary Queries the list of custom terms.
 *
 * @param request ListCustomPrivacyPoliciesRequest
 * @return ListCustomPrivacyPoliciesResponse
 */
ListCustomPrivacyPoliciesResponse Client::listCustomPrivacyPolicies(const ListCustomPrivacyPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomPrivacyPoliciesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the resources of brand-linked instances.
 *
 * @param request ListCustomPrivacyPoliciesForBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomPrivacyPoliciesForBrandResponse
 */
ListCustomPrivacyPoliciesForBrandResponse Client::listCustomPrivacyPoliciesForBrandWithOptions(const ListCustomPrivacyPoliciesForBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomPrivacyPoliciesForBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomPrivacyPoliciesForBrandResponse>();
}

/**
 * @summary Retrieves the resources of brand-linked instances.
 *
 * @param request ListCustomPrivacyPoliciesForBrandRequest
 * @return ListCustomPrivacyPoliciesForBrandResponse
 */
ListCustomPrivacyPoliciesForBrandResponse Client::listCustomPrivacyPoliciesForBrand(const ListCustomPrivacyPoliciesForBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomPrivacyPoliciesForBrandWithOptions(request, runtime);
}

/**
 * @summary Queries a list of domain proxy tokens of an EIAM instance.
 *
 * @param request ListDomainProxyTokensRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDomainProxyTokensResponse
 */
ListDomainProxyTokensResponse Client::listDomainProxyTokensWithOptions(const ListDomainProxyTokensRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDomainProxyTokens"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDomainProxyTokensResponse>();
}

/**
 * @summary Queries a list of domain proxy tokens of an EIAM instance.
 *
 * @param request ListDomainProxyTokensRequest
 * @return ListDomainProxyTokensResponse
 */
ListDomainProxyTokensResponse Client::listDomainProxyTokens(const ListDomainProxyTokensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDomainProxyTokensWithOptions(request, runtime);
}

/**
 * @summary Queries the domain names of an EIAM instance, including the default domain name and custom domain names.
 *
 * @param request ListDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomainsWithOptions(const ListDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDomains"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDomainsResponse>();
}

/**
 * @summary Queries the domain names of an EIAM instance, including the default domain name and custom domain names.
 *
 * @param request ListDomainsRequest
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomains(const ListDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of EIAM 2.0 and EIAM 1.0 instances.
 *
 * @param request ListEiamInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEiamInstancesResponse
 */
ListEiamInstancesResponse Client::listEiamInstancesWithOptions(const ListEiamInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInstanceRegionId()) {
    query["InstanceRegionId"] = request.getInstanceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEiamInstances"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEiamInstancesResponse>();
}

/**
 * @summary Queries the list of EIAM 2.0 and EIAM 1.0 instances.
 *
 * @param request ListEiamInstancesRequest
 * @return ListEiamInstancesResponse
 */
ListEiamInstancesResponse Client::listEiamInstances(const ListEiamInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEiamInstancesWithOptions(request, runtime);
}

/**
 * @summary Lists the regions available for EIAM 1.0 and EIAM 2.0.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEiamRegionsResponse
 */
ListEiamRegionsResponse Client::listEiamRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListEiamRegions"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEiamRegionsResponse>();
}

/**
 * @summary Lists the regions available for EIAM 1.0 and EIAM 2.0.
 *
 * @return ListEiamRegionsResponse
 */
ListEiamRegionsResponse Client::listEiamRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEiamRegionsWithOptions(runtime);
}

/**
 * @summary Queries the event list.
 *
 * @param request ListEventTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEventTypesResponse
 */
ListEventTypesResponse Client::listEventTypesWithOptions(const ListEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEventTypes"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEventTypesResponse>();
}

/**
 * @summary Queries the event list.
 *
 * @param request ListEventTypesRequest
 * @return ListEventTypesResponse
 */
ListEventTypesResponse Client::listEventTypes(const ListEventTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEventTypesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of federated trust sources.
 *
 * @param request ListFederatedCredentialProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFederatedCredentialProvidersResponse
 */
ListFederatedCredentialProvidersResponse Client::listFederatedCredentialProvidersWithOptions(const ListFederatedCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderName()) {
    query["FederatedCredentialProviderName"] = request.getFederatedCredentialProviderName();
  }

  if (!!request.hasFederatedCredentialProviderType()) {
    query["FederatedCredentialProviderType"] = request.getFederatedCredentialProviderType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFederatedCredentialProviders"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFederatedCredentialProvidersResponse>();
}

/**
 * @summary Queries a list of federated trust sources.
 *
 * @param request ListFederatedCredentialProvidersRequest
 * @return ListFederatedCredentialProvidersResponse
 */
ListFederatedCredentialProvidersResponse Client::listFederatedCredentialProviders(const ListFederatedCredentialProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFederatedCredentialProvidersWithOptions(request, runtime);
}

/**
 * @summary List EIAM account groups.
 *
 * @param request ListGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroupsWithOptions(const ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupExternalId()) {
    query["GroupExternalId"] = request.getGroupExternalId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasGroupNameStartsWith()) {
    query["GroupNameStartsWith"] = request.getGroupNameStartsWith();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroups"},
    {"version" , "2021-12-01"},
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
 * @summary List EIAM account groups.
 *
 * @param request ListGroupsRequest
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroups(const ListGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query to list the groups authorized to access an application. The response returns the group IDs. To obtain detailed information for a group, you can call the GetGroup operation.
 *
 * @param request ListGroupsForApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsForApplicationResponse
 */
ListGroupsForApplicationResponse Client::listGroupsForApplicationWithOptions(const ListGroupsForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupsForApplication"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupsForApplicationResponse>();
}

/**
 * @summary Performs a paged query to list the groups authorized to access an application. The response returns the group IDs. To obtain detailed information for a group, you can call the GetGroup operation.
 *
 * @param request ListGroupsForApplicationRequest
 * @return ListGroupsForApplicationResponse
 */
ListGroupsForApplicationResponse Client::listGroupsForApplication(const ListGroupsForApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsForApplicationWithOptions(request, runtime);
}

/**
 * @summary Lists the groups associated with an authorization rule.
 *
 * @param request ListGroupsForAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsForAuthorizationRuleResponse
 */
ListGroupsForAuthorizationRuleResponse Client::listGroupsForAuthorizationRuleWithOptions(const ListGroupsForAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListGroupsForAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupsForAuthorizationRuleResponse>();
}

/**
 * @summary Lists the groups associated with an authorization rule.
 *
 * @param request ListGroupsForAuthorizationRuleRequest
 * @return ListGroupsForAuthorizationRuleResponse
 */
ListGroupsForAuthorizationRuleResponse Client::listGroupsForAuthorizationRule(const ListGroupsForAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsForAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Lists the scopes authorized for groups on a specified resource server. This operation supports cursor-based pagination.
 *
 * @param request ListGroupsForResourceServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsForResourceServerResponse
 */
ListGroupsForResourceServerResponse Client::listGroupsForResourceServerWithOptions(const ListGroupsForResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceServerScopeId()) {
    query["ResourceServerScopeId"] = request.getResourceServerScopeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupsForResourceServer"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupsForResourceServerResponse>();
}

/**
 * @summary Lists the scopes authorized for groups on a specified resource server. This operation supports cursor-based pagination.
 *
 * @param request ListGroupsForResourceServerRequest
 * @return ListGroupsForResourceServerResponse
 */
ListGroupsForResourceServerResponse Client::listGroupsForResourceServer(const ListGroupsForResourceServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsForResourceServerWithOptions(request, runtime);
}

/**
 * @summary Queries the list of account groups to which a specified EIAM account belongs.
 *
 * @param request ListGroupsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUserWithOptions(const ListGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupsForUser"},
    {"version" , "2021-12-01"},
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
 * @summary Queries the list of account groups to which a specified EIAM account belongs.
 *
 * @param request ListGroupsForUserRequest
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUser(const ListGroupsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsForUserWithOptions(request, runtime);
}

/**
 * @summary Query the list of identity providers.
 *
 * @param request ListIdentityProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProvidersWithOptions(const ListIdentityProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIdentityProviders"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdentityProvidersResponse>();
}

/**
 * @summary Query the list of identity providers.
 *
 * @param request ListIdentityProvidersRequest
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProviders(const ListIdentityProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdentityProvidersWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about Identity Providers (IdPs) for a network endpoint.
 *
 * @param request ListIdentityProvidersForNetworkAccessEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentityProvidersForNetworkAccessEndpointResponse
 */
ListIdentityProvidersForNetworkAccessEndpointResponse Client::listIdentityProvidersForNetworkAccessEndpointWithOptions(const ListIdentityProvidersForNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIdentityProvidersForNetworkAccessEndpoint"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdentityProvidersForNetworkAccessEndpointResponse>();
}

/**
 * @summary Retrieves information about Identity Providers (IdPs) for a network endpoint.
 *
 * @param request ListIdentityProvidersForNetworkAccessEndpointRequest
 * @return ListIdentityProvidersForNetworkAccessEndpointResponse
 */
ListIdentityProvidersForNetworkAccessEndpointResponse Client::listIdentityProvidersForNetworkAccessEndpoint(const ListIdentityProvidersForNetworkAccessEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdentityProvidersForNetworkAccessEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries information about one or more EIAM instances.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrossRegionReplication()) {
    query["CrossRegionReplication"] = request.getCrossRegionReplication();
  }

  if (!!request.hasEdition()) {
    query["Edition"] = request.getEdition();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries information about one or more EIAM instances.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Lists the available regions for creating network access endpoints in IDaaS EIAM.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkAccessEndpointAvailableRegionsResponse
 */
ListNetworkAccessEndpointAvailableRegionsResponse Client::listNetworkAccessEndpointAvailableRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListNetworkAccessEndpointAvailableRegions"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetworkAccessEndpointAvailableRegionsResponse>();
}

/**
 * @summary Lists the available regions for creating network access endpoints in IDaaS EIAM.
 *
 * @return ListNetworkAccessEndpointAvailableRegionsResponse
 */
ListNetworkAccessEndpointAvailableRegionsResponse Client::listNetworkAccessEndpointAvailableRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkAccessEndpointAvailableRegionsWithOptions(runtime);
}

/**
 * @summary Queries the list of zones that support the creation of network endpoints in a specified region for IDaaS EIAM.
 *
 * @param request ListNetworkAccessEndpointAvailableZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkAccessEndpointAvailableZonesResponse
 */
ListNetworkAccessEndpointAvailableZonesResponse Client::listNetworkAccessEndpointAvailableZonesWithOptions(const ListNetworkAccessEndpointAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNaeRegionId()) {
    query["NaeRegionId"] = request.getNaeRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNetworkAccessEndpointAvailableZones"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetworkAccessEndpointAvailableZonesResponse>();
}

/**
 * @summary Queries the list of zones that support the creation of network endpoints in a specified region for IDaaS EIAM.
 *
 * @param request ListNetworkAccessEndpointAvailableZonesRequest
 * @return ListNetworkAccessEndpointAvailableZonesResponse
 */
ListNetworkAccessEndpointAvailableZonesResponse Client::listNetworkAccessEndpointAvailableZones(const ListNetworkAccessEndpointAvailableZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkAccessEndpointAvailableZonesWithOptions(request, runtime);
}

/**
 * @summary Lists the network endpoints for an IDaaS EIAM instance.
 *
 * @param request ListNetworkAccessEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkAccessEndpointsResponse
 */
ListNetworkAccessEndpointsResponse Client::listNetworkAccessEndpointsWithOptions(const ListNetworkAccessEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetworkAccessEndpointStatus()) {
    query["NetworkAccessEndpointStatus"] = request.getNetworkAccessEndpointStatus();
  }

  if (!!request.hasNetworkAccessEndpointType()) {
    query["NetworkAccessEndpointType"] = request.getNetworkAccessEndpointType();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVpcRegionId()) {
    query["VpcRegionId"] = request.getVpcRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNetworkAccessEndpoints"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetworkAccessEndpointsResponse>();
}

/**
 * @summary Lists the network endpoints for an IDaaS EIAM instance.
 *
 * @param request ListNetworkAccessEndpointsRequest
 * @return ListNetworkAccessEndpointsResponse
 */
ListNetworkAccessEndpointsResponse Client::listNetworkAccessEndpoints(const ListNetworkAccessEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkAccessEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of access paths under a specified network access endpoint.
 *
 * @param request ListNetworkAccessPathsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkAccessPathsResponse
 */
ListNetworkAccessPathsResponse Client::listNetworkAccessPathsWithOptions(const ListNetworkAccessPathsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNetworkAccessPaths"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetworkAccessPathsResponse>();
}

/**
 * @summary Queries the list of access paths under a specified network access endpoint.
 *
 * @param request ListNetworkAccessPathsRequest
 * @return ListNetworkAccessPathsResponse
 */
ListNetworkAccessPathsResponse Client::listNetworkAccessPaths(const ListNetworkAccessPathsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkAccessPathsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of network zone objects.
 *
 * @param request ListNetworkZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkZonesResponse
 */
ListNetworkZonesResponse Client::listNetworkZonesWithOptions(const ListNetworkZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetworkZoneIds()) {
    query["NetworkZoneIds"] = request.getNetworkZoneIds();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNetworkZones"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetworkZonesResponse>();
}

/**
 * @summary Queries the list of network zone objects.
 *
 * @param request ListNetworkZonesRequest
 * @return ListNetworkZonesResponse
 */
ListNetworkZonesResponse Client::listNetworkZones(const ListNetworkZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkZonesWithOptions(request, runtime);
}

/**
 * @summary Queries all ancestor organizations of a specified EIAM organization. The organizations in the result list are sorted in hierarchical order from the top level to the bottom level.
 *
 * @param request ListOrganizationalUnitParentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationalUnitParentsResponse
 */
ListOrganizationalUnitParentsResponse Client::listOrganizationalUnitParentsWithOptions(const ListOrganizationalUnitParentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrganizationalUnitParents"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOrganizationalUnitParentsResponse>();
}

/**
 * @summary Queries all ancestor organizations of a specified EIAM organization. The organizations in the result list are sorted in hierarchical order from the top level to the bottom level.
 *
 * @param request ListOrganizationalUnitParentsRequest
 * @return ListOrganizationalUnitParentsResponse
 */
ListOrganizationalUnitParentsResponse Client::listOrganizationalUnitParents(const ListOrganizationalUnitParentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrganizationalUnitParentsWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query for EIAM organizational units.
 *
 * @param request ListOrganizationalUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationalUnitsResponse
 */
ListOrganizationalUnitsResponse Client::listOrganizationalUnitsWithOptions(const ListOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.getOrganizationalUnitIds();
  }

  if (!!request.hasOrganizationalUnitName()) {
    query["OrganizationalUnitName"] = request.getOrganizationalUnitName();
  }

  if (!!request.hasOrganizationalUnitNameStartsWith()) {
    query["OrganizationalUnitNameStartsWith"] = request.getOrganizationalUnitNameStartsWith();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrganizationalUnits"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOrganizationalUnitsResponse>();
}

/**
 * @summary Performs a paged query for EIAM organizational units.
 *
 * @param request ListOrganizationalUnitsRequest
 * @return ListOrganizationalUnitsResponse
 */
ListOrganizationalUnitsResponse Client::listOrganizationalUnits(const ListOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrganizationalUnitsWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query to list the organizations that are granted access to an application. The response returns the IDs of the organizations. To obtain detailed information about a specific organization, call the GetOrganizationalUnit operation.
 *
 * @param request ListOrganizationalUnitsForApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationalUnitsForApplicationResponse
 */
ListOrganizationalUnitsForApplicationResponse Client::listOrganizationalUnitsForApplicationWithOptions(const ListOrganizationalUnitsForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.getOrganizationalUnitIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrganizationalUnitsForApplication"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOrganizationalUnitsForApplicationResponse>();
}

/**
 * @summary Performs a paged query to list the organizations that are granted access to an application. The response returns the IDs of the organizations. To obtain detailed information about a specific organization, call the GetOrganizationalUnit operation.
 *
 * @param request ListOrganizationalUnitsForApplicationRequest
 * @return ListOrganizationalUnitsForApplicationResponse
 */
ListOrganizationalUnitsForApplicationResponse Client::listOrganizationalUnitsForApplication(const ListOrganizationalUnitsForApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrganizationalUnitsForApplicationWithOptions(request, runtime);
}

/**
 * @summary Retrieves a cursor-paginated list of scopes that the current resource server has granted to an organization.
 *
 * @param request ListOrganizationalUnitsForResourceServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationalUnitsForResourceServerResponse
 */
ListOrganizationalUnitsForResourceServerResponse Client::listOrganizationalUnitsForResourceServerWithOptions(const ListOrganizationalUnitsForResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceServerScopeId()) {
    query["ResourceServerScopeId"] = request.getResourceServerScopeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrganizationalUnitsForResourceServer"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOrganizationalUnitsForResourceServerResponse>();
}

/**
 * @summary Retrieves a cursor-paginated list of scopes that the current resource server has granted to an organization.
 *
 * @param request ListOrganizationalUnitsForResourceServerRequest
 * @return ListOrganizationalUnitsForResourceServerResponse
 */
ListOrganizationalUnitsForResourceServerResponse Client::listOrganizationalUnitsForResourceServer(const ListOrganizationalUnitsForResourceServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrganizationalUnitsForResourceServerWithOptions(request, runtime);
}

/**
 * @summary Queries a list of supported Alibaba Cloud regions.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary Queries a list of supported Alibaba Cloud regions.
 *
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(runtime);
}

/**
 * @summary Queries the list of scope permissions under a specified ResourceServer by using a cursor.
 *
 * @param request ListResourceServerScopesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceServerScopesResponse
 */
ListResourceServerScopesResponse Client::listResourceServerScopesWithOptions(const ListResourceServerScopesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAuthorizationType()) {
    query["AuthorizationType"] = request.getAuthorizationType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  if (!!request.hasResourceServerScopeIds()) {
    query["ResourceServerScopeIds"] = request.getResourceServerScopeIds();
  }

  if (!!request.hasResourceServerScopeName()) {
    query["ResourceServerScopeName"] = request.getResourceServerScopeName();
  }

  if (!!request.hasResourceServerScopeType()) {
    query["ResourceServerScopeType"] = request.getResourceServerScopeType();
  }

  if (!!request.hasResourceServerScopeValue()) {
    query["ResourceServerScopeValue"] = request.getResourceServerScopeValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceServerScopes"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceServerScopesResponse>();
}

/**
 * @summary Queries the list of scope permissions under a specified ResourceServer by using a cursor.
 *
 * @param request ListResourceServerScopesRequest
 * @return ListResourceServerScopesResponse
 */
ListResourceServerScopesResponse Client::listResourceServerScopes(const ListResourceServerScopesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceServerScopesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of ResourceServer and Scope permissions granted to the current account by using a cursor-based approach.
 *
 * @param request ListResourceServersForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceServersForUserResponse
 */
ListResourceServersForUserResponse Client::listResourceServersForUserWithOptions(const ListResourceServersForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListResourceServersForUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceServersForUserResponse>();
}

/**
 * @summary Queries the list of ResourceServer and Scope permissions granted to the current account by using a cursor-based approach.
 *
 * @param request ListResourceServersForUserRequest
 * @return ListResourceServersForUserResponse
 */
ListResourceServersForUserResponse Client::listResourceServersForUser(const ListResourceServersForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceServersForUserWithOptions(request, runtime);
}

/**
 * @summary Query the list of synchronization job details.
 *
 * @description The following two methods are supported for viewing returned data:
 * - Method 1: When querying the first page, you only need to set MaxResults to limit the number of entries returned. The NextToken in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the NextToken parameter to the NextToken value obtained from the previous response as the query credential, and set MaxResults to limit the number of entries returned. If there are no more pages, NextToken is no longer returned. The maximum value of MaxResults is 100.
 * - Method 2: Set the number of entries returned per page using PageSize, and set the page number using PageNumber.
 * You can only choose one of the above two methods. When a large number of entries are returned, Method 1 is recommended. If the MaxResults or NextToken parameter is set, the PageSize and PageNumber request parameters become invalid.
 *
 * @param request ListSynchronizationJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSynchronizationJobsResponse
 */
ListSynchronizationJobsResponse Client::listSynchronizationJobsWithOptions(const ListSynchronizationJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTargetIds()) {
    query["TargetIds"] = request.getTargetIds();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSynchronizationJobs"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSynchronizationJobsResponse>();
}

/**
 * @summary Query the list of synchronization job details.
 *
 * @description The following two methods are supported for viewing returned data:
 * - Method 1: When querying the first page, you only need to set MaxResults to limit the number of entries returned. The NextToken in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the NextToken parameter to the NextToken value obtained from the previous response as the query credential, and set MaxResults to limit the number of entries returned. If there are no more pages, NextToken is no longer returned. The maximum value of MaxResults is 100.
 * - Method 2: Set the number of entries returned per page using PageSize, and set the page number using PageNumber.
 * You can only choose one of the above two methods. When a large number of entries are returned, Method 1 is recommended. If the MaxResults or NextToken parameter is set, the PageSize and PageNumber request parameters become invalid.
 *
 * @param request ListSynchronizationJobsRequest
 * @return ListSynchronizationJobsResponse
 */
ListSynchronizationJobsResponse Client::listSynchronizationJobs(const ListSynchronizationJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSynchronizationJobsWithOptions(request, runtime);
}

/**
 * @summary Lists the mappings for third-party logon accounts.
 *
 * @description This operation queries only the applications that are directly assigned to an organization. You can use the **ApplicationIds** parameter to filter the applications.
 *
 * @param request ListUserAuthnSourceMappingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserAuthnSourceMappingsResponse
 */
ListUserAuthnSourceMappingsResponse Client::listUserAuthnSourceMappingsWithOptions(const ListUserAuthnSourceMappingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.getPreviousToken();
  }

  if (!!request.hasUserExternalId()) {
    query["UserExternalId"] = request.getUserExternalId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserAuthnSourceMappings"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserAuthnSourceMappingsResponse>();
}

/**
 * @summary Lists the mappings for third-party logon accounts.
 *
 * @description This operation queries only the applications that are directly assigned to an organization. You can use the **ApplicationIds** parameter to filter the applications.
 *
 * @param request ListUserAuthnSourceMappingsRequest
 * @return ListUserAuthnSourceMappingsResponse
 */
ListUserAuthnSourceMappingsResponse Client::listUserAuthnSourceMappings(const ListUserAuthnSourceMappingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserAuthnSourceMappingsWithOptions(request, runtime);
}

/**
 * @summary Queries EIAM account information by using paging.
 *
 * @description This operation queries only the direct permissions of an organizational unit, which are the applications directly assigned to the organizational unit. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayNameStartsWith()) {
    query["DisplayNameStartsWith"] = request.getDisplayNameStartsWith();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasPhoneRegion()) {
    query["PhoneRegion"] = request.getPhoneRegion();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserExternalId()) {
    query["UserExternalId"] = request.getUserExternalId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  if (!!request.hasUserSourceId()) {
    query["UserSourceId"] = request.getUserSourceId();
  }

  if (!!request.hasUserSourceType()) {
    query["UserSourceType"] = request.getUserSourceType();
  }

  if (!!request.hasUsernameStartsWith()) {
    query["UsernameStartsWith"] = request.getUsernameStartsWith();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2021-12-01"},
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
 * @summary Queries EIAM account information by using paging.
 *
 * @description This operation queries only the direct permissions of an organizational unit, which are the applications directly assigned to the organizational unit. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query to list the accounts that have been granted access to an application. The response includes account IDs. To retrieve detailed information about an account, call the GetUser operation.
 *
 * @param request ListUsersForApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersForApplicationResponse
 */
ListUsersForApplicationResponse Client::listUsersForApplicationWithOptions(const ListUsersForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsersForApplication"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersForApplicationResponse>();
}

/**
 * @summary Performs a paged query to list the accounts that have been granted access to an application. The response includes account IDs. To retrieve detailed information about an account, call the GetUser operation.
 *
 * @param request ListUsersForApplicationRequest
 * @return ListUsersForApplicationResponse
 */
ListUsersForApplicationResponse Client::listUsersForApplication(const ListUsersForApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersForApplicationWithOptions(request, runtime);
}

/**
 * @summary Lists the accounts associated with an authorization rule.
 *
 * @param request ListUsersForAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersForAuthorizationRuleResponse
 */
ListUsersForAuthorizationRuleResponse Client::listUsersForAuthorizationRuleWithOptions(const ListUsersForAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
    {"action" , "ListUsersForAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersForAuthorizationRuleResponse>();
}

/**
 * @summary Lists the accounts associated with an authorization rule.
 *
 * @param request ListUsersForAuthorizationRuleRequest
 * @return ListUsersForAuthorizationRuleResponse
 */
ListUsersForAuthorizationRuleResponse Client::listUsersForAuthorizationRule(const ListUsersForAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersForAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Lists the users in a specified EIAM account group.
 *
 * @param request ListUsersForGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroupWithOptions(const ListUsersForGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsersForGroup"},
    {"version" , "2021-12-01"},
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
 * @summary Lists the users in a specified EIAM account group.
 *
 * @param request ListUsersForGroupRequest
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroup(const ListUsersForGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersForGroupWithOptions(request, runtime);
}

/**
 * @summary List the scope permissions granted by a Resource Server to user accounts using cursor-based pagination.
 *
 * @param request ListUsersForResourceServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersForResourceServerResponse
 */
ListUsersForResourceServerResponse Client::listUsersForResourceServerWithOptions(const ListUsersForResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceServerScopeId()) {
    query["ResourceServerScopeId"] = request.getResourceServerScopeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsersForResourceServer"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersForResourceServerResponse>();
}

/**
 * @summary List the scope permissions granted by a Resource Server to user accounts using cursor-based pagination.
 *
 * @param request ListUsersForResourceServerRequest
 * @return ListUsersForResourceServerResponse
 */
ListUsersForResourceServerResponse Client::listUsersForResourceServer(const ListUsersForResourceServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersForResourceServerWithOptions(request, runtime);
}

/**
 * @summary Retrieves the client secret of an EIAM application. The returned secret is not masked. To retrieve masked secrets, call the ListApplicationClientSecrets operation.
 *
 * @param request ObtainApplicationClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ObtainApplicationClientSecretResponse
 */
ObtainApplicationClientSecretResponse Client::obtainApplicationClientSecretWithOptions(const ObtainApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.getSecretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ObtainApplicationClientSecret"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ObtainApplicationClientSecretResponse>();
}

/**
 * @summary Retrieves the client secret of an EIAM application. The returned secret is not masked. To retrieve masked secrets, call the ListApplicationClientSecrets operation.
 *
 * @param request ObtainApplicationClientSecretRequest
 * @return ObtainApplicationClientSecretResponse
 */
ObtainApplicationClientSecretResponse Client::obtainApplicationClientSecret(const ObtainApplicationClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return obtainApplicationClientSecretWithOptions(request, runtime);
}

/**
 * @summary Queries a specified application token.
 *
 * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that may result from this operation.
 *
 * @param request ObtainApplicationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ObtainApplicationTokenResponse
 */
ObtainApplicationTokenResponse Client::obtainApplicationTokenWithOptions(const ObtainApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationTokenId()) {
    query["ApplicationTokenId"] = request.getApplicationTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ObtainApplicationToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ObtainApplicationTokenResponse>();
}

/**
 * @summary Queries a specified application token.
 *
 * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that may result from this operation.
 *
 * @param request ObtainApplicationTokenRequest
 * @return ObtainApplicationTokenResponse
 */
ObtainApplicationTokenResponse Client::obtainApplicationToken(const ObtainApplicationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return obtainApplicationTokenWithOptions(request, runtime);
}

/**
 * @summary Queries a credential resource that contains sensitive information.
 *
 * @param request ObtainCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ObtainCredentialResponse
 */
ObtainCredentialResponse Client::obtainCredentialWithOptions(const ObtainCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialId()) {
    query["CredentialId"] = request.getCredentialId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ObtainCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ObtainCredentialResponse>();
}

/**
 * @summary Queries a credential resource that contains sensitive information.
 *
 * @param request ObtainCredentialRequest
 * @return ObtainCredentialResponse
 */
ObtainCredentialResponse Client::obtainCredential(const ObtainCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return obtainCredentialWithOptions(request, runtime);
}

/**
 * @summary Queries the proxy token of an EIAM instance domain name.
 *
 * @param request ObtainDomainProxyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ObtainDomainProxyTokenResponse
 */
ObtainDomainProxyTokenResponse Client::obtainDomainProxyTokenWithOptions(const ObtainDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasDomainProxyTokenId()) {
    query["DomainProxyTokenId"] = request.getDomainProxyTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ObtainDomainProxyToken"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ObtainDomainProxyTokenResponse>();
}

/**
 * @summary Queries the proxy token of an EIAM instance domain name.
 *
 * @param request ObtainDomainProxyTokenRequest
 * @return ObtainDomainProxyTokenResponse
 */
ObtainDomainProxyTokenResponse Client::obtainDomainProxyToken(const ObtainDomainProxyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return obtainDomainProxyTokenWithOptions(request, runtime);
}

/**
 * @summary Deletes an application account of a specified employee under the current application.
 *
 * @description This operation only queries the direct permissions of the organization, that is, applications directly assigned to the organization. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
 *
 * @param request RemoveApplicationAccountFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveApplicationAccountFromUserResponse
 */
RemoveApplicationAccountFromUserResponse Client::removeApplicationAccountFromUserWithOptions(const RemoveApplicationAccountFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationAccountId()) {
    query["ApplicationAccountId"] = request.getApplicationAccountId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveApplicationAccountFromUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveApplicationAccountFromUserResponse>();
}

/**
 * @summary Deletes an application account of a specified employee under the current application.
 *
 * @description This operation only queries the direct permissions of the organization, that is, applications directly assigned to the organization. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
 *
 * @param request RemoveApplicationAccountFromUserRequest
 * @return RemoveApplicationAccountFromUserResponse
 */
RemoveApplicationAccountFromUserResponse Client::removeApplicationAccountFromUser(const RemoveApplicationAccountFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeApplicationAccountFromUserWithOptions(request, runtime);
}

/**
 * @summary Removes an application from an authorization rule.
 *
 * @param request RemoveApplicationFromAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveApplicationFromAuthorizationRuleResponse
 */
RemoveApplicationFromAuthorizationRuleResponse Client::removeApplicationFromAuthorizationRuleWithOptions(const RemoveApplicationFromAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveApplicationFromAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveApplicationFromAuthorizationRuleResponse>();
}

/**
 * @summary Removes an application from an authorization rule.
 *
 * @param request RemoveApplicationFromAuthorizationRuleRequest
 * @return RemoveApplicationFromAuthorizationRuleResponse
 */
RemoveApplicationFromAuthorizationRuleResponse Client::removeApplicationFromAuthorizationRule(const RemoveApplicationFromAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeApplicationFromAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Removes custom terms associated with a brand.
 *
 * @param request RemoveCustomPrivacyPoliciesFromBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveCustomPrivacyPoliciesFromBrandResponse
 */
RemoveCustomPrivacyPoliciesFromBrandResponse Client::removeCustomPrivacyPoliciesFromBrandWithOptions(const RemoveCustomPrivacyPoliciesFromBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasCustomPrivacyPolicyIds()) {
    query["CustomPrivacyPolicyIds"] = request.getCustomPrivacyPolicyIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveCustomPrivacyPoliciesFromBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveCustomPrivacyPoliciesFromBrandResponse>();
}

/**
 * @summary Removes custom terms associated with a brand.
 *
 * @param request RemoveCustomPrivacyPoliciesFromBrandRequest
 * @return RemoveCustomPrivacyPoliciesFromBrandResponse
 */
RemoveCustomPrivacyPoliciesFromBrandResponse Client::removeCustomPrivacyPoliciesFromBrand(const RemoveCustomPrivacyPoliciesFromBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeCustomPrivacyPoliciesFromBrandWithOptions(request, runtime);
}

/**
 * @summary Removes an application from an authorization rule.
 *
 * @param request RemoveGroupFromAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveGroupFromAuthorizationRuleResponse
 */
RemoveGroupFromAuthorizationRuleResponse Client::removeGroupFromAuthorizationRuleWithOptions(const RemoveGroupFromAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveGroupFromAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveGroupFromAuthorizationRuleResponse>();
}

/**
 * @summary Removes an application from an authorization rule.
 *
 * @param request RemoveGroupFromAuthorizationRuleRequest
 * @return RemoveGroupFromAuthorizationRuleResponse
 */
RemoveGroupFromAuthorizationRuleResponse Client::removeGroupFromAuthorizationRule(const RemoveGroupFromAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeGroupFromAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Removes an account from an authorization rule.
 *
 * @param request RemoveUserFromAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserFromAuthorizationRuleResponse
 */
RemoveUserFromAuthorizationRuleResponse Client::removeUserFromAuthorizationRuleWithOptions(const RemoveUserFromAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUserFromAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserFromAuthorizationRuleResponse>();
}

/**
 * @summary Removes an account from an authorization rule.
 *
 * @param request RemoveUserFromAuthorizationRuleRequest
 * @return RemoveUserFromAuthorizationRuleResponse
 */
RemoveUserFromAuthorizationRuleResponse Client::removeUserFromAuthorizationRule(const RemoveUserFromAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserFromAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Removes an Employee Identity and Access Management (EIAM) account from multiple EIAM organizations of Identity as a Service (IDaaS). You cannot remove an account from a primary organization.
 *
 * @param request RemoveUserFromOrganizationalUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserFromOrganizationalUnitsResponse
 */
RemoveUserFromOrganizationalUnitsResponse Client::removeUserFromOrganizationalUnitsWithOptions(const RemoveUserFromOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.getOrganizationalUnitIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUserFromOrganizationalUnits"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserFromOrganizationalUnitsResponse>();
}

/**
 * @summary Removes an Employee Identity and Access Management (EIAM) account from multiple EIAM organizations of Identity as a Service (IDaaS). You cannot remove an account from a primary organization.
 *
 * @param request RemoveUserFromOrganizationalUnitsRequest
 * @return RemoveUserFromOrganizationalUnitsResponse
 */
RemoveUserFromOrganizationalUnitsResponse Client::removeUserFromOrganizationalUnits(const RemoveUserFromOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserFromOrganizationalUnitsWithOptions(request, runtime);
}

/**
 * @summary Removes Employee Identity and Access Management (EIAM) accounts from an EIAM group of Identity as a Service (IDaaS).
 *
 * @param request RemoveUsersFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersFromGroupResponse
 */
RemoveUsersFromGroupResponse Client::removeUsersFromGroupWithOptions(const RemoveUsersFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUsersFromGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUsersFromGroupResponse>();
}

/**
 * @summary Removes Employee Identity and Access Management (EIAM) accounts from an EIAM group of Identity as a Service (IDaaS).
 *
 * @param request RemoveUsersFromGroupRequest
 * @return RemoveUsersFromGroupResponse
 */
RemoveUsersFromGroupResponse Client::removeUsersFromGroup(const RemoveUsersFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersFromGroupWithOptions(request, runtime);
}

/**
 * @summary Renews a Free Edition instance.
 *
 * @param request RenewFreeLicenseEndTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewFreeLicenseEndTimeResponse
 */
RenewFreeLicenseEndTimeResponse Client::renewFreeLicenseEndTimeWithOptions(const RenewFreeLicenseEndTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewFreeLicenseEndTime"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewFreeLicenseEndTimeResponse>();
}

/**
 * @summary Renews a Free Edition instance.
 *
 * @param request RenewFreeLicenseEndTimeRequest
 * @return RenewFreeLicenseEndTimeResponse
 */
RenewFreeLicenseEndTimeResponse Client::renewFreeLicenseEndTime(const RenewFreeLicenseEndTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewFreeLicenseEndTimeWithOptions(request, runtime);
}

/**
 * @summary Revokes the permissions of multiple Employee Identity and Access Management (EIAM) groups to access an application in a batch.
 *
 * @param request RevokeApplicationFromGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeApplicationFromGroupsResponse
 */
RevokeApplicationFromGroupsResponse Client::revokeApplicationFromGroupsWithOptions(const RevokeApplicationFromGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeApplicationFromGroups"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeApplicationFromGroupsResponse>();
}

/**
 * @summary Revokes the permissions of multiple Employee Identity and Access Management (EIAM) groups to access an application in a batch.
 *
 * @param request RevokeApplicationFromGroupsRequest
 * @return RevokeApplicationFromGroupsResponse
 */
RevokeApplicationFromGroupsResponse Client::revokeApplicationFromGroups(const RevokeApplicationFromGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeApplicationFromGroupsWithOptions(request, runtime);
}

/**
 * @summary Revokes application access from multiple EIAM organizations in a batch operation.
 *
 * @param request RevokeApplicationFromOrganizationalUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeApplicationFromOrganizationalUnitsResponse
 */
RevokeApplicationFromOrganizationalUnitsResponse Client::revokeApplicationFromOrganizationalUnitsWithOptions(const RevokeApplicationFromOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.getOrganizationalUnitIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeApplicationFromOrganizationalUnits"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeApplicationFromOrganizationalUnitsResponse>();
}

/**
 * @summary Revokes application access from multiple EIAM organizations in a batch operation.
 *
 * @param request RevokeApplicationFromOrganizationalUnitsRequest
 * @return RevokeApplicationFromOrganizationalUnitsResponse
 */
RevokeApplicationFromOrganizationalUnitsResponse Client::revokeApplicationFromOrganizationalUnits(const RevokeApplicationFromOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeApplicationFromOrganizationalUnitsWithOptions(request, runtime);
}

/**
 * @summary Revokes the permissions of multiple Enterprise Identity Access Management (EIAM) accounts to access an application in a batch.
 *
 * @param request RevokeApplicationFromUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeApplicationFromUsersResponse
 */
RevokeApplicationFromUsersResponse Client::revokeApplicationFromUsersWithOptions(const RevokeApplicationFromUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeApplicationFromUsers"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeApplicationFromUsersResponse>();
}

/**
 * @summary Revokes the permissions of multiple Enterprise Identity Access Management (EIAM) accounts to access an application in a batch.
 *
 * @param request RevokeApplicationFromUsersRequest
 * @return RevokeApplicationFromUsersResponse
 */
RevokeApplicationFromUsersResponse Client::revokeApplicationFromUsers(const RevokeApplicationFromUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeApplicationFromUsersWithOptions(request, runtime);
}

/**
 * @summary Cancels the authorization granted by a specified ResourceServer to a Client application.
 *
 * @param request RevokeResourceServerFromClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeResourceServerFromClientResponse
 */
RevokeResourceServerFromClientResponse Client::revokeResourceServerFromClientWithOptions(const RevokeResourceServerFromClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientApplicationId()) {
    query["ClientApplicationId"] = request.getClientApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerApplicationId()) {
    query["ResourceServerApplicationId"] = request.getResourceServerApplicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeResourceServerFromClient"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeResourceServerFromClientResponse>();
}

/**
 * @summary Cancels the authorization granted by a specified ResourceServer to a Client application.
 *
 * @param request RevokeResourceServerFromClientRequest
 * @return RevokeResourceServerFromClientResponse
 */
RevokeResourceServerFromClientResponse Client::revokeResourceServerFromClient(const RevokeResourceServerFromClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeResourceServerFromClientWithOptions(request, runtime);
}

/**
 * @summary Revokes the scope permissions of a specified ResourceServer from a client application.
 *
 * @param request RevokeResourceServerScopesFromClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeResourceServerScopesFromClientResponse
 */
RevokeResourceServerScopesFromClientResponse Client::revokeResourceServerScopesFromClientWithOptions(const RevokeResourceServerScopesFromClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientApplicationId()) {
    query["ClientApplicationId"] = request.getClientApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerApplicationId()) {
    query["ResourceServerApplicationId"] = request.getResourceServerApplicationId();
  }

  if (!!request.hasResourceServerScopeIds()) {
    query["ResourceServerScopeIds"] = request.getResourceServerScopeIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeResourceServerScopesFromClient"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeResourceServerScopesFromClientResponse>();
}

/**
 * @summary Revokes the scope permissions of a specified ResourceServer from a client application.
 *
 * @param request RevokeResourceServerScopesFromClientRequest
 * @return RevokeResourceServerScopesFromClientResponse
 */
RevokeResourceServerScopesFromClientResponse Client::revokeResourceServerScopesFromClient(const RevokeResourceServerScopesFromClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeResourceServerScopesFromClientWithOptions(request, runtime);
}

/**
 * @summary Revokes the authorization of Scope permissions under a specified ResourceServer from a group.
 *
 * @param request RevokeResourceServerScopesFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeResourceServerScopesFromGroupResponse
 */
RevokeResourceServerScopesFromGroupResponse Client::revokeResourceServerScopesFromGroupWithOptions(const RevokeResourceServerScopesFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerScopeIds()) {
    query["ResourceServerScopeIds"] = request.getResourceServerScopeIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeResourceServerScopesFromGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeResourceServerScopesFromGroupResponse>();
}

/**
 * @summary Revokes the authorization of Scope permissions under a specified ResourceServer from a group.
 *
 * @param request RevokeResourceServerScopesFromGroupRequest
 * @return RevokeResourceServerScopesFromGroupResponse
 */
RevokeResourceServerScopesFromGroupResponse Client::revokeResourceServerScopesFromGroup(const RevokeResourceServerScopesFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeResourceServerScopesFromGroupWithOptions(request, runtime);
}

/**
 * @summary Revokes the authorization of Scope permissions under a specified ResourceServer from an organizational unit.
 *
 * @param request RevokeResourceServerScopesFromOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeResourceServerScopesFromOrganizationalUnitResponse
 */
RevokeResourceServerScopesFromOrganizationalUnitResponse Client::revokeResourceServerScopesFromOrganizationalUnitWithOptions(const RevokeResourceServerScopesFromOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  if (!!request.hasResourceServerScopeIds()) {
    query["ResourceServerScopeIds"] = request.getResourceServerScopeIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeResourceServerScopesFromOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeResourceServerScopesFromOrganizationalUnitResponse>();
}

/**
 * @summary Revokes the authorization of Scope permissions under a specified ResourceServer from an organizational unit.
 *
 * @param request RevokeResourceServerScopesFromOrganizationalUnitRequest
 * @return RevokeResourceServerScopesFromOrganizationalUnitResponse
 */
RevokeResourceServerScopesFromOrganizationalUnitResponse Client::revokeResourceServerScopesFromOrganizationalUnit(const RevokeResourceServerScopesFromOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeResourceServerScopesFromOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Revokes the Scope permissions under a specified ResourceServer from an account.
 *
 * @param request RevokeResourceServerScopesFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeResourceServerScopesFromUserResponse
 */
RevokeResourceServerScopesFromUserResponse Client::revokeResourceServerScopesFromUserWithOptions(const RevokeResourceServerScopesFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerScopeIds()) {
    query["ResourceServerScopeIds"] = request.getResourceServerScopeIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeResourceServerScopesFromUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeResourceServerScopesFromUserResponse>();
}

/**
 * @summary Revokes the Scope permissions under a specified ResourceServer from an account.
 *
 * @param request RevokeResourceServerScopesFromUserRequest
 * @return RevokeResourceServerScopesFromUserResponse
 */
RevokeResourceServerScopesFromUserResponse Client::revokeResourceServerScopesFromUser(const RevokeResourceServerScopesFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeResourceServerScopesFromUserWithOptions(request, runtime);
}

/**
 * @summary Creates and immediately runs a new synchronization task.
 *
 * @param request RunSynchronizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSynchronizationJobResponse
 */
RunSynchronizationJobResponse Client::runSynchronizationJobWithOptions(const RunSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPasswordInitialization()) {
    query["PasswordInitialization"] = request.getPasswordInitialization();
  }

  if (!!request.hasSynchronizationScopeConfig()) {
    query["SynchronizationScopeConfig"] = request.getSynchronizationScopeConfig();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  if (!!request.hasUserIdentityTypes()) {
    query["UserIdentityTypes"] = request.getUserIdentityTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunSynchronizationJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunSynchronizationJobResponse>();
}

/**
 * @summary Creates and immediately runs a new synchronization task.
 *
 * @param request RunSynchronizationJobRequest
 * @return RunSynchronizationJobResponse
 */
RunSynchronizationJobResponse Client::runSynchronizationJob(const RunSynchronizationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runSynchronizationJobWithOptions(request, runtime);
}

/**
 * @summary Configures the permissions of the Developer API feature of an Employee Identity and Access Management (EIAM) application.
 *
 * @param request SetApplicationGrantScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApplicationGrantScopeResponse
 */
SetApplicationGrantScopeResponse Client::setApplicationGrantScopeWithOptions(const SetApplicationGrantScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasGrantScopes()) {
    query["GrantScopes"] = request.getGrantScopes();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetApplicationGrantScope"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetApplicationGrantScopeResponse>();
}

/**
 * @summary Configures the permissions of the Developer API feature of an Employee Identity and Access Management (EIAM) application.
 *
 * @param request SetApplicationGrantScopeRequest
 * @return SetApplicationGrantScopeResponse
 */
SetApplicationGrantScopeResponse Client::setApplicationGrantScope(const SetApplicationGrantScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApplicationGrantScopeWithOptions(request, runtime);
}

/**
 * @summary Sets the account synchronization configuration for an EIAM application.
 *
 * @param request SetApplicationProvisioningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApplicationProvisioningConfigResponse
 */
SetApplicationProvisioningConfigResponse Client::setApplicationProvisioningConfigWithOptions(const SetApplicationProvisioningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasCallbackProvisioningConfig()) {
    query["CallbackProvisioningConfig"] = request.getCallbackProvisioningConfig();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  if (!!request.hasProvisionPassword()) {
    query["ProvisionPassword"] = request.getProvisionPassword();
  }

  if (!!request.hasProvisionProtocolType()) {
    query["ProvisionProtocolType"] = request.getProvisionProtocolType();
  }

  if (!!request.hasScimProvisioningConfig()) {
    query["ScimProvisioningConfig"] = request.getScimProvisioningConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetApplicationProvisioningConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetApplicationProvisioningConfigResponse>();
}

/**
 * @summary Sets the account synchronization configuration for an EIAM application.
 *
 * @param request SetApplicationProvisioningConfigRequest
 * @return SetApplicationProvisioningConfigResponse
 */
SetApplicationProvisioningConfigResponse Client::setApplicationProvisioningConfig(const SetApplicationProvisioningConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApplicationProvisioningConfigWithOptions(request, runtime);
}

/**
 * @summary Sets the account synchronization scope of applications in Identity as a Service (IDaaS) Employee IAM (EIAM). This scope is the same as the scope within which developers can call the DeveloperAPI to query and manage accounts.
 *
 * @param request SetApplicationProvisioningScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApplicationProvisioningScopeResponse
 */
SetApplicationProvisioningScopeResponse Client::setApplicationProvisioningScopeWithOptions(const SetApplicationProvisioningScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.getOrganizationalUnitIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetApplicationProvisioningScope"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetApplicationProvisioningScopeResponse>();
}

/**
 * @summary Sets the account synchronization scope of applications in Identity as a Service (IDaaS) Employee IAM (EIAM). This scope is the same as the scope within which developers can call the DeveloperAPI to query and manage accounts.
 *
 * @param request SetApplicationProvisioningScopeRequest
 * @return SetApplicationProvisioningScopeResponse
 */
SetApplicationProvisioningScopeResponse Client::setApplicationProvisioningScope(const SetApplicationProvisioningScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApplicationProvisioningScopeWithOptions(request, runtime);
}

/**
 * @summary Sets the primary organizational unit for an application\\"s user provisioning.
 *
 * @param request SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
 */
SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse Client::setApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(const SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserPrimaryOrganizationalUnitId()) {
    query["UserPrimaryOrganizationalUnitId"] = request.getUserPrimaryOrganizationalUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetApplicationProvisioningUserPrimaryOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse>();
}

/**
 * @summary Sets the primary organizational unit for an application\\"s user provisioning.
 *
 * @param request SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
 * @return SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
 */
SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse Client::setApplicationProvisioningUserPrimaryOrganizationalUnit(const SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Sets the unique identifier for a resource server. This identifier is used as the aud (audience) claim in a JSON Web Token (JWT) to specify the service that is intended to accept the token.
 *
 * @param request SetApplicationResourceServerIdentifierRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApplicationResourceServerIdentifierResponse
 */
SetApplicationResourceServerIdentifierResponse Client::setApplicationResourceServerIdentifierWithOptions(const SetApplicationResourceServerIdentifierRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerIdentifier()) {
    query["ResourceServerIdentifier"] = request.getResourceServerIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetApplicationResourceServerIdentifier"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetApplicationResourceServerIdentifierResponse>();
}

/**
 * @summary Sets the unique identifier for a resource server. This identifier is used as the aud (audience) claim in a JSON Web Token (JWT) to specify the service that is intended to accept the token.
 *
 * @param request SetApplicationResourceServerIdentifierRequest
 * @return SetApplicationResourceServerIdentifierResponse
 */
SetApplicationResourceServerIdentifierResponse Client::setApplicationResourceServerIdentifier(const SetApplicationResourceServerIdentifierRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApplicationResourceServerIdentifierWithOptions(request, runtime);
}

/**
 * @summary Sets the single sign-on (SSO) configuration properties for an EIAM application.
 *
 * @description In EIAM, application management supports adding applications that use multiple single sign-on (SSO) protocols (SAML 2.0 and OIDC). However, each application supports only one SSO protocol, which is specified during creation and cannot be changed. Specify the corresponding SSO configuration property parameters based on the SSO protocol type supported by the application.
 *
 * @param request SetApplicationSsoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApplicationSsoConfigResponse
 */
SetApplicationSsoConfigResponse Client::setApplicationSsoConfigWithOptions(const SetApplicationSsoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInitLoginType()) {
    query["InitLoginType"] = request.getInitLoginType();
  }

  if (!!request.hasInitLoginUrl()) {
    query["InitLoginUrl"] = request.getInitLoginUrl();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOidcSsoConfig()) {
    query["OidcSsoConfig"] = request.getOidcSsoConfig();
  }

  if (!!request.hasSamlSsoConfig()) {
    query["SamlSsoConfig"] = request.getSamlSsoConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetApplicationSsoConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetApplicationSsoConfigResponse>();
}

/**
 * @summary Sets the single sign-on (SSO) configuration properties for an EIAM application.
 *
 * @description In EIAM, application management supports adding applications that use multiple single sign-on (SSO) protocols (SAML 2.0 and OIDC). However, each application supports only one SSO protocol, which is specified during creation and cannot be changed. Specify the corresponding SSO configuration property parameters based on the SSO protocol type supported by the application.
 *
 * @param request SetApplicationSsoConfigRequest
 * @return SetApplicationSsoConfigResponse
 */
SetApplicationSsoConfigResponse Client::setApplicationSsoConfig(const SetApplicationSsoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApplicationSsoConfigWithOptions(request, runtime);
}

/**
 * @summary Sets a specified domain name of an EIAM instance as the default domain name.
 *
 * @param request SetDefaultDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultDomainResponse
 */
SetDefaultDomainResponse Client::setDefaultDomainWithOptions(const SetDefaultDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDefaultDomain"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultDomainResponse>();
}

/**
 * @summary Sets a specified domain name of an EIAM instance as the default domain name.
 *
 * @param request SetDefaultDomainRequest
 * @return SetDefaultDomainResponse
 */
SetDefaultDomainResponse Client::setDefaultDomain(const SetDefaultDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultDomainWithOptions(request, runtime);
}

/**
 * @summary Sets the forgot password policy for an EIAM instance.
 *
 * @param request SetForgetPasswordConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetForgetPasswordConfigurationResponse
 */
SetForgetPasswordConfigurationResponse Client::setForgetPasswordConfigurationWithOptions(const SetForgetPasswordConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationChannels()) {
    query["AuthenticationChannels"] = request.getAuthenticationChannels();
  }

  if (!!request.hasForgetPasswordStatus()) {
    query["ForgetPasswordStatus"] = request.getForgetPasswordStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetForgetPasswordConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetForgetPasswordConfigurationResponse>();
}

/**
 * @summary Sets the forgot password policy for an EIAM instance.
 *
 * @param request SetForgetPasswordConfigurationRequest
 * @return SetForgetPasswordConfigurationResponse
 */
SetForgetPasswordConfigurationResponse Client::setForgetPasswordConfiguration(const SetForgetPasswordConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setForgetPasswordConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modify Authentication Information
 *
 * @param request SetIdentityProviderAuthnConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetIdentityProviderAuthnConfigurationResponse
 */
SetIdentityProviderAuthnConfigurationResponse Client::setIdentityProviderAuthnConfigurationWithOptions(const SetIdentityProviderAuthnConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoCreateUserConfig()) {
    query["AutoCreateUserConfig"] = request.getAutoCreateUserConfig();
  }

  if (!!request.hasAutoUpdateUserConfig()) {
    query["AutoUpdateUserConfig"] = request.getAutoUpdateUserConfig();
  }

  if (!!request.hasBindingConfig()) {
    query["BindingConfig"] = request.getBindingConfig();
  }

  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLdapAuthnConfig()) {
    query["LdapAuthnConfig"] = request.getLdapAuthnConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetIdentityProviderAuthnConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetIdentityProviderAuthnConfigurationResponse>();
}

/**
 * @summary Modify Authentication Information
 *
 * @param request SetIdentityProviderAuthnConfigurationRequest
 * @return SetIdentityProviderAuthnConfigurationResponse
 */
SetIdentityProviderAuthnConfigurationResponse Client::setIdentityProviderAuthnConfiguration(const SetIdentityProviderAuthnConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setIdentityProviderAuthnConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the inbound synchronization configuration of an Identity Provider (IdP).
 *
 * @param request SetIdentityProviderUdPullConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetIdentityProviderUdPullConfigurationResponse
 */
SetIdentityProviderUdPullConfigurationResponse Client::setIdentityProviderUdPullConfigurationWithOptions(const SetIdentityProviderUdPullConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupSyncStatus()) {
    query["GroupSyncStatus"] = request.getGroupSyncStatus();
  }

  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasIncrementalCallbackStatus()) {
    query["IncrementalCallbackStatus"] = request.getIncrementalCallbackStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLdapUdPullConfig()) {
    query["LdapUdPullConfig"] = request.getLdapUdPullConfig();
  }

  if (!!request.hasPeriodicSyncConfig()) {
    query["PeriodicSyncConfig"] = request.getPeriodicSyncConfig();
  }

  if (!!request.hasPeriodicSyncStatus()) {
    query["PeriodicSyncStatus"] = request.getPeriodicSyncStatus();
  }

  if (!!request.hasPullProtectedRule()) {
    query["PullProtectedRule"] = request.getPullProtectedRule();
  }

  if (!!request.hasUdSyncScopeConfig()) {
    query["UdSyncScopeConfig"] = request.getUdSyncScopeConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetIdentityProviderUdPullConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetIdentityProviderUdPullConfigurationResponse>();
}

/**
 * @summary Modifies the inbound synchronization configuration of an Identity Provider (IdP).
 *
 * @param request SetIdentityProviderUdPullConfigurationRequest
 * @return SetIdentityProviderUdPullConfigurationResponse
 */
SetIdentityProviderUdPullConfigurationResponse Client::setIdentityProviderUdPullConfiguration(const SetIdentityProviderUdPullConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setIdentityProviderUdPullConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the push configuration for an identity provider (IdP).
 *
 * @param request SetIdentityProviderUdPushConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetIdentityProviderUdPushConfigurationResponse
 */
SetIdentityProviderUdPushConfigurationResponse Client::setIdentityProviderUdPushConfigurationWithOptions(const SetIdentityProviderUdPushConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasIncrementalCallbackStatus()) {
    query["IncrementalCallbackStatus"] = request.getIncrementalCallbackStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLdapUdPushConfig()) {
    query["LdapUdPushConfig"] = request.getLdapUdPushConfig();
  }

  if (!!request.hasPeriodicSyncConfig()) {
    query["PeriodicSyncConfig"] = request.getPeriodicSyncConfig();
  }

  if (!!request.hasPeriodicSyncStatus()) {
    query["PeriodicSyncStatus"] = request.getPeriodicSyncStatus();
  }

  if (!!request.hasUdSyncScopeConfigs()) {
    query["UdSyncScopeConfigs"] = request.getUdSyncScopeConfigs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetIdentityProviderUdPushConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetIdentityProviderUdPushConfigurationResponse>();
}

/**
 * @summary Modifies the push configuration for an identity provider (IdP).
 *
 * @param request SetIdentityProviderUdPushConfigurationRequest
 * @return SetIdentityProviderUdPushConfigurationResponse
 */
SetIdentityProviderUdPushConfigurationResponse Client::setIdentityProviderUdPushConfiguration(const SetIdentityProviderUdPushConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setIdentityProviderUdPushConfigurationWithOptions(request, runtime);
}

/**
 * @summary Sets the control elements of an instance.
 *
 * @param request SetInstanceControlConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetInstanceControlConfigurationResponse
 */
SetInstanceControlConfigurationResponse Client::setInstanceControlConfigurationWithOptions(const SetInstanceControlConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasControlElements()) {
    query["ControlElements"] = request.getControlElements();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetInstanceControlConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetInstanceControlConfigurationResponse>();
}

/**
 * @summary Sets the control elements of an instance.
 *
 * @param request SetInstanceControlConfigurationRequest
 * @return SetInstanceControlConfigurationResponse
 */
SetInstanceControlConfigurationResponse Client::setInstanceControlConfiguration(const SetInstanceControlConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setInstanceControlConfigurationWithOptions(request, runtime);
}

/**
 * @summary Sets the language and time zone information for an instance.
 *
 * @param request SetInstanceGlobalizationConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetInstanceGlobalizationConfigResponse
 */
SetInstanceGlobalizationConfigResponse Client::setInstanceGlobalizationConfigWithOptions(const SetInstanceGlobalizationConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasTimeZone()) {
    query["TimeZone"] = request.getTimeZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetInstanceGlobalizationConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetInstanceGlobalizationConfigResponse>();
}

/**
 * @summary Sets the language and time zone information for an instance.
 *
 * @param request SetInstanceGlobalizationConfigRequest
 * @return SetInstanceGlobalizationConfigResponse
 */
SetInstanceGlobalizationConfigResponse Client::setInstanceGlobalizationConfig(const SetInstanceGlobalizationConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setInstanceGlobalizationConfigWithOptions(request, runtime);
}

/**
 * @summary Set login redirect application for brand
 *
 * @param request SetLoginRedirectApplicationForBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoginRedirectApplicationForBrandResponse
 */
SetLoginRedirectApplicationForBrandResponse Client::setLoginRedirectApplicationForBrandWithOptions(const SetLoginRedirectApplicationForBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoginRedirectApplicationForBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoginRedirectApplicationForBrandResponse>();
}

/**
 * @summary Set login redirect application for brand
 *
 * @param request SetLoginRedirectApplicationForBrandRequest
 * @return SetLoginRedirectApplicationForBrandResponse
 */
SetLoginRedirectApplicationForBrandResponse Client::setLoginRedirectApplicationForBrand(const SetLoginRedirectApplicationForBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoginRedirectApplicationForBrandWithOptions(request, runtime);
}

/**
 * @summary Sets the password complexity policy for a specified EIAM instance.
 *
 * @param request SetPasswordComplexityConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordComplexityConfigurationResponse
 */
SetPasswordComplexityConfigurationResponse Client::setPasswordComplexityConfigurationWithOptions(const SetPasswordComplexityConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisabledWeakPasswordLogin()) {
    query["DisabledWeakPasswordLogin"] = request.getDisabledWeakPasswordLogin();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPasswordComplexityRules()) {
    query["PasswordComplexityRules"] = request.getPasswordComplexityRules();
  }

  if (!!request.hasPasswordMinLength()) {
    query["PasswordMinLength"] = request.getPasswordMinLength();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPasswordComplexityConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPasswordComplexityConfigurationResponse>();
}

/**
 * @summary Sets the password complexity policy for a specified EIAM instance.
 *
 * @param request SetPasswordComplexityConfigurationRequest
 * @return SetPasswordComplexityConfigurationResponse
 */
SetPasswordComplexityConfigurationResponse Client::setPasswordComplexityConfiguration(const SetPasswordComplexityConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordComplexityConfigurationWithOptions(request, runtime);
}

/**
 * @summary Sets the password expiration policy for a specified Enterprise Identity and Access Management (EIAM) instance.
 *
 * @param request SetPasswordExpirationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordExpirationConfigurationResponse
 */
SetPasswordExpirationConfigurationResponse Client::setPasswordExpirationConfigurationWithOptions(const SetPasswordExpirationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveAuthenticationSourceIds()) {
    query["EffectiveAuthenticationSourceIds"] = request.getEffectiveAuthenticationSourceIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPasswordExpirationAction()) {
    query["PasswordExpirationAction"] = request.getPasswordExpirationAction();
  }

  if (!!request.hasPasswordExpirationNotificationChannels()) {
    query["PasswordExpirationNotificationChannels"] = request.getPasswordExpirationNotificationChannels();
  }

  if (!!request.hasPasswordExpirationNotificationDuration()) {
    query["PasswordExpirationNotificationDuration"] = request.getPasswordExpirationNotificationDuration();
  }

  if (!!request.hasPasswordExpirationNotificationStatus()) {
    query["PasswordExpirationNotificationStatus"] = request.getPasswordExpirationNotificationStatus();
  }

  if (!!request.hasPasswordExpirationStatus()) {
    query["PasswordExpirationStatus"] = request.getPasswordExpirationStatus();
  }

  if (!!request.hasPasswordForcedUpdateDuration()) {
    query["PasswordForcedUpdateDuration"] = request.getPasswordForcedUpdateDuration();
  }

  if (!!request.hasPasswordValidMaxDay()) {
    query["PasswordValidMaxDay"] = request.getPasswordValidMaxDay();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPasswordExpirationConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPasswordExpirationConfigurationResponse>();
}

/**
 * @summary Sets the password expiration policy for a specified Enterprise Identity and Access Management (EIAM) instance.
 *
 * @param request SetPasswordExpirationConfigurationRequest
 * @return SetPasswordExpirationConfigurationResponse
 */
SetPasswordExpirationConfigurationResponse Client::setPasswordExpirationConfiguration(const SetPasswordExpirationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordExpirationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Sets the password history policy for a specified Enterprise Identity and Access Management (EIAM) instance.
 *
 * @param request SetPasswordHistoryConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordHistoryConfigurationResponse
 */
SetPasswordHistoryConfigurationResponse Client::setPasswordHistoryConfigurationWithOptions(const SetPasswordHistoryConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPasswordHistoryMaxRetention()) {
    query["PasswordHistoryMaxRetention"] = request.getPasswordHistoryMaxRetention();
  }

  if (!!request.hasPasswordHistoryStatus()) {
    query["PasswordHistoryStatus"] = request.getPasswordHistoryStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPasswordHistoryConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPasswordHistoryConfigurationResponse>();
}

/**
 * @summary Sets the password history policy for a specified Enterprise Identity and Access Management (EIAM) instance.
 *
 * @param request SetPasswordHistoryConfigurationRequest
 * @return SetPasswordHistoryConfigurationResponse
 */
SetPasswordHistoryConfigurationResponse Client::setPasswordHistoryConfiguration(const SetPasswordHistoryConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordHistoryConfigurationWithOptions(request, runtime);
}

/**
 * @summary Sets the password initialization policy for a specified EIAM instance.
 *
 * @param request SetPasswordInitializationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordInitializationConfigurationResponse
 */
SetPasswordInitializationConfigurationResponse Client::setPasswordInitializationConfigurationWithOptions(const SetPasswordInitializationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPasswordForcedUpdateStatus()) {
    query["PasswordForcedUpdateStatus"] = request.getPasswordForcedUpdateStatus();
  }

  if (!!request.hasPasswordInitializationNotificationChannels()) {
    query["PasswordInitializationNotificationChannels"] = request.getPasswordInitializationNotificationChannels();
  }

  if (!!request.hasPasswordInitializationStatus()) {
    query["PasswordInitializationStatus"] = request.getPasswordInitializationStatus();
  }

  if (!!request.hasPasswordInitializationType()) {
    query["PasswordInitializationType"] = request.getPasswordInitializationType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPasswordInitializationConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPasswordInitializationConfigurationResponse>();
}

/**
 * @summary Sets the password initialization policy for a specified EIAM instance.
 *
 * @param request SetPasswordInitializationConfigurationRequest
 * @return SetPasswordInitializationConfigurationResponse
 */
SetPasswordInitializationConfigurationResponse Client::setPasswordInitializationConfiguration(const SetPasswordInitializationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordInitializationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Sets the specified client public key as the primary key for an application.
 *
 * @param request SetPrimaryClientPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPrimaryClientPublicKeyResponse
 */
SetPrimaryClientPublicKeyResponse Client::setPrimaryClientPublicKeyWithOptions(const SetPrimaryClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasClientPublicKeyId()) {
    query["ClientPublicKeyId"] = request.getClientPublicKeyId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPrimaryClientPublicKey"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPrimaryClientPublicKeyResponse>();
}

/**
 * @summary Sets the specified client public key as the primary key for an application.
 *
 * @param request SetPrimaryClientPublicKeyRequest
 * @return SetPrimaryClientPublicKeyResponse
 */
SetPrimaryClientPublicKeyResponse Client::setPrimaryClientPublicKey(const SetPrimaryClientPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPrimaryClientPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Updates the primary organizational unit to which an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account belongs. This account will be removed from the previous primary organizational unit and added to the new primary organization.
 *
 * @param request SetUserPrimaryOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetUserPrimaryOrganizationalUnitResponse
 */
SetUserPrimaryOrganizationalUnitResponse Client::setUserPrimaryOrganizationalUnitWithOptions(const SetUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetUserPrimaryOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetUserPrimaryOrganizationalUnitResponse>();
}

/**
 * @summary Updates the primary organizational unit to which an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account belongs. This account will be removed from the previous primary organizational unit and added to the new primary organization.
 *
 * @param request SetUserPrimaryOrganizationalUnitRequest
 * @return SetUserPrimaryOrganizationalUnitResponse
 */
SetUserPrimaryOrganizationalUnitResponse Client::setUserPrimaryOrganizationalUnit(const SetUserPrimaryOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setUserPrimaryOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Sets the WebAuthn configuration.
 *
 * @param request SetWebAuthnConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWebAuthnConfigurationResponse
 */
SetWebAuthnConfigurationResponse Client::setWebAuthnConfigurationWithOptions(const SetWebAuthnConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAaguids()) {
    query["Aaguids"] = request.getAaguids();
  }

  if (!!request.hasEnableAaguidVerification()) {
    query["EnableAaguidVerification"] = request.getEnableAaguidVerification();
  }

  if (!!request.hasEnableMetadataServiceVerification()) {
    query["EnableMetadataServiceVerification"] = request.getEnableMetadataServiceVerification();
  }

  if (!!request.hasEnableUserSelfRegistration()) {
    query["EnableUserSelfRegistration"] = request.getEnableUserSelfRegistration();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetWebAuthnConfiguration"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetWebAuthnConfigurationResponse>();
}

/**
 * @summary Sets the WebAuthn configuration.
 *
 * @param request SetWebAuthnConfigurationRequest
 * @return SetWebAuthnConfigurationResponse
 */
SetWebAuthnConfigurationResponse Client::setWebAuthnConfiguration(const SetWebAuthnConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setWebAuthnConfigurationWithOptions(request, runtime);
}

/**
 * @summary Detaches the TOTP authenticator for a specified user.
 *
 * @param request UnbindTotpAuthenticatorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindTotpAuthenticatorResponse
 */
UnbindTotpAuthenticatorResponse Client::unbindTotpAuthenticatorWithOptions(const UnbindTotpAuthenticatorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindTotpAuthenticator"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindTotpAuthenticatorResponse>();
}

/**
 * @summary Detaches the TOTP authenticator for a specified user.
 *
 * @param request UnbindTotpAuthenticatorRequest
 * @return UnbindTotpAuthenticatorResponse
 */
UnbindTotpAuthenticatorResponse Client::unbindTotpAuthenticator(const UnbindTotpAuthenticatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindTotpAuthenticatorWithOptions(request, runtime);
}

/**
 * @summary Unbinds a third-party logon account from a user.
 *
 * @param request UnbindUserAuthnSourceMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindUserAuthnSourceMappingResponse
 */
UnbindUserAuthnSourceMappingResponse Client::unbindUserAuthnSourceMappingWithOptions(const UnbindUserAuthnSourceMappingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserExternalId()) {
    query["UserExternalId"] = request.getUserExternalId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindUserAuthnSourceMapping"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindUserAuthnSourceMappingResponse>();
}

/**
 * @summary Unbinds a third-party logon account from a user.
 *
 * @param request UnbindUserAuthnSourceMappingRequest
 * @return UnbindUserAuthnSourceMappingResponse
 */
UnbindUserAuthnSourceMappingResponse Client::unbindUserAuthnSourceMapping(const UnbindUserAuthnSourceMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindUserAuthnSourceMappingWithOptions(request, runtime);
}

/**
 * @summary Unlocks a locked EIAM account.
 *
 * @param request UnlockUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockUserResponse
 */
UnlockUserResponse Client::unlockUserWithOptions(const UnlockUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnlockUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockUserResponse>();
}

/**
 * @summary Unlocks a locked EIAM account.
 *
 * @param request UnlockUserRequest
 * @return UnlockUserResponse
 */
UnlockUserResponse Client::unlockUser(const UnlockUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockUserWithOptions(request, runtime);
}

/**
 * @summary Modifies the advanced configuration of an application.
 *
 * @param request UpdateApplicationAdvancedConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationAdvancedConfigResponse
 */
UpdateApplicationAdvancedConfigResponse Client::updateApplicationAdvancedConfigWithOptions(const UpdateApplicationAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScimServerAdvancedConfig()) {
    query["ScimServerAdvancedConfig"] = request.getScimServerAdvancedConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationAdvancedConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationAdvancedConfigResponse>();
}

/**
 * @summary Modifies the advanced configuration of an application.
 *
 * @param request UpdateApplicationAdvancedConfigRequest
 * @return UpdateApplicationAdvancedConfigResponse
 */
UpdateApplicationAdvancedConfigResponse Client::updateApplicationAdvancedConfig(const UpdateApplicationAdvancedConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationAdvancedConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the authorization type of an Employee Identity and Access Management (EIAM) application.
 *
 * @param request UpdateApplicationAuthorizationTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationAuthorizationTypeResponse
 */
UpdateApplicationAuthorizationTypeResponse Client::updateApplicationAuthorizationTypeWithOptions(const UpdateApplicationAuthorizationTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAuthorizationType()) {
    query["AuthorizationType"] = request.getAuthorizationType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationAuthorizationType"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationAuthorizationTypeResponse>();
}

/**
 * @summary Modifies the authorization type of an Employee Identity and Access Management (EIAM) application.
 *
 * @param request UpdateApplicationAuthorizationTypeRequest
 * @return UpdateApplicationAuthorizationTypeResponse
 */
UpdateApplicationAuthorizationTypeResponse Client::updateApplicationAuthorizationType(const UpdateApplicationAuthorizationTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationAuthorizationTypeWithOptions(request, runtime);
}

/**
 * @summary Updates the expiration time of a specified ClientSecret for an application.
 *
 * @param request UpdateApplicationClientSecretExpirationTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationClientSecretExpirationTimeResponse
 */
UpdateApplicationClientSecretExpirationTimeResponse Client::updateApplicationClientSecretExpirationTimeWithOptions(const UpdateApplicationClientSecretExpirationTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasExpirationTime()) {
    query["ExpirationTime"] = request.getExpirationTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.getSecretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationClientSecretExpirationTime"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationClientSecretExpirationTimeResponse>();
}

/**
 * @summary Updates the expiration time of a specified ClientSecret for an application.
 *
 * @param request UpdateApplicationClientSecretExpirationTimeRequest
 * @return UpdateApplicationClientSecretExpirationTimeResponse
 */
UpdateApplicationClientSecretExpirationTimeResponse Client::updateApplicationClientSecretExpirationTime(const UpdateApplicationClientSecretExpirationTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationClientSecretExpirationTimeWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of an Employee Identity and Access Management (EIAM) application.
 *
 * @param request UpdateApplicationDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationDescriptionResponse
 */
UpdateApplicationDescriptionResponse Client::updateApplicationDescriptionWithOptions(const UpdateApplicationDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationDescriptionResponse>();
}

/**
 * @summary Modifies the description of an Employee Identity and Access Management (EIAM) application.
 *
 * @param request UpdateApplicationDescriptionRequest
 * @return UpdateApplicationDescriptionResponse
 */
UpdateApplicationDescriptionResponse Client::updateApplicationDescription(const UpdateApplicationDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates a federated credential for an application.
 *
 * @param request UpdateApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationFederatedCredentialResponse
 */
UpdateApplicationFederatedCredentialResponse Client::updateApplicationFederatedCredentialWithOptions(const UpdateApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.getApplicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAttributeMappings()) {
    query["AttributeMappings"] = request.getAttributeMappings();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOidcVerificationConfig()) {
    query["OidcVerificationConfig"] = request.getOidcVerificationConfig();
  }

  if (!!request.hasPkcs7VerificationConfig()) {
    query["Pkcs7VerificationConfig"] = request.getPkcs7VerificationConfig();
  }

  if (!!request.hasVerificationCondition()) {
    query["VerificationCondition"] = request.getVerificationCondition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationFederatedCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationFederatedCredentialResponse>();
}

/**
 * @summary Updates a federated credential for an application.
 *
 * @param request UpdateApplicationFederatedCredentialRequest
 * @return UpdateApplicationFederatedCredentialResponse
 */
UpdateApplicationFederatedCredentialResponse Client::updateApplicationFederatedCredential(const UpdateApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary Updates the description of a federated credential for an application.
 *
 * @param request UpdateApplicationFederatedCredentialDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationFederatedCredentialDescriptionResponse
 */
UpdateApplicationFederatedCredentialDescriptionResponse Client::updateApplicationFederatedCredentialDescriptionWithOptions(const UpdateApplicationFederatedCredentialDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.getApplicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationFederatedCredentialDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationFederatedCredentialDescriptionResponse>();
}

/**
 * @summary Updates the description of a federated credential for an application.
 *
 * @param request UpdateApplicationFederatedCredentialDescriptionRequest
 * @return UpdateApplicationFederatedCredentialDescriptionResponse
 */
UpdateApplicationFederatedCredentialDescriptionResponse Client::updateApplicationFederatedCredentialDescription(const UpdateApplicationFederatedCredentialDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationFederatedCredentialDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information of an application.
 *
 * @param request UpdateApplicationInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationInfoResponse
 */
UpdateApplicationInfoResponse Client::updateApplicationInfoWithOptions(const UpdateApplicationInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasApplicationOwner()) {
    query["ApplicationOwner"] = request.getApplicationOwner();
  }

  if (!!request.hasApplicationVisibility()) {
    query["ApplicationVisibility"] = request.getApplicationVisibility();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCustomFields()) {
    query["CustomFields"] = request.getCustomFields();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogoUrl()) {
    query["LogoUrl"] = request.getLogoUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationInfo"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationInfoResponse>();
}

/**
 * @summary Updates the basic information of an application.
 *
 * @param request UpdateApplicationInfoRequest
 * @return UpdateApplicationInfoResponse
 */
UpdateApplicationInfoResponse Client::updateApplicationInfo(const UpdateApplicationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationInfoWithOptions(request, runtime);
}

/**
 * @summary Updates an application role.
 *
 * @param request UpdateApplicationRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationRoleResponse
 */
UpdateApplicationRoleResponse Client::updateApplicationRoleWithOptions(const UpdateApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasApplicationRoleName()) {
    query["ApplicationRoleName"] = request.getApplicationRoleName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationRole"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationRoleResponse>();
}

/**
 * @summary Updates an application role.
 *
 * @param request UpdateApplicationRoleRequest
 * @return UpdateApplicationRoleResponse
 */
UpdateApplicationRoleResponse Client::updateApplicationRole(const UpdateApplicationRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationRoleWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of an application role.
 *
 * @param request UpdateApplicationRoleDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationRoleDescriptionResponse
 */
UpdateApplicationRoleDescriptionResponse Client::updateApplicationRoleDescriptionWithOptions(const UpdateApplicationRoleDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationRoleId()) {
    query["ApplicationRoleId"] = request.getApplicationRoleId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationRoleDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationRoleDescriptionResponse>();
}

/**
 * @summary Modifies the description of an application role.
 *
 * @param request UpdateApplicationRoleDescriptionRequest
 * @return UpdateApplicationRoleDescriptionResponse
 */
UpdateApplicationRoleDescriptionResponse Client::updateApplicationRoleDescription(const UpdateApplicationRoleDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationRoleDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates the SSO parameters for an application template.
 *
 * @description Updates the single sign-on (SSO) parameters for an application template from the marketplace.
 *
 * @param request UpdateApplicationSsoFormParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationSsoFormParamsResponse
 */
UpdateApplicationSsoFormParamsResponse Client::updateApplicationSsoFormParamsWithOptions(const UpdateApplicationSsoFormParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationTemplateParams()) {
    query["ApplicationTemplateParams"] = request.getApplicationTemplateParams();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationSsoFormParams"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationSsoFormParamsResponse>();
}

/**
 * @summary Updates the SSO parameters for an application template.
 *
 * @description Updates the single sign-on (SSO) parameters for an application template from the marketplace.
 *
 * @param request UpdateApplicationSsoFormParamsRequest
 * @return UpdateApplicationSsoFormParamsResponse
 */
UpdateApplicationSsoFormParamsResponse Client::updateApplicationSsoFormParams(const UpdateApplicationSsoFormParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationSsoFormParamsWithOptions(request, runtime);
}

/**
 * @summary Updates the expiration time of an application token.
 *
 * @param request UpdateApplicationTokenExpirationTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationTokenExpirationTimeResponse
 */
UpdateApplicationTokenExpirationTimeResponse Client::updateApplicationTokenExpirationTimeWithOptions(const UpdateApplicationTokenExpirationTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationTokenId()) {
    query["ApplicationTokenId"] = request.getApplicationTokenId();
  }

  if (!!request.hasExpirationTime()) {
    query["ExpirationTime"] = request.getExpirationTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationTokenExpirationTime"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationTokenExpirationTimeResponse>();
}

/**
 * @summary Updates the expiration time of an application token.
 *
 * @param request UpdateApplicationTokenExpirationTimeRequest
 * @return UpdateApplicationTokenExpirationTimeResponse
 */
UpdateApplicationTokenExpirationTimeResponse Client::updateApplicationTokenExpirationTime(const UpdateApplicationTokenExpirationTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationTokenExpirationTimeWithOptions(request, runtime);
}

/**
 * @summary Updates the basic properties of an authorization rule.
 *
 * @param request UpdateAuthorizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthorizationRuleResponse
 */
UpdateAuthorizationRuleResponse Client::updateAuthorizationRuleWithOptions(const UpdateAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationResourceScope()) {
    query["AuthorizationResourceScope"] = request.getAuthorizationResourceScope();
  }

  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasAuthorizationRuleName()) {
    query["AuthorizationRuleName"] = request.getAuthorizationRuleName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAuthorizationRule"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthorizationRuleResponse>();
}

/**
 * @summary Updates the basic properties of an authorization rule.
 *
 * @param request UpdateAuthorizationRuleRequest
 * @return UpdateAuthorizationRuleResponse
 */
UpdateAuthorizationRuleResponse Client::updateAuthorizationRule(const UpdateAuthorizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthorizationRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the properties of the relationship between an authorization rule and an application.
 *
 * @param request UpdateAuthorizationRuleApplicationAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthorizationRuleApplicationAttachmentResponse
 */
UpdateAuthorizationRuleApplicationAttachmentResponse Client::updateAuthorizationRuleApplicationAttachmentWithOptions(const UpdateAuthorizationRuleApplicationAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasValidityPeriod()) {
    query["ValidityPeriod"] = request.getValidityPeriod();
  }

  if (!!request.hasValidityType()) {
    query["ValidityType"] = request.getValidityType();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAuthorizationRuleApplicationAttachment"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthorizationRuleApplicationAttachmentResponse>();
}

/**
 * @summary Updates the properties of the relationship between an authorization rule and an application.
 *
 * @param request UpdateAuthorizationRuleApplicationAttachmentRequest
 * @return UpdateAuthorizationRuleApplicationAttachmentResponse
 */
UpdateAuthorizationRuleApplicationAttachmentResponse Client::updateAuthorizationRuleApplicationAttachment(const UpdateAuthorizationRuleApplicationAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthorizationRuleApplicationAttachmentWithOptions(request, runtime);
}

/**
 * @summary Updates the description of an authorization rule.
 *
 * @param request UpdateAuthorizationRuleDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthorizationRuleDescriptionResponse
 */
UpdateAuthorizationRuleDescriptionResponse Client::updateAuthorizationRuleDescriptionWithOptions(const UpdateAuthorizationRuleDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAuthorizationRuleDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthorizationRuleDescriptionResponse>();
}

/**
 * @summary Updates the description of an authorization rule.
 *
 * @param request UpdateAuthorizationRuleDescriptionRequest
 * @return UpdateAuthorizationRuleDescriptionResponse
 */
UpdateAuthorizationRuleDescriptionResponse Client::updateAuthorizationRuleDescription(const UpdateAuthorizationRuleDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthorizationRuleDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates the relationship properties between an authorization rule and a group.
 *
 * @param request UpdateAuthorizationRuleGroupAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthorizationRuleGroupAttachmentResponse
 */
UpdateAuthorizationRuleGroupAttachmentResponse Client::updateAuthorizationRuleGroupAttachmentWithOptions(const UpdateAuthorizationRuleGroupAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasValidityPeriod()) {
    query["ValidityPeriod"] = request.getValidityPeriod();
  }

  if (!!request.hasValidityType()) {
    query["ValidityType"] = request.getValidityType();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAuthorizationRuleGroupAttachment"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthorizationRuleGroupAttachmentResponse>();
}

/**
 * @summary Updates the relationship properties between an authorization rule and a group.
 *
 * @param request UpdateAuthorizationRuleGroupAttachmentRequest
 * @return UpdateAuthorizationRuleGroupAttachmentResponse
 */
UpdateAuthorizationRuleGroupAttachmentResponse Client::updateAuthorizationRuleGroupAttachment(const UpdateAuthorizationRuleGroupAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthorizationRuleGroupAttachmentWithOptions(request, runtime);
}

/**
 * @summary Updates the relationship properties between an authorization rule and an account.
 *
 * @param request UpdateAuthorizationRuleUserAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthorizationRuleUserAttachmentResponse
 */
UpdateAuthorizationRuleUserAttachmentResponse Client::updateAuthorizationRuleUserAttachmentWithOptions(const UpdateAuthorizationRuleUserAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationRuleId()) {
    query["AuthorizationRuleId"] = request.getAuthorizationRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasValidityPeriod()) {
    query["ValidityPeriod"] = request.getValidityPeriod();
  }

  if (!!request.hasValidityType()) {
    query["ValidityType"] = request.getValidityType();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAuthorizationRuleUserAttachment"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthorizationRuleUserAttachmentResponse>();
}

/**
 * @summary Updates the relationship properties between an authorization rule and an account.
 *
 * @param request UpdateAuthorizationRuleUserAttachmentRequest
 * @return UpdateAuthorizationRuleUserAttachmentResponse
 */
UpdateAuthorizationRuleUserAttachmentResponse Client::updateAuthorizationRuleUserAttachment(const UpdateAuthorizationRuleUserAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthorizationRuleUserAttachmentWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of an authorization server.
 *
 * @param request UpdateAuthorizationServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthorizationServerResponse
 */
UpdateAuthorizationServerResponse Client::updateAuthorizationServerWithOptions(const UpdateAuthorizationServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationServerId()) {
    query["AuthorizationServerId"] = request.getAuthorizationServerId();
  }

  if (!!request.hasAuthorizationServerName()) {
    query["AuthorizationServerName"] = request.getAuthorizationServerName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIssuerDomain()) {
    query["IssuerDomain"] = request.getIssuerDomain();
  }

  if (!!request.hasIssuerMode()) {
    query["IssuerMode"] = request.getIssuerMode();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAuthorizationServer"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthorizationServerResponse>();
}

/**
 * @summary Updates the configuration of an authorization server.
 *
 * @param request UpdateAuthorizationServerRequest
 * @return UpdateAuthorizationServerResponse
 */
UpdateAuthorizationServerResponse Client::updateAuthorizationServer(const UpdateAuthorizationServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthorizationServerWithOptions(request, runtime);
}

/**
 * @summary Updates the description of an authorization server.
 *
 * @param request UpdateAuthorizationServerDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthorizationServerDescriptionResponse
 */
UpdateAuthorizationServerDescriptionResponse Client::updateAuthorizationServerDescriptionWithOptions(const UpdateAuthorizationServerDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationServerId()) {
    query["AuthorizationServerId"] = request.getAuthorizationServerId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAuthorizationServerDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthorizationServerDescriptionResponse>();
}

/**
 * @summary Updates the description of an authorization server.
 *
 * @param request UpdateAuthorizationServerDescriptionRequest
 * @return UpdateAuthorizationServerDescriptionResponse
 */
UpdateAuthorizationServerDescriptionResponse Client::updateAuthorizationServerDescription(const UpdateAuthorizationServerDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthorizationServerDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies a brand.
 *
 * @param request UpdateBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBrandResponse
 */
UpdateBrandResponse Client::updateBrandWithOptions(const UpdateBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasBrandName()) {
    query["BrandName"] = request.getBrandName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBrandResponse>();
}

/**
 * @summary Modifies a brand.
 *
 * @param request UpdateBrandRequest
 * @return UpdateBrandResponse
 */
UpdateBrandResponse Client::updateBrand(const UpdateBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBrandWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information of an Alibaba Cloud account.
 *
 * @param request UpdateCloudAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudAccountResponse
 */
UpdateCloudAccountResponse Client::updateCloudAccountWithOptions(const UpdateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasCloudAccountName()) {
    query["CloudAccountName"] = request.getCloudAccountName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudAccount"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudAccountResponse>();
}

/**
 * @summary Updates the basic information of an Alibaba Cloud account.
 *
 * @param request UpdateCloudAccountRequest
 * @return UpdateCloudAccountResponse
 */
UpdateCloudAccountResponse Client::updateCloudAccount(const UpdateCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudAccountWithOptions(request, runtime);
}

/**
 * @summary Updates the description of an Alibaba Cloud account.
 *
 * @param request UpdateCloudAccountDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudAccountDescriptionResponse
 */
UpdateCloudAccountDescriptionResponse Client::updateCloudAccountDescriptionWithOptions(const UpdateCloudAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudAccountDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudAccountDescriptionResponse>();
}

/**
 * @summary Updates the description of an Alibaba Cloud account.
 *
 * @param request UpdateCloudAccountDescriptionRequest
 * @return UpdateCloudAccountDescriptionResponse
 */
UpdateCloudAccountDescriptionResponse Client::updateCloudAccountDescription(const UpdateCloudAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates the description of a cloud role.
 *
 * @param request UpdateCloudAccountRoleDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudAccountRoleDescriptionResponse
 */
UpdateCloudAccountRoleDescriptionResponse Client::updateCloudAccountRoleDescriptionWithOptions(const UpdateCloudAccountRoleDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCloudAccountId()) {
    query["CloudAccountId"] = request.getCloudAccountId();
  }

  if (!!request.hasCloudAccountRoleId()) {
    query["CloudAccountRoleId"] = request.getCloudAccountRoleId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudAccountRoleDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudAccountRoleDescriptionResponse>();
}

/**
 * @summary Updates the description of a cloud role.
 *
 * @param request UpdateCloudAccountRoleDescriptionRequest
 * @return UpdateCloudAccountRoleDescriptionResponse
 */
UpdateCloudAccountRoleDescriptionResponse Client::updateCloudAccountRoleDescription(const UpdateCloudAccountRoleDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudAccountRoleDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates a conditional access policy.
 *
 * @description Updates a conditional access policy.
 *
 * @param request UpdateConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConditionalAccessPolicyResponse
 */
UpdateConditionalAccessPolicyResponse Client::updateConditionalAccessPolicyWithOptions(const UpdateConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.getConditionalAccessPolicyId();
  }

  if (!!request.hasConditionalAccessPolicyName()) {
    query["ConditionalAccessPolicyName"] = request.getConditionalAccessPolicyName();
  }

  if (!!request.hasConditionsConfig()) {
    query["ConditionsConfig"] = request.getConditionsConfig();
  }

  if (!!request.hasDecisionConfig()) {
    query["DecisionConfig"] = request.getDecisionConfig();
  }

  if (!!request.hasDecisionType()) {
    query["DecisionType"] = request.getDecisionType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateConditionalAccessPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConditionalAccessPolicyResponse>();
}

/**
 * @summary Updates a conditional access policy.
 *
 * @description Updates a conditional access policy.
 *
 * @param request UpdateConditionalAccessPolicyRequest
 * @return UpdateConditionalAccessPolicyResponse
 */
UpdateConditionalAccessPolicyResponse Client::updateConditionalAccessPolicy(const UpdateConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Updates the description of a conditional access policy.
 *
 * @description Updates the description of a conditional access policy.
 *
 * @param request UpdateConditionalAccessPolicyDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConditionalAccessPolicyDescriptionResponse
 */
UpdateConditionalAccessPolicyDescriptionResponse Client::updateConditionalAccessPolicyDescriptionWithOptions(const UpdateConditionalAccessPolicyDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.getConditionalAccessPolicyId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateConditionalAccessPolicyDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConditionalAccessPolicyDescriptionResponse>();
}

/**
 * @summary Updates the description of a conditional access policy.
 *
 * @description Updates the description of a conditional access policy.
 *
 * @param request UpdateConditionalAccessPolicyDescriptionRequest
 * @return UpdateConditionalAccessPolicyDescriptionResponse
 */
UpdateConditionalAccessPolicyDescriptionResponse Client::updateConditionalAccessPolicyDescription(const UpdateConditionalAccessPolicyDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConditionalAccessPolicyDescriptionWithOptions(request, runtime);
}

/**
 * @summary Update basic information for a credential.
 *
 * @param request UpdateCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCredentialResponse
 */
UpdateCredentialResponse Client::updateCredentialWithOptions(const UpdateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCredentialContent()) {
    query["CredentialContent"] = request.getCredentialContent();
  }

  if (!!request.hasCredentialId()) {
    query["CredentialId"] = request.getCredentialId();
  }

  if (!!request.hasCredentialName()) {
    query["CredentialName"] = request.getCredentialName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCredential"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCredentialResponse>();
}

/**
 * @summary Update basic information for a credential.
 *
 * @param request UpdateCredentialRequest
 * @return UpdateCredentialResponse
 */
UpdateCredentialResponse Client::updateCredential(const UpdateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCredentialWithOptions(request, runtime);
}

/**
 * @summary Updates the description of a credential.
 *
 * @param request UpdateCredentialDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCredentialDescriptionResponse
 */
UpdateCredentialDescriptionResponse Client::updateCredentialDescriptionWithOptions(const UpdateCredentialDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCredentialId()) {
    query["CredentialId"] = request.getCredentialId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCredentialDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCredentialDescriptionResponse>();
}

/**
 * @summary Updates the description of a credential.
 *
 * @param request UpdateCredentialDescriptionRequest
 * @return UpdateCredentialDescriptionResponse
 */
UpdateCredentialDescriptionResponse Client::updateCredentialDescription(const UpdateCredentialDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCredentialDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates a credential provider.
 *
 * @param request UpdateCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCredentialProviderResponse
 */
UpdateCredentialProviderResponse Client::updateCredentialProviderWithOptions(const UpdateCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCredentialProviderConfig()) {
    query["CredentialProviderConfig"] = request.getCredentialProviderConfig();
  }

  if (!!request.hasCredentialProviderId()) {
    query["CredentialProviderId"] = request.getCredentialProviderId();
  }

  if (!!request.hasCredentialProviderName()) {
    query["CredentialProviderName"] = request.getCredentialProviderName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCredentialProviderResponse>();
}

/**
 * @summary Updates a credential provider.
 *
 * @param request UpdateCredentialProviderRequest
 * @return UpdateCredentialProviderResponse
 */
UpdateCredentialProviderResponse Client::updateCredentialProvider(const UpdateCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Update the description of a credential provider.
 *
 * @param request UpdateCredentialProviderDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCredentialProviderDescriptionResponse
 */
UpdateCredentialProviderDescriptionResponse Client::updateCredentialProviderDescriptionWithOptions(const UpdateCredentialProviderDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialProviderId()) {
    query["CredentialProviderId"] = request.getCredentialProviderId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCredentialProviderDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCredentialProviderDescriptionResponse>();
}

/**
 * @summary Update the description of a credential provider.
 *
 * @param request UpdateCredentialProviderDescriptionRequest
 * @return UpdateCredentialProviderDescriptionResponse
 */
UpdateCredentialProviderDescriptionResponse Client::updateCredentialProviderDescription(const UpdateCredentialProviderDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCredentialProviderDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates a custom privacy policy.
 *
 * @param request UpdateCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomPrivacyPolicyResponse
 */
UpdateCustomPrivacyPolicyResponse Client::updateCustomPrivacyPolicyWithOptions(const UpdateCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyContents()) {
    query["CustomPrivacyPolicyContents"] = request.getCustomPrivacyPolicyContents();
  }

  if (!!request.hasCustomPrivacyPolicyId()) {
    query["CustomPrivacyPolicyId"] = request.getCustomPrivacyPolicyId();
  }

  if (!!request.hasCustomPrivacyPolicyName()) {
    query["CustomPrivacyPolicyName"] = request.getCustomPrivacyPolicyName();
  }

  if (!!request.hasDefaultLanguageCode()) {
    query["DefaultLanguageCode"] = request.getDefaultLanguageCode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserConsentType()) {
    query["UserConsentType"] = request.getUserConsentType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomPrivacyPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomPrivacyPolicyResponse>();
}

/**
 * @summary Updates a custom privacy policy.
 *
 * @param request UpdateCustomPrivacyPolicyRequest
 * @return UpdateCustomPrivacyPolicyResponse
 */
UpdateCustomPrivacyPolicyResponse Client::updateCustomPrivacyPolicy(const UpdateCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Updates the brand associated with a domain name.
 *
 * @param request UpdateDomainBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainBrandResponse
 */
UpdateDomainBrandResponse Client::updateDomainBrandWithOptions(const UpdateDomainBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.getBrandId();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDomainBrand"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainBrandResponse>();
}

/**
 * @summary Updates the brand associated with a domain name.
 *
 * @param request UpdateDomainBrandRequest
 * @return UpdateDomainBrandResponse
 */
UpdateDomainBrandResponse Client::updateDomainBrand(const UpdateDomainBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainBrandWithOptions(request, runtime);
}

/**
 * @summary Updates the ICP filing number of a domain.
 *
 * @param request UpdateDomainIcpNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainIcpNumberResponse
 */
UpdateDomainIcpNumberResponse Client::updateDomainIcpNumberWithOptions(const UpdateDomainIcpNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasIcpNumber()) {
    query["IcpNumber"] = request.getIcpNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDomainIcpNumber"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainIcpNumberResponse>();
}

/**
 * @summary Updates the ICP filing number of a domain.
 *
 * @param request UpdateDomainIcpNumberRequest
 * @return UpdateDomainIcpNumberResponse
 */
UpdateDomainIcpNumberResponse Client::updateDomainIcpNumber(const UpdateDomainIcpNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainIcpNumberWithOptions(request, runtime);
}

/**
 * @summary Updates a federated trust source.
 *
 * @param request UpdateFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFederatedCredentialProviderResponse
 */
UpdateFederatedCredentialProviderResponse Client::updateFederatedCredentialProviderWithOptions(const UpdateFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.getFederatedCredentialProviderId();
  }

  if (!!request.hasFederatedCredentialProviderName()) {
    query["FederatedCredentialProviderName"] = request.getFederatedCredentialProviderName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  if (!!request.hasOidcProviderConfig()) {
    query["OidcProviderConfig"] = request.getOidcProviderConfig();
  }

  if (!!request.hasPkcs7ProviderConfig()) {
    query["Pkcs7ProviderConfig"] = request.getPkcs7ProviderConfig();
  }

  if (!!request.hasPrivateCaProviderConfig()) {
    query["PrivateCaProviderConfig"] = request.getPrivateCaProviderConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFederatedCredentialProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFederatedCredentialProviderResponse>();
}

/**
 * @summary Updates a federated trust source.
 *
 * @param request UpdateFederatedCredentialProviderRequest
 * @return UpdateFederatedCredentialProviderResponse
 */
UpdateFederatedCredentialProviderResponse Client::updateFederatedCredentialProvider(const UpdateFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Updates the description of a federated trust source.
 *
 * @param request UpdateFederatedCredentialProviderDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFederatedCredentialProviderDescriptionResponse
 */
UpdateFederatedCredentialProviderDescriptionResponse Client::updateFederatedCredentialProviderDescriptionWithOptions(const UpdateFederatedCredentialProviderDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.getFederatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFederatedCredentialProviderDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFederatedCredentialProviderDescriptionResponse>();
}

/**
 * @summary Updates the description of a federated trust source.
 *
 * @param request UpdateFederatedCredentialProviderDescriptionRequest
 * @return UpdateFederatedCredentialProviderDescriptionResponse
 */
UpdateFederatedCredentialProviderDescriptionResponse Client::updateFederatedCredentialProviderDescription(const UpdateFederatedCredentialProviderDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFederatedCredentialProviderDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates the information about an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). If the information is empty, the information is not updated by default.
 *
 * @param request UpdateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroupWithOptions(const UpdateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupExternalId()) {
    query["GroupExternalId"] = request.getGroupExternalId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGroup"},
    {"version" , "2021-12-01"},
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
 * @summary Updates the information about an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). If the information is empty, the information is not updated by default.
 *
 * @param request UpdateGroupRequest
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroup(const UpdateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the description of an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account group.
 *
 * @param request UpdateGroupDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupDescriptionResponse
 */
UpdateGroupDescriptionResponse Client::updateGroupDescriptionWithOptions(const UpdateGroupDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGroupDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGroupDescriptionResponse>();
}

/**
 * @summary Updates the description of an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account group.
 *
 * @param request UpdateGroupDescriptionRequest
 * @return UpdateGroupDescriptionResponse
 */
UpdateGroupDescriptionResponse Client::updateGroupDescription(const UpdateGroupDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGroupDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates the basic configuration of an identity provider.
 *
 * @param request UpdateIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProviderWithOptions(const UpdateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDingtalkAppConfig()) {
    query["DingtalkAppConfig"] = request.getDingtalkAppConfig();
  }

  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.getIdentityProviderId();
  }

  if (!!request.hasIdentityProviderName()) {
    query["IdentityProviderName"] = request.getIdentityProviderName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLarkConfig()) {
    query["LarkConfig"] = request.getLarkConfig();
  }

  if (!!request.hasLdapConfig()) {
    query["LdapConfig"] = request.getLdapConfig();
  }

  if (!!request.hasLogoUrl()) {
    query["LogoUrl"] = request.getLogoUrl();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  if (!!request.hasOidcConfig()) {
    query["OidcConfig"] = request.getOidcConfig();
  }

  if (!!request.hasSamlConfig()) {
    query["SamlConfig"] = request.getSamlConfig();
  }

  if (!!request.hasWeComConfig()) {
    query["WeComConfig"] = request.getWeComConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIdentityProvider"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIdentityProviderResponse>();
}

/**
 * @summary Updates the basic configuration of an identity provider.
 *
 * @param request UpdateIdentityProviderRequest
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProvider(const UpdateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a specified EIAM instance.
 *
 * @param request UpdateInstanceDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceDescriptionResponse
 */
UpdateInstanceDescriptionResponse Client::updateInstanceDescriptionWithOptions(const UpdateInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceDescriptionResponse>();
}

/**
 * @summary Modifies the description of a specified EIAM instance.
 *
 * @param request UpdateInstanceDescriptionRequest
 * @return UpdateInstanceDescriptionResponse
 */
UpdateInstanceDescriptionResponse Client::updateInstanceDescription(const UpdateInstanceDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a private network access endpoint.
 *
 * @param request UpdateNetworkAccessEndpointNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNetworkAccessEndpointNameResponse
 */
UpdateNetworkAccessEndpointNameResponse Client::updateNetworkAccessEndpointNameWithOptions(const UpdateNetworkAccessEndpointNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.getNetworkAccessEndpointId();
  }

  if (!!request.hasNetworkAccessEndpointName()) {
    query["NetworkAccessEndpointName"] = request.getNetworkAccessEndpointName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNetworkAccessEndpointName"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNetworkAccessEndpointNameResponse>();
}

/**
 * @summary Modifies the name of a private network access endpoint.
 *
 * @param request UpdateNetworkAccessEndpointNameRequest
 * @return UpdateNetworkAccessEndpointNameResponse
 */
UpdateNetworkAccessEndpointNameResponse Client::updateNetworkAccessEndpointName(const UpdateNetworkAccessEndpointNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNetworkAccessEndpointNameWithOptions(request, runtime);
}

/**
 * @summary Updates a network zone object.
 *
 * @param request UpdateNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNetworkZoneResponse
 */
UpdateNetworkZoneResponse Client::updateNetworkZoneWithOptions(const UpdateNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpv4Cidrs()) {
    query["Ipv4Cidrs"] = request.getIpv4Cidrs();
  }

  if (!!request.hasIpv6Cidrs()) {
    query["Ipv6Cidrs"] = request.getIpv6Cidrs();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.getNetworkZoneId();
  }

  if (!!request.hasNetworkZoneName()) {
    query["NetworkZoneName"] = request.getNetworkZoneName();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNetworkZone"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNetworkZoneResponse>();
}

/**
 * @summary Updates a network zone object.
 *
 * @param request UpdateNetworkZoneRequest
 * @return UpdateNetworkZoneResponse
 */
UpdateNetworkZoneResponse Client::updateNetworkZone(const UpdateNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary Updates the description of a network zone.
 *
 * @param request UpdateNetworkZoneDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNetworkZoneDescriptionResponse
 */
UpdateNetworkZoneDescriptionResponse Client::updateNetworkZoneDescriptionWithOptions(const UpdateNetworkZoneDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.getNetworkZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNetworkZoneDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNetworkZoneDescriptionResponse>();
}

/**
 * @summary Updates the description of a network zone.
 *
 * @param request UpdateNetworkZoneDescriptionRequest
 * @return UpdateNetworkZoneDescriptionResponse
 */
UpdateNetworkZoneDescriptionResponse Client::updateNetworkZoneDescription(const UpdateNetworkZoneDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNetworkZoneDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information about an Employee Identity and Access Management (EIAM) organization. The basic information about the organization is not updated by default if no parameter is specified.
 *
 * @param request UpdateOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOrganizationalUnitResponse
 */
UpdateOrganizationalUnitResponse Client::updateOrganizationalUnitWithOptions(const UpdateOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  if (!!request.hasOrganizationalUnitName()) {
    query["OrganizationalUnitName"] = request.getOrganizationalUnitName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOrganizationalUnit"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOrganizationalUnitResponse>();
}

/**
 * @summary Updates the basic information about an Employee Identity and Access Management (EIAM) organization. The basic information about the organization is not updated by default if no parameter is specified.
 *
 * @param request UpdateOrganizationalUnitRequest
 * @return UpdateOrganizationalUnitResponse
 */
UpdateOrganizationalUnitResponse Client::updateOrganizationalUnit(const UpdateOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of an Employee Identity and Access Management (EIAM) organization.
 *
 * @param request UpdateOrganizationalUnitDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOrganizationalUnitDescriptionResponse
 */
UpdateOrganizationalUnitDescriptionResponse Client::updateOrganizationalUnitDescriptionWithOptions(const UpdateOrganizationalUnitDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOrganizationalUnitDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOrganizationalUnitDescriptionResponse>();
}

/**
 * @summary Modifies the description of an Employee Identity and Access Management (EIAM) organization.
 *
 * @param request UpdateOrganizationalUnitDescriptionRequest
 * @return UpdateOrganizationalUnitDescriptionResponse
 */
UpdateOrganizationalUnitDescriptionResponse Client::updateOrganizationalUnitDescription(const UpdateOrganizationalUnitDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOrganizationalUnitDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates the parent organization ID of an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). In this case, the organization is moved from a parent node to a new node.
 *
 * @param request UpdateOrganizationalUnitParentIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOrganizationalUnitParentIdResponse
 */
UpdateOrganizationalUnitParentIdResponse Client::updateOrganizationalUnitParentIdWithOptions(const UpdateOrganizationalUnitParentIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.getOrganizationalUnitId();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOrganizationalUnitParentId"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOrganizationalUnitParentIdResponse>();
}

/**
 * @summary Updates the parent organization ID of an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). In this case, the organization is moved from a parent node to a new node.
 *
 * @param request UpdateOrganizationalUnitParentIdRequest
 * @return UpdateOrganizationalUnitParentIdResponse
 */
UpdateOrganizationalUnitParentIdResponse Client::updateOrganizationalUnitParentId(const UpdateOrganizationalUnitParentIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOrganizationalUnitParentIdWithOptions(request, runtime);
}

/**
 * @summary Updates a scope permission for a specified resource server.
 *
 * @param request UpdateResourceServerScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceServerScopeResponse
 */
UpdateResourceServerScopeResponse Client::updateResourceServerScopeWithOptions(const UpdateResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceServerScopeId()) {
    query["ResourceServerScopeId"] = request.getResourceServerScopeId();
  }

  if (!!request.hasResourceServerScopeName()) {
    query["ResourceServerScopeName"] = request.getResourceServerScopeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateResourceServerScope"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceServerScopeResponse>();
}

/**
 * @summary Updates a scope permission for a specified resource server.
 *
 * @param request UpdateResourceServerScopeRequest
 * @return UpdateResourceServerScopeResponse
 */
UpdateResourceServerScopeResponse Client::updateResourceServerScope(const UpdateResourceServerScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceServerScopeWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information of an EIAM account.
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFields()) {
    query["CustomFields"] = request.getCustomFields();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasEmailVerified()) {
    query["EmailVerified"] = request.getEmailVerified();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasPhoneNumberVerified()) {
    query["PhoneNumberVerified"] = request.getPhoneNumberVerified();
  }

  if (!!request.hasPhoneRegion()) {
    query["PhoneRegion"] = request.getPhoneRegion();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2021-12-01"},
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
 * @summary Updates the basic information of an EIAM account.
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}

/**
 * @summary Updates a user\\"s description.
 *
 * @param request UpdateUserDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserDescriptionResponse
 */
UpdateUserDescriptionResponse Client::updateUserDescriptionWithOptions(const UpdateUserDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserDescriptionResponse>();
}

/**
 * @summary Updates a user\\"s description.
 *
 * @param request UpdateUserDescriptionRequest
 * @return UpdateUserDescriptionResponse
 */
UpdateUserDescriptionResponse Client::updateUserDescription(const UpdateUserDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserDescriptionWithOptions(request, runtime);
}

/**
 * @summary Updates the password information of an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS). The password must meet the requirements of the password policies that are configured in the IDaaS console.
 *
 * @param request UpdateUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserPasswordResponse
 */
UpdateUserPasswordResponse Client::updateUserPasswordWithOptions(const UpdateUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordForcedUpdateStatus()) {
    query["PasswordForcedUpdateStatus"] = request.getPasswordForcedUpdateStatus();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserNotificationChannels()) {
    query["UserNotificationChannels"] = request.getUserNotificationChannels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserPassword"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserPasswordResponse>();
}

/**
 * @summary Updates the password information of an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS). The password must meet the requirements of the password policies that are configured in the IDaaS console.
 *
 * @param request UpdateUserPasswordRequest
 * @return UpdateUserPasswordResponse
 */
UpdateUserPasswordResponse Client::updateUserPassword(const UpdateUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserPasswordWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Eiam20211201