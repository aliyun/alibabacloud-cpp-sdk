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
  this->_endpointRule = "";
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
 * @summary 在当前应用下给指定员工添加一个应用账号
 *
 * @param request AddApplicationAccountToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddApplicationAccountToUserResponse
 */
AddApplicationAccountToUserResponse Client::addApplicationAccountToUserWithOptions(const AddApplicationAccountToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasApplicationUsername()) {
    query["ApplicationUsername"] = request.applicationUsername();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary 在当前应用下给指定员工添加一个应用账号
 *
 * @param request AddApplicationAccountToUserRequest
 * @return AddApplicationAccountToUserResponse
 */
AddApplicationAccountToUserResponse Client::addApplicationAccountToUser(const AddApplicationAccountToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addApplicationAccountToUserWithOptions(request, runtime);
}

/**
 * @summary 添加条款到品牌
 *
 * @param request AddCustomPrivacyPoliciesToBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomPrivacyPoliciesToBrandResponse
 */
AddCustomPrivacyPoliciesToBrandResponse Client::addCustomPrivacyPoliciesToBrandWithOptions(const AddCustomPrivacyPoliciesToBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasCustomPrivacyPolicyIds()) {
    query["CustomPrivacyPolicyIds"] = request.customPrivacyPolicyIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 添加条款到品牌
 *
 * @param request AddCustomPrivacyPoliciesToBrandRequest
 * @return AddCustomPrivacyPoliciesToBrandResponse
 */
AddCustomPrivacyPoliciesToBrandResponse Client::addCustomPrivacyPoliciesToBrand(const AddCustomPrivacyPoliciesToBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomPrivacyPoliciesToBrandWithOptions(request, runtime);
}

/**
 * @summary Adds an Employee Identity and Access Management (EIAM) account to multiple EIAM organizations of Identity as a Service (IDaaS). If the account already exists in the organizational unit, the system directly returns a success response.
 *
 * @param request AddUserToOrganizationalUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToOrganizationalUnitsResponse
 */
AddUserToOrganizationalUnitsResponse Client::addUserToOrganizationalUnitsWithOptions(const AddUserToOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.organizationalUnitIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Adds an Employee Identity and Access Management (EIAM) account to multiple EIAM organizations of Identity as a Service (IDaaS). If the account already exists in the organizational unit, the system directly returns a success response.
 *
 * @param request AddUserToOrganizationalUnitsRequest
 * @return AddUserToOrganizationalUnitsResponse
 */
AddUserToOrganizationalUnitsResponse Client::addUserToOrganizationalUnits(const AddUserToOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToOrganizationalUnitsWithOptions(request, runtime);
}

/**
 * @summary Adds Employee Identity and Access Management (EIAM) accounts to an EIAM group of Identity as a Service (IDaaS).
 *
 * @param request AddUsersToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUsersToGroupResponse
 */
AddUsersToGroupResponse Client::addUsersToGroupWithOptions(const AddUsersToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
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
 * @summary Adds Employee Identity and Access Management (EIAM) accounts to an EIAM group of Identity as a Service (IDaaS).
 *
 * @param request AddUsersToGroupRequest
 * @return AddUsersToGroupResponse
 */
AddUsersToGroupResponse Client::addUsersToGroup(const AddUsersToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUsersToGroupWithOptions(request, runtime);
}

/**
 * @summary Grants the permissions to access an application to multiple account groups at a time in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request AuthorizeApplicationToGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeApplicationToGroupsResponse
 */
AuthorizeApplicationToGroupsResponse Client::authorizeApplicationToGroupsWithOptions(const AuthorizeApplicationToGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Grants the permissions to access an application to multiple account groups at a time in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request AuthorizeApplicationToGroupsRequest
 * @return AuthorizeApplicationToGroupsResponse
 */
AuthorizeApplicationToGroupsResponse Client::authorizeApplicationToGroups(const AuthorizeApplicationToGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeApplicationToGroupsWithOptions(request, runtime);
}

/**
 * @summary Grants the access permissions on an application to multiple Employee Identity and Access Management (EIAM) organizations at a time.
 *
 * @param request AuthorizeApplicationToOrganizationalUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeApplicationToOrganizationalUnitsResponse
 */
AuthorizeApplicationToOrganizationalUnitsResponse Client::authorizeApplicationToOrganizationalUnitsWithOptions(const AuthorizeApplicationToOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.organizationalUnitIds();
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
 * @summary Grants the access permissions on an application to multiple Employee Identity and Access Management (EIAM) organizations at a time.
 *
 * @param request AuthorizeApplicationToOrganizationalUnitsRequest
 * @return AuthorizeApplicationToOrganizationalUnitsResponse
 */
AuthorizeApplicationToOrganizationalUnitsResponse Client::authorizeApplicationToOrganizationalUnits(const AuthorizeApplicationToOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeApplicationToOrganizationalUnitsWithOptions(request, runtime);
}

/**
 * @summary Grants the access permissions on an application to multiple Employee Identity and Access Management (EIAM) accounts at a time.
 *
 * @param request AuthorizeApplicationToUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeApplicationToUsersResponse
 */
AuthorizeApplicationToUsersResponse Client::authorizeApplicationToUsersWithOptions(const AuthorizeApplicationToUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
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
 * @summary Grants the access permissions on an application to multiple Employee Identity and Access Management (EIAM) accounts at a time.
 *
 * @param request AuthorizeApplicationToUsersRequest
 * @return AuthorizeApplicationToUsersResponse
 */
AuthorizeApplicationToUsersResponse Client::authorizeApplicationToUsers(const AuthorizeApplicationToUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeApplicationToUsersWithOptions(request, runtime);
}

/**
 * @summary Adds an application to an Enterprise Identity Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @description IDaaS EIAM supports the following two standard single sign-on (SSO) protocols for adding applications: SAML 2.0 and OIDC. You can select an SSO protocol based on your business requirements when you add an application. You cannot change the SSO protocol that you selected after the application is added.
 *
 * @param request CreateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplicationWithOptions(const CreateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasApplicationSourceType()) {
    query["ApplicationSourceType"] = request.applicationSourceType();
  }

  if (!!request.hasApplicationTemplateId()) {
    query["ApplicationTemplateId"] = request.applicationTemplateId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogoUrl()) {
    query["LogoUrl"] = request.logoUrl();
  }

  if (!!request.hasSsoType()) {
    query["SsoType"] = request.ssoType();
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
 * @summary Adds an application to an Enterprise Identity Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @description IDaaS EIAM supports the following two standard single sign-on (SSO) protocols for adding applications: SAML 2.0 and OIDC. You can select an SSO protocol based on your business requirements when you add an application. You cannot change the SSO protocol that you selected after the application is added.
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationWithOptions(request, runtime);
}

/**
 * @summary Creates a client key for an Employee Identity and Access Management (EIAM) application. An EIAM application can have up to two client keys.
 *
 * @param request CreateApplicationClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationClientSecretResponse
 */
CreateApplicationClientSecretResponse Client::createApplicationClientSecretWithOptions(const CreateApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasExpirationTime()) {
    query["ExpirationTime"] = request.expirationTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Creates a client key for an Employee Identity and Access Management (EIAM) application. An EIAM application can have up to two client keys.
 *
 * @param request CreateApplicationClientSecretRequest
 * @return CreateApplicationClientSecretResponse
 */
CreateApplicationClientSecretResponse Client::createApplicationClientSecret(const CreateApplicationClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationClientSecretWithOptions(request, runtime);
}

/**
 * @summary 创建应用联邦凭证
 *
 * @param request CreateApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationFederatedCredentialResponse
 */
CreateApplicationFederatedCredentialResponse Client::createApplicationFederatedCredentialWithOptions(const CreateApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialName()) {
    query["ApplicationFederatedCredentialName"] = request.applicationFederatedCredentialName();
  }

  if (!!request.hasApplicationFederatedCredentialType()) {
    query["ApplicationFederatedCredentialType"] = request.applicationFederatedCredentialType();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasAttributeMappings()) {
    query["AttributeMappings"] = request.attributeMappings();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.federatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVerificationCondition()) {
    query["VerificationCondition"] = request.verificationCondition();
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
 * @summary 创建应用联邦凭证
 *
 * @param request CreateApplicationFederatedCredentialRequest
 * @return CreateApplicationFederatedCredentialResponse
 */
CreateApplicationFederatedCredentialResponse Client::createApplicationFederatedCredential(const CreateApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary 创建应用Token
 *
 * @param request CreateApplicationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationTokenResponse
 */
CreateApplicationTokenResponse Client::createApplicationTokenWithOptions(const CreateApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasApplicationTokenType()) {
    query["ApplicationTokenType"] = request.applicationTokenType();
  }

  if (!!request.hasExpirationTime()) {
    query["ExpirationTime"] = request.expirationTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 创建应用Token
 *
 * @param request CreateApplicationTokenRequest
 * @return CreateApplicationTokenResponse
 */
CreateApplicationTokenResponse Client::createApplicationToken(const CreateApplicationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationTokenWithOptions(request, runtime);
}

/**
 * @summary 创建品牌
 *
 * @param request CreateBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBrandResponse
 */
CreateBrandResponse Client::createBrandWithOptions(const CreateBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandName()) {
    query["BrandName"] = request.brandName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 创建品牌
 *
 * @param request CreateBrandRequest
 * @return CreateBrandResponse
 */
CreateBrandResponse Client::createBrand(const CreateBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBrandWithOptions(request, runtime);
}

/**
 * @summary Create Conditional Access Policy
 *
 * @description Create Conditional Access Policy
 *
 * @param request CreateConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConditionalAccessPolicyResponse
 */
CreateConditionalAccessPolicyResponse Client::createConditionalAccessPolicyWithOptions(const CreateConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConditionalAccessPolicyName()) {
    query["ConditionalAccessPolicyName"] = request.conditionalAccessPolicyName();
  }

  if (!!request.hasConditionalAccessPolicyType()) {
    query["ConditionalAccessPolicyType"] = request.conditionalAccessPolicyType();
  }

  if (!!request.hasConditionsConfig()) {
    query["ConditionsConfig"] = request.conditionsConfig();
  }

  if (!!request.hasDecisionConfig()) {
    query["DecisionConfig"] = request.decisionConfig();
  }

  if (!!request.hasDecisionType()) {
    query["DecisionType"] = request.decisionType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEvaluateAt()) {
    query["EvaluateAt"] = request.evaluateAt();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
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
 * @summary Create Conditional Access Policy
 *
 * @description Create Conditional Access Policy
 *
 * @param request CreateConditionalAccessPolicyRequest
 * @return CreateConditionalAccessPolicyResponse
 */
CreateConditionalAccessPolicyResponse Client::createConditionalAccessPolicy(const CreateConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 创建自定义条款
 *
 * @param request CreateCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomPrivacyPolicyResponse
 */
CreateCustomPrivacyPolicyResponse Client::createCustomPrivacyPolicyWithOptions(const CreateCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCustomPrivacyPolicyContents()) {
    query["CustomPrivacyPolicyContents"] = request.customPrivacyPolicyContents();
  }

  if (!!request.hasCustomPrivacyPolicyName()) {
    query["CustomPrivacyPolicyName"] = request.customPrivacyPolicyName();
  }

  if (!!request.hasDefaultLanguageCode()) {
    query["DefaultLanguageCode"] = request.defaultLanguageCode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserConsentType()) {
    query["UserConsentType"] = request.userConsentType();
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
 * @summary 创建自定义条款
 *
 * @param request CreateCustomPrivacyPolicyRequest
 * @return CreateCustomPrivacyPolicyResponse
 */
CreateCustomPrivacyPolicyResponse Client::createCustomPrivacyPolicy(const CreateCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a custom domain name for an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request CreateDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomainWithOptions(const CreateDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasFiling()) {
    query["Filing"] = request.filing();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Creates a custom domain name for an Employee Identity and Access Management (EIAM) instance.
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
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 创建联邦凭证提供方
 *
 * @param request CreateFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFederatedCredentialProviderResponse
 */
CreateFederatedCredentialProviderResponse Client::createFederatedCredentialProviderWithOptions(const CreateFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFederatedCredentialProviderName()) {
    query["FederatedCredentialProviderName"] = request.federatedCredentialProviderName();
  }

  if (!!request.hasFederatedCredentialProviderType()) {
    query["FederatedCredentialProviderType"] = request.federatedCredentialProviderType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
  }

  if (!!request.hasOidcProviderConfig()) {
    query["OidcProviderConfig"] = request.oidcProviderConfig();
  }

  if (!!request.hasPkcs7ProviderConfig()) {
    query["Pkcs7ProviderConfig"] = request.pkcs7ProviderConfig();
  }

  if (!!request.hasPrivateCaProviderConfig()) {
    query["PrivateCaProviderConfig"] = request.privateCaProviderConfig();
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
 * @summary 创建联邦凭证提供方
 *
 * @param request CreateFederatedCredentialProviderRequest
 * @return CreateFederatedCredentialProviderResponse
 */
CreateFederatedCredentialProviderResponse Client::createFederatedCredentialProvider(const CreateFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Creates an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request CreateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupExternalId()) {
    query["GroupExternalId"] = request.groupExternalId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Creates an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupWithOptions(request, runtime);
}

/**
 * @summary Create Identity Provider
 *
 * @param request CreateIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdentityProviderResponse
 */
CreateIdentityProviderResponse Client::createIdentityProviderWithOptions(const CreateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthnConfig()) {
    query["AuthnConfig"] = request.authnConfig();
  }

  if (!!request.hasAutoCreateUserConfig()) {
    query["AutoCreateUserConfig"] = request.autoCreateUserConfig();
  }

  if (!!request.hasAutoUpdateUserConfig()) {
    query["AutoUpdateUserConfig"] = request.autoUpdateUserConfig();
  }

  if (!!request.hasBindingConfig()) {
    query["BindingConfig"] = request.bindingConfig();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDingtalkAppConfig()) {
    query["DingtalkAppConfig"] = request.dingtalkAppConfig();
  }

  if (!!request.hasIdentityProviderName()) {
    query["IdentityProviderName"] = request.identityProviderName();
  }

  if (!!request.hasIdentityProviderType()) {
    query["IdentityProviderType"] = request.identityProviderType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLarkConfig()) {
    query["LarkConfig"] = request.larkConfig();
  }

  if (!!request.hasLdapConfig()) {
    query["LdapConfig"] = request.ldapConfig();
  }

  if (!!request.hasLogoUrl()) {
    query["LogoUrl"] = request.logoUrl();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
  }

  if (!!request.hasOidcConfig()) {
    query["OidcConfig"] = request.oidcConfig();
  }

  if (!!request.hasUdPullConfig()) {
    query["UdPullConfig"] = request.udPullConfig();
  }

  if (!!request.hasUdPushConfig()) {
    query["UdPushConfig"] = request.udPushConfig();
  }

  if (!!request.hasWeComConfig()) {
    query["WeComConfig"] = request.weComConfig();
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
 * @summary Create Identity Provider
 *
 * @param request CreateIdentityProviderRequest
 * @return CreateIdentityProviderResponse
 */
CreateIdentityProviderResponse Client::createIdentityProvider(const CreateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIdentityProviderWithOptions(request, runtime);
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
    query["Description"] = request.description();
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
 * @summary Creates a dedicated endpoint.
 *
 * @param request CreateNetworkAccessEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkAccessEndpointResponse
 */
CreateNetworkAccessEndpointResponse Client::createNetworkAccessEndpointWithOptions(const CreateNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkAccessEndpointName()) {
    query["NetworkAccessEndpointName"] = request.networkAccessEndpointName();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.vSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVpcRegionId()) {
    query["VpcRegionId"] = request.vpcRegionId();
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
 * @summary Creates a dedicated endpoint.
 *
 * @param request CreateNetworkAccessEndpointRequest
 * @return CreateNetworkAccessEndpointResponse
 */
CreateNetworkAccessEndpointResponse Client::createNetworkAccessEndpoint(const CreateNetworkAccessEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkAccessEndpointWithOptions(request, runtime);
}

/**
 * @summary 创建网络区域对象
 *
 * @param request CreateNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkZoneResponse
 */
CreateNetworkZoneResponse Client::createNetworkZoneWithOptions(const CreateNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIpv4Cidrs()) {
    query["Ipv4Cidrs"] = request.ipv4Cidrs();
  }

  if (!!request.hasIpv6Cidrs()) {
    query["Ipv6Cidrs"] = request.ipv6Cidrs();
  }

  if (!!request.hasNetworkZoneName()) {
    query["NetworkZoneName"] = request.networkZoneName();
  }

  if (!!request.hasNetworkZoneType()) {
    query["NetworkZoneType"] = request.networkZoneType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
 * @summary 创建网络区域对象
 *
 * @param request CreateNetworkZoneRequest
 * @return CreateNetworkZoneResponse
 */
CreateNetworkZoneResponse Client::createNetworkZone(const CreateNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary Creates an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request CreateOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrganizationalUnitResponse
 */
CreateOrganizationalUnitResponse Client::createOrganizationalUnitWithOptions(const CreateOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitExternalId()) {
    query["OrganizationalUnitExternalId"] = request.organizationalUnitExternalId();
  }

  if (!!request.hasOrganizationalUnitName()) {
    query["OrganizationalUnitName"] = request.organizationalUnitName();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
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
 * @summary Creates an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request CreateOrganizationalUnitRequest
 * @return CreateOrganizationalUnitResponse
 */
CreateOrganizationalUnitResponse Client::createOrganizationalUnit(const CreateOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Creates an account in an Identity as a Service (IDaaS) Enterprise Identity Access Management (EIAM) instance.
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCustomFields()) {
    query["CustomFields"] = request.customFields();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasEmailVerified()) {
    query["EmailVerified"] = request.emailVerified();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.organizationalUnitIds();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPasswordInitializationConfig()) {
    query["PasswordInitializationConfig"] = request.passwordInitializationConfig();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasPhoneNumberVerified()) {
    query["PhoneNumberVerified"] = request.phoneNumberVerified();
  }

  if (!!request.hasPhoneRegion()) {
    query["PhoneRegion"] = request.phoneRegion();
  }

  if (!!request.hasPrimaryOrganizationalUnitId()) {
    query["PrimaryOrganizationalUnitId"] = request.primaryOrganizationalUnitId();
  }

  if (!!request.hasUserExternalId()) {
    query["UserExternalId"] = request.userExternalId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
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
 * @summary Creates an account in an Identity as a Service (IDaaS) Enterprise Identity Access Management (EIAM) instance.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary Deletes an Employee Identity and Access Management (EIAM) application.
 *
 * @description Make sure that the EIAM application that you want to delete is not used before you delete the EIAM application. After you delete the EIAM application, all configurations are deleted and cannot be restored.
 *
 * @param request DeleteApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Deletes an Employee Identity and Access Management (EIAM) application.
 *
 * @description Make sure that the EIAM application that you want to delete is not used before you delete the EIAM application. After you delete the EIAM application, all configurations are deleted and cannot be restored.
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationWithOptions(request, runtime);
}

/**
 * @summary Deletes a client key for an Employee Identity and Access Management (EIAM) application.
 *
 * @param request DeleteApplicationClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationClientSecretResponse
 */
DeleteApplicationClientSecretResponse Client::deleteApplicationClientSecretWithOptions(const DeleteApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
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
 * @summary Deletes a client key for an Employee Identity and Access Management (EIAM) application.
 *
 * @param request DeleteApplicationClientSecretRequest
 * @return DeleteApplicationClientSecretResponse
 */
DeleteApplicationClientSecretResponse Client::deleteApplicationClientSecret(const DeleteApplicationClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationClientSecretWithOptions(request, runtime);
}

/**
 * @summary 删除应用联邦凭证
 *
 * @param request DeleteApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationFederatedCredentialResponse
 */
DeleteApplicationFederatedCredentialResponse Client::deleteApplicationFederatedCredentialWithOptions(const DeleteApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.applicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 删除应用联邦凭证
 *
 * @param request DeleteApplicationFederatedCredentialRequest
 * @return DeleteApplicationFederatedCredentialResponse
 */
DeleteApplicationFederatedCredentialResponse Client::deleteApplicationFederatedCredential(const DeleteApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary 删除ApplicationToken
 *
 * @param request DeleteApplicationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationTokenResponse
 */
DeleteApplicationTokenResponse Client::deleteApplicationTokenWithOptions(const DeleteApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasApplicationTokenId()) {
    query["ApplicationTokenId"] = request.applicationTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 删除ApplicationToken
 *
 * @param request DeleteApplicationTokenRequest
 * @return DeleteApplicationTokenResponse
 */
DeleteApplicationTokenResponse Client::deleteApplicationToken(const DeleteApplicationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationTokenWithOptions(request, runtime);
}

/**
 * @summary 删除品牌
 *
 * @param request DeleteBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBrandResponse
 */
DeleteBrandResponse Client::deleteBrandWithOptions(const DeleteBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 删除品牌
 *
 * @param request DeleteBrandRequest
 * @return DeleteBrandResponse
 */
DeleteBrandResponse Client::deleteBrand(const DeleteBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBrandWithOptions(request, runtime);
}

/**
 * @summary Delete Conditional Access Policy
 *
 * @description When deleting a specified conditional access policy, please ensure that the policy is no longer in use. After deletion, all configuration data will be removed and cannot be recovered.
 *
 * @param request DeleteConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConditionalAccessPolicyResponse
 */
DeleteConditionalAccessPolicyResponse Client::deleteConditionalAccessPolicyWithOptions(const DeleteConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.conditionalAccessPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Delete Conditional Access Policy
 *
 * @description When deleting a specified conditional access policy, please ensure that the policy is no longer in use. After deletion, all configuration data will be removed and cannot be recovered.
 *
 * @param request DeleteConditionalAccessPolicyRequest
 * @return DeleteConditionalAccessPolicyResponse
 */
DeleteConditionalAccessPolicyResponse Client::deleteConditionalAccessPolicy(const DeleteConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 删除自定义条款
 *
 * @param request DeleteCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomPrivacyPolicyResponse
 */
DeleteCustomPrivacyPolicyResponse Client::deleteCustomPrivacyPolicyWithOptions(const DeleteCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyId()) {
    query["CustomPrivacyPolicyId"] = request.customPrivacyPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 删除自定义条款
 *
 * @param request DeleteCustomPrivacyPolicyRequest
 * @return DeleteCustomPrivacyPolicyResponse
 */
DeleteCustomPrivacyPolicyResponse Client::deleteCustomPrivacyPolicy(const DeleteCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom domain name of an Employee Identity and Access Management (EIAM) instance. You cannot delete the initial domain name and default domain name of the instance.
 *
 * @param request DeleteDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomainWithOptions(const DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Deletes a custom domain name of an Employee Identity and Access Management (EIAM) instance. You cannot delete the initial domain name and default domain name of the instance.
 *
 * @param request DeleteDomainRequest
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomain(const DeleteDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. Only the proxy tokens in the disabled state can be deleted.
 *
 * @param request DeleteDomainProxyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainProxyTokenResponse
 */
DeleteDomainProxyTokenResponse Client::deleteDomainProxyTokenWithOptions(const DeleteDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasDomainProxyTokenId()) {
    query["DomainProxyTokenId"] = request.domainProxyTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Deletes a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. Only the proxy tokens in the disabled state can be deleted.
 *
 * @param request DeleteDomainProxyTokenRequest
 * @return DeleteDomainProxyTokenResponse
 */
DeleteDomainProxyTokenResponse Client::deleteDomainProxyToken(const DeleteDomainProxyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainProxyTokenWithOptions(request, runtime);
}

/**
 * @summary 删除联邦凭证提供方
 *
 * @param request DeleteFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFederatedCredentialProviderResponse
 */
DeleteFederatedCredentialProviderResponse Client::deleteFederatedCredentialProviderWithOptions(const DeleteFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.federatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 删除联邦凭证提供方
 *
 * @param request DeleteFederatedCredentialProviderRequest
 * @return DeleteFederatedCredentialProviderResponse
 */
DeleteFederatedCredentialProviderResponse Client::deleteFederatedCredentialProvider(const DeleteFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Deletes the information of an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request DeleteGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Deletes the information of an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request DeleteGroupRequest
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const DeleteGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupWithOptions(request, runtime);
}

/**
 * @summary Delete identity provider
 *
 * @param request DeleteIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProviderWithOptions(const DeleteIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.identityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Delete identity provider
 *
 * @param request DeleteIdentityProviderRequest
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProvider(const DeleteIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Deletes an Enterprise Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS) that you do not need.
 *
 * @description Make sure that the instance to be deleted is no longer used. If the instance is deleted, all data related to the instance will be deleted.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Deletes an Enterprise Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS) that you do not need.
 *
 * @description Make sure that the instance to be deleted is no longer used. If the instance is deleted, all data related to the instance will be deleted.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Delete a network endpoint of a specific type.
 *
 * @param request DeleteNetworkAccessEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkAccessEndpointResponse
 */
DeleteNetworkAccessEndpointResponse Client::deleteNetworkAccessEndpointWithOptions(const DeleteNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
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
 * @summary Delete a network endpoint of a specific type.
 *
 * @param request DeleteNetworkAccessEndpointRequest
 * @return DeleteNetworkAccessEndpointResponse
 */
DeleteNetworkAccessEndpointResponse Client::deleteNetworkAccessEndpoint(const DeleteNetworkAccessEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkAccessEndpointWithOptions(request, runtime);
}

/**
 * @summary 删除网络区域对象
 *
 * @param request DeleteNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkZoneResponse
 */
DeleteNetworkZoneResponse Client::deleteNetworkZoneWithOptions(const DeleteNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.networkZoneId();
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
 * @summary 删除网络区域对象
 *
 * @param request DeleteNetworkZoneRequest
 * @return DeleteNetworkZoneResponse
 */
DeleteNetworkZoneResponse Client::deleteNetworkZone(const DeleteNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary Deletes an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). If the organization has EIAM accounts or child organizations, the delete operation fails.
 *
 * @param request DeleteOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOrganizationalUnitResponse
 */
DeleteOrganizationalUnitResponse Client::deleteOrganizationalUnitWithOptions(const DeleteOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.organizationalUnitId();
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
 * @summary Deletes an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). If the organization has EIAM accounts or child organizations, the delete operation fails.
 *
 * @param request DeleteOrganizationalUnitRequest
 * @return DeleteOrganizationalUnitResponse
 */
DeleteOrganizationalUnitResponse Client::deleteOrganizationalUnit(const DeleteOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Delete organizational unit information, forcibly deleting all accounts and sub-organizations beneath it
 *
 * @param request DeleteOrganizationalUnitChildrenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOrganizationalUnitChildrenResponse
 */
DeleteOrganizationalUnitChildrenResponse Client::deleteOrganizationalUnitChildrenWithOptions(const DeleteOrganizationalUnitChildrenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.organizationalUnitId();
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
 * @summary Delete organizational unit information, forcibly deleting all accounts and sub-organizations beneath it
 *
 * @param request DeleteOrganizationalUnitChildrenRequest
 * @return DeleteOrganizationalUnitChildrenResponse
 */
DeleteOrganizationalUnitChildrenResponse Client::deleteOrganizationalUnitChildren(const DeleteOrganizationalUnitChildrenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOrganizationalUnitChildrenWithOptions(request, runtime);
}

/**
 * @summary Deletes an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS). The information related to the account is cleared.
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Deletes an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS). The information related to the account is cleared.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Disables an enabled Employee Identity and Access Management (EIAM) application. All features of the EIAM application cannot be used if you disable the EIAM application.
 *
 * @description All features of the EIAM application cannot be used if you disable the EIAM application, such as single sign-on (SSO) and account synchronization. Make sure that you acknowledge the risks of the delete operation.
 *
 * @param request DisableApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationResponse
 */
DisableApplicationResponse Client::disableApplicationWithOptions(const DisableApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Disables an enabled Employee Identity and Access Management (EIAM) application. All features of the EIAM application cannot be used if you disable the EIAM application.
 *
 * @description All features of the EIAM application cannot be used if you disable the EIAM application, such as single sign-on (SSO) and account synchronization. Make sure that you acknowledge the risks of the delete operation.
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
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
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
 * @summary 禁用应用联邦凭证
 *
 * @param request DisableApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationFederatedCredentialResponse
 */
DisableApplicationFederatedCredentialResponse Client::disableApplicationFederatedCredentialWithOptions(const DisableApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.applicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 禁用应用联邦凭证
 *
 * @param request DisableApplicationFederatedCredentialRequest
 * @return DisableApplicationFederatedCredentialResponse
 */
DisableApplicationFederatedCredentialResponse Client::disableApplicationFederatedCredential(const DisableApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary Disables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request DisableApplicationProvisioningRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationProvisioningResponse
 */
DisableApplicationProvisioningResponse Client::disableApplicationProvisioningWithOptions(const DisableApplicationProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Disables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request DisableApplicationProvisioningRequest
 * @return DisableApplicationProvisioningResponse
 */
DisableApplicationProvisioningResponse Client::disableApplicationProvisioning(const DisableApplicationProvisioningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationProvisioningWithOptions(request, runtime);
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
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 禁用应用Token
 *
 * @param request DisableApplicationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationTokenResponse
 */
DisableApplicationTokenResponse Client::disableApplicationTokenWithOptions(const DisableApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasApplicationTokenId()) {
    query["ApplicationTokenId"] = request.applicationTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 禁用应用Token
 *
 * @param request DisableApplicationTokenRequest
 * @return DisableApplicationTokenResponse
 */
DisableApplicationTokenResponse Client::disableApplicationToken(const DisableApplicationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationTokenWithOptions(request, runtime);
}

/**
 * @summary 禁用品牌
 *
 * @param request DisableBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableBrandResponse
 */
DisableBrandResponse Client::disableBrandWithOptions(const DisableBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 禁用品牌
 *
 * @param request DisableBrandRequest
 * @return DisableBrandResponse
 */
DisableBrandResponse Client::disableBrand(const DisableBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableBrandWithOptions(request, runtime);
}

/**
 * @summary Disable Conditional Access Policy
 *
 * @description When changing a conditional access policy from an enabled state to a disabled state, the policy will no longer intercept. Please confirm that you are aware of the potential risks associated with this action.
 *
 * @param request DisableConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableConditionalAccessPolicyResponse
 */
DisableConditionalAccessPolicyResponse Client::disableConditionalAccessPolicyWithOptions(const DisableConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.conditionalAccessPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Disable Conditional Access Policy
 *
 * @description When changing a conditional access policy from an enabled state to a disabled state, the policy will no longer intercept. Please confirm that you are aware of the potential risks associated with this action.
 *
 * @param request DisableConditionalAccessPolicyRequest
 * @return DisableConditionalAccessPolicyResponse
 */
DisableConditionalAccessPolicyResponse Client::disableConditionalAccessPolicy(const DisableConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 禁用自定义条款
 *
 * @param request DisableCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCustomPrivacyPolicyResponse
 */
DisableCustomPrivacyPolicyResponse Client::disableCustomPrivacyPolicyWithOptions(const DisableCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyId()) {
    query["CustomPrivacyPolicyId"] = request.customPrivacyPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 禁用自定义条款
 *
 * @param request DisableCustomPrivacyPolicyRequest
 * @return DisableCustomPrivacyPolicyResponse
 */
DisableCustomPrivacyPolicyResponse Client::disableCustomPrivacyPolicy(const DisableCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Disables a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. After the proxy token is disabled, the domain name may not be used as expected.
 *
 * @param request DisableDomainProxyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDomainProxyTokenResponse
 */
DisableDomainProxyTokenResponse Client::disableDomainProxyTokenWithOptions(const DisableDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasDomainProxyTokenId()) {
    query["DomainProxyTokenId"] = request.domainProxyTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Disables a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. After the proxy token is disabled, the domain name may not be used as expected.
 *
 * @param request DisableDomainProxyTokenRequest
 * @return DisableDomainProxyTokenResponse
 */
DisableDomainProxyTokenResponse Client::disableDomainProxyToken(const DisableDomainProxyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDomainProxyTokenWithOptions(request, runtime);
}

/**
 * @summary 禁用联邦凭证提供方
 *
 * @param request DisableFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableFederatedCredentialProviderResponse
 */
DisableFederatedCredentialProviderResponse Client::disableFederatedCredentialProviderWithOptions(const DisableFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.federatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 禁用联邦凭证提供方
 *
 * @param request DisableFederatedCredentialProviderRequest
 * @return DisableFederatedCredentialProviderResponse
 */
DisableFederatedCredentialProviderResponse Client::disableFederatedCredentialProvider(const DisableFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 禁用认证
 *
 * @param request DisableIdentityProviderAuthnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableIdentityProviderAuthnResponse
 */
DisableIdentityProviderAuthnResponse Client::disableIdentityProviderAuthnWithOptions(const DisableIdentityProviderAuthnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.identityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 禁用认证
 *
 * @param request DisableIdentityProviderAuthnRequest
 * @return DisableIdentityProviderAuthnResponse
 */
DisableIdentityProviderAuthnResponse Client::disableIdentityProviderAuthn(const DisableIdentityProviderAuthnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableIdentityProviderAuthnWithOptions(request, runtime);
}

/**
 * @summary Disable identity provider synchronization
 *
 * @param request DisableIdentityProviderUdPullRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableIdentityProviderUdPullResponse
 */
DisableIdentityProviderUdPullResponse Client::disableIdentityProviderUdPullWithOptions(const DisableIdentityProviderUdPullRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.identityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Disable identity provider synchronization
 *
 * @param request DisableIdentityProviderUdPullRequest
 * @return DisableIdentityProviderUdPullResponse
 */
DisableIdentityProviderUdPullResponse Client::disableIdentityProviderUdPull(const DisableIdentityProviderUdPullRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableIdentityProviderUdPullWithOptions(request, runtime);
}

/**
 * @summary Disables the feature of automatically redirecting the initial domain name to the default domain name for an Employee Identity and Access Management (EIAM) instance. After the feature is disabled, users who visit the portal page by using the initial domain name are not redirected to the default domain name.
 *
 * @param request DisableInitDomainAutoRedirectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableInitDomainAutoRedirectResponse
 */
DisableInitDomainAutoRedirectResponse Client::disableInitDomainAutoRedirectWithOptions(const DisableInitDomainAutoRedirectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Disables the feature of automatically redirecting the initial domain name to the default domain name for an Employee Identity and Access Management (EIAM) instance. After the feature is disabled, users who visit the portal page by using the initial domain name are not redirected to the default domain name.
 *
 * @param request DisableInitDomainAutoRedirectRequest
 * @return DisableInitDomainAutoRedirectResponse
 */
DisableInitDomainAutoRedirectResponse Client::disableInitDomainAutoRedirect(const DisableInitDomainAutoRedirectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableInitDomainAutoRedirectWithOptions(request, runtime);
}

/**
 * @summary Disables an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account. If the account is disabled, a success message is returned.
 *
 * @param request DisableUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableUserResponse
 */
DisableUserResponse Client::disableUserWithOptions(const DisableUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Disables an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account. If the account is disabled, a success message is returned.
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
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Enables the Developer API feature for an Employee Identity and Access Management (EIAM) application.
 *
 * @param request EnableApplicationApiInvokeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationApiInvokeResponse
 */
EnableApplicationApiInvokeResponse Client::enableApplicationApiInvokeWithOptions(const EnableApplicationApiInvokeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Enables the Developer API feature for an Employee Identity and Access Management (EIAM) application.
 *
 * @param request EnableApplicationApiInvokeRequest
 * @return EnableApplicationApiInvokeResponse
 */
EnableApplicationApiInvokeResponse Client::enableApplicationApiInvoke(const EnableApplicationApiInvokeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationApiInvokeWithOptions(request, runtime);
}

/**
 * @summary Enables the client key of an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request EnableApplicationClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationClientSecretResponse
 */
EnableApplicationClientSecretResponse Client::enableApplicationClientSecretWithOptions(const EnableApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
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
 * @summary Enables the client key of an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request EnableApplicationClientSecretRequest
 * @return EnableApplicationClientSecretResponse
 */
EnableApplicationClientSecretResponse Client::enableApplicationClientSecret(const EnableApplicationClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationClientSecretWithOptions(request, runtime);
}

/**
 * @summary 启用应用联邦凭证
 *
 * @param request EnableApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationFederatedCredentialResponse
 */
EnableApplicationFederatedCredentialResponse Client::enableApplicationFederatedCredentialWithOptions(const EnableApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.applicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 启用应用联邦凭证
 *
 * @param request EnableApplicationFederatedCredentialRequest
 * @return EnableApplicationFederatedCredentialResponse
 */
EnableApplicationFederatedCredentialResponse Client::enableApplicationFederatedCredential(const EnableApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary Enables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request EnableApplicationProvisioningRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationProvisioningResponse
 */
EnableApplicationProvisioningResponse Client::enableApplicationProvisioningWithOptions(const EnableApplicationProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Enables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request EnableApplicationProvisioningRequest
 * @return EnableApplicationProvisioningResponse
 */
EnableApplicationProvisioningResponse Client::enableApplicationProvisioning(const EnableApplicationProvisioningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationProvisioningWithOptions(request, runtime);
}

/**
 * @summary Enables the single sign-on (SSO) feature for an Employee Identity and Access Management (EIAM) application.
 *
 * @param request EnableApplicationSsoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationSsoResponse
 */
EnableApplicationSsoResponse Client::enableApplicationSsoWithOptions(const EnableApplicationSsoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Enables the single sign-on (SSO) feature for an Employee Identity and Access Management (EIAM) application.
 *
 * @param request EnableApplicationSsoRequest
 * @return EnableApplicationSsoResponse
 */
EnableApplicationSsoResponse Client::enableApplicationSso(const EnableApplicationSsoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationSsoWithOptions(request, runtime);
}

/**
 * @summary 启用应用Token
 *
 * @param request EnableApplicationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationTokenResponse
 */
EnableApplicationTokenResponse Client::enableApplicationTokenWithOptions(const EnableApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasApplicationTokenId()) {
    query["ApplicationTokenId"] = request.applicationTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 启用应用Token
 *
 * @param request EnableApplicationTokenRequest
 * @return EnableApplicationTokenResponse
 */
EnableApplicationTokenResponse Client::enableApplicationToken(const EnableApplicationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationTokenWithOptions(request, runtime);
}

/**
 * @summary 启用品牌
 *
 * @param request EnableBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableBrandResponse
 */
EnableBrandResponse Client::enableBrandWithOptions(const EnableBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 启用品牌
 *
 * @param request EnableBrandRequest
 * @return EnableBrandResponse
 */
EnableBrandResponse Client::enableBrand(const EnableBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableBrandWithOptions(request, runtime);
}

/**
 * @summary Enable Conditional Access Policy
 *
 * @description When changing the status of a conditional access policy from enabled to disabled, the policy will no longer intercept. Please confirm that you are aware of the potential risks associated with this action.
 *
 * @param request EnableConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableConditionalAccessPolicyResponse
 */
EnableConditionalAccessPolicyResponse Client::enableConditionalAccessPolicyWithOptions(const EnableConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.conditionalAccessPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Enable Conditional Access Policy
 *
 * @description When changing the status of a conditional access policy from enabled to disabled, the policy will no longer intercept. Please confirm that you are aware of the potential risks associated with this action.
 *
 * @param request EnableConditionalAccessPolicyRequest
 * @return EnableConditionalAccessPolicyResponse
 */
EnableConditionalAccessPolicyResponse Client::enableConditionalAccessPolicy(const EnableConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 启用自定义条款
 *
 * @param request EnableCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableCustomPrivacyPolicyResponse
 */
EnableCustomPrivacyPolicyResponse Client::enableCustomPrivacyPolicyWithOptions(const EnableCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyId()) {
    query["CustomPrivacyPolicyId"] = request.customPrivacyPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 启用自定义条款
 *
 * @param request EnableCustomPrivacyPolicyRequest
 * @return EnableCustomPrivacyPolicyResponse
 */
EnableCustomPrivacyPolicyResponse Client::enableCustomPrivacyPolicy(const EnableCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Enables a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. The proxy token is used to verify the security of the domain name.
 *
 * @param request EnableDomainProxyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDomainProxyTokenResponse
 */
EnableDomainProxyTokenResponse Client::enableDomainProxyTokenWithOptions(const EnableDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasDomainProxyTokenId()) {
    query["DomainProxyTokenId"] = request.domainProxyTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Enables a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. The proxy token is used to verify the security of the domain name.
 *
 * @param request EnableDomainProxyTokenRequest
 * @return EnableDomainProxyTokenResponse
 */
EnableDomainProxyTokenResponse Client::enableDomainProxyToken(const EnableDomainProxyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDomainProxyTokenWithOptions(request, runtime);
}

/**
 * @summary 启用联邦凭证提供方
 *
 * @param request EnableFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableFederatedCredentialProviderResponse
 */
EnableFederatedCredentialProviderResponse Client::enableFederatedCredentialProviderWithOptions(const EnableFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.federatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 启用联邦凭证提供方
 *
 * @param request EnableFederatedCredentialProviderRequest
 * @return EnableFederatedCredentialProviderResponse
 */
EnableFederatedCredentialProviderResponse Client::enableFederatedCredentialProvider(const EnableFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 启用认证
 *
 * @param request EnableIdentityProviderAuthnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableIdentityProviderAuthnResponse
 */
EnableIdentityProviderAuthnResponse Client::enableIdentityProviderAuthnWithOptions(const EnableIdentityProviderAuthnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.identityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 启用认证
 *
 * @param request EnableIdentityProviderAuthnRequest
 * @return EnableIdentityProviderAuthnResponse
 */
EnableIdentityProviderAuthnResponse Client::enableIdentityProviderAuthn(const EnableIdentityProviderAuthnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableIdentityProviderAuthnWithOptions(request, runtime);
}

/**
 * @summary Enable identity provider synchronization.
 *
 * @param request EnableIdentityProviderUdPullRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableIdentityProviderUdPullResponse
 */
EnableIdentityProviderUdPullResponse Client::enableIdentityProviderUdPullWithOptions(const EnableIdentityProviderUdPullRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.identityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Enable identity provider synchronization.
 *
 * @param request EnableIdentityProviderUdPullRequest
 * @return EnableIdentityProviderUdPullResponse
 */
EnableIdentityProviderUdPullResponse Client::enableIdentityProviderUdPull(const EnableIdentityProviderUdPullRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableIdentityProviderUdPullWithOptions(request, runtime);
}

/**
 * @summary Enables the feature of automatically redirecting the initial domain name to the default domain name for an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request EnableInitDomainAutoRedirectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInitDomainAutoRedirectResponse
 */
EnableInitDomainAutoRedirectResponse Client::enableInitDomainAutoRedirectWithOptions(const EnableInitDomainAutoRedirectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Enables the feature of automatically redirecting the initial domain name to the default domain name for an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request EnableInitDomainAutoRedirectRequest
 * @return EnableInitDomainAutoRedirectResponse
 */
EnableInitDomainAutoRedirectResponse Client::enableInitDomainAutoRedirect(const EnableInitDomainAutoRedirectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableInitDomainAutoRedirectWithOptions(request, runtime);
}

/**
 * @summary Enables an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS).
 *
 * @param request EnableUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableUserResponse
 */
EnableUserResponse Client::enableUserWithOptions(const EnableUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Enables an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS).
 *
 * @param request EnableUserRequest
 * @return EnableUserResponse
 */
EnableUserResponse Client::enableUser(const EnableUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableUserWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an Employee Identity and Access Management (EIAM) application.
 *
 * @param request GetApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the details of an Employee Identity and Access Management (EIAM) application.
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationWithOptions(request, runtime);
}

/**
 * @summary 获取应用联邦凭证
 *
 * @param request GetApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationFederatedCredentialResponse
 */
GetApplicationFederatedCredentialResponse Client::getApplicationFederatedCredentialWithOptions(const GetApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.applicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 获取应用联邦凭证
 *
 * @param request GetApplicationFederatedCredentialRequest
 * @return GetApplicationFederatedCredentialResponse
 */
GetApplicationFederatedCredentialResponse Client::getApplicationFederatedCredential(const GetApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary Queries the permissions of the Developer API feature for an Employee Identity and Access Management (EIAM) application.
 *
 * @param request GetApplicationGrantScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationGrantScopeResponse
 */
GetApplicationGrantScopeResponse Client::getApplicationGrantScopeWithOptions(const GetApplicationGrantScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the permissions of the Developer API feature for an Employee Identity and Access Management (EIAM) application.
 *
 * @param request GetApplicationGrantScopeRequest
 * @return GetApplicationGrantScopeResponse
 */
GetApplicationGrantScopeResponse Client::getApplicationGrantScope(const GetApplicationGrantScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationGrantScopeWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request GetApplicationProvisioningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationProvisioningConfigResponse
 */
GetApplicationProvisioningConfigResponse Client::getApplicationProvisioningConfigWithOptions(const GetApplicationProvisioningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the configuration of the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
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
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the single sign-on (SSO) configuration attributes of an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request GetApplicationSsoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationSsoConfigResponse
 */
GetApplicationSsoConfigResponse Client::getApplicationSsoConfigWithOptions(const GetApplicationSsoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the single sign-on (SSO) configuration attributes of an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request GetApplicationSsoConfigRequest
 * @return GetApplicationSsoConfigResponse
 */
GetApplicationSsoConfigResponse Client::getApplicationSsoConfig(const GetApplicationSsoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationSsoConfigWithOptions(request, runtime);
}

/**
 * @summary 获取应用模板信息
 *
 * @param request GetApplicationTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationTemplateResponse
 */
GetApplicationTemplateResponse Client::getApplicationTemplateWithOptions(const GetApplicationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationTemplateId()) {
    query["ApplicationTemplateId"] = request.applicationTemplateId();
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
 * @summary 获取应用模板信息
 *
 * @param request GetApplicationTemplateRequest
 * @return GetApplicationTemplateResponse
 */
GetApplicationTemplateResponse Client::getApplicationTemplate(const GetApplicationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationTemplateWithOptions(request, runtime);
}

/**
 * @summary 获取品牌详情
 *
 * @param request GetBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBrandResponse
 */
GetBrandResponse Client::getBrandWithOptions(const GetBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 获取品牌详情
 *
 * @param request GetBrandRequest
 * @return GetBrandResponse
 */
GetBrandResponse Client::getBrand(const GetBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBrandWithOptions(request, runtime);
}

/**
 * @summary Get Conditional Access Policy
 *
 * @description Query Conditional Access Policy
 *
 * @param request GetConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConditionalAccessPolicyResponse
 */
GetConditionalAccessPolicyResponse Client::getConditionalAccessPolicyWithOptions(const GetConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.conditionalAccessPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Get Conditional Access Policy
 *
 * @description Query Conditional Access Policy
 *
 * @param request GetConditionalAccessPolicyRequest
 * @return GetConditionalAccessPolicyResponse
 */
GetConditionalAccessPolicyResponse Client::getConditionalAccessPolicy(const GetConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary 获取自定义条款
 *
 * @param request GetCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomPrivacyPolicyResponse
 */
GetCustomPrivacyPolicyResponse Client::getCustomPrivacyPolicyWithOptions(const GetCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyId()) {
    query["CustomPrivacyPolicyId"] = request.customPrivacyPolicyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 获取自定义条款
 *
 * @param request GetCustomPrivacyPolicyRequest
 * @return GetCustomPrivacyPolicyResponse
 */
GetCustomPrivacyPolicyResponse Client::getCustomPrivacyPolicy(const GetCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a domain name of an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request GetDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDomainResponse
 */
GetDomainResponse Client::getDomainWithOptions(const GetDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the information about a domain name of an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request GetDomainRequest
 * @return GetDomainResponse
 */
GetDomainResponse Client::getDomain(const GetDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the domain name system (DNS) challenge records of a domain name of an Employee Identity and Access Management (EIAM) instance. The generated records are used to verify the ownership of the domain name.
 *
 * @param request GetDomainDnsChallengeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDomainDnsChallengeResponse
 */
GetDomainDnsChallengeResponse Client::getDomainDnsChallengeWithOptions(const GetDomainDnsChallengeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the domain name system (DNS) challenge records of a domain name of an Employee Identity and Access Management (EIAM) instance. The generated records are used to verify the ownership of the domain name.
 *
 * @param request GetDomainDnsChallengeRequest
 * @return GetDomainDnsChallengeResponse
 */
GetDomainDnsChallengeResponse Client::getDomainDnsChallenge(const GetDomainDnsChallengeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDomainDnsChallengeWithOptions(request, runtime);
}

/**
 * @summary 获取联邦凭证提供方
 *
 * @param request GetFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFederatedCredentialProviderResponse
 */
GetFederatedCredentialProviderResponse Client::getFederatedCredentialProviderWithOptions(const GetFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.federatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 获取联邦凭证提供方
 *
 * @param request GetFederatedCredentialProviderRequest
 * @return GetFederatedCredentialProviderResponse
 */
GetFederatedCredentialProviderResponse Client::getFederatedCredentialProvider(const GetFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Queries the forgot password configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetForgetPasswordConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetForgetPasswordConfigurationResponse
 */
GetForgetPasswordConfigurationResponse Client::getForgetPasswordConfigurationWithOptions(const GetForgetPasswordConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the forgot password configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetForgetPasswordConfigurationRequest
 * @return GetForgetPasswordConfigurationResponse
 */
GetForgetPasswordConfigurationResponse Client::getForgetPasswordConfiguration(const GetForgetPasswordConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getForgetPasswordConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the information of an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request GetGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroupWithOptions(const GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the information of an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request GetGroupRequest
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const GetGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGroupWithOptions(request, runtime);
}

/**
 * @summary Get identity provider
 *
 * @param request GetIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProviderWithOptions(const GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.identityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Get identity provider
 *
 * @param request GetIdentityProviderRequest
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProvider(const GetIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Get IdP Inbound Synchronization Configuration Information
 *
 * @param request GetIdentityProviderUdPullConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderUdPullConfigurationResponse
 */
GetIdentityProviderUdPullConfigurationResponse Client::getIdentityProviderUdPullConfigurationWithOptions(const GetIdentityProviderUdPullConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.identityProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Get IdP Inbound Synchronization Configuration Information
 *
 * @param request GetIdentityProviderUdPullConfigurationRequest
 * @return GetIdentityProviderUdPullConfigurationResponse
 */
GetIdentityProviderUdPullConfigurationResponse Client::getIdentityProviderUdPullConfiguration(const GetIdentityProviderUdPullConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderUdPullConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the information of an Enterprise Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the information of an Enterprise Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @summary Query the currently effective License information of the instance
 *
 * @description Please ensure that your current instance is no longer in use. When the EIAM instance is deleted, all related data will be deleted.
 *
 * @param request GetInstanceLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceLicenseResponse
 */
GetInstanceLicenseResponse Client::getInstanceLicenseWithOptions(const GetInstanceLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Query the currently effective License information of the instance
 *
 * @description Please ensure that your current instance is no longer in use. When the EIAM instance is deleted, all related data will be deleted.
 *
 * @param request GetInstanceLicenseRequest
 * @return GetInstanceLicenseResponse
 */
GetInstanceLicenseResponse Client::getInstanceLicense(const GetInstanceLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceLicenseWithOptions(request, runtime);
}

/**
 * @summary 获取品牌登录后跳转应用
 *
 * @param request GetLoginRedirectApplicationForBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginRedirectApplicationForBrandResponse
 */
GetLoginRedirectApplicationForBrandResponse Client::getLoginRedirectApplicationForBrandWithOptions(const GetLoginRedirectApplicationForBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 获取品牌登录后跳转应用
 *
 * @param request GetLoginRedirectApplicationForBrandRequest
 * @return GetLoginRedirectApplicationForBrandResponse
 */
GetLoginRedirectApplicationForBrandResponse Client::getLoginRedirectApplicationForBrand(const GetLoginRedirectApplicationForBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginRedirectApplicationForBrandWithOptions(request, runtime);
}

/**
 * @summary Get Network Endpoint Information
 *
 * @param request GetNetworkAccessEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkAccessEndpointResponse
 */
GetNetworkAccessEndpointResponse Client::getNetworkAccessEndpointWithOptions(const GetNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
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
 * @summary Get Network Endpoint Information
 *
 * @param request GetNetworkAccessEndpointRequest
 * @return GetNetworkAccessEndpointResponse
 */
GetNetworkAccessEndpointResponse Client::getNetworkAccessEndpoint(const GetNetworkAccessEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkAccessEndpointWithOptions(request, runtime);
}

/**
 * @summary 获取网络区域对象
 *
 * @param request GetNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkZoneResponse
 */
GetNetworkZoneResponse Client::getNetworkZoneWithOptions(const GetNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.networkZoneId();
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
 * @summary 获取网络区域对象
 *
 * @param request GetNetworkZoneRequest
 * @return GetNetworkZoneResponse
 */
GetNetworkZoneResponse Client::getNetworkZone(const GetNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an organizational unit in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request GetOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrganizationalUnitResponse
 */
GetOrganizationalUnitResponse Client::getOrganizationalUnitWithOptions(const GetOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.organizationalUnitId();
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
 * @summary Queries the information about an organizational unit in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request GetOrganizationalUnitRequest
 * @return GetOrganizationalUnitResponse
 */
GetOrganizationalUnitResponse Client::getOrganizationalUnit(const GetOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Queries the password complexity configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetPasswordComplexityConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordComplexityConfigurationResponse
 */
GetPasswordComplexityConfigurationResponse Client::getPasswordComplexityConfigurationWithOptions(const GetPasswordComplexityConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the password complexity configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetPasswordComplexityConfigurationRequest
 * @return GetPasswordComplexityConfigurationResponse
 */
GetPasswordComplexityConfigurationResponse Client::getPasswordComplexityConfiguration(const GetPasswordComplexityConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordComplexityConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the password expiration configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetPasswordExpirationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordExpirationConfigurationResponse
 */
GetPasswordExpirationConfigurationResponse Client::getPasswordExpirationConfigurationWithOptions(const GetPasswordExpirationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the password expiration configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetPasswordExpirationConfigurationRequest
 * @return GetPasswordExpirationConfigurationResponse
 */
GetPasswordExpirationConfigurationResponse Client::getPasswordExpirationConfiguration(const GetPasswordExpirationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordExpirationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the password history configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetPasswordHistoryConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordHistoryConfigurationResponse
 */
GetPasswordHistoryConfigurationResponse Client::getPasswordHistoryConfigurationWithOptions(const GetPasswordHistoryConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the password history configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetPasswordHistoryConfigurationRequest
 * @return GetPasswordHistoryConfigurationResponse
 */
GetPasswordHistoryConfigurationResponse Client::getPasswordHistoryConfiguration(const GetPasswordHistoryConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordHistoryConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the password initialization configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetPasswordInitializationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordInitializationConfigurationResponse
 */
GetPasswordInitializationConfigurationResponse Client::getPasswordInitializationConfigurationWithOptions(const GetPasswordInitializationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the password initialization configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request GetPasswordInitializationConfigurationRequest
 * @return GetPasswordInitializationConfigurationResponse
 */
GetPasswordInitializationConfigurationResponse Client::getPasswordInitializationConfiguration(const GetPasswordInitializationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordInitializationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the root organizational unit in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request GetRootOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRootOrganizationalUnitResponse
 */
GetRootOrganizationalUnitResponse Client::getRootOrganizationalUnitWithOptions(const GetRootOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the information about the root organizational unit in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request GetRootOrganizationalUnitRequest
 * @return GetRootOrganizationalUnitResponse
 */
GetRootOrganizationalUnitResponse Client::getRootOrganizationalUnit(const GetRootOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRootOrganizationalUnitWithOptions(request, runtime);
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
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
 * @summary Queries the details of an account in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Queries the details of an account in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary 分页查询应用下的应用账户列表
 *
 * @param request ListApplicationAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationAccountsResponse
 */
ListApplicationAccountsResponse Client::listApplicationAccountsWithOptions(const ListApplicationAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @summary 分页查询应用下的应用账户列表
 *
 * @param request ListApplicationAccountsRequest
 * @return ListApplicationAccountsResponse
 */
ListApplicationAccountsResponse Client::listApplicationAccounts(const ListApplicationAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationAccountsWithOptions(request, runtime);
}

/**
 * @summary 查询当前应用下指定用户的所有账号
 *
 * @param request ListApplicationAccountsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationAccountsForUserResponse
 */
ListApplicationAccountsForUserResponse Client::listApplicationAccountsForUserWithOptions(const ListApplicationAccountsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary 查询当前应用下指定用户的所有账号
 *
 * @param request ListApplicationAccountsForUserRequest
 * @return ListApplicationAccountsForUserResponse
 */
ListApplicationAccountsForUserResponse Client::listApplicationAccountsForUser(const ListApplicationAccountsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationAccountsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries all client keys of an Employee Identity and Access Management (EIAM) application. The returned key secret is not masked. If you want to query the key secret that is masked, call the ObtainApplicationClientSecret operation.
 *
 * @param request ListApplicationClientSecretsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationClientSecretsResponse
 */
ListApplicationClientSecretsResponse Client::listApplicationClientSecretsWithOptions(const ListApplicationClientSecretsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries all client keys of an Employee Identity and Access Management (EIAM) application. The returned key secret is not masked. If you want to query the key secret that is masked, call the ObtainApplicationClientSecret operation.
 *
 * @param request ListApplicationClientSecretsRequest
 * @return ListApplicationClientSecretsResponse
 */
ListApplicationClientSecretsResponse Client::listApplicationClientSecrets(const ListApplicationClientSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationClientSecretsWithOptions(request, runtime);
}

/**
 * @summary 查询应用联邦凭证列表
 *
 * @param request ListApplicationFederatedCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationFederatedCredentialsResponse
 */
ListApplicationFederatedCredentialsResponse Client::listApplicationFederatedCredentialsWithOptions(const ListApplicationFederatedCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialType()) {
    query["ApplicationFederatedCredentialType"] = request.applicationFederatedCredentialType();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.previousToken();
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
 * @summary 查询应用联邦凭证列表
 *
 * @param request ListApplicationFederatedCredentialsRequest
 * @return ListApplicationFederatedCredentialsResponse
 */
ListApplicationFederatedCredentialsResponse Client::listApplicationFederatedCredentials(const ListApplicationFederatedCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationFederatedCredentialsWithOptions(request, runtime);
}

/**
 * @summary 根据联邦凭证提供方查询应用联邦凭证列表
 *
 * @param request ListApplicationFederatedCredentialsForProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationFederatedCredentialsForProviderResponse
 */
ListApplicationFederatedCredentialsForProviderResponse Client::listApplicationFederatedCredentialsForProviderWithOptions(const ListApplicationFederatedCredentialsForProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.federatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.previousToken();
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
 * @summary 根据联邦凭证提供方查询应用联邦凭证列表
 *
 * @param request ListApplicationFederatedCredentialsForProviderRequest
 * @return ListApplicationFederatedCredentialsForProviderResponse
 */
ListApplicationFederatedCredentialsForProviderResponse Client::listApplicationFederatedCredentialsForProvider(const ListApplicationFederatedCredentialsForProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationFederatedCredentialsForProviderWithOptions(request, runtime);
}

/**
 * @summary 应用支持账户同步类型列表
 *
 * @param request ListApplicationSupportedProvisionProtocolTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationSupportedProvisionProtocolTypesResponse
 */
ListApplicationSupportedProvisionProtocolTypesResponse Client::listApplicationSupportedProvisionProtocolTypesWithOptions(const ListApplicationSupportedProvisionProtocolTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 应用支持账户同步类型列表
 *
 * @param request ListApplicationSupportedProvisionProtocolTypesRequest
 * @return ListApplicationSupportedProvisionProtocolTypesResponse
 */
ListApplicationSupportedProvisionProtocolTypesResponse Client::listApplicationSupportedProvisionProtocolTypes(const ListApplicationSupportedProvisionProtocolTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationSupportedProvisionProtocolTypesWithOptions(request, runtime);
}

/**
 * @summary 创建应用Token
 *
 * @param request ListApplicationTokensRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationTokensResponse
 */
ListApplicationTokensResponse Client::listApplicationTokensWithOptions(const ListApplicationTokensRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasApplicationTokenType()) {
    query["ApplicationTokenType"] = request.applicationTokenType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 创建应用Token
 *
 * @param request ListApplicationTokensRequest
 * @return ListApplicationTokensResponse
 */
ListApplicationTokensResponse Client::listApplicationTokens(const ListApplicationTokensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationTokensWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or multiple Employee Identity and Access Management (EIAM) applications by page.
 *
 * @param request ListApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplicationsWithOptions(const ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasAuthorizationType()) {
    query["AuthorizationType"] = request.authorizationType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasM2MClientStatus()) {
    query["M2MClientStatus"] = request.m2MClientStatus();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceServerStatus()) {
    query["ResourceServerStatus"] = request.resourceServerStatus();
  }

  if (!!request.hasSsoType()) {
    query["SsoType"] = request.ssoType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
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
 * @summary Queries the information about one or multiple Employee Identity and Access Management (EIAM) applications by page.
 *
 * @param request ListApplicationsRequest
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplications(const ListApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsWithOptions(request, runtime);
}

/**
 * @summary 查询一个EIAM组可访问的应用列表
 *
 * @param request ListApplicationsForGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForGroupResponse
 */
ListApplicationsForGroupResponse Client::listApplicationsForGroupWithOptions(const ListApplicationsForGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @summary 查询一个EIAM组可访问的应用列表
 *
 * @param request ListApplicationsForGroupRequest
 * @return ListApplicationsForGroupResponse
 */
ListApplicationsForGroupResponse Client::listApplicationsForGroup(const ListApplicationsForGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForGroupWithOptions(request, runtime);
}

/**
 * @summary 获取网络访问端点下的App信息。
 *
 * @param request ListApplicationsForNetworkAccessEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForNetworkAccessEndpointResponse
 */
ListApplicationsForNetworkAccessEndpointResponse Client::listApplicationsForNetworkAccessEndpointWithOptions(const ListApplicationsForNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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
 * @summary 获取网络访问端点下的App信息。
 *
 * @param request ListApplicationsForNetworkAccessEndpointRequest
 * @return ListApplicationsForNetworkAccessEndpointResponse
 */
ListApplicationsForNetworkAccessEndpointResponse Client::listApplicationsForNetworkAccessEndpoint(const ListApplicationsForNetworkAccessEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForNetworkAccessEndpointWithOptions(request, runtime);
}

/**
 * @summary 获取NetworkZone关联的应用列表
 *
 * @param request ListApplicationsForNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForNetworkZoneResponse
 */
ListApplicationsForNetworkZoneResponse Client::listApplicationsForNetworkZoneWithOptions(const ListApplicationsForNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.networkZoneId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.previousToken();
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
 * @summary 获取NetworkZone关联的应用列表
 *
 * @param request ListApplicationsForNetworkZoneRequest
 * @return ListApplicationsForNetworkZoneResponse
 */
ListApplicationsForNetworkZoneResponse Client::listApplicationsForNetworkZone(const ListApplicationsForNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary Queries the applications that an Employee Identity and Access Management (EIAM) organization can access. The return result includes the IDs of the applications. If you want to obtain the details of the applications, call the GetApplication operation.
 *
 * @description You can only query the permissions that are directly granted to the EIAM organization by calling the ListApplicationsForOrganizationalUnit operation. You can filter applications by configuring the **ApplicationIds** parameter when you call this operation.
 *
 * @param request ListApplicationsForOrganizationalUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForOrganizationalUnitResponse
 */
ListApplicationsForOrganizationalUnitResponse Client::listApplicationsForOrganizationalUnitWithOptions(const ListApplicationsForOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.organizationalUnitId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @summary Queries the applications that an Employee Identity and Access Management (EIAM) organization can access. The return result includes the IDs of the applications. If you want to obtain the details of the applications, call the GetApplication operation.
 *
 * @description You can only query the permissions that are directly granted to the EIAM organization by calling the ListApplicationsForOrganizationalUnit operation. You can filter applications by configuring the **ApplicationIds** parameter when you call this operation.
 *
 * @param request ListApplicationsForOrganizationalUnitRequest
 * @return ListApplicationsForOrganizationalUnitResponse
 */
ListApplicationsForOrganizationalUnitResponse Client::listApplicationsForOrganizationalUnit(const ListApplicationsForOrganizationalUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForOrganizationalUnitWithOptions(request, runtime);
}

/**
 * @summary Queries the applications that an Employee Identity and Access Management (EIAM) account can access. The return result includes the IDs of the applications. If you want to obtain the details of the applications, call the GetApplication operation.
 *
 * @param request ListApplicationsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForUserResponse
 */
ListApplicationsForUserResponse Client::listApplicationsForUserWithOptions(const ListApplicationsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationIds()) {
    query["ApplicationIds"] = request.applicationIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryMode()) {
    query["QueryMode"] = request.queryMode();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Queries the applications that an Employee Identity and Access Management (EIAM) account can access. The return result includes the IDs of the applications. If you want to obtain the details of the applications, call the GetApplication operation.
 *
 * @param request ListApplicationsForUserRequest
 * @return ListApplicationsForUserResponse
 */
ListApplicationsForUserResponse Client::listApplicationsForUser(const ListApplicationsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsForUserWithOptions(request, runtime);
}

/**
 * @summary 获取品牌列表
 *
 * @param request ListBrandsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBrandsResponse
 */
ListBrandsResponse Client::listBrandsWithOptions(const ListBrandsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.previousToken();
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
 * @summary 获取品牌列表
 *
 * @param request ListBrandsRequest
 * @return ListBrandsResponse
 */
ListBrandsResponse Client::listBrands(const ListBrandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBrandsWithOptions(request, runtime);
}

/**
 * @summary List of Conditional Access Policies
 *
 * @description Paginated query for the list of conditional access policies
 *
 * @param request ListConditionalAccessPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConditionalAccessPoliciesResponse
 */
ListConditionalAccessPoliciesResponse Client::listConditionalAccessPoliciesWithOptions(const ListConditionalAccessPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.previousToken();
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
 * @summary List of Conditional Access Policies
 *
 * @description Paginated query for the list of conditional access policies
 *
 * @param request ListConditionalAccessPoliciesRequest
 * @return ListConditionalAccessPoliciesResponse
 */
ListConditionalAccessPoliciesResponse Client::listConditionalAccessPolicies(const ListConditionalAccessPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConditionalAccessPoliciesWithOptions(request, runtime);
}

/**
 * @summary 获取应用关联的条件访问策略列表
 *
 * @param request ListConditionalAccessPoliciesForApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConditionalAccessPoliciesForApplicationResponse
 */
ListConditionalAccessPoliciesForApplicationResponse Client::listConditionalAccessPoliciesForApplicationWithOptions(const ListConditionalAccessPoliciesForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 获取应用关联的条件访问策略列表
 *
 * @param request ListConditionalAccessPoliciesForApplicationRequest
 * @return ListConditionalAccessPoliciesForApplicationResponse
 */
ListConditionalAccessPoliciesForApplicationResponse Client::listConditionalAccessPoliciesForApplication(const ListConditionalAccessPoliciesForApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConditionalAccessPoliciesForApplicationWithOptions(request, runtime);
}

/**
 * @summary List Conditional Access Policies Associated with Network Areas
 *
 * @description List Conditional Access Policies Associated with Network Zones
 *
 * @param request ListConditionalAccessPoliciesForNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConditionalAccessPoliciesForNetworkZoneResponse
 */
ListConditionalAccessPoliciesForNetworkZoneResponse Client::listConditionalAccessPoliciesForNetworkZoneWithOptions(const ListConditionalAccessPoliciesForNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.networkZoneId();
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
 * @summary List Conditional Access Policies Associated with Network Areas
 *
 * @description List Conditional Access Policies Associated with Network Zones
 *
 * @param request ListConditionalAccessPoliciesForNetworkZoneRequest
 * @return ListConditionalAccessPoliciesForNetworkZoneResponse
 */
ListConditionalAccessPoliciesForNetworkZoneResponse Client::listConditionalAccessPoliciesForNetworkZone(const ListConditionalAccessPoliciesForNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConditionalAccessPoliciesForNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary 获取用户关联的条件访问策略列表
 *
 * @param request ListConditionalAccessPoliciesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConditionalAccessPoliciesForUserResponse
 */
ListConditionalAccessPoliciesForUserResponse Client::listConditionalAccessPoliciesForUserWithOptions(const ListConditionalAccessPoliciesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary 获取用户关联的条件访问策略列表
 *
 * @param request ListConditionalAccessPoliciesForUserRequest
 * @return ListConditionalAccessPoliciesForUserResponse
 */
ListConditionalAccessPoliciesForUserResponse Client::listConditionalAccessPoliciesForUser(const ListConditionalAccessPoliciesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConditionalAccessPoliciesForUserWithOptions(request, runtime);
}

/**
 * @summary 自定义条款列表查询。
 *
 * @param request ListCustomPrivacyPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomPrivacyPoliciesResponse
 */
ListCustomPrivacyPoliciesResponse Client::listCustomPrivacyPoliciesWithOptions(const ListCustomPrivacyPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyNameStartsWith()) {
    query["CustomPrivacyPolicyNameStartsWith"] = request.customPrivacyPolicyNameStartsWith();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.previousToken();
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
 * @summary 自定义条款列表查询。
 *
 * @param request ListCustomPrivacyPoliciesRequest
 * @return ListCustomPrivacyPoliciesResponse
 */
ListCustomPrivacyPoliciesResponse Client::listCustomPrivacyPolicies(const ListCustomPrivacyPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomPrivacyPoliciesWithOptions(request, runtime);
}

/**
 * @summary 获取品牌关联资源的资源
 *
 * @param request ListCustomPrivacyPoliciesForBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomPrivacyPoliciesForBrandResponse
 */
ListCustomPrivacyPoliciesForBrandResponse Client::listCustomPrivacyPoliciesForBrandWithOptions(const ListCustomPrivacyPoliciesForBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.previousToken();
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
 * @summary 获取品牌关联资源的资源
 *
 * @param request ListCustomPrivacyPoliciesForBrandRequest
 * @return ListCustomPrivacyPoliciesForBrandResponse
 */
ListCustomPrivacyPoliciesForBrandResponse Client::listCustomPrivacyPoliciesForBrand(const ListCustomPrivacyPoliciesForBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomPrivacyPoliciesForBrandWithOptions(request, runtime);
}

/**
 * @summary Queries the proxy tokens of a domain name of an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request ListDomainProxyTokensRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDomainProxyTokensResponse
 */
ListDomainProxyTokensResponse Client::listDomainProxyTokensWithOptions(const ListDomainProxyTokensRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the proxy tokens of a domain name of an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request ListDomainProxyTokensRequest
 * @return ListDomainProxyTokensResponse
 */
ListDomainProxyTokensResponse Client::listDomainProxyTokens(const ListDomainProxyTokensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDomainProxyTokensWithOptions(request, runtime);
}

/**
 * @summary Queries a list of domain names of an Employee Identity and Access Management (EIAM) instance. The list contains the initial domain name and custom domain names.
 *
 * @param request ListDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomainsWithOptions(const ListDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries a list of domain names of an Employee Identity and Access Management (EIAM) instance. The list contains the initial domain name and custom domain names.
 *
 * @param request ListDomainsRequest
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomains(const ListDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about Employee Identity and Access Management (EIAM) V1.0 instances or EIAM V2.0 instances.
 *
 * @param request ListEiamInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEiamInstancesResponse
 */
ListEiamInstancesResponse Client::listEiamInstancesWithOptions(const ListEiamInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasInstanceRegionId()) {
    query["InstanceRegionId"] = request.instanceRegionId();
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
 * @summary Queries the information about Employee Identity and Access Management (EIAM) V1.0 instances or EIAM V2.0 instances.
 *
 * @param request ListEiamInstancesRequest
 * @return ListEiamInstancesResponse
 */
ListEiamInstancesResponse Client::listEiamInstances(const ListEiamInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEiamInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the regions in which Employee Identity and Access Management (EIAM) V1.0 instances or EIAM V2.0 instances reside.
 *
 * @param request ListEiamRegionsRequest
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
 * @summary Queries the regions in which Employee Identity and Access Management (EIAM) V1.0 instances or EIAM V2.0 instances reside.
 *
 * @return ListEiamRegionsResponse
 */
ListEiamRegionsResponse Client::listEiamRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEiamRegionsWithOptions(runtime);
}

/**
 * @summary 查询联邦凭证提供方列表
 *
 * @param request ListFederatedCredentialProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFederatedCredentialProvidersResponse
 */
ListFederatedCredentialProvidersResponse Client::listFederatedCredentialProvidersWithOptions(const ListFederatedCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderName()) {
    query["FederatedCredentialProviderName"] = request.federatedCredentialProviderName();
  }

  if (!!request.hasFederatedCredentialProviderType()) {
    query["FederatedCredentialProviderType"] = request.federatedCredentialProviderType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.previousToken();
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
 * @summary 查询联邦凭证提供方列表
 *
 * @param request ListFederatedCredentialProvidersRequest
 * @return ListFederatedCredentialProvidersResponse
 */
ListFederatedCredentialProvidersResponse Client::listFederatedCredentialProviders(const ListFederatedCredentialProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFederatedCredentialProvidersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of account groups in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request ListGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroupsWithOptions(const ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupExternalId()) {
    query["GroupExternalId"] = request.groupExternalId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupNameStartsWith()) {
    query["GroupNameStartsWith"] = request.groupNameStartsWith();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @summary Queries a list of account groups in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request ListGroupsRequest
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroups(const ListGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of account groups to which the permissions to access an application are granted. The returned results contain the group IDs. You can call the GetGroup operation to query the information about an account group based on the group ID.
 *
 * @param request ListGroupsForApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsForApplicationResponse
 */
ListGroupsForApplicationResponse Client::listGroupsForApplicationWithOptions(const ListGroupsForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @summary Queries a list of account groups to which the permissions to access an application are granted. The returned results contain the group IDs. You can call the GetGroup operation to query the information about an account group based on the group ID.
 *
 * @param request ListGroupsForApplicationRequest
 * @return ListGroupsForApplicationResponse
 */
ListGroupsForApplicationResponse Client::listGroupsForApplication(const ListGroupsForApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsForApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries a list of account groups to which an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS) belongs.
 *
 * @param request ListGroupsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUserWithOptions(const ListGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
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
 * @summary Queries a list of account groups to which an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS) belongs.
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
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @summary 获取网络端点下的IdP信息。
 *
 * @param request ListIdentityProvidersForNetworkAccessEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentityProvidersForNetworkAccessEndpointResponse
 */
ListIdentityProvidersForNetworkAccessEndpointResponse Client::listIdentityProvidersForNetworkAccessEndpointWithOptions(const ListIdentityProvidersForNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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
 * @summary 获取网络端点下的IdP信息。
 *
 * @param request ListIdentityProvidersForNetworkAccessEndpointRequest
 * @return ListIdentityProvidersForNetworkAccessEndpointResponse
 */
ListIdentityProvidersForNetworkAccessEndpointResponse Client::listIdentityProvidersForNetworkAccessEndpoint(const ListIdentityProvidersForNetworkAccessEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdentityProvidersForNetworkAccessEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries the information of one or more Enterprise Identity and Access Management (EIAM) instances of Identity as a Service (IDaaS).
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
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
 * @summary Queries the information of one or more Enterprise Identity and Access Management (EIAM) instances of Identity as a Service (IDaaS).
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Get a list of regions that support network access endpoints.
 *
 * @param request ListNetworkAccessEndpointAvailableRegionsRequest
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
 * @summary Get a list of regions that support network access endpoints.
 *
 * @return ListNetworkAccessEndpointAvailableRegionsResponse
 */
ListNetworkAccessEndpointAvailableRegionsResponse Client::listNetworkAccessEndpointAvailableRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkAccessEndpointAvailableRegionsWithOptions(runtime);
}

/**
 * @summary 获取支持NAE的可用区列表
 *
 * @param request ListNetworkAccessEndpointAvailableZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkAccessEndpointAvailableZonesResponse
 */
ListNetworkAccessEndpointAvailableZonesResponse Client::listNetworkAccessEndpointAvailableZonesWithOptions(const ListNetworkAccessEndpointAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNaeRegionId()) {
    query["NaeRegionId"] = request.naeRegionId();
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
 * @summary 获取支持NAE的可用区列表
 *
 * @param request ListNetworkAccessEndpointAvailableZonesRequest
 * @return ListNetworkAccessEndpointAvailableZonesResponse
 */
ListNetworkAccessEndpointAvailableZonesResponse Client::listNetworkAccessEndpointAvailableZones(const ListNetworkAccessEndpointAvailableZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkAccessEndpointAvailableZonesWithOptions(request, runtime);
}

/**
 * @summary 列表查询专属网络端点。
 *
 * @param request ListNetworkAccessEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkAccessEndpointsResponse
 */
ListNetworkAccessEndpointsResponse Client::listNetworkAccessEndpointsWithOptions(const ListNetworkAccessEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNetworkAccessEndpointStatus()) {
    query["NetworkAccessEndpointStatus"] = request.networkAccessEndpointStatus();
  }

  if (!!request.hasNetworkAccessEndpointType()) {
    query["NetworkAccessEndpointType"] = request.networkAccessEndpointType();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVpcRegionId()) {
    query["VpcRegionId"] = request.vpcRegionId();
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
 * @summary 列表查询专属网络端点。
 *
 * @param request ListNetworkAccessEndpointsRequest
 * @return ListNetworkAccessEndpointsResponse
 */
ListNetworkAccessEndpointsResponse Client::listNetworkAccessEndpoints(const ListNetworkAccessEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkAccessEndpointsWithOptions(request, runtime);
}

/**
 * @summary List the access paths under a certain network access endpoint.
 *
 * @param request ListNetworkAccessPathsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkAccessPathsResponse
 */
ListNetworkAccessPathsResponse Client::listNetworkAccessPathsWithOptions(const ListNetworkAccessPathsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
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
 * @summary List the access paths under a certain network access endpoint.
 *
 * @param request ListNetworkAccessPathsRequest
 * @return ListNetworkAccessPathsResponse
 */
ListNetworkAccessPathsResponse Client::listNetworkAccessPaths(const ListNetworkAccessPathsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkAccessPathsWithOptions(request, runtime);
}

/**
 * @summary 网络区域对象列表
 *
 * @param request ListNetworkZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkZonesResponse
 */
ListNetworkZonesResponse Client::listNetworkZonesWithOptions(const ListNetworkZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNetworkZoneIds()) {
    query["NetworkZoneIds"] = request.networkZoneIds();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPreviousToken()) {
    query["PreviousToken"] = request.previousToken();
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
 * @summary 网络区域对象列表
 *
 * @param request ListNetworkZonesRequest
 * @return ListNetworkZonesResponse
 */
ListNetworkZonesResponse Client::listNetworkZones(const ListNetworkZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkZonesWithOptions(request, runtime);
}

/**
 * @summary Queries all parent organizations of an Employee Identity and Access Management (EIAM) organization.
 *
 * @param request ListOrganizationalUnitParentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationalUnitParentsResponse
 */
ListOrganizationalUnitParentsResponse Client::listOrganizationalUnitParentsWithOptions(const ListOrganizationalUnitParentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.organizationalUnitId();
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
 * @summary Queries all parent organizations of an Employee Identity and Access Management (EIAM) organization.
 *
 * @param request ListOrganizationalUnitParentsRequest
 * @return ListOrganizationalUnitParentsResponse
 */
ListOrganizationalUnitParentsResponse Client::listOrganizationalUnitParents(const ListOrganizationalUnitParentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrganizationalUnitParentsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about organizational units in Identity as a Service (IDaaS) Employee IAM (EIAM) by page.
 *
 * @param request ListOrganizationalUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationalUnitsResponse
 */
ListOrganizationalUnitsResponse Client::listOrganizationalUnitsWithOptions(const ListOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.organizationalUnitIds();
  }

  if (!!request.hasOrganizationalUnitName()) {
    query["OrganizationalUnitName"] = request.organizationalUnitName();
  }

  if (!!request.hasOrganizationalUnitNameStartsWith()) {
    query["OrganizationalUnitNameStartsWith"] = request.organizationalUnitNameStartsWith();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
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
 * @summary Queries the information about organizational units in Identity as a Service (IDaaS) Employee IAM (EIAM) by page.
 *
 * @param request ListOrganizationalUnitsRequest
 * @return ListOrganizationalUnitsResponse
 */
ListOrganizationalUnitsResponse Client::listOrganizationalUnits(const ListOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrganizationalUnitsWithOptions(request, runtime);
}

/**
 * @summary Queries the organizations that are allowed to access an Employee Identity and Access Management (EIAM) application by page. The return result includes the IDs of the organizations. If you want to obtain the details of the organizations, call the GetOrganizationalUnit operation.
 *
 * @param request ListOrganizationalUnitsForApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationalUnitsForApplicationResponse
 */
ListOrganizationalUnitsForApplicationResponse Client::listOrganizationalUnitsForApplicationWithOptions(const ListOrganizationalUnitsForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.organizationalUnitIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @summary Queries the organizations that are allowed to access an Employee Identity and Access Management (EIAM) application by page. The return result includes the IDs of the organizations. If you want to obtain the details of the organizations, call the GetOrganizationalUnit operation.
 *
 * @param request ListOrganizationalUnitsForApplicationRequest
 * @return ListOrganizationalUnitsForApplicationResponse
 */
ListOrganizationalUnitsForApplicationResponse Client::listOrganizationalUnitsForApplication(const ListOrganizationalUnitsForApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOrganizationalUnitsForApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the supported Alibaba Cloud regions.
 *
 * @param request ListRegionsRequest
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
 * @summary Queries the supported Alibaba Cloud regions.
 *
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(runtime);
}

/**
 * @summary 查询同步任务
 *
 * @param request ListSynchronizationJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSynchronizationJobsResponse
 */
ListSynchronizationJobsResponse Client::listSynchronizationJobsWithOptions(const ListSynchronizationJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
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
 * @summary 查询同步任务
 *
 * @param request ListSynchronizationJobsRequest
 * @return ListSynchronizationJobsResponse
 */
ListSynchronizationJobsResponse Client::listSynchronizationJobs(const ListSynchronizationJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSynchronizationJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of accounts in Identity as a Service (IDaaS) Employee IAM (EIAM) by page.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayNameStartsWith()) {
    query["DisplayNameStartsWith"] = request.displayNameStartsWith();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.organizationalUnitId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasPhoneRegion()) {
    query["PhoneRegion"] = request.phoneRegion();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserExternalId()) {
    query["UserExternalId"] = request.userExternalId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
  }

  if (!!request.hasUserSourceId()) {
    query["UserSourceId"] = request.userSourceId();
  }

  if (!!request.hasUserSourceType()) {
    query["UserSourceType"] = request.userSourceType();
  }

  if (!!request.hasUsernameStartsWith()) {
    query["UsernameStartsWith"] = request.usernameStartsWith();
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
 * @summary Queries the details of accounts in Identity as a Service (IDaaS) Employee IAM (EIAM) by page.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Queries the accounts that are allowed to access an Employee Identity and Access Management (EIAM) application. The return results include the IDs of the accounts. If you need to obtain the details of the accounts, call the GetUser operation.
 *
 * @param request ListUsersForApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersForApplicationResponse
 */
ListUsersForApplicationResponse Client::listUsersForApplicationWithOptions(const ListUsersForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
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
 * @summary Queries the accounts that are allowed to access an Employee Identity and Access Management (EIAM) application. The return results include the IDs of the accounts. If you need to obtain the details of the accounts, call the GetUser operation.
 *
 * @param request ListUsersForApplicationRequest
 * @return ListUsersForApplicationResponse
 */
ListUsersForApplicationResponse Client::listUsersForApplication(const ListUsersForApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersForApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the information of accounts in an Employee Identity and Access Management (EIAM) group of Identity as a Service (IDaaS).
 *
 * @param request ListUsersForGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroupWithOptions(const ListUsersForGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
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
 * @summary Queries the information of accounts in an Employee Identity and Access Management (EIAM) group of Identity as a Service (IDaaS).
 *
 * @param request ListUsersForGroupRequest
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroup(const ListUsersForGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersForGroupWithOptions(request, runtime);
}

/**
 * @summary Queries a client key of an Employee Identity and Access Management (EIAM) application. The returned key secret is masked. If you want to query the key secret that is not masked, call the ListApplicationClientSecrets operation.
 *
 * @param request ObtainApplicationClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ObtainApplicationClientSecretResponse
 */
ObtainApplicationClientSecretResponse Client::obtainApplicationClientSecretWithOptions(const ObtainApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
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
 * @summary Queries a client key of an Employee Identity and Access Management (EIAM) application. The returned key secret is masked. If you want to query the key secret that is not masked, call the ListApplicationClientSecrets operation.
 *
 * @param request ObtainApplicationClientSecretRequest
 * @return ObtainApplicationClientSecretResponse
 */
ObtainApplicationClientSecretResponse Client::obtainApplicationClientSecret(const ObtainApplicationClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return obtainApplicationClientSecretWithOptions(request, runtime);
}

/**
 * @summary 查询指定应用Token
 *
 * @param request ObtainApplicationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ObtainApplicationTokenResponse
 */
ObtainApplicationTokenResponse Client::obtainApplicationTokenWithOptions(const ObtainApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasApplicationTokenId()) {
    query["ApplicationTokenId"] = request.applicationTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 查询指定应用Token
 *
 * @param request ObtainApplicationTokenRequest
 * @return ObtainApplicationTokenResponse
 */
ObtainApplicationTokenResponse Client::obtainApplicationToken(const ObtainApplicationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return obtainApplicationTokenWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a proxy token of a domain name of an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request ObtainDomainProxyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ObtainDomainProxyTokenResponse
 */
ObtainDomainProxyTokenResponse Client::obtainDomainProxyTokenWithOptions(const ObtainDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasDomainProxyTokenId()) {
    query["DomainProxyTokenId"] = request.domainProxyTokenId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Queries the information about a proxy token of a domain name of an Employee Identity and Access Management (EIAM) instance.
 *
 * @param request ObtainDomainProxyTokenRequest
 * @return ObtainDomainProxyTokenResponse
 */
ObtainDomainProxyTokenResponse Client::obtainDomainProxyToken(const ObtainDomainProxyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return obtainDomainProxyTokenWithOptions(request, runtime);
}

/**
 * @summary 删除一个当前应用下的指定员工的应用账号
 *
 * @param request RemoveApplicationAccountFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveApplicationAccountFromUserResponse
 */
RemoveApplicationAccountFromUserResponse Client::removeApplicationAccountFromUserWithOptions(const RemoveApplicationAccountFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationAccountId()) {
    query["ApplicationAccountId"] = request.applicationAccountId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary 删除一个当前应用下的指定员工的应用账号
 *
 * @param request RemoveApplicationAccountFromUserRequest
 * @return RemoveApplicationAccountFromUserResponse
 */
RemoveApplicationAccountFromUserResponse Client::removeApplicationAccountFromUser(const RemoveApplicationAccountFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeApplicationAccountFromUserWithOptions(request, runtime);
}

/**
 * @summary 移除品牌关联条款
 *
 * @param request RemoveCustomPrivacyPoliciesFromBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveCustomPrivacyPoliciesFromBrandResponse
 */
RemoveCustomPrivacyPoliciesFromBrandResponse Client::removeCustomPrivacyPoliciesFromBrandWithOptions(const RemoveCustomPrivacyPoliciesFromBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasCustomPrivacyPolicyIds()) {
    query["CustomPrivacyPolicyIds"] = request.customPrivacyPolicyIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 移除品牌关联条款
 *
 * @param request RemoveCustomPrivacyPoliciesFromBrandRequest
 * @return RemoveCustomPrivacyPoliciesFromBrandResponse
 */
RemoveCustomPrivacyPoliciesFromBrandResponse Client::removeCustomPrivacyPoliciesFromBrand(const RemoveCustomPrivacyPoliciesFromBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeCustomPrivacyPoliciesFromBrandWithOptions(request, runtime);
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.organizationalUnitIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
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
 * @summary Revokes the permissions to access an application from multiple account groups at a time in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request RevokeApplicationFromGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeApplicationFromGroupsResponse
 */
RevokeApplicationFromGroupsResponse Client::revokeApplicationFromGroupsWithOptions(const RevokeApplicationFromGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Revokes the permissions to access an application from multiple account groups at a time in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request RevokeApplicationFromGroupsRequest
 * @return RevokeApplicationFromGroupsResponse
 */
RevokeApplicationFromGroupsResponse Client::revokeApplicationFromGroups(const RevokeApplicationFromGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeApplicationFromGroupsWithOptions(request, runtime);
}

/**
 * @summary Revokes the permissions to access an application from multiple Employee Identity and Access Management (EIAM) organizations at a time.
 *
 * @param request RevokeApplicationFromOrganizationalUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeApplicationFromOrganizationalUnitsResponse
 */
RevokeApplicationFromOrganizationalUnitsResponse Client::revokeApplicationFromOrganizationalUnitsWithOptions(const RevokeApplicationFromOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.organizationalUnitIds();
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
 * @summary Revokes the permissions to access an application from multiple Employee Identity and Access Management (EIAM) organizations at a time.
 *
 * @param request RevokeApplicationFromOrganizationalUnitsRequest
 * @return RevokeApplicationFromOrganizationalUnitsResponse
 */
RevokeApplicationFromOrganizationalUnitsResponse Client::revokeApplicationFromOrganizationalUnits(const RevokeApplicationFromOrganizationalUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeApplicationFromOrganizationalUnitsWithOptions(request, runtime);
}

/**
 * @summary Revokes the permissions to access an application from multiple Employee Identity and Access Management (EIAM) accounts at a time.
 *
 * @param request RevokeApplicationFromUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeApplicationFromUsersResponse
 */
RevokeApplicationFromUsersResponse Client::revokeApplicationFromUsersWithOptions(const RevokeApplicationFromUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.userIds();
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
 * @summary Revokes the permissions to access an application from multiple Employee Identity and Access Management (EIAM) accounts at a time.
 *
 * @param request RevokeApplicationFromUsersRequest
 * @return RevokeApplicationFromUsersResponse
 */
RevokeApplicationFromUsersResponse Client::revokeApplicationFromUsers(const RevokeApplicationFromUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeApplicationFromUsersWithOptions(request, runtime);
}

/**
 * @summary Creates a synchronization job and immediately runs the job.
 *
 * @param request RunSynchronizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSynchronizationJobResponse
 */
RunSynchronizationJobResponse Client::runSynchronizationJobWithOptions(const RunSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPasswordInitialization()) {
    query["PasswordInitialization"] = request.passwordInitialization();
  }

  if (!!request.hasSynchronizationScopeConfig()) {
    query["SynchronizationScopeConfig"] = request.synchronizationScopeConfig();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.targetId();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.targetType();
  }

  if (!!request.hasUserIdentityTypes()) {
    query["UserIdentityTypes"] = request.userIdentityTypes();
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
 * @summary Creates a synchronization job and immediately runs the job.
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
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasGrantScopes()) {
    query["GrantScopes"] = request.grantScopes();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Configures the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
 *
 * @param request SetApplicationProvisioningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApplicationProvisioningConfigResponse
 */
SetApplicationProvisioningConfigResponse Client::setApplicationProvisioningConfigWithOptions(const SetApplicationProvisioningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasCallbackProvisioningConfig()) {
    query["CallbackProvisioningConfig"] = request.callbackProvisioningConfig();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
  }

  if (!!request.hasProvisionPassword()) {
    query["ProvisionPassword"] = request.provisionPassword();
  }

  if (!!request.hasProvisionProtocolType()) {
    query["ProvisionProtocolType"] = request.provisionProtocolType();
  }

  if (!!request.hasScimProvisioningConfig()) {
    query["ScimProvisioningConfig"] = request.scimProvisioningConfig();
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
 * @summary Configures the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
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
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitIds()) {
    query["OrganizationalUnitIds"] = request.organizationalUnitIds();
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
 * @summary Specifies the single sign-on (SSO) configuration attributes of an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @description In IDaaS EIAM, the application management feature supports multiple SSO protocols for applications, including SAML 2.0 and OIDC protocols. Each application supports only one protocol, and the protocol cannot be changed after the application is created. You can specify the SSO configuration attributes of an application based on the supported SSO protocol.
 *
 * @param request SetApplicationSsoConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetApplicationSsoConfigResponse
 */
SetApplicationSsoConfigResponse Client::setApplicationSsoConfigWithOptions(const SetApplicationSsoConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInitLoginType()) {
    query["InitLoginType"] = request.initLoginType();
  }

  if (!!request.hasInitLoginUrl()) {
    query["InitLoginUrl"] = request.initLoginUrl();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOidcSsoConfig()) {
    query["OidcSsoConfig"] = request.oidcSsoConfig();
  }

  if (!!request.hasSamlSsoConfig()) {
    query["SamlSsoConfig"] = request.samlSsoConfig();
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
 * @summary Specifies the single sign-on (SSO) configuration attributes of an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
 *
 * @description In IDaaS EIAM, the application management feature supports multiple SSO protocols for applications, including SAML 2.0 and OIDC protocols. Each application supports only one protocol, and the protocol cannot be changed after the application is created. You can specify the SSO configuration attributes of an application based on the supported SSO protocol.
 *
 * @param request SetApplicationSsoConfigRequest
 * @return SetApplicationSsoConfigResponse
 */
SetApplicationSsoConfigResponse Client::setApplicationSsoConfig(const SetApplicationSsoConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setApplicationSsoConfigWithOptions(request, runtime);
}

/**
 * @summary Sets a domain name of an Employee Identity and Access Management (EIAM) instance as the default domain name.
 *
 * @param request SetDefaultDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultDomainResponse
 */
SetDefaultDomainResponse Client::setDefaultDomainWithOptions(const SetDefaultDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Sets a domain name of an Employee Identity and Access Management (EIAM) instance as the default domain name.
 *
 * @param request SetDefaultDomainRequest
 * @return SetDefaultDomainResponse
 */
SetDefaultDomainResponse Client::setDefaultDomain(const SetDefaultDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultDomainWithOptions(request, runtime);
}

/**
 * @summary Configures a forgot password policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request SetForgetPasswordConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetForgetPasswordConfigurationResponse
 */
SetForgetPasswordConfigurationResponse Client::setForgetPasswordConfigurationWithOptions(const SetForgetPasswordConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationChannels()) {
    query["AuthenticationChannels"] = request.authenticationChannels();
  }

  if (!!request.hasForgetPasswordStatus()) {
    query["ForgetPasswordStatus"] = request.forgetPasswordStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Configures a forgot password policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request SetForgetPasswordConfigurationRequest
 * @return SetForgetPasswordConfigurationResponse
 */
SetForgetPasswordConfigurationResponse Client::setForgetPasswordConfiguration(const SetForgetPasswordConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setForgetPasswordConfigurationWithOptions(request, runtime);
}

/**
 * @summary Update IdP synchronization configuration.
 *
 * @param request SetIdentityProviderUdPullConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetIdentityProviderUdPullConfigurationResponse
 */
SetIdentityProviderUdPullConfigurationResponse Client::setIdentityProviderUdPullConfigurationWithOptions(const SetIdentityProviderUdPullConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupSyncStatus()) {
    query["GroupSyncStatus"] = request.groupSyncStatus();
  }

  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.identityProviderId();
  }

  if (!!request.hasIncrementalCallbackStatus()) {
    query["IncrementalCallbackStatus"] = request.incrementalCallbackStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLdapUdPullConfig()) {
    query["LdapUdPullConfig"] = request.ldapUdPullConfig();
  }

  if (!!request.hasPeriodicSyncConfig()) {
    query["PeriodicSyncConfig"] = request.periodicSyncConfig();
  }

  if (!!request.hasPeriodicSyncStatus()) {
    query["PeriodicSyncStatus"] = request.periodicSyncStatus();
  }

  if (!!request.hasPullProtectedRule()) {
    query["PullProtectedRule"] = request.pullProtectedRule();
  }

  if (!!request.hasUdSyncScopeConfig()) {
    query["UdSyncScopeConfig"] = request.udSyncScopeConfig();
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
 * @summary Update IdP synchronization configuration.
 *
 * @param request SetIdentityProviderUdPullConfigurationRequest
 * @return SetIdentityProviderUdPullConfigurationResponse
 */
SetIdentityProviderUdPullConfigurationResponse Client::setIdentityProviderUdPullConfiguration(const SetIdentityProviderUdPullConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setIdentityProviderUdPullConfigurationWithOptions(request, runtime);
}

/**
 * @summary 为品牌设置登录后跳转应用
 *
 * @param request SetLoginRedirectApplicationForBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoginRedirectApplicationForBrandResponse
 */
SetLoginRedirectApplicationForBrandResponse Client::setLoginRedirectApplicationForBrandWithOptions(const SetLoginRedirectApplicationForBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 为品牌设置登录后跳转应用
 *
 * @param request SetLoginRedirectApplicationForBrandRequest
 * @return SetLoginRedirectApplicationForBrandResponse
 */
SetLoginRedirectApplicationForBrandResponse Client::setLoginRedirectApplicationForBrand(const SetLoginRedirectApplicationForBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoginRedirectApplicationForBrandWithOptions(request, runtime);
}

/**
 * @summary Configures a password complexity policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request SetPasswordComplexityConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordComplexityConfigurationResponse
 */
SetPasswordComplexityConfigurationResponse Client::setPasswordComplexityConfigurationWithOptions(const SetPasswordComplexityConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPasswordComplexityRules()) {
    query["PasswordComplexityRules"] = request.passwordComplexityRules();
  }

  if (!!request.hasPasswordMinLength()) {
    query["PasswordMinLength"] = request.passwordMinLength();
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
 * @summary Configures a password complexity policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request SetPasswordComplexityConfigurationRequest
 * @return SetPasswordComplexityConfigurationResponse
 */
SetPasswordComplexityConfigurationResponse Client::setPasswordComplexityConfiguration(const SetPasswordComplexityConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordComplexityConfigurationWithOptions(request, runtime);
}

/**
 * @summary Configures a password expiration policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request SetPasswordExpirationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordExpirationConfigurationResponse
 */
SetPasswordExpirationConfigurationResponse Client::setPasswordExpirationConfigurationWithOptions(const SetPasswordExpirationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveAuthenticationSourceIds()) {
    query["EffectiveAuthenticationSourceIds"] = request.effectiveAuthenticationSourceIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPasswordExpirationAction()) {
    query["PasswordExpirationAction"] = request.passwordExpirationAction();
  }

  if (!!request.hasPasswordExpirationNotificationChannels()) {
    query["PasswordExpirationNotificationChannels"] = request.passwordExpirationNotificationChannels();
  }

  if (!!request.hasPasswordExpirationNotificationDuration()) {
    query["PasswordExpirationNotificationDuration"] = request.passwordExpirationNotificationDuration();
  }

  if (!!request.hasPasswordExpirationNotificationStatus()) {
    query["PasswordExpirationNotificationStatus"] = request.passwordExpirationNotificationStatus();
  }

  if (!!request.hasPasswordExpirationStatus()) {
    query["PasswordExpirationStatus"] = request.passwordExpirationStatus();
  }

  if (!!request.hasPasswordForcedUpdateDuration()) {
    query["PasswordForcedUpdateDuration"] = request.passwordForcedUpdateDuration();
  }

  if (!!request.hasPasswordValidMaxDay()) {
    query["PasswordValidMaxDay"] = request.passwordValidMaxDay();
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
 * @summary Configures a password expiration policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request SetPasswordExpirationConfigurationRequest
 * @return SetPasswordExpirationConfigurationResponse
 */
SetPasswordExpirationConfigurationResponse Client::setPasswordExpirationConfiguration(const SetPasswordExpirationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordExpirationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Configures a password history policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request SetPasswordHistoryConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordHistoryConfigurationResponse
 */
SetPasswordHistoryConfigurationResponse Client::setPasswordHistoryConfigurationWithOptions(const SetPasswordHistoryConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPasswordHistoryMaxRetention()) {
    query["PasswordHistoryMaxRetention"] = request.passwordHistoryMaxRetention();
  }

  if (!!request.hasPasswordHistoryStatus()) {
    query["PasswordHistoryStatus"] = request.passwordHistoryStatus();
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
 * @summary Configures a password history policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request SetPasswordHistoryConfigurationRequest
 * @return SetPasswordHistoryConfigurationResponse
 */
SetPasswordHistoryConfigurationResponse Client::setPasswordHistoryConfiguration(const SetPasswordHistoryConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordHistoryConfigurationWithOptions(request, runtime);
}

/**
 * @summary Sets the password initialization configurations for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request SetPasswordInitializationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordInitializationConfigurationResponse
 */
SetPasswordInitializationConfigurationResponse Client::setPasswordInitializationConfigurationWithOptions(const SetPasswordInitializationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPasswordForcedUpdateStatus()) {
    query["PasswordForcedUpdateStatus"] = request.passwordForcedUpdateStatus();
  }

  if (!!request.hasPasswordInitializationNotificationChannels()) {
    query["PasswordInitializationNotificationChannels"] = request.passwordInitializationNotificationChannels();
  }

  if (!!request.hasPasswordInitializationStatus()) {
    query["PasswordInitializationStatus"] = request.passwordInitializationStatus();
  }

  if (!!request.hasPasswordInitializationType()) {
    query["PasswordInitializationType"] = request.passwordInitializationType();
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
 * @summary Sets the password initialization configurations for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request SetPasswordInitializationConfigurationRequest
 * @return SetPasswordInitializationConfigurationResponse
 */
SetPasswordInitializationConfigurationResponse Client::setPasswordInitializationConfiguration(const SetPasswordInitializationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordInitializationConfigurationWithOptions(request, runtime);
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.organizationalUnitId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Unlocks an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS) that is locked.
 *
 * @param request UnlockUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockUserResponse
 */
UnlockUserResponse Client::unlockUserWithOptions(const UnlockUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Unlocks an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS) that is locked.
 *
 * @param request UnlockUserRequest
 * @return UnlockUserResponse
 */
UnlockUserResponse Client::unlockUser(const UnlockUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockUserWithOptions(request, runtime);
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
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasAuthorizationType()) {
    query["AuthorizationType"] = request.authorizationType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 更新应用的指定ClientSecret的到期时间
 *
 * @param request UpdateApplicationClientSecretExpirationTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationClientSecretExpirationTimeResponse
 */
UpdateApplicationClientSecretExpirationTimeResponse Client::updateApplicationClientSecretExpirationTimeWithOptions(const UpdateApplicationClientSecretExpirationTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasExpirationTime()) {
    query["ExpirationTime"] = request.expirationTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
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
 * @summary 更新应用的指定ClientSecret的到期时间
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
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 更新应用联邦凭证
 *
 * @param request UpdateApplicationFederatedCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationFederatedCredentialResponse
 */
UpdateApplicationFederatedCredentialResponse Client::updateApplicationFederatedCredentialWithOptions(const UpdateApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.applicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasAttributeMappings()) {
    query["AttributeMappings"] = request.attributeMappings();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVerificationCondition()) {
    query["VerificationCondition"] = request.verificationCondition();
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
 * @summary 更新应用联邦凭证
 *
 * @param request UpdateApplicationFederatedCredentialRequest
 * @return UpdateApplicationFederatedCredentialResponse
 */
UpdateApplicationFederatedCredentialResponse Client::updateApplicationFederatedCredential(const UpdateApplicationFederatedCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationFederatedCredentialWithOptions(request, runtime);
}

/**
 * @summary 更新应用联邦凭证描述
 *
 * @param request UpdateApplicationFederatedCredentialDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationFederatedCredentialDescriptionResponse
 */
UpdateApplicationFederatedCredentialDescriptionResponse Client::updateApplicationFederatedCredentialDescriptionWithOptions(const UpdateApplicationFederatedCredentialDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationFederatedCredentialId()) {
    query["ApplicationFederatedCredentialId"] = request.applicationFederatedCredentialId();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 更新应用联邦凭证描述
 *
 * @param request UpdateApplicationFederatedCredentialDescriptionRequest
 * @return UpdateApplicationFederatedCredentialDescriptionResponse
 */
UpdateApplicationFederatedCredentialDescriptionResponse Client::updateApplicationFederatedCredentialDescription(const UpdateApplicationFederatedCredentialDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationFederatedCredentialDescriptionWithOptions(request, runtime);
}

/**
 * @summary 更新应用基本信息
 *
 * @param request UpdateApplicationInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationInfoResponse
 */
UpdateApplicationInfoResponse Client::updateApplicationInfoWithOptions(const UpdateApplicationInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasApplicationVisibility()) {
    query["ApplicationVisibility"] = request.applicationVisibility();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogoUrl()) {
    query["LogoUrl"] = request.logoUrl();
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
 * @summary 更新应用基本信息
 *
 * @param request UpdateApplicationInfoRequest
 * @return UpdateApplicationInfoResponse
 */
UpdateApplicationInfoResponse Client::updateApplicationInfo(const UpdateApplicationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationInfoWithOptions(request, runtime);
}

/**
 * @summary 更新ApplicationToken过期时间
 *
 * @param request UpdateApplicationTokenExpirationTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationTokenExpirationTimeResponse
 */
UpdateApplicationTokenExpirationTimeResponse Client::updateApplicationTokenExpirationTimeWithOptions(const UpdateApplicationTokenExpirationTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasApplicationTokenId()) {
    query["ApplicationTokenId"] = request.applicationTokenId();
  }

  if (!!request.hasExpirationTime()) {
    query["ExpirationTime"] = request.expirationTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 更新ApplicationToken过期时间
 *
 * @param request UpdateApplicationTokenExpirationTimeRequest
 * @return UpdateApplicationTokenExpirationTimeResponse
 */
UpdateApplicationTokenExpirationTimeResponse Client::updateApplicationTokenExpirationTime(const UpdateApplicationTokenExpirationTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationTokenExpirationTimeWithOptions(request, runtime);
}

/**
 * @summary 修改品牌
 *
 * @param request UpdateBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBrandResponse
 */
UpdateBrandResponse Client::updateBrandWithOptions(const UpdateBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasBrandName()) {
    query["BrandName"] = request.brandName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 修改品牌
 *
 * @param request UpdateBrandRequest
 * @return UpdateBrandResponse
 */
UpdateBrandResponse Client::updateBrand(const UpdateBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBrandWithOptions(request, runtime);
}

/**
 * @summary Update Conditional Access Policy
 *
 * @description Update Conditional Access Policy
 *
 * @param request UpdateConditionalAccessPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConditionalAccessPolicyResponse
 */
UpdateConditionalAccessPolicyResponse Client::updateConditionalAccessPolicyWithOptions(const UpdateConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.conditionalAccessPolicyId();
  }

  if (!!request.hasConditionalAccessPolicyName()) {
    query["ConditionalAccessPolicyName"] = request.conditionalAccessPolicyName();
  }

  if (!!request.hasConditionsConfig()) {
    query["ConditionsConfig"] = request.conditionsConfig();
  }

  if (!!request.hasDecisionConfig()) {
    query["DecisionConfig"] = request.decisionConfig();
  }

  if (!!request.hasDecisionType()) {
    query["DecisionType"] = request.decisionType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
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
 * @summary Update Conditional Access Policy
 *
 * @description Update Conditional Access Policy
 *
 * @param request UpdateConditionalAccessPolicyRequest
 * @return UpdateConditionalAccessPolicyResponse
 */
UpdateConditionalAccessPolicyResponse Client::updateConditionalAccessPolicy(const UpdateConditionalAccessPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConditionalAccessPolicyWithOptions(request, runtime);
}

/**
 * @summary Update Conditional Access Policy Description
 *
 * @description Update Conditional Access Policy Description
 *
 * @param request UpdateConditionalAccessPolicyDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConditionalAccessPolicyDescriptionResponse
 */
UpdateConditionalAccessPolicyDescriptionResponse Client::updateConditionalAccessPolicyDescriptionWithOptions(const UpdateConditionalAccessPolicyDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConditionalAccessPolicyId()) {
    query["ConditionalAccessPolicyId"] = request.conditionalAccessPolicyId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Update Conditional Access Policy Description
 *
 * @description Update Conditional Access Policy Description
 *
 * @param request UpdateConditionalAccessPolicyDescriptionRequest
 * @return UpdateConditionalAccessPolicyDescriptionResponse
 */
UpdateConditionalAccessPolicyDescriptionResponse Client::updateConditionalAccessPolicyDescription(const UpdateConditionalAccessPolicyDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConditionalAccessPolicyDescriptionWithOptions(request, runtime);
}

/**
 * @summary 更新自定义条款
 *
 * @param request UpdateCustomPrivacyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomPrivacyPolicyResponse
 */
UpdateCustomPrivacyPolicyResponse Client::updateCustomPrivacyPolicyWithOptions(const UpdateCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPrivacyPolicyContents()) {
    query["CustomPrivacyPolicyContents"] = request.customPrivacyPolicyContents();
  }

  if (!!request.hasCustomPrivacyPolicyId()) {
    query["CustomPrivacyPolicyId"] = request.customPrivacyPolicyId();
  }

  if (!!request.hasCustomPrivacyPolicyName()) {
    query["CustomPrivacyPolicyName"] = request.customPrivacyPolicyName();
  }

  if (!!request.hasDefaultLanguageCode()) {
    query["DefaultLanguageCode"] = request.defaultLanguageCode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserConsentType()) {
    query["UserConsentType"] = request.userConsentType();
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
 * @summary 更新自定义条款
 *
 * @param request UpdateCustomPrivacyPolicyRequest
 * @return UpdateCustomPrivacyPolicyResponse
 */
UpdateCustomPrivacyPolicyResponse Client::updateCustomPrivacyPolicy(const UpdateCustomPrivacyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomPrivacyPolicyWithOptions(request, runtime);
}

/**
 * @summary 修改域名关联的品牌。
 *
 * @param request UpdateDomainBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainBrandResponse
 */
UpdateDomainBrandResponse Client::updateDomainBrandWithOptions(const UpdateDomainBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandId()) {
    query["BrandId"] = request.brandId();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 修改域名关联的品牌。
 *
 * @param request UpdateDomainBrandRequest
 * @return UpdateDomainBrandResponse
 */
UpdateDomainBrandResponse Client::updateDomainBrand(const UpdateDomainBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainBrandWithOptions(request, runtime);
}

/**
 * @summary 更新域名备案号。
 *
 * @param request UpdateDomainIcpNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainIcpNumberResponse
 */
UpdateDomainIcpNumberResponse Client::updateDomainIcpNumberWithOptions(const UpdateDomainIcpNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasIcpNumber()) {
    query["IcpNumber"] = request.icpNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 更新域名备案号。
 *
 * @param request UpdateDomainIcpNumberRequest
 * @return UpdateDomainIcpNumberResponse
 */
UpdateDomainIcpNumberResponse Client::updateDomainIcpNumber(const UpdateDomainIcpNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainIcpNumberWithOptions(request, runtime);
}

/**
 * @summary 更新联邦凭证提供方
 *
 * @param request UpdateFederatedCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFederatedCredentialProviderResponse
 */
UpdateFederatedCredentialProviderResponse Client::updateFederatedCredentialProviderWithOptions(const UpdateFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.federatedCredentialProviderId();
  }

  if (!!request.hasFederatedCredentialProviderName()) {
    query["FederatedCredentialProviderName"] = request.federatedCredentialProviderName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
  }

  if (!!request.hasOidcProviderConfig()) {
    query["OidcProviderConfig"] = request.oidcProviderConfig();
  }

  if (!!request.hasPkcs7ProviderConfig()) {
    query["Pkcs7ProviderConfig"] = request.pkcs7ProviderConfig();
  }

  if (!!request.hasPrivateCaProviderConfig()) {
    query["PrivateCaProviderConfig"] = request.privateCaProviderConfig();
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
 * @summary 更新联邦凭证提供方
 *
 * @param request UpdateFederatedCredentialProviderRequest
 * @return UpdateFederatedCredentialProviderResponse
 */
UpdateFederatedCredentialProviderResponse Client::updateFederatedCredentialProvider(const UpdateFederatedCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFederatedCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 更新联邦凭证提供方描述
 *
 * @param request UpdateFederatedCredentialProviderDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFederatedCredentialProviderDescriptionResponse
 */
UpdateFederatedCredentialProviderDescriptionResponse Client::updateFederatedCredentialProviderDescriptionWithOptions(const UpdateFederatedCredentialProviderDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFederatedCredentialProviderId()) {
    query["FederatedCredentialProviderId"] = request.federatedCredentialProviderId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 更新联邦凭证提供方描述
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
    query["GroupExternalId"] = request.groupExternalId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
    query["Description"] = request.description();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 更新idp基础配置
 *
 * @param request UpdateIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProviderWithOptions(const UpdateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDingtalkAppConfig()) {
    query["DingtalkAppConfig"] = request.dingtalkAppConfig();
  }

  if (!!request.hasIdentityProviderId()) {
    query["IdentityProviderId"] = request.identityProviderId();
  }

  if (!!request.hasIdentityProviderName()) {
    query["IdentityProviderName"] = request.identityProviderName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLarkConfig()) {
    query["LarkConfig"] = request.larkConfig();
  }

  if (!!request.hasLdapConfig()) {
    query["LdapConfig"] = request.ldapConfig();
  }

  if (!!request.hasLogoUrl()) {
    query["LogoUrl"] = request.logoUrl();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
  }

  if (!!request.hasOidcConfig()) {
    query["OidcConfig"] = request.oidcConfig();
  }

  if (!!request.hasWeComConfig()) {
    query["WeComConfig"] = request.weComConfig();
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
 * @summary 更新idp基础配置
 *
 * @param request UpdateIdentityProviderRequest
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProvider(const UpdateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of an Enterprise Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request UpdateInstanceDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceDescriptionResponse
 */
UpdateInstanceDescriptionResponse Client::updateInstanceDescriptionWithOptions(const UpdateInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary Modifies the description of an Enterprise Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
 *
 * @param request UpdateInstanceDescriptionRequest
 * @return UpdateInstanceDescriptionResponse
 */
UpdateInstanceDescriptionResponse Client::updateInstanceDescription(const UpdateInstanceDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceDescriptionWithOptions(request, runtime);
}

/**
 * @summary 更新一个专属网络端点的名称。
 *
 * @param request UpdateNetworkAccessEndpointNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNetworkAccessEndpointNameResponse
 */
UpdateNetworkAccessEndpointNameResponse Client::updateNetworkAccessEndpointNameWithOptions(const UpdateNetworkAccessEndpointNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkAccessEndpointId()) {
    query["NetworkAccessEndpointId"] = request.networkAccessEndpointId();
  }

  if (!!request.hasNetworkAccessEndpointName()) {
    query["NetworkAccessEndpointName"] = request.networkAccessEndpointName();
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
 * @summary 更新一个专属网络端点的名称。
 *
 * @param request UpdateNetworkAccessEndpointNameRequest
 * @return UpdateNetworkAccessEndpointNameResponse
 */
UpdateNetworkAccessEndpointNameResponse Client::updateNetworkAccessEndpointName(const UpdateNetworkAccessEndpointNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNetworkAccessEndpointNameWithOptions(request, runtime);
}

/**
 * @summary 更新网络区域对象
 *
 * @param request UpdateNetworkZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNetworkZoneResponse
 */
UpdateNetworkZoneResponse Client::updateNetworkZoneWithOptions(const UpdateNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIpv4Cidrs()) {
    query["Ipv4Cidrs"] = request.ipv4Cidrs();
  }

  if (!!request.hasIpv6Cidrs()) {
    query["Ipv6Cidrs"] = request.ipv6Cidrs();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.networkZoneId();
  }

  if (!!request.hasNetworkZoneName()) {
    query["NetworkZoneName"] = request.networkZoneName();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
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
 * @summary 更新网络区域对象
 *
 * @param request UpdateNetworkZoneRequest
 * @return UpdateNetworkZoneResponse
 */
UpdateNetworkZoneResponse Client::updateNetworkZone(const UpdateNetworkZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNetworkZoneWithOptions(request, runtime);
}

/**
 * @summary 更新网络区域对象描述
 *
 * @param request UpdateNetworkZoneDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNetworkZoneDescriptionResponse
 */
UpdateNetworkZoneDescriptionResponse Client::updateNetworkZoneDescriptionWithOptions(const UpdateNetworkZoneDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNetworkZoneId()) {
    query["NetworkZoneId"] = request.networkZoneId();
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
 * @summary 更新网络区域对象描述
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.organizationalUnitId();
  }

  if (!!request.hasOrganizationalUnitName()) {
    query["OrganizationalUnitName"] = request.organizationalUnitName();
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
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.organizationalUnitId();
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrganizationalUnitId()) {
    query["OrganizationalUnitId"] = request.organizationalUnitId();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
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
 * @summary Updates the basic information about an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS).
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFields()) {
    query["CustomFields"] = request.customFields();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasEmailVerified()) {
    query["EmailVerified"] = request.emailVerified();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasPhoneNumberVerified()) {
    query["PhoneNumberVerified"] = request.phoneNumberVerified();
  }

  if (!!request.hasPhoneRegion()) {
    query["PhoneRegion"] = request.phoneRegion();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
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
 * @summary Updates the basic information about an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS).
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account.
 *
 * @param request UpdateUserDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserDescriptionResponse
 */
UpdateUserDescriptionResponse Client::updateUserDescriptionWithOptions(const UpdateUserDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Modifies the description of an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account.
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPasswordForcedUpdateStatus()) {
    query["PasswordForcedUpdateStatus"] = request.passwordForcedUpdateStatus();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserNotificationChannels()) {
    query["UserNotificationChannels"] = request.userNotificationChannels();
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