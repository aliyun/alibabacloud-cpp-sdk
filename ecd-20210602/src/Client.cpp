#include <darabonba/Core.hpp>
#include <alibabacloud/Ecd20210602.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Ecd20210602::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ecd20210602
{

AlibabaCloud::Ecd20210602::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("ecd", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a tenant skill.
 *
 * @param tmpReq CreateTenantSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTenantSkillResponse
 */
CreateTenantSkillResponse Client::createTenantSkillWithOptions(const CreateTenantSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTenantSkillShrinkRequest request = CreateTenantSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnvVars()) {
    request.setEnvVarsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEnvVars(), "EnvVars", "json"));
  }

  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEnvVarsShrink()) {
    query["EnvVars"] = request.getEnvVarsShrink();
  }

  if (!!request.hasIconETag()) {
    query["IconETag"] = request.getIconETag();
  }

  if (!!request.hasSkillChannel()) {
    query["SkillChannel"] = request.getSkillChannel();
  }

  if (!!request.hasSkillIcon()) {
    query["SkillIcon"] = request.getSkillIcon();
  }

  if (!!request.hasSkillVersion()) {
    query["SkillVersion"] = request.getSkillVersion();
  }

  if (!!request.hasSlug()) {
    query["Slug"] = request.getSlug();
  }

  if (!!request.hasTaskKey()) {
    query["TaskKey"] = request.getTaskKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTenantSkill"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTenantSkillResponse>();
}

/**
 * @summary Creates a tenant skill.
 *
 * @param request CreateTenantSkillRequest
 * @return CreateTenantSkillResponse
 */
CreateTenantSkillResponse Client::createTenantSkill(const CreateTenantSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTenantSkillWithOptions(request, runtime);
}

/**
 * @summary Deletes skills in batches.
 *
 * @param request DeleteTenantSkillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTenantSkillsResponse
 */
DeleteTenantSkillsResponse Client::deleteTenantSkillsWithOptions(const DeleteTenantSkillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSkillChannel()) {
    query["SkillChannel"] = request.getSkillChannel();
  }

  if (!!request.hasSkillIds()) {
    query["SkillIds"] = request.getSkillIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTenantSkills"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTenantSkillsResponse>();
}

/**
 * @summary Deletes skills in batches.
 *
 * @param request DeleteTenantSkillsRequest
 * @return DeleteTenantSkillsResponse
 */
