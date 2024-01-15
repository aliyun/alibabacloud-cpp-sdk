// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ecd_20200930.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Ecd20200930;

Alibabacloud_Ecd20200930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ecd"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ecd20200930::Client::getEndpoint(shared_ptr<string> productId,
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

ActivateOfficeSiteResponse Alibabacloud_Ecd20200930::Client::activateOfficeSiteWithOptions(shared_ptr<ActivateOfficeSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ActivateOfficeSite"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActivateOfficeSiteResponse(callApi(params, req, runtime));
}

ActivateOfficeSiteResponse Alibabacloud_Ecd20200930::Client::activateOfficeSite(shared_ptr<ActivateOfficeSiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateOfficeSiteWithOptions(request, runtime);
}

AddDesktopOversoldUserGroupResponse Alibabacloud_Ecd20200930::Client::addDesktopOversoldUserGroupWithOptions(shared_ptr<AddDesktopOversoldUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDesktopOversoldUserGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDesktopOversoldUserGroupResponse(callApi(params, req, runtime));
}

AddDesktopOversoldUserGroupResponse Alibabacloud_Ecd20200930::Client::addDesktopOversoldUserGroup(shared_ptr<AddDesktopOversoldUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDesktopOversoldUserGroupWithOptions(request, runtime);
}

