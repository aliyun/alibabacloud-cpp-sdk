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
 * @summary Assigns seats in batches to the member level.
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

  if (!!request.hasLocale()) {
    query["Locale"] = request.getLocale();
  }

  if (!!request.hasSeatType()) {
    query["SeatType"] = request.getSeatType();
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
 * @summary Assigns seats in batches to the member level.
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
 * @summary Revokes member-level seats in batches.
 *
 * @param tmpReq BatchRevokeSeatsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchRevokeSeatsResponse
 */
BatchRevokeSeatsResponse Client::batchRevokeSeatsWithOptions(const BatchRevokeSeatsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchRevokeSeatsShrinkRequest request = BatchRevokeSeatsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasItems()) {
    request.setItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItems(), "Items", "json"));
  }

  json query = {};
  if (!!request.hasItemsShrink()) {
    query["Items"] = request.getItemsShrink();
  }

  if (!!request.hasLocale()) {
    query["Locale"] = request.getLocale();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchRevokeSeats"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/subscription/seat-revocations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchRevokeSeatsResponse>();
}

/**
 * @summary Revokes member-level seats in batches.
 *
 * @param request BatchRevokeSeatsRequest
 * @return BatchRevokeSeatsResponse
 */
BatchRevokeSeatsResponse Client::batchRevokeSeats(const BatchRevokeSeatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchRevokeSeatsWithOptions(request, headers, runtime);
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
 * @summary Creates a TokenPlan member invitation link.
 *
 * @description A user can have only one valid invitation link at a time.
 * If the user already has a valid invitation link, this operation returns the existing link.
 * To create a new link, call the RevokeTokenPlanInviteLink operation to invalidate the current link first.
 * This operation returns only the generated token. The invitation link is assembled in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`
 * * For the China site, the host is tokenplan-enterprise.bailian.aliyunportal.com.
 * * For the China site, the host is tokenplan-enterprise.modelstudio.aliyunportal.com.
 *
 * @param request CreateTokenPlanInviteLinkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTokenPlanInviteLinkResponse
 */
CreateTokenPlanInviteLinkResponse Client::createTokenPlanInviteLinkWithOptions(const CreateTokenPlanInviteLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpireType()) {
    query["ExpireType"] = request.getExpireType();
  }

  if (!!request.hasSsoSource()) {
    query["SsoSource"] = request.getSsoSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTokenPlanInviteLink"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/invite/link/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTokenPlanInviteLinkResponse>();
}

/**
 * @summary Creates a TokenPlan member invitation link.
 *
 * @description A user can have only one valid invitation link at a time.
 * If the user already has a valid invitation link, this operation returns the existing link.
 * To create a new link, call the RevokeTokenPlanInviteLink operation to invalidate the current link first.
 * This operation returns only the generated token. The invitation link is assembled in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`
 * * For the China site, the host is tokenplan-enterprise.bailian.aliyunportal.com.
 * * For the China site, the host is tokenplan-enterprise.modelstudio.aliyunportal.com.
 *
 * @param request CreateTokenPlanInviteLinkRequest
 * @return CreateTokenPlanInviteLinkResponse
 */
CreateTokenPlanInviteLinkResponse Client::createTokenPlanInviteLink(const CreateTokenPlanInviteLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTokenPlanInviteLinkWithOptions(request, headers, runtime);
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

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
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
 * @summary Retrieves information about a specified organization.
 *
 * @description Retrieves information about a specified organization by OrgId.
 *
 * @param request GetOrganizationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrganizationResponse
 */
GetOrganizationResponse Client::getOrganizationWithOptions(const GetOrganizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrganization"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/organization")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrganizationResponse>();
}

/**
 * @summary Retrieves information about a specified organization.
 *
 * @description Retrieves information about a specified organization by OrgId.
 *
 * @param request GetOrganizationRequest
 * @return GetOrganizationResponse
 */
GetOrganizationResponse Client::getOrganization(const GetOrganizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOrganizationWithOptions(request, headers, runtime);
}

/**
 * @summary Queries organization member statistics information, including the total number of members, the number of administrators, the number of regular members, the number of members with allocated seats, and the number of members without allocated seats.
 *
 * @param request GetOrganizationMemberSeatStatsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrganizationMemberSeatStatsResponse
 */
GetOrganizationMemberSeatStatsResponse Client::getOrganizationMemberSeatStatsWithOptions(const GetOrganizationMemberSeatStatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrganizationMemberSeatStats"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/organization/member-seat-stats")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrganizationMemberSeatStatsResponse>();
}