DeleteTenantSkillsResponse Client::deleteTenantSkills(const DeleteTenantSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTenantSkillsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a temporary OSS token for authentication.
 *
 * @description The obtained SecurityToken is valid for 15 minutes.
 *
 * @param request GetOssStsTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssStsTokenResponse
 */
GetOssStsTokenResponse Client::getOssStsTokenWithOptions(const GetOssStsTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssStsToken"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssStsTokenResponse>();
}

/**
 * @summary Retrieves a temporary OSS token for authentication.
 *
 * @description The obtained SecurityToken is valid for 15 minutes.
 *
 * @param request GetOssStsTokenRequest
 * @return GetOssStsTokenResponse
 */
GetOssStsTokenResponse Client::getOssStsToken(const GetOssStsTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssStsTokenWithOptions(request, runtime);
}

/**
 * @summary Retrieves the parsed content of a skill package.
 *
 * @description Call the ParseSkillPackage operation first. Poll this operation every 3 seconds.
 *
 * @param request GetParseProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetParseProgressResponse
 */
GetParseProgressResponse Client::getParseProgressWithOptions(const GetParseProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskKey()) {
    query["TaskKey"] = request.getTaskKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetParseProgress"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetParseProgressResponse>();
}

/**
 * @summary Retrieves the parsed content of a skill package.
 *
 * @description Call the ParseSkillPackage operation first. Poll this operation every 3 seconds.
 *
 * @param request GetParseProgressRequest
 * @return GetParseProgressResponse
 */
GetParseProgressResponse Client::getParseProgress(const GetParseProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getParseProgressWithOptions(request, runtime);
}

/**
 * @summary Queries the list of identities for which security policies are enabled.
 *
 * @description The resource type supports only cloud computers.
 *
 * @param request ListSecureSkillIdentitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecureSkillIdentitiesResponse
 */
ListSecureSkillIdentitiesResponse Client::listSecureSkillIdentitiesWithOptions(const ListSecureSkillIdentitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSkillChannel()) {
    query["SkillChannel"] = request.getSkillChannel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSecureSkillIdentities"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecureSkillIdentitiesResponse>();
}

/**
 * @summary Queries the list of identities for which security policies are enabled.
 *
 * @description The resource type supports only cloud computers.
 *
 * @param request ListSecureSkillIdentitiesRequest
 * @return ListSecureSkillIdentitiesResponse
 */
ListSecureSkillIdentitiesResponse Client::listSecureSkillIdentities(const ListSecureSkillIdentitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecureSkillIdentitiesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of identities authorized for a skill.
 *
 * @description Authorized objects support only cloud computers.
 *
 * @param request ListSkillAuthedIdentitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillAuthedIdentitiesResponse
 */
ListSkillAuthedIdentitiesResponse Client::listSkillAuthedIdentitiesWithOptions(const ListSkillAuthedIdentitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSkillChannel()) {
    query["SkillChannel"] = request.getSkillChannel();
  }

  if (!!request.hasSkillId()) {
    query["SkillId"] = request.getSkillId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkillAuthedIdentities"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillAuthedIdentitiesResponse>();
}

/**
 * @summary Queries the list of identities authorized for a skill.
 *
 * @description Authorized objects support only cloud computers.
 *
 * @param request ListSkillAuthedIdentitiesRequest
 * @return ListSkillAuthedIdentitiesResponse
 */
ListSkillAuthedIdentitiesResponse Client::listSkillAuthedIdentities(const ListSkillAuthedIdentitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillAuthedIdentitiesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of skills.
 *
 * @param request ListSkillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkillsWithOptions(const ListSkillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSkillChannel()) {
    query["SkillChannel"] = request.getSkillChannel();
  }

  if (!!request.hasSkillIds()) {
    query["SkillIds"] = request.getSkillIds();
  }

  if (!!request.hasSupplierType()) {
    query["SupplierType"] = request.getSupplierType();
  }

  if (!!request.hasTagCodes()) {
    query["TagCodes"] = request.getTagCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkills"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillsResponse>();
}

/**
 * @summary Queries the list of skills.
 *
 * @param request ListSkillsRequest
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkills(const ListSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillsWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query of desktop applications visible to the current tenant, with support for filtering by application name and source.
 *
 * @description The query scope is determined by the caller identity and includes applications uploaded by the current tenant and marketplace applications that the tenant is authorized to view. The visibility of marketplace applications is subject to authorization and display policy restrictions. The authorization and auto-installation information in the list represents application configurations and does not indicate the actual installation result on a specific device.
 * - **Application identity**: Id is a numeric application ID, and AppUid is a character string UID. The two cannot be used interchangeably.
 * - **Authorization scope**: DistributeType is used together with AuthType. For example, `AuthType=auth_type_user` and `DistributeType=ALL` indicate that the application is allocated to all users on a per-user dimension.
 * - **Auto-installation**: AutoInstallmentType specifies the auto-installation scope policy, which is used to distinguish between full, partial, or disabled auto-installation.
 * - **Partial auto-installation**: When AutoInstallmentType is set to 1, use SetAutoInstallUser or SetAutoInstallDesktop to configure specific users or cloud desktops. OperationType=1 indicates enabled, and OperationType=2 indicates disabled. ListTenantApp only returns configurations and does not modify auto-installation settings.
 * - **Capabilities and execution results**: The silent installation capability is application metadata returned in the response. To determine the actual installation or execution result on a device, use the corresponding execution result query capability.
 * - **Optional information**: Information such as timestamps may be empty.
 * - **Compatibility handling**: Extension information and subtype do not use closed enumerations. Clients should ignore unrecognized extension fields and be compatible with new enumeration values.
 *
 * @param request ListTenantAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTenantAppResponse
 */
ListTenantAppResponse Client::listTenantAppWithOptions(const ListTenantAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTenantApp"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTenantAppResponse>();
}

/**
 * @summary Performs a paging query of desktop applications visible to the current tenant, with support for filtering by application name and source.
 *
 * @description The query scope is determined by the caller identity and includes applications uploaded by the current tenant and marketplace applications that the tenant is authorized to view. The visibility of marketplace applications is subject to authorization and display policy restrictions. The authorization and auto-installation information in the list represents application configurations and does not indicate the actual installation result on a specific device.
 * - **Application identity**: Id is a numeric application ID, and AppUid is a character string UID. The two cannot be used interchangeably.
 * - **Authorization scope**: DistributeType is used together with AuthType. For example, `AuthType=auth_type_user` and `DistributeType=ALL` indicate that the application is allocated to all users on a per-user dimension.
 * - **Auto-installation**: AutoInstallmentType specifies the auto-installation scope policy, which is used to distinguish between full, partial, or disabled auto-installation.
 * - **Partial auto-installation**: When AutoInstallmentType is set to 1, use SetAutoInstallUser or SetAutoInstallDesktop to configure specific users or cloud desktops. OperationType=1 indicates enabled, and OperationType=2 indicates disabled. ListTenantApp only returns configurations and does not modify auto-installation settings.
 * - **Capabilities and execution results**: The silent installation capability is application metadata returned in the response. To determine the actual installation or execution result on a device, use the corresponding execution result query capability.
 * - **Optional information**: Information such as timestamps may be empty.
 * - **Compatibility handling**: Extension information and subtype do not use closed enumerations. Clients should ignore unrecognized extension fields and be compatible with new enumeration values.
 *
 * @param request ListTenantAppRequest
 * @return ListTenantAppResponse
 */
ListTenantAppResponse Client::listTenantApp(const ListTenantAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTenantAppWithOptions(request, runtime);
}

/**
 * @summary Parses a skill package.
 *
 * @param request ParseSkillPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ParseSkillPackageResponse
 */
ParseSkillPackageResponse Client::parseSkillPackageWithOptions(const ParseSkillPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOssObjectETag()) {
    query["OssObjectETag"] = request.getOssObjectETag();
  }

  if (!!request.hasOssObjectKey()) {
    query["OssObjectKey"] = request.getOssObjectKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ParseSkillPackage"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ParseSkillPackageResponse>();
}

/**
 * @summary Parses a skill package.
 *
 * @param request ParseSkillPackageRequest
 * @return ParseSkillPackageResponse
 */
ParseSkillPackageResponse Client::parseSkillPackage(const ParseSkillPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return parseSkillPackageWithOptions(request, runtime);
}

/**
 * @summary Sets skill permissions for an identity.
 *
 * @description The authorized object supports only cloud computers.
 *
 * @param request SetIdentitySkillAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetIdentitySkillAuthResponse
 */
SetIdentitySkillAuthResponse Client::setIdentitySkillAuthWithOptions(const SetIdentitySkillAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoInstall()) {
    query["AutoInstall"] = request.getAutoInstall();
  }

  if (!!request.hasIdentities()) {
    query["Identities"] = request.getIdentities();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  if (!!request.hasSkillChannel()) {
    query["SkillChannel"] = request.getSkillChannel();
  }

  if (!!request.hasSkillIds()) {
    query["SkillIds"] = request.getSkillIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetIdentitySkillAuth"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetIdentitySkillAuthResponse>();
}

/**
 * @summary Sets skill permissions for an identity.
 *
 * @description The authorized object supports only cloud computers.
 *
 * @param request SetIdentitySkillAuthRequest
 * @return SetIdentitySkillAuthResponse
 */
SetIdentitySkillAuthResponse Client::setIdentitySkillAuth(const SetIdentitySkillAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setIdentitySkillAuthWithOptions(request, runtime);
}

/**
 * @summary Sets the security policy for identity skills.
 *
 * @description The resource type supports only cloud computers.
 *
 * @param request SetIdentitySkillSecurityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetIdentitySkillSecurityResponse
 */
SetIdentitySkillSecurityResponse Client::setIdentitySkillSecurityWithOptions(const SetIdentitySkillSecurityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasIdentityIds()) {
    query["IdentityIds"] = request.getIdentityIds();
  }

  if (!!request.hasSkillChannel()) {
    query["SkillChannel"] = request.getSkillChannel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetIdentitySkillSecurity"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetIdentitySkillSecurityResponse>();
}

/**
 * @summary Sets the security policy for identity skills.
 *
 * @description The resource type supports only cloud computers.
 *
 * @param request SetIdentitySkillSecurityRequest
 * @return SetIdentitySkillSecurityResponse
 */
SetIdentitySkillSecurityResponse Client::setIdentitySkillSecurity(const SetIdentitySkillSecurityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setIdentitySkillSecurityWithOptions(request, runtime);
}

/**
 * @summary Sets the enabling status of skills at the tenant level.
 *
 * @param request SetTenantSkillEnabledRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetTenantSkillEnabledResponse
 */
SetTenantSkillEnabledResponse Client::setTenantSkillEnabledWithOptions(const SetTenantSkillEnabledRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasSkillChannel()) {
    query["SkillChannel"] = request.getSkillChannel();
  }

  if (!!request.hasSkillIds()) {
    query["SkillIds"] = request.getSkillIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetTenantSkillEnabled"},
    {"version" , "2021-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetTenantSkillEnabledResponse>();
}

/**
 * @summary Sets the enabling status of skills at the tenant level.
 *
 * @param request SetTenantSkillEnabledRequest
 * @return SetTenantSkillEnabledResponse
 */
SetTenantSkillEnabledResponse Client::setTenantSkillEnabled(const SetTenantSkillEnabledRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setTenantSkillEnabledWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ecd20210602