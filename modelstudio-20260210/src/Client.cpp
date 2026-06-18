#include <darabonba/Core.hpp>
#include <alibabacloud/ModelStudio20260210.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::ModelStudio20260210::Models;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{

AlibabaCloud::ModelStudio20260210::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"eu-central-1" , "modelstudio.eu-central-1.aliyuncs.com"},
    {"cn-hongkong" , "modelstudio.cn-hongkong.aliyuncs.com"},
    {"cn-beijing" , "modelstudio.cn-beijing.aliyuncs.com"},
    {"ap-southeast-1" , "modelstudio.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("modelstudio", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates an account and directly adds it as a member.
 *
 * @param request AddOrganizationMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddOrganizationMemberResponse
 */
AddOrganizationMemberResponse Client::addOrganizationMemberWithOptions(const AddOrganizationMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasCallerUacAccountId()) {
    query["CallerUacAccountId"] = request.getCallerUacAccountId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.getOrgId();
  }

  if (!!request.hasOrgRoleCode()) {
    query["OrgRoleCode"] = request.getOrgRoleCode();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddOrganizationMember"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/organization/member-additions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddOrganizationMemberResponse>();
}

/**
 * @summary Creates an account and directly adds it as a member.
 *
 * @param request AddOrganizationMemberRequest
 * @return AddOrganizationMemberResponse
 */
AddOrganizationMemberResponse Client::addOrganizationMember(const AddOrganizationMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addOrganizationMemberWithOptions(request, headers, runtime);
}

/**
 * @summary Assigns seats in bulk to the member level.
 *
 * @param request BatchAssignSeatsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchAssignSeatsResponse
 */
BatchAssignSeatsResponse Client::batchAssignSeatsWithOptions(const BatchAssignSeatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.getAccountIds();
  }

  if (!!request.hasAccountIdsStr()) {
    query["AccountIdsStr"] = request.getAccountIdsStr();
  }

  if (!!request.hasCallerUacAccountId()) {
    query["CallerUacAccountId"] = request.getCallerUacAccountId();
  }

  if (!!request.hasLocale()) {
    query["Locale"] = request.getLocale();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSeatType()) {
    query["SeatType"] = request.getSeatType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchAssignSeats"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/subscription/seat-assignments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchAssignSeatsResponse>();
}

/**
 * @summary Assigns seats in bulk to the member level.
 *
 * @param request BatchAssignSeatsRequest
 * @return BatchAssignSeatsResponse
 */
BatchAssignSeatsResponse Client::batchAssignSeats(const BatchAssignSeatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchAssignSeatsWithOptions(request, headers, runtime);
}

/**
 * @summary Before using large models or applications in Alibaba Cloud Model Studio, create an API key as an authentication credential.
 *
 * @param request CreateApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiKeyResponse
 */
CreateApiKeyResponse Client::createApiKeyWithOptions(const CreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasAuth()) {
    body["auth"] = request.getAuth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiKeyResponse>();
}

/**
 * @summary Before using large models or applications in Alibaba Cloud Model Studio, create an API key as an authentication credential.
 *
 * @param request CreateApiKeyRequest
 * @return CreateApiKeyResponse
 */
CreateApiKeyResponse Client::createApiKey(const CreateApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createApiKeyWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a UAC API key.
 *
 * @param request CreateTokenPlanKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTokenPlanKeyResponse
 */
CreateTokenPlanKeyResponse Client::createTokenPlanKeyWithOptions(const CreateTokenPlanKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasCallerUacAccountId()) {
    query["CallerUacAccountId"] = request.getCallerUacAccountId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTokenPlanKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/api-keys")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTokenPlanKeyResponse>();
}

/**
 * @summary Creates a UAC API key.
 *
 * @param request CreateTokenPlanKeyRequest
 * @return CreateTokenPlanKeyResponse
 */
CreateTokenPlanKeyResponse Client::createTokenPlanKey(const CreateTokenPlanKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTokenPlanKeyWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a business workspace.
 *
 * @param request CreateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspaceWithOptions(const CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceSite()) {
    query["serviceSite"] = request.getServiceSite();
  }

  if (!!request.hasWorkspaceName()) {
    query["workspaceName"] = request.getWorkspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWorkspace"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/workspaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResponse>();
}

/**
 * @summary Creates a business workspace.
 *
 * @param request CreateWorkspaceRequest
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspace(const CreateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an authentication credential API key.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiKeyResponse
 */
DeleteApiKeyResponse Client::deleteApiKeyWithOptions(const string &apiKeyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiKeyResponse>();
}

/**
 * @summary Deletes an authentication credential API key.
 *
 * @return DeleteApiKeyResponse
 */
DeleteApiKeyResponse Client::deleteApiKey(const string &apiKeyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteApiKeyWithOptions(apiKeyId, headers, runtime);
}

/**
 * @summary Deletes a workspace.
 *
 * @description A workspace can be deleted only if the following conditional requirements are met:
 * 1. The workspace is not the default workspace.
 * 2. The workspace is not used to purchase other products, such as AMB.
 * 3. In permission management, the workspace is not granted to Resource Access Management (RAM) users or RAM roles.
 * 4. The workspace does not contain any resources, such as API keys, model deployments, or knowledge bases.
 *
 * @param request DeleteWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspaceWithOptions(const string &workspaceId, const DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkspace"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceResponse>();
}

/**
 * @summary Deletes a workspace.
 *
 * @description A workspace can be deleted only if the following conditional requirements are met:
 * 1. The workspace is not the default workspace.
 * 2. The workspace is not used to purchase other products, such as AMB.
 * 3. In permission management, the workspace is not granted to Resource Access Management (RAM) users or RAM roles.
 * 4. The workspace does not contain any resources, such as API keys, model deployments, or knowledge bases.
 *
 * @param request DeleteWorkspaceRequest
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspace(const string &workspaceId, const DeleteWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkspaceWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Disables an API key.
 *
 * @description An API key cannot be disabled if it is already disabled.
 *
 * @param request DisableApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApiKeyResponse
 */
DisableApiKeyResponse Client::disableApiKeyWithOptions(const string &apiKeyId, const DisableApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId) , "/disable")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApiKeyResponse>();
}

/**
 * @summary Disables an API key.
 *
 * @description An API key cannot be disabled if it is already disabled.
 *
 * @param request DisableApiKeyRequest
 * @return DisableApiKeyResponse
 */
DisableApiKeyResponse Client::disableApiKey(const string &apiKeyId, const DisableApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableApiKeyWithOptions(apiKeyId, request, headers, runtime);
}

/**
 * @summary Enables an API key.
 *
 * @description An API key that is already enabled cannot be enabled again.
 *
 * @param request EnableApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApiKeyResponse
 */
EnableApiKeyResponse Client::enableApiKeyWithOptions(const string &apiKeyId, const EnableApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId) , "/enable")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApiKeyResponse>();
}