/**
 * @summary Queries organization member statistics information, including the total number of members, the number of administrators, the number of regular members, the number of members with allocated seats, and the number of members without allocated seats.
 *
 * @param request GetOrganizationMemberSeatStatsRequest
 * @return GetOrganizationMemberSeatStatsResponse
 */
GetOrganizationMemberSeatStatsResponse Client::getOrganizationMemberSeatStats(const GetOrganizationMemberSeatStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOrganizationMemberSeatStatsWithOptions(request, headers, runtime);
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
 * @summary Queries the number of members and seats for member management.
 *
 * @param request GetSubscriptionStatsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscriptionStatsResponse
 */
GetSubscriptionStatsResponse Client::getSubscriptionStatsWithOptions(const GetSubscriptionStatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubscriptionStats"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/subscription/stats")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubscriptionStatsResponse>();
}

/**
 * @summary Queries the number of members and seats for member management.
 *
 * @param request GetSubscriptionStatsRequest
 * @return GetSubscriptionStatsResponse
 */
GetSubscriptionStatsResponse Client::getSubscriptionStats(const GetSubscriptionStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSubscriptionStatsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the TokenPlan account details and organization information.
 *
 * @description Retrieves the TokenPlan management platform account information when the user is logged in.
 *
 * @param request GetTokenPlanAccountDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenPlanAccountDetailResponse
 */
GetTokenPlanAccountDetailResponse Client::getTokenPlanAccountDetailWithOptions(const GetTokenPlanAccountDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTokenPlanAccountDetail"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/account")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenPlanAccountDetailResponse>();
}

/**
 * @summary Retrieves the TokenPlan account details and organization information.
 *
 * @description Retrieves the TokenPlan management platform account information when the user is logged in.
 *
 * @param request GetTokenPlanAccountDetailRequest
 * @return GetTokenPlanAccountDetailResponse
 */
