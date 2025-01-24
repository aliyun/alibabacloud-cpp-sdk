// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ecd_20201002.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Ecd20201002;

Alibabacloud_Ecd20201002::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ecd"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ecd20201002::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ApproveFotaUpdateResponse Alibabacloud_Ecd20201002::Client::approveFotaUpdateWithOptions(shared_ptr<ApproveFotaUpdateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    query->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApproveFotaUpdate"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ApproveFotaUpdateResponse(callApi(params, req, runtime));
  }
  else {
    return ApproveFotaUpdateResponse(execute(params, req, runtime));
  }
}

ApproveFotaUpdateResponse Alibabacloud_Ecd20201002::Client::approveFotaUpdate(shared_ptr<ApproveFotaUpdateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveFotaUpdateWithOptions(request, runtime);
}

ChangePasswordResponse Alibabacloud_Ecd20201002::Client::changePasswordWithOptions(shared_ptr<ChangePasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newPassword)) {
    query->insert(pair<string, string>("NewPassword", *request->newPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldPassword)) {
    query->insert(pair<string, string>("OldPassword", *request->oldPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangePassword"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ChangePasswordResponse(callApi(params, req, runtime));
  }
  else {
    return ChangePasswordResponse(execute(params, req, runtime));
  }
}

ChangePasswordResponse Alibabacloud_Ecd20201002::Client::changePassword(shared_ptr<ChangePasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changePasswordWithOptions(request, runtime);
}

DeleteFingerPrintTemplateResponse Alibabacloud_Ecd20201002::Client::deleteFingerPrintTemplateWithOptions(shared_ptr<DeleteFingerPrintTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->index)) {
    query->insert(pair<string, long>("Index", *request->index));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFingerPrintTemplate"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteFingerPrintTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteFingerPrintTemplateResponse(execute(params, req, runtime));
  }
}

DeleteFingerPrintTemplateResponse Alibabacloud_Ecd20201002::Client::deleteFingerPrintTemplate(shared_ptr<DeleteFingerPrintTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFingerPrintTemplateWithOptions(request, runtime);
}

DescribeDirectoriesResponse Alibabacloud_Ecd20201002::Client::describeDirectoriesWithOptions(shared_ptr<DescribeDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->directoryId)) {
    query->insert(pair<string, vector<string>>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDirectories"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDirectoriesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDirectoriesResponse(execute(params, req, runtime));
  }
}

DescribeDirectoriesResponse Alibabacloud_Ecd20201002::Client::describeDirectories(shared_ptr<DescribeDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDirectoriesWithOptions(request, runtime);
}

DescribeFingerPrintTemplatesResponse Alibabacloud_Ecd20201002::Client::describeFingerPrintTemplatesWithOptions(shared_ptr<DescribeFingerPrintTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFingerPrintTemplates"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeFingerPrintTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeFingerPrintTemplatesResponse(execute(params, req, runtime));
  }
}

DescribeFingerPrintTemplatesResponse Alibabacloud_Ecd20201002::Client::describeFingerPrintTemplates(shared_ptr<DescribeFingerPrintTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFingerPrintTemplatesWithOptions(request, runtime);
}

DescribeGlobalDesktopsResponse Alibabacloud_Ecd20201002::Client::describeGlobalDesktopsWithOptions(shared_ptr<DescribeGlobalDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopAccessType)) {
    query->insert(pair<string, string>("DesktopAccessType", *request->desktopAccessType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopName)) {
    query->insert(pair<string, string>("DesktopName", *request->desktopName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopStatus)) {
    query->insert(pair<string, string>("DesktopStatus", *request->desktopStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginRegionId)) {
    query->insert(pair<string, string>("LoginRegionId", *request->loginRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryFotaUpdate)) {
    query->insert(pair<string, bool>("QueryFotaUpdate", *request->queryFotaUpdate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRegionId)) {
    query->insert(pair<string, string>("SearchRegionId", *request->searchRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withoutLatency)) {
    query->insert(pair<string, bool>("WithoutLatency", *request->withoutLatency));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGlobalDesktops"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeGlobalDesktopsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeGlobalDesktopsResponse(execute(params, req, runtime));
  }
}

DescribeGlobalDesktopsResponse Alibabacloud_Ecd20201002::Client::describeGlobalDesktops(shared_ptr<DescribeGlobalDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGlobalDesktopsWithOptions(request, runtime);
}

DescribeOfficeSitesResponse Alibabacloud_Ecd20201002::Client::describeOfficeSitesWithOptions(shared_ptr<DescribeOfficeSitesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->officeSiteId)) {
    query->insert(pair<string, vector<string>>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOfficeSites"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeOfficeSitesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeOfficeSitesResponse(execute(params, req, runtime));
  }
}

DescribeOfficeSitesResponse Alibabacloud_Ecd20201002::Client::describeOfficeSites(shared_ptr<DescribeOfficeSitesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOfficeSitesWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ecd20201002::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRegionsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRegionsResponse(execute(params, req, runtime));
  }
}

DescribeRegionsResponse Alibabacloud_Ecd20201002::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeSnapshotsResponse Alibabacloud_Ecd20201002::Client::describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSnapshots"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSnapshotsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSnapshotsResponse(execute(params, req, runtime));
  }
}

DescribeSnapshotsResponse Alibabacloud_Ecd20201002::Client::describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotsWithOptions(request, runtime);
}