/**
 * @summary Enables an API key.
 *
 * @description An API key that is already enabled cannot be enabled again.
 *
 * @param request EnableApiKeyRequest
 * @return EnableApiKeyResponse
 */
EnableApiKeyResponse Client::enableApiKey(const string &apiKeyId, const EnableApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableApiKeyWithOptions(apiKeyId, request, headers, runtime);
}

/**
 * @summary Retrieves the information of a specified authentication credential API key.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApiKeyResponse
 */
GetApiKeyResponse Client::getApiKeyWithOptions(const string &apiKeyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApiKeyResponse>();
}

/**
 * @summary Retrieves the information of a specified authentication credential API key.
 *
 * @return GetApiKeyResponse
 */
GetApiKeyResponse Client::getApiKey(const string &apiKeyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getApiKeyWithOptions(apiKeyId, headers, runtime);
}

/**
 * @summary Queries seat details by paging.
 *
 * @param request GetSubscriptionSeatDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscriptionSeatDetailsResponse
 */
GetSubscriptionSeatDetailsResponse Client::getSubscriptionSeatDetailsWithOptions(const GetSubscriptionSeatDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerUacAccountId()) {
    query["CallerUacAccountId"] = request.getCallerUacAccountId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryAssigned()) {
    query["QueryAssigned"] = request.getQueryAssigned();
  }

  if (!!request.hasSeatId()) {
    query["SeatId"] = request.getSeatId();
  }

  if (!!request.hasSeatType()) {
    query["SeatType"] = request.getSeatType();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.getStatusList();
  }

  if (!!request.hasStatusListStr()) {
    query["StatusListStr"] = request.getStatusListStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubscriptionSeatDetails"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/subscription/seat-detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubscriptionSeatDetailsResponse>();
}

/**
 * @summary Queries seat details by paging.
 *
 * @param request GetSubscriptionSeatDetailsRequest
 * @return GetSubscriptionSeatDetailsResponse
 */
GetSubscriptionSeatDetailsResponse Client::getSubscriptionSeatDetails(const GetSubscriptionSeatDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSubscriptionSeatDetailsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the list of authentication credential API Key information.
 *
 * @param request ListApiKeysRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiKeysResponse
 */
ListApiKeysResponse Client::listApiKeysWithOptions(const ListApiKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiKeys"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiKeysResponse>();
}

/**
 * @summary Obtain the list of authentication credential API Key information.
 *
 * @param request ListApiKeysRequest
 * @return ListApiKeysResponse
 */
ListApiKeysResponse Client::listApiKeys(const ListApiKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApiKeysWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the list of business workspaces.
 *
 * @param request ListWorkspacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceName()) {
    query["workspaceName"] = request.getWorkspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/workspaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary Retrieves the list of business workspaces.
 *
 * @param request ListWorkspacesRequest
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspaces(const ListWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkspacesWithOptions(request, headers, runtime);
}

/**
 * @summary Resets an API key.
 *
 * @description Only the API key value changes. The API key ID remains unchanged.
 *
 * @param request ResetApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetApiKeyResponse
 */
ResetApiKeyResponse Client::resetApiKeyWithOptions(const string &apiKeyId, const ResetApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId) , "/reset")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetApiKeyResponse>();
}

/**
 * @summary Resets an API key.
 *
 * @description Only the API key value changes. The API key ID remains unchanged.
 *
 * @param request ResetApiKeyRequest
 * @return ResetApiKeyResponse
 */
ResetApiKeyResponse Client::resetApiKey(const string &apiKeyId, const ResetApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetApiKeyWithOptions(apiKeyId, request, headers, runtime);
}

/**
 * @summary Edits the information of an authentication credential API key.
 *
 * @param request UpdateApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApiKeyResponse
 */
UpdateApiKeyResponse Client::updateApiKeyWithOptions(const string &apiKeyId, const UpdateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  json body = {};
  if (!!request.hasAuth()) {
    body["auth"] = request.getAuth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateApiKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modelstudio/apikeys/" , Darabonba::Encode::Encoder::percentEncode(apiKeyId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApiKeyResponse>();
}

/**
 * @summary Edits the information of an authentication credential API key.
 *
 * @param request UpdateApiKeyRequest
 * @return UpdateApiKeyResponse
 */
UpdateApiKeyResponse Client::updateApiKey(const string &apiKeyId, const UpdateApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApiKeyWithOptions(apiKeyId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace ModelStudio20260210