GetTokenPlanAccountDetailResponse Client::getTokenPlanAccountDetail(const GetTokenPlanAccountDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenPlanAccountDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the TokenPlan member invitation link.
 *
 * @description This operation returns only the generated token and expiration time. The invitation link is assembled in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`
 * * For the China site, the host is tokenplan-enterprise.bailian.aliyunportal.com.
 * * For the international site, the host is tokenplan-enterprise.modelstudio.aliyunportal.com.
 *
 * @param request GetTokenPlanInviteLinkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenPlanInviteLinkResponse
 */
GetTokenPlanInviteLinkResponse Client::getTokenPlanInviteLinkWithOptions(const GetTokenPlanInviteLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTokenPlanInviteLink"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/invite/link/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenPlanInviteLinkResponse>();
}

/**
 * @summary Retrieves the TokenPlan member invitation link.
 *
 * @description This operation returns only the generated token and expiration time. The invitation link is assembled in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`
 * * For the China site, the host is tokenplan-enterprise.bailian.aliyunportal.com.
 * * For the international site, the host is tokenplan-enterprise.modelstudio.aliyunportal.com.
 *
 * @param request GetTokenPlanInviteLinkRequest
 * @return GetTokenPlanInviteLinkResponse
 */
GetTokenPlanInviteLinkResponse Client::getTokenPlanInviteLink(const GetTokenPlanInviteLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenPlanInviteLinkWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the TokenPlan member invitation configuration.
 *
 * @param request GetTokenPlanOrgInviteConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenPlanOrgInviteConfigResponse
 */
GetTokenPlanOrgInviteConfigResponse Client::getTokenPlanOrgInviteConfigWithOptions(const GetTokenPlanOrgInviteConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTokenPlanOrgInviteConfig"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/invite/config/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenPlanOrgInviteConfigResponse>();
}

/**
 * @summary Retrieves the TokenPlan member invitation configuration.
 *
 * @param request GetTokenPlanOrgInviteConfigRequest
 * @return GetTokenPlanOrgInviteConfigResponse
 */
GetTokenPlanOrgInviteConfigResponse Client::getTokenPlanOrgInviteConfig(const GetTokenPlanOrgInviteConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenPlanOrgInviteConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of API key authentication credentials.
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

  if (!!request.hasOrder()) {
    query["order"] = request.getOrder();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
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
 * @summary Retrieves a list of API key authentication credentials.
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
 * @summary Queries the list of organization members including seat information. Supports filtering by name, status, and seat assignment, and supports pagination.
 *
 * @param request ListOrganizationMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOrganizationMembersResponse
 */
ListOrganizationMembersResponse Client::listOrganizationMembersWithOptions(const ListOrganizationMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHasSeat()) {
    query["HasSeat"] = request.getHasSeat();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOrganizationMembers"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/organization/members")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOrganizationMembersResponse>();
}

/**
 * @summary Queries the list of organization members including seat information. Supports filtering by name, status, and seat assignment, and supports pagination.
 *
 * @param request ListOrganizationMembersRequest
 * @return ListOrganizationMembersResponse
 */
ListOrganizationMembersResponse Client::listOrganizationMembers(const ListOrganizationMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOrganizationMembersWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of shared packages by paging.
 *
 * @param request ListSubscriptionSharedPackagesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubscriptionSharedPackagesResponse
 */
ListSubscriptionSharedPackagesResponse Client::listSubscriptionSharedPackagesWithOptions(const ListSubscriptionSharedPackagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.getStatusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubscriptionSharedPackages"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/subscription/shared-packages")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubscriptionSharedPackagesResponse>();
}

/**
 * @summary Queries the details of shared packages by paging.
 *
 * @param request ListSubscriptionSharedPackagesRequest
 * @return ListSubscriptionSharedPackagesResponse
 */
ListSubscriptionSharedPackagesResponse Client::listSubscriptionSharedPackages(const ListSubscriptionSharedPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSubscriptionSharedPackagesWithOptions(request, headers, runtime);
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
 * @summary Removes organization members. Before removal, checks whether the member holds a seat. If the member holds a seat, the removal is rejected.
 *
 * @param request RemoveOrganizationMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveOrganizationMemberResponse
 */
RemoveOrganizationMemberResponse Client::removeOrganizationMemberWithOptions(const RemoveOrganizationMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.getAccountIds();
  }

  if (!!request.hasLocale()) {
    query["Locale"] = request.getLocale();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveOrganizationMember"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/organization/member-removals")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveOrganizationMemberResponse>();
}

/**
 * @summary Removes organization members. Before removal, checks whether the member holds a seat. If the member holds a seat, the removal is rejected.
 *
 * @param request RemoveOrganizationMemberRequest
 * @return RemoveOrganizationMemberResponse
 */
RemoveOrganizationMemberResponse Client::removeOrganizationMember(const RemoveOrganizationMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeOrganizationMemberWithOptions(request, headers, runtime);
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
 * @summary Revokes a TokenPlan member invitation link.
 *
 * @param request RevokeTokenPlanInviteLinkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeTokenPlanInviteLinkResponse
 */
RevokeTokenPlanInviteLinkResponse Client::revokeTokenPlanInviteLinkWithOptions(const RevokeTokenPlanInviteLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeTokenPlanInviteLink"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/invite/link/revoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeTokenPlanInviteLinkResponse>();
}

/**
 * @summary Revokes a TokenPlan member invitation link.
 *
 * @param request RevokeTokenPlanInviteLinkRequest
 * @return RevokeTokenPlanInviteLinkResponse
 */
RevokeTokenPlanInviteLinkResponse Client::revokeTokenPlanInviteLink(const RevokeTokenPlanInviteLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeTokenPlanInviteLinkWithOptions(request, headers, runtime);
}

/**
 * @summary Resets a UAC API key.
 *
 * @description Only the API Key value changes. The API Key ID remains unchanged.
 *
 * @param request RotateTokenPlanKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RotateTokenPlanKeyResponse
 */
RotateTokenPlanKeyResponse Client::rotateTokenPlanKeyWithOptions(const RotateTokenPlanKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["ApiKeyId"] = request.getApiKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RotateTokenPlanKey"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/api-key-rotations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RotateTokenPlanKeyResponse>();
}

/**
 * @summary Resets a UAC API key.
 *
 * @description Only the API Key value changes. The API Key ID remains unchanged.
 *
 * @param request RotateTokenPlanKeyRequest
 * @return RotateTokenPlanKeyResponse
 */
RotateTokenPlanKeyResponse Client::rotateTokenPlanKey(const RotateTokenPlanKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rotateTokenPlanKeyWithOptions(request, headers, runtime);
}

/**
 * @summary Configures the member invitation settings for a TokenPlan.
 *
 * @param request SetTokenPlanOrgInviteConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetTokenPlanOrgInviteConfigResponse
 */
SetTokenPlanOrgInviteConfigResponse Client::setTokenPlanOrgInviteConfigWithOptions(const SetTokenPlanOrgInviteConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultRoleId()) {
    query["DefaultRoleId"] = request.getDefaultRoleId();
  }

  if (!!request.hasSeatAssignStrategy()) {
    query["SeatAssignStrategy"] = request.getSeatAssignStrategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetTokenPlanOrgInviteConfig"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/invite/config/set")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetTokenPlanOrgInviteConfigResponse>();
}

/**
 * @summary Configures the member invitation settings for a TokenPlan.
 *
 * @param request SetTokenPlanOrgInviteConfigRequest
 * @return SetTokenPlanOrgInviteConfigResponse
 */
SetTokenPlanOrgInviteConfigResponse Client::setTokenPlanOrgInviteConfig(const SetTokenPlanOrgInviteConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return setTokenPlanOrgInviteConfigWithOptions(request, headers, runtime);
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

/**
 * @summary Modifies organization information.
 *
 * @param request UpdateOrganizationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOrganizationResponse
 */
UpdateOrganizationResponse Client::updateOrganizationWithOptions(const UpdateOrganizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOrganization"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/organization")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOrganizationResponse>();
}

/**
 * @summary Modifies organization information.
 *
 * @param request UpdateOrganizationRequest
 * @return UpdateOrganizationResponse
 */
UpdateOrganizationResponse Client::updateOrganization(const UpdateOrganizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateOrganizationWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies the roles of organization members.
 *
 * @param request UpdateOrganizationMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOrganizationMemberResponse
 */
UpdateOrganizationMemberResponse Client::updateOrganizationMemberWithOptions(const UpdateOrganizationMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.getAccountIds();
  }

  if (!!request.hasNewRoleCode()) {
    query["NewRoleCode"] = request.getNewRoleCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOrganizationMember"},
    {"version" , "2026-02-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tokenplan/organization/members/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOrganizationMemberResponse>();
}

/**
 * @summary Modifies the roles of organization members.
 *
 * @param request UpdateOrganizationMemberRequest
 * @return UpdateOrganizationMemberResponse
 */
UpdateOrganizationMemberResponse Client::updateOrganizationMember(const UpdateOrganizationMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateOrganizationMemberWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace ModelStudio20260210