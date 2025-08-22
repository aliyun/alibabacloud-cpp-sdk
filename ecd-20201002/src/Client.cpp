#include <darabonba/Core.hpp>
#include <alibabacloud/Ecd20201002.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Ecd20201002::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ecd20201002
{

AlibabaCloud::Ecd20201002::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary 允许桌面FOTA升级
 *
 * @param request ApproveFotaUpdateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveFotaUpdateResponse
 */
ApproveFotaUpdateResponse Client::approveFotaUpdateWithOptions(const ApproveFotaUpdateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppVersion()) {
    query["AppVersion"] = request.appVersion();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTargetStatus()) {
    query["TargetStatus"] = request.targetStatus();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApproveFotaUpdate"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ApproveFotaUpdateResponse>();
}

/**
 * @summary 允许桌面FOTA升级
 *
 * @param request ApproveFotaUpdateRequest
 * @return ApproveFotaUpdateResponse
 */
ApproveFotaUpdateResponse Client::approveFotaUpdate(const ApproveFotaUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveFotaUpdateWithOptions(request, runtime);
}

/**
 * @summary Changes the password of a user account.
 *
 * @param request ChangePasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangePasswordResponse
 */
ChangePasswordResponse Client::changePasswordWithOptions(const ChangePasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasNewPassword()) {
    query["NewPassword"] = request.newPassword();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasOldPassword()) {
    query["OldPassword"] = request.oldPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangePassword"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ChangePasswordResponse>();
}

/**
 * @summary Changes the password of a user account.
 *
 * @param request ChangePasswordRequest
 * @return ChangePasswordResponse
 */
ChangePasswordResponse Client::changePassword(const ChangePasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changePasswordWithOptions(request, runtime);
}

/**
 * @param request DeleteFingerPrintTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFingerPrintTemplateResponse
 */
DeleteFingerPrintTemplateResponse Client::deleteFingerPrintTemplateWithOptions(const DeleteFingerPrintTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasIndex()) {
    query["Index"] = request.index();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFingerPrintTemplate"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DeleteFingerPrintTemplateResponse>();
}

/**
 * @param request DeleteFingerPrintTemplateRequest
 * @return DeleteFingerPrintTemplateResponse
 */
DeleteFingerPrintTemplateResponse Client::deleteFingerPrintTemplate(const DeleteFingerPrintTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFingerPrintTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries directory details.
 *
 * @param request DescribeDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDirectoriesResponse
 */
DescribeDirectoriesResponse Client::describeDirectoriesWithOptions(const DescribeDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDirectories"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeDirectoriesResponse>();
}

/**
 * @summary Queries directory details.
 *
 * @param request DescribeDirectoriesRequest
 * @return DescribeDirectoriesResponse
 */
DescribeDirectoriesResponse Client::describeDirectories(const DescribeDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Queries fingerprint templates.
 *
 * @param request DescribeFingerPrintTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFingerPrintTemplatesResponse
 */
DescribeFingerPrintTemplatesResponse Client::describeFingerPrintTemplatesWithOptions(const DescribeFingerPrintTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFingerPrintTemplates"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeFingerPrintTemplatesResponse>();
}

/**
 * @summary Queries fingerprint templates.
 *
 * @param request DescribeFingerPrintTemplatesRequest
 * @return DescribeFingerPrintTemplatesResponse
 */
DescribeFingerPrintTemplatesResponse Client::describeFingerPrintTemplates(const DescribeFingerPrintTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFingerPrintTemplatesWithOptions(request, runtime);
}

/**
 * @param request DescribeGlobalDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalDesktopsResponse
 */
DescribeGlobalDesktopsResponse Client::describeGlobalDesktopsWithOptions(const DescribeGlobalDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasDesktopAccessType()) {
    query["DesktopAccessType"] = request.desktopAccessType();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasDesktopName()) {
    query["DesktopName"] = request.desktopName();
  }

  if (!!request.hasDesktopStatus()) {
    query["DesktopStatus"] = request.desktopStatus();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasLoginRegionId()) {
    query["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasQueryFotaUpdate()) {
    query["QueryFotaUpdate"] = request.queryFotaUpdate();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSearchRegionId()) {
    query["SearchRegionId"] = request.searchRegionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.sortType();
  }

  if (!!request.hasWithoutLatency()) {
    query["WithoutLatency"] = request.withoutLatency();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalDesktops"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeGlobalDesktopsResponse>();
}

/**
 * @param request DescribeGlobalDesktopsRequest
 * @return DescribeGlobalDesktopsResponse
 */
DescribeGlobalDesktopsResponse Client::describeGlobalDesktops(const DescribeGlobalDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalDesktopsWithOptions(request, runtime);
}

/**
 * @param request DescribeOfficeSitesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOfficeSitesResponse
 */
DescribeOfficeSitesResponse Client::describeOfficeSitesWithOptions(const DescribeOfficeSitesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOfficeSites"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeOfficeSitesResponse>();
}

/**
 * @param request DescribeOfficeSitesRequest
 * @return DescribeOfficeSitesResponse
 */
DescribeOfficeSitesResponse Client::describeOfficeSites(const DescribeOfficeSitesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOfficeSitesWithOptions(request, runtime);
}

/**
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary 列举快照
 *
 * @param request DescribeSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSnapshotsResponse
 */
DescribeSnapshotsResponse Client::describeSnapshotsWithOptions(const DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.snapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSnapshots"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeSnapshotsResponse>();
}

/**
 * @summary 列举快照
 *
 * @param request DescribeSnapshotsRequest
 * @return DescribeSnapshotsResponse
 */
DescribeSnapshotsResponse Client::describeSnapshots(const DescribeSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSnapshotsWithOptions(request, runtime);
}

/**
 * @summary 查询用户资源列表
 *
 * @param request DescribeUserResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserResourcesResponse
 */
DescribeUserResourcesResponse Client::describeUserResourcesWithOptions(const DescribeUserResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.accessType();
  }

  if (!!request.hasAutoRefresh()) {
    query["AutoRefresh"] = request.autoRefresh();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasCategoryType()) {
    query["CategoryType"] = request.categoryType();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.clientType();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasDualCenterForward()) {
    query["DualCenterForward"] = request.dualCenterForward();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasLoginRegionId()) {
    query["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOfficeSiteIds()) {
    query["OfficeSiteIds"] = request.officeSiteIds();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasProductTypes()) {
    query["ProductTypes"] = request.productTypes();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.protocolType();
  }

  if (!!request.hasQueryFotaUpdate()) {
    query["QueryFotaUpdate"] = request.queryFotaUpdate();
  }

  if (!!request.hasRefreshFotaUpdate()) {
    query["RefreshFotaUpdate"] = request.refreshFotaUpdate();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.resourceTypes();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.scene();
  }

  if (!!request.hasSearchRegionId()) {
    query["SearchRegionId"] = request.searchRegionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.sortType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserResources"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<DescribeUserResourcesResponse>();
}

/**
 * @summary 查询用户资源列表
 *
 * @param request DescribeUserResourcesRequest
 * @return DescribeUserResourcesResponse
 */
DescribeUserResourcesResponse Client::describeUserResources(const DescribeUserResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserResourcesWithOptions(request, runtime);
}

/**
 * @summary Encrypts a password.
 *
 * @param request EncryptPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EncryptPasswordResponse
 */
EncryptPasswordResponse Client::encryptPasswordWithOptions(const EncryptPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EncryptPassword"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<EncryptPasswordResponse>();
}

/**
 * @summary Encrypts a password.
 *
 * @param request EncryptPasswordRequest
 * @return EncryptPasswordResponse
 */
EncryptPasswordResponse Client::encryptPassword(const EncryptPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return encryptPasswordWithOptions(request, runtime);
}

/**
 * @summary 获取无影云盘的免密token
 *
 * @param request GetCloudDriveServiceMountTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCloudDriveServiceMountTokenResponse
 */
GetCloudDriveServiceMountTokenResponse Client::getCloudDriveServiceMountTokenWithOptions(const GetCloudDriveServiceMountTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCloudDriveServiceMountToken"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GetCloudDriveServiceMountTokenResponse>();
}

/**
 * @summary 获取无影云盘的免密token
 *
 * @param request GetCloudDriveServiceMountTokenRequest
 * @return GetCloudDriveServiceMountTokenResponse
 */
GetCloudDriveServiceMountTokenResponse Client::getCloudDriveServiceMountToken(const GetCloudDriveServiceMountTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCloudDriveServiceMountTokenWithOptions(request, runtime);
}

/**
 * @summary 获得连接凭证
 *
 * @param request GetConnectionTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicketWithOptions(const GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.clientType();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasCommandContent()) {
    query["CommandContent"] = request.commandContent();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConnectionTicket"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GetConnectionTicketResponse>();
}

/**
 * @summary 获得连接凭证
 *
 * @param request GetConnectionTicketRequest
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicket(const GetConnectionTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnectionTicketWithOptions(request, runtime);
}

/**
 * @summary Obtains logon credentials.
 *
 * @param tmpReq GetLoginTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginTokenResponse
 */
GetLoginTokenResponse Client::getLoginTokenWithOptions(const GetLoginTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetLoginTokenShrinkRequest request = GetLoginTokenShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAvailableFeatures()) {
    request.setAvailableFeaturesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.availableFeatures(), "AvailableFeatures", "json"));
  }

  json query = {};
  if (!!request.hasAuthenticationCode()) {
    query["AuthenticationCode"] = request.authenticationCode();
  }

  if (!!request.hasAvailableFeaturesShrink()) {
    query["AvailableFeatures"] = request.availableFeaturesShrink();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientName()) {
    query["ClientName"] = request.clientName();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.clientType();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasCurrentStage()) {
    query["CurrentStage"] = request.currentStage();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasKeepAlive()) {
    query["KeepAlive"] = request.keepAlive();
  }

  if (!!request.hasKeepAliveToken()) {
    query["KeepAliveToken"] = request.keepAliveToken();
  }

  if (!!request.hasNewPassword()) {
    query["NewPassword"] = request.newPassword();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasOldPassword()) {
    query["OldPassword"] = request.oldPassword();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTokenCode()) {
    query["TokenCode"] = request.tokenCode();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoginToken"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GetLoginTokenResponse>();
}

/**
 * @summary Obtains logon credentials.
 *
 * @param request GetLoginTokenRequest
 * @return GetLoginTokenResponse
 */
GetLoginTokenResponse Client::getLoginToken(const GetLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginTokenWithOptions(request, runtime);
}

/**
 * @summary 是否保持登录判断接口
 *
 * @param request IsKeepAliveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IsKeepAliveResponse
 */
IsKeepAliveResponse Client::isKeepAliveWithOptions(const IsKeepAliveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IsKeepAlive"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<IsKeepAliveResponse>();
}

/**
 * @summary 是否保持登录判断接口
 *
 * @param request IsKeepAliveRequest
 * @return IsKeepAliveResponse
 */
IsKeepAliveResponse Client::isKeepAlive(const IsKeepAliveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return isKeepAliveWithOptions(request, runtime);
}

/**
 * @summary 查询Agent需要上报的配置信息
 *
 * @param request QueryEdsAgentReportConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEdsAgentReportConfigResponse
 */
QueryEdsAgentReportConfigResponse Client::queryEdsAgentReportConfigWithOptions(const QueryEdsAgentReportConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliUid()) {
    query["AliUid"] = request.aliUid();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.ecsInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEdsAgentReportConfig"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<QueryEdsAgentReportConfigResponse>();
}

/**
 * @summary 查询Agent需要上报的配置信息
 *
 * @param request QueryEdsAgentReportConfigRequest
 * @return QueryEdsAgentReportConfigResponse
 */
QueryEdsAgentReportConfigResponse Client::queryEdsAgentReportConfig(const QueryEdsAgentReportConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEdsAgentReportConfigWithOptions(request, runtime);
}

/**
 * @summary Restart cloud computers.
 *
 * @param request RebootDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootDesktopsResponse
 */
RebootDesktopsResponse Client::rebootDesktopsWithOptions(const RebootDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOsUpdate()) {
    query["OsUpdate"] = request.osUpdate();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasSessionToken()) {
    query["SessionToken"] = request.sessionToken();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootDesktops"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<RebootDesktopsResponse>();
}

/**
 * @summary Restart cloud computers.
 *
 * @param request RebootDesktopsRequest
 * @return RebootDesktopsResponse
 */
RebootDesktopsResponse Client::rebootDesktops(const RebootDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootDesktopsWithOptions(request, runtime);
}

/**
 * @param request RefreshLoginTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshLoginTokenResponse
 */
RefreshLoginTokenResponse Client::refreshLoginTokenWithOptions(const RefreshLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshLoginToken"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<RefreshLoginTokenResponse>();
}

/**
 * @param request RefreshLoginTokenRequest
 * @return RefreshLoginTokenResponse
 */
RefreshLoginTokenResponse Client::refreshLoginToken(const RefreshLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshLoginTokenWithOptions(request, runtime);
}

/**
 * @summary 上报edsAgent的信息
 *
 * @param request ReportEdsAgentInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReportEdsAgentInfoResponse
 */
ReportEdsAgentInfoResponse Client::reportEdsAgentInfoWithOptions(const ReportEdsAgentInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliUid()) {
    query["AliUid"] = request.aliUid();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.ecsInstanceId();
  }

  if (!!request.hasEdsAgentInfo()) {
    query["EdsAgentInfo"] = request.edsAgentInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReportEdsAgentInfo"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ReportEdsAgentInfoResponse>();
}

/**
 * @summary 上报edsAgent的信息
 *
 * @param request ReportEdsAgentInfoRequest
 * @return ReportEdsAgentInfoResponse
 */
ReportEdsAgentInfoResponse Client::reportEdsAgentInfo(const ReportEdsAgentInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reportEdsAgentInfoWithOptions(request, runtime);
}

/**
 * @param request ReportSessionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReportSessionStatusResponse
 */
ReportSessionStatusResponse Client::reportSessionStatusWithOptions(const ReportSessionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionChangeTime()) {
    query["SessionChangeTime"] = request.sessionChangeTime();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasSessionStatus()) {
    query["SessionStatus"] = request.sessionStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReportSessionStatus"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ReportSessionStatusResponse>();
}

/**
 * @param request ReportSessionStatusRequest
 * @return ReportSessionStatusResponse
 */
ReportSessionStatusResponse Client::reportSessionStatus(const ReportSessionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reportSessionStatusWithOptions(request, runtime);
}

/**
 * @summary Resets a password.
 *
 * @param request ResetPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetPasswordResponse
 */
ResetPasswordResponse Client::resetPasswordWithOptions(const ResetPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasPhone()) {
    query["phone"] = request.phone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetPassword"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ResetPasswordResponse>();
}

/**
 * @summary Resets a password.
 *
 * @param request ResetPasswordRequest
 * @return ResetPasswordResponse
 */
ResetPasswordResponse Client::resetPassword(const ResetPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetPasswordWithOptions(request, runtime);
}

/**
 * @summary Restores the data of a disk from a snapshot.
 *
 * @param request ResetSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetSnapshotResponse
 */
ResetSnapshotResponse Client::resetSnapshotWithOptions(const ResetSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.snapshotId();
  }

  if (!!request.hasStopDesktop()) {
    query["StopDesktop"] = request.stopDesktop();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetSnapshot"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ResetSnapshotResponse>();
}

/**
 * @summary Restores the data of a disk from a snapshot.
 *
 * @param request ResetSnapshotRequest
 * @return ResetSnapshotResponse
 */
ResetSnapshotResponse Client::resetSnapshot(const ResetSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetSnapshotWithOptions(request, runtime);
}

/**
 * @summary Sends a logon verification code.
 *
 * @param request SendTokenCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendTokenCodeResponse
 */
SendTokenCodeResponse Client::sendTokenCodeWithOptions(const SendTokenCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTokenCode()) {
    query["TokenCode"] = request.tokenCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendTokenCode"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<SendTokenCodeResponse>();
}

/**
 * @summary Sends a logon verification code.
 *
 * @param request SendTokenCodeRequest
 * @return SendTokenCodeResponse
 */
SendTokenCodeResponse Client::sendTokenCode(const SendTokenCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendTokenCodeWithOptions(request, runtime);
}

/**
 * @param request SetFingerPrintTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetFingerPrintTemplateResponse
 */
SetFingerPrintTemplateResponse Client::setFingerPrintTemplateWithOptions(const SetFingerPrintTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEncryptedFingerPrintTemplate()) {
    query["EncryptedFingerPrintTemplate"] = request.encryptedFingerPrintTemplate();
  }

  if (!!request.hasEncryptedKey()) {
    query["EncryptedKey"] = request.encryptedKey();
  }

  if (!!request.hasFingerPrintTemplate()) {
    query["FingerPrintTemplate"] = request.fingerPrintTemplate();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetFingerPrintTemplate"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<SetFingerPrintTemplateResponse>();
}

/**
 * @param request SetFingerPrintTemplateRequest
 * @return SetFingerPrintTemplateResponse
 */
SetFingerPrintTemplateResponse Client::setFingerPrintTemplate(const SetFingerPrintTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setFingerPrintTemplateWithOptions(request, runtime);
}

/**
 * @param request SetFingerPrintTemplateDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetFingerPrintTemplateDescriptionResponse
 */
SetFingerPrintTemplateDescriptionResponse Client::setFingerPrintTemplateDescriptionWithOptions(const SetFingerPrintTemplateDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasIndex()) {
    query["Index"] = request.index();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetFingerPrintTemplateDescription"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<SetFingerPrintTemplateDescriptionResponse>();
}

/**
 * @param request SetFingerPrintTemplateDescriptionRequest
 * @return SetFingerPrintTemplateDescriptionResponse
 */
SetFingerPrintTemplateDescriptionResponse Client::setFingerPrintTemplateDescription(const SetFingerPrintTemplateDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setFingerPrintTemplateDescriptionWithOptions(request, runtime);
}

/**
 * @summary Start cloud computers.
 *
 * @description The cloud computers that you want to start must be in the Stopped state. After you call this operation, the cloud computers enter the Running state.
 *
 * @param request StartDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDesktopsResponse
 */
StartDesktopsResponse Client::startDesktopsWithOptions(const StartDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDesktops"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<StartDesktopsResponse>();
}

/**
 * @summary Start cloud computers.
 *
 * @description The cloud computers that you want to start must be in the Stopped state. After you call this operation, the cloud computers enter the Running state.
 *
 * @param request StartDesktopsRequest
 * @return StartDesktopsResponse
 */
StartDesktopsResponse Client::startDesktops(const StartDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDesktopsWithOptions(request, runtime);
}

/**
 * @param request StartRecordContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRecordContentResponse
 */
StartRecordContentResponse Client::startRecordContentWithOptions(const StartRecordContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.filePath();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRecordContent"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<StartRecordContentResponse>();
}

/**
 * @param request StartRecordContentRequest
 * @return StartRecordContentResponse
 */
StartRecordContentResponse Client::startRecordContent(const StartRecordContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRecordContentWithOptions(request, runtime);
}

/**
 * @summary Stops cloud computers.
 *
 * @description The cloud computers that you want to stop must be in the Running state. After you call this operation, the cloud computers enter the Stopped state.
 *
 * @param request StopDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDesktopsResponse
 */
StopDesktopsResponse Client::stopDesktopsWithOptions(const StopDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOsUpdate()) {
    query["OsUpdate"] = request.osUpdate();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasSessionToken()) {
    query["SessionToken"] = request.sessionToken();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDesktops"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<StopDesktopsResponse>();
}

/**
 * @summary Stops cloud computers.
 *
 * @description The cloud computers that you want to stop must be in the Running state. After you call this operation, the cloud computers enter the Stopped state.
 *
 * @param request StopDesktopsRequest
 * @return StopDesktopsResponse
 */
StopDesktopsResponse Client::stopDesktops(const StopDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDesktopsWithOptions(request, runtime);
}

/**
 * @param request StopRecordContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRecordContentResponse
 */
StopRecordContentResponse Client::stopRecordContentWithOptions(const StopRecordContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.desktopId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopRecordContent"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<StopRecordContentResponse>();
}

/**
 * @param request StopRecordContentRequest
 * @return StopRecordContentResponse
 */
StopRecordContentResponse Client::stopRecordContent(const StopRecordContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRecordContentWithOptions(request, runtime);
}

/**
 * @summary Unbinds end users from cloud computers.
 *
 * @param request UnbindUserDesktopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindUserDesktopResponse
 */
UnbindUserDesktopResponse Client::unbindUserDesktopWithOptions(const UnbindUserDesktopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.clientType();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasUserDesktopId()) {
    query["UserDesktopId"] = request.userDesktopId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindUserDesktop"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<UnbindUserDesktopResponse>();
}

/**
 * @summary Unbinds end users from cloud computers.
 *
 * @param request UnbindUserDesktopRequest
 * @return UnbindUserDesktopResponse
 */
UnbindUserDesktopResponse Client::unbindUserDesktop(const UnbindUserDesktopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindUserDesktopWithOptions(request, runtime);
}

/**
 * @param request VerifyCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyCredentialResponse
 */
VerifyCredentialResponse Client::verifyCredentialWithOptions(const VerifyCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasCredential()) {
    query["Credential"] = request.credential();
  }

  if (!!request.hasCredentialType()) {
    query["CredentialType"] = request.credentialType();
  }

  if (!!request.hasEncryptedKey()) {
    query["EncryptedKey"] = request.encryptedKey();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyCredential"},
    {"version" , "2020-10-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<VerifyCredentialResponse>();
}

/**
 * @param request VerifyCredentialRequest
 * @return VerifyCredentialResponse
 */
VerifyCredentialResponse Client::verifyCredential(const VerifyCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyCredentialWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ecd20201002