AddDevicesResponse Alibabacloud_Ecd20200930::Client::addDevicesWithOptions(shared_ptr<AddDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    query->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceIds)) {
    query->insert(pair<string, vector<string>>("DeviceIds", *request->deviceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDevices"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDevicesResponse(callApi(params, req, runtime));
}

AddDevicesResponse Alibabacloud_Ecd20200930::Client::addDevices(shared_ptr<AddDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDevicesWithOptions(request, runtime);
}

AddFilePermissionResponse Alibabacloud_Ecd20200930::Client::addFilePermissionWithOptions(shared_ptr<AddFilePermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddFilePermissionShrinkRequest> request = make_shared<AddFilePermissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddFilePermissionRequestMemberList>>(tmpReq->memberList)) {
    request->memberListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->memberList, make_shared<string>("MemberList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberListShrink)) {
    query->insert(pair<string, string>("MemberList", *request->memberListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFilePermission"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFilePermissionResponse(callApi(params, req, runtime));
}

AddFilePermissionResponse Alibabacloud_Ecd20200930::Client::addFilePermission(shared_ptr<AddFilePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFilePermissionWithOptions(request, runtime);
}

AddUserToDesktopGroupResponse Alibabacloud_Ecd20200930::Client::addUserToDesktopGroupWithOptions(shared_ptr<AddUserToDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopGroupIds)) {
    query->insert(pair<string, vector<string>>("DesktopGroupIds", *request->desktopGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserIds)) {
    query->insert(pair<string, vector<string>>("EndUserIds", *request->endUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserToDesktopGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserToDesktopGroupResponse(callApi(params, req, runtime));
}

AddUserToDesktopGroupResponse Alibabacloud_Ecd20200930::Client::addUserToDesktopGroup(shared_ptr<AddUserToDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserToDesktopGroupWithOptions(request, runtime);
}

AddUserToDesktopOversoldUserGroupResponse Alibabacloud_Ecd20200930::Client::addUserToDesktopOversoldUserGroupWithOptions(shared_ptr<AddUserToDesktopOversoldUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->addUserAmount)) {
    query->insert(pair<string, long>("AddUserAmount", *request->addUserAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserToDesktopOversoldUserGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserToDesktopOversoldUserGroupResponse(callApi(params, req, runtime));
}

AddUserToDesktopOversoldUserGroupResponse Alibabacloud_Ecd20200930::Client::addUserToDesktopOversoldUserGroup(shared_ptr<AddUserToDesktopOversoldUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserToDesktopOversoldUserGroupWithOptions(request, runtime);
}

ApplyAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::applyAutoSnapshotPolicyWithOptions(shared_ptr<ApplyAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyAutoSnapshotPolicy"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyAutoSnapshotPolicyResponse(callApi(params, req, runtime));
}

ApplyAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::applyAutoSnapshotPolicy(shared_ptr<ApplyAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyAutoSnapshotPolicyWithOptions(request, runtime);
}

ApplyCoordinatePrivilegeResponse Alibabacloud_Ecd20200930::Client::applyCoordinatePrivilegeWithOptions(shared_ptr<ApplyCoordinatePrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coId)) {
    query->insert(pair<string, string>("CoId", *request->coId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyCoordinatePrivilege"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyCoordinatePrivilegeResponse(callApi(params, req, runtime));
}

ApplyCoordinatePrivilegeResponse Alibabacloud_Ecd20200930::Client::applyCoordinatePrivilege(shared_ptr<ApplyCoordinatePrivilegeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyCoordinatePrivilegeWithOptions(request, runtime);
}

ApplyCoordinationForMonitoringResponse Alibabacloud_Ecd20200930::Client::applyCoordinationForMonitoringWithOptions(shared_ptr<ApplyCoordinationForMonitoringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coordinatePolicyType)) {
    query->insert(pair<string, string>("CoordinatePolicyType", *request->coordinatePolicyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initiatorType)) {
    query->insert(pair<string, string>("InitiatorType", *request->initiatorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyCoordinationForMonitoringRequestResourceCandidates>>(request->resourceCandidates)) {
    query->insert(pair<string, vector<ApplyCoordinationForMonitoringRequestResourceCandidates>>("ResourceCandidates", *request->resourceCandidates));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyCoordinationForMonitoring"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyCoordinationForMonitoringResponse(callApi(params, req, runtime));
}

ApplyCoordinationForMonitoringResponse Alibabacloud_Ecd20200930::Client::applyCoordinationForMonitoring(shared_ptr<ApplyCoordinationForMonitoringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyCoordinationForMonitoringWithOptions(request, runtime);
}

ApproveFotaUpdateResponse Alibabacloud_Ecd20200930::Client::approveFotaUpdateWithOptions(shared_ptr<ApproveFotaUpdateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    query->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApproveFotaUpdate"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApproveFotaUpdateResponse(callApi(params, req, runtime));
}

ApproveFotaUpdateResponse Alibabacloud_Ecd20200930::Client::approveFotaUpdate(shared_ptr<ApproveFotaUpdateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveFotaUpdateWithOptions(request, runtime);
}

AssociateNetworkPackageResponse Alibabacloud_Ecd20200930::Client::associateNetworkPackageWithOptions(shared_ptr<AssociateNetworkPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkPackageId)) {
    query->insert(pair<string, string>("NetworkPackageId", *request->networkPackageId));
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
    {"action", boost::any(string("AssociateNetworkPackage"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateNetworkPackageResponse(callApi(params, req, runtime));
}

AssociateNetworkPackageResponse Alibabacloud_Ecd20200930::Client::associateNetworkPackage(shared_ptr<AssociateNetworkPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateNetworkPackageWithOptions(request, runtime);
}

AttachCenResponse Alibabacloud_Ecd20200930::Client::attachCenWithOptions(shared_ptr<AttachCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cenOwnerId)) {
    query->insert(pair<string, long>("CenOwnerId", *request->cenOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyCode)) {
    query->insert(pair<string, string>("VerifyCode", *request->verifyCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachCen"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachCenResponse(callApi(params, req, runtime));
}

AttachCenResponse Alibabacloud_Ecd20200930::Client::attachCen(shared_ptr<AttachCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachCenWithOptions(request, runtime);
}

AttachEndUserResponse Alibabacloud_Ecd20200930::Client::attachEndUserWithOptions(shared_ptr<AttachEndUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adDomain)) {
    query->insert(pair<string, string>("AdDomain", *request->adDomain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    query->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachEndUser"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachEndUserResponse(callApi(params, req, runtime));
}

AttachEndUserResponse Alibabacloud_Ecd20200930::Client::attachEndUser(shared_ptr<AttachEndUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachEndUserWithOptions(request, runtime);
}

CancelAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::cancelAutoSnapshotPolicyWithOptions(shared_ptr<CancelAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelAutoSnapshotPolicy"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelAutoSnapshotPolicyResponse(callApi(params, req, runtime));
}

CancelAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::cancelAutoSnapshotPolicy(shared_ptr<CancelAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelAutoSnapshotPolicyWithOptions(request, runtime);
}

CancelCdsFileShareLinkResponse Alibabacloud_Ecd20200930::Client::cancelCdsFileShareLinkWithOptions(shared_ptr<CancelCdsFileShareLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareId)) {
    query->insert(pair<string, string>("ShareId", *request->shareId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelCdsFileShareLink"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelCdsFileShareLinkResponse(callApi(params, req, runtime));
}

CancelCdsFileShareLinkResponse Alibabacloud_Ecd20200930::Client::cancelCdsFileShareLink(shared_ptr<CancelCdsFileShareLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelCdsFileShareLinkWithOptions(request, runtime);
}

CancelCoordinationForMonitoringResponse Alibabacloud_Ecd20200930::Client::cancelCoordinationForMonitoringWithOptions(shared_ptr<CancelCoordinationForMonitoringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->coIds)) {
    query->insert(pair<string, vector<string>>("CoIds", *request->coIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelCoordinationForMonitoring"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelCoordinationForMonitoringResponse(callApi(params, req, runtime));
}

CancelCoordinationForMonitoringResponse Alibabacloud_Ecd20200930::Client::cancelCoordinationForMonitoring(shared_ptr<CancelCoordinationForMonitoringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelCoordinationForMonitoringWithOptions(request, runtime);
}

CancelCopyImageResponse Alibabacloud_Ecd20200930::Client::cancelCopyImageWithOptions(shared_ptr<CancelCopyImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelCopyImage"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelCopyImageResponse(callApi(params, req, runtime));
}

CancelCopyImageResponse Alibabacloud_Ecd20200930::Client::cancelCopyImage(shared_ptr<CancelCopyImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelCopyImageWithOptions(request, runtime);
}

ClonePolicyGroupResponse Alibabacloud_Ecd20200930::Client::clonePolicyGroupWithOptions(shared_ptr<ClonePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClonePolicyGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClonePolicyGroupResponse(callApi(params, req, runtime));
}

ClonePolicyGroupResponse Alibabacloud_Ecd20200930::Client::clonePolicyGroup(shared_ptr<ClonePolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clonePolicyGroupWithOptions(request, runtime);
}

CompleteCdsFileResponse Alibabacloud_Ecd20200930::Client::completeCdsFileWithOptions(shared_ptr<CompleteCdsFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadId)) {
    query->insert(pair<string, string>("UploadId", *request->uploadId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompleteCdsFile"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompleteCdsFileResponse(callApi(params, req, runtime));
}

CompleteCdsFileResponse Alibabacloud_Ecd20200930::Client::completeCdsFile(shared_ptr<CompleteCdsFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return completeCdsFileWithOptions(request, runtime);
}

ConfigADConnectorTrustResponse Alibabacloud_Ecd20200930::Client::configADConnectorTrustWithOptions(shared_ptr<ConfigADConnectorTrustRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->rdsLicenseDomain)) {
    query->insert(pair<string, bool>("RdsLicenseDomain", *request->rdsLicenseDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trustKey)) {
    query->insert(pair<string, string>("TrustKey", *request->trustKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigADConnectorTrust"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigADConnectorTrustResponse(callApi(params, req, runtime));
}

ConfigADConnectorTrustResponse Alibabacloud_Ecd20200930::Client::configADConnectorTrust(shared_ptr<ConfigADConnectorTrustRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configADConnectorTrustWithOptions(request, runtime);
}

ConfigADConnectorUserResponse Alibabacloud_Ecd20200930::Client::configADConnectorUserWithOptions(shared_ptr<ConfigADConnectorUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainPassword)) {
    query->insert(pair<string, string>("DomainPassword", *request->domainPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainUserName)) {
    query->insert(pair<string, string>("DomainUserName", *request->domainUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OUName)) {
    query->insert(pair<string, string>("OUName", *request->OUName));
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
    {"action", boost::any(string("ConfigADConnectorUser"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigADConnectorUserResponse(callApi(params, req, runtime));
}

ConfigADConnectorUserResponse Alibabacloud_Ecd20200930::Client::configADConnectorUser(shared_ptr<ConfigADConnectorUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configADConnectorUserWithOptions(request, runtime);
}

CopyCdsFileResponse Alibabacloud_Ecd20200930::Client::copyCdsFileWithOptions(shared_ptr<CopyCdsFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRename)) {
    query->insert(pair<string, bool>("AutoRename", *request->autoRename));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileReceiverId)) {
    query->insert(pair<string, string>("FileReceiverId", *request->fileReceiverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileReceiverType)) {
    query->insert(pair<string, string>("FileReceiverType", *request->fileReceiverType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFolderId)) {
    query->insert(pair<string, string>("ParentFolderId", *request->parentFolderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyCdsFile"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyCdsFileResponse(callApi(params, req, runtime));
}

CopyCdsFileResponse Alibabacloud_Ecd20200930::Client::copyCdsFile(shared_ptr<CopyCdsFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyCdsFileWithOptions(request, runtime);
}

CopyImageResponse Alibabacloud_Ecd20200930::Client::copyImageWithOptions(shared_ptr<CopyImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationDescription)) {
    query->insert(pair<string, string>("DestinationDescription", *request->destinationDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationImageName)) {
    query->insert(pair<string, string>("DestinationImageName", *request->destinationImageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationRegionId)) {
    query->insert(pair<string, string>("DestinationRegionId", *request->destinationRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyImage"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyImageResponse(callApi(params, req, runtime));
}

CopyImageResponse Alibabacloud_Ecd20200930::Client::copyImage(shared_ptr<CopyImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyImageWithOptions(request, runtime);
}

CreateADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::createADConnectorDirectoryWithOptions(shared_ptr<CreateADConnectorDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopAccessType)) {
    query->insert(pair<string, string>("DesktopAccessType", *request->desktopAccessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryName)) {
    query->insert(pair<string, string>("DirectoryName", *request->directoryName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dnsAddress)) {
    query->insert(pair<string, vector<string>>("DnsAddress", *request->dnsAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainPassword)) {
    query->insert(pair<string, string>("DomainPassword", *request->domainPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainUserName)) {
    query->insert(pair<string, string>("DomainUserName", *request->domainUserName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAdminAccess)) {
    query->insert(pair<string, bool>("EnableAdminAccess", *request->enableAdminAccess));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mfaEnabled)) {
    query->insert(pair<string, bool>("MfaEnabled", *request->mfaEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->specification)) {
    query->insert(pair<string, long>("Specification", *request->specification));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subDomainDnsAddress)) {
    query->insert(pair<string, vector<string>>("SubDomainDnsAddress", *request->subDomainDnsAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDomainName)) {
    query->insert(pair<string, string>("SubDomainName", *request->subDomainName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitchId)) {
    query->insert(pair<string, vector<string>>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateADConnectorDirectory"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateADConnectorDirectoryResponse(callApi(params, req, runtime));
}

CreateADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::createADConnectorDirectory(shared_ptr<CreateADConnectorDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createADConnectorDirectoryWithOptions(request, runtime);
}

CreateADConnectorOfficeSiteResponse Alibabacloud_Ecd20200930::Client::createADConnectorOfficeSiteWithOptions(shared_ptr<CreateADConnectorOfficeSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adHostname)) {
    query->insert(pair<string, string>("AdHostname", *request->adHostname));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cenOwnerId)) {
    query->insert(pair<string, long>("CenOwnerId", *request->cenOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrBlock)) {
    query->insert(pair<string, string>("CidrBlock", *request->cidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopAccessType)) {
    query->insert(pair<string, string>("DesktopAccessType", *request->desktopAccessType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dnsAddress)) {
    query->insert(pair<string, vector<string>>("DnsAddress", *request->dnsAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainPassword)) {
    query->insert(pair<string, string>("DomainPassword", *request->domainPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainUserName)) {
    query->insert(pair<string, string>("DomainUserName", *request->domainUserName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAdminAccess)) {
    query->insert(pair<string, bool>("EnableAdminAccess", *request->enableAdminAccess));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInternetAccess)) {
    query->insert(pair<string, bool>("EnableInternetAccess", *request->enableInternetAccess));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mfaEnabled)) {
    query->insert(pair<string, bool>("MfaEnabled", *request->mfaEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteName)) {
    query->insert(pair<string, string>("OfficeSiteName", *request->officeSiteName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocolType)) {
    query->insert(pair<string, string>("ProtocolType", *request->protocolType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->specification)) {
    query->insert(pair<string, long>("Specification", *request->specification));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subDomainDnsAddress)) {
    query->insert(pair<string, vector<string>>("SubDomainDnsAddress", *request->subDomainDnsAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDomainName)) {
    query->insert(pair<string, string>("SubDomainName", *request->subDomainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyCode)) {
    query->insert(pair<string, string>("VerifyCode", *request->verifyCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateADConnectorOfficeSite"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateADConnectorOfficeSiteResponse(callApi(params, req, runtime));
}

CreateADConnectorOfficeSiteResponse Alibabacloud_Ecd20200930::Client::createADConnectorOfficeSite(shared_ptr<CreateADConnectorOfficeSiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createADConnectorOfficeSiteWithOptions(request, runtime);
}

CreateAndBindNasFileSystemResponse Alibabacloud_Ecd20200930::Client::createAndBindNasFileSystemWithOptions(shared_ptr<CreateAndBindNasFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->encryptType)) {
    query->insert(pair<string, long>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserIds)) {
    query->insert(pair<string, vector<string>>("EndUserIds", *request->endUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemName)) {
    query->insert(pair<string, string>("FileSystemName", *request->fileSystemName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAndBindNasFileSystem"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAndBindNasFileSystemResponse(callApi(params, req, runtime));
}

CreateAndBindNasFileSystemResponse Alibabacloud_Ecd20200930::Client::createAndBindNasFileSystem(shared_ptr<CreateAndBindNasFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAndBindNasFileSystemWithOptions(request, runtime);
}

CreateAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::createAutoSnapshotPolicyWithOptions(shared_ptr<CreateAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cronExpression)) {
    query->insert(pair<string, string>("CronExpression", *request->cronExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionDays)) {
    query->insert(pair<string, long>("RetentionDays", *request->retentionDays));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAutoSnapshotPolicy"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAutoSnapshotPolicyResponse(callApi(params, req, runtime));
}

CreateAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::createAutoSnapshotPolicy(shared_ptr<CreateAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAutoSnapshotPolicyWithOptions(request, runtime);
}

CreateBundleResponse Alibabacloud_Ecd20200930::Client::createBundleWithOptions(shared_ptr<CreateBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bundleName)) {
    query->insert(pair<string, string>("BundleName", *request->bundleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopType)) {
    query->insert(pair<string, string>("DesktopType", *request->desktopType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootDiskPerformanceLevel)) {
    query->insert(pair<string, string>("RootDiskPerformanceLevel", *request->rootDiskPerformanceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rootDiskSizeGib)) {
    query->insert(pair<string, long>("RootDiskSizeGib", *request->rootDiskSizeGib));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDiskPerformanceLevel)) {
    query->insert(pair<string, string>("UserDiskPerformanceLevel", *request->userDiskPerformanceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->userDiskSizeGib)) {
    query->insert(pair<string, vector<long>>("UserDiskSizeGib", *request->userDiskSizeGib));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBundle"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBundleResponse(callApi(params, req, runtime));
}

CreateBundleResponse Alibabacloud_Ecd20200930::Client::createBundle(shared_ptr<CreateBundleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBundleWithOptions(request, runtime);
}

CreateCdsFileResponse Alibabacloud_Ecd20200930::Client::createCdsFileWithOptions(shared_ptr<CreateCdsFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conflictPolicy)) {
    query->insert(pair<string, string>("ConflictPolicy", *request->conflictPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileHash)) {
    query->insert(pair<string, string>("FileHash", *request->fileHash));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileLength)) {
    query->insert(pair<string, long>("FileLength", *request->fileLength));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFileId)) {
    query->insert(pair<string, string>("ParentFileId", *request->parentFileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCdsFile"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCdsFileResponse(callApi(params, req, runtime));
}

CreateCdsFileResponse Alibabacloud_Ecd20200930::Client::createCdsFile(shared_ptr<CreateCdsFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCdsFileWithOptions(request, runtime);
}

CreateCdsFileShareLinkResponse Alibabacloud_Ecd20200930::Client::createCdsFileShareLinkWithOptions(shared_ptr<CreateCdsFileShareLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableDownload)) {
    query->insert(pair<string, bool>("DisableDownload", *request->disableDownload));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disablePreview)) {
    query->insert(pair<string, bool>("DisablePreview", *request->disablePreview));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableSave)) {
    query->insert(pair<string, bool>("DisableSave", *request->disableSave));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->downloadLimit)) {
    query->insert(pair<string, long>("DownloadLimit", *request->downloadLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiration)) {
    query->insert(pair<string, string>("Expiration", *request->expiration));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->fileIds)) {
    query->insert(pair<string, vector<string>>("FileIds", *request->fileIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->previewLimit)) {
    query->insert(pair<string, long>("PreviewLimit", *request->previewLimit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->saveLimit)) {
    query->insert(pair<string, long>("SaveLimit", *request->saveLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareName)) {
    query->insert(pair<string, string>("ShareName", *request->shareName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sharePwd)) {
    query->insert(pair<string, string>("SharePwd", *request->sharePwd));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCdsFileShareLink"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCdsFileShareLinkResponse(callApi(params, req, runtime));
}

CreateCdsFileShareLinkResponse Alibabacloud_Ecd20200930::Client::createCdsFileShareLink(shared_ptr<CreateCdsFileShareLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCdsFileShareLinkWithOptions(request, runtime);
}

CreateCloudDriveServiceResponse Alibabacloud_Ecd20200930::Client::createCloudDriveServiceWithOptions(shared_ptr<CreateCloudDriveServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizType)) {
    query->insert(pair<string, long>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSize)) {
    query->insert(pair<string, long>("MaxSize", *request->maxSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteType)) {
    query->insert(pair<string, string>("OfficeSiteType", *request->officeSiteType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->solutionId)) {
    query->insert(pair<string, string>("SolutionId", *request->solutionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userMaxSize)) {
    query->insert(pair<string, long>("UserMaxSize", *request->userMaxSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCloudDriveService"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCloudDriveServiceResponse(callApi(params, req, runtime));
}

CreateCloudDriveServiceResponse Alibabacloud_Ecd20200930::Client::createCloudDriveService(shared_ptr<CreateCloudDriveServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCloudDriveServiceWithOptions(request, runtime);
}

CreateCloudDriveUsersResponse Alibabacloud_Ecd20200930::Client::createCloudDriveUsersWithOptions(shared_ptr<CreateCloudDriveUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userMaxSize)) {
    query->insert(pair<string, long>("UserMaxSize", *request->userMaxSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCloudDriveUsers"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCloudDriveUsersResponse(callApi(params, req, runtime));
}

CreateCloudDriveUsersResponse Alibabacloud_Ecd20200930::Client::createCloudDriveUsers(shared_ptr<CreateCloudDriveUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCloudDriveUsersWithOptions(request, runtime);
}

CreateDesktopGroupResponse Alibabacloud_Ecd20200930::Client::createDesktopGroupWithOptions(shared_ptr<CreateDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allClassifyUsers)) {
    query->insert(pair<string, bool>("AllClassifyUsers", *request->allClassifyUsers));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->allowAutoSetup)) {
    query->insert(pair<string, long>("AllowAutoSetup", *request->allowAutoSetup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->allowBufferCount)) {
    query->insert(pair<string, long>("AllowBufferCount", *request->allowBufferCount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bindAmount)) {
    query->insert(pair<string, long>("BindAmount", *request->bindAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bundleId)) {
    query->insert(pair<string, string>("BundleId", *request->bundleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buyDesktopsCount)) {
    query->insert(pair<string, long>("BuyDesktopsCount", *request->buyDesktopsCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classify)) {
    query->insert(pair<string, string>("Classify", *request->classify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comments)) {
    query->insert(pair<string, string>("Comments", *request->comments));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->connectDuration)) {
    query->insert(pair<string, long>("ConnectDuration", *request->connectDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->defaultInitDesktopCount)) {
    query->insert(pair<string, long>("DefaultInitDesktopCount", *request->defaultInitDesktopCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupName)) {
    query->insert(pair<string, string>("DesktopGroupName", *request->desktopGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserIds)) {
    query->insert(pair<string, vector<string>>("EndUserIds", *request->endUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupVersion)) {
    query->insert(pair<string, long>("GroupVersion", *request->groupVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleDisconnectDuration)) {
    query->insert(pair<string, long>("IdleDisconnectDuration", *request->idleDisconnectDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->keepDuration)) {
    query->insert(pair<string, long>("KeepDuration", *request->keepDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->loadPolicy)) {
    query->insert(pair<string, long>("LoadPolicy", *request->loadPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxDesktopsCount)) {
    query->insert(pair<string, long>("MaxDesktopsCount", *request->maxDesktopsCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minDesktopsCount)) {
    query->insert(pair<string, long>("MinDesktopsCount", *request->minDesktopsCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownType)) {
    query->insert(pair<string, long>("OwnType", *request->ownType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->profileFollowSwitch)) {
    query->insert(pair<string, bool>("ProfileFollowSwitch", *request->profileFollowSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->ratioThreshold)) {
    query->insert(pair<string, double>("RatioThreshold", *request->ratioThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resetType)) {
    query->insert(pair<string, long>("ResetType", *request->resetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scaleStrategyId)) {
    query->insert(pair<string, string>("ScaleStrategyId", *request->scaleStrategyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopDuration)) {
    query->insert(pair<string, long>("StopDuration", *request->stopDuration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->volumeEncryptionEnabled)) {
    query->insert(pair<string, bool>("VolumeEncryptionEnabled", *request->volumeEncryptionEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volumeEncryptionKey)) {
    query->insert(pair<string, string>("VolumeEncryptionKey", *request->volumeEncryptionKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDesktopGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDesktopGroupResponse(callApi(params, req, runtime));
}

CreateDesktopGroupResponse Alibabacloud_Ecd20200930::Client::createDesktopGroup(shared_ptr<CreateDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDesktopGroupWithOptions(request, runtime);
}

CreateDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::createDesktopOversoldGroupWithOptions(shared_ptr<CreateDesktopOversoldGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->concurrenceCount)) {
    query->insert(pair<string, long>("ConcurrenceCount", *request->concurrenceCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataDiskSize)) {
    query->insert(pair<string, long>("DataDiskSize", *request->dataDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopType)) {
    query->insert(pair<string, string>("DesktopType", *request->desktopType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oversoldUserCount)) {
    query->insert(pair<string, long>("OversoldUserCount", *request->oversoldUserCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oversoldWarn)) {
    query->insert(pair<string, long>("OversoldWarn", *request->oversoldWarn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopDuration)) {
    query->insert(pair<string, long>("StopDuration", *request->stopDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->systemDiskSize)) {
    query->insert(pair<string, long>("SystemDiskSize", *request->systemDiskSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDesktopOversoldGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDesktopOversoldGroupResponse(callApi(params, req, runtime));
}

CreateDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::createDesktopOversoldGroup(shared_ptr<CreateDesktopOversoldGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDesktopOversoldGroupWithOptions(request, runtime);
}

CreateDesktopsResponse Alibabacloud_Ecd20200930::Client::createDesktopsWithOptions(shared_ptr<CreateDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bundleId)) {
    query->insert(pair<string, string>("BundleId", *request->bundleId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDesktopsRequestBundleModels>>(request->bundleModels)) {
    query->insert(pair<string, vector<CreateDesktopsRequestBundleModels>>("BundleModels", *request->bundleModels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopMemberIp)) {
    query->insert(pair<string, string>("DesktopMemberIp", *request->desktopMemberIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopName)) {
    query->insert(pair<string, string>("DesktopName", *request->desktopName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->desktopNameSuffix)) {
    query->insert(pair<string, bool>("DesktopNameSuffix", *request->desktopNameSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDesktopsRequestDesktopTimers>>(request->desktopTimers)) {
    query->insert(pair<string, vector<CreateDesktopsRequestDesktopTimers>>("DesktopTimers", *request->desktopTimers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostname)) {
    query->insert(pair<string, string>("Hostname", *request->hostname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDesktopsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateDesktopsRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAssignMode)) {
    query->insert(pair<string, string>("UserAssignMode", *request->userAssignMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDesktopsRequestUserCommands>>(request->userCommands)) {
    query->insert(pair<string, vector<CreateDesktopsRequestUserCommands>>("UserCommands", *request->userCommands));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->volumeEncryptionEnabled)) {
    query->insert(pair<string, bool>("VolumeEncryptionEnabled", *request->volumeEncryptionEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volumeEncryptionKey)) {
    query->insert(pair<string, string>("VolumeEncryptionKey", *request->volumeEncryptionKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDesktopsResponse(callApi(params, req, runtime));
}

CreateDesktopsResponse Alibabacloud_Ecd20200930::Client::createDesktops(shared_ptr<CreateDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDesktopsWithOptions(request, runtime);
}

CreateDiskEncryptionServiceResponse Alibabacloud_Ecd20200930::Client::createDiskEncryptionServiceWithOptions(shared_ptr<CreateDiskEncryptionServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDiskEncryptionService"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDiskEncryptionServiceResponse(callApi(params, req, runtime));
}

CreateDiskEncryptionServiceResponse Alibabacloud_Ecd20200930::Client::createDiskEncryptionService(shared_ptr<CreateDiskEncryptionServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDiskEncryptionServiceWithOptions(request, runtime);
}

CreateImageResponse Alibabacloud_Ecd20200930::Client::createImageWithOptions(shared_ptr<CreateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoCleanUserdata)) {
    query->insert(pair<string, bool>("AutoCleanUserdata", *request->autoCleanUserdata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskType)) {
    query->insert(pair<string, string>("DiskType", *request->diskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageResourceType)) {
    query->insert(pair<string, string>("ImageResourceType", *request->imageResourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->snapshotIds)) {
    query->insert(pair<string, vector<string>>("SnapshotIds", *request->snapshotIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImage"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateImageResponse(callApi(params, req, runtime));
}

CreateImageResponse Alibabacloud_Ecd20200930::Client::createImage(shared_ptr<CreateImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageWithOptions(request, runtime);
}

CreateNASFileSystemResponse Alibabacloud_Ecd20200930::Client::createNASFileSystemWithOptions(shared_ptr<CreateNASFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptType)) {
    query->insert(pair<string, string>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNASFileSystem"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNASFileSystemResponse(callApi(params, req, runtime));
}

CreateNASFileSystemResponse Alibabacloud_Ecd20200930::Client::createNASFileSystem(shared_ptr<CreateNASFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNASFileSystemWithOptions(request, runtime);
}

CreateNetworkPackageResponse Alibabacloud_Ecd20200930::Client::createNetworkPackageWithOptions(shared_ptr<CreateNetworkPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNetworkPackage"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNetworkPackageResponse(callApi(params, req, runtime));
}

CreateNetworkPackageResponse Alibabacloud_Ecd20200930::Client::createNetworkPackage(shared_ptr<CreateNetworkPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkPackageWithOptions(request, runtime);
}

CreatePolicyGroupResponse Alibabacloud_Ecd20200930::Client::createPolicyGroupWithOptions(shared_ptr<CreatePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adminAccess)) {
    query->insert(pair<string, string>("AdminAccess", *request->adminAccess));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appContentProtection)) {
    query->insert(pair<string, string>("AppContentProtection", *request->appContentProtection));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule>>(request->authorizeAccessPolicyRule)) {
    query->insert(pair<string, vector<CreatePolicyGroupRequestAuthorizeAccessPolicyRule>>("AuthorizeAccessPolicyRule", *request->authorizeAccessPolicyRule));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule>>(request->authorizeSecurityPolicyRule)) {
    query->insert(pair<string, vector<CreatePolicyGroupRequestAuthorizeSecurityPolicyRule>>("AuthorizeSecurityPolicyRule", *request->authorizeSecurityPolicyRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cameraRedirect)) {
    query->insert(pair<string, string>("CameraRedirect", *request->cameraRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePolicyGroupRequestClientType>>(request->clientType)) {
    query->insert(pair<string, vector<CreatePolicyGroupRequestClientType>>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipboard)) {
    query->insert(pair<string, string>("Clipboard", *request->clipboard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainList)) {
    query->insert(pair<string, string>("DomainList", *request->domainList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePolicyGroupRequestDomainResolveRule>>(request->domainResolveRule)) {
    query->insert(pair<string, vector<CreatePolicyGroupRequestDomainResolveRule>>("DomainResolveRule", *request->domainResolveRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainResolveRuleType)) {
    query->insert(pair<string, string>("DomainResolveRuleType", *request->domainResolveRuleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserApplyAdminCoordinate)) {
    query->insert(pair<string, string>("EndUserApplyAdminCoordinate", *request->endUserApplyAdminCoordinate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserGroupCoordinate)) {
    query->insert(pair<string, string>("EndUserGroupCoordinate", *request->endUserGroupCoordinate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuAcceleration)) {
    query->insert(pair<string, string>("GpuAcceleration", *request->gpuAcceleration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->html5Access)) {
    query->insert(pair<string, string>("Html5Access", *request->html5Access));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->html5FileTransfer)) {
    query->insert(pair<string, string>("Html5FileTransfer", *request->html5FileTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetCommunicationProtocol)) {
    query->insert(pair<string, string>("InternetCommunicationProtocol", *request->internetCommunicationProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localDrive)) {
    query->insert(pair<string, string>("LocalDrive", *request->localDrive));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netRedirect)) {
    query->insert(pair<string, string>("NetRedirect", *request->netRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preemptLogin)) {
    query->insert(pair<string, string>("PreemptLogin", *request->preemptLogin));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->preemptLoginUser)) {
    query->insert(pair<string, vector<string>>("PreemptLoginUser", *request->preemptLoginUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->printerRedirection)) {
    query->insert(pair<string, string>("PrinterRedirection", *request->printerRedirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordContent)) {
    query->insert(pair<string, string>("RecordContent", *request->recordContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordContentExpires)) {
    query->insert(pair<string, long>("RecordContentExpires", *request->recordContentExpires));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recording)) {
    query->insert(pair<string, string>("Recording", *request->recording));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordingAudio)) {
    query->insert(pair<string, string>("RecordingAudio", *request->recordingAudio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordingDuration)) {
    query->insert(pair<string, long>("RecordingDuration", *request->recordingDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordingEndTime)) {
    query->insert(pair<string, string>("RecordingEndTime", *request->recordingEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordingExpires)) {
    query->insert(pair<string, long>("RecordingExpires", *request->recordingExpires));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordingFps)) {
    query->insert(pair<string, long>("RecordingFps", *request->recordingFps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordingStartTime)) {
    query->insert(pair<string, string>("RecordingStartTime", *request->recordingStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remoteCoordinate)) {
    query->insert(pair<string, string>("RemoteCoordinate", *request->remoteCoordinate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scopeValue)) {
    query->insert(pair<string, vector<string>>("ScopeValue", *request->scopeValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->usbRedirect)) {
    query->insert(pair<string, string>("UsbRedirect", *request->usbRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePolicyGroupRequestUsbSupplyRedirectRule>>(request->usbSupplyRedirectRule)) {
    query->insert(pair<string, vector<CreatePolicyGroupRequestUsbSupplyRedirectRule>>("UsbSupplyRedirectRule", *request->usbSupplyRedirectRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoRedirect)) {
    query->insert(pair<string, string>("VideoRedirect", *request->videoRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visualQuality)) {
    query->insert(pair<string, string>("VisualQuality", *request->visualQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermark)) {
    query->insert(pair<string, string>("Watermark", *request->watermark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkColor)) {
    query->insert(pair<string, long>("WatermarkColor", *request->watermarkColor));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->watermarkDegree)) {
    query->insert(pair<string, double>("WatermarkDegree", *request->watermarkDegree));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkFontSize)) {
    query->insert(pair<string, long>("WatermarkFontSize", *request->watermarkFontSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkFontStyle)) {
    query->insert(pair<string, string>("WatermarkFontStyle", *request->watermarkFontStyle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkRowAmount)) {
    query->insert(pair<string, long>("WatermarkRowAmount", *request->watermarkRowAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkSecurity)) {
    query->insert(pair<string, string>("WatermarkSecurity", *request->watermarkSecurity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkTransparency)) {
    query->insert(pair<string, string>("WatermarkTransparency", *request->watermarkTransparency));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkTransparencyValue)) {
    query->insert(pair<string, long>("WatermarkTransparencyValue", *request->watermarkTransparencyValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkType)) {
    query->insert(pair<string, string>("WatermarkType", *request->watermarkType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePolicyGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePolicyGroupResponse(callApi(params, req, runtime));
}

CreatePolicyGroupResponse Alibabacloud_Ecd20200930::Client::createPolicyGroup(shared_ptr<CreatePolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolicyGroupWithOptions(request, runtime);
}

CreateRAMDirectoryResponse Alibabacloud_Ecd20200930::Client::createRAMDirectoryWithOptions(shared_ptr<CreateRAMDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopAccessType)) {
    query->insert(pair<string, string>("DesktopAccessType", *request->desktopAccessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryName)) {
    query->insert(pair<string, string>("DirectoryName", *request->directoryName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAdminAccess)) {
    query->insert(pair<string, bool>("EnableAdminAccess", *request->enableAdminAccess));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInternetAccess)) {
    query->insert(pair<string, bool>("EnableInternetAccess", *request->enableInternetAccess));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitchId)) {
    query->insert(pair<string, vector<string>>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRAMDirectory"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRAMDirectoryResponse(callApi(params, req, runtime));
}

CreateRAMDirectoryResponse Alibabacloud_Ecd20200930::Client::createRAMDirectory(shared_ptr<CreateRAMDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRAMDirectoryWithOptions(request, runtime);
}

CreateSimpleOfficeSiteResponse Alibabacloud_Ecd20200930::Client::createSimpleOfficeSiteWithOptions(shared_ptr<CreateSimpleOfficeSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cenOwnerId)) {
    query->insert(pair<string, long>("CenOwnerId", *request->cenOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrBlock)) {
    query->insert(pair<string, string>("CidrBlock", *request->cidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cloudBoxOfficeSite)) {
    query->insert(pair<string, bool>("CloudBoxOfficeSite", *request->cloudBoxOfficeSite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopAccessType)) {
    query->insert(pair<string, string>("DesktopAccessType", *request->desktopAccessType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAdminAccess)) {
    query->insert(pair<string, bool>("EnableAdminAccess", *request->enableAdminAccess));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInternetAccess)) {
    query->insert(pair<string, bool>("EnableInternetAccess", *request->enableInternetAccess));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needVerifyZeroDevice)) {
    query->insert(pair<string, bool>("NeedVerifyZeroDevice", *request->needVerifyZeroDevice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteName)) {
    query->insert(pair<string, string>("OfficeSiteName", *request->officeSiteName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitchId)) {
    query->insert(pair<string, vector<string>>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyCode)) {
    query->insert(pair<string, string>("VerifyCode", *request->verifyCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcType)) {
    query->insert(pair<string, string>("VpcType", *request->vpcType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSimpleOfficeSite"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSimpleOfficeSiteResponse(callApi(params, req, runtime));
}

CreateSimpleOfficeSiteResponse Alibabacloud_Ecd20200930::Client::createSimpleOfficeSite(shared_ptr<CreateSimpleOfficeSiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSimpleOfficeSiteWithOptions(request, runtime);
}

CreateSnapshotResponse Alibabacloud_Ecd20200930::Client::createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotName)) {
    query->insert(pair<string, string>("SnapshotName", *request->snapshotName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceDiskType)) {
    query->insert(pair<string, string>("SourceDiskType", *request->sourceDiskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSnapshot"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSnapshotResponse(callApi(params, req, runtime));
}

CreateSnapshotResponse Alibabacloud_Ecd20200930::Client::createSnapshot(shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnapshotWithOptions(request, runtime);
}

DeleteAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::deleteAutoSnapshotPolicyWithOptions(shared_ptr<DeleteAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyId)) {
    query->insert(pair<string, vector<string>>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAutoSnapshotPolicy"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAutoSnapshotPolicyResponse(callApi(params, req, runtime));
}

DeleteAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::deleteAutoSnapshotPolicy(shared_ptr<DeleteAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAutoSnapshotPolicyWithOptions(request, runtime);
}

DeleteBundlesResponse Alibabacloud_Ecd20200930::Client::deleteBundlesWithOptions(shared_ptr<DeleteBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->bundleId)) {
    query->insert(pair<string, vector<string>>("BundleId", *request->bundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBundles"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBundlesResponse(callApi(params, req, runtime));
}

DeleteBundlesResponse Alibabacloud_Ecd20200930::Client::deleteBundles(shared_ptr<DeleteBundlesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBundlesWithOptions(request, runtime);
}

DeleteCdsFileResponse Alibabacloud_Ecd20200930::Client::deleteCdsFileWithOptions(shared_ptr<DeleteCdsFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCdsFile"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCdsFileResponse(callApi(params, req, runtime));
}

DeleteCdsFileResponse Alibabacloud_Ecd20200930::Client::deleteCdsFile(shared_ptr<DeleteCdsFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCdsFileWithOptions(request, runtime);
}

DeleteCloudDriveGroupsResponse Alibabacloud_Ecd20200930::Client::deleteCloudDriveGroupsWithOptions(shared_ptr<DeleteCloudDriveGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->groupId)) {
    query->insert(pair<string, vector<string>>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCloudDriveGroups"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCloudDriveGroupsResponse(callApi(params, req, runtime));
}

DeleteCloudDriveGroupsResponse Alibabacloud_Ecd20200930::Client::deleteCloudDriveGroups(shared_ptr<DeleteCloudDriveGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCloudDriveGroupsWithOptions(request, runtime);
}

DeleteCloudDriveUsersResponse Alibabacloud_Ecd20200930::Client::deleteCloudDriveUsersWithOptions(shared_ptr<DeleteCloudDriveUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCloudDriveUsers"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCloudDriveUsersResponse(callApi(params, req, runtime));
}

DeleteCloudDriveUsersResponse Alibabacloud_Ecd20200930::Client::deleteCloudDriveUsers(shared_ptr<DeleteCloudDriveUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCloudDriveUsersWithOptions(request, runtime);
}

DeleteDesktopGroupResponse Alibabacloud_Ecd20200930::Client::deleteDesktopGroupWithOptions(shared_ptr<DeleteDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDesktopGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDesktopGroupResponse(callApi(params, req, runtime));
}

DeleteDesktopGroupResponse Alibabacloud_Ecd20200930::Client::deleteDesktopGroup(shared_ptr<DeleteDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDesktopGroupWithOptions(request, runtime);
}

DeleteDesktopsResponse Alibabacloud_Ecd20200930::Client::deleteDesktopsWithOptions(shared_ptr<DeleteDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDesktopsResponse(callApi(params, req, runtime));
}

DeleteDesktopsResponse Alibabacloud_Ecd20200930::Client::deleteDesktops(shared_ptr<DeleteDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDesktopsWithOptions(request, runtime);
}

DeleteDevicesResponse Alibabacloud_Ecd20200930::Client::deleteDevicesWithOptions(shared_ptr<DeleteDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    query->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceIds)) {
    query->insert(pair<string, vector<string>>("DeviceIds", *request->deviceIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->force)) {
    query->insert(pair<string, long>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDevices"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDevicesResponse(callApi(params, req, runtime));
}

DeleteDevicesResponse Alibabacloud_Ecd20200930::Client::deleteDevices(shared_ptr<DeleteDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevicesWithOptions(request, runtime);
}

DeleteDirectoriesResponse Alibabacloud_Ecd20200930::Client::deleteDirectoriesWithOptions(shared_ptr<DeleteDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("DeleteDirectories"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDirectoriesResponse(callApi(params, req, runtime));
}

DeleteDirectoriesResponse Alibabacloud_Ecd20200930::Client::deleteDirectories(shared_ptr<DeleteDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDirectoriesWithOptions(request, runtime);
}

DeleteEduRoomResponse Alibabacloud_Ecd20200930::Client::deleteEduRoomWithOptions(shared_ptr<DeleteEduRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eduRoomId)) {
    query->insert(pair<string, string>("EduRoomId", *request->eduRoomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEduRoom"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEduRoomResponse(callApi(params, req, runtime));
}

DeleteEduRoomResponse Alibabacloud_Ecd20200930::Client::deleteEduRoom(shared_ptr<DeleteEduRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEduRoomWithOptions(request, runtime);
}

DeleteImagesResponse Alibabacloud_Ecd20200930::Client::deleteImagesWithOptions(shared_ptr<DeleteImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteCascadedBundle)) {
    query->insert(pair<string, bool>("DeleteCascadedBundle", *request->deleteCascadedBundle));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageId)) {
    query->insert(pair<string, vector<string>>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteImages"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteImagesResponse(callApi(params, req, runtime));
}

DeleteImagesResponse Alibabacloud_Ecd20200930::Client::deleteImages(shared_ptr<DeleteImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImagesWithOptions(request, runtime);
}

DeleteNASFileSystemsResponse Alibabacloud_Ecd20200930::Client::deleteNASFileSystemsWithOptions(shared_ptr<DeleteNASFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->fileSystemId)) {
    query->insert(pair<string, vector<string>>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNASFileSystems"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNASFileSystemsResponse(callApi(params, req, runtime));
}

DeleteNASFileSystemsResponse Alibabacloud_Ecd20200930::Client::deleteNASFileSystems(shared_ptr<DeleteNASFileSystemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNASFileSystemsWithOptions(request, runtime);
}

DeleteNetworkPackagesResponse Alibabacloud_Ecd20200930::Client::deleteNetworkPackagesWithOptions(shared_ptr<DeleteNetworkPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->networkPackageId)) {
    query->insert(pair<string, vector<string>>("NetworkPackageId", *request->networkPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNetworkPackages"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNetworkPackagesResponse(callApi(params, req, runtime));
}

DeleteNetworkPackagesResponse Alibabacloud_Ecd20200930::Client::deleteNetworkPackages(shared_ptr<DeleteNetworkPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkPackagesWithOptions(request, runtime);
}

DeleteOfficeSitesResponse Alibabacloud_Ecd20200930::Client::deleteOfficeSitesWithOptions(shared_ptr<DeleteOfficeSitesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("DeleteOfficeSites"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteOfficeSitesResponse(callApi(params, req, runtime));
}

DeleteOfficeSitesResponse Alibabacloud_Ecd20200930::Client::deleteOfficeSites(shared_ptr<DeleteOfficeSitesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOfficeSitesWithOptions(request, runtime);
}

DeletePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::deletePolicyGroupsWithOptions(shared_ptr<DeletePolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyGroupId)) {
    query->insert(pair<string, vector<string>>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePolicyGroups"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePolicyGroupsResponse(callApi(params, req, runtime));
}

DeletePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::deletePolicyGroups(shared_ptr<DeletePolicyGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePolicyGroupsWithOptions(request, runtime);
}

DeleteSnapshotResponse Alibabacloud_Ecd20200930::Client::deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->snapshotId)) {
    query->insert(pair<string, vector<string>>("SnapshotId", *request->snapshotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSnapshot"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSnapshotResponse(callApi(params, req, runtime));
}

DeleteSnapshotResponse Alibabacloud_Ecd20200930::Client::deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotWithOptions(request, runtime);
}

DeleteVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::deleteVirtualMFADeviceWithOptions(shared_ptr<DeleteVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVirtualMFADevice"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVirtualMFADeviceResponse(callApi(params, req, runtime));
}

DeleteVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::deleteVirtualMFADevice(shared_ptr<DeleteVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVirtualMFADeviceWithOptions(request, runtime);
}

DescribeAclEntriesResponse Alibabacloud_Ecd20200930::Client::describeAclEntriesWithOptions(shared_ptr<DescribeAclEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    query->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAclEntries"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAclEntriesResponse(callApi(params, req, runtime));
}

DescribeAclEntriesResponse Alibabacloud_Ecd20200930::Client::describeAclEntries(shared_ptr<DescribeAclEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAclEntriesWithOptions(request, runtime);
}

DescribeAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::describeAutoSnapshotPolicyWithOptions(shared_ptr<DescribeAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAutoSnapshotPolicy"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAutoSnapshotPolicyResponse(callApi(params, req, runtime));
}

DescribeAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::describeAutoSnapshotPolicy(shared_ptr<DescribeAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoSnapshotPolicyWithOptions(request, runtime);
}

DescribeBundlesResponse Alibabacloud_Ecd20200930::Client::describeBundlesWithOptions(shared_ptr<DescribeBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->bundleId)) {
    query->insert(pair<string, vector<string>>("BundleId", *request->bundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bundleType)) {
    query->insert(pair<string, string>("BundleType", *request->bundleType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->checkStock)) {
    query->insert(pair<string, bool>("CheckStock", *request->checkStock));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuCount)) {
    query->insert(pair<string, long>("CpuCount", *request->cpuCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopTypeFamily)) {
    query->insert(pair<string, string>("DesktopTypeFamily", *request->desktopTypeFamily));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fotaChannel)) {
    query->insert(pair<string, string>("FotaChannel", *request->fotaChannel));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fromDesktopGroup)) {
    query->insert(pair<string, bool>("FromDesktopGroup", *request->fromDesktopGroup));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->gpuCount)) {
    query->insert(pair<string, double>("GpuCount", *request->gpuCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageId)) {
    query->insert(pair<string, vector<string>>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memorySize)) {
    query->insert(pair<string, long>("MemorySize", *request->memorySize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocolType)) {
    query->insert(pair<string, string>("ProtocolType", *request->protocolType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->selectedBundle)) {
    query->insert(pair<string, bool>("SelectedBundle", *request->selectedBundle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionType)) {
    query->insert(pair<string, string>("SessionType", *request->sessionType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->supportMultiSession)) {
    query->insert(pair<string, bool>("SupportMultiSession", *request->supportMultiSession));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->volumeEncryptionEnabled)) {
    query->insert(pair<string, bool>("VolumeEncryptionEnabled", *request->volumeEncryptionEnabled));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBundles"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBundlesResponse(callApi(params, req, runtime));
}

DescribeBundlesResponse Alibabacloud_Ecd20200930::Client::describeBundles(shared_ptr<DescribeBundlesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBundlesWithOptions(request, runtime);
}

DescribeCdsFileShareLinksResponse Alibabacloud_Ecd20200930::Client::describeCdsFileShareLinksWithOptions(shared_ptr<DescribeCdsFileShareLinksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->creators)) {
    query->insert(pair<string, vector<string>>("Creators", *request->creators));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareId)) {
    query->insert(pair<string, string>("ShareId", *request->shareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareName)) {
    query->insert(pair<string, string>("ShareName", *request->shareName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCdsFileShareLinks"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCdsFileShareLinksResponse(callApi(params, req, runtime));
}

DescribeCdsFileShareLinksResponse Alibabacloud_Ecd20200930::Client::describeCdsFileShareLinks(shared_ptr<DescribeCdsFileShareLinksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCdsFileShareLinksWithOptions(request, runtime);
}

DescribeCensResponse Alibabacloud_Ecd20200930::Client::describeCensWithOptions(shared_ptr<DescribeCensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCens"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCensResponse(callApi(params, req, runtime));
}

DescribeCensResponse Alibabacloud_Ecd20200930::Client::describeCens(shared_ptr<DescribeCensRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCensWithOptions(request, runtime);
}

DescribeClientEventsResponse Alibabacloud_Ecd20200930::Client::describeClientEventsWithOptions(shared_ptr<DescribeClientEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopIp)) {
    query->insert(pair<string, string>("DesktopIp", *request->desktopIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopName)) {
    query->insert(pair<string, string>("DesktopName", *request->desktopName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->eventTypes)) {
    query->insert(pair<string, vector<string>>("EventTypes", *request->eventTypes));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteName)) {
    query->insert(pair<string, string>("OfficeSiteName", *request->officeSiteName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClientEvents"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClientEventsResponse(callApi(params, req, runtime));
}

DescribeClientEventsResponse Alibabacloud_Ecd20200930::Client::describeClientEvents(shared_ptr<DescribeClientEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientEventsWithOptions(request, runtime);
}

DescribeCloudDriveGroupsResponse Alibabacloud_Ecd20200930::Client::describeCloudDriveGroupsWithOptions(shared_ptr<DescribeCloudDriveGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryName)) {
    query->insert(pair<string, string>("DirectoryName", *request->directoryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driveStatus)) {
    query->insert(pair<string, string>("DriveStatus", *request->driveStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driveType)) {
    query->insert(pair<string, string>("DriveType", *request->driveType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->groupId)) {
    query->insert(pair<string, vector<string>>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentGroupId)) {
    query->insert(pair<string, string>("ParentGroupId", *request->parentGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudDriveGroups"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudDriveGroupsResponse(callApi(params, req, runtime));
}

DescribeCloudDriveGroupsResponse Alibabacloud_Ecd20200930::Client::describeCloudDriveGroups(shared_ptr<DescribeCloudDriveGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudDriveGroupsWithOptions(request, runtime);
}

DescribeCloudDrivePermissionsResponse Alibabacloud_Ecd20200930::Client::describeCloudDrivePermissionsWithOptions(shared_ptr<DescribeCloudDrivePermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudDrivePermissions"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudDrivePermissionsResponse(callApi(params, req, runtime));
}

DescribeCloudDrivePermissionsResponse Alibabacloud_Ecd20200930::Client::describeCloudDrivePermissions(shared_ptr<DescribeCloudDrivePermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudDrivePermissionsWithOptions(request, runtime);
}

DescribeCloudDriveUsersResponse Alibabacloud_Ecd20200930::Client::describeCloudDriveUsersWithOptions(shared_ptr<DescribeCloudDriveUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudDriveUsers"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudDriveUsersResponse(callApi(params, req, runtime));
}

DescribeCloudDriveUsersResponse Alibabacloud_Ecd20200930::Client::describeCloudDriveUsers(shared_ptr<DescribeCloudDriveUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudDriveUsersWithOptions(request, runtime);
}

DescribeCustomizedListHeadersResponse Alibabacloud_Ecd20200930::Client::describeCustomizedListHeadersWithOptions(shared_ptr<DescribeCustomizedListHeadersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->langType)) {
    query->insert(pair<string, string>("LangType", *request->langType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listType)) {
    query->insert(pair<string, string>("ListType", *request->listType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustomizedListHeaders"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustomizedListHeadersResponse(callApi(params, req, runtime));
}

DescribeCustomizedListHeadersResponse Alibabacloud_Ecd20200930::Client::describeCustomizedListHeaders(shared_ptr<DescribeCustomizedListHeadersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomizedListHeadersWithOptions(request, runtime);
}

DescribeDesktopGroupsResponse Alibabacloud_Ecd20200930::Client::describeDesktopGroupsWithOptions(shared_ptr<DescribeDesktopGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->bundleId)) {
    query->insert(pair<string, vector<string>>("BundleId", *request->bundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupName)) {
    query->insert(pair<string, string>("DesktopGroupName", *request->desktopGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserIds)) {
    query->insert(pair<string, vector<string>>("EndUserIds", *request->endUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->excludedEndUserIds)) {
    query->insert(pair<string, vector<string>>("ExcludedEndUserIds", *request->excludedEndUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageId)) {
    query->insert(pair<string, vector<string>>("ImageId", *request->imageId));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->ownType)) {
    query->insert(pair<string, long>("OwnType", *request->ownType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocolType)) {
    query->insert(pair<string, string>("ProtocolType", *request->protocolType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDesktopGroups"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDesktopGroupsResponse(callApi(params, req, runtime));
}

DescribeDesktopGroupsResponse Alibabacloud_Ecd20200930::Client::describeDesktopGroups(shared_ptr<DescribeDesktopGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopGroupsWithOptions(request, runtime);
}

DescribeDesktopInfoResponse Alibabacloud_Ecd20200930::Client::describeDesktopInfoWithOptions(shared_ptr<DescribeDesktopInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDesktopInfo"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDesktopInfoResponse(callApi(params, req, runtime));
}

DescribeDesktopInfoResponse Alibabacloud_Ecd20200930::Client::describeDesktopInfo(shared_ptr<DescribeDesktopInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopInfoWithOptions(request, runtime);
}

DescribeDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::describeDesktopOversoldGroupWithOptions(shared_ptr<DescribeDesktopOversoldGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->oversoldGroupIds)) {
    query->insert(pair<string, vector<string>>("OversoldGroupIds", *request->oversoldGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDesktopOversoldGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDesktopOversoldGroupResponse(callApi(params, req, runtime));
}

DescribeDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::describeDesktopOversoldGroup(shared_ptr<DescribeDesktopOversoldGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopOversoldGroupWithOptions(request, runtime);
}

DescribeDesktopOversoldUserResponse Alibabacloud_Ecd20200930::Client::describeDesktopOversoldUserWithOptions(shared_ptr<DescribeDesktopOversoldUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userDesktopIds)) {
    query->insert(pair<string, vector<string>>("UserDesktopIds", *request->userDesktopIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDesktopOversoldUser"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDesktopOversoldUserResponse(callApi(params, req, runtime));
}

DescribeDesktopOversoldUserResponse Alibabacloud_Ecd20200930::Client::describeDesktopOversoldUser(shared_ptr<DescribeDesktopOversoldUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopOversoldUserWithOptions(request, runtime);
}

DescribeDesktopOversoldUserGroupResponse Alibabacloud_Ecd20200930::Client::describeDesktopOversoldUserGroupWithOptions(shared_ptr<DescribeDesktopOversoldUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userGroupIds)) {
    query->insert(pair<string, vector<string>>("UserGroupIds", *request->userGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDesktopOversoldUserGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDesktopOversoldUserGroupResponse(callApi(params, req, runtime));
}

DescribeDesktopOversoldUserGroupResponse Alibabacloud_Ecd20200930::Client::describeDesktopOversoldUserGroup(shared_ptr<DescribeDesktopOversoldUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopOversoldUserGroupWithOptions(request, runtime);
}

DescribeDesktopSessionsResponse Alibabacloud_Ecd20200930::Client::describeDesktopSessionsWithOptions(shared_ptr<DescribeDesktopSessionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionStatus)) {
    query->insert(pair<string, string>("SessionStatus", *request->sessionStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDesktopSessions"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDesktopSessionsResponse(callApi(params, req, runtime));
}

DescribeDesktopSessionsResponse Alibabacloud_Ecd20200930::Client::describeDesktopSessions(shared_ptr<DescribeDesktopSessionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopSessionsWithOptions(request, runtime);
}

DescribeDesktopTypesResponse Alibabacloud_Ecd20200930::Client::describeDesktopTypesWithOptions(shared_ptr<DescribeDesktopTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appliedScope)) {
    query->insert(pair<string, string>("AppliedScope", *request->appliedScope));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuCount)) {
    query->insert(pair<string, long>("CpuCount", *request->cpuCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupIdForModify)) {
    query->insert(pair<string, string>("DesktopGroupIdForModify", *request->desktopGroupIdForModify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopIdForModify)) {
    query->insert(pair<string, string>("DesktopIdForModify", *request->desktopIdForModify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopTypeId)) {
    query->insert(pair<string, string>("DesktopTypeId", *request->desktopTypeId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->gpuCount)) {
    query->insert(pair<string, double>("GpuCount", *request->gpuCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceTypeFamily)) {
    query->insert(pair<string, string>("InstanceTypeFamily", *request->instanceTypeFamily));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memorySize)) {
    query->insert(pair<string, long>("MemorySize", *request->memorySize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDesktopTypes"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDesktopTypesResponse(callApi(params, req, runtime));
}

DescribeDesktopTypesResponse Alibabacloud_Ecd20200930::Client::describeDesktopTypes(shared_ptr<DescribeDesktopTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopTypesWithOptions(request, runtime);
}

DescribeDesktopsResponse Alibabacloud_Ecd20200930::Client::describeDesktopsWithOptions(shared_ptr<DescribeDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopStatusList)) {
    query->insert(pair<string, vector<string>>("DesktopStatusList", *request->desktopStatusList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopType)) {
    query->insert(pair<string, string>("DesktopType", *request->desktopType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->excludedEndUserId)) {
    query->insert(pair<string, vector<string>>("ExcludedEndUserId", *request->excludedEndUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiredTime)) {
    query->insert(pair<string, string>("ExpiredTime", *request->expiredTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->filterDesktopGroup)) {
    query->insert(pair<string, bool>("FilterDesktopGroup", *request->filterDesktopGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageId)) {
    query->insert(pair<string, vector<string>>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managementFlag)) {
    query->insert(pair<string, string>("ManagementFlag", *request->managementFlag));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteName)) {
    query->insert(pair<string, string>("OfficeSiteName", *request->officeSiteName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyDesktopGroup)) {
    query->insert(pair<string, bool>("OnlyDesktopGroup", *request->onlyDesktopGroup));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->osTypes)) {
    query->insert(pair<string, vector<string>>("OsTypes", *request->osTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocolType)) {
    query->insert(pair<string, string>("ProtocolType", *request->protocolType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryFotaUpdate)) {
    query->insert(pair<string, bool>("QueryFotaUpdate", *request->queryFotaUpdate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotPolicyId)) {
    query->insert(pair<string, string>("SnapshotPolicyId", *request->snapshotPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeDesktopsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeDesktopsRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDesktopsResponse(callApi(params, req, runtime));
}

DescribeDesktopsResponse Alibabacloud_Ecd20200930::Client::describeDesktops(shared_ptr<DescribeDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopsWithOptions(request, runtime);
}

DescribeDesktopsInGroupResponse Alibabacloud_Ecd20200930::Client::describeDesktopsInGroupWithOptions(shared_ptr<DescribeDesktopsInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreDeleted)) {
    query->insert(pair<string, bool>("IgnoreDeleted", *request->ignoreDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDesktopsInGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDesktopsInGroupResponse(callApi(params, req, runtime));
}

DescribeDesktopsInGroupResponse Alibabacloud_Ecd20200930::Client::describeDesktopsInGroup(shared_ptr<DescribeDesktopsInGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopsInGroupWithOptions(request, runtime);
}

DescribeDevicesResponse Alibabacloud_Ecd20200930::Client::describeDevicesWithOptions(shared_ptr<DescribeDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adDomain)) {
    query->insert(pair<string, string>("AdDomain", *request->adDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDevices"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDevicesResponse(callApi(params, req, runtime));
}

DescribeDevicesResponse Alibabacloud_Ecd20200930::Client::describeDevices(shared_ptr<DescribeDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDevicesWithOptions(request, runtime);
}

DescribeDirectoriesResponse Alibabacloud_Ecd20200930::Client::describeDirectoriesWithOptions(shared_ptr<DescribeDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->directoryId)) {
    query->insert(pair<string, vector<string>>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryStatus)) {
    query->insert(pair<string, string>("DirectoryStatus", *request->directoryStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryType)) {
    query->insert(pair<string, string>("DirectoryType", *request->directoryType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDirectories"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDirectoriesResponse(callApi(params, req, runtime));
}

DescribeDirectoriesResponse Alibabacloud_Ecd20200930::Client::describeDirectories(shared_ptr<DescribeDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDirectoriesWithOptions(request, runtime);
}

DescribeFlowMetricResponse Alibabacloud_Ecd20200930::Client::describeFlowMetricWithOptions(shared_ptr<DescribeFlowMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlowMetric"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowMetricResponse(callApi(params, req, runtime));
}

DescribeFlowMetricResponse Alibabacloud_Ecd20200930::Client::describeFlowMetric(shared_ptr<DescribeFlowMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowMetricWithOptions(request, runtime);
}

DescribeFlowStatisticResponse Alibabacloud_Ecd20200930::Client::describeFlowStatisticWithOptions(shared_ptr<DescribeFlowStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFlowStatistic"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFlowStatisticResponse(callApi(params, req, runtime));
}

DescribeFlowStatisticResponse Alibabacloud_Ecd20200930::Client::describeFlowStatistic(shared_ptr<DescribeFlowStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowStatisticWithOptions(request, runtime);
}

DescribeFotaPendingDesktopsResponse Alibabacloud_Ecd20200930::Client::describeFotaPendingDesktopsWithOptions(shared_ptr<DescribeFotaPendingDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFotaPendingDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFotaPendingDesktopsResponse(callApi(params, req, runtime));
}

DescribeFotaPendingDesktopsResponse Alibabacloud_Ecd20200930::Client::describeFotaPendingDesktops(shared_ptr<DescribeFotaPendingDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFotaPendingDesktopsWithOptions(request, runtime);
}

DescribeFotaTasksResponse Alibabacloud_Ecd20200930::Client::describeFotaTasksWithOptions(shared_ptr<DescribeFotaTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fotaStatus)) {
    query->insert(pair<string, string>("FotaStatus", *request->fotaStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskUid)) {
    query->insert(pair<string, vector<string>>("TaskUid", *request->taskUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userStatus)) {
    query->insert(pair<string, string>("UserStatus", *request->userStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFotaTasks"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFotaTasksResponse(callApi(params, req, runtime));
}

DescribeFotaTasksResponse Alibabacloud_Ecd20200930::Client::describeFotaTasks(shared_ptr<DescribeFotaTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFotaTasksWithOptions(request, runtime);
}

DescribeGuestApplicationsResponse Alibabacloud_Ecd20200930::Client::describeGuestApplicationsWithOptions(shared_ptr<DescribeGuestApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGuestApplications"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGuestApplicationsResponse(callApi(params, req, runtime));
}

DescribeGuestApplicationsResponse Alibabacloud_Ecd20200930::Client::describeGuestApplications(shared_ptr<DescribeGuestApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGuestApplicationsWithOptions(request, runtime);
}

DescribeImageModifiedRecordsResponse Alibabacloud_Ecd20200930::Client::describeImageModifiedRecordsWithOptions(shared_ptr<DescribeImageModifiedRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImageModifiedRecords"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeImageModifiedRecordsResponse(callApi(params, req, runtime));
}

DescribeImageModifiedRecordsResponse Alibabacloud_Ecd20200930::Client::describeImageModifiedRecords(shared_ptr<DescribeImageModifiedRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageModifiedRecordsWithOptions(request, runtime);
}

DescribeImagePermissionResponse Alibabacloud_Ecd20200930::Client::describeImagePermissionWithOptions(shared_ptr<DescribeImagePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImagePermission"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeImagePermissionResponse(callApi(params, req, runtime));
}

DescribeImagePermissionResponse Alibabacloud_Ecd20200930::Client::describeImagePermission(shared_ptr<DescribeImagePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImagePermissionWithOptions(request, runtime);
}

DescribeImagesResponse Alibabacloud_Ecd20200930::Client::describeImagesWithOptions(shared_ptr<DescribeImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopInstanceType)) {
    query->insert(pair<string, string>("DesktopInstanceType", *request->desktopInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fotaVersion)) {
    query->insert(pair<string, string>("FotaVersion", *request->fotaVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->gpuCategory)) {
    query->insert(pair<string, bool>("GpuCategory", *request->gpuCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuDriverVersion)) {
    query->insert(pair<string, string>("GpuDriverVersion", *request->gpuDriverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageId)) {
    query->insert(pair<string, vector<string>>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageStatus)) {
    query->insert(pair<string, string>("ImageStatus", *request->imageStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageType)) {
    query->insert(pair<string, string>("ImageType", *request->imageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageType)) {
    query->insert(pair<string, string>("LanguageType", *request->languageType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocolType)) {
    query->insert(pair<string, string>("ProtocolType", *request->protocolType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionType)) {
    query->insert(pair<string, string>("SessionType", *request->sessionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImages"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeImagesResponse(callApi(params, req, runtime));
}

DescribeImagesResponse Alibabacloud_Ecd20200930::Client::describeImages(shared_ptr<DescribeImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImagesWithOptions(request, runtime);
}

DescribeInvocationsResponse Alibabacloud_Ecd20200930::Client::describeInvocationsWithOptions(shared_ptr<DescribeInvocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commandType)) {
    query->insert(pair<string, string>("CommandType", *request->commandType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentEncoding)) {
    query->insert(pair<string, string>("ContentEncoding", *request->contentEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopIds)) {
    query->insert(pair<string, vector<string>>("DesktopIds", *request->desktopIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeOutput)) {
    query->insert(pair<string, bool>("IncludeOutput", *request->includeOutput));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invokeId)) {
    query->insert(pair<string, string>("InvokeId", *request->invokeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invokeStatus)) {
    query->insert(pair<string, string>("InvokeStatus", *request->invokeStatus));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInvocations"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInvocationsResponse(callApi(params, req, runtime));
}

DescribeInvocationsResponse Alibabacloud_Ecd20200930::Client::describeInvocations(shared_ptr<DescribeInvocationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInvocationsWithOptions(request, runtime);
}

DescribeKmsKeysResponse Alibabacloud_Ecd20200930::Client::describeKmsKeysWithOptions(shared_ptr<DescribeKmsKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeKmsKeys"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeKmsKeysResponse(callApi(params, req, runtime));
}

DescribeKmsKeysResponse Alibabacloud_Ecd20200930::Client::describeKmsKeys(shared_ptr<DescribeKmsKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKmsKeysWithOptions(request, runtime);
}

DescribeNASFileSystemsResponse Alibabacloud_Ecd20200930::Client::describeNASFileSystemsWithOptions(shared_ptr<DescribeNASFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->fileSystemId)) {
    query->insert(pair<string, vector<string>>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->matchCompatibleProfile)) {
    query->insert(pair<string, bool>("MatchCompatibleProfile", *request->matchCompatibleProfile));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNASFileSystems"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNASFileSystemsResponse(callApi(params, req, runtime));
}

DescribeNASFileSystemsResponse Alibabacloud_Ecd20200930::Client::describeNASFileSystems(shared_ptr<DescribeNASFileSystemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNASFileSystemsWithOptions(request, runtime);
}

DescribeNetworkPackagesResponse Alibabacloud_Ecd20200930::Client::describeNetworkPackagesWithOptions(shared_ptr<DescribeNetworkPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->networkPackageId)) {
    query->insert(pair<string, vector<string>>("NetworkPackageId", *request->networkPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNetworkPackages"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNetworkPackagesResponse(callApi(params, req, runtime));
}

DescribeNetworkPackagesResponse Alibabacloud_Ecd20200930::Client::describeNetworkPackages(shared_ptr<DescribeNetworkPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNetworkPackagesWithOptions(request, runtime);
}

DescribeOfficeSitesResponse Alibabacloud_Ecd20200930::Client::describeOfficeSitesWithOptions(shared_ptr<DescribeOfficeSitesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->officeSiteId)) {
    query->insert(pair<string, vector<string>>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteType)) {
    query->insert(pair<string, string>("OfficeSiteType", *request->officeSiteType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOfficeSites"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOfficeSitesResponse(callApi(params, req, runtime));
}

DescribeOfficeSitesResponse Alibabacloud_Ecd20200930::Client::describeOfficeSites(shared_ptr<DescribeOfficeSitesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOfficeSitesWithOptions(request, runtime);
}

DescribePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::describePolicyGroupsWithOptions(shared_ptr<DescribePolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyGroupId)) {
    query->insert(pair<string, vector<string>>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyGroups"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyGroupsResponse(callApi(params, req, runtime));
}

DescribePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::describePolicyGroups(shared_ptr<DescribePolicyGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyGroupsWithOptions(request, runtime);
}

DescribePriceResponse Alibabacloud_Ecd20200930::Client::describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribePriceRequestBundleModels>>(request->bundleModels)) {
    query->insert(pair<string, vector<DescribePriceRequestBundleModels>>("BundleModels", *request->bundleModels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eduCdsEnable)) {
    query->insert(pair<string, string>("EduCdsEnable", *request->eduCdsEnable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eduCdsSize)) {
    query->insert(pair<string, long>("EduCdsSize", *request->eduCdsSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eduCommittedTime)) {
    query->insert(pair<string, long>("EduCommittedTime", *request->eduCommittedTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eduDesktopBundleId)) {
    query->insert(pair<string, string>("EduDesktopBundleId", *request->eduDesktopBundleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eduDesktopNum)) {
    query->insert(pair<string, long>("EduDesktopNum", *request->eduDesktopNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eduRoomClassify)) {
    query->insert(pair<string, string>("EduRoomClassify", *request->eduRoomClassify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eduStudentBundleId)) {
    query->insert(pair<string, string>("EduStudentBundleId", *request->eduStudentBundleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eduStudentNum)) {
    query->insert(pair<string, long>("EduStudentNum", *request->eduStudentNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eduTeacherBundleId)) {
    query->insert(pair<string, string>("EduTeacherBundleId", *request->eduTeacherBundleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eduTeacherNum)) {
    query->insert(pair<string, long>("EduTeacherNum", *request->eduTeacherNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupDesktopCount)) {
    query->insert(pair<string, long>("GroupDesktopCount", *request->groupDesktopCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hardwareVersion)) {
    query->insert(pair<string, string>("HardwareVersion", *request->hardwareVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageSize)) {
    query->insert(pair<string, long>("PackageSize", *request->packageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootDiskPerformanceLevel)) {
    query->insert(pair<string, string>("RootDiskPerformanceLevel", *request->rootDiskPerformanceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rootDiskSizeGib)) {
    query->insert(pair<string, long>("RootDiskSizeGib", *request->rootDiskSizeGib));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spPeriodInfo)) {
    query->insert(pair<string, string>("SpPeriodInfo", *request->spPeriodInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->spPrice)) {
    query->insert(pair<string, bool>("SpPrice", *request->spPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spType)) {
    query->insert(pair<string, string>("SpType", *request->spType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDiskPerformanceLevel)) {
    query->insert(pair<string, string>("UserDiskPerformanceLevel", *request->userDiskPerformanceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userDiskSizeGib)) {
    query->insert(pair<string, long>("UserDiskSizeGib", *request->userDiskSizeGib));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePrice"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePriceResponse(callApi(params, req, runtime));
}

DescribePriceResponse Alibabacloud_Ecd20200930::Client::describePrice(shared_ptr<DescribePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceWithOptions(request, runtime);
}

DescribePriceForCreateDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::describePriceForCreateDesktopOversoldGroupWithOptions(shared_ptr<DescribePriceForCreateDesktopOversoldGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->concurrenceCount)) {
    query->insert(pair<string, long>("ConcurrenceCount", *request->concurrenceCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataDiskSize)) {
    query->insert(pair<string, long>("DataDiskSize", *request->dataDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopType)) {
    query->insert(pair<string, string>("DesktopType", *request->desktopType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oversoldUserCount)) {
    query->insert(pair<string, long>("OversoldUserCount", *request->oversoldUserCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->systemDiskSize)) {
    query->insert(pair<string, long>("SystemDiskSize", *request->systemDiskSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePriceForCreateDesktopOversoldGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePriceForCreateDesktopOversoldGroupResponse(callApi(params, req, runtime));
}

DescribePriceForCreateDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::describePriceForCreateDesktopOversoldGroup(shared_ptr<DescribePriceForCreateDesktopOversoldGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceForCreateDesktopOversoldGroupWithOptions(request, runtime);
}

DescribePriceForModifyDesktopOversoldGroupSaleResponse Alibabacloud_Ecd20200930::Client::describePriceForModifyDesktopOversoldGroupSaleWithOptions(shared_ptr<DescribePriceForModifyDesktopOversoldGroupSaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->concurrenceCount)) {
    query->insert(pair<string, long>("ConcurrenceCount", *request->concurrenceCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oversoldUserCount)) {
    query->insert(pair<string, long>("OversoldUserCount", *request->oversoldUserCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePriceForModifyDesktopOversoldGroupSale"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePriceForModifyDesktopOversoldGroupSaleResponse(callApi(params, req, runtime));
}

DescribePriceForModifyDesktopOversoldGroupSaleResponse Alibabacloud_Ecd20200930::Client::describePriceForModifyDesktopOversoldGroupSale(shared_ptr<DescribePriceForModifyDesktopOversoldGroupSaleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceForModifyDesktopOversoldGroupSaleWithOptions(request, runtime);
}

DescribePriceForRenewDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::describePriceForRenewDesktopOversoldGroupWithOptions(shared_ptr<DescribePriceForRenewDesktopOversoldGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePriceForRenewDesktopOversoldGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePriceForRenewDesktopOversoldGroupResponse(callApi(params, req, runtime));
}

DescribePriceForRenewDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::describePriceForRenewDesktopOversoldGroup(shared_ptr<DescribePriceForRenewDesktopOversoldGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePriceForRenewDesktopOversoldGroupWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ecd20200930::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Ecd20200930::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeSessionStatisticResponse Alibabacloud_Ecd20200930::Client::describeSessionStatisticWithOptions(shared_ptr<DescribeSessionStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRegionId)) {
    query->insert(pair<string, string>("SearchRegionId", *request->searchRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSessionStatistic"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSessionStatisticResponse(callApi(params, req, runtime));
}

DescribeSessionStatisticResponse Alibabacloud_Ecd20200930::Client::describeSessionStatistic(shared_ptr<DescribeSessionStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSessionStatisticWithOptions(request, runtime);
}

DescribeSnapshotsResponse Alibabacloud_Ecd20200930::Client::describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    query->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopName)) {
    query->insert(pair<string, string>("DesktopName", *request->desktopName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotName)) {
    query->insert(pair<string, string>("SnapshotName", *request->snapshotName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotType)) {
    query->insert(pair<string, string>("SnapshotType", *request->snapshotType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceDiskType)) {
    query->insert(pair<string, string>("SourceDiskType", *request->sourceDiskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSnapshots"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSnapshotsResponse(callApi(params, req, runtime));
}

DescribeSnapshotsResponse Alibabacloud_Ecd20200930::Client::describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotsWithOptions(request, runtime);
}

DescribeUserConnectTimeResponse Alibabacloud_Ecd20200930::Client::describeUserConnectTimeWithOptions(shared_ptr<DescribeUserConnectTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDesktopId)) {
    query->insert(pair<string, string>("UserDesktopId", *request->userDesktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserConnectTime"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserConnectTimeResponse(callApi(params, req, runtime));
}

DescribeUserConnectTimeResponse Alibabacloud_Ecd20200930::Client::describeUserConnectTime(shared_ptr<DescribeUserConnectTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserConnectTimeWithOptions(request, runtime);
}

DescribeUserConnectionRecordsResponse Alibabacloud_Ecd20200930::Client::describeUserConnectionRecordsWithOptions(shared_ptr<DescribeUserConnectionRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->connectDurationFrom)) {
    query->insert(pair<string, long>("ConnectDurationFrom", *request->connectDurationFrom));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->connectDurationTo)) {
    query->insert(pair<string, long>("ConnectDurationTo", *request->connectDurationTo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->connectEndTimeFrom)) {
    query->insert(pair<string, long>("ConnectEndTimeFrom", *request->connectEndTimeFrom));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->connectEndTimeTo)) {
    query->insert(pair<string, long>("ConnectEndTimeTo", *request->connectEndTimeTo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->connectStartTimeFrom)) {
    query->insert(pair<string, long>("ConnectStartTimeFrom", *request->connectStartTimeFrom));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->connectStartTimeTo)) {
    query->insert(pair<string, long>("ConnectStartTimeTo", *request->connectStartTimeTo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserType)) {
    query->insert(pair<string, string>("EndUserType", *request->endUserType));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserConnectionRecords"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserConnectionRecordsResponse(callApi(params, req, runtime));
}

DescribeUserConnectionRecordsResponse Alibabacloud_Ecd20200930::Client::describeUserConnectionRecords(shared_ptr<DescribeUserConnectionRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserConnectionRecordsWithOptions(request, runtime);
}

DescribeUserProfilePathRulesResponse Alibabacloud_Ecd20200930::Client::describeUserProfilePathRulesWithOptions(shared_ptr<DescribeUserProfilePathRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserProfilePathRules"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserProfilePathRulesResponse(callApi(params, req, runtime));
}

DescribeUserProfilePathRulesResponse Alibabacloud_Ecd20200930::Client::describeUserProfilePathRules(shared_ptr<DescribeUserProfilePathRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserProfilePathRulesWithOptions(request, runtime);
}

DescribeUsersInGroupResponse Alibabacloud_Ecd20200930::Client::describeUsersInGroupWithOptions(shared_ptr<DescribeUsersInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->connectState)) {
    query->insert(pair<string, long>("ConnectState", *request->connectState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserIds)) {
    query->insert(pair<string, vector<string>>("EndUserIds", *request->endUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    query->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryUserDetail)) {
    query->insert(pair<string, bool>("QueryUserDetail", *request->queryUserDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsersInGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsersInGroupResponse(callApi(params, req, runtime));
}

DescribeUsersInGroupResponse Alibabacloud_Ecd20200930::Client::describeUsersInGroup(shared_ptr<DescribeUsersInGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsersInGroupWithOptions(request, runtime);
}

DescribeUsersPasswordResponse Alibabacloud_Ecd20200930::Client::describeUsersPasswordWithOptions(shared_ptr<DescribeUsersPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsersPassword"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsersPasswordResponse(callApi(params, req, runtime));
}

DescribeUsersPasswordResponse Alibabacloud_Ecd20200930::Client::describeUsersPassword(shared_ptr<DescribeUsersPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsersPasswordWithOptions(request, runtime);
}

DescribeVirtualMFADevicesResponse Alibabacloud_Ecd20200930::Client::describeVirtualMFADevicesWithOptions(shared_ptr<DescribeVirtualMFADevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVirtualMFADevices"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVirtualMFADevicesResponse(callApi(params, req, runtime));
}

DescribeVirtualMFADevicesResponse Alibabacloud_Ecd20200930::Client::describeVirtualMFADevices(shared_ptr<DescribeVirtualMFADevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVirtualMFADevicesWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_Ecd20200930::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneType)) {
    query->insert(pair<string, string>("ZoneType", *request->zoneType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeZones"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeZonesResponse(callApi(params, req, runtime));
}

DescribeZonesResponse Alibabacloud_Ecd20200930::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

DetachCenResponse Alibabacloud_Ecd20200930::Client::detachCenWithOptions(shared_ptr<DetachCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("DetachCen"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachCenResponse(callApi(params, req, runtime));
}

DetachCenResponse Alibabacloud_Ecd20200930::Client::detachCen(shared_ptr<DetachCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachCenWithOptions(request, runtime);
}

DetachEndUserResponse Alibabacloud_Ecd20200930::Client::detachEndUserWithOptions(shared_ptr<DetachEndUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adDomain)) {
    query->insert(pair<string, string>("AdDomain", *request->adDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachEndUser"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachEndUserResponse(callApi(params, req, runtime));
}

DetachEndUserResponse Alibabacloud_Ecd20200930::Client::detachEndUser(shared_ptr<DetachEndUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachEndUserWithOptions(request, runtime);
}

DisableDesktopsInGroupResponse Alibabacloud_Ecd20200930::Client::disableDesktopsInGroupWithOptions(shared_ptr<DisableDesktopsInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopIds)) {
    query->insert(pair<string, vector<string>>("DesktopIds", *request->desktopIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableDesktopsInGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableDesktopsInGroupResponse(callApi(params, req, runtime));
}

DisableDesktopsInGroupResponse Alibabacloud_Ecd20200930::Client::disableDesktopsInGroup(shared_ptr<DisableDesktopsInGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDesktopsInGroupWithOptions(request, runtime);
}

DissociateNetworkPackageResponse Alibabacloud_Ecd20200930::Client::dissociateNetworkPackageWithOptions(shared_ptr<DissociateNetworkPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkPackageId)) {
    query->insert(pair<string, string>("NetworkPackageId", *request->networkPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateNetworkPackage"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateNetworkPackageResponse(callApi(params, req, runtime));
}

DissociateNetworkPackageResponse Alibabacloud_Ecd20200930::Client::dissociateNetworkPackage(shared_ptr<DissociateNetworkPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateNetworkPackageWithOptions(request, runtime);
}

ExportClientEventsResponse Alibabacloud_Ecd20200930::Client::exportClientEventsWithOptions(shared_ptr<ExportClientEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopName)) {
    query->insert(pair<string, string>("DesktopName", *request->desktopName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->eventTypes)) {
    query->insert(pair<string, vector<string>>("EventTypes", *request->eventTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->langType)) {
    query->insert(pair<string, string>("LangType", *request->langType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteName)) {
    query->insert(pair<string, string>("OfficeSiteName", *request->officeSiteName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportClientEvents"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportClientEventsResponse(callApi(params, req, runtime));
}

ExportClientEventsResponse Alibabacloud_Ecd20200930::Client::exportClientEvents(shared_ptr<ExportClientEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportClientEventsWithOptions(request, runtime);
}

ExportDesktopGroupInfoResponse Alibabacloud_Ecd20200930::Client::exportDesktopGroupInfoWithOptions(shared_ptr<ExportDesktopGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopGroupId)) {
    query->insert(pair<string, vector<string>>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupName)) {
    query->insert(pair<string, string>("DesktopGroupName", *request->desktopGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiredTime)) {
    query->insert(pair<string, string>("ExpiredTime", *request->expiredTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->langType)) {
    query->insert(pair<string, string>("LangType", *request->langType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportDesktopGroupInfo"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportDesktopGroupInfoResponse(callApi(params, req, runtime));
}

ExportDesktopGroupInfoResponse Alibabacloud_Ecd20200930::Client::exportDesktopGroupInfo(shared_ptr<ExportDesktopGroupInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportDesktopGroupInfoWithOptions(request, runtime);
}

ExportDesktopListInfoResponse Alibabacloud_Ecd20200930::Client::exportDesktopListInfoWithOptions(shared_ptr<ExportDesktopListInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiredTime)) {
    query->insert(pair<string, string>("ExpiredTime", *request->expiredTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->langType)) {
    query->insert(pair<string, string>("LangType", *request->langType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ExportDesktopListInfoRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ExportDesktopListInfoRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportDesktopListInfo"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportDesktopListInfoResponse(callApi(params, req, runtime));
}

ExportDesktopListInfoResponse Alibabacloud_Ecd20200930::Client::exportDesktopListInfo(shared_ptr<ExportDesktopListInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportDesktopListInfoWithOptions(request, runtime);
}

GetAsyncTaskResponse Alibabacloud_Ecd20200930::Client::getAsyncTaskWithOptions(shared_ptr<GetAsyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->asyncTaskId)) {
    query->insert(pair<string, string>("AsyncTaskId", *request->asyncTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsyncTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAsyncTaskResponse(callApi(params, req, runtime));
}

GetAsyncTaskResponse Alibabacloud_Ecd20200930::Client::getAsyncTask(shared_ptr<GetAsyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncTaskWithOptions(request, runtime);
}

GetConnectionTicketResponse Alibabacloud_Ecd20200930::Client::getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commandContent)) {
    query->insert(pair<string, string>("CommandContent", *request->commandContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
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
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConnectionTicketResponse(callApi(params, req, runtime));
}

GetConnectionTicketResponse Alibabacloud_Ecd20200930::Client::getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionTicketWithOptions(request, runtime);
}

GetCoordinateTicketResponse Alibabacloud_Ecd20200930::Client::getCoordinateTicketWithOptions(shared_ptr<GetCoordinateTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coId)) {
    query->insert(pair<string, string>("CoId", *request->coId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCoordinateTicket"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCoordinateTicketResponse(callApi(params, req, runtime));
}

GetCoordinateTicketResponse Alibabacloud_Ecd20200930::Client::getCoordinateTicket(shared_ptr<GetCoordinateTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCoordinateTicketWithOptions(request, runtime);
}

GetDesktopGroupDetailResponse Alibabacloud_Ecd20200930::Client::getDesktopGroupDetailWithOptions(shared_ptr<GetDesktopGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDesktopGroupDetail"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDesktopGroupDetailResponse(callApi(params, req, runtime));
}

GetDesktopGroupDetailResponse Alibabacloud_Ecd20200930::Client::getDesktopGroupDetail(shared_ptr<GetDesktopGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDesktopGroupDetailWithOptions(request, runtime);
}

GetOfficeSiteSsoStatusResponse Alibabacloud_Ecd20200930::Client::getOfficeSiteSsoStatusWithOptions(shared_ptr<GetOfficeSiteSsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("GetOfficeSiteSsoStatus"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOfficeSiteSsoStatusResponse(callApi(params, req, runtime));
}

GetOfficeSiteSsoStatusResponse Alibabacloud_Ecd20200930::Client::getOfficeSiteSsoStatus(shared_ptr<GetOfficeSiteSsoStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOfficeSiteSsoStatusWithOptions(request, runtime);
}

GetSpMetadataResponse Alibabacloud_Ecd20200930::Client::getSpMetadataWithOptions(shared_ptr<GetSpMetadataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
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
    {"action", boost::any(string("GetSpMetadata"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSpMetadataResponse(callApi(params, req, runtime));
}

GetSpMetadataResponse Alibabacloud_Ecd20200930::Client::getSpMetadata(shared_ptr<GetSpMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpMetadataWithOptions(request, runtime);
}

HibernateDesktopsResponse Alibabacloud_Ecd20200930::Client::hibernateDesktopsWithOptions(shared_ptr<HibernateDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HibernateDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HibernateDesktopsResponse(callApi(params, req, runtime));
}

HibernateDesktopsResponse Alibabacloud_Ecd20200930::Client::hibernateDesktops(shared_ptr<HibernateDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hibernateDesktopsWithOptions(request, runtime);
}

ListCdsFilesResponse Alibabacloud_Ecd20200930::Client::listCdsFilesWithOptions(shared_ptr<ListCdsFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCdsFilesShrinkRequest> request = make_shared<ListCdsFilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->fileIds)) {
    request->fileIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fileIds, make_shared<string>("FileIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileIdsShrink)) {
    query->insert(pair<string, string>("FileIds", *request->fileIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFileId)) {
    query->insert(pair<string, string>("ParentFileId", *request->parentFileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCdsFiles"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCdsFilesResponse(callApi(params, req, runtime));
}

ListCdsFilesResponse Alibabacloud_Ecd20200930::Client::listCdsFiles(shared_ptr<ListCdsFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCdsFilesWithOptions(request, runtime);
}

ListDirectoryUsersResponse Alibabacloud_Ecd20200930::Client::listDirectoryUsersWithOptions(shared_ptr<ListDirectoryUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OUPath)) {
    query->insert(pair<string, string>("OUPath", *request->OUPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDirectoryUsers"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDirectoryUsersResponse(callApi(params, req, runtime));
}

ListDirectoryUsersResponse Alibabacloud_Ecd20200930::Client::listDirectoryUsers(shared_ptr<ListDirectoryUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDirectoryUsersWithOptions(request, runtime);
}

ListFilePermissionResponse Alibabacloud_Ecd20200930::Client::listFilePermissionWithOptions(shared_ptr<ListFilePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFilePermission"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFilePermissionResponse(callApi(params, req, runtime));
}

ListFilePermissionResponse Alibabacloud_Ecd20200930::Client::listFilePermission(shared_ptr<ListFilePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFilePermissionWithOptions(request, runtime);
}

ListOfficeSiteOverviewResponse Alibabacloud_Ecd20200930::Client::listOfficeSiteOverviewWithOptions(shared_ptr<ListOfficeSiteOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceRefresh)) {
    query->insert(pair<string, bool>("ForceRefresh", *request->forceRefresh));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->officeSiteId)) {
    query->insert(pair<string, vector<string>>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queryRange)) {
    query->insert(pair<string, long>("QueryRange", *request->queryRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOfficeSiteOverview"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOfficeSiteOverviewResponse(callApi(params, req, runtime));
}

ListOfficeSiteOverviewResponse Alibabacloud_Ecd20200930::Client::listOfficeSiteOverview(shared_ptr<ListOfficeSiteOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOfficeSiteOverviewWithOptions(request, runtime);
}

ListOfficeSiteUsersResponse Alibabacloud_Ecd20200930::Client::listOfficeSiteUsersWithOptions(shared_ptr<ListOfficeSiteUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OUPath)) {
    query->insert(pair<string, string>("OUPath", *request->OUPath));
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
    {"action", boost::any(string("ListOfficeSiteUsers"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOfficeSiteUsersResponse(callApi(params, req, runtime));
}

ListOfficeSiteUsersResponse Alibabacloud_Ecd20200930::Client::listOfficeSiteUsers(shared_ptr<ListOfficeSiteUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOfficeSiteUsersWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Ecd20200930::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Ecd20200930::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListUserAdOrganizationUnitsResponse Alibabacloud_Ecd20200930::Client::listUserAdOrganizationUnitsWithOptions(shared_ptr<ListUserAdOrganizationUnitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserAdOrganizationUnits"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserAdOrganizationUnitsResponse(callApi(params, req, runtime));
}

ListUserAdOrganizationUnitsResponse Alibabacloud_Ecd20200930::Client::listUserAdOrganizationUnits(shared_ptr<ListUserAdOrganizationUnitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserAdOrganizationUnitsWithOptions(request, runtime);
}

LockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::lockVirtualMFADeviceWithOptions(shared_ptr<LockVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LockVirtualMFADevice"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LockVirtualMFADeviceResponse(callApi(params, req, runtime));
}

LockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::lockVirtualMFADevice(shared_ptr<LockVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockVirtualMFADeviceWithOptions(request, runtime);
}

MigrateDesktopsResponse Alibabacloud_Ecd20200930::Client::migrateDesktopsWithOptions(shared_ptr<MigrateDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetOfficeSiteId)) {
    query->insert(pair<string, string>("TargetOfficeSiteId", *request->targetOfficeSiteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MigrateDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MigrateDesktopsResponse(callApi(params, req, runtime));
}

MigrateDesktopsResponse Alibabacloud_Ecd20200930::Client::migrateDesktops(shared_ptr<MigrateDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return migrateDesktopsWithOptions(request, runtime);
}

MigrateImageProtocolResponse Alibabacloud_Ecd20200930::Client::migrateImageProtocolWithOptions(shared_ptr<MigrateImageProtocolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageId)) {
    query->insert(pair<string, vector<string>>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetProtocolType)) {
    query->insert(pair<string, string>("TargetProtocolType", *request->targetProtocolType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MigrateImageProtocol"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MigrateImageProtocolResponse(callApi(params, req, runtime));
}

MigrateImageProtocolResponse Alibabacloud_Ecd20200930::Client::migrateImageProtocol(shared_ptr<MigrateImageProtocolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return migrateImageProtocolWithOptions(request, runtime);
}

ModifyADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::modifyADConnectorDirectoryWithOptions(shared_ptr<ModifyADConnectorDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adHostname)) {
    query->insert(pair<string, string>("AdHostname", *request->adHostname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryName)) {
    query->insert(pair<string, string>("DirectoryName", *request->directoryName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dnsAddress)) {
    query->insert(pair<string, vector<string>>("DnsAddress", *request->dnsAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainPassword)) {
    query->insert(pair<string, string>("DomainPassword", *request->domainPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainUserName)) {
    query->insert(pair<string, string>("DomainUserName", *request->domainUserName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mfaEnabled)) {
    query->insert(pair<string, bool>("MfaEnabled", *request->mfaEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OUName)) {
    query->insert(pair<string, string>("OUName", *request->OUName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subDomainDnsAddress)) {
    query->insert(pair<string, vector<string>>("SubDomainDnsAddress", *request->subDomainDnsAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDomainName)) {
    query->insert(pair<string, string>("SubDomainName", *request->subDomainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyADConnectorDirectory"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyADConnectorDirectoryResponse(callApi(params, req, runtime));
}

ModifyADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::modifyADConnectorDirectory(shared_ptr<ModifyADConnectorDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyADConnectorDirectoryWithOptions(request, runtime);
}

ModifyADConnectorOfficeSiteResponse Alibabacloud_Ecd20200930::Client::modifyADConnectorOfficeSiteWithOptions(shared_ptr<ModifyADConnectorOfficeSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adHostname)) {
    query->insert(pair<string, string>("AdHostname", *request->adHostname));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dnsAddress)) {
    query->insert(pair<string, vector<string>>("DnsAddress", *request->dnsAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainPassword)) {
    query->insert(pair<string, string>("DomainPassword", *request->domainPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainUserName)) {
    query->insert(pair<string, string>("DomainUserName", *request->domainUserName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mfaEnabled)) {
    query->insert(pair<string, bool>("MfaEnabled", *request->mfaEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OUName)) {
    query->insert(pair<string, string>("OUName", *request->OUName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteName)) {
    query->insert(pair<string, string>("OfficeSiteName", *request->officeSiteName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subDomainDnsAddress)) {
    query->insert(pair<string, vector<string>>("SubDomainDnsAddress", *request->subDomainDnsAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDomainName)) {
    query->insert(pair<string, string>("SubDomainName", *request->subDomainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyADConnectorOfficeSite"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyADConnectorOfficeSiteResponse(callApi(params, req, runtime));
}

ModifyADConnectorOfficeSiteResponse Alibabacloud_Ecd20200930::Client::modifyADConnectorOfficeSite(shared_ptr<ModifyADConnectorOfficeSiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyADConnectorOfficeSiteWithOptions(request, runtime);
}

ModifyAclEntriesResponse Alibabacloud_Ecd20200930::Client::modifyAclEntriesWithOptions(shared_ptr<ModifyAclEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sourceId)) {
    query->insert(pair<string, vector<string>>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAclEntries"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAclEntriesResponse(callApi(params, req, runtime));
}

ModifyAclEntriesResponse Alibabacloud_Ecd20200930::Client::modifyAclEntries(shared_ptr<ModifyAclEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAclEntriesWithOptions(request, runtime);
}

ModifyAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::modifyAutoSnapshotPolicyWithOptions(shared_ptr<ModifyAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cronExpression)) {
    query->insert(pair<string, string>("CronExpression", *request->cronExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionDays)) {
    query->insert(pair<string, long>("RetentionDays", *request->retentionDays));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAutoSnapshotPolicy"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAutoSnapshotPolicyResponse(callApi(params, req, runtime));
}

ModifyAutoSnapshotPolicyResponse Alibabacloud_Ecd20200930::Client::modifyAutoSnapshotPolicy(shared_ptr<ModifyAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAutoSnapshotPolicyWithOptions(request, runtime);
}

ModifyBundleResponse Alibabacloud_Ecd20200930::Client::modifyBundleWithOptions(shared_ptr<ModifyBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bundleId)) {
    query->insert(pair<string, string>("BundleId", *request->bundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bundleName)) {
    query->insert(pair<string, string>("BundleName", *request->bundleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBundle"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBundleResponse(callApi(params, req, runtime));
}

ModifyBundleResponse Alibabacloud_Ecd20200930::Client::modifyBundle(shared_ptr<ModifyBundleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBundleWithOptions(request, runtime);
}

ModifyCdsFileResponse Alibabacloud_Ecd20200930::Client::modifyCdsFileWithOptions(shared_ptr<ModifyCdsFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conflictPolicy)) {
    query->insert(pair<string, string>("ConflictPolicy", *request->conflictPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCdsFile"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCdsFileResponse(callApi(params, req, runtime));
}

ModifyCdsFileResponse Alibabacloud_Ecd20200930::Client::modifyCdsFile(shared_ptr<ModifyCdsFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCdsFileWithOptions(request, runtime);
}

ModifyCdsFileShareLinkResponse Alibabacloud_Ecd20200930::Client::modifyCdsFileShareLinkWithOptions(shared_ptr<ModifyCdsFileShareLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableDownload)) {
    query->insert(pair<string, bool>("DisableDownload", *request->disableDownload));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disablePreview)) {
    query->insert(pair<string, bool>("DisablePreview", *request->disablePreview));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableSave)) {
    query->insert(pair<string, bool>("DisableSave", *request->disableSave));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->downloadCount)) {
    query->insert(pair<string, long>("DownloadCount", *request->downloadCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->downloadLimit)) {
    query->insert(pair<string, long>("DownloadLimit", *request->downloadLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiration)) {
    query->insert(pair<string, string>("Expiration", *request->expiration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->previewCount)) {
    query->insert(pair<string, long>("PreviewCount", *request->previewCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->previewLimit)) {
    query->insert(pair<string, long>("PreviewLimit", *request->previewLimit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reportCount)) {
    query->insert(pair<string, long>("ReportCount", *request->reportCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->saveCount)) {
    query->insert(pair<string, long>("SaveCount", *request->saveCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->saveLimit)) {
    query->insert(pair<string, long>("SaveLimit", *request->saveLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareId)) {
    query->insert(pair<string, string>("ShareId", *request->shareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareName)) {
    query->insert(pair<string, string>("ShareName", *request->shareName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sharePwd)) {
    query->insert(pair<string, string>("SharePwd", *request->sharePwd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->videoPreviewCount)) {
    query->insert(pair<string, long>("VideoPreviewCount", *request->videoPreviewCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCdsFileShareLink"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCdsFileShareLinkResponse(callApi(params, req, runtime));
}

ModifyCdsFileShareLinkResponse Alibabacloud_Ecd20200930::Client::modifyCdsFileShareLink(shared_ptr<ModifyCdsFileShareLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCdsFileShareLinkWithOptions(request, runtime);
}

ModifyCloudDriveGroupsResponse Alibabacloud_Ecd20200930::Client::modifyCloudDriveGroupsWithOptions(shared_ptr<ModifyCloudDriveGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->groupId)) {
    query->insert(pair<string, vector<string>>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalSize)) {
    query->insert(pair<string, long>("TotalSize", *request->totalSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCloudDriveGroups"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCloudDriveGroupsResponse(callApi(params, req, runtime));
}

ModifyCloudDriveGroupsResponse Alibabacloud_Ecd20200930::Client::modifyCloudDriveGroups(shared_ptr<ModifyCloudDriveGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCloudDriveGroupsWithOptions(request, runtime);
}

ModifyCloudDrivePermissionResponse Alibabacloud_Ecd20200930::Client::modifyCloudDrivePermissionWithOptions(shared_ptr<ModifyCloudDrivePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->downloadEndUserIds)) {
    query->insert(pair<string, vector<string>>("DownloadEndUserIds", *request->downloadEndUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->downloadUploadEndUserIds)) {
    query->insert(pair<string, vector<string>>("DownloadUploadEndUserIds", *request->downloadUploadEndUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCloudDrivePermission"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCloudDrivePermissionResponse(callApi(params, req, runtime));
}

ModifyCloudDrivePermissionResponse Alibabacloud_Ecd20200930::Client::modifyCloudDrivePermission(shared_ptr<ModifyCloudDrivePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCloudDrivePermissionWithOptions(request, runtime);
}

ModifyCloudDriveUsersResponse Alibabacloud_Ecd20200930::Client::modifyCloudDriveUsersWithOptions(shared_ptr<ModifyCloudDriveUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userMaxSize)) {
    query->insert(pair<string, long>("UserMaxSize", *request->userMaxSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCloudDriveUsers"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCloudDriveUsersResponse(callApi(params, req, runtime));
}

ModifyCloudDriveUsersResponse Alibabacloud_Ecd20200930::Client::modifyCloudDriveUsers(shared_ptr<ModifyCloudDriveUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCloudDriveUsersWithOptions(request, runtime);
}

ModifyCustomizedListHeadersResponse Alibabacloud_Ecd20200930::Client::modifyCustomizedListHeadersWithOptions(shared_ptr<ModifyCustomizedListHeadersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyCustomizedListHeadersRequestHeaders>>(request->headers)) {
    query->insert(pair<string, vector<ModifyCustomizedListHeadersRequestHeaders>>("Headers", *request->headers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listType)) {
    query->insert(pair<string, string>("ListType", *request->listType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCustomizedListHeaders"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCustomizedListHeadersResponse(callApi(params, req, runtime));
}

ModifyCustomizedListHeadersResponse Alibabacloud_Ecd20200930::Client::modifyCustomizedListHeaders(shared_ptr<ModifyCustomizedListHeadersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCustomizedListHeadersWithOptions(request, runtime);
}

ModifyDesktopChargeTypeResponse Alibabacloud_Ecd20200930::Client::modifyDesktopChargeTypeWithOptions(shared_ptr<ModifyDesktopChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->useDuration)) {
    query->insert(pair<string, long>("UseDuration", *request->useDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesktopChargeType"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesktopChargeTypeResponse(callApi(params, req, runtime));
}

ModifyDesktopChargeTypeResponse Alibabacloud_Ecd20200930::Client::modifyDesktopChargeType(shared_ptr<ModifyDesktopChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopChargeTypeWithOptions(request, runtime);
}

ModifyDesktopGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopGroupWithOptions(shared_ptr<ModifyDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->allowAutoSetup)) {
    query->insert(pair<string, long>("AllowAutoSetup", *request->allowAutoSetup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->allowBufferCount)) {
    query->insert(pair<string, long>("AllowBufferCount", *request->allowBufferCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bindAmount)) {
    query->insert(pair<string, long>("BindAmount", *request->bindAmount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buyDesktopsCount)) {
    query->insert(pair<string, long>("BuyDesktopsCount", *request->buyDesktopsCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classify)) {
    query->insert(pair<string, string>("Classify", *request->classify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comments)) {
    query->insert(pair<string, string>("Comments", *request->comments));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->connectDuration)) {
    query->insert(pair<string, long>("ConnectDuration", *request->connectDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupName)) {
    query->insert(pair<string, string>("DesktopGroupName", *request->desktopGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableSessionConfig)) {
    query->insert(pair<string, bool>("DisableSessionConfig", *request->disableSessionConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleDisconnectDuration)) {
    query->insert(pair<string, long>("IdleDisconnectDuration", *request->idleDisconnectDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->keepDuration)) {
    query->insert(pair<string, long>("KeepDuration", *request->keepDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->loadPolicy)) {
    query->insert(pair<string, long>("LoadPolicy", *request->loadPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxDesktopsCount)) {
    query->insert(pair<string, long>("MaxDesktopsCount", *request->maxDesktopsCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minDesktopsCount)) {
    query->insert(pair<string, long>("MinDesktopsCount", *request->minDesktopsCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownBundleId)) {
    query->insert(pair<string, string>("OwnBundleId", *request->ownBundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyGroupIds)) {
    query->insert(pair<string, vector<string>>("PolicyGroupIds", *request->policyGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->profileFollowSwitch)) {
    query->insert(pair<string, bool>("ProfileFollowSwitch", *request->profileFollowSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->ratioThreshold)) {
    query->insert(pair<string, double>("RatioThreshold", *request->ratioThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resetType)) {
    query->insert(pair<string, long>("ResetType", *request->resetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scaleStrategyId)) {
    query->insert(pair<string, string>("ScaleStrategyId", *request->scaleStrategyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopDuration)) {
    query->insert(pair<string, long>("StopDuration", *request->stopDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesktopGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesktopGroupResponse(callApi(params, req, runtime));
}

ModifyDesktopGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopGroup(shared_ptr<ModifyDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopGroupWithOptions(request, runtime);
}

ModifyDesktopHostNameResponse Alibabacloud_Ecd20200930::Client::modifyDesktopHostNameWithOptions(shared_ptr<ModifyDesktopHostNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newHostName)) {
    query->insert(pair<string, string>("NewHostName", *request->newHostName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesktopHostName"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesktopHostNameResponse(callApi(params, req, runtime));
}

ModifyDesktopHostNameResponse Alibabacloud_Ecd20200930::Client::modifyDesktopHostName(shared_ptr<ModifyDesktopHostNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopHostNameWithOptions(request, runtime);
}

ModifyDesktopNameResponse Alibabacloud_Ecd20200930::Client::modifyDesktopNameWithOptions(shared_ptr<ModifyDesktopNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newDesktopName)) {
    query->insert(pair<string, string>("NewDesktopName", *request->newDesktopName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesktopName"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesktopNameResponse(callApi(params, req, runtime));
}

ModifyDesktopNameResponse Alibabacloud_Ecd20200930::Client::modifyDesktopName(shared_ptr<ModifyDesktopNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopNameWithOptions(request, runtime);
}

ModifyDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopOversoldGroupWithOptions(shared_ptr<ModifyDesktopOversoldGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->concurrenceCount)) {
    query->insert(pair<string, long>("ConcurrenceCount", *request->concurrenceCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oversoldUserCount)) {
    query->insert(pair<string, long>("OversoldUserCount", *request->oversoldUserCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oversoldWarn)) {
    query->insert(pair<string, long>("OversoldWarn", *request->oversoldWarn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopDuration)) {
    query->insert(pair<string, long>("StopDuration", *request->stopDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesktopOversoldGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesktopOversoldGroupResponse(callApi(params, req, runtime));
}

ModifyDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopOversoldGroup(shared_ptr<ModifyDesktopOversoldGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopOversoldGroupWithOptions(request, runtime);
}

ModifyDesktopOversoldGroupSaleResponse Alibabacloud_Ecd20200930::Client::modifyDesktopOversoldGroupSaleWithOptions(shared_ptr<ModifyDesktopOversoldGroupSaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->concurrenceCount)) {
    query->insert(pair<string, long>("ConcurrenceCount", *request->concurrenceCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oversoldUserCount)) {
    query->insert(pair<string, long>("OversoldUserCount", *request->oversoldUserCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesktopOversoldGroupSale"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesktopOversoldGroupSaleResponse(callApi(params, req, runtime));
}

ModifyDesktopOversoldGroupSaleResponse Alibabacloud_Ecd20200930::Client::modifyDesktopOversoldGroupSale(shared_ptr<ModifyDesktopOversoldGroupSaleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopOversoldGroupSaleWithOptions(request, runtime);
}

ModifyDesktopOversoldUserGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopOversoldUserGroupWithOptions(shared_ptr<ModifyDesktopOversoldUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesktopOversoldUserGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesktopOversoldUserGroupResponse(callApi(params, req, runtime));
}

ModifyDesktopOversoldUserGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopOversoldUserGroup(shared_ptr<ModifyDesktopOversoldUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopOversoldUserGroupWithOptions(request, runtime);
}

ModifyDesktopSpecResponse Alibabacloud_Ecd20200930::Client::modifyDesktopSpecWithOptions(shared_ptr<ModifyDesktopSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopType)) {
    query->insert(pair<string, string>("DesktopType", *request->desktopType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rootDiskSizeGib)) {
    query->insert(pair<string, long>("RootDiskSizeGib", *request->rootDiskSizeGib));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDiskPerformanceLevel)) {
    query->insert(pair<string, string>("UserDiskPerformanceLevel", *request->userDiskPerformanceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userDiskSizeGib)) {
    query->insert(pair<string, long>("UserDiskSizeGib", *request->userDiskSizeGib));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesktopSpec"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesktopSpecResponse(callApi(params, req, runtime));
}

ModifyDesktopSpecResponse Alibabacloud_Ecd20200930::Client::modifyDesktopSpec(shared_ptr<ModifyDesktopSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopSpecWithOptions(request, runtime);
}

ModifyDesktopTimerResponse Alibabacloud_Ecd20200930::Client::modifyDesktopTimerWithOptions(shared_ptr<ModifyDesktopTimerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyDesktopTimerRequestDesktopTimers>>(request->desktopTimers)) {
    query->insert(pair<string, vector<ModifyDesktopTimerRequestDesktopTimers>>("DesktopTimers", *request->desktopTimers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useDesktopTimers)) {
    query->insert(pair<string, bool>("UseDesktopTimers", *request->useDesktopTimers));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesktopTimer"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesktopTimerResponse(callApi(params, req, runtime));
}

ModifyDesktopTimerResponse Alibabacloud_Ecd20200930::Client::modifyDesktopTimer(shared_ptr<ModifyDesktopTimerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopTimerWithOptions(request, runtime);
}

ModifyDesktopsPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopsPolicyGroupWithOptions(shared_ptr<ModifyDesktopsPolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->policyGroupIds)) {
    query->insert(pair<string, vector<string>>("PolicyGroupIds", *request->policyGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDesktopsPolicyGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDesktopsPolicyGroupResponse(callApi(params, req, runtime));
}

ModifyDesktopsPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopsPolicyGroup(shared_ptr<ModifyDesktopsPolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopsPolicyGroupWithOptions(request, runtime);
}

ModifyDiskSpecResponse Alibabacloud_Ecd20200930::Client::modifyDiskSpecWithOptions(shared_ptr<ModifyDiskSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootDiskPerformanceLevel)) {
    query->insert(pair<string, string>("RootDiskPerformanceLevel", *request->rootDiskPerformanceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDiskPerformanceLevel)) {
    query->insert(pair<string, string>("UserDiskPerformanceLevel", *request->userDiskPerformanceLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDiskSpec"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDiskSpecResponse(callApi(params, req, runtime));
}

ModifyDiskSpecResponse Alibabacloud_Ecd20200930::Client::modifyDiskSpec(shared_ptr<ModifyDiskSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDiskSpecWithOptions(request, runtime);
}

ModifyEntitlementResponse Alibabacloud_Ecd20200930::Client::modifyEntitlementWithOptions(shared_ptr<ModifyEntitlementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    query->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEntitlement"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyEntitlementResponse(callApi(params, req, runtime));
}

ModifyEntitlementResponse Alibabacloud_Ecd20200930::Client::modifyEntitlement(shared_ptr<ModifyEntitlementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEntitlementWithOptions(request, runtime);
}

ModifyImageAttributeResponse Alibabacloud_Ecd20200930::Client::modifyImageAttributeWithOptions(shared_ptr<ModifyImageAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyImageAttribute"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyImageAttributeResponse(callApi(params, req, runtime));
}

ModifyImageAttributeResponse Alibabacloud_Ecd20200930::Client::modifyImageAttribute(shared_ptr<ModifyImageAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImageAttributeWithOptions(request, runtime);
}

ModifyImagePermissionResponse Alibabacloud_Ecd20200930::Client::modifyImagePermissionWithOptions(shared_ptr<ModifyImagePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->addAccount)) {
    query->insert(pair<string, vector<long>>("AddAccount", *request->addAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->removeAccount)) {
    query->insert(pair<string, vector<long>>("RemoveAccount", *request->removeAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyImagePermission"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyImagePermissionResponse(callApi(params, req, runtime));
}

ModifyImagePermissionResponse Alibabacloud_Ecd20200930::Client::modifyImagePermission(shared_ptr<ModifyImagePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImagePermissionWithOptions(request, runtime);
}

ModifyNASDefaultMountTargetResponse Alibabacloud_Ecd20200930::Client::modifyNASDefaultMountTargetWithOptions(shared_ptr<ModifyNASDefaultMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountTargetDomain)) {
    query->insert(pair<string, string>("MountTargetDomain", *request->mountTargetDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNASDefaultMountTarget"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNASDefaultMountTargetResponse(callApi(params, req, runtime));
}

ModifyNASDefaultMountTargetResponse Alibabacloud_Ecd20200930::Client::modifyNASDefaultMountTarget(shared_ptr<ModifyNASDefaultMountTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNASDefaultMountTargetWithOptions(request, runtime);
}

ModifyNetworkPackageBandwidthResponse Alibabacloud_Ecd20200930::Client::modifyNetworkPackageBandwidthWithOptions(shared_ptr<ModifyNetworkPackageBandwidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkPackageId)) {
    query->insert(pair<string, string>("NetworkPackageId", *request->networkPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNetworkPackageBandwidth"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNetworkPackageBandwidthResponse(callApi(params, req, runtime));
}

ModifyNetworkPackageBandwidthResponse Alibabacloud_Ecd20200930::Client::modifyNetworkPackageBandwidth(shared_ptr<ModifyNetworkPackageBandwidthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNetworkPackageBandwidthWithOptions(request, runtime);
}

ModifyNetworkPackageEnabledResponse Alibabacloud_Ecd20200930::Client::modifyNetworkPackageEnabledWithOptions(shared_ptr<ModifyNetworkPackageEnabledRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkPackageId)) {
    query->insert(pair<string, string>("NetworkPackageId", *request->networkPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNetworkPackageEnabled"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNetworkPackageEnabledResponse(callApi(params, req, runtime));
}

ModifyNetworkPackageEnabledResponse Alibabacloud_Ecd20200930::Client::modifyNetworkPackageEnabled(shared_ptr<ModifyNetworkPackageEnabledRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNetworkPackageEnabledWithOptions(request, runtime);
}

ModifyOfficeSiteAttributeResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteAttributeWithOptions(shared_ptr<ModifyOfficeSiteAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopAccessType)) {
    query->insert(pair<string, string>("DesktopAccessType", *request->desktopAccessType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAdminAccess)) {
    query->insert(pair<string, bool>("EnableAdminAccess", *request->enableAdminAccess));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needVerifyLoginRisk)) {
    query->insert(pair<string, bool>("NeedVerifyLoginRisk", *request->needVerifyLoginRisk));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needVerifyZeroDevice)) {
    query->insert(pair<string, bool>("NeedVerifyZeroDevice", *request->needVerifyZeroDevice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteName)) {
    query->insert(pair<string, string>("OfficeSiteName", *request->officeSiteName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyOfficeSiteAttribute"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyOfficeSiteAttributeResponse(callApi(params, req, runtime));
}

ModifyOfficeSiteAttributeResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteAttribute(shared_ptr<ModifyOfficeSiteAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOfficeSiteAttributeWithOptions(request, runtime);
}

ModifyOfficeSiteCrossDesktopAccessResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteCrossDesktopAccessWithOptions(shared_ptr<ModifyOfficeSiteCrossDesktopAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCrossDesktopAccess)) {
    query->insert(pair<string, bool>("EnableCrossDesktopAccess", *request->enableCrossDesktopAccess));
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
    {"action", boost::any(string("ModifyOfficeSiteCrossDesktopAccess"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyOfficeSiteCrossDesktopAccessResponse(callApi(params, req, runtime));
}

ModifyOfficeSiteCrossDesktopAccessResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteCrossDesktopAccess(shared_ptr<ModifyOfficeSiteCrossDesktopAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOfficeSiteCrossDesktopAccessWithOptions(request, runtime);
}

ModifyOfficeSiteMfaEnabledResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteMfaEnabledWithOptions(shared_ptr<ModifyOfficeSiteMfaEnabledRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->mfaEnabled)) {
    query->insert(pair<string, bool>("MfaEnabled", *request->mfaEnabled));
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
    {"action", boost::any(string("ModifyOfficeSiteMfaEnabled"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyOfficeSiteMfaEnabledResponse(callApi(params, req, runtime));
}

ModifyOfficeSiteMfaEnabledResponse Alibabacloud_Ecd20200930::Client::modifyOfficeSiteMfaEnabled(shared_ptr<ModifyOfficeSiteMfaEnabledRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOfficeSiteMfaEnabledWithOptions(request, runtime);
}

ModifyPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyPolicyGroupWithOptions(shared_ptr<ModifyPolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adminAccess)) {
    query->insert(pair<string, string>("AdminAccess", *request->adminAccess));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appContentProtection)) {
    query->insert(pair<string, string>("AppContentProtection", *request->appContentProtection));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule>>(request->authorizeAccessPolicyRule)) {
    query->insert(pair<string, vector<ModifyPolicyGroupRequestAuthorizeAccessPolicyRule>>("AuthorizeAccessPolicyRule", *request->authorizeAccessPolicyRule));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule>>(request->authorizeSecurityPolicyRule)) {
    query->insert(pair<string, vector<ModifyPolicyGroupRequestAuthorizeSecurityPolicyRule>>("AuthorizeSecurityPolicyRule", *request->authorizeSecurityPolicyRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cameraRedirect)) {
    query->insert(pair<string, string>("CameraRedirect", *request->cameraRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyPolicyGroupRequestClientType>>(request->clientType)) {
    query->insert(pair<string, vector<ModifyPolicyGroupRequestClientType>>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipboard)) {
    query->insert(pair<string, string>("Clipboard", *request->clipboard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainList)) {
    query->insert(pair<string, string>("DomainList", *request->domainList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyPolicyGroupRequestDomainResolveRule>>(request->domainResolveRule)) {
    query->insert(pair<string, vector<ModifyPolicyGroupRequestDomainResolveRule>>("DomainResolveRule", *request->domainResolveRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainResolveRuleType)) {
    query->insert(pair<string, string>("DomainResolveRuleType", *request->domainResolveRuleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserApplyAdminCoordinate)) {
    query->insert(pair<string, string>("EndUserApplyAdminCoordinate", *request->endUserApplyAdminCoordinate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserGroupCoordinate)) {
    query->insert(pair<string, string>("EndUserGroupCoordinate", *request->endUserGroupCoordinate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuAcceleration)) {
    query->insert(pair<string, string>("GpuAcceleration", *request->gpuAcceleration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->html5Access)) {
    query->insert(pair<string, string>("Html5Access", *request->html5Access));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->html5FileTransfer)) {
    query->insert(pair<string, string>("Html5FileTransfer", *request->html5FileTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetCommunicationProtocol)) {
    query->insert(pair<string, string>("InternetCommunicationProtocol", *request->internetCommunicationProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localDrive)) {
    query->insert(pair<string, string>("LocalDrive", *request->localDrive));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netRedirect)) {
    query->insert(pair<string, string>("NetRedirect", *request->netRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyGroupId)) {
    query->insert(pair<string, string>("PolicyGroupId", *request->policyGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preemptLogin)) {
    query->insert(pair<string, string>("PreemptLogin", *request->preemptLogin));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->preemptLoginUser)) {
    query->insert(pair<string, vector<string>>("PreemptLoginUser", *request->preemptLoginUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->printerRedirection)) {
    query->insert(pair<string, string>("PrinterRedirection", *request->printerRedirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordContent)) {
    query->insert(pair<string, string>("RecordContent", *request->recordContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordContentExpires)) {
    query->insert(pair<string, long>("RecordContentExpires", *request->recordContentExpires));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recording)) {
    query->insert(pair<string, string>("Recording", *request->recording));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordingAudio)) {
    query->insert(pair<string, string>("RecordingAudio", *request->recordingAudio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordingDuration)) {
    query->insert(pair<string, long>("RecordingDuration", *request->recordingDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordingEndTime)) {
    query->insert(pair<string, string>("RecordingEndTime", *request->recordingEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordingExpires)) {
    query->insert(pair<string, long>("RecordingExpires", *request->recordingExpires));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordingFps)) {
    query->insert(pair<string, long>("RecordingFps", *request->recordingFps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordingStartTime)) {
    query->insert(pair<string, string>("RecordingStartTime", *request->recordingStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remoteCoordinate)) {
    query->insert(pair<string, string>("RemoteCoordinate", *request->remoteCoordinate));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule>>(request->revokeAccessPolicyRule)) {
    query->insert(pair<string, vector<ModifyPolicyGroupRequestRevokeAccessPolicyRule>>("RevokeAccessPolicyRule", *request->revokeAccessPolicyRule));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule>>(request->revokeSecurityPolicyRule)) {
    query->insert(pair<string, vector<ModifyPolicyGroupRequestRevokeSecurityPolicyRule>>("RevokeSecurityPolicyRule", *request->revokeSecurityPolicyRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scopeValue)) {
    query->insert(pair<string, vector<string>>("ScopeValue", *request->scopeValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->usbRedirect)) {
    query->insert(pair<string, string>("UsbRedirect", *request->usbRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyPolicyGroupRequestUsbSupplyRedirectRule>>(request->usbSupplyRedirectRule)) {
    query->insert(pair<string, vector<ModifyPolicyGroupRequestUsbSupplyRedirectRule>>("UsbSupplyRedirectRule", *request->usbSupplyRedirectRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoRedirect)) {
    query->insert(pair<string, string>("VideoRedirect", *request->videoRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visualQuality)) {
    query->insert(pair<string, string>("VisualQuality", *request->visualQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermark)) {
    query->insert(pair<string, string>("Watermark", *request->watermark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkColor)) {
    query->insert(pair<string, long>("WatermarkColor", *request->watermarkColor));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->watermarkDegree)) {
    query->insert(pair<string, double>("WatermarkDegree", *request->watermarkDegree));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkFontSize)) {
    query->insert(pair<string, long>("WatermarkFontSize", *request->watermarkFontSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkFontStyle)) {
    query->insert(pair<string, string>("WatermarkFontStyle", *request->watermarkFontStyle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkRowAmount)) {
    query->insert(pair<string, long>("WatermarkRowAmount", *request->watermarkRowAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkSecurity)) {
    query->insert(pair<string, string>("WatermarkSecurity", *request->watermarkSecurity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkTransparency)) {
    query->insert(pair<string, string>("WatermarkTransparency", *request->watermarkTransparency));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkTransparencyValue)) {
    query->insert(pair<string, long>("WatermarkTransparencyValue", *request->watermarkTransparencyValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkType)) {
    query->insert(pair<string, string>("WatermarkType", *request->watermarkType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPolicyGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPolicyGroupResponse(callApi(params, req, runtime));
}

ModifyPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyPolicyGroup(shared_ptr<ModifyPolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPolicyGroupWithOptions(request, runtime);
}

ModifyUserEntitlementResponse Alibabacloud_Ecd20200930::Client::modifyUserEntitlementWithOptions(shared_ptr<ModifyUserEntitlementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->authorizeDesktopId)) {
    query->insert(pair<string, vector<string>>("AuthorizeDesktopId", *request->authorizeDesktopId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserId)) {
    query->insert(pair<string, vector<string>>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->revokeDesktopId)) {
    query->insert(pair<string, vector<string>>("RevokeDesktopId", *request->revokeDesktopId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyUserEntitlement"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyUserEntitlementResponse(callApi(params, req, runtime));
}

ModifyUserEntitlementResponse Alibabacloud_Ecd20200930::Client::modifyUserEntitlement(shared_ptr<ModifyUserEntitlementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserEntitlementWithOptions(request, runtime);
}

ModifyUserToDesktopGroupResponse Alibabacloud_Ecd20200930::Client::modifyUserToDesktopGroupWithOptions(shared_ptr<ModifyUserToDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->newEndUserIds)) {
    query->insert(pair<string, vector<string>>("NewEndUserIds", *request->newEndUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->oldEndUserIds)) {
    query->insert(pair<string, vector<string>>("OldEndUserIds", *request->oldEndUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyUserToDesktopGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyUserToDesktopGroupResponse(callApi(params, req, runtime));
}

ModifyUserToDesktopGroupResponse Alibabacloud_Ecd20200930::Client::modifyUserToDesktopGroup(shared_ptr<ModifyUserToDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserToDesktopGroupWithOptions(request, runtime);
}

MoveCdsFileResponse Alibabacloud_Ecd20200930::Client::moveCdsFileWithOptions(shared_ptr<MoveCdsFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conflictPolicy)) {
    query->insert(pair<string, string>("ConflictPolicy", *request->conflictPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFolderId)) {
    query->insert(pair<string, string>("ParentFolderId", *request->parentFolderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveCdsFile"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveCdsFileResponse(callApi(params, req, runtime));
}

MoveCdsFileResponse Alibabacloud_Ecd20200930::Client::moveCdsFile(shared_ptr<MoveCdsFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveCdsFileWithOptions(request, runtime);
}

RebootDesktopsResponse Alibabacloud_Ecd20200930::Client::rebootDesktopsWithOptions(shared_ptr<RebootDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebootDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RebootDesktopsResponse(callApi(params, req, runtime));
}

RebootDesktopsResponse Alibabacloud_Ecd20200930::Client::rebootDesktops(shared_ptr<RebootDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootDesktopsWithOptions(request, runtime);
}

RebuildDesktopsResponse Alibabacloud_Ecd20200930::Client::rebuildDesktopsWithOptions(shared_ptr<RebuildDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebuildDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RebuildDesktopsResponse(callApi(params, req, runtime));
}

RebuildDesktopsResponse Alibabacloud_Ecd20200930::Client::rebuildDesktops(shared_ptr<RebuildDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebuildDesktopsWithOptions(request, runtime);
}

RemoveFilePermissionResponse Alibabacloud_Ecd20200930::Client::removeFilePermissionWithOptions(shared_ptr<RemoveFilePermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveFilePermissionShrinkRequest> request = make_shared<RemoveFilePermissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RemoveFilePermissionRequestMemberList>>(tmpReq->memberList)) {
    request->memberListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->memberList, make_shared<string>("MemberList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdsId)) {
    query->insert(pair<string, string>("CdsId", *request->cdsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberListShrink)) {
    query->insert(pair<string, string>("MemberList", *request->memberListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveFilePermission"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveFilePermissionResponse(callApi(params, req, runtime));
}

RemoveFilePermissionResponse Alibabacloud_Ecd20200930::Client::removeFilePermission(shared_ptr<RemoveFilePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeFilePermissionWithOptions(request, runtime);
}

RemoveUserFromDesktopGroupResponse Alibabacloud_Ecd20200930::Client::removeUserFromDesktopGroupWithOptions(shared_ptr<RemoveUserFromDesktopGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopGroupIds)) {
    query->insert(pair<string, vector<string>>("DesktopGroupIds", *request->desktopGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserIds)) {
    query->insert(pair<string, vector<string>>("EndUserIds", *request->endUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveUserFromDesktopGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveUserFromDesktopGroupResponse(callApi(params, req, runtime));
}

RemoveUserFromDesktopGroupResponse Alibabacloud_Ecd20200930::Client::removeUserFromDesktopGroup(shared_ptr<RemoveUserFromDesktopGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUserFromDesktopGroupWithOptions(request, runtime);
}

RemoveUserFromDesktopOversoldUserGroupResponse Alibabacloud_Ecd20200930::Client::removeUserFromDesktopOversoldUserGroupWithOptions(shared_ptr<RemoveUserFromDesktopOversoldUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDesktopId)) {
    query->insert(pair<string, string>("UserDesktopId", *request->userDesktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveUserFromDesktopOversoldUserGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveUserFromDesktopOversoldUserGroupResponse(callApi(params, req, runtime));
}

RemoveUserFromDesktopOversoldUserGroupResponse Alibabacloud_Ecd20200930::Client::removeUserFromDesktopOversoldUserGroup(shared_ptr<RemoveUserFromDesktopOversoldUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUserFromDesktopOversoldUserGroupWithOptions(request, runtime);
}

RenewDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::renewDesktopOversoldGroupWithOptions(shared_ptr<RenewDesktopOversoldGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->oversoldGroupId)) {
    query->insert(pair<string, string>("OversoldGroupId", *request->oversoldGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewDesktopOversoldGroup"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewDesktopOversoldGroupResponse(callApi(params, req, runtime));
}

RenewDesktopOversoldGroupResponse Alibabacloud_Ecd20200930::Client::renewDesktopOversoldGroup(shared_ptr<RenewDesktopOversoldGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewDesktopOversoldGroupWithOptions(request, runtime);
}

RenewDesktopsResponse Alibabacloud_Ecd20200930::Client::renewDesktopsWithOptions(shared_ptr<RenewDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewDesktopsResponse(callApi(params, req, runtime));
}

RenewDesktopsResponse Alibabacloud_Ecd20200930::Client::renewDesktops(shared_ptr<RenewDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewDesktopsWithOptions(request, runtime);
}

RenewNetworkPackagesResponse Alibabacloud_Ecd20200930::Client::renewNetworkPackagesWithOptions(shared_ptr<RenewNetworkPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->networkPackageId)) {
    query->insert(pair<string, vector<string>>("NetworkPackageId", *request->networkPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewNetworkPackages"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewNetworkPackagesResponse(callApi(params, req, runtime));
}

RenewNetworkPackagesResponse Alibabacloud_Ecd20200930::Client::renewNetworkPackages(shared_ptr<RenewNetworkPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewNetworkPackagesWithOptions(request, runtime);
}

ResetDesktopsResponse Alibabacloud_Ecd20200930::Client::resetDesktopsWithOptions(shared_ptr<ResetDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resetType)) {
    query->insert(pair<string, string>("ResetType", *request->resetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetDesktopsResponse(callApi(params, req, runtime));
}

ResetDesktopsResponse Alibabacloud_Ecd20200930::Client::resetDesktops(shared_ptr<ResetDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetDesktopsWithOptions(request, runtime);
}

ResetNASDefaultMountTargetResponse Alibabacloud_Ecd20200930::Client::resetNASDefaultMountTargetWithOptions(shared_ptr<ResetNASDefaultMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSystemId)) {
    query->insert(pair<string, string>("FileSystemId", *request->fileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetNASDefaultMountTarget"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetNASDefaultMountTargetResponse(callApi(params, req, runtime));
}

ResetNASDefaultMountTargetResponse Alibabacloud_Ecd20200930::Client::resetNASDefaultMountTarget(shared_ptr<ResetNASDefaultMountTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetNASDefaultMountTargetWithOptions(request, runtime);
}

ResetSnapshotResponse Alibabacloud_Ecd20200930::Client::resetSnapshotWithOptions(shared_ptr<ResetSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetSnapshot"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetSnapshotResponse(callApi(params, req, runtime));
}

ResetSnapshotResponse Alibabacloud_Ecd20200930::Client::resetSnapshot(shared_ptr<ResetSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetSnapshotWithOptions(request, runtime);
}

RevokeCoordinatePrivilegeResponse Alibabacloud_Ecd20200930::Client::revokeCoordinatePrivilegeWithOptions(shared_ptr<RevokeCoordinatePrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coId)) {
    query->insert(pair<string, string>("CoId", *request->coId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeCoordinatePrivilege"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeCoordinatePrivilegeResponse(callApi(params, req, runtime));
}

RevokeCoordinatePrivilegeResponse Alibabacloud_Ecd20200930::Client::revokeCoordinatePrivilege(shared_ptr<RevokeCoordinatePrivilegeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeCoordinatePrivilegeWithOptions(request, runtime);
}

RunCommandResponse Alibabacloud_Ecd20200930::Client::runCommandWithOptions(shared_ptr<RunCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commandContent)) {
    query->insert(pair<string, string>("CommandContent", *request->commandContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentEncoding)) {
    query->insert(pair<string, string>("ContentEncoding", *request->contentEncoding));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCommand"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCommandResponse(callApi(params, req, runtime));
}

RunCommandResponse Alibabacloud_Ecd20200930::Client::runCommand(shared_ptr<RunCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCommandWithOptions(request, runtime);
}

SendVerifyCodeResponse Alibabacloud_Ecd20200930::Client::sendVerifyCodeWithOptions(shared_ptr<SendVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    query->insert(pair<string, string>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyCodeAction)) {
    query->insert(pair<string, string>("VerifyCodeAction", *request->verifyCodeAction));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendVerifyCode"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendVerifyCodeResponse(callApi(params, req, runtime));
}

SendVerifyCodeResponse Alibabacloud_Ecd20200930::Client::sendVerifyCode(shared_ptr<SendVerifyCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendVerifyCodeWithOptions(request, runtime);
}

SetDesktopGroupScaleTimerResponse Alibabacloud_Ecd20200930::Client::setDesktopGroupScaleTimerWithOptions(shared_ptr<SetDesktopGroupScaleTimerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SetDesktopGroupScaleTimerRequestScaleTimerInfos>>(request->scaleTimerInfos)) {
    query->insert(pair<string, vector<SetDesktopGroupScaleTimerRequestScaleTimerInfos>>("ScaleTimerInfos", *request->scaleTimerInfos));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDesktopGroupScaleTimer"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDesktopGroupScaleTimerResponse(callApi(params, req, runtime));
}

SetDesktopGroupScaleTimerResponse Alibabacloud_Ecd20200930::Client::setDesktopGroupScaleTimer(shared_ptr<SetDesktopGroupScaleTimerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDesktopGroupScaleTimerWithOptions(request, runtime);
}

SetDesktopGroupTimerResponse Alibabacloud_Ecd20200930::Client::setDesktopGroupTimerWithOptions(shared_ptr<SetDesktopGroupTimerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cronExpression)) {
    query->insert(pair<string, string>("CronExpression", *request->cronExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resetType)) {
    query->insert(pair<string, long>("ResetType", *request->resetType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timerType)) {
    query->insert(pair<string, long>("TimerType", *request->timerType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDesktopGroupTimer"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDesktopGroupTimerResponse(callApi(params, req, runtime));
}

SetDesktopGroupTimerResponse Alibabacloud_Ecd20200930::Client::setDesktopGroupTimer(shared_ptr<SetDesktopGroupTimerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDesktopGroupTimerWithOptions(request, runtime);
}

SetDesktopGroupTimerStatusResponse Alibabacloud_Ecd20200930::Client::setDesktopGroupTimerStatusWithOptions(shared_ptr<SetDesktopGroupTimerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timerType)) {
    query->insert(pair<string, long>("TimerType", *request->timerType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDesktopGroupTimerStatus"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDesktopGroupTimerStatusResponse(callApi(params, req, runtime));
}

SetDesktopGroupTimerStatusResponse Alibabacloud_Ecd20200930::Client::setDesktopGroupTimerStatus(shared_ptr<SetDesktopGroupTimerStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDesktopGroupTimerStatusWithOptions(request, runtime);
}

SetDirectorySsoStatusResponse Alibabacloud_Ecd20200930::Client::setDirectorySsoStatusWithOptions(shared_ptr<SetDirectorySsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSso)) {
    query->insert(pair<string, bool>("EnableSso", *request->enableSso));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDirectorySsoStatus"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDirectorySsoStatusResponse(callApi(params, req, runtime));
}

SetDirectorySsoStatusResponse Alibabacloud_Ecd20200930::Client::setDirectorySsoStatus(shared_ptr<SetDirectorySsoStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDirectorySsoStatusWithOptions(request, runtime);
}

SetIdpMetadataResponse Alibabacloud_Ecd20200930::Client::setIdpMetadataWithOptions(shared_ptr<SetIdpMetadataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idpMetadata)) {
    query->insert(pair<string, string>("IdpMetadata", *request->idpMetadata));
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
    {"action", boost::any(string("SetIdpMetadata"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetIdpMetadataResponse(callApi(params, req, runtime));
}

SetIdpMetadataResponse Alibabacloud_Ecd20200930::Client::setIdpMetadata(shared_ptr<SetIdpMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setIdpMetadataWithOptions(request, runtime);
}

SetOfficeSiteSsoStatusResponse Alibabacloud_Ecd20200930::Client::setOfficeSiteSsoStatusWithOptions(shared_ptr<SetOfficeSiteSsoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSso)) {
    query->insert(pair<string, bool>("EnableSso", *request->enableSso));
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
    {"action", boost::any(string("SetOfficeSiteSsoStatus"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetOfficeSiteSsoStatusResponse(callApi(params, req, runtime));
}

SetOfficeSiteSsoStatusResponse Alibabacloud_Ecd20200930::Client::setOfficeSiteSsoStatus(shared_ptr<SetOfficeSiteSsoStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setOfficeSiteSsoStatusWithOptions(request, runtime);
}

SetUserProfilePathRulesResponse Alibabacloud_Ecd20200930::Client::setUserProfilePathRulesWithOptions(shared_ptr<SetUserProfilePathRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetUserProfilePathRulesShrinkRequest> request = make_shared<SetUserProfilePathRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SetUserProfilePathRulesRequestUserProfilePathRule>>(tmpReq->userProfilePathRule)) {
    request->userProfilePathRuleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userProfilePathRule, make_shared<string>("UserProfilePathRule"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopGroupId)) {
    query->insert(pair<string, string>("DesktopGroupId", *request->desktopGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userProfilePathRuleShrink)) {
    query->insert(pair<string, string>("UserProfilePathRule", *request->userProfilePathRuleShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userProfileRuleType)) {
    query->insert(pair<string, string>("UserProfileRuleType", *request->userProfileRuleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetUserProfilePathRules"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetUserProfilePathRulesResponse(callApi(params, req, runtime));
}

SetUserProfilePathRulesResponse Alibabacloud_Ecd20200930::Client::setUserProfilePathRules(shared_ptr<SetUserProfilePathRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setUserProfilePathRulesWithOptions(request, runtime);
}

StartDesktopsResponse Alibabacloud_Ecd20200930::Client::startDesktopsWithOptions(shared_ptr<StartDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartDesktopsResponse(callApi(params, req, runtime));
}

StartDesktopsResponse Alibabacloud_Ecd20200930::Client::startDesktops(shared_ptr<StartDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDesktopsWithOptions(request, runtime);
}

StopDesktopsResponse Alibabacloud_Ecd20200930::Client::stopDesktopsWithOptions(shared_ptr<StopDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stoppedMode)) {
    query->insert(pair<string, string>("StoppedMode", *request->stoppedMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopDesktopsResponse(callApi(params, req, runtime));
}

StopDesktopsResponse Alibabacloud_Ecd20200930::Client::stopDesktops(shared_ptr<StopDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDesktopsWithOptions(request, runtime);
}

StopInvocationResponse Alibabacloud_Ecd20200930::Client::stopInvocationWithOptions(shared_ptr<StopInvocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invokeId)) {
    query->insert(pair<string, string>("InvokeId", *request->invokeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopInvocation"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopInvocationResponse(callApi(params, req, runtime));
}

StopInvocationResponse Alibabacloud_Ecd20200930::Client::stopInvocation(shared_ptr<StopInvocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInvocationWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Ecd20200930::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Ecd20200930::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnlockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::unlockVirtualMFADeviceWithOptions(shared_ptr<UnlockVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnlockVirtualMFADevice"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnlockVirtualMFADeviceResponse(callApi(params, req, runtime));
}

UnlockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::unlockVirtualMFADevice(shared_ptr<UnlockVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockVirtualMFADeviceWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Ecd20200930::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Ecd20200930::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateFotaTaskResponse Alibabacloud_Ecd20200930::Client::updateFotaTaskWithOptions(shared_ptr<UpdateFotaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskUid)) {
    query->insert(pair<string, string>("TaskUid", *request->taskUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userStatus)) {
    query->insert(pair<string, string>("UserStatus", *request->userStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFotaTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFotaTaskResponse(callApi(params, req, runtime));
}

UpdateFotaTaskResponse Alibabacloud_Ecd20200930::Client::updateFotaTask(shared_ptr<UpdateFotaTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFotaTaskWithOptions(request, runtime);
}

UploadImageResponse Alibabacloud_Ecd20200930::Client::uploadImageWithOptions(shared_ptr<UploadImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataDiskSize)) {
    query->insert(pair<string, long>("DataDiskSize", *request->dataDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSecurityCheck)) {
    query->insert(pair<string, bool>("EnableSecurityCheck", *request->enableSecurityCheck));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->gpuCategory)) {
    query->insert(pair<string, bool>("GpuCategory", *request->gpuCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gpuDriverType)) {
    query->insert(pair<string, string>("GpuDriverType", *request->gpuDriverType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("ImageName", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseType)) {
    query->insert(pair<string, string>("LicenseType", *request->licenseType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObjectPath)) {
    query->insert(pair<string, string>("OssObjectPath", *request->ossObjectPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocolType)) {
    query->insert(pair<string, string>("ProtocolType", *request->protocolType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadImage"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadImageResponse(callApi(params, req, runtime));
}

UploadImageResponse Alibabacloud_Ecd20200930::Client::uploadImage(shared_ptr<UploadImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadImageWithOptions(request, runtime);
}

VerifyCenResponse Alibabacloud_Ecd20200930::Client::verifyCenWithOptions(shared_ptr<VerifyCenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cenOwnerId)) {
    query->insert(pair<string, long>("CenOwnerId", *request->cenOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrBlock)) {
    query->insert(pair<string, string>("CidrBlock", *request->cidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyCode)) {
    query->insert(pair<string, string>("VerifyCode", *request->verifyCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyCen"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyCenResponse(callApi(params, req, runtime));
}

VerifyCenResponse Alibabacloud_Ecd20200930::Client::verifyCen(shared_ptr<VerifyCenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyCenWithOptions(request, runtime);
}

WakeupDesktopsResponse Alibabacloud_Ecd20200930::Client::wakeupDesktopsWithOptions(shared_ptr<WakeupDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->desktopId)) {
    query->insert(pair<string, vector<string>>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WakeupDesktops"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WakeupDesktopsResponse(callApi(params, req, runtime));
}

WakeupDesktopsResponse Alibabacloud_Ecd20200930::Client::wakeupDesktops(shared_ptr<WakeupDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return wakeupDesktopsWithOptions(request, runtime);
}

