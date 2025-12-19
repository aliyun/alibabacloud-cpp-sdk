#include <darabonba/Core.hpp>
#include <alibabacloud/AgentIdentity20250901.hpp>
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
using namespace AlibabaCloud::AgentIdentity20250901::Models;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{

AlibabaCloud::AgentIdentity20250901::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("agentidentity", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建一个 API 密钥凭证提供商
 *
 * @param request CreateAPIKeyCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAPIKeyCredentialProviderResponse
 */
CreateAPIKeyCredentialProviderResponse Client::createAPIKeyCredentialProviderWithOptions(const CreateAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAPIKey()) {
    body["APIKey"] = request.APIKey();
  }

  if (!!request.hasAPIKeyCredentialProviderName()) {
    body["APIKeyCredentialProviderName"] = request.APIKeyCredentialProviderName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAPIKeyCredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAPIKeyCredentialProviderResponse>();
}

/**
 * @summary 创建一个 API 密钥凭证提供商
 *
 * @param request CreateAPIKeyCredentialProviderRequest
 * @return CreateAPIKeyCredentialProviderResponse
 */
CreateAPIKeyCredentialProviderResponse Client::createAPIKeyCredentialProvider(const CreateAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 创建IdentityProvider
 *
 * @param tmpReq CreateIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdentityProviderResponse
 */
CreateIdentityProviderResponse Client::createIdentityProviderWithOptions(const CreateIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateIdentityProviderShrinkRequest request = CreateIdentityProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedAudience()) {
    request.setAllowedAudienceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.allowedAudience(), "AllowedAudience", "json"));
  }

  json body = {};
  if (!!request.hasAllowedAudienceShrink()) {
    body["AllowedAudience"] = request.allowedAudienceShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDiscoveryURL()) {
    body["DiscoveryURL"] = request.discoveryURL();
  }

  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.identityProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateIdentityProvider"},
    {"version" , "2025-09-01"},
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
 * @summary 创建IdentityProvider
 *
 * @param request CreateIdentityProviderRequest
 * @return CreateIdentityProviderResponse
 */
CreateIdentityProviderResponse Client::createIdentityProvider(const CreateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 创建 OAuth2 凭证提供商
 *
 * @param tmpReq CreateOAuth2CredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOAuth2CredentialProviderResponse
 */
CreateOAuth2CredentialProviderResponse Client::createOAuth2CredentialProviderWithOptions(const CreateOAuth2CredentialProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOAuth2CredentialProviderShrinkRequest request = CreateOAuth2CredentialProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOAuth2ProviderConfig()) {
    request.setOAuth2ProviderConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.OAuth2ProviderConfig(), "OAuth2ProviderConfig", "json"));
  }

  json body = {};
  if (!!request.hasCallbackURL()) {
    body["CallbackURL"] = request.callbackURL();
  }

  if (!!request.hasCredentialProviderVendor()) {
    body["CredentialProviderVendor"] = request.credentialProviderVendor();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasOAuth2CredentialProviderName()) {
    body["OAuth2CredentialProviderName"] = request.OAuth2CredentialProviderName();
  }

  if (!!request.hasOAuth2ProviderConfigShrink()) {
    body["OAuth2ProviderConfig"] = request.OAuth2ProviderConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOAuth2CredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOAuth2CredentialProviderResponse>();
}

/**
 * @summary 创建 OAuth2 凭证提供商
 *
 * @param request CreateOAuth2CredentialProviderRequest
 * @return CreateOAuth2CredentialProviderResponse
 */
CreateOAuth2CredentialProviderResponse Client::createOAuth2CredentialProvider(const CreateOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 创建WorkloadIdentity
 *
 * @param tmpReq CreateWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkloadIdentityResponse
 */
CreateWorkloadIdentityResponse Client::createWorkloadIdentityWithOptions(const CreateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkloadIdentityShrinkRequest request = CreateWorkloadIdentityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedResourceOAuth2ReturnURLs()) {
    request.setAllowedResourceOAuth2ReturnURLsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.allowedResourceOAuth2ReturnURLs(), "AllowedResourceOAuth2ReturnURLs", "json"));
  }

  json body = {};
  if (!!request.hasAllowedResourceOAuth2ReturnURLsShrink()) {
    body["AllowedResourceOAuth2ReturnURLs"] = request.allowedResourceOAuth2ReturnURLsShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.identityProviderName();
  }

  if (!!request.hasRoleArn()) {
    body["RoleArn"] = request.roleArn();
  }

  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.workloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWorkloadIdentity"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkloadIdentityResponse>();
}