DescribeUserResourcesResponse Alibabacloud_Ecd20201002::Client::describeUserResourcesWithOptions(shared_ptr<DescribeUserResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessType)) {
    query->insert(pair<string, string>("AccessType", *request->accessType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRefresh)) {
    query->insert(pair<string, bool>("AutoRefresh", *request->autoRefresh));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryType)) {
    query->insert(pair<string, long>("CategoryType", *request->categoryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dualCenterForward)) {
    query->insert(pair<string, bool>("DualCenterForward", *request->dualCenterForward));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginRegionId)) {
    query->insert(pair<string, string>("LoginRegionId", *request->loginRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->officeSiteIds)) {
    query->insert(pair<string, vector<string>>("OfficeSiteIds", *request->officeSiteIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productTypes)) {
    query->insert(pair<string, vector<string>>("ProductTypes", *request->productTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocolType)) {
    query->insert(pair<string, string>("ProtocolType", *request->protocolType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryFotaUpdate)) {
    query->insert(pair<string, bool>("QueryFotaUpdate", *request->queryFotaUpdate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->refreshFotaUpdate)) {
    query->insert(pair<string, bool>("RefreshFotaUpdate", *request->refreshFotaUpdate));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    query->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceTypes)) {
    query->insert(pair<string, vector<string>>("ResourceTypes", *request->resourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRegionId)) {
    query->insert(pair<string, string>("SearchRegionId", *request->searchRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserResources"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeUserResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeUserResourcesResponse(execute(params, req, runtime));
  }
}

DescribeUserResourcesResponse Alibabacloud_Ecd20201002::Client::describeUserResources(shared_ptr<DescribeUserResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserResourcesWithOptions(request, runtime);
}

EncryptPasswordResponse Alibabacloud_Ecd20201002::Client::encryptPasswordWithOptions(shared_ptr<EncryptPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EncryptPassword"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EncryptPasswordResponse(callApi(params, req, runtime));
  }
  else {
    return EncryptPasswordResponse(execute(params, req, runtime));
  }
}

EncryptPasswordResponse Alibabacloud_Ecd20201002::Client::encryptPassword(shared_ptr<EncryptPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return encryptPasswordWithOptions(request, runtime);
}

GetCloudDriveServiceMountTokenResponse Alibabacloud_Ecd20201002::Client::getCloudDriveServiceMountTokenWithOptions(shared_ptr<GetCloudDriveServiceMountTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCloudDriveServiceMountToken"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCloudDriveServiceMountTokenResponse(callApi(params, req, runtime));
  }
  else {
    return GetCloudDriveServiceMountTokenResponse(execute(params, req, runtime));
  }
}

GetCloudDriveServiceMountTokenResponse Alibabacloud_Ecd20201002::Client::getCloudDriveServiceMountToken(shared_ptr<GetCloudDriveServiceMountTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCloudDriveServiceMountTokenWithOptions(request, runtime);
}

GetConnectionTicketResponse Alibabacloud_Ecd20201002::Client::getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOS)) {
    query->insert(pair<string, string>("ClientOS", *request->clientOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandContent)) {
    query->insert(pair<string, string>("CommandContent", *request->commandContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetConnectionTicketRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<GetConnectionTicketRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConnectionTicket"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetConnectionTicketResponse(callApi(params, req, runtime));
  }
  else {
    return GetConnectionTicketResponse(execute(params, req, runtime));
  }
}

GetConnectionTicketResponse Alibabacloud_Ecd20201002::Client::getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionTicketWithOptions(request, runtime);
}

GetLoginTokenResponse Alibabacloud_Ecd20201002::Client::getLoginTokenWithOptions(shared_ptr<GetLoginTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticationCode)) {
    query->insert(pair<string, string>("AuthenticationCode", *request->authenticationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOS)) {
    query->insert(pair<string, string>("ClientOS", *request->clientOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentStage)) {
    query->insert(pair<string, string>("CurrentStage", *request->currentStage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepAlive)) {
    query->insert(pair<string, bool>("KeepAlive", *request->keepAlive));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keepAliveToken)) {
    query->insert(pair<string, string>("KeepAliveToken", *request->keepAliveToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newPassword)) {
    query->insert(pair<string, string>("NewPassword", *request->newPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldPassword)) {
    query->insert(pair<string, string>("OldPassword", *request->oldPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenCode)) {
    query->insert(pair<string, string>("TokenCode", *request->tokenCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLoginToken"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLoginTokenResponse(callApi(params, req, runtime));
  }
  else {
    return GetLoginTokenResponse(execute(params, req, runtime));
  }
}

GetLoginTokenResponse Alibabacloud_Ecd20201002::Client::getLoginToken(shared_ptr<GetLoginTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoginTokenWithOptions(request, runtime);
}

IsKeepAliveResponse Alibabacloud_Ecd20201002::Client::isKeepAliveWithOptions(shared_ptr<IsKeepAliveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IsKeepAlive"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return IsKeepAliveResponse(callApi(params, req, runtime));
  }
  else {
    return IsKeepAliveResponse(execute(params, req, runtime));
  }
}

IsKeepAliveResponse Alibabacloud_Ecd20201002::Client::isKeepAlive(shared_ptr<IsKeepAliveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return isKeepAliveWithOptions(request, runtime);
}

QueryEdsAgentReportConfigResponse Alibabacloud_Ecd20201002::Client::queryEdsAgentReportConfigWithOptions(shared_ptr<QueryEdsAgentReportConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceId)) {
    query->insert(pair<string, string>("EcsInstanceId", *request->ecsInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdsAgentReportConfig"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryEdsAgentReportConfigResponse(callApi(params, req, runtime));
  }
  else {
    return QueryEdsAgentReportConfigResponse(execute(params, req, runtime));
  }
}

QueryEdsAgentReportConfigResponse Alibabacloud_Ecd20201002::Client::queryEdsAgentReportConfig(shared_ptr<QueryEdsAgentReportConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdsAgentReportConfigWithOptions(request, runtime);
}

RebootDesktopsResponse Alibabacloud_Ecd20201002::Client::rebootDesktopsWithOptions(shared_ptr<RebootDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOS)) {
    query->insert(pair<string, string>("ClientOS", *request->clientOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionToken)) {
    query->insert(pair<string, string>("SessionToken", *request->sessionToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebootDesktops"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RebootDesktopsResponse(callApi(params, req, runtime));
  }
  else {
    return RebootDesktopsResponse(execute(params, req, runtime));
  }
}

RebootDesktopsResponse Alibabacloud_Ecd20201002::Client::rebootDesktops(shared_ptr<RebootDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootDesktopsWithOptions(request, runtime);
}

RefreshLoginTokenResponse Alibabacloud_Ecd20201002::Client::refreshLoginTokenWithOptions(shared_ptr<RefreshLoginTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshLoginToken"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RefreshLoginTokenResponse(callApi(params, req, runtime));
  }
  else {
    return RefreshLoginTokenResponse(execute(params, req, runtime));
  }
}

RefreshLoginTokenResponse Alibabacloud_Ecd20201002::Client::refreshLoginToken(shared_ptr<RefreshLoginTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshLoginTokenWithOptions(request, runtime);
}

ReportEdsAgentInfoResponse Alibabacloud_Ecd20201002::Client::reportEdsAgentInfoWithOptions(shared_ptr<ReportEdsAgentInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceId)) {
    query->insert(pair<string, string>("EcsInstanceId", *request->ecsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edsAgentInfo)) {
    query->insert(pair<string, string>("EdsAgentInfo", *request->edsAgentInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportEdsAgentInfo"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReportEdsAgentInfoResponse(callApi(params, req, runtime));
  }
  else {
    return ReportEdsAgentInfoResponse(execute(params, req, runtime));
  }
}

ReportEdsAgentInfoResponse Alibabacloud_Ecd20201002::Client::reportEdsAgentInfo(shared_ptr<ReportEdsAgentInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportEdsAgentInfoWithOptions(request, runtime);
}

ReportSessionStatusResponse Alibabacloud_Ecd20201002::Client::reportSessionStatusWithOptions(shared_ptr<ReportSessionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sessionChangeTime)) {
    query->insert(pair<string, long>("SessionChangeTime", *request->sessionChangeTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionStatus)) {
    query->insert(pair<string, string>("SessionStatus", *request->sessionStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportSessionStatus"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReportSessionStatusResponse(callApi(params, req, runtime));
  }
  else {
    return ReportSessionStatusResponse(execute(params, req, runtime));
  }
}

ReportSessionStatusResponse Alibabacloud_Ecd20201002::Client::reportSessionStatus(shared_ptr<ReportSessionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportSessionStatusWithOptions(request, runtime);
}

ResetPasswordResponse Alibabacloud_Ecd20201002::Client::resetPasswordWithOptions(shared_ptr<ResetPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("phone", *request->phone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetPassword"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResetPasswordResponse(callApi(params, req, runtime));
  }
  else {
    return ResetPasswordResponse(execute(params, req, runtime));
  }
}

ResetPasswordResponse Alibabacloud_Ecd20201002::Client::resetPassword(shared_ptr<ResetPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetPasswordWithOptions(request, runtime);
}

ResetSnapshotResponse Alibabacloud_Ecd20201002::Client::resetSnapshotWithOptions(shared_ptr<ResetSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stopDesktop)) {
    query->insert(pair<string, bool>("StopDesktop", *request->stopDesktop));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetSnapshot"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResetSnapshotResponse(callApi(params, req, runtime));
  }
  else {
    return ResetSnapshotResponse(execute(params, req, runtime));
  }
}

ResetSnapshotResponse Alibabacloud_Ecd20201002::Client::resetSnapshot(shared_ptr<ResetSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetSnapshotWithOptions(request, runtime);
}

SendTokenCodeResponse Alibabacloud_Ecd20201002::Client::sendTokenCodeWithOptions(shared_ptr<SendTokenCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOS)) {
    query->insert(pair<string, string>("ClientOS", *request->clientOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenCode)) {
    query->insert(pair<string, string>("TokenCode", *request->tokenCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendTokenCode"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendTokenCodeResponse(callApi(params, req, runtime));
  }
  else {
    return SendTokenCodeResponse(execute(params, req, runtime));
  }
}

SendTokenCodeResponse Alibabacloud_Ecd20201002::Client::sendTokenCode(shared_ptr<SendTokenCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendTokenCodeWithOptions(request, runtime);
}

SetFingerPrintTemplateResponse Alibabacloud_Ecd20201002::Client::setFingerPrintTemplateWithOptions(shared_ptr<SetFingerPrintTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedFingerPrintTemplate)) {
    query->insert(pair<string, string>("EncryptedFingerPrintTemplate", *request->encryptedFingerPrintTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedKey)) {
    query->insert(pair<string, string>("EncryptedKey", *request->encryptedKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fingerPrintTemplate)) {
    query->insert(pair<string, string>("FingerPrintTemplate", *request->fingerPrintTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetFingerPrintTemplate"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetFingerPrintTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return SetFingerPrintTemplateResponse(execute(params, req, runtime));
  }
}

SetFingerPrintTemplateResponse Alibabacloud_Ecd20201002::Client::setFingerPrintTemplate(shared_ptr<SetFingerPrintTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setFingerPrintTemplateWithOptions(request, runtime);
}

SetFingerPrintTemplateDescriptionResponse Alibabacloud_Ecd20201002::Client::setFingerPrintTemplateDescriptionWithOptions(shared_ptr<SetFingerPrintTemplateDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->index)) {
    query->insert(pair<string, long>("Index", *request->index));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetFingerPrintTemplateDescription"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetFingerPrintTemplateDescriptionResponse(callApi(params, req, runtime));
  }
  else {
    return SetFingerPrintTemplateDescriptionResponse(execute(params, req, runtime));
  }
}

SetFingerPrintTemplateDescriptionResponse Alibabacloud_Ecd20201002::Client::setFingerPrintTemplateDescription(shared_ptr<SetFingerPrintTemplateDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setFingerPrintTemplateDescriptionWithOptions(request, runtime);
}

StartDesktopsResponse Alibabacloud_Ecd20201002::Client::startDesktopsWithOptions(shared_ptr<StartDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOS)) {
    query->insert(pair<string, string>("ClientOS", *request->clientOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDesktops"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartDesktopsResponse(callApi(params, req, runtime));
  }
  else {
    return StartDesktopsResponse(execute(params, req, runtime));
  }
}

StartDesktopsResponse Alibabacloud_Ecd20201002::Client::startDesktops(shared_ptr<StartDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDesktopsWithOptions(request, runtime);
}

StartRecordContentResponse Alibabacloud_Ecd20201002::Client::startRecordContentWithOptions(shared_ptr<StartRecordContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOS)) {
    query->insert(pair<string, string>("ClientOS", *request->clientOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartRecordContent"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartRecordContentResponse(callApi(params, req, runtime));
  }
  else {
    return StartRecordContentResponse(execute(params, req, runtime));
  }
}

StartRecordContentResponse Alibabacloud_Ecd20201002::Client::startRecordContent(shared_ptr<StartRecordContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRecordContentWithOptions(request, runtime);
}

StopDesktopsResponse Alibabacloud_Ecd20201002::Client::stopDesktopsWithOptions(shared_ptr<StopDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOS)) {
    query->insert(pair<string, string>("ClientOS", *request->clientOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionToken)) {
    query->insert(pair<string, string>("SessionToken", *request->sessionToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDesktops"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopDesktopsResponse(callApi(params, req, runtime));
  }
  else {
    return StopDesktopsResponse(execute(params, req, runtime));
  }
}

StopDesktopsResponse Alibabacloud_Ecd20201002::Client::stopDesktops(shared_ptr<StopDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDesktopsWithOptions(request, runtime);
}

StopRecordContentResponse Alibabacloud_Ecd20201002::Client::stopRecordContentWithOptions(shared_ptr<StopRecordContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOS)) {
    query->insert(pair<string, string>("ClientOS", *request->clientOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopRecordContent"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopRecordContentResponse(callApi(params, req, runtime));
  }
  else {
    return StopRecordContentResponse(execute(params, req, runtime));
  }
}

StopRecordContentResponse Alibabacloud_Ecd20201002::Client::stopRecordContent(shared_ptr<StopRecordContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopRecordContentWithOptions(request, runtime);
}

UnbindUserDesktopResponse Alibabacloud_Ecd20201002::Client::unbindUserDesktopWithOptions(shared_ptr<UnbindUserDesktopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDesktopId)) {
    query->insert(pair<string, string>("UserDesktopId", *request->userDesktopId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindUserDesktop"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnbindUserDesktopResponse(callApi(params, req, runtime));
  }
  else {
    return UnbindUserDesktopResponse(execute(params, req, runtime));
  }
}

UnbindUserDesktopResponse Alibabacloud_Ecd20201002::Client::unbindUserDesktop(shared_ptr<UnbindUserDesktopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindUserDesktopWithOptions(request, runtime);
}

VerifyCredentialResponse Alibabacloud_Ecd20201002::Client::verifyCredentialWithOptions(shared_ptr<VerifyCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credential)) {
    query->insert(pair<string, string>("Credential", *request->credential));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialType)) {
    query->insert(pair<string, string>("CredentialType", *request->credentialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedKey)) {
    query->insert(pair<string, string>("EncryptedKey", *request->encryptedKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyCredential"))},
    {"version", boost::any(string("2020-10-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return VerifyCredentialResponse(callApi(params, req, runtime));
  }
  else {
    return VerifyCredentialResponse(execute(params, req, runtime));
  }
}

VerifyCredentialResponse Alibabacloud_Ecd20201002::Client::verifyCredential(shared_ptr<VerifyCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyCredentialWithOptions(request, runtime);
}