/**
 * @summary 创建WorkloadIdentity
 *
 * @param request CreateWorkloadIdentityRequest
 * @return CreateWorkloadIdentityResponse
 */
CreateWorkloadIdentityResponse Client::createWorkloadIdentity(const CreateWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkloadIdentityWithOptions(request, runtime);
}

/**
 * @summary 删除一个 API 密钥凭证提供商
 *
 * @param request DeleteAPIKeyCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAPIKeyCredentialProviderResponse
 */
DeleteAPIKeyCredentialProviderResponse Client::deleteAPIKeyCredentialProviderWithOptions(const DeleteAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAPIKeyCredentialProviderName()) {
    body["APIKeyCredentialProviderName"] = request.APIKeyCredentialProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAPIKeyCredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAPIKeyCredentialProviderResponse>();
}

/**
 * @summary 删除一个 API 密钥凭证提供商
 *
 * @param request DeleteAPIKeyCredentialProviderRequest
 * @return DeleteAPIKeyCredentialProviderResponse
 */
DeleteAPIKeyCredentialProviderResponse Client::deleteAPIKeyCredentialProvider(const DeleteAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 删除IdentityProvider
 *
 * @param request DeleteIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProviderWithOptions(const DeleteIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.identityProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteIdentityProvider"},
    {"version" , "2025-09-01"},
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
 * @summary 删除IdentityProvider
 *
 * @param request DeleteIdentityProviderRequest
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProvider(const DeleteIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 删除 OAuth2 凭证提供商
 *
 * @param request DeleteOAuth2CredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOAuth2CredentialProviderResponse
 */
DeleteOAuth2CredentialProviderResponse Client::deleteOAuth2CredentialProviderWithOptions(const DeleteOAuth2CredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOAuth2CredentialProviderName()) {
    body["OAuth2CredentialProviderName"] = request.OAuth2CredentialProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteOAuth2CredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOAuth2CredentialProviderResponse>();
}

/**
 * @summary 删除 OAuth2 凭证提供商
 *
 * @param request DeleteOAuth2CredentialProviderRequest
 * @return DeleteOAuth2CredentialProviderResponse
 */
DeleteOAuth2CredentialProviderResponse Client::deleteOAuth2CredentialProvider(const DeleteOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 删除WorkloadIdentity
 *
 * @param request DeleteWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkloadIdentityResponse
 */
DeleteWorkloadIdentityResponse Client::deleteWorkloadIdentityWithOptions(const DeleteWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.workloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteWorkloadIdentity"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkloadIdentityResponse>();
}

/**
 * @summary 删除WorkloadIdentity
 *
 * @param request DeleteWorkloadIdentityRequest
 * @return DeleteWorkloadIdentityResponse
 */
DeleteWorkloadIdentityResponse Client::deleteWorkloadIdentity(const DeleteWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkloadIdentityWithOptions(request, runtime);
}

/**
 * @summary 查询一个 API 密钥凭证提供商
 *
 * @param request GetAPIKeyCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAPIKeyCredentialProviderResponse
 */
GetAPIKeyCredentialProviderResponse Client::getAPIKeyCredentialProviderWithOptions(const GetAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAPIKeyCredentialProviderName()) {
    body["APIKeyCredentialProviderName"] = request.APIKeyCredentialProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAPIKeyCredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAPIKeyCredentialProviderResponse>();
}

/**
 * @summary 查询一个 API 密钥凭证提供商
 *
 * @param request GetAPIKeyCredentialProviderRequest
 * @return GetAPIKeyCredentialProviderResponse
 */
GetAPIKeyCredentialProviderResponse Client::getAPIKeyCredentialProvider(const GetAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param request GetIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProviderWithOptions(const GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.identityProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetIdentityProvider"},
    {"version" , "2025-09-01"},
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
 * @summary 创建应用
 *
 * @param request GetIdentityProviderRequest
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProvider(const GetIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 查询 OAuth2 凭证提供商
 *
 * @param request GetOAuth2CredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOAuth2CredentialProviderResponse
 */
GetOAuth2CredentialProviderResponse Client::getOAuth2CredentialProviderWithOptions(const GetOAuth2CredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOAuth2CredentialProviderName()) {
    body["OAuth2CredentialProviderName"] = request.OAuth2CredentialProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetOAuth2CredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOAuth2CredentialProviderResponse>();
}

/**
 * @summary 查询 OAuth2 凭证提供商
 *
 * @param request GetOAuth2CredentialProviderRequest
 * @return GetOAuth2CredentialProviderResponse
 */
GetOAuth2CredentialProviderResponse Client::getOAuth2CredentialProvider(const GetOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param request GetWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkloadIdentityResponse
 */
GetWorkloadIdentityResponse Client::getWorkloadIdentityWithOptions(const GetWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.workloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetWorkloadIdentity"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkloadIdentityResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request GetWorkloadIdentityRequest
 * @return GetWorkloadIdentityResponse
 */
GetWorkloadIdentityResponse Client::getWorkloadIdentity(const GetWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkloadIdentityWithOptions(request, runtime);
}

/**
 * @summary 列出 API 密钥凭证提供商
 *
 * @param request ListAPIKeyCredentialProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAPIKeyCredentialProvidersResponse
 */
ListAPIKeyCredentialProvidersResponse Client::listAPIKeyCredentialProvidersWithOptions(const ListAPIKeyCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAPIKeyCredentialProviders"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAPIKeyCredentialProvidersResponse>();
}

/**
 * @summary 列出 API 密钥凭证提供商
 *
 * @param request ListAPIKeyCredentialProvidersRequest
 * @return ListAPIKeyCredentialProvidersResponse
 */
ListAPIKeyCredentialProvidersResponse Client::listAPIKeyCredentialProviders(const ListAPIKeyCredentialProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAPIKeyCredentialProvidersWithOptions(request, runtime);
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListIdentityProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProvidersWithOptions(const ListIdentityProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListIdentityProviders"},
    {"version" , "2025-09-01"},
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
 * @summary 列出IdentityProvider
 *
 * @param request ListIdentityProvidersRequest
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProviders(const ListIdentityProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdentityProvidersWithOptions(request, runtime);
}

/**
 * @summary 列出 OAuth2 凭证提供商
 *
 * @param request ListOAuth2CredentialProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOAuth2CredentialProvidersResponse
 */
ListOAuth2CredentialProvidersResponse Client::listOAuth2CredentialProvidersWithOptions(const ListOAuth2CredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListOAuth2CredentialProviders"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOAuth2CredentialProvidersResponse>();
}

/**
 * @summary 列出 OAuth2 凭证提供商
 *
 * @param request ListOAuth2CredentialProvidersRequest
 * @return ListOAuth2CredentialProvidersResponse
 */
ListOAuth2CredentialProvidersResponse Client::listOAuth2CredentialProviders(const ListOAuth2CredentialProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOAuth2CredentialProvidersWithOptions(request, runtime);
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListWorkloadIdentitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkloadIdentitiesResponse
 */
ListWorkloadIdentitiesResponse Client::listWorkloadIdentitiesWithOptions(const ListWorkloadIdentitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListWorkloadIdentities"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkloadIdentitiesResponse>();
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListWorkloadIdentitiesRequest
 * @return ListWorkloadIdentitiesResponse
 */
ListWorkloadIdentitiesResponse Client::listWorkloadIdentities(const ListWorkloadIdentitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkloadIdentitiesWithOptions(request, runtime);
}

/**
 * @summary 更新一个 API 密钥凭证提供商
 *
 * @param request UpdateAPIKeyCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAPIKeyCredentialProviderResponse
 */
UpdateAPIKeyCredentialProviderResponse Client::updateAPIKeyCredentialProviderWithOptions(const UpdateAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAPIKey()) {
    body["APIKey"] = request.APIKey();
  }

  if (!!request.hasAPIKeyCredentialProviderName()) {
    body["APIKeyCredentialProviderName"] = request.APIKeyCredentialProviderName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateAPIKeyCredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAPIKeyCredentialProviderResponse>();
}

/**
 * @summary 更新一个 API 密钥凭证提供商
 *
 * @param request UpdateAPIKeyCredentialProviderRequest
 * @return UpdateAPIKeyCredentialProviderResponse
 */
UpdateAPIKeyCredentialProviderResponse Client::updateAPIKeyCredentialProvider(const UpdateAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 更新IdentityProvider
 *
 * @param tmpReq UpdateIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProviderWithOptions(const UpdateIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateIdentityProviderShrinkRequest request = UpdateIdentityProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedAudience()) {
    request.setAllowedAudienceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.allowedAudience(), "AllowedAudience", "json"));
  }

  json body = {};
  if (!!request.hasAllowedAudienceShrink()) {
    body["AllowedAudience"] = request.allowedAudienceShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDiscoveryURL()) {
    body["DiscoveryURL"] = request.discoveryURL();
  }

  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.identityProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateIdentityProvider"},
    {"version" , "2025-09-01"},
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
 * @summary 更新IdentityProvider
 *
 * @param request UpdateIdentityProviderRequest
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProvider(const UpdateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 修改 OAuth2 凭证提供商
 *
 * @param tmpReq UpdateOAuth2CredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOAuth2CredentialProviderResponse
 */
UpdateOAuth2CredentialProviderResponse Client::updateOAuth2CredentialProviderWithOptions(const UpdateOAuth2CredentialProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateOAuth2CredentialProviderShrinkRequest request = UpdateOAuth2CredentialProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOAuth2ProviderConfig()) {
    request.setOAuth2ProviderConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.OAuth2ProviderConfig(), "OAuth2ProviderConfig", "json"));
  }

  json body = {};
  if (!!request.hasCallbackURL()) {
    body["CallbackURL"] = request.callbackURL();
  }

  if (!!request.hasCredentialProviderVendor()) {
    body["CredentialProviderVendor"] = request.credentialProviderVendor();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasOAuth2CredentialProviderName()) {
    body["OAuth2CredentialProviderName"] = request.OAuth2CredentialProviderName();
  }

  if (!!request.hasOAuth2ProviderConfigShrink()) {
    body["OAuth2ProviderConfig"] = request.OAuth2ProviderConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateOAuth2CredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOAuth2CredentialProviderResponse>();
}

/**
 * @summary 修改 OAuth2 凭证提供商
 *
 * @param request UpdateOAuth2CredentialProviderRequest
 * @return UpdateOAuth2CredentialProviderResponse
 */
UpdateOAuth2CredentialProviderResponse Client::updateOAuth2CredentialProvider(const UpdateOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param tmpReq UpdateWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkloadIdentityResponse
 */
UpdateWorkloadIdentityResponse Client::updateWorkloadIdentityWithOptions(const UpdateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkloadIdentityShrinkRequest request = UpdateWorkloadIdentityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedResourceOAuth2ReturnURLs()) {
    request.setAllowedResourceOAuth2ReturnURLsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.allowedResourceOAuth2ReturnURLs(), "AllowedResourceOAuth2ReturnURLs", "json"));
  }

  json body = {};
  if (!!request.hasAllowedResourceOAuth2ReturnURLsShrink()) {
    body["AllowedResourceOAuth2ReturnURLs"] = request.allowedResourceOAuth2ReturnURLsShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.identityProviderName();
  }

  if (!!request.hasRoleArn()) {
    body["RoleArn"] = request.roleArn();
  }

  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.workloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWorkloadIdentity"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkloadIdentityResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request UpdateWorkloadIdentityRequest
 * @return UpdateWorkloadIdentityResponse
 */
UpdateWorkloadIdentityResponse Client::updateWorkloadIdentity(const UpdateWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkloadIdentityWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901