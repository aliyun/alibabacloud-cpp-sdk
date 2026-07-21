#include <darabonba/Core.hpp>
#include <alibabacloud/Ecd20200930.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Ecd20200930::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ecd20200930
{

AlibabaCloud::Ecd20200930::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "ecd.us-west-1.aliyuncs.com"},
    {"us-east-1" , "ecd.us-east-1.aliyuncs.com"},
    {"me-east-1" , "ecd.me-east-1.aliyuncs.com"},
    {"me-central-1" , "ecd.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "ecd.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "ecd.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "ecd.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "ecd.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen" , "ecd.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "ecd.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "ecd.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "ecd.cn-qingdao.aliyuncs.com"},
    {"cn-nanjing" , "ecd.cn-nanjing.aliyuncs.com"},
    {"cn-hongkong" , "ecd.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou-finance" , "ecd.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-hangzhou" , "ecd.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "ecd.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "ecd.cn-chengdu.aliyuncs.com"},
    {"cn-beijing" , "ecd.cn-beijing.aliyuncs.com"},
    {"ap-southeast-7" , "ecd.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-6" , "ecd.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "ecd.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-1" , "ecd.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1" , "ecd.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Unlocks an office network that was automatically locked after being idle for a period of time.
 *
 * @description For office networks based on convenience accounts, if no cloud computers are created within 15 consecutive calendar days, the office network is automatically locked and VPC-related resources are released. To use the office network again, call this operation to unlock it.
 *
 * @param request ActivateOfficeSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateOfficeSiteResponse
 */
ActivateOfficeSiteResponse Client::activateOfficeSiteWithOptions(const ActivateOfficeSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActivateOfficeSite"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateOfficeSiteResponse>();
}

/**
 * @summary Unlocks an office network that was automatically locked after being idle for a period of time.
 *
 * @description For office networks based on convenience accounts, if no cloud computers are created within 15 consecutive calendar days, the office network is automatically locked and VPC-related resources are released. To use the office network again, call this operation to unlock it.
 *
 * @param request ActivateOfficeSiteRequest
 * @return ActivateOfficeSiteResponse
 */
ActivateOfficeSiteResponse Client::activateOfficeSite(const ActivateOfficeSiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateOfficeSiteWithOptions(request, runtime);
}

/**
 * @summary 添加桌面超卖用户组
 *
 * @param request AddDesktopOversoldUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDesktopOversoldUserGroupResponse
 */
AddDesktopOversoldUserGroupResponse Client::addDesktopOversoldUserGroupWithOptions(const AddDesktopOversoldUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDesktopOversoldUserGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDesktopOversoldUserGroupResponse>();
}

/**
 * @summary 添加桌面超卖用户组
 *
 * @param request AddDesktopOversoldUserGroupRequest
 * @return AddDesktopOversoldUserGroupResponse
 */
AddDesktopOversoldUserGroupResponse Client::addDesktopOversoldUserGroup(const AddDesktopOversoldUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDesktopOversoldUserGroupWithOptions(request, runtime);
}

/**
 * @summary Adds trusted devices.
 *
 * @description Each device can be registered in only one Alibaba Cloud account. If you register a device that has been registered in another Alibaba Cloud account, an error is reported.
 *
 * @param request AddDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDevicesResponse
 */
AddDevicesResponse Client::addDevicesWithOptions(const AddDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasDeviceIds()) {
    query["DeviceIds"] = request.getDeviceIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDevices"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDevicesResponse>();
}

/**
 * @summary Adds trusted devices.
 *
 * @description Each device can be registered in only one Alibaba Cloud account. If you register a device that has been registered in another Alibaba Cloud account, an error is reported.
 *
 * @param request AddDevicesRequest
 * @return AddDevicesResponse
 */
AddDevicesResponse Client::addDevices(const AddDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDevicesWithOptions(request, runtime);
}

/**
 * @summary Creates a shared folder in a cloud disk.
 *
 * @description You can share a specified folder with other users and set access permissions for the folder.
 *
 * @param tmpReq AddFilePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFilePermissionResponse
 */
AddFilePermissionResponse Client::addFilePermissionWithOptions(const AddFilePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddFilePermissionShrinkRequest request = AddFilePermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMemberList()) {
    request.setMemberListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMemberList(), "MemberList", "json"));
  }

  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMemberListShrink()) {
    query["MemberList"] = request.getMemberListShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFilePermission"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFilePermissionResponse>();
}

/**
 * @summary Creates a shared folder in a cloud disk.
 *
 * @description You can share a specified folder with other users and set access permissions for the folder.
 *
 * @param request AddFilePermissionRequest
 * @return AddFilePermissionResponse
 */
AddFilePermissionResponse Client::addFilePermission(const AddFilePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFilePermissionWithOptions(request, runtime);
}

/**
 * @summary Adds authorized users to a shared cloud desktop group, automatically assigning cloud desktops within the group to these users based on rules defined by an administrator.
 *
 * @param request AddUserToDesktopGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToDesktopGroupResponse
 */
AddUserToDesktopGroupResponse Client::addUserToDesktopGroupWithOptions(const AddUserToDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasDesktopGroupIds()) {
    query["DesktopGroupIds"] = request.getDesktopGroupIds();
  }

  if (!!request.hasEndUserIds()) {
    query["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.getOrgId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSimpleUserGroupId()) {
    query["SimpleUserGroupId"] = request.getSimpleUserGroupId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.getUserGroupName();
  }

  if (!!request.hasUserOuPath()) {
    query["UserOuPath"] = request.getUserOuPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserToDesktopGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserToDesktopGroupResponse>();
}

/**
 * @summary Adds authorized users to a shared cloud desktop group, automatically assigning cloud desktops within the group to these users based on rules defined by an administrator.
 *
 * @param request AddUserToDesktopGroupRequest
 * @return AddUserToDesktopGroupResponse
 */
AddUserToDesktopGroupResponse Client::addUserToDesktopGroup(const AddUserToDesktopGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToDesktopGroupWithOptions(request, runtime);
}

/**
 * @summary 添加用户到超卖用户组
 *
 * @param request AddUserToDesktopOversoldUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToDesktopOversoldUserGroupResponse
 */
AddUserToDesktopOversoldUserGroupResponse Client::addUserToDesktopOversoldUserGroupWithOptions(const AddUserToDesktopOversoldUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddUserAmount()) {
    query["AddUserAmount"] = request.getAddUserAmount();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserToDesktopOversoldUserGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserToDesktopOversoldUserGroupResponse>();
}

/**
 * @summary 添加用户到超卖用户组
 *
 * @param request AddUserToDesktopOversoldUserGroupRequest
 * @return AddUserToDesktopOversoldUserGroupResponse
 */
AddUserToDesktopOversoldUserGroupResponse Client::addUserToDesktopOversoldUserGroup(const AddUserToDesktopOversoldUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToDesktopOversoldUserGroupWithOptions(request, runtime);
}

/**
 * @summary 实例开通公网IP
 *
 * @param request AllocateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateIpAddressResponse
 */
AllocateIpAddressResponse Client::allocateIpAddressWithOptions(const AllocateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateIpAddress"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateIpAddressResponse>();
}

/**
 * @summary 实例开通公网IP
 *
 * @param request AllocateIpAddressRequest
 * @return AllocateIpAddressResponse
 */
AllocateIpAddressResponse Client::allocateIpAddress(const AllocateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateIpAddressWithOptions(request, runtime);
}

/**
 * @summary Apply an automatic snapshot policy to cloud computers. After the automatic snapshot policy is applied to the cloud computers, Elastic Desktop Service automatically creates snapshots for the cloud computers based on the time specified in the automatic snapshot policy.
 *
 * @description You can also associate an automatic snapshot policy with a cloud desktop in the Elastic Desktop Service (EDS) console. To do so, perform the following steps: 1. Log on to the EDS console. 2. Choose Desktops and Groups > Desktops in the left-side navigation pane. 3. Find the cloud desktop that you want to manage on the Cloud Desktops page and choose More > Change Automatic Snapshot Policy in the Actions column. 4. Configure a policy for the cloud desktop as prompted in the Change Automatic Snapshot Policy panel.
 * After you associate an automatic snapshot policy with the cloud desktop, the system creates snapshots for the cloud desktop based on the policy.
 *
 * @param request ApplyAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyAutoSnapshotPolicyResponse
 */
ApplyAutoSnapshotPolicyResponse Client::applyAutoSnapshotPolicyWithOptions(const ApplyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyAutoSnapshotPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyAutoSnapshotPolicyResponse>();
}

/**
 * @summary Apply an automatic snapshot policy to cloud computers. After the automatic snapshot policy is applied to the cloud computers, Elastic Desktop Service automatically creates snapshots for the cloud computers based on the time specified in the automatic snapshot policy.
 *
 * @description You can also associate an automatic snapshot policy with a cloud desktop in the Elastic Desktop Service (EDS) console. To do so, perform the following steps: 1. Log on to the EDS console. 2. Choose Desktops and Groups > Desktops in the left-side navigation pane. 3. Find the cloud desktop that you want to manage on the Cloud Desktops page and choose More > Change Automatic Snapshot Policy in the Actions column. 4. Configure a policy for the cloud desktop as prompted in the Change Automatic Snapshot Policy panel.
 * After you associate an automatic snapshot policy with the cloud desktop, the system creates snapshots for the cloud desktop based on the policy.
 *
 * @param request ApplyAutoSnapshotPolicyRequest
 * @return ApplyAutoSnapshotPolicyResponse
 */
ApplyAutoSnapshotPolicyResponse Client::applyAutoSnapshotPolicy(const ApplyAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Requests permissions for stream coordination operations.
 *
 * @param request ApplyCoordinatePrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyCoordinatePrivilegeResponse
 */
ApplyCoordinatePrivilegeResponse Client::applyCoordinatePrivilegeWithOptions(const ApplyCoordinatePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoId()) {
    query["CoId"] = request.getCoId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyCoordinatePrivilege"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyCoordinatePrivilegeResponse>();
}

/**
 * @summary Requests permissions for stream coordination operations.
 *
 * @param request ApplyCoordinatePrivilegeRequest
 * @return ApplyCoordinatePrivilegeResponse
 */
ApplyCoordinatePrivilegeResponse Client::applyCoordinatePrivilege(const ApplyCoordinatePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyCoordinatePrivilegeWithOptions(request, runtime);
}

/**
 * @summary Sends a remote assistance request from an administrator to an end user. This operation is mainly used in administrator assistance scenarios and education scenarios.
 *
 * @param request ApplyCoordinationForMonitoringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyCoordinationForMonitoringResponse
 */
ApplyCoordinationForMonitoringResponse Client::applyCoordinationForMonitoringWithOptions(const ApplyCoordinationForMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoordinatePolicyType()) {
    query["CoordinatePolicyType"] = request.getCoordinatePolicyType();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasInitiatorType()) {
    query["InitiatorType"] = request.getInitiatorType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceCandidates()) {
    query["ResourceCandidates"] = request.getResourceCandidates();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyCoordinationForMonitoring"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyCoordinationForMonitoringResponse>();
}

/**
 * @summary Sends a remote assistance request from an administrator to an end user. This operation is mainly used in administrator assistance scenarios and education scenarios.
 *
 * @param request ApplyCoordinationForMonitoringRequest
 * @return ApplyCoordinationForMonitoringResponse
 */
ApplyCoordinationForMonitoringResponse Client::applyCoordinationForMonitoring(const ApplyCoordinationForMonitoringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyCoordinationForMonitoringWithOptions(request, runtime);
}

/**
 * @summary Allows an image upgrade.
 *
 * @description The cloud computer must be in the Running state.
 *
 * @param request ApproveFotaUpdateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveFotaUpdateResponse
 */
ApproveFotaUpdateResponse Client::approveFotaUpdateWithOptions(const ApproveFotaUpdateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppVersion()) {
    query["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApproveFotaUpdate"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApproveFotaUpdateResponse>();
}

/**
 * @summary Allows an image upgrade.
 *
 * @description The cloud computer must be in the Running state.
 *
 * @param request ApproveFotaUpdateRequest
 * @return ApproveFotaUpdateResponse
 */
ApproveFotaUpdateResponse Client::approveFotaUpdate(const ApproveFotaUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveFotaUpdateWithOptions(request, runtime);
}

/**
 * @summary 实例绑定公网IP
 *
 * @param request AssociateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateIpAddressResponse
 */
AssociateIpAddressResponse Client::associateIpAddressWithOptions(const AssociateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEipId()) {
    query["EipId"] = request.getEipId();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasNetworkInterfaceId()) {
    query["NetworkInterfaceId"] = request.getNetworkInterfaceId();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateIpAddress"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateIpAddressResponse>();
}

/**
 * @summary 实例绑定公网IP
 *
 * @param request AssociateIpAddressRequest
 * @return AssociateIpAddressResponse
 */
AssociateIpAddressResponse Client::associateIpAddress(const AssociateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateIpAddressWithOptions(request, runtime);
}

/**
 * @summary Associates a premium Internet bandwidth plan with an office network. A premium Internet bandwidth plan has a one-to-one bindingrelationship with an office network.
 *
 * @param request AssociateNetworkPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateNetworkPackageResponse
 */
AssociateNetworkPackageResponse Client::associateNetworkPackageWithOptions(const AssociateNetworkPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkPackageId()) {
    query["NetworkPackageId"] = request.getNetworkPackageId();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateNetworkPackage"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateNetworkPackageResponse>();
}

/**
 * @summary Associates a premium Internet bandwidth plan with an office network. A premium Internet bandwidth plan has a one-to-one bindingrelationship with an office network.
 *
 * @param request AssociateNetworkPackageRequest
 * @return AssociateNetworkPackageResponse
 */
AssociateNetworkPackageResponse Client::associateNetworkPackage(const AssociateNetworkPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateNetworkPackageWithOptions(request, runtime);
}

/**
 * @summary 将创建的自定义路由表和同一VPC内的交换机绑定
 *
 * @param request AssociateRouteTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateRouteTableResponse
 */
AssociateRouteTableResponse Client::associateRouteTableWithOptions(const AssociateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateRouteTable"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateRouteTableResponse>();
}

/**
 * @summary 将创建的自定义路由表和同一VPC内的交换机绑定
 *
 * @param request AssociateRouteTableRequest
 * @return AssociateRouteTableResponse
 */
AssociateRouteTableResponse Client::associateRouteTable(const AssociateRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateRouteTableWithOptions(request, runtime);
}

/**
 * @summary Binds an advanced office network to a Cloud Enterprise Network (CEN) instance.
 *
 * @description Prerequisites
 * *   A CEN instance is created.
 * *   The office network is an advanced office network, and the account system type is convenient account.
 * >  The office network is added to the CEN instance when you create the instance. An office network can be added to only one CEN instance.
 *
 * @param request AttachCenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachCenResponse
 */
AttachCenResponse Client::attachCenWithOptions(const AttachCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenOwnerId()) {
    query["CenOwnerId"] = request.getCenOwnerId();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVerifyCode()) {
    query["VerifyCode"] = request.getVerifyCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachCen"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachCenResponse>();
}

/**
 * @summary Binds an advanced office network to a Cloud Enterprise Network (CEN) instance.
 *
 * @description Prerequisites
 * *   A CEN instance is created.
 * *   The office network is an advanced office network, and the account system type is convenient account.
 * >  The office network is added to the CEN instance when you create the instance. An office network can be added to only one CEN instance.
 *
 * @param request AttachCenRequest
 * @return AttachCenResponse
 */
AttachCenResponse Client::attachCen(const AttachCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachCenWithOptions(request, runtime);
}

/**
 * @summary Binds a hardware client to a user.
 *
 * @param request AttachEndUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachEndUserResponse
 */
AttachEndUserResponse Client::attachEndUserWithOptions(const AttachEndUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.getAdDomain();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachEndUser"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachEndUserResponse>();
}

/**
 * @summary Binds a hardware client to a user.
 *
 * @param request AttachEndUserRequest
 * @return AttachEndUserResponse
 */
AttachEndUserResponse Client::attachEndUser(const AttachEndUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachEndUserWithOptions(request, runtime);
}

/**
 * @summary Assigns users to multiple cloud computers in a batch.
 *
 * @description - The cloud computers must be in the Running state.
 * - This operation immediately returns a result. To check whether the assignment is successful, call [DescribeDesktops](https://help.aliyun.com/document_detail/436815.html) and check the `ManagementFlags` response parameter: `ASSIGNING` indicates that the assignment is in progress, and other values indicate that the assignment is complete.
 * - Check whether the assignment is complete every 2 to 5 seconds, for a maximum of 50 seconds. In most cases, the assignment is completed within 1 to 5 seconds.
 *
 * @param request BatchModifyEntitlementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchModifyEntitlementResponse
 */
BatchModifyEntitlementResponse Client::batchModifyEntitlementWithOptions(const BatchModifyEntitlementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasMaxDesktopPerUser()) {
    query["MaxDesktopPerUser"] = request.getMaxDesktopPerUser();
  }

  if (!!request.hasMaxUserPerDesktop()) {
    query["MaxUserPerDesktop"] = request.getMaxUserPerDesktop();
  }

  if (!!request.hasPreview()) {
    query["Preview"] = request.getPreview();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStrategy()) {
    query["Strategy"] = request.getStrategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchModifyEntitlement"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchModifyEntitlementResponse>();
}

/**
 * @summary Assigns users to multiple cloud computers in a batch.
 *
 * @description - The cloud computers must be in the Running state.
 * - This operation immediately returns a result. To check whether the assignment is successful, call [DescribeDesktops](https://help.aliyun.com/document_detail/436815.html) and check the `ManagementFlags` response parameter: `ASSIGNING` indicates that the assignment is in progress, and other values indicate that the assignment is complete.
 * - Check whether the assignment is complete every 2 to 5 seconds, for a maximum of 50 seconds. In most cases, the assignment is completed within 1 to 5 seconds.
 *
 * @param request BatchModifyEntitlementRequest
 * @return BatchModifyEntitlementResponse
 */
BatchModifyEntitlementResponse Client::batchModifyEntitlement(const BatchModifyEntitlementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchModifyEntitlementWithOptions(request, runtime);
}

/**
 * @summary Binds a configuration group to resources.
 *
 * @param request BindConfigGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindConfigGroupResponse
 */
BindConfigGroupResponse Client::bindConfigGroupWithOptions(const BindConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInfos()) {
    query["ResourceInfos"] = request.getResourceInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindConfigGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindConfigGroupResponse>();
}

/**
 * @summary Binds a configuration group to resources.
 *
 * @param request BindConfigGroupRequest
 * @return BindConfigGroupResponse
 */
BindConfigGroupResponse Client::bindConfigGroup(const BindConfigGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindConfigGroupWithOptions(request, runtime);
}

/**
 * @summary Cancels an automatic snapshot policy for cloud computers.
 *
 * @param request CancelAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAutoSnapshotPolicyResponse
 */
CancelAutoSnapshotPolicyResponse Client::cancelAutoSnapshotPolicyWithOptions(const CancelAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelAutoSnapshotPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAutoSnapshotPolicyResponse>();
}

/**
 * @summary Cancels an automatic snapshot policy for cloud computers.
 *
 * @param request CancelAutoSnapshotPolicyRequest
 * @return CancelAutoSnapshotPolicyResponse
 */
CancelAutoSnapshotPolicyResponse Client::cancelAutoSnapshotPolicy(const CancelAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Cancels file sharing.
 *
 * @param request CancelCdsFileShareLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCdsFileShareLinkResponse
 */
CancelCdsFileShareLinkResponse Client::cancelCdsFileShareLinkWithOptions(const CancelCdsFileShareLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasShareId()) {
    query["ShareId"] = request.getShareId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelCdsFileShareLink"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCdsFileShareLinkResponse>();
}

/**
 * @summary Cancels file sharing.
 *
 * @param request CancelCdsFileShareLinkRequest
 * @return CancelCdsFileShareLinkResponse
 */
CancelCdsFileShareLinkResponse Client::cancelCdsFileShareLink(const CancelCdsFileShareLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCdsFileShareLinkWithOptions(request, runtime);
}

/**
 * @summary Cancels a remote assistance request initiated to an end user.
 *
 * @param request CancelCoordinationForMonitoringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCoordinationForMonitoringResponse
 */
CancelCoordinationForMonitoringResponse Client::cancelCoordinationForMonitoringWithOptions(const CancelCoordinationForMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoIds()) {
    query["CoIds"] = request.getCoIds();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelCoordinationForMonitoring"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCoordinationForMonitoringResponse>();
}

/**
 * @summary Cancels a remote assistance request initiated to an end user.
 *
 * @param request CancelCoordinationForMonitoringRequest
 * @return CancelCoordinationForMonitoringResponse
 */
CancelCoordinationForMonitoringResponse Client::cancelCoordinationForMonitoring(const CancelCoordinationForMonitoringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCoordinationForMonitoringWithOptions(request, runtime);
}

/**
 * @summary Cancels an ongoing image copy operation to another region.
 *
 * @param request CancelCopyImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCopyImageResponse
 */
CancelCopyImageResponse Client::cancelCopyImageWithOptions(const CancelCopyImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelCopyImage"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCopyImageResponse>();
}

/**
 * @summary Cancels an ongoing image copy operation to another region.
 *
 * @param request CancelCopyImageRequest
 * @return CancelCopyImageResponse
 */
CancelCopyImageResponse Client::cancelCopyImage(const CancelCopyImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCopyImageWithOptions(request, runtime);
}

/**
 * @summary Clones a policy based on an existing region-independent policy.
 *
 * @param request CloneCenterPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneCenterPolicyResponse
 */
CloneCenterPolicyResponse Client::cloneCenterPolicyWithOptions(const CloneCenterPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloneCenterPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneCenterPolicyResponse>();
}

/**
 * @summary Clones a policy based on an existing region-independent policy.
 *
 * @param request CloneCenterPolicyRequest
 * @return CloneCenterPolicyResponse
 */
CloneCenterPolicyResponse Client::cloneCenterPolicy(const CloneCenterPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloneCenterPolicyWithOptions(request, runtime);
}

/**
 * @summary Clones a cloud computer policy to quickly create a custom cloud computer policy.
 *
 * @param request ClonePolicyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClonePolicyGroupResponse
 */
ClonePolicyGroupResponse Client::clonePolicyGroupWithOptions(const ClonePolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClonePolicyGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClonePolicyGroupResponse>();
}

/**
 * @summary Clones a cloud computer policy to quickly create a custom cloud computer policy.
 *
 * @param request ClonePolicyGroupRequest
 * @return ClonePolicyGroupResponse
 */
ClonePolicyGroupResponse Client::clonePolicyGroup(const ClonePolicyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clonePolicyGroupWithOptions(request, runtime);
}

/**
 * @summary After you create an object upload task, call this operation to upload the object.
 *
 * @param request CompleteCdsFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteCdsFileResponse
 */
CompleteCdsFileResponse Client::completeCdsFileWithOptions(const CompleteCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUploadId()) {
    query["UploadId"] = request.getUploadId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompleteCdsFile"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompleteCdsFileResponse>();
}

/**
 * @summary After you create an object upload task, call this operation to upload the object.
 *
 * @param request CompleteCdsFileRequest
 * @return CompleteCdsFileResponse
 */
CompleteCdsFileResponse Client::completeCdsFile(const CompleteCdsFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return completeCdsFileWithOptions(request, runtime);
}

/**
 * @summary Configures a trust relationship for an AD office network. For office networks (formerly workspaces) that use the HDX protocol, you must configure conditional forwarders and trust relationships before the networks can function properly.
 *
 * @param request ConfigADConnectorTrustRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigADConnectorTrustResponse
 */
ConfigADConnectorTrustResponse Client::configADConnectorTrustWithOptions(const ConfigADConnectorTrustRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRdsLicenseDomain()) {
    query["RdsLicenseDomain"] = request.getRdsLicenseDomain();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTrustKey()) {
    query["TrustKey"] = request.getTrustKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigADConnectorTrust"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigADConnectorTrustResponse>();
}

/**
 * @summary Configures a trust relationship for an AD office network. For office networks (formerly workspaces) that use the HDX protocol, you must configure conditional forwarders and trust relationships before the networks can function properly.
 *
 * @param request ConfigADConnectorTrustRequest
 * @return ConfigADConnectorTrustResponse
 */
ConfigADConnectorTrustResponse Client::configADConnectorTrust(const ConfigADConnectorTrustRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configADConnectorTrustWithOptions(request, runtime);
}

/**
 * @summary Specifies the organizational unit (OU) and administrator for an AD office network (formerly workspace).
 *
 * @param request ConfigADConnectorUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigADConnectorUserResponse
 */
ConfigADConnectorUserResponse Client::configADConnectorUserWithOptions(const ConfigADConnectorUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainPassword()) {
    query["DomainPassword"] = request.getDomainPassword();
  }

  if (!!request.hasDomainUserName()) {
    query["DomainUserName"] = request.getDomainUserName();
  }

  if (!!request.hasOUName()) {
    query["OUName"] = request.getOUName();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigADConnectorUser"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigADConnectorUserResponse>();
}

/**
 * @summary Specifies the organizational unit (OU) and administrator for an AD office network (formerly workspace).
 *
 * @param request ConfigADConnectorUserRequest
 * @return ConfigADConnectorUserResponse
 */
ConfigADConnectorUserResponse Client::configADConnectorUser(const ConfigADConnectorUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configADConnectorUserWithOptions(request, runtime);
}

/**
 * @summary Creates a copy of a file or folder in a cloud drive.
 *
 * @param request CopyCdsFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyCdsFileResponse
 */
CopyCdsFileResponse Client::copyCdsFileWithOptions(const CopyCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRename()) {
    query["AutoRename"] = request.getAutoRename();
  }

  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasFileReceiverId()) {
    query["FileReceiverId"] = request.getFileReceiverId();
  }

  if (!!request.hasFileReceiverType()) {
    query["FileReceiverType"] = request.getFileReceiverType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.getParentFolderId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyCdsFile"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyCdsFileResponse>();
}

/**
 * @summary Creates a copy of a file or folder in a cloud drive.
 *
 * @param request CopyCdsFileRequest
 * @return CopyCdsFileResponse
 */
CopyCdsFileResponse Client::copyCdsFile(const CopyCdsFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyCdsFileWithOptions(request, runtime);
}

/**
 * @summary Copies an image to another region. To share an image across regions, call this operation to copy the image to the destination region first, and then share it.
 *
 * @param request CopyImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyImageResponse
 */
CopyImageResponse Client::copyImageWithOptions(const CopyImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationDescription()) {
    query["DestinationDescription"] = request.getDestinationDescription();
  }

  if (!!request.hasDestinationImageName()) {
    query["DestinationImageName"] = request.getDestinationImageName();
  }

  if (!!request.hasDestinationRegionId()) {
    query["DestinationRegionId"] = request.getDestinationRegionId();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyImage"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyImageResponse>();
}

/**
 * @summary Copies an image to another region. To share an image across regions, call this operation to copy the image to the destination region first, and then share it.
 *
 * @param request CopyImageRequest
 * @return CopyImageResponse
 */
CopyImageResponse Client::copyImage(const CopyImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyImageWithOptions(request, runtime);
}

/**
 * @summary Creates a directory of the Active Directory (AD) type.
 *
 * @description An AD directory is used to connect to an enterprise\\"s existing Active Directory and is suitable for large-scale cloud computer deployment. You are charged directory fees when you connect your AD to cloud computers. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188395.html).
 *
 * @param request CreateADConnectorDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateADConnectorDirectoryResponse
 */
CreateADConnectorDirectoryResponse Client::createADConnectorDirectoryWithOptions(const CreateADConnectorDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopAccessType()) {
    query["DesktopAccessType"] = request.getDesktopAccessType();
  }

  if (!!request.hasDirectoryName()) {
    query["DirectoryName"] = request.getDirectoryName();
  }

  if (!!request.hasDnsAddress()) {
    query["DnsAddress"] = request.getDnsAddress();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainPassword()) {
    query["DomainPassword"] = request.getDomainPassword();
  }

  if (!!request.hasDomainUserName()) {
    query["DomainUserName"] = request.getDomainUserName();
  }

  if (!!request.hasEnableAdminAccess()) {
    query["EnableAdminAccess"] = request.getEnableAdminAccess();
  }

  if (!!request.hasMfaEnabled()) {
    query["MfaEnabled"] = request.getMfaEnabled();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
  }

  if (!!request.hasSubDomainDnsAddress()) {
    query["SubDomainDnsAddress"] = request.getSubDomainDnsAddress();
  }

  if (!!request.hasSubDomainName()) {
    query["SubDomainName"] = request.getSubDomainName();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateADConnectorDirectory"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateADConnectorDirectoryResponse>();
}

/**
 * @summary Creates a directory of the Active Directory (AD) type.
 *
 * @description An AD directory is used to connect to an enterprise\\"s existing Active Directory and is suitable for large-scale cloud computer deployment. You are charged directory fees when you connect your AD to cloud computers. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188395.html).
 *
 * @param request CreateADConnectorDirectoryRequest
 * @return CreateADConnectorDirectoryResponse
 */
CreateADConnectorDirectoryResponse Client::createADConnectorDirectory(const CreateADConnectorDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createADConnectorDirectoryWithOptions(request, runtime);
}

/**
 * @summary WUYING Workspace supports two account types: convenience accounts and Enterprise AD accounts. This operation creates an office network (formerly known as a workspace) for Enterprise AD accounts.
 *
 * @description When you create an AD office network, an AD Connector is automatically created to connect to your enterprise AD. You are charged for the AD Connector. For more information, see [billing overview](https://help.aliyun.com/document_detail/188395.html).
 * After creating an AD office network, you must also configure the AD domain. Follow these steps:
 * 1. Configure a conditional forwarder on your DNS server.
 * 2. Establish a trust relationship on your domain controller, and then call [ConfigADConnectorTrust](https://help.aliyun.com/document_detail/311258.html) to configure this trust for the AD office network.
 * 3. Call [ListUserAdOrganizationUnits](https://help.aliyun.com/document_detail/311259.html) to list the organizational units (OUs) in your AD domain. Then, call [ConfigADConnectorUser](https://help.aliyun.com/document_detail/311262.html) to specify the OUs and an administrator for the AD office network.
 *    > If you provide domain administrator credentials (DomainUserName and DomainPassword) when you create the AD office network, you only need to configure a conditional forwarder. If you do not provide these credentials, you must configure a conditional forwarder, establish a trust relationship, and specify the organizational units (OUs).
 * For more information, see [Create and manage office networks for enterprise AD accounts](https://help.aliyun.com/document_detail/214469.html).
 *
 * @param request CreateADConnectorOfficeSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateADConnectorOfficeSiteResponse
 */
CreateADConnectorOfficeSiteResponse Client::createADConnectorOfficeSiteWithOptions(const CreateADConnectorOfficeSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessAttribute()) {
    query["AccessAttribute"] = request.getAccessAttribute();
  }

  if (!!request.hasAdHostname()) {
    query["AdHostname"] = request.getAdHostname();
  }

  if (!!request.hasBackupDCHostname()) {
    query["BackupDCHostname"] = request.getBackupDCHostname();
  }

  if (!!request.hasBackupDns()) {
    query["BackupDns"] = request.getBackupDns();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenOwnerId()) {
    query["CenOwnerId"] = request.getCenOwnerId();
  }

  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasDesktopAccessType()) {
    query["DesktopAccessType"] = request.getDesktopAccessType();
  }

  if (!!request.hasDnsAddress()) {
    query["DnsAddress"] = request.getDnsAddress();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainPassword()) {
    query["DomainPassword"] = request.getDomainPassword();
  }

  if (!!request.hasDomainUserName()) {
    query["DomainUserName"] = request.getDomainUserName();
  }

  if (!!request.hasEnableAdminAccess()) {
    query["EnableAdminAccess"] = request.getEnableAdminAccess();
  }

  if (!!request.hasEnableInternetAccess()) {
    query["EnableInternetAccess"] = request.getEnableInternetAccess();
  }

  if (!!request.hasMfaEnabled()) {
    query["MfaEnabled"] = request.getMfaEnabled();
  }

  if (!!request.hasOfficeSiteName()) {
    query["OfficeSiteName"] = request.getOfficeSiteName();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
  }

  if (!!request.hasSubDomainDnsAddress()) {
    query["SubDomainDnsAddress"] = request.getSubDomainDnsAddress();
  }

  if (!!request.hasSubDomainName()) {
    query["SubDomainName"] = request.getSubDomainName();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVerifyCode()) {
    query["VerifyCode"] = request.getVerifyCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateADConnectorOfficeSite"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateADConnectorOfficeSiteResponse>();
}

/**
 * @summary WUYING Workspace supports two account types: convenience accounts and Enterprise AD accounts. This operation creates an office network (formerly known as a workspace) for Enterprise AD accounts.
 *
 * @description When you create an AD office network, an AD Connector is automatically created to connect to your enterprise AD. You are charged for the AD Connector. For more information, see [billing overview](https://help.aliyun.com/document_detail/188395.html).
 * After creating an AD office network, you must also configure the AD domain. Follow these steps:
 * 1. Configure a conditional forwarder on your DNS server.
 * 2. Establish a trust relationship on your domain controller, and then call [ConfigADConnectorTrust](https://help.aliyun.com/document_detail/311258.html) to configure this trust for the AD office network.
 * 3. Call [ListUserAdOrganizationUnits](https://help.aliyun.com/document_detail/311259.html) to list the organizational units (OUs) in your AD domain. Then, call [ConfigADConnectorUser](https://help.aliyun.com/document_detail/311262.html) to specify the OUs and an administrator for the AD office network.
 *    > If you provide domain administrator credentials (DomainUserName and DomainPassword) when you create the AD office network, you only need to configure a conditional forwarder. If you do not provide these credentials, you must configure a conditional forwarder, establish a trust relationship, and specify the organizational units (OUs).
 * For more information, see [Create and manage office networks for enterprise AD accounts](https://help.aliyun.com/document_detail/214469.html).
 *
 * @param request CreateADConnectorOfficeSiteRequest
 * @return CreateADConnectorOfficeSiteResponse
 */
CreateADConnectorOfficeSiteResponse Client::createADConnectorOfficeSite(const CreateADConnectorOfficeSiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createADConnectorOfficeSiteWithOptions(request, runtime);
}

/**
 * @summary Creates a NAS file system and binds it to the office network of a shared cloud computer.
 *
 * @param request CreateAndBindNasFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAndBindNasFileSystemResponse
 */
CreateAndBindNasFileSystemResponse Client::createAndBindNasFileSystemWithOptions(const CreateAndBindNasFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.getEncryptType();
  }

  if (!!request.hasEndUserIds()) {
    query["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasFileSystemName()) {
    query["FileSystemName"] = request.getFileSystemName();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAndBindNasFileSystem"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAndBindNasFileSystemResponse>();
}

/**
 * @summary Creates a NAS file system and binds it to the office network of a shared cloud computer.
 *
 * @param request CreateAndBindNasFileSystemRequest
 * @return CreateAndBindNasFileSystemResponse
 */
CreateAndBindNasFileSystemResponse Client::createAndBindNasFileSystem(const CreateAndBindNasFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAndBindNasFileSystemWithOptions(request, runtime);
}

/**
 * @summary Creates an automatic snapshot policy that schedules snapshots for WUYING Workspace based on a cron expression.
 *
 * @param request CreateAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoSnapshotPolicyResponse
 */
CreateAutoSnapshotPolicyResponse Client::createAutoSnapshotPolicyWithOptions(const CreateAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.getCronExpression();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRetentionDays()) {
    query["RetentionDays"] = request.getRetentionDays();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAutoSnapshotPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAutoSnapshotPolicyResponse>();
}

/**
 * @summary Creates an automatic snapshot policy that schedules snapshots for WUYING Workspace based on a cron expression.
 *
 * @param request CreateAutoSnapshotPolicyRequest
 * @return CreateAutoSnapshotPolicyResponse
 */
CreateAutoSnapshotPolicyResponse Client::createAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates data transfer plans.
 *
 * @param request CreateBandwidthResourcePackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBandwidthResourcePackagesResponse
 */
CreateBandwidthResourcePackagesResponse Client::createBandwidthResourcePackagesWithOptions(const CreateBandwidthResourcePackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasPackageSize()) {
    query["PackageSize"] = request.getPackageSize();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBandwidthResourcePackages"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBandwidthResourcePackagesResponse>();
}

/**
 * @summary Creates data transfer plans.
 *
 * @param request CreateBandwidthResourcePackagesRequest
 * @return CreateBandwidthResourcePackagesResponse
 */
CreateBandwidthResourcePackagesResponse Client::createBandwidthResourcePackages(const CreateBandwidthResourcePackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBandwidthResourcePackagesWithOptions(request, runtime);
}

/**
 * @summary Creates a custom cloud computer template.
 *
 * @description Cloud computer templates include system templates and custom templates. A system template is the default template provided by Alibaba Cloud. You can call this operation to create a custom template.
 *
 * @param request CreateBundleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBundleResponse
 */
CreateBundleResponse Client::createBundleWithOptions(const CreateBundleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBundleName()) {
    query["BundleName"] = request.getBundleName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDesktopType()) {
    query["DesktopType"] = request.getDesktopType();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRootDiskPerformanceLevel()) {
    query["RootDiskPerformanceLevel"] = request.getRootDiskPerformanceLevel();
  }

  if (!!request.hasRootDiskSizeGib()) {
    query["RootDiskSizeGib"] = request.getRootDiskSizeGib();
  }

  if (!!request.hasUserDiskPerformanceLevel()) {
    query["UserDiskPerformanceLevel"] = request.getUserDiskPerformanceLevel();
  }

  if (!!request.hasUserDiskSizeGib()) {
    query["UserDiskSizeGib"] = request.getUserDiskSizeGib();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBundle"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBundleResponse>();
}

/**
 * @summary Creates a custom cloud computer template.
 *
 * @description Cloud computer templates include system templates and custom templates. A system template is the default template provided by Alibaba Cloud. You can call this operation to create a custom template.
 *
 * @param request CreateBundleRequest
 * @return CreateBundleResponse
 */
CreateBundleResponse Client::createBundle(const CreateBundleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBundleWithOptions(request, runtime);
}

/**
 * @summary Create a folder or initiate a file upload task in the cloud disk.
 *
 * @description Call this API to create a folder directly in the enterprise cloud disk. To upload a file, call this API to obtain an upload URL. Then use that URL with the [CompleteCdsFile](https://help.aliyun.com/document_detail/2247620.html) API to complete the upload.
 *
 * @param request CreateCdsFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCdsFileResponse
 */
CreateCdsFileResponse Client::createCdsFileWithOptions(const CreateCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasConflictPolicy()) {
    query["ConflictPolicy"] = request.getConflictPolicy();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileHash()) {
    query["FileHash"] = request.getFileHash();
  }

  if (!!request.hasFileLength()) {
    query["FileLength"] = request.getFileLength();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasParentFileId()) {
    query["ParentFileId"] = request.getParentFileId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCdsFile"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCdsFileResponse>();
}

/**
 * @summary Create a folder or initiate a file upload task in the cloud disk.
 *
 * @description Call this API to create a folder directly in the enterprise cloud disk. To upload a file, call this API to obtain an upload URL. Then use that URL with the [CompleteCdsFile](https://help.aliyun.com/document_detail/2247620.html) API to complete the upload.
 *
 * @param request CreateCdsFileRequest
 * @return CreateCdsFileResponse
 */
CreateCdsFileResponse Client::createCdsFile(const CreateCdsFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCdsFileWithOptions(request, runtime);
}

/**
 * @summary Creates a file share.
 *
 * @param request CreateCdsFileShareLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCdsFileShareLinkResponse
 */
CreateCdsFileShareLinkResponse Client::createCdsFileShareLinkWithOptions(const CreateCdsFileShareLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisableDownload()) {
    query["DisableDownload"] = request.getDisableDownload();
  }

  if (!!request.hasDisablePreview()) {
    query["DisablePreview"] = request.getDisablePreview();
  }

  if (!!request.hasDisableSave()) {
    query["DisableSave"] = request.getDisableSave();
  }

  if (!!request.hasDownloadLimit()) {
    query["DownloadLimit"] = request.getDownloadLimit();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasFileIds()) {
    query["FileIds"] = request.getFileIds();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPreviewLimit()) {
    query["PreviewLimit"] = request.getPreviewLimit();
  }

  if (!!request.hasSaveLimit()) {
    query["SaveLimit"] = request.getSaveLimit();
  }

  if (!!request.hasShareName()) {
    query["ShareName"] = request.getShareName();
  }

  if (!!request.hasSharePwd()) {
    query["SharePwd"] = request.getSharePwd();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCdsFileShareLink"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCdsFileShareLinkResponse>();
}

/**
 * @summary Creates a file share.
 *
 * @param request CreateCdsFileShareLinkRequest
 * @return CreateCdsFileShareLinkResponse
 */
CreateCdsFileShareLinkResponse Client::createCdsFileShareLink(const CreateCdsFileShareLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCdsFileShareLinkWithOptions(request, runtime);
}

/**
 * @summary Creates a region-independent Cloud Desktop policy.
 *
 * @param request CreateCenterPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCenterPolicyResponse
 */
CreateCenterPolicyResponse Client::createCenterPolicyWithOptions(const CreateCenterPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcademicProxy()) {
    query["AcademicProxy"] = request.getAcademicProxy();
  }

  if (!!request.hasAdminAccess()) {
    query["AdminAccess"] = request.getAdminAccess();
  }

  if (!!request.hasAdminKeyboardOnFullScreen()) {
    query["AdminKeyboardOnFullScreen"] = request.getAdminKeyboardOnFullScreen();
  }

  if (!!request.hasAdminKeyboardOnWindows()) {
    query["AdminKeyboardOnWindows"] = request.getAdminKeyboardOnWindows();
  }

  if (!!request.hasAppContentProtection()) {
    query["AppContentProtection"] = request.getAppContentProtection();
  }

  if (!!request.hasAuthorizeAccessPolicyRule()) {
    query["AuthorizeAccessPolicyRule"] = request.getAuthorizeAccessPolicyRule();
  }

  if (!!request.hasAuthorizeSecurityPolicyRule()) {
    query["AuthorizeSecurityPolicyRule"] = request.getAuthorizeSecurityPolicyRule();
  }

  if (!!request.hasAutoReconnect()) {
    query["AutoReconnect"] = request.getAutoReconnect();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasCameraRedirect()) {
    query["CameraRedirect"] = request.getCameraRedirect();
  }

  if (!!request.hasClientControlMenu()) {
    query["ClientControlMenu"] = request.getClientControlMenu();
  }

  if (!!request.hasClientCreateSnapshot()) {
    query["ClientCreateSnapshot"] = request.getClientCreateSnapshot();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasClipboard()) {
    query["Clipboard"] = request.getClipboard();
  }

  if (!!request.hasClipboardGraineds()) {
    query["ClipboardGraineds"] = request.getClipboardGraineds();
  }

  if (!!request.hasClipboardScope()) {
    query["ClipboardScope"] = request.getClipboardScope();
  }

  if (!!request.hasColorEnhancement()) {
    query["ColorEnhancement"] = request.getColorEnhancement();
  }

  if (!!request.hasCpdDriveClipboard()) {
    query["CpdDriveClipboard"] = request.getCpdDriveClipboard();
  }

  if (!!request.hasCpuDownGradeDuration()) {
    query["CpuDownGradeDuration"] = request.getCpuDownGradeDuration();
  }

  if (!!request.hasCpuOverload()) {
    query["CpuOverload"] = request.getCpuOverload();
  }

  if (!!request.hasCpuProcessors()) {
    query["CpuProcessors"] = request.getCpuProcessors();
  }

  if (!!request.hasCpuProtectedMode()) {
    query["CpuProtectedMode"] = request.getCpuProtectedMode();
  }

  if (!!request.hasCpuRateLimit()) {
    query["CpuRateLimit"] = request.getCpuRateLimit();
  }

  if (!!request.hasCpuSampleDuration()) {
    query["CpuSampleDuration"] = request.getCpuSampleDuration();
  }

  if (!!request.hasCpuSingleRateLimit()) {
    query["CpuSingleRateLimit"] = request.getCpuSingleRateLimit();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDeviceConnectHint()) {
    query["DeviceConnectHint"] = request.getDeviceConnectHint();
  }

  if (!!request.hasDeviceRedirects()) {
    query["DeviceRedirects"] = request.getDeviceRedirects();
  }

  if (!!request.hasDeviceRules()) {
    query["DeviceRules"] = request.getDeviceRules();
  }

  if (!!request.hasDisconnectKeepSession()) {
    query["DisconnectKeepSession"] = request.getDisconnectKeepSession();
  }

  if (!!request.hasDisconnectKeepSessionTime()) {
    query["DisconnectKeepSessionTime"] = request.getDisconnectKeepSessionTime();
  }

  if (!!request.hasDiskOverload()) {
    query["DiskOverload"] = request.getDiskOverload();
  }

  if (!!request.hasDisplayMode()) {
    query["DisplayMode"] = request.getDisplayMode();
  }

  if (!!request.hasDomainResolveRule()) {
    query["DomainResolveRule"] = request.getDomainResolveRule();
  }

  if (!!request.hasDomainResolveRuleType()) {
    query["DomainResolveRuleType"] = request.getDomainResolveRuleType();
  }

  if (!!request.hasEnableSessionRateLimiting()) {
    query["EnableSessionRateLimiting"] = request.getEnableSessionRateLimiting();
  }

  if (!!request.hasEndUserApplyAdminCoordinate()) {
    query["EndUserApplyAdminCoordinate"] = request.getEndUserApplyAdminCoordinate();
  }

  if (!!request.hasEndUserGroupCoordinate()) {
    query["EndUserGroupCoordinate"] = request.getEndUserGroupCoordinate();
  }

  if (!!request.hasExternalDrive()) {
    query["ExternalDrive"] = request.getExternalDrive();
  }

  if (!!request.hasFileMigrate()) {
    query["FileMigrate"] = request.getFileMigrate();
  }

  if (!!request.hasFileTransferAddress()) {
    query["FileTransferAddress"] = request.getFileTransferAddress();
  }

  if (!!request.hasFileTransferInSize()) {
    query["FileTransferInSize"] = request.getFileTransferInSize();
  }

  if (!!request.hasFileTransferInUnit()) {
    query["FileTransferInUnit"] = request.getFileTransferInUnit();
  }

  if (!!request.hasFileTransferOutSize()) {
    query["FileTransferOutSize"] = request.getFileTransferOutSize();
  }

  if (!!request.hasFileTransferOutUnit()) {
    query["FileTransferOutUnit"] = request.getFileTransferOutUnit();
  }

  if (!!request.hasFileTransferSizeLimit()) {
    query["FileTransferSizeLimit"] = request.getFileTransferSizeLimit();
  }

  if (!!request.hasFileTransferSpeed()) {
    query["FileTransferSpeed"] = request.getFileTransferSpeed();
  }

  if (!!request.hasFileTransferSpeedLocation()) {
    query["FileTransferSpeedLocation"] = request.getFileTransferSpeedLocation();
  }

  if (!!request.hasGpuAcceleration()) {
    query["GpuAcceleration"] = request.getGpuAcceleration();
  }

  if (!!request.hasHoverConfigMsg()) {
    query["HoverConfigMsg"] = request.getHoverConfigMsg();
  }

  if (!!request.hasHtml5FileTransfer()) {
    query["Html5FileTransfer"] = request.getHtml5FileTransfer();
  }

  if (!!request.hasInternetCommunicationProtocol()) {
    query["InternetCommunicationProtocol"] = request.getInternetCommunicationProtocol();
  }

  if (!!request.hasInternetPrinter()) {
    query["InternetPrinter"] = request.getInternetPrinter();
  }

  if (!!request.hasKeyboardControl()) {
    query["KeyboardControl"] = request.getKeyboardControl();
  }

  if (!!request.hasLocalDrive()) {
    query["LocalDrive"] = request.getLocalDrive();
  }

  if (!!request.hasMaxReconnectTime()) {
    query["MaxReconnectTime"] = request.getMaxReconnectTime();
  }

  if (!!request.hasMemoryDownGradeDuration()) {
    query["MemoryDownGradeDuration"] = request.getMemoryDownGradeDuration();
  }

  if (!!request.hasMemoryOverload()) {
    query["MemoryOverload"] = request.getMemoryOverload();
  }

  if (!!request.hasMemoryProcessors()) {
    query["MemoryProcessors"] = request.getMemoryProcessors();
  }

  if (!!request.hasMemoryProtectedMode()) {
    query["MemoryProtectedMode"] = request.getMemoryProtectedMode();
  }

  if (!!request.hasMemoryRateLimit()) {
    query["MemoryRateLimit"] = request.getMemoryRateLimit();
  }

  if (!!request.hasMemorySampleDuration()) {
    query["MemorySampleDuration"] = request.getMemorySampleDuration();
  }

  if (!!request.hasMemorySingleRateLimit()) {
    query["MemorySingleRateLimit"] = request.getMemorySingleRateLimit();
  }

  if (!!request.hasMobileRestart()) {
    query["MobileRestart"] = request.getMobileRestart();
  }

  if (!!request.hasMobileSafeMenu()) {
    query["MobileSafeMenu"] = request.getMobileSafeMenu();
  }

  if (!!request.hasMobileShutdown()) {
    query["MobileShutdown"] = request.getMobileShutdown();
  }

  if (!!request.hasMobileWuyingKeeper()) {
    query["MobileWuyingKeeper"] = request.getMobileWuyingKeeper();
  }

  if (!!request.hasMobileWyAssistant()) {
    query["MobileWyAssistant"] = request.getMobileWyAssistant();
  }

  if (!!request.hasModelLibrary()) {
    query["ModelLibrary"] = request.getModelLibrary();
  }

  if (!!request.hasMultiScreen()) {
    query["MultiScreen"] = request.getMultiScreen();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNetRedirect()) {
    query["NetRedirect"] = request.getNetRedirect();
  }

  if (!!request.hasNetRedirectRule()) {
    query["NetRedirectRule"] = request.getNetRedirectRule();
  }

  if (!!request.hasNoOperationDisconnect()) {
    query["NoOperationDisconnect"] = request.getNoOperationDisconnect();
  }

  if (!!request.hasNoOperationDisconnectTime()) {
    query["NoOperationDisconnectTime"] = request.getNoOperationDisconnectTime();
  }

  if (!!request.hasPortProxy()) {
    query["PortProxy"] = request.getPortProxy();
  }

  if (!!request.hasPrinterRedirect()) {
    query["PrinterRedirect"] = request.getPrinterRedirect();
  }

  if (!!request.hasQualityEnhancement()) {
    query["QualityEnhancement"] = request.getQualityEnhancement();
  }

  if (!!request.hasRecordEventDuration()) {
    query["RecordEventDuration"] = request.getRecordEventDuration();
  }

  if (!!request.hasRecordEventFileExts()) {
    query["RecordEventFileExts"] = request.getRecordEventFileExts();
  }

  if (!!request.hasRecordEventFilePaths()) {
    query["RecordEventFilePaths"] = request.getRecordEventFilePaths();
  }

  if (!!request.hasRecordEventLevels()) {
    query["RecordEventLevels"] = request.getRecordEventLevels();
  }

  if (!!request.hasRecordEventRegisters()) {
    query["RecordEventRegisters"] = request.getRecordEventRegisters();
  }

  if (!!request.hasRecordEvents()) {
    query["RecordEvents"] = request.getRecordEvents();
  }

  if (!!request.hasRecording()) {
    query["Recording"] = request.getRecording();
  }

  if (!!request.hasRecordingAudio()) {
    query["RecordingAudio"] = request.getRecordingAudio();
  }

  if (!!request.hasRecordingDuration()) {
    query["RecordingDuration"] = request.getRecordingDuration();
  }

  if (!!request.hasRecordingEndTime()) {
    query["RecordingEndTime"] = request.getRecordingEndTime();
  }

  if (!!request.hasRecordingExpires()) {
    query["RecordingExpires"] = request.getRecordingExpires();
  }

  if (!!request.hasRecordingFps()) {
    query["RecordingFps"] = request.getRecordingFps();
  }

  if (!!request.hasRecordingStartTime()) {
    query["RecordingStartTime"] = request.getRecordingStartTime();
  }

  if (!!request.hasRecordingUserNotify()) {
    query["RecordingUserNotify"] = request.getRecordingUserNotify();
  }

  if (!!request.hasRecordingUserNotifyMessage()) {
    query["RecordingUserNotifyMessage"] = request.getRecordingUserNotifyMessage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoteCoordinate()) {
    query["RemoteCoordinate"] = request.getRemoteCoordinate();
  }

  if (!!request.hasResetDesktop()) {
    query["ResetDesktop"] = request.getResetDesktop();
  }

  if (!!request.hasResolutionDpi()) {
    query["ResolutionDpi"] = request.getResolutionDpi();
  }

  if (!!request.hasResolutionHeight()) {
    query["ResolutionHeight"] = request.getResolutionHeight();
  }

  if (!!request.hasResolutionModel()) {
    query["ResolutionModel"] = request.getResolutionModel();
  }

  if (!!request.hasResolutionWidth()) {
    query["ResolutionWidth"] = request.getResolutionWidth();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSafeMenu()) {
    query["SafeMenu"] = request.getSafeMenu();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasScopeValue()) {
    query["ScopeValue"] = request.getScopeValue();
  }

  if (!!request.hasScreenDisplayMode()) {
    query["ScreenDisplayMode"] = request.getScreenDisplayMode();
  }

  if (!!request.hasSessionMaxRateKbps()) {
    query["SessionMaxRateKbps"] = request.getSessionMaxRateKbps();
  }

  if (!!request.hasSmoothEnhancement()) {
    query["SmoothEnhancement"] = request.getSmoothEnhancement();
  }

  if (!!request.hasStatusMonitor()) {
    query["StatusMonitor"] = request.getStatusMonitor();
  }

  if (!!request.hasStreamingMode()) {
    query["StreamingMode"] = request.getStreamingMode();
  }

  if (!!request.hasTargetFps()) {
    query["TargetFps"] = request.getTargetFps();
  }

  if (!!request.hasTaskbar()) {
    query["Taskbar"] = request.getTaskbar();
  }

  if (!!request.hasUsbRedirect()) {
    query["UsbRedirect"] = request.getUsbRedirect();
  }

  if (!!request.hasUsbSupplyRedirectRule()) {
    query["UsbSupplyRedirectRule"] = request.getUsbSupplyRedirectRule();
  }

  if (!!request.hasUseTime()) {
    query["UseTime"] = request.getUseTime();
  }

  if (!!request.hasVideoEncAvgKbps()) {
    query["VideoEncAvgKbps"] = request.getVideoEncAvgKbps();
  }

  if (!!request.hasVideoEncMaxQP()) {
    query["VideoEncMaxQP"] = request.getVideoEncMaxQP();
  }

  if (!!request.hasVideoEncMinQP()) {
    query["VideoEncMinQP"] = request.getVideoEncMinQP();
  }

  if (!!request.hasVideoEncPeakKbps()) {
    query["VideoEncPeakKbps"] = request.getVideoEncPeakKbps();
  }

  if (!!request.hasVideoEncPolicy()) {
    query["VideoEncPolicy"] = request.getVideoEncPolicy();
  }

  if (!!request.hasVideoRedirect()) {
    query["VideoRedirect"] = request.getVideoRedirect();
  }

  if (!!request.hasVisualQuality()) {
    query["VisualQuality"] = request.getVisualQuality();
  }

  if (!!request.hasWatermark()) {
    query["Watermark"] = request.getWatermark();
  }

  if (!!request.hasWatermarkAntiCam()) {
    query["WatermarkAntiCam"] = request.getWatermarkAntiCam();
  }

  if (!!request.hasWatermarkColor()) {
    query["WatermarkColor"] = request.getWatermarkColor();
  }

  if (!!request.hasWatermarkColumnAmount()) {
    query["WatermarkColumnAmount"] = request.getWatermarkColumnAmount();
  }

  if (!!request.hasWatermarkCustomText()) {
    query["WatermarkCustomText"] = request.getWatermarkCustomText();
  }

  if (!!request.hasWatermarkDegree()) {
    query["WatermarkDegree"] = request.getWatermarkDegree();
  }

  if (!!request.hasWatermarkFontSize()) {
    query["WatermarkFontSize"] = request.getWatermarkFontSize();
  }

  if (!!request.hasWatermarkFontStyle()) {
    query["WatermarkFontStyle"] = request.getWatermarkFontStyle();
  }

  if (!!request.hasWatermarkPower()) {
    query["WatermarkPower"] = request.getWatermarkPower();
  }

  if (!!request.hasWatermarkRowAmount()) {
    query["WatermarkRowAmount"] = request.getWatermarkRowAmount();
  }

  if (!!request.hasWatermarkSecurity()) {
    query["WatermarkSecurity"] = request.getWatermarkSecurity();
  }

  if (!!request.hasWatermarkShadow()) {
    query["WatermarkShadow"] = request.getWatermarkShadow();
  }

  if (!!request.hasWatermarkTransparencyValue()) {
    query["WatermarkTransparencyValue"] = request.getWatermarkTransparencyValue();
  }

  if (!!request.hasWatermarkType()) {
    query["WatermarkType"] = request.getWatermarkType();
  }

  if (!!request.hasWuyingKeeper()) {
    query["WuyingKeeper"] = request.getWuyingKeeper();
  }

  if (!!request.hasWyAssistant()) {
    query["WyAssistant"] = request.getWyAssistant();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCenterPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCenterPolicyResponse>();
}

/**
 * @summary Creates a region-independent Cloud Desktop policy.
 *
 * @param request CreateCenterPolicyRequest
 * @return CreateCenterPolicyResponse
 */
CreateCenterPolicyResponse Client::createCenterPolicy(const CreateCenterPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCenterPolicyWithOptions(request, runtime);
}

/**
 * @summary Disk organization authorization.
 *
 * @description The disk team list is synchronized from the EDS client -> User Management -> organization chart. If a user wants to use a team space, you can move the user to the specified organization in the User Management interface. The user can then see the team space menu bar in the disk client.
 *
 * @param request CreateCloudDriveGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudDriveGroupResponse
 */
CreateCloudDriveGroupResponse Client::createCloudDriveGroupWithOptions(const CreateCloudDriveGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdminUserIds()) {
    query["AdminUserIds"] = request.getAdminUserIds();
  }

  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTotalSize()) {
    query["TotalSize"] = request.getTotalSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudDriveGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudDriveGroupResponse>();
}

/**
 * @summary Disk organization authorization.
 *
 * @description The disk team list is synchronized from the EDS client -> User Management -> organization chart. If a user wants to use a team space, you can move the user to the specified organization in the User Management interface. The user can then see the team space menu bar in the disk client.
 *
 * @param request CreateCloudDriveGroupRequest
 * @return CreateCloudDriveGroupResponse
 */
CreateCloudDriveGroupResponse Client::createCloudDriveGroup(const CreateCloudDriveGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudDriveGroupWithOptions(request, runtime);
}

/**
 * @summary Create a PDS (formerly Wuying Cloud Disk)
 *
 * @description Before using this interface, make sure you understand the billing methods and pricing of Drive and Photo Service. For more information, see [Overview of Drive and Photo Service](https://help.aliyun.com/document_detail/386301.html).
 *
 * @param request CreateCloudDriveServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudDriveServiceResponse
 */
CreateCloudDriveServiceResponse Client::createCloudDriveServiceWithOptions(const CreateCloudDriveServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasCdsChargeType()) {
    query["CdsChargeType"] = request.getCdsChargeType();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasMaxSize()) {
    query["MaxSize"] = request.getMaxSize();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOfficeSiteType()) {
    query["OfficeSiteType"] = request.getOfficeSiteType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasSolutionId()) {
    query["SolutionId"] = request.getSolutionId();
  }

  if (!!request.hasUserCount()) {
    query["UserCount"] = request.getUserCount();
  }

  if (!!request.hasUserMaxSize()) {
    query["UserMaxSize"] = request.getUserMaxSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudDriveService"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudDriveServiceResponse>();
}

/**
 * @summary Create a PDS (formerly Wuying Cloud Disk)
 *
 * @description Before using this interface, make sure you understand the billing methods and pricing of Drive and Photo Service. For more information, see [Overview of Drive and Photo Service](https://help.aliyun.com/document_detail/386301.html).
 *
 * @param request CreateCloudDriveServiceRequest
 * @return CreateCloudDriveServiceResponse
 */
CreateCloudDriveServiceResponse Client::createCloudDriveService(const CreateCloudDriveServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudDriveServiceWithOptions(request, runtime);
}

/**
 * @summary Creates personal cloud drives for users within your enterprise cloud drive.
 *
 * @param request CreateCloudDriveUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudDriveUsersResponse
 */
CreateCloudDriveUsersResponse Client::createCloudDriveUsersWithOptions(const CreateCloudDriveUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserMaxSize()) {
    query["UserMaxSize"] = request.getUserMaxSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudDriveUsers"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudDriveUsersResponse>();
}

/**
 * @summary Creates personal cloud drives for users within your enterprise cloud drive.
 *
 * @param request CreateCloudDriveUsersRequest
 * @return CreateCloudDriveUsersResponse
 */
CreateCloudDriveUsersResponse Client::createCloudDriveUsers(const CreateCloudDriveUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudDriveUsersWithOptions(request, runtime);
}

/**
 * @summary Create a configuration group. A configuration group contains settings for scheduled tasks on cloud desktops.
 *
 * @param request CreateConfigGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConfigGroupResponse
 */
CreateConfigGroupResponse Client::createConfigGroupWithOptions(const CreateConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigTimers()) {
    query["ConfigTimers"] = request.getConfigTimers();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConfigGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConfigGroupResponse>();
}

/**
 * @summary Create a configuration group. A configuration group contains settings for scheduled tasks on cloud desktops.
 *
 * @param request CreateConfigGroupRequest
 * @return CreateConfigGroupResponse
 */
CreateConfigGroupResponse Client::createConfigGroup(const CreateConfigGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConfigGroupWithOptions(request, runtime);
}

/**
 * @summary Creating a shared EDS.
 *
 * @description - To learn more about shared desktops, including their features, use cases, limitations, and scaling policies, see [Shared desktop (formerly desktop pool) overview](https://help.aliyun.com/document_detail/290959.html).
 * - Before calling this API, ensure you have created the necessary resources, such as an office network, a desktop template, and a policy.
 *
 * @param request CreateDesktopGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDesktopGroupResponse
 */
CreateDesktopGroupResponse Client::createDesktopGroupWithOptions(const CreateDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllClassifyUsers()) {
    query["AllClassifyUsers"] = request.getAllClassifyUsers();
  }

  if (!!request.hasAllowAutoSetup()) {
    query["AllowAutoSetup"] = request.getAllowAutoSetup();
  }

  if (!!request.hasAllowBufferCount()) {
    query["AllowBufferCount"] = request.getAllowBufferCount();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBindAmount()) {
    query["BindAmount"] = request.getBindAmount();
  }

  if (!!request.hasBundleId()) {
    query["BundleId"] = request.getBundleId();
  }

  if (!!request.hasBuyDesktopsCount()) {
    query["BuyDesktopsCount"] = request.getBuyDesktopsCount();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClassify()) {
    query["Classify"] = request.getClassify();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasComments()) {
    query["Comments"] = request.getComments();
  }

  if (!!request.hasConnectDuration()) {
    query["ConnectDuration"] = request.getConnectDuration();
  }

  if (!!request.hasDataDiskCategory()) {
    query["DataDiskCategory"] = request.getDataDiskCategory();
  }

  if (!!request.hasDataDiskPerLevel()) {
    query["DataDiskPerLevel"] = request.getDataDiskPerLevel();
  }

  if (!!request.hasDataDiskSize()) {
    query["DataDiskSize"] = request.getDataDiskSize();
  }

  if (!!request.hasDefaultInitDesktopCount()) {
    query["DefaultInitDesktopCount"] = request.getDefaultInitDesktopCount();
  }

  if (!!request.hasDefaultLanguage()) {
    query["DefaultLanguage"] = request.getDefaultLanguage();
  }

  if (!!request.hasDeleteDuration()) {
    query["DeleteDuration"] = request.getDeleteDuration();
  }

  if (!!request.hasDesktopGroupName()) {
    query["DesktopGroupName"] = request.getDesktopGroupName();
  }

  if (!!request.hasDesktopType()) {
    query["DesktopType"] = request.getDesktopType();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEndUserIds()) {
    query["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasExclusiveType()) {
    query["ExclusiveType"] = request.getExclusiveType();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasGroupAmount()) {
    query["GroupAmount"] = request.getGroupAmount();
  }

  if (!!request.hasGroupVersion()) {
    query["GroupVersion"] = request.getGroupVersion();
  }

  if (!!request.hasHostname()) {
    query["Hostname"] = request.getHostname();
  }

  if (!!request.hasIdleDisconnectDuration()) {
    query["IdleDisconnectDuration"] = request.getIdleDisconnectDuration();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasKeepDuration()) {
    query["KeepDuration"] = request.getKeepDuration();
  }

  if (!!request.hasLoadPolicy()) {
    query["LoadPolicy"] = request.getLoadPolicy();
  }

  if (!!request.hasMaxDesktopsCount()) {
    query["MaxDesktopsCount"] = request.getMaxDesktopsCount();
  }

  if (!!request.hasMinDesktopsCount()) {
    query["MinDesktopsCount"] = request.getMinDesktopsCount();
  }

  if (!!request.hasMultiResource()) {
    query["MultiResource"] = request.getMultiResource();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOwnType()) {
    query["OwnType"] = request.getOwnType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasProfileFollowSwitch()) {
    query["ProfileFollowSwitch"] = request.getProfileFollowSwitch();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRatioThreshold()) {
    query["RatioThreshold"] = request.getRatioThreshold();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasResetType()) {
    query["ResetType"] = request.getResetType();
  }

  if (!!request.hasScaleStrategyId()) {
    query["ScaleStrategyId"] = request.getScaleStrategyId();
  }

  if (!!request.hasSessionType()) {
    query["SessionType"] = request.getSessionType();
  }

  if (!!request.hasSimpleUserGroupId()) {
    query["SimpleUserGroupId"] = request.getSimpleUserGroupId();
  }

  if (!!request.hasSnapshotPolicyId()) {
    query["SnapshotPolicyId"] = request.getSnapshotPolicyId();
  }

  if (!!request.hasStopDuration()) {
    query["StopDuration"] = request.getStopDuration();
  }

  if (!!request.hasSystemDiskCategory()) {
    query["SystemDiskCategory"] = request.getSystemDiskCategory();
  }

  if (!!request.hasSystemDiskPerLevel()) {
    query["SystemDiskPerLevel"] = request.getSystemDiskPerLevel();
  }

  if (!!request.hasSystemDiskSize()) {
    query["SystemDiskSize"] = request.getSystemDiskSize();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTimerGroupId()) {
    query["TimerGroupId"] = request.getTimerGroupId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.getUserGroupName();
  }

  if (!!request.hasUserOuPath()) {
    query["UserOuPath"] = request.getUserOuPath();
  }

  if (!!request.hasVolumeEncryptionEnabled()) {
    query["VolumeEncryptionEnabled"] = request.getVolumeEncryptionEnabled();
  }

  if (!!request.hasVolumeEncryptionKey()) {
    query["VolumeEncryptionKey"] = request.getVolumeEncryptionKey();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDesktopGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDesktopGroupResponse>();
}

/**
 * @summary Creating a shared EDS.
 *
 * @description - To learn more about shared desktops, including their features, use cases, limitations, and scaling policies, see [Shared desktop (formerly desktop pool) overview](https://help.aliyun.com/document_detail/290959.html).
 * - Before calling this API, ensure you have created the necessary resources, such as an office network, a desktop template, and a policy.
 *
 * @param request CreateDesktopGroupRequest
 * @return CreateDesktopGroupResponse
 */
CreateDesktopGroupResponse Client::createDesktopGroup(const CreateDesktopGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDesktopGroupWithOptions(request, runtime);
}

/**
 * @summary 创建桌面超卖组
 *
 * @param request CreateDesktopOversoldGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDesktopOversoldGroupResponse
 */
CreateDesktopOversoldGroupResponse Client::createDesktopOversoldGroupWithOptions(const CreateDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConcurrenceCount()) {
    query["ConcurrenceCount"] = request.getConcurrenceCount();
  }

  if (!!request.hasDataDiskSize()) {
    query["DataDiskSize"] = request.getDataDiskSize();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDesktopType()) {
    query["DesktopType"] = request.getDesktopType();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasIdleDisconnectDuration()) {
    query["IdleDisconnectDuration"] = request.getIdleDisconnectDuration();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasKeepDuration()) {
    query["KeepDuration"] = request.getKeepDuration();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOversoldUserCount()) {
    query["OversoldUserCount"] = request.getOversoldUserCount();
  }

  if (!!request.hasOversoldWarn()) {
    query["OversoldWarn"] = request.getOversoldWarn();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasStopDuration()) {
    query["StopDuration"] = request.getStopDuration();
  }

  if (!!request.hasSystemDiskSize()) {
    query["SystemDiskSize"] = request.getSystemDiskSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDesktopOversoldGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDesktopOversoldGroupResponse>();
}

/**
 * @summary 创建桌面超卖组
 *
 * @param request CreateDesktopOversoldGroupRequest
 * @return CreateDesktopOversoldGroupResponse
 */
CreateDesktopOversoldGroupResponse Client::createDesktopOversoldGroup(const CreateDesktopOversoldGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDesktopOversoldGroupWithOptions(request, runtime);
}

/**
 * @summary Creates one or more cloud desktops. If user information is specified during creation, the cloud desktops are directly assigned to the users.
 *
 * @description Before creating cloud desktops, complete the following preparations:
 * - Create an office network (formerly workspace) and users. For more information, see the following API operations or documentation:
 *     - Convenience office network: [CreateSimpleOfficeSite](https://help.aliyun.com/document_detail/215416.html) and [CreateUsers](https://help.aliyun.com/document_detail/437832.html).
 *     - AD office network: [CreateADConnectorOfficeSite](https://help.aliyun.com/document_detail/215417.html) and [Create AD users](https://help.aliyun.com/document_detail/188619.html).
 * - Call [CreatePolicyGroup](https://help.aliyun.com/document_detail/188889.html) to create a policy, or confirm that an existing policy is available.
 * **Call examples:**
 * <details>
 * <summary>Example of creating with a template</summary>
 * ```
 * {
 *   "RegionId": "ap-southeast-1",
 *   "DesktopName": "test-desktop-name",
 *   "Amount": "1",
 *   "OfficeSiteId": "ap-southeast-1+dir-xxx",// Create an office network in advance
 *   "PolicyGroupId": "system-all-enabled-policy",
 *   "ChargeType": "PostPaid",
 *   "BundleId": "b-enterprise_office_8c16g_windows2022"
 * }
 * ```
 * </details>
 * <details>
 * <summary>Example of creating without a template</summary>
 * ```
 * {
 *   "RegionId": "ap-southeast-1",
 *   "DesktopName": "test-desktop-name",
 *   "Amount": "1",
 *   "OfficeSiteId": "ap-southeast-1+dir-xxx",// Create an office network in advance
 *   "PolicyGroupId": "system-all-enabled-policy",
 *   "ChargeType": "PostPaid",
 *   "DesktopAttachment": {
 *     "ImageId": "desktopimage-windows-server-2022-64-asp",
 *     "SystemDiskSize": "40",
 *     "DataDiskSize": "0",
 *     "DefaultLanguage": "zh-CN",
 *     "DesktopType": "eds.enterprise_office.4c8g"
 *   }
 * }
 * ```
 * </details>
 * <details>
 * <summary>Example of creating a monthly hourly package</summary>
 * ```
 * {
 *   "RegionId": "ap-southeast-1",
 *   "DesktopName": "test-desktop-name",
 *   "Amount": "1",
 *   "OfficeSiteId": "ap-southeast-1+dir-xxx",// Create an office network in advance
 *   "PolicyGroupId": "system-all-enabled-policy",
 *   "ChargeType": "PostPaid",
 *   "DesktopAttachment": {
 *     "ImageId": "desktopimage-windows-server-2022-64-asp",
 *     "SystemDiskSize": "40",
 *     "DataDiskSize": "0",
 *     "DefaultLanguage": "zh-CN",
 *     "DesktopType": "eds.enterprise_office.4c8g"
 *   },
 *   "MonthDesktopSetting": {
 *     "UseDuration": "120"
 *   },
 *   "Period": "1",
 *   "PeriodUnit": "Month"
 * }
 * ```
 * </details>
 * <details>
 * <summary>Example of creating an Agent resource</summary>
 * ```
 * {
 *   "RegionId": "ap-southeast-1",
 *   "BundleId": "b-openclaw-linux",
 *   "DesktopName": "test-desktop-name",
 *   "Amount": "1",
 *   "OfficeSiteId": "ap-southeast-1+dir-xxx",// Create an office network in advance
 *   "ChargeType": "PostPaid",
 *   "DesktopAttachment": {
 *     "DesktopType": "cloud.space.4c.8g"
 *   },
 *   "PurchaseOptions": {
 *     "MonthlyCredits": "120"
 *   },
 *   "Period": "1",
 *   "PeriodUnit": "Month"
 * }
 * ```
 * </details>
 * To have cloud desktops automatically run custom command scripts, use the `UserCommands` field to configure custom commands.
 *
 * @param tmpReq CreateDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDesktopsResponse
 */
CreateDesktopsResponse Client::createDesktopsWithOptions(const CreateDesktopsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDesktopsShrinkRequest request = CreateDesktopsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDesktopAttachment()) {
    request.setDesktopAttachmentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDesktopAttachment(), "DesktopAttachment", "json"));
  }

  if (!!tmpReq.hasPurchaseOptions()) {
    request.setPurchaseOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPurchaseOptions(), "PurchaseOptions", "json"));
  }

  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAppRuleId()) {
    query["AppRuleId"] = request.getAppRuleId();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBundleId()) {
    query["BundleId"] = request.getBundleId();
  }

  if (!!request.hasBundleModels()) {
    query["BundleModels"] = request.getBundleModels();
  }

  if (!!request.hasChannelCookie()) {
    query["ChannelCookie"] = request.getChannelCookie();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDesktopAttachmentShrink()) {
    query["DesktopAttachment"] = request.getDesktopAttachmentShrink();
  }

  if (!!request.hasDesktopMemberIp()) {
    query["DesktopMemberIp"] = request.getDesktopMemberIp();
  }

  if (!!request.hasDesktopName()) {
    query["DesktopName"] = request.getDesktopName();
  }

  if (!!request.hasDesktopNameSuffix()) {
    query["DesktopNameSuffix"] = request.getDesktopNameSuffix();
  }

  if (!!request.hasDesktopTimers()) {
    query["DesktopTimers"] = request.getDesktopTimers();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasExtendInfo()) {
    query["ExtendInfo"] = request.getExtendInfo();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasHostname()) {
    query["Hostname"] = request.getHostname();
  }

  if (!!request.hasMonthDesktopSetting()) {
    query["MonthDesktopSetting"] = request.getMonthDesktopSetting();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOuPath()) {
    query["OuPath"] = request.getOuPath();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasPurchaseOptionsShrink()) {
    query["PurchaseOptions"] = request.getPurchaseOptionsShrink();
  }

  if (!!request.hasQosRuleId()) {
    query["QosRuleId"] = request.getQosRuleId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSavingPlanId()) {
    query["SavingPlanId"] = request.getSavingPlanId();
  }

  if (!!request.hasSnapshotPolicyId()) {
    query["SnapshotPolicyId"] = request.getSnapshotPolicyId();
  }

  if (!!request.hasSubPayType()) {
    query["SubPayType"] = request.getSubPayType();
  }

  if (!!request.hasSubnetId()) {
    query["SubnetId"] = request.getSubnetId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTimerGroupId()) {
    query["TimerGroupId"] = request.getTimerGroupId();
  }

  if (!!request.hasUserAssignMode()) {
    query["UserAssignMode"] = request.getUserAssignMode();
  }

  if (!!request.hasUserCommands()) {
    query["UserCommands"] = request.getUserCommands();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasVolumeEncryptionEnabled()) {
    query["VolumeEncryptionEnabled"] = request.getVolumeEncryptionEnabled();
  }

  if (!!request.hasVolumeEncryptionKey()) {
    query["VolumeEncryptionKey"] = request.getVolumeEncryptionKey();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDesktopsResponse>();
}

/**
 * @summary Creates one or more cloud desktops. If user information is specified during creation, the cloud desktops are directly assigned to the users.
 *
 * @description Before creating cloud desktops, complete the following preparations:
 * - Create an office network (formerly workspace) and users. For more information, see the following API operations or documentation:
 *     - Convenience office network: [CreateSimpleOfficeSite](https://help.aliyun.com/document_detail/215416.html) and [CreateUsers](https://help.aliyun.com/document_detail/437832.html).
 *     - AD office network: [CreateADConnectorOfficeSite](https://help.aliyun.com/document_detail/215417.html) and [Create AD users](https://help.aliyun.com/document_detail/188619.html).
 * - Call [CreatePolicyGroup](https://help.aliyun.com/document_detail/188889.html) to create a policy, or confirm that an existing policy is available.
 * **Call examples:**
 * <details>
 * <summary>Example of creating with a template</summary>
 * ```
 * {
 *   "RegionId": "ap-southeast-1",
 *   "DesktopName": "test-desktop-name",
 *   "Amount": "1",
 *   "OfficeSiteId": "ap-southeast-1+dir-xxx",// Create an office network in advance
 *   "PolicyGroupId": "system-all-enabled-policy",
 *   "ChargeType": "PostPaid",
 *   "BundleId": "b-enterprise_office_8c16g_windows2022"
 * }
 * ```
 * </details>
 * <details>
 * <summary>Example of creating without a template</summary>
 * ```
 * {
 *   "RegionId": "ap-southeast-1",
 *   "DesktopName": "test-desktop-name",
 *   "Amount": "1",
 *   "OfficeSiteId": "ap-southeast-1+dir-xxx",// Create an office network in advance
 *   "PolicyGroupId": "system-all-enabled-policy",
 *   "ChargeType": "PostPaid",
 *   "DesktopAttachment": {
 *     "ImageId": "desktopimage-windows-server-2022-64-asp",
 *     "SystemDiskSize": "40",
 *     "DataDiskSize": "0",
 *     "DefaultLanguage": "zh-CN",
 *     "DesktopType": "eds.enterprise_office.4c8g"
 *   }
 * }
 * ```
 * </details>
 * <details>
 * <summary>Example of creating a monthly hourly package</summary>
 * ```
 * {
 *   "RegionId": "ap-southeast-1",
 *   "DesktopName": "test-desktop-name",
 *   "Amount": "1",
 *   "OfficeSiteId": "ap-southeast-1+dir-xxx",// Create an office network in advance
 *   "PolicyGroupId": "system-all-enabled-policy",
 *   "ChargeType": "PostPaid",
 *   "DesktopAttachment": {
 *     "ImageId": "desktopimage-windows-server-2022-64-asp",
 *     "SystemDiskSize": "40",
 *     "DataDiskSize": "0",
 *     "DefaultLanguage": "zh-CN",
 *     "DesktopType": "eds.enterprise_office.4c8g"
 *   },
 *   "MonthDesktopSetting": {
 *     "UseDuration": "120"
 *   },
 *   "Period": "1",
 *   "PeriodUnit": "Month"
 * }
 * ```
 * </details>
 * <details>
 * <summary>Example of creating an Agent resource</summary>
 * ```
 * {
 *   "RegionId": "ap-southeast-1",
 *   "BundleId": "b-openclaw-linux",
 *   "DesktopName": "test-desktop-name",
 *   "Amount": "1",
 *   "OfficeSiteId": "ap-southeast-1+dir-xxx",// Create an office network in advance
 *   "ChargeType": "PostPaid",
 *   "DesktopAttachment": {
 *     "DesktopType": "cloud.space.4c.8g"
 *   },
 *   "PurchaseOptions": {
 *     "MonthlyCredits": "120"
 *   },
 *   "Period": "1",
 *   "PeriodUnit": "Month"
 * }
 * ```
 * </details>
 * To have cloud desktops automatically run custom command scripts, use the `UserCommands` field to configure custom commands.
 *
 * @param request CreateDesktopsRequest
 * @return CreateDesktopsResponse
 */
CreateDesktopsResponse Client::createDesktops(const CreateDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDesktopsWithOptions(request, runtime);
}

/**
 * @summary Enables the disk encryption feature and adds the service-linked role (SLR) for enterprise cloud drive encryption under the RAM user.
 *
 * @param request CreateDiskEncryptionServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDiskEncryptionServiceResponse
 */
CreateDiskEncryptionServiceResponse Client::createDiskEncryptionServiceWithOptions(const CreateDiskEncryptionServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDiskEncryptionService"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDiskEncryptionServiceResponse>();
}

/**
 * @summary Enables the disk encryption feature and adds the service-linked role (SLR) for enterprise cloud drive encryption under the RAM user.
 *
 * @param request CreateDiskEncryptionServiceRequest
 * @return CreateDiskEncryptionServiceResponse
 */
CreateDiskEncryptionServiceResponse Client::createDiskEncryptionService(const CreateDiskEncryptionServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDiskEncryptionServiceWithOptions(request, runtime);
}

/**
 * @summary Creates a user-level storage resource.
 *
 * @param request CreateDriveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDriveResponse
 */
CreateDriveResponse Client::createDriveWithOptions(const CreateDriveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliUid()) {
    query["AliUid"] = request.getAliUid();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDomainId()) {
    query["DomainId"] = request.getDomainId();
  }

  if (!!request.hasDriveName()) {
    query["DriveName"] = request.getDriveName();
  }

  if (!!request.hasExternalDomainId()) {
    query["ExternalDomainId"] = request.getExternalDomainId();
  }

  if (!!request.hasProfileRoaming()) {
    query["ProfileRoaming"] = request.getProfileRoaming();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDrive"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDriveResponse>();
}

/**
 * @summary Creates a user-level storage resource.
 *
 * @param request CreateDriveRequest
 * @return CreateDriveResponse
 */
CreateDriveResponse Client::createDrive(const CreateDriveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDriveWithOptions(request, runtime);
}

/**
 * @summary Creates a data report export task.
 *
 * @param request CreateEcdReportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEcdReportTaskResponse
 */
CreateEcdReportTaskResponse Client::createEcdReportTaskWithOptions(const CreateEcdReportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasFilterList()) {
    query["FilterList"] = request.getFilterList();
  }

  if (!!request.hasLangType()) {
    query["LangType"] = request.getLangType();
  }

  if (!!request.hasReportFileName()) {
    query["ReportFileName"] = request.getReportFileName();
  }

  if (!!request.hasSubType()) {
    query["SubType"] = request.getSubType();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEcdReportTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEcdReportTaskResponse>();
}

/**
 * @summary Creates a data report export task.
 *
 * @param request CreateEcdReportTaskRequest
 * @return CreateEcdReportTaskResponse
 */
CreateEcdReportTaskResponse Client::createEcdReportTask(const CreateEcdReportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEcdReportTaskWithOptions(request, runtime);
}

/**
 * @summary 添加DNAT条目
 *
 * @param request CreateForwardEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateForwardEntryResponse
 */
CreateForwardEntryResponse Client::createForwardEntryWithOptions(const CreateForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalIp()) {
    query["ExternalIp"] = request.getExternalIp();
  }

  if (!!request.hasExternalPort()) {
    query["ExternalPort"] = request.getExternalPort();
  }

  if (!!request.hasForwardEntryName()) {
    query["ForwardEntryName"] = request.getForwardEntryName();
  }

  if (!!request.hasForwardTableId()) {
    query["ForwardTableId"] = request.getForwardTableId();
  }

  if (!!request.hasInternalIp()) {
    query["InternalIp"] = request.getInternalIp();
  }

  if (!!request.hasInternalPort()) {
    query["InternalPort"] = request.getInternalPort();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateForwardEntry"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateForwardEntryResponse>();
}

/**
 * @summary 添加DNAT条目
 *
 * @param request CreateForwardEntryRequest
 * @return CreateForwardEntryResponse
 */
CreateForwardEntryResponse Client::createForwardEntry(const CreateForwardEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createForwardEntryWithOptions(request, runtime);
}

/**
 * @summary Create a custom image from an existing WUYING Workspace. Use this image to quickly deploy more workspaces with identical configurations. Avoid repeating configuration steps each time you create a new workspace.
 *
 * @param request CreateImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageResponse
 */
CreateImageResponse Client::createImageWithOptions(const CreateImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoCleanUserdata()) {
    query["AutoCleanUserdata"] = request.getAutoCleanUserdata();
  }

  if (!!request.hasDataSnapshotIds()) {
    query["DataSnapshotIds"] = request.getDataSnapshotIds();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasImageResourceType()) {
    query["ImageResourceType"] = request.getImageResourceType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasSnapshotIds()) {
    query["SnapshotIds"] = request.getSnapshotIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImage"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageResponse>();
}

/**
 * @summary Create a custom image from an existing WUYING Workspace. Use this image to quickly deploy more workspaces with identical configurations. Avoid repeating configuration steps each time you create a new workspace.
 *
 * @param request CreateImageRequest
 * @return CreateImageResponse
 */
CreateImageResponse Client::createImage(const CreateImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageWithOptions(request, runtime);
}

/**
 * @summary Create a NAS file system.
 *
 * @description <props="china">
 * - Each standard workspace can create one NAS file system to meet the need for sharing files between cloud desktops in the workspace.
 * - The system will automatically create a general-purpose NAS file system (with storage specifications of Capacity and Performance, with capacities of 10 PiB and 1 PiB respectively) and generate a default mount point.
 * - The NAS file system uses pay-as-you-go by default. You need to pay for the actual storage usage. You can also purchase resource packages to offset the storage usage.
 * For more information, see [Creating Shared Storage NAS](https://help.aliyun.com/document_detail/214481.html).
 * <props="intl">
 * - Each standard workspace can create one NAS file system to meet the need for sharing files between cloud desktops in the workspace.
 * - The system will automatically create a general-purpose NAS file system (with storage specifications of Capacity and Performance, with capacities of 10 PiB and 1 PiB respectively) and generate a default mount point.
 * - The NAS file system uses pay-as-you-go by default. You need to pay for the actual storage usage. You can also purchase storage packages to offset the storage usage.
 * For more information, see [Creating Shared Storage NAS](https://help.aliyun.com/document_detail/214481.html).
 *
 * @param request CreateNASFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNASFileSystemResponse
 */
CreateNASFileSystemResponse Client::createNASFileSystemWithOptions(const CreateNASFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.getEncryptType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNASFileSystem"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNASFileSystemResponse>();
}

/**
 * @summary Create a NAS file system.
 *
 * @description <props="china">
 * - Each standard workspace can create one NAS file system to meet the need for sharing files between cloud desktops in the workspace.
 * - The system will automatically create a general-purpose NAS file system (with storage specifications of Capacity and Performance, with capacities of 10 PiB and 1 PiB respectively) and generate a default mount point.
 * - The NAS file system uses pay-as-you-go by default. You need to pay for the actual storage usage. You can also purchase resource packages to offset the storage usage.
 * For more information, see [Creating Shared Storage NAS](https://help.aliyun.com/document_detail/214481.html).
 * <props="intl">
 * - Each standard workspace can create one NAS file system to meet the need for sharing files between cloud desktops in the workspace.
 * - The system will automatically create a general-purpose NAS file system (with storage specifications of Capacity and Performance, with capacities of 10 PiB and 1 PiB respectively) and generate a default mount point.
 * - The NAS file system uses pay-as-you-go by default. You need to pay for the actual storage usage. You can also purchase storage packages to offset the storage usage.
 * For more information, see [Creating Shared Storage NAS](https://help.aliyun.com/document_detail/214481.html).
 *
 * @param request CreateNASFileSystemRequest
 * @return CreateNASFileSystemResponse
 */
CreateNASFileSystemResponse Client::createNASFileSystem(const CreateNASFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNASFileSystemWithOptions(request, runtime);
}

/**
 * @summary 新建NAT网关
 *
 * @param request CreateNatGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNatGatewayResponse
 */
CreateNatGatewayResponse Client::createNatGatewayWithOptions(const CreateNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNatGateway"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNatGatewayResponse>();
}

/**
 * @summary 新建NAT网关
 *
 * @param request CreateNatGatewayRequest
 * @return CreateNatGatewayResponse
 */
CreateNatGatewayResponse Client::createNatGateway(const CreateNatGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNatGatewayWithOptions(request, runtime);
}

/**
 * @summary Creates a premium bandwidth plan for an office network.
 *
 * @param request CreateNetworkPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkPackageResponse
 */
CreateNetworkPackageResponse Client::createNetworkPackageWithOptions(const CreateNetworkPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasChannelCookie()) {
    query["ChannelCookie"] = request.getChannelCookie();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkPackage"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkPackageResponse>();
}

/**
 * @summary Creates a premium bandwidth plan for an office network.
 *
 * @param request CreateNetworkPackageRequest
 * @return CreateNetworkPackageResponse
 */
CreateNetworkPackageResponse Client::createNetworkPackage(const CreateNetworkPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkPackageWithOptions(request, runtime);
}

/**
 * @summary Enables the Global Accelerator (GA) service for an office network.
 *
 * @description Before you call this operation, ensure you fully understand the billing methods and [pricing](t2208086.xdita#) of the GA service.
 *
 * @param request CreateOfficeSiteAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOfficeSiteAcceleratorResponse
 */
CreateOfficeSiteAcceleratorResponse Client::createOfficeSiteAcceleratorWithOptions(const CreateOfficeSiteAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateRegion()) {
    query["AccelerateRegion"] = request.getAccelerateRegion();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOfficeSiteAccelerator"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOfficeSiteAcceleratorResponse>();
}

/**
 * @summary Enables the Global Accelerator (GA) service for an office network.
 *
 * @description Before you call this operation, ensure you fully understand the billing methods and [pricing](t2208086.xdita#) of the GA service.
 *
 * @param request CreateOfficeSiteAcceleratorRequest
 * @return CreateOfficeSiteAcceleratorResponse
 */
CreateOfficeSiteAcceleratorResponse Client::createOfficeSiteAccelerator(const CreateOfficeSiteAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOfficeSiteAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Creates a cloud computer policy.
 *
 * @description A cloud computer policy is a set of rules for performance and security. These rules configure features such as local disk mapping, USB redirection, watermarks, and DNS control. For more information, see [Policy overview](https://help.aliyun.com/document_detail/189345.html).
 *
 * @param request CreatePolicyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyGroupResponse
 */
CreatePolicyGroupResponse Client::createPolicyGroupWithOptions(const CreatePolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdminAccess()) {
    query["AdminAccess"] = request.getAdminAccess();
  }

  if (!!request.hasAppContentProtection()) {
    query["AppContentProtection"] = request.getAppContentProtection();
  }

  if (!!request.hasAuthorizeAccessPolicyRule()) {
    query["AuthorizeAccessPolicyRule"] = request.getAuthorizeAccessPolicyRule();
  }

  if (!!request.hasAuthorizeSecurityPolicyRule()) {
    query["AuthorizeSecurityPolicyRule"] = request.getAuthorizeSecurityPolicyRule();
  }

  if (!!request.hasCameraRedirect()) {
    query["CameraRedirect"] = request.getCameraRedirect();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasClipboard()) {
    query["Clipboard"] = request.getClipboard();
  }

  if (!!request.hasDeviceRedirects()) {
    query["DeviceRedirects"] = request.getDeviceRedirects();
  }

  if (!!request.hasDeviceRules()) {
    query["DeviceRules"] = request.getDeviceRules();
  }

  if (!!request.hasDomainList()) {
    query["DomainList"] = request.getDomainList();
  }

  if (!!request.hasDomainResolveRule()) {
    query["DomainResolveRule"] = request.getDomainResolveRule();
  }

  if (!!request.hasDomainResolveRuleType()) {
    query["DomainResolveRuleType"] = request.getDomainResolveRuleType();
  }

  if (!!request.hasEndUserApplyAdminCoordinate()) {
    query["EndUserApplyAdminCoordinate"] = request.getEndUserApplyAdminCoordinate();
  }

  if (!!request.hasEndUserGroupCoordinate()) {
    query["EndUserGroupCoordinate"] = request.getEndUserGroupCoordinate();
  }

  if (!!request.hasGpuAcceleration()) {
    query["GpuAcceleration"] = request.getGpuAcceleration();
  }

  if (!!request.hasHtml5Access()) {
    query["Html5Access"] = request.getHtml5Access();
  }

  if (!!request.hasHtml5FileTransfer()) {
    query["Html5FileTransfer"] = request.getHtml5FileTransfer();
  }

  if (!!request.hasInternetCommunicationProtocol()) {
    query["InternetCommunicationProtocol"] = request.getInternetCommunicationProtocol();
  }

  if (!!request.hasLocalDrive()) {
    query["LocalDrive"] = request.getLocalDrive();
  }

  if (!!request.hasMaxReconnectTime()) {
    query["MaxReconnectTime"] = request.getMaxReconnectTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNetRedirect()) {
    query["NetRedirect"] = request.getNetRedirect();
  }

  if (!!request.hasPreemptLogin()) {
    query["PreemptLogin"] = request.getPreemptLogin();
  }

  if (!!request.hasPreemptLoginUser()) {
    query["PreemptLoginUser"] = request.getPreemptLoginUser();
  }

  if (!!request.hasPrinterRedirection()) {
    query["PrinterRedirection"] = request.getPrinterRedirection();
  }

  if (!!request.hasRecordContent()) {
    query["RecordContent"] = request.getRecordContent();
  }

  if (!!request.hasRecordContentExpires()) {
    query["RecordContentExpires"] = request.getRecordContentExpires();
  }

  if (!!request.hasRecording()) {
    query["Recording"] = request.getRecording();
  }

  if (!!request.hasRecordingAudio()) {
    query["RecordingAudio"] = request.getRecordingAudio();
  }

  if (!!request.hasRecordingDuration()) {
    query["RecordingDuration"] = request.getRecordingDuration();
  }

  if (!!request.hasRecordingEndTime()) {
    query["RecordingEndTime"] = request.getRecordingEndTime();
  }

  if (!!request.hasRecordingExpires()) {
    query["RecordingExpires"] = request.getRecordingExpires();
  }

  if (!!request.hasRecordingFps()) {
    query["RecordingFps"] = request.getRecordingFps();
  }

  if (!!request.hasRecordingStartTime()) {
    query["RecordingStartTime"] = request.getRecordingStartTime();
  }

  if (!!request.hasRecordingUserNotify()) {
    query["RecordingUserNotify"] = request.getRecordingUserNotify();
  }

  if (!!request.hasRecordingUserNotifyMessage()) {
    query["RecordingUserNotifyMessage"] = request.getRecordingUserNotifyMessage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoteCoordinate()) {
    query["RemoteCoordinate"] = request.getRemoteCoordinate();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasScopeValue()) {
    query["ScopeValue"] = request.getScopeValue();
  }

  if (!!request.hasUsbRedirect()) {
    query["UsbRedirect"] = request.getUsbRedirect();
  }

  if (!!request.hasUsbSupplyRedirectRule()) {
    query["UsbSupplyRedirectRule"] = request.getUsbSupplyRedirectRule();
  }

  if (!!request.hasVideoRedirect()) {
    query["VideoRedirect"] = request.getVideoRedirect();
  }

  if (!!request.hasVisualQuality()) {
    query["VisualQuality"] = request.getVisualQuality();
  }

  if (!!request.hasWatermark()) {
    query["Watermark"] = request.getWatermark();
  }

  if (!!request.hasWatermarkAntiCam()) {
    query["WatermarkAntiCam"] = request.getWatermarkAntiCam();
  }

  if (!!request.hasWatermarkColor()) {
    query["WatermarkColor"] = request.getWatermarkColor();
  }

  if (!!request.hasWatermarkDegree()) {
    query["WatermarkDegree"] = request.getWatermarkDegree();
  }

  if (!!request.hasWatermarkFontSize()) {
    query["WatermarkFontSize"] = request.getWatermarkFontSize();
  }

  if (!!request.hasWatermarkFontStyle()) {
    query["WatermarkFontStyle"] = request.getWatermarkFontStyle();
  }

  if (!!request.hasWatermarkPower()) {
    query["WatermarkPower"] = request.getWatermarkPower();
  }

  if (!!request.hasWatermarkRowAmount()) {
    query["WatermarkRowAmount"] = request.getWatermarkRowAmount();
  }

  if (!!request.hasWatermarkSecurity()) {
    query["WatermarkSecurity"] = request.getWatermarkSecurity();
  }

  if (!!request.hasWatermarkTransparency()) {
    query["WatermarkTransparency"] = request.getWatermarkTransparency();
  }

  if (!!request.hasWatermarkTransparencyValue()) {
    query["WatermarkTransparencyValue"] = request.getWatermarkTransparencyValue();
  }

  if (!!request.hasWatermarkType()) {
    query["WatermarkType"] = request.getWatermarkType();
  }

  if (!!request.hasWyAssistant()) {
    query["WyAssistant"] = request.getWyAssistant();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolicyGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyGroupResponse>();
}

/**
 * @summary Creates a cloud computer policy.
 *
 * @description A cloud computer policy is a set of rules for performance and security. These rules configure features such as local disk mapping, USB redirection, watermarks, and DNS control. For more information, see [Policy overview](https://help.aliyun.com/document_detail/189345.html).
 *
 * @param request CreatePolicyGroupRequest
 * @return CreatePolicyGroupResponse
 */
CreatePolicyGroupResponse Client::createPolicyGroup(const CreatePolicyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a QoS rule.
 *
 * @description Creates a QoS rule to manage network bandwidth for resources such as cloud desktops and cloud phones.
 *
 * @param request CreateQosRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQosRuleResponse
 */
CreateQosRuleResponse Client::createQosRuleWithOptions(const CreateQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthAndroidId()) {
    query["AuthAndroidId"] = request.getAuthAndroidId();
  }

  if (!!request.hasAuthDesktopGroupId()) {
    query["AuthDesktopGroupId"] = request.getAuthDesktopGroupId();
  }

  if (!!request.hasAuthDesktopId()) {
    query["AuthDesktopId"] = request.getAuthDesktopId();
  }

  if (!!request.hasDownload()) {
    query["Download"] = request.getDownload();
  }

  if (!!request.hasNetworkPackageId()) {
    query["NetworkPackageId"] = request.getNetworkPackageId();
  }

  if (!!request.hasQosRuleName()) {
    query["QosRuleName"] = request.getQosRuleName();
  }

  if (!!request.hasUpload()) {
    query["Upload"] = request.getUpload();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQosRule"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQosRuleResponse>();
}

/**
 * @summary Creates a QoS rule.
 *
 * @description Creates a QoS rule to manage network bandwidth for resources such as cloud desktops and cloud phones.
 *
 * @param request CreateQosRuleRequest
 * @return CreateQosRuleResponse
 */
CreateQosRuleResponse Client::createQosRule(const CreateQosRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQosRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a Resource Access Management (RAM) directory.
 *
 * @description Before you create a RAM directory, complete the following preparations:
 * *   Call the `CreateVpc` operation to create a virtual private cloud (VPC) in a region supported by Elastic Desktop Service.
 * *   Call the `CreateVSwitch` operation to create a vSwitch in the VPC. The vSwitch is in a zone that is supported by Elastic Desktop Service. You can call the [DescribeZones](https://help.aliyun.com/document_detail/196648.html) operation to obtain the most recent zone list for a region supported by Elastic Desktop Service
 *
 * @param request CreateRAMDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRAMDirectoryResponse
 */
CreateRAMDirectoryResponse Client::createRAMDirectoryWithOptions(const CreateRAMDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopAccessType()) {
    query["DesktopAccessType"] = request.getDesktopAccessType();
  }

  if (!!request.hasDirectoryName()) {
    query["DirectoryName"] = request.getDirectoryName();
  }

  if (!!request.hasEnableAdminAccess()) {
    query["EnableAdminAccess"] = request.getEnableAdminAccess();
  }

  if (!!request.hasEnableInternetAccess()) {
    query["EnableInternetAccess"] = request.getEnableInternetAccess();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRAMDirectory"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRAMDirectoryResponse>();
}

/**
 * @summary Creates a Resource Access Management (RAM) directory.
 *
 * @description Before you create a RAM directory, complete the following preparations:
 * *   Call the `CreateVpc` operation to create a virtual private cloud (VPC) in a region supported by Elastic Desktop Service.
 * *   Call the `CreateVSwitch` operation to create a vSwitch in the VPC. The vSwitch is in a zone that is supported by Elastic Desktop Service. You can call the [DescribeZones](https://help.aliyun.com/document_detail/196648.html) operation to obtain the most recent zone list for a region supported by Elastic Desktop Service
 *
 * @param request CreateRAMDirectoryRequest
 * @return CreateRAMDirectoryResponse
 */
CreateRAMDirectoryResponse Client::createRAMDirectory(const CreateRAMDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRAMDirectoryWithOptions(request, runtime);
}

/**
 * @summary 新建路由条目
 *
 * @param request CreateRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRouteEntryResponse
 */
CreateRouteEntryResponse Client::createRouteEntryWithOptions(const CreateRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasNextHopId()) {
    query["NextHopId"] = request.getNextHopId();
  }

  if (!!request.hasNextHopType()) {
    query["NextHopType"] = request.getNextHopType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRouteEntryName()) {
    query["RouteEntryName"] = request.getRouteEntryName();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRouteEntry"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRouteEntryResponse>();
}

/**
 * @summary 新建路由条目
 *
 * @param request CreateRouteEntryRequest
 * @return CreateRouteEntryResponse
 */
CreateRouteEntryResponse Client::createRouteEntry(const CreateRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRouteEntryWithOptions(request, runtime);
}

/**
 * @summary 新建自定义路由表
 *
 * @param request CreateRouteTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRouteTableResponse
 */
CreateRouteTableResponse Client::createRouteTableWithOptions(const CreateRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRouteTableName()) {
    query["RouteTableName"] = request.getRouteTableName();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRouteTable"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRouteTableResponse>();
}

/**
 * @summary 新建自定义路由表
 *
 * @param request CreateRouteTableRequest
 * @return CreateRouteTableResponse
 */
CreateRouteTableResponse Client::createRouteTable(const CreateRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRouteTableWithOptions(request, runtime);
}

/**
 * @summary Elastic Desktop Service (EDS) supports two types of accounts: convenience accounts and enterprise AD accounts. Use this API to create an office network (formerly a workspace) that uses convenience accounts.
 *
 * @param request CreateSimpleOfficeSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSimpleOfficeSiteResponse
 */
CreateSimpleOfficeSiteResponse Client::createSimpleOfficeSiteWithOptions(const CreateSimpleOfficeSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessAttribute()) {
    query["AccessAttribute"] = request.getAccessAttribute();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.getAccountType();
  }

  if (!!request.hasAuthorityHost()) {
    query["AuthorityHost"] = request.getAuthorityHost();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenOwnerId()) {
    query["CenOwnerId"] = request.getCenOwnerId();
  }

  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientSecret()) {
    query["ClientSecret"] = request.getClientSecret();
  }

  if (!!request.hasCloudBoxOfficeSite()) {
    query["CloudBoxOfficeSite"] = request.getCloudBoxOfficeSite();
  }

  if (!!request.hasDesktopAccessType()) {
    query["DesktopAccessType"] = request.getDesktopAccessType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEid()) {
    query["Eid"] = request.getEid();
  }

  if (!!request.hasEnableAdminAccess()) {
    query["EnableAdminAccess"] = request.getEnableAdminAccess();
  }

  if (!!request.hasEnableInternetAccess()) {
    query["EnableInternetAccess"] = request.getEnableInternetAccess();
  }

  if (!!request.hasNeedVerifyZeroDevice()) {
    query["NeedVerifyZeroDevice"] = request.getNeedVerifyZeroDevice();
  }

  if (!!request.hasOfficeSiteName()) {
    query["OfficeSiteName"] = request.getOfficeSiteName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVerifyCode()) {
    query["VerifyCode"] = request.getVerifyCode();
  }

  if (!!request.hasVpcType()) {
    query["VpcType"] = request.getVpcType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSimpleOfficeSite"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSimpleOfficeSiteResponse>();
}

/**
 * @summary Elastic Desktop Service (EDS) supports two types of accounts: convenience accounts and enterprise AD accounts. Use this API to create an office network (formerly a workspace) that uses convenience accounts.
 *
 * @param request CreateSimpleOfficeSiteRequest
 * @return CreateSimpleOfficeSiteResponse
 */
CreateSimpleOfficeSiteResponse Client::createSimpleOfficeSite(const CreateSimpleOfficeSiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSimpleOfficeSiteWithOptions(request, runtime);
}

/**
 * @summary Create a snapshot for a disk of a cloud computer to back up or restore the data on the disk.
 *
 * @description The cloud computer must be in the **Running** or **Stopped** state.
 *
 * @param request CreateSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshotWithOptions(const CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnapshotName()) {
    query["SnapshotName"] = request.getSnapshotName();
  }

  if (!!request.hasSourceDiskType()) {
    query["SourceDiskType"] = request.getSourceDiskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSnapshot"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSnapshotResponse>();
}

/**
 * @summary Create a snapshot for a disk of a cloud computer to back up or restore the data on the disk.
 *
 * @description The cloud computer must be in the **Running** or **Stopped** state.
 *
 * @param request CreateSnapshotRequest
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshot(const CreateSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSnapshotWithOptions(request, runtime);
}

/**
 * @summary 添加SNAT条目
 *
 * @param request CreateSnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSnatEntryResponse
 */
CreateSnatEntryResponse Client::createSnatEntryWithOptions(const CreateSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEipAffinity()) {
    query["EipAffinity"] = request.getEipAffinity();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnatEntryName()) {
    query["SnatEntryName"] = request.getSnatEntryName();
  }

  if (!!request.hasSnatIp()) {
    query["SnatIp"] = request.getSnatIp();
  }

  if (!!request.hasSnatTableId()) {
    query["SnatTableId"] = request.getSnatTableId();
  }

  if (!!request.hasSourceCIDR()) {
    query["SourceCIDR"] = request.getSourceCIDR();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSnatEntry"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSnatEntryResponse>();
}

/**
 * @summary 添加SNAT条目
 *
 * @param request CreateSnatEntryRequest
 * @return CreateSnatEntryResponse
 */
CreateSnatEntryResponse Client::createSnatEntry(const CreateSnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSnatEntryWithOptions(request, runtime);
}

/**
 * @summary 新建子网
 *
 * @param request CreateSubnetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubnetResponse
 */
CreateSubnetResponse Client::createSubnetWithOptions(const CreateSubnetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSubnet"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubnetResponse>();
}

/**
 * @summary 新建子网
 *
 * @param request CreateSubnetRequest
 * @return CreateSubnetResponse
 */
CreateSubnetResponse Client::createSubnet(const CreateSubnetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSubnetWithOptions(request, runtime);
}

/**
 * @summary Creates a custom cloud computer template. A cloud computer template (or simply "template") simplifies the process of creating cloud computers by providing a predefined set of configurations. This eliminates the need to manually configure each setting, saving significant time and effort.
 *
 * @description When you call this operation, take note of the following item:
 * - Most parameters in templates are optional. When you create a template, Elastic Desktop Service (EDS) does not validate the existence or correctness of the parameter values you specify. The parameter values in the template are only verified when you use the template to create cloud computers.
 * - For parameters that include the region attribute in the template, it\\"s important to note that if the specified region doesn\\"t match the region where the template is used to create a cloud computer, those parameters will not take effect.
 *
 * @param request CreateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.getChargeType();
  }

  json bodyFlat = {};
  if (!!request.hasDataDiskList()) {
    bodyFlat["DataDiskList"] = request.getDataDiskList();
  }

  if (!!request.hasDefaultLanguage()) {
    body["DefaultLanguage"] = request.getDefaultLanguage();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    body["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPolicyGroupId()) {
    body["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasPostPaidAfterUsedUp()) {
    body["PostPaidAfterUsedUp"] = request.getPostPaidAfterUsedUp();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionConfigList()) {
    bodyFlat["RegionConfigList"] = request.getRegionConfigList();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceTagList()) {
    bodyFlat["ResourceTagList"] = request.getResourceTagList();
  }

  if (!!request.hasSiteConfigList()) {
    bodyFlat["SiteConfigList"] = request.getSiteConfigList();
  }

  if (!!request.hasSystemDiskPerformanceLevel()) {
    body["SystemDiskPerformanceLevel"] = request.getSystemDiskPerformanceLevel();
  }

  if (!!request.hasSystemDiskSize()) {
    body["SystemDiskSize"] = request.getSystemDiskSize();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTimerGroupId()) {
    body["TimerGroupId"] = request.getTimerGroupId();
  }

  if (!!request.hasUserDuration()) {
    body["UserDuration"] = request.getUserDuration();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateTemplate"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateResponse>();
}

/**
 * @summary Creates a custom cloud computer template. A cloud computer template (or simply "template") simplifies the process of creating cloud computers by providing a predefined set of configurations. This eliminates the need to manually configure each setting, saving significant time and effort.
 *
 * @description When you call this operation, take note of the following item:
 * - Most parameters in templates are optional. When you create a template, Elastic Desktop Service (EDS) does not validate the existence or correctness of the parameter values you specify. The parameter values in the template are only verified when you use the template to create cloud computers.
 * - For parameters that include the region attribute in the template, it\\"s important to note that if the specified region doesn\\"t match the region where the template is used to create a cloud computer, those parameters will not take effect.
 *
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes an automatic snapshot policy.
 *
 * @param request DeleteAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoSnapshotPolicyResponse
 */
DeleteAutoSnapshotPolicyResponse Client::deleteAutoSnapshotPolicyWithOptions(const DeleteAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAutoSnapshotPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAutoSnapshotPolicyResponse>();
}

/**
 * @summary Deletes an automatic snapshot policy.
 *
 * @param request DeleteAutoSnapshotPolicyRequest
 * @return DeleteAutoSnapshotPolicyResponse
 */
DeleteAutoSnapshotPolicyResponse Client::deleteAutoSnapshotPolicy(const DeleteAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes custom cloud computer templates.
 *
 * @param request DeleteBundlesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBundlesResponse
 */
DeleteBundlesResponse Client::deleteBundlesWithOptions(const DeleteBundlesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBundleId()) {
    query["BundleId"] = request.getBundleId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBundles"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBundlesResponse>();
}

/**
 * @summary Deletes custom cloud computer templates.
 *
 * @param request DeleteBundlesRequest
 * @return DeleteBundlesResponse
 */
DeleteBundlesResponse Client::deleteBundles(const DeleteBundlesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBundlesWithOptions(request, runtime);
}

/**
 * @summary Deletes a file or folder from a cloud drive.
 *
 * @param request DeleteCdsFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCdsFileResponse
 */
DeleteCdsFileResponse Client::deleteCdsFileWithOptions(const DeleteCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCdsFile"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCdsFileResponse>();
}

/**
 * @summary Deletes a file or folder from a cloud drive.
 *
 * @param request DeleteCdsFileRequest
 * @return DeleteCdsFileResponse
 */
DeleteCdsFileResponse Client::deleteCdsFile(const DeleteCdsFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCdsFileWithOptions(request, runtime);
}

/**
 * @summary Deletes a non-region-specific policy.
 *
 * @param request DeleteCenterPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCenterPolicyResponse
 */
DeleteCenterPolicyResponse Client::deleteCenterPolicyWithOptions(const DeleteCenterPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasPolicyGroupIds()) {
    query["PolicyGroupIds"] = request.getPolicyGroupIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCenterPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCenterPolicyResponse>();
}

/**
 * @summary Deletes a non-region-specific policy.
 *
 * @param request DeleteCenterPolicyRequest
 * @return DeleteCenterPolicyResponse
 */
DeleteCenterPolicyResponse Client::deleteCenterPolicy(const DeleteCenterPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCenterPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes team spaces.
 *
 * @param request DeleteCloudDriveGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudDriveGroupsResponse
 */
DeleteCloudDriveGroupsResponse Client::deleteCloudDriveGroupsWithOptions(const DeleteCloudDriveGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudDriveGroups"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudDriveGroupsResponse>();
}

/**
 * @summary Deletes team spaces.
 *
 * @param request DeleteCloudDriveGroupsRequest
 * @return DeleteCloudDriveGroupsResponse
 */
DeleteCloudDriveGroupsResponse Client::deleteCloudDriveGroups(const DeleteCloudDriveGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudDriveGroupsWithOptions(request, runtime);
}

/**
 * @summary Delete the personal drive of a user in WUYING Workspace.
 *
 * @param request DeleteCloudDriveUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudDriveUsersResponse
 */
DeleteCloudDriveUsersResponse Client::deleteCloudDriveUsersWithOptions(const DeleteCloudDriveUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudDriveUsers"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudDriveUsersResponse>();
}

/**
 * @summary Delete the personal drive of a user in WUYING Workspace.
 *
 * @param request DeleteCloudDriveUsersRequest
 * @return DeleteCloudDriveUsersResponse
 */
DeleteCloudDriveUsersResponse Client::deleteCloudDriveUsers(const DeleteCloudDriveUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudDriveUsersWithOptions(request, runtime);
}

/**
 * @summary Deletes a configuration group.
 *
 * @param request DeleteConfigGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConfigGroupResponse
 */
DeleteConfigGroupResponse Client::deleteConfigGroupWithOptions(const DeleteConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConfigGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConfigGroupResponse>();
}

/**
 * @summary Deletes a configuration group.
 *
 * @param request DeleteConfigGroupRequest
 * @return DeleteConfigGroupResponse
 */
DeleteConfigGroupResponse Client::deleteConfigGroup(const DeleteConfigGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConfigGroupWithOptions(request, runtime);
}

/**
 * @summary Release a shared cloud computer.
 *
 * @description - Before you call this operation, make sure that the shared desktop group contains no connected desktops or authorized users.
 * - You cannot delete a subscription desktop group if the subscription desktops in the group have not expired.
 * - If you delete a pay-as-you-go desktop group, the pay-as-you-go desktops in the group are also released.
 *
 * @param request DeleteDesktopGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDesktopGroupResponse
 */
DeleteDesktopGroupResponse Client::deleteDesktopGroupWithOptions(const DeleteDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDesktopGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDesktopGroupResponse>();
}

/**
 * @summary Release a shared cloud computer.
 *
 * @description - Before you call this operation, make sure that the shared desktop group contains no connected desktops or authorized users.
 * - You cannot delete a subscription desktop group if the subscription desktops in the group have not expired.
 * - If you delete a pay-as-you-go desktop group, the pay-as-you-go desktops in the group are also released.
 *
 * @param request DeleteDesktopGroupRequest
 * @return DeleteDesktopGroupResponse
 */
DeleteDesktopGroupResponse Client::deleteDesktopGroup(const DeleteDesktopGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDesktopGroupWithOptions(request, runtime);
}

/**
 * @summary Releases one or more pay-as-you-go or expired subscription cloud computers.
 *
 * @param request DeleteDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDesktopsResponse
 */
DeleteDesktopsResponse Client::deleteDesktopsWithOptions(const DeleteDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDesktopsResponse>();
}

/**
 * @summary Releases one or more pay-as-you-go or expired subscription cloud computers.
 *
 * @param request DeleteDesktopsRequest
 * @return DeleteDesktopsResponse
 */
DeleteDesktopsResponse Client::deleteDesktops(const DeleteDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDesktopsWithOptions(request, runtime);
}

/**
 * @summary Deletes trusted devices.
 *
 * @description You can call the operation to manage client devices.
 *
 * @param request DeleteDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDevicesResponse
 */
DeleteDevicesResponse Client::deleteDevicesWithOptions(const DeleteDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasDeviceIds()) {
    query["DeviceIds"] = request.getDeviceIds();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDevices"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDevicesResponse>();
}

/**
 * @summary Deletes trusted devices.
 *
 * @description You can call the operation to manage client devices.
 *
 * @param request DeleteDevicesRequest
 * @return DeleteDevicesResponse
 */
DeleteDevicesResponse Client::deleteDevices(const DeleteDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDevicesWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more directories.
 *
 * @description You cannot delete a directory that has a cloud computer or is used by a cloud computer.
 *
 * @param request DeleteDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDirectoriesResponse
 */
DeleteDirectoriesResponse Client::deleteDirectoriesWithOptions(const DeleteDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDirectories"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDirectoriesResponse>();
}

/**
 * @summary Deletes one or more directories.
 *
 * @description You cannot delete a directory that has a cloud computer or is used by a cloud computer.
 *
 * @param request DeleteDirectoriesRequest
 * @return DeleteDirectoriesResponse
 */
DeleteDirectoriesResponse Client::deleteDirectories(const DeleteDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Deletes a drive.
 *
 * @param request DeleteDriveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDriveResponse
 */
DeleteDriveResponse Client::deleteDriveWithOptions(const DeleteDriveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDriveId()) {
    query["DriveId"] = request.getDriveId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDrive"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDriveResponse>();
}

/**
 * @summary Deletes a drive.
 *
 * @param request DeleteDriveRequest
 * @return DeleteDriveResponse
 */
DeleteDriveResponse Client::deleteDrive(const DeleteDriveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDriveWithOptions(request, runtime);
}

/**
 * @param request DeleteEduRoomRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEduRoomResponse
 */
DeleteEduRoomResponse Client::deleteEduRoomWithOptions(const DeleteEduRoomRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEduRoomId()) {
    query["EduRoomId"] = request.getEduRoomId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEduRoom"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEduRoomResponse>();
}

/**
 * @param request DeleteEduRoomRequest
 * @return DeleteEduRoomResponse
 */
DeleteEduRoomResponse Client::deleteEduRoom(const DeleteEduRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEduRoomWithOptions(request, runtime);
}

/**
 * @summary 删除DNAT条目
 *
 * @param request DeleteForwardEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteForwardEntryResponse
 */
DeleteForwardEntryResponse Client::deleteForwardEntryWithOptions(const DeleteForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForwardEntryId()) {
    query["ForwardEntryId"] = request.getForwardEntryId();
  }

  if (!!request.hasForwardTableId()) {
    query["ForwardTableId"] = request.getForwardTableId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteForwardEntry"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteForwardEntryResponse>();
}

/**
 * @summary 删除DNAT条目
 *
 * @param request DeleteForwardEntryRequest
 * @return DeleteForwardEntryResponse
 */
DeleteForwardEntryResponse Client::deleteForwardEntry(const DeleteForwardEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteForwardEntryWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more custom images.
 *
 * @description - Images include system images and custom images. System images cannot be deleted.
 * - If an image that you want to delete is referenced by a cloud computer template, call the [DeleteBundles](https://help.aliyun.com/document_detail/436972.html) operation to delete the cloud computer template before you delete the image.
 *
 * @param request DeleteImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImagesResponse
 */
DeleteImagesResponse Client::deleteImagesWithOptions(const DeleteImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteCascadedBundle()) {
    query["DeleteCascadedBundle"] = request.getDeleteCascadedBundle();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteImages"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteImagesResponse>();
}

/**
 * @summary Deletes one or more custom images.
 *
 * @description - Images include system images and custom images. System images cannot be deleted.
 * - If an image that you want to delete is referenced by a cloud computer template, call the [DeleteBundles](https://help.aliyun.com/document_detail/436972.html) operation to delete the cloud computer template before you delete the image.
 *
 * @param request DeleteImagesRequest
 * @return DeleteImagesResponse
 */
DeleteImagesResponse Client::deleteImages(const DeleteImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImagesWithOptions(request, runtime);
}

/**
 * @summary Deletes NAS file systems.
 *
 * @description Before you delete a File Storage NAS (NAS) file system, make sure that the data you want to retain is backed up.
 * >Warning: 
 * If a NAS file system is deleted, data stored in the NAS file system cannot be restored. Proceed with caution when you delete NAS file systems.
 *
 * @param request DeleteNASFileSystemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNASFileSystemsResponse
 */
DeleteNASFileSystemsResponse Client::deleteNASFileSystemsWithOptions(const DeleteNASFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNASFileSystems"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNASFileSystemsResponse>();
}

/**
 * @summary Deletes NAS file systems.
 *
 * @description Before you delete a File Storage NAS (NAS) file system, make sure that the data you want to retain is backed up.
 * >Warning: 
 * If a NAS file system is deleted, data stored in the NAS file system cannot be restored. Proceed with caution when you delete NAS file systems.
 *
 * @param request DeleteNASFileSystemsRequest
 * @return DeleteNASFileSystemsResponse
 */
DeleteNASFileSystemsResponse Client::deleteNASFileSystems(const DeleteNASFileSystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNASFileSystemsWithOptions(request, runtime);
}

/**
 * @summary 删除NAT网关
 *
 * @param request DeleteNatGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNatGatewayResponse
 */
DeleteNatGatewayResponse Client::deleteNatGatewayWithOptions(const DeleteNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNatGateway"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNatGatewayResponse>();
}

/**
 * @summary 删除NAT网关
 *
 * @param request DeleteNatGatewayRequest
 * @return DeleteNatGatewayResponse
 */
DeleteNatGatewayResponse Client::deleteNatGateway(const DeleteNatGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNatGatewayWithOptions(request, runtime);
}

/**
 * @summary You can delete one or more public network premium bandwidth allocations.
 *
 * @param request DeleteNetworkPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkPackagesResponse
 */
DeleteNetworkPackagesResponse Client::deleteNetworkPackagesWithOptions(const DeleteNetworkPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkPackageId()) {
    query["NetworkPackageId"] = request.getNetworkPackageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkPackages"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkPackagesResponse>();
}

/**
 * @summary You can delete one or more public network premium bandwidth allocations.
 *
 * @param request DeleteNetworkPackagesRequest
 * @return DeleteNetworkPackagesResponse
 */
DeleteNetworkPackagesResponse Client::deleteNetworkPackages(const DeleteNetworkPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkPackagesWithOptions(request, runtime);
}

/**
 * @summary Deletes a Global Accelerator (GA) configuration.
 *
 * @param request DeleteOfficeSiteAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOfficeSiteAcceleratorResponse
 */
DeleteOfficeSiteAcceleratorResponse Client::deleteOfficeSiteAcceleratorWithOptions(const DeleteOfficeSiteAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOfficeSiteAccelerator"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOfficeSiteAcceleratorResponse>();
}

/**
 * @summary Deletes a Global Accelerator (GA) configuration.
 *
 * @param request DeleteOfficeSiteAcceleratorRequest
 * @return DeleteOfficeSiteAcceleratorResponse
 */
DeleteOfficeSiteAcceleratorResponse Client::deleteOfficeSiteAccelerator(const DeleteOfficeSiteAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOfficeSiteAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Deletes office networks (formerly workspaces).
 *
 * @description Before you delete an office network, make sure that the following operations are complete:
 * - All cloud computers in the office network are released.
 * - The data that you want to retain is backed up.
 * > Resources and data on cloud computers in an office network cannot be restored after you delete it. Proceed with caution.
 *
 * @param request DeleteOfficeSitesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOfficeSitesResponse
 */
DeleteOfficeSitesResponse Client::deleteOfficeSitesWithOptions(const DeleteOfficeSitesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOfficeSites"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOfficeSitesResponse>();
}

/**
 * @summary Deletes office networks (formerly workspaces).
 *
 * @description Before you delete an office network, make sure that the following operations are complete:
 * - All cloud computers in the office network are released.
 * - The data that you want to retain is backed up.
 * > Resources and data on cloud computers in an office network cannot be restored after you delete it. Proceed with caution.
 *
 * @param request DeleteOfficeSitesRequest
 * @return DeleteOfficeSitesResponse
 */
DeleteOfficeSitesResponse Client::deleteOfficeSites(const DeleteOfficeSitesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOfficeSitesWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more custom cloud computer policies.
 *
 * @description - You cannot delete the cloud computer policy created by the Elastic Desktop Service (EDS) system.
 * - You cannot delete the cloud computer policies that are associated with cloud computers.
 *
 * @param request DeletePolicyGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyGroupsResponse
 */
DeletePolicyGroupsResponse Client::deletePolicyGroupsWithOptions(const DeletePolicyGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicyGroups"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyGroupsResponse>();
}

/**
 * @summary Deletes one or more custom cloud computer policies.
 *
 * @description - You cannot delete the cloud computer policy created by the Elastic Desktop Service (EDS) system.
 * - You cannot delete the cloud computer policies that are associated with cloud computers.
 *
 * @param request DeletePolicyGroupsRequest
 * @return DeletePolicyGroupsResponse
 */
DeletePolicyGroupsResponse Client::deletePolicyGroups(const DeletePolicyGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyGroupsWithOptions(request, runtime);
}

/**
 * @summary Delete a rate-limiting rule.
 *
 * @param request DeleteQosRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQosRulesResponse
 */
DeleteQosRulesResponse Client::deleteQosRulesWithOptions(const DeleteQosRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQosRuleId()) {
    query["QosRuleId"] = request.getQosRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQosRules"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQosRulesResponse>();
}

/**
 * @summary Delete a rate-limiting rule.
 *
 * @param request DeleteQosRulesRequest
 * @return DeleteQosRulesResponse
 */
DeleteQosRulesResponse Client::deleteQosRules(const DeleteQosRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQosRulesWithOptions(request, runtime);
}

/**
 * @summary 删除路由条目
 *
 * @param request DeleteRouteEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRouteEntryResponse
 */
DeleteRouteEntryResponse Client::deleteRouteEntryWithOptions(const DeleteRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationCidrBlock()) {
    query["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasNextHopId()) {
    query["NextHopId"] = request.getNextHopId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRouteEntryId()) {
    query["RouteEntryId"] = request.getRouteEntryId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRouteEntry"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRouteEntryResponse>();
}

/**
 * @summary 删除路由条目
 *
 * @param request DeleteRouteEntryRequest
 * @return DeleteRouteEntryResponse
 */
DeleteRouteEntryResponse Client::deleteRouteEntry(const DeleteRouteEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRouteEntryWithOptions(request, runtime);
}

/**
 * @summary 删除自定义路由表
 *
 * @param request DeleteRouteTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRouteTableResponse
 */
DeleteRouteTableResponse Client::deleteRouteTableWithOptions(const DeleteRouteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRouteTable"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRouteTableResponse>();
}

/**
 * @summary 删除自定义路由表
 *
 * @param request DeleteRouteTableRequest
 * @return DeleteRouteTableResponse
 */
DeleteRouteTableResponse Client::deleteRouteTable(const DeleteRouteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRouteTableWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more snapshots.
 *
 * @description If the IDs of the snapshots that you specify do not exist, requests are ignored.
 *
 * @param request DeleteSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshotWithOptions(const DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnapshot"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnapshotResponse>();
}

/**
 * @summary Deletes one or more snapshots.
 *
 * @description If the IDs of the snapshots that you specify do not exist, requests are ignored.
 *
 * @param request DeleteSnapshotRequest
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshot(const DeleteSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnapshotWithOptions(request, runtime);
}

/**
 * @summary 删除SNAT条目
 *
 * @param request DeleteSnatEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnatEntryResponse
 */
DeleteSnatEntryResponse Client::deleteSnatEntryWithOptions(const DeleteSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnatEntryId()) {
    query["SnatEntryId"] = request.getSnatEntryId();
  }

  if (!!request.hasSnatTableId()) {
    query["SnatTableId"] = request.getSnatTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnatEntry"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnatEntryResponse>();
}

/**
 * @summary 删除SNAT条目
 *
 * @param request DeleteSnatEntryRequest
 * @return DeleteSnatEntryResponse
 */
DeleteSnatEntryResponse Client::deleteSnatEntry(const DeleteSnatEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnatEntryWithOptions(request, runtime);
}

/**
 * @summary 删除子网
 *
 * @param request DeleteSubnetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSubnetResponse
 */
DeleteSubnetResponse Client::deleteSubnetWithOptions(const DeleteSubnetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSubnetId()) {
    query["SubnetId"] = request.getSubnetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSubnet"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSubnetResponse>();
}

/**
 * @summary 删除子网
 *
 * @param request DeleteSubnetRequest
 * @return DeleteSubnetResponse
 */
DeleteSubnetResponse Client::deleteSubnet(const DeleteSubnetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSubnetWithOptions(request, runtime);
}

/**
 * @summary Deletes custom cloud computer templates.
 *
 * @description Deleting a template does not affect cloud computers created from it or the associated resources.
 *
 * @param request DeleteTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplatesResponse
 */
DeleteTemplatesResponse Client::deleteTemplatesWithOptions(const DeleteTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasTemplateIds()) {
    body["TemplateIds"] = request.getTemplateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteTemplates"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplatesResponse>();
}

/**
 * @summary Deletes custom cloud computer templates.
 *
 * @description Deleting a template does not affect cloud computers created from it or the associated resources.
 *
 * @param request DeleteTemplatesRequest
 * @return DeleteTemplatesResponse
 */
DeleteTemplatesResponse Client::deleteTemplates(const DeleteTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplatesWithOptions(request, runtime);
}

/**
 * @summary Removes a virtual multi-factor authentication (MFA) device that is associated with an Active Directory (AD) account.
 *
 * @description If an MFA device is deleted, the device is unbound, reset, and disabled. When an Active Directory (AD) user wants to connect to the cloud desktop that is bound to the MFA device, the AD user must bind a new MFA device.
 *
 * @param request DeleteVirtualMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVirtualMFADeviceResponse
 */
DeleteVirtualMFADeviceResponse Client::deleteVirtualMFADeviceWithOptions(const DeleteVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVirtualMFADevice"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVirtualMFADeviceResponse>();
}

/**
 * @summary Removes a virtual multi-factor authentication (MFA) device that is associated with an Active Directory (AD) account.
 *
 * @description If an MFA device is deleted, the device is unbound, reset, and disabled. When an Active Directory (AD) user wants to connect to the cloud desktop that is bound to the MFA device, the AD user must bind a new MFA device.
 *
 * @param request DeleteVirtualMFADeviceRequest
 * @return DeleteVirtualMFADeviceResponse
 */
DeleteVirtualMFADeviceResponse Client::deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVirtualMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an access control list (ACL) of an office network or a cloud computer.
 *
 * @param request DescribeAclEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclEntriesResponse
 */
DescribeAclEntriesResponse Client::describeAclEntriesWithOptions(const DescribeAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAclEntries"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclEntriesResponse>();
}

/**
 * @summary Queries the details of an access control list (ACL) of an office network or a cloud computer.
 *
 * @param request DescribeAclEntriesRequest
 * @return DescribeAclEntriesResponse
 */
DescribeAclEntriesResponse Client::describeAclEntries(const DescribeAclEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of automatic snapshot policies.
 *
 * @param request DescribeAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoSnapshotPolicyResponse
 */
DescribeAutoSnapshotPolicyResponse Client::describeAutoSnapshotPolicyWithOptions(const DescribeAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoSnapshotPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoSnapshotPolicyResponse>();
}

/**
 * @summary Queries the details of automatic snapshot policies.
 *
 * @param request DescribeAutoSnapshotPolicyRequest
 * @return DescribeAutoSnapshotPolicyResponse
 */
DescribeAutoSnapshotPolicyResponse Client::describeAutoSnapshotPolicy(const DescribeAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the details of cloud computer templates.
 *
 * @param request DescribeBundlesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBundlesResponse
 */
DescribeBundlesResponse Client::describeBundlesWithOptions(const DescribeBundlesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBundleId()) {
    query["BundleId"] = request.getBundleId();
  }

  if (!!request.hasBundleType()) {
    query["BundleType"] = request.getBundleType();
  }

  if (!!request.hasCheckStock()) {
    query["CheckStock"] = request.getCheckStock();
  }

  if (!!request.hasCpuCount()) {
    query["CpuCount"] = request.getCpuCount();
  }

  if (!!request.hasDesktopTypeFamily()) {
    query["DesktopTypeFamily"] = request.getDesktopTypeFamily();
  }

  if (!!request.hasFotaChannel()) {
    query["FotaChannel"] = request.getFotaChannel();
  }

  if (!!request.hasFromDesktopGroup()) {
    query["FromDesktopGroup"] = request.getFromDesktopGroup();
  }

  if (!!request.hasGpuCount()) {
    query["GpuCount"] = request.getGpuCount();
  }

  if (!!request.hasGpuDriverType()) {
    query["GpuDriverType"] = request.getGpuDriverType();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMemorySize()) {
    query["MemorySize"] = request.getMemorySize();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSelectedBundle()) {
    query["SelectedBundle"] = request.getSelectedBundle();
  }

  if (!!request.hasSessionType()) {
    query["SessionType"] = request.getSessionType();
  }

  if (!!request.hasSupportMultiSession()) {
    query["SupportMultiSession"] = request.getSupportMultiSession();
  }

  if (!!request.hasVolumeEncryptionEnabled()) {
    query["VolumeEncryptionEnabled"] = request.getVolumeEncryptionEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBundles"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBundlesResponse>();
}

/**
 * @summary Queries the details of cloud computer templates.
 *
 * @param request DescribeBundlesRequest
 * @return DescribeBundlesResponse
 */
DescribeBundlesResponse Client::describeBundles(const DescribeBundlesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBundlesWithOptions(request, runtime);
}

/**
 * @summary Queries file sharing links of a cloud disk in Cloud Drive Service.
 *
 * @param request DescribeCdsFileShareLinksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdsFileShareLinksResponse
 */
DescribeCdsFileShareLinksResponse Client::describeCdsFileShareLinksWithOptions(const DescribeCdsFileShareLinksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasCreators()) {
    query["Creators"] = request.getCreators();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasShareId()) {
    query["ShareId"] = request.getShareId();
  }

  if (!!request.hasShareName()) {
    query["ShareName"] = request.getShareName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdsFileShareLinks"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdsFileShareLinksResponse>();
}

/**
 * @summary Queries file sharing links of a cloud disk in Cloud Drive Service.
 *
 * @param request DescribeCdsFileShareLinksRequest
 * @return DescribeCdsFileShareLinksResponse
 */
DescribeCdsFileShareLinksResponse Client::describeCdsFileShareLinks(const DescribeCdsFileShareLinksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdsFileShareLinksWithOptions(request, runtime);
}

/**
 * @summary Queries the details of all Cloud Enterprise Network (CEN) instances within an Alibaba Cloud account.
 *
 * @param request DescribeCensRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCensResponse
 */
DescribeCensResponse Client::describeCensWithOptions(const DescribeCensRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCens"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCensResponse>();
}

/**
 * @summary Queries the details of all Cloud Enterprise Network (CEN) instances within an Alibaba Cloud account.
 *
 * @param request DescribeCensRequest
 * @return DescribeCensResponse
 */
DescribeCensResponse Client::describeCens(const DescribeCensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCensWithOptions(request, runtime);
}

/**
 * @summary Queries the details of region-free policies.
 *
 * @param request DescribeCenterPolicyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCenterPolicyListResponse
 */
DescribeCenterPolicyListResponse Client::describeCenterPolicyListWithOptions(const DescribeCenterPolicyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcademicProxy()) {
    query["AcademicProxy"] = request.getAcademicProxy();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasModelLibrary()) {
    query["ModelLibrary"] = request.getModelLibrary();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasPortProxy()) {
    query["PortProxy"] = request.getPortProxy();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCenterPolicyList"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCenterPolicyListResponse>();
}

/**
 * @summary Queries the details of region-free policies.
 *
 * @param request DescribeCenterPolicyListRequest
 * @return DescribeCenterPolicyListResponse
 */
DescribeCenterPolicyListResponse Client::describeCenterPolicyList(const DescribeCenterPolicyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCenterPolicyListWithOptions(request, runtime);
}

/**
 * @summary Queries the operation logs of end users, including events such as cloud computer startup, shutdown, and session disconnection.
 *
 * @param request DescribeClientEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClientEventsResponse
 */
DescribeClientEventsResponse Client::describeClientEventsWithOptions(const DescribeClientEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopIp()) {
    query["DesktopIp"] = request.getDesktopIp();
  }

  if (!!request.hasDesktopName()) {
    query["DesktopName"] = request.getDesktopName();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasEndUserIds()) {
    query["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasEventTypes()) {
    query["EventTypes"] = request.getEventTypes();
  }

  if (!!request.hasFillHardwareInfo()) {
    query["FillHardwareInfo"] = request.getFillHardwareInfo();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOfficeSiteName()) {
    query["OfficeSiteName"] = request.getOfficeSiteName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClientEvents"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClientEventsResponse>();
}

/**
 * @summary Queries the operation logs of end users, including events such as cloud computer startup, shutdown, and session disconnection.
 *
 * @param request DescribeClientEventsRequest
 * @return DescribeClientEventsResponse
 */
DescribeClientEventsResponse Client::describeClientEvents(const DescribeClientEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClientEventsWithOptions(request, runtime);
}

/**
 * @summary Lists cloud disk group drives.
 *
 * @description Cloud disk team drives are synced from the Alibaba Cloud Workspace client to User Management > organization chart. To use a team drive, you can move users to the target organization in the User Management interface. Users then see the team drive menu bar in the cloud disk client.
 *
 * @param request DescribeCloudDiskGroupDrivesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudDiskGroupDrivesResponse
 */
DescribeCloudDiskGroupDrivesResponse Client::describeCloudDiskGroupDrivesWithOptions(const DescribeCloudDiskGroupDrivesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudDiskGroupDrives"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudDiskGroupDrivesResponse>();
}

/**
 * @summary Lists cloud disk group drives.
 *
 * @description Cloud disk team drives are synced from the Alibaba Cloud Workspace client to User Management > organization chart. To use a team drive, you can move users to the target organization in the User Management interface. Users then see the team drive menu bar in the cloud disk client.
 *
 * @param request DescribeCloudDiskGroupDrivesRequest
 * @return DescribeCloudDiskGroupDrivesResponse
 */
DescribeCloudDiskGroupDrivesResponse Client::describeCloudDiskGroupDrives(const DescribeCloudDiskGroupDrivesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudDiskGroupDrivesWithOptions(request, runtime);
}

/**
 * @summary Lists cloud disk groups.
 *
 * @description After you enable security protection, the system automatically scans Cloud Desktop for system vulnerabilities once a day.
 *
 * @param request DescribeCloudDiskGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudDiskGroupsResponse
 */
DescribeCloudDiskGroupsResponse Client::describeCloudDiskGroupsWithOptions(const DescribeCloudDiskGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasParentOrgId()) {
    query["ParentOrgId"] = request.getParentOrgId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudDiskGroups"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudDiskGroupsResponse>();
}

/**
 * @summary Lists cloud disk groups.
 *
 * @description After you enable security protection, the system automatically scans Cloud Desktop for system vulnerabilities once a day.
 *
 * @param request DescribeCloudDiskGroupsRequest
 * @return DescribeCloudDiskGroupsResponse
 */
DescribeCloudDiskGroupsResponse Client::describeCloudDiskGroups(const DescribeCloudDiskGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudDiskGroupsWithOptions(request, runtime);
}

/**
 * @summary Query the list and basic information of all team shared drives in the enterprise cloud drive.
 *
 * @param request DescribeCloudDriveGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudDriveGroupsResponse
 */
DescribeCloudDriveGroupsResponse Client::describeCloudDriveGroupsWithOptions(const DescribeCloudDriveGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDirectoryName()) {
    query["DirectoryName"] = request.getDirectoryName();
  }

  if (!!request.hasDriveStatus()) {
    query["DriveStatus"] = request.getDriveStatus();
  }

  if (!!request.hasDriveType()) {
    query["DriveType"] = request.getDriveType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasParentGroupId()) {
    query["ParentGroupId"] = request.getParentGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudDriveGroups"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudDriveGroupsResponse>();
}

/**
 * @summary Query the list and basic information of all team shared drives in the enterprise cloud drive.
 *
 * @param request DescribeCloudDriveGroupsRequest
 * @return DescribeCloudDriveGroupsResponse
 */
DescribeCloudDriveGroupsResponse Client::describeCloudDriveGroups(const DescribeCloudDriveGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudDriveGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the permission settings of an enterprise cloud drive.
 *
 * @param request DescribeCloudDrivePermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudDrivePermissionsResponse
 */
DescribeCloudDrivePermissionsResponse Client::describeCloudDrivePermissionsWithOptions(const DescribeCloudDrivePermissionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudDrivePermissions"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudDrivePermissionsResponse>();
}

/**
 * @summary Queries the permission settings of an enterprise cloud drive.
 *
 * @param request DescribeCloudDrivePermissionsRequest
 * @return DescribeCloudDrivePermissionsResponse
 */
DescribeCloudDrivePermissionsResponse Client::describeCloudDrivePermissions(const DescribeCloudDrivePermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudDrivePermissionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of personal drives and their basic information for all users in an enterprise network drive.
 *
 * @param request DescribeCloudDriveUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudDriveUsersResponse
 */
DescribeCloudDriveUsersResponse Client::describeCloudDriveUsersWithOptions(const DescribeCloudDriveUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudDriveUsers"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudDriveUsersResponse>();
}

/**
 * @summary Retrieves a list of personal drives and their basic information for all users in an enterprise network drive.
 *
 * @param request DescribeCloudDriveUsersRequest
 * @return DescribeCloudDriveUsersResponse
 */
DescribeCloudDriveUsersResponse Client::describeCloudDriveUsers(const DescribeCloudDriveUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudDriveUsersWithOptions(request, runtime);
}

/**
 * @summary Query the configuration group list information.
 *
 * @param request DescribeConfigGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConfigGroupResponse
 */
DescribeConfigGroupResponse Client::describeConfigGroupWithOptions(const DescribeConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatuses()) {
    query["Statuses"] = request.getStatuses();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConfigGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConfigGroupResponse>();
}

/**
 * @summary Query the configuration group list information.
 *
 * @param request DescribeConfigGroupRequest
 * @return DescribeConfigGroupResponse
 */
DescribeConfigGroupResponse Client::describeConfigGroup(const DescribeConfigGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConfigGroupWithOptions(request, runtime);
}

/**
 * @summary Obtain the table header information of the WUYING Workspace list page.
 *
 * @param request DescribeCustomizedListHeadersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomizedListHeadersResponse
 */
DescribeCustomizedListHeadersResponse Client::describeCustomizedListHeadersWithOptions(const DescribeCustomizedListHeadersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLangType()) {
    query["LangType"] = request.getLangType();
  }

  if (!!request.hasListType()) {
    query["ListType"] = request.getListType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomizedListHeaders"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomizedListHeadersResponse>();
}

/**
 * @summary Obtain the table header information of the WUYING Workspace list page.
 *
 * @param request DescribeCustomizedListHeadersRequest
 * @return DescribeCustomizedListHeadersResponse
 */
DescribeCustomizedListHeadersResponse Client::describeCustomizedListHeaders(const DescribeCustomizedListHeadersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomizedListHeadersWithOptions(request, runtime);
}

/**
 * @summary Queries cloud computer shares.
 *
 * @param request DescribeDesktopGroupSessionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopGroupSessionsResponse
 */
DescribeDesktopGroupSessionsResponse Client::describeDesktopGroupSessionsWithOptions(const DescribeDesktopGroupSessionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopGroupIds()) {
    query["DesktopGroupIds"] = request.getDesktopGroupIds();
  }

  if (!!request.hasDesktopGroupName()) {
    query["DesktopGroupName"] = request.getDesktopGroupName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFillTerminalInfo()) {
    query["FillTerminalInfo"] = request.getFillTerminalInfo();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnType()) {
    query["OwnType"] = request.getOwnType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSessionStatus()) {
    query["SessionStatus"] = request.getSessionStatus();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktopGroupSessions"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopGroupSessionsResponse>();
}

/**
 * @summary Queries cloud computer shares.
 *
 * @param request DescribeDesktopGroupSessionsRequest
 * @return DescribeDesktopGroupSessionsResponse
 */
DescribeDesktopGroupSessionsResponse Client::describeDesktopGroupSessions(const DescribeDesktopGroupSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopGroupSessionsWithOptions(request, runtime);
}

/**
 * @summary Returns a detailed list of shared cloud desktops.
 *
 * @param request DescribeDesktopGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopGroupsResponse
 */
DescribeDesktopGroupsResponse Client::describeDesktopGroupsWithOptions(const DescribeDesktopGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBundleId()) {
    query["BundleId"] = request.getBundleId();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasDesktopGroupIds()) {
    query["DesktopGroupIds"] = request.getDesktopGroupIds();
  }

  if (!!request.hasDesktopGroupName()) {
    query["DesktopGroupName"] = request.getDesktopGroupName();
  }

  if (!!request.hasDesktopType()) {
    query["DesktopType"] = request.getDesktopType();
  }

  if (!!request.hasEndUserIds()) {
    query["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasExcludedEndUserIds()) {
    query["ExcludedEndUserIds"] = request.getExcludedEndUserIds();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMultiResource()) {
    query["MultiResource"] = request.getMultiResource();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOwnType()) {
    query["OwnType"] = request.getOwnType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasQosRuleId()) {
    query["QosRuleId"] = request.getQosRuleId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktopGroups"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopGroupsResponse>();
}

/**
 * @summary Returns a detailed list of shared cloud desktops.
 *
 * @param request DescribeDesktopGroupsRequest
 * @return DescribeDesktopGroupsResponse
 */
DescribeDesktopGroupsResponse Client::describeDesktopGroups(const DescribeDesktopGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopGroupsWithOptions(request, runtime);
}

/**
 * @summary Describes basic information about cloud desktops.
 *
 * @param request DescribeDesktopInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopInfoResponse
 */
DescribeDesktopInfoResponse Client::describeDesktopInfoWithOptions(const DescribeDesktopInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasNeedExtraInfo()) {
    query["NeedExtraInfo"] = request.getNeedExtraInfo();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktopInfo"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopInfoResponse>();
}

/**
 * @summary Describes basic information about cloud desktops.
 *
 * @param request DescribeDesktopInfoRequest
 * @return DescribeDesktopInfoResponse
 */
DescribeDesktopInfoResponse Client::describeDesktopInfo(const DescribeDesktopInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list and metadata of cloud desktops across all regions.
 *
 * @description This is a centralized API that only supports queries from the Shanghai and Singapore sites.
 *
 * @param request DescribeDesktopMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopMetadataResponse
 */
DescribeDesktopMetadataResponse Client::describeDesktopMetadataWithOptions(const DescribeDesktopMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreationTimeStart()) {
    query["CreationTimeStart"] = request.getCreationTimeStart();
  }

  if (!!request.hasDesktopIds()) {
    query["DesktopIds"] = request.getDesktopIds();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasIncludeDesktopGroup()) {
    query["IncludeDesktopGroup"] = request.getIncludeDesktopGroup();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetworkInterfaceIp()) {
    query["NetworkInterfaceIp"] = request.getNetworkInterfaceIp();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOperationTimeStart()) {
    query["OperationTimeStart"] = request.getOperationTimeStart();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSearchRegionId()) {
    query["SearchRegionId"] = request.getSearchRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktopMetadata"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopMetadataResponse>();
}

/**
 * @summary Queries the list and metadata of cloud desktops across all regions.
 *
 * @description This is a centralized API that only supports queries from the Shanghai and Singapore sites.
 *
 * @param request DescribeDesktopMetadataRequest
 * @return DescribeDesktopMetadataResponse
 */
DescribeDesktopMetadataResponse Client::describeDesktopMetadata(const DescribeDesktopMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopMetadataWithOptions(request, runtime);
}

/**
 * @summary 查询超卖组
 *
 * @param request DescribeDesktopOversoldGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopOversoldGroupResponse
 */
DescribeDesktopOversoldGroupResponse Client::describeDesktopOversoldGroupWithOptions(const DescribeDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOversoldGroupIds()) {
    query["OversoldGroupIds"] = request.getOversoldGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktopOversoldGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopOversoldGroupResponse>();
}

/**
 * @summary 查询超卖组
 *
 * @param request DescribeDesktopOversoldGroupRequest
 * @return DescribeDesktopOversoldGroupResponse
 */
DescribeDesktopOversoldGroupResponse Client::describeDesktopOversoldGroup(const DescribeDesktopOversoldGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopOversoldGroupWithOptions(request, runtime);
}

/**
 * @summary 查询超卖组用户
 *
 * @param request DescribeDesktopOversoldUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopOversoldUserResponse
 */
DescribeDesktopOversoldUserResponse Client::describeDesktopOversoldUserWithOptions(const DescribeDesktopOversoldUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasUserDesktopIds()) {
    query["UserDesktopIds"] = request.getUserDesktopIds();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktopOversoldUser"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopOversoldUserResponse>();
}

/**
 * @summary 查询超卖组用户
 *
 * @param request DescribeDesktopOversoldUserRequest
 * @return DescribeDesktopOversoldUserResponse
 */
DescribeDesktopOversoldUserResponse Client::describeDesktopOversoldUser(const DescribeDesktopOversoldUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopOversoldUserWithOptions(request, runtime);
}

/**
 * @summary 查询超卖用户组
 *
 * @param request DescribeDesktopOversoldUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopOversoldUserGroupResponse
 */
DescribeDesktopOversoldUserGroupResponse Client::describeDesktopOversoldUserGroupWithOptions(const DescribeDesktopOversoldUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.getUserGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktopOversoldUserGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopOversoldUserGroupResponse>();
}

/**
 * @summary 查询超卖用户组
 *
 * @param request DescribeDesktopOversoldUserGroupRequest
 * @return DescribeDesktopOversoldUserGroupResponse
 */
DescribeDesktopOversoldUserGroupResponse Client::describeDesktopOversoldUserGroup(const DescribeDesktopOversoldUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopOversoldUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed session information of a cloud computer.
 *
 * @description Only data within the last 30 days can be queried.
 *
 * @param request DescribeDesktopSessionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopSessionsResponse
 */
DescribeDesktopSessionsResponse Client::describeDesktopSessionsWithOptions(const DescribeDesktopSessionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckOsSession()) {
    query["CheckOsSession"] = request.getCheckOsSession();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopName()) {
    query["DesktopName"] = request.getDesktopName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasEndUserIdFilter()) {
    query["EndUserIdFilter"] = request.getEndUserIdFilter();
  }

  if (!!request.hasEndUserIds()) {
    query["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasFillHardwareInfo()) {
    query["FillHardwareInfo"] = request.getFillHardwareInfo();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSessionStatus()) {
    query["SessionStatus"] = request.getSessionStatus();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasSubPayType()) {
    query["SubPayType"] = request.getSubPayType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktopSessions"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopSessionsResponse>();
}

/**
 * @summary Queries the detailed session information of a cloud computer.
 *
 * @description Only data within the last 30 days can be queried.
 *
 * @param request DescribeDesktopSessionsRequest
 * @return DescribeDesktopSessionsResponse
 */
DescribeDesktopSessionsResponse Client::describeDesktopSessions(const DescribeDesktopSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopSessionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves cloud computer specifications.
 *
 * @param request DescribeDesktopTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopTypesResponse
 */
DescribeDesktopTypesResponse Client::describeDesktopTypesWithOptions(const DescribeDesktopTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppliedScope()) {
    query["AppliedScope"] = request.getAppliedScope();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasCpuCount()) {
    query["CpuCount"] = request.getCpuCount();
  }

  if (!!request.hasDesktopGroupIdForModify()) {
    query["DesktopGroupIdForModify"] = request.getDesktopGroupIdForModify();
  }

  if (!!request.hasDesktopIdForModify()) {
    query["DesktopIdForModify"] = request.getDesktopIdForModify();
  }

  if (!!request.hasDesktopScenario()) {
    query["DesktopScenario"] = request.getDesktopScenario();
  }

  if (!!request.hasDesktopTypeId()) {
    query["DesktopTypeId"] = request.getDesktopTypeId();
  }

  if (!!request.hasDesktopTypeIdList()) {
    query["DesktopTypeIdList"] = request.getDesktopTypeIdList();
  }

  if (!!request.hasGpuCount()) {
    query["GpuCount"] = request.getGpuCount();
  }

  if (!!request.hasGpuDriverType()) {
    query["GpuDriverType"] = request.getGpuDriverType();
  }

  if (!!request.hasGpuMemory()) {
    query["GpuMemory"] = request.getGpuMemory();
  }

  if (!!request.hasInstanceTypeFamily()) {
    query["InstanceTypeFamily"] = request.getInstanceTypeFamily();
  }

  if (!!request.hasMemorySize()) {
    query["MemorySize"] = request.getMemorySize();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasScopeSet()) {
    query["ScopeSet"] = request.getScopeSet();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  if (!!request.hasSupportMinSessionCount()) {
    query["SupportMinSessionCount"] = request.getSupportMinSessionCount();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktopTypes"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopTypesResponse>();
}

/**
 * @summary Retrieves cloud computer specifications.
 *
 * @param request DescribeDesktopTypesRequest
 * @return DescribeDesktopTypesResponse
 */
DescribeDesktopTypesResponse Client::describeDesktopTypes(const DescribeDesktopTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopTypesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of cloud computers.
 *
 * @param request DescribeDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopsResponse
 */
DescribeDesktopsResponse Client::describeDesktopsWithOptions(const DescribeDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopName()) {
    query["DesktopName"] = request.getDesktopName();
  }

  if (!!request.hasDesktopStatus()) {
    query["DesktopStatus"] = request.getDesktopStatus();
  }

  if (!!request.hasDesktopStatusList()) {
    query["DesktopStatusList"] = request.getDesktopStatusList();
  }

  if (!!request.hasDesktopType()) {
    query["DesktopType"] = request.getDesktopType();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasExcludedEndUserId()) {
    query["ExcludedEndUserId"] = request.getExcludedEndUserId();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.getExpiredTime();
  }

  if (!!request.hasFillResourceGroup()) {
    query["FillResourceGroup"] = request.getFillResourceGroup();
  }

  if (!!request.hasFilterDesktopGroup()) {
    query["FilterDesktopGroup"] = request.getFilterDesktopGroup();
  }

  if (!!request.hasGpuInstanceGroupId()) {
    query["GpuInstanceGroupId"] = request.getGpuInstanceGroupId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasIncludeAutoSnapshotPolicy()) {
    query["IncludeAutoSnapshotPolicy"] = request.getIncludeAutoSnapshotPolicy();
  }

  if (!!request.hasManagementFlag()) {
    query["ManagementFlag"] = request.getManagementFlag();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMultiResource()) {
    query["MultiResource"] = request.getMultiResource();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOfficeSiteName()) {
    query["OfficeSiteName"] = request.getOfficeSiteName();
  }

  if (!!request.hasOnlyDesktopGroup()) {
    query["OnlyDesktopGroup"] = request.getOnlyDesktopGroup();
  }

  if (!!request.hasOsTypes()) {
    query["OsTypes"] = request.getOsTypes();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasQosRuleId()) {
    query["QosRuleId"] = request.getQosRuleId();
  }

  if (!!request.hasQueryFotaUpdate()) {
    query["QueryFotaUpdate"] = request.getQueryFotaUpdate();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSnapshotPolicyId()) {
    query["SnapshotPolicyId"] = request.getSnapshotPolicyId();
  }

  if (!!request.hasSubPayType()) {
    query["SubPayType"] = request.getSubPayType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopsResponse>();
}

/**
 * @summary Queries the details of cloud computers.
 *
 * @param request DescribeDesktopsRequest
 * @return DescribeDesktopsResponse
 */
DescribeDesktopsResponse Client::describeDesktops(const DescribeDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopsWithOptions(request, runtime);
}

/**
 * @summary Find cloud computers in a shared cloud computer by billing method.
 *
 * @param request DescribeDesktopsInGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDesktopsInGroupResponse
 */
DescribeDesktopsInGroupResponse Client::describeDesktopsInGroupWithOptions(const DescribeDesktopsInGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomEndTimePeriod()) {
    query["CustomEndTimePeriod"] = request.getCustomEndTimePeriod();
  }

  if (!!request.hasCustomStartTimePeriod()) {
    query["CustomStartTimePeriod"] = request.getCustomStartTimePeriod();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasIgnoreDeleted()) {
    query["IgnoreDeleted"] = request.getIgnoreDeleted();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDesktopsInGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDesktopsInGroupResponse>();
}

/**
 * @summary Find cloud computers in a shared cloud computer by billing method.
 *
 * @param request DescribeDesktopsInGroupRequest
 * @return DescribeDesktopsInGroupResponse
 */
DescribeDesktopsInGroupResponse Client::describeDesktopsInGroup(const DescribeDesktopsInGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDesktopsInGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the list of trusted devices.
 *
 * @param request DescribeDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDevicesResponse
 */
DescribeDevicesResponse Client::describeDevicesWithOptions(const DescribeDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.getAdDomain();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDevices"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDevicesResponse>();
}

/**
 * @summary Queries the list of trusted devices.
 *
 * @param request DescribeDevicesRequest
 * @return DescribeDevicesResponse
 */
DescribeDevicesResponse Client::describeDevices(const DescribeDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDevicesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of directories.
 *
 * @param request DescribeDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDirectoriesResponse
 */
DescribeDirectoriesResponse Client::describeDirectoriesWithOptions(const DescribeDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDirectoryStatus()) {
    query["DirectoryStatus"] = request.getDirectoryStatus();
  }

  if (!!request.hasDirectoryType()) {
    query["DirectoryType"] = request.getDirectoryType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDirectories"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDirectoriesResponse>();
}

/**
 * @summary Queries the details of directories.
 *
 * @param request DescribeDirectoriesRequest
 * @return DescribeDirectoriesResponse
 */
DescribeDirectoriesResponse Client::describeDirectories(const DescribeDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Queries user-level storage resources.
 *
 * @param request DescribeDrivesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDrivesResponse
 */
DescribeDrivesResponse Client::describeDrivesWithOptions(const DescribeDrivesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainIds()) {
    query["DomainIds"] = request.getDomainIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDrives"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDrivesResponse>();
}

/**
 * @summary Queries user-level storage resources.
 *
 * @param request DescribeDrivesRequest
 * @return DescribeDrivesResponse
 */
DescribeDrivesResponse Client::describeDrives(const DescribeDrivesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDrivesWithOptions(request, runtime);
}

/**
 * @summary Queries data report export tasks.
 *
 * @param request DescribeEcdReportTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEcdReportTasksResponse
 */
DescribeEcdReportTasksResponse Client::describeEcdReportTasksWithOptions(const DescribeEcdReportTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
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

  if (!!request.hasSubType()) {
    query["SubType"] = request.getSubType();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEcdReportTasks"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEcdReportTasksResponse>();
}

/**
 * @summary Queries data report export tasks.
 *
 * @param request DescribeEcdReportTasksRequest
 * @return DescribeEcdReportTasksResponse
 */
DescribeEcdReportTasksResponse Client::describeEcdReportTasks(const DescribeEcdReportTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEcdReportTasksWithOptions(request, runtime);
}

/**
 * @summary Query the inbound bandwidth and outbound bandwidth of a cloud computer, or the inbound bandwidth and outbound bandwidth for public network access of premium public bandwidth, along with their monitoring data.
 *
 * @param request DescribeFlowMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowMetricResponse
 */
DescribeFlowMetricResponse Client::describeFlowMetricWithOptions(const DescribeFlowMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFlowMetric"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFlowMetricResponse>();
}

/**
 * @summary Query the inbound bandwidth and outbound bandwidth of a cloud computer, or the inbound bandwidth and outbound bandwidth for public network access of premium public bandwidth, along with their monitoring data.
 *
 * @param request DescribeFlowMetricRequest
 * @return DescribeFlowMetricResponse
 */
DescribeFlowMetricResponse Client::describeFlowMetric(const DescribeFlowMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowMetricWithOptions(request, runtime);
}

/**
 * @summary 查询DNAT条目
 *
 * @param request DescribeForwardTableEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeForwardTableEntriesResponse
 */
DescribeForwardTableEntriesResponse Client::describeForwardTableEntriesWithOptions(const DescribeForwardTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForwardEntryId()) {
    query["ForwardEntryId"] = request.getForwardEntryId();
  }

  if (!!request.hasForwardTableId()) {
    query["ForwardTableId"] = request.getForwardTableId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeForwardTableEntries"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeForwardTableEntriesResponse>();
}

/**
 * @summary 查询DNAT条目
 *
 * @param request DescribeForwardTableEntriesRequest
 * @return DescribeForwardTableEntriesResponse
 */
DescribeForwardTableEntriesResponse Client::describeForwardTableEntries(const DescribeForwardTableEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeForwardTableEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries information about the cloud computers whose images can be and are pending to be updated to the specified version.
 *
 * @param request DescribeFotaPendingDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFotaPendingDesktopsResponse
 */
DescribeFotaPendingDesktopsResponse Client::describeFotaPendingDesktopsWithOptions(const DescribeFotaPendingDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopName()) {
    query["DesktopName"] = request.getDesktopName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskUid()) {
    query["TaskUid"] = request.getTaskUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFotaPendingDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFotaPendingDesktopsResponse>();
}

/**
 * @summary Queries information about the cloud computers whose images can be and are pending to be updated to the specified version.
 *
 * @param request DescribeFotaPendingDesktopsRequest
 * @return DescribeFotaPendingDesktopsResponse
 */
DescribeFotaPendingDesktopsResponse Client::describeFotaPendingDesktops(const DescribeFotaPendingDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFotaPendingDesktopsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of image upgrade tasks.
 *
 * @param request DescribeFotaTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFotaTasksResponse
 */
DescribeFotaTasksResponse Client::describeFotaTasksWithOptions(const DescribeFotaTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFotaStatus()) {
    query["FotaStatus"] = request.getFotaStatus();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskUid()) {
    query["TaskUid"] = request.getTaskUid();
  }

  if (!!request.hasUserStatus()) {
    query["UserStatus"] = request.getUserStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFotaTasks"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFotaTasksResponse>();
}

/**
 * @summary Retrieves the list of image upgrade tasks.
 *
 * @param request DescribeFotaTasksRequest
 * @return DescribeFotaTasksResponse
 */
DescribeFotaTasksResponse Client::describeFotaTasks(const DescribeFotaTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFotaTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information of all recent cloud desktops and their usage duration records.
 *
 * @description - China site users should select Shanghai as the region. International site users should select Singapore.
 * - By default, both deleted and non-deleted cloud desktops are queried.
 * - Deleted cloud desktops can only be queried if they were deleted within the last three months.
 * - Sort conditions cannot be used together with other conditions.
 *
 * @param request DescribeGlobalDesktopRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalDesktopRecordsResponse
 */
DescribeGlobalDesktopRecordsResponse Client::describeGlobalDesktopRecordsWithOptions(const DescribeGlobalDesktopRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopName()) {
    query["DesktopName"] = request.getDesktopName();
  }

  if (!!request.hasDesktopStatusList()) {
    query["DesktopStatusList"] = request.getDesktopStatusList();
  }

  if (!!request.hasDesktopType()) {
    query["DesktopType"] = request.getDesktopType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasExcludeDesktopStatusList()) {
    query["ExcludeDesktopStatusList"] = request.getExcludeDesktopStatusList();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasSubPayType()) {
    query["SubPayType"] = request.getSubPayType();
  }

  if (!!request.hasUserNames()) {
    query["UserNames"] = request.getUserNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalDesktopRecords"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalDesktopRecordsResponse>();
}

/**
 * @summary Queries the basic information of all recent cloud desktops and their usage duration records.
 *
 * @description - China site users should select Shanghai as the region. International site users should select Singapore.
 * - By default, both deleted and non-deleted cloud desktops are queried.
 * - Deleted cloud desktops can only be queried if they were deleted within the last three months.
 * - Sort conditions cannot be used together with other conditions.
 *
 * @param request DescribeGlobalDesktopRecordsRequest
 * @return DescribeGlobalDesktopRecordsResponse
 */
DescribeGlobalDesktopRecordsResponse Client::describeGlobalDesktopRecords(const DescribeGlobalDesktopRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalDesktopRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries for batch information from the execution history of scheduled tasks and returns aggregated results.
 *
 * @description - This API uses a centralized endpoint. You can call this API only from the China (Shanghai) or Singapore (Singapore) regions.
 *
 * @param request DescribeGlobalTimerBatchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalTimerBatchesResponse
 */
DescribeGlobalTimerBatchesResponse Client::describeGlobalTimerBatchesWithOptions(const DescribeGlobalTimerBatchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasSearchRegionId()) {
    query["SearchRegionId"] = request.getSearchRegionId();
  }

  if (!!request.hasTimerType()) {
    query["TimerType"] = request.getTimerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalTimerBatches"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalTimerBatchesResponse>();
}

/**
 * @summary Queries for batch information from the execution history of scheduled tasks and returns aggregated results.
 *
 * @description - This API uses a centralized endpoint. You can call this API only from the China (Shanghai) or Singapore (Singapore) regions.
 *
 * @param request DescribeGlobalTimerBatchesRequest
 * @return DescribeGlobalTimerBatchesResponse
 */
DescribeGlobalTimerBatchesResponse Client::describeGlobalTimerBatches(const DescribeGlobalTimerBatchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalTimerBatchesWithOptions(request, runtime);
}

/**
 * @summary This operation queries the scheduled task execution records for EDS across all regions.
 *
 * @param request DescribeGlobalTimerRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalTimerRecordsResponse
 */
DescribeGlobalTimerRecordsResponse Client::describeGlobalTimerRecordsWithOptions(const DescribeGlobalTimerRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchId()) {
    query["BatchId"] = request.getBatchId();
  }

  if (!!request.hasDesktopIds()) {
    query["DesktopIds"] = request.getDesktopIds();
  }

  if (!!request.hasDisplayResultName()) {
    query["DisplayResultName"] = request.getDisplayResultName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasResultCategory()) {
    query["ResultCategory"] = request.getResultCategory();
  }

  if (!!request.hasRetryable()) {
    query["Retryable"] = request.getRetryable();
  }

  if (!!request.hasSearchRegionId()) {
    query["SearchRegionId"] = request.getSearchRegionId();
  }

  if (!!request.hasTimerResult()) {
    query["TimerResult"] = request.getTimerResult();
  }

  if (!!request.hasTimerTypes()) {
    query["TimerTypes"] = request.getTimerTypes();
  }

  if (!!request.hasWuyingServerIds()) {
    query["WuyingServerIds"] = request.getWuyingServerIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalTimerRecords"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalTimerRecordsResponse>();
}

/**
 * @summary This operation queries the scheduled task execution records for EDS across all regions.
 *
 * @param request DescribeGlobalTimerRecordsRequest
 * @return DescribeGlobalTimerRecordsResponse
 */
DescribeGlobalTimerRecordsResponse Client::describeGlobalTimerRecords(const DescribeGlobalTimerRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalTimerRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the applications and their processes of an end user.
 *
 * @param request DescribeGuestApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGuestApplicationsResponse
 */
DescribeGuestApplicationsResponse Client::describeGuestApplicationsWithOptions(const DescribeGuestApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGuestApplications"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGuestApplicationsResponse>();
}

/**
 * @summary Queries the applications and their processes of an end user.
 *
 * @param request DescribeGuestApplicationsRequest
 * @return DescribeGuestApplicationsResponse
 */
DescribeGuestApplicationsResponse Client::describeGuestApplications(const DescribeGuestApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGuestApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries the image change records of a cloud computer.
 *
 * @param request DescribeImageModifiedRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImageModifiedRecordsResponse
 */
DescribeImageModifiedRecordsResponse Client::describeImageModifiedRecordsWithOptions(const DescribeImageModifiedRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImageModifiedRecords"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImageModifiedRecordsResponse>();
}

/**
 * @summary Queries the image change records of a cloud computer.
 *
 * @param request DescribeImageModifiedRecordsRequest
 * @return DescribeImageModifiedRecordsResponse
 */
DescribeImageModifiedRecordsResponse Client::describeImageModifiedRecords(const DescribeImageModifiedRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageModifiedRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the recipient Alibaba Cloud accounts with which an image is shared.
 *
 * @description You can call the [ModifyImagePermission](https://help.aliyun.com/document_detail/436982.html) operation to share an image with another cloud computer user or unshare an image. You can call the DescribeImagePermission operation to obtain the Alibaba Cloud accounts with which the current image is shared.
 *
 * @param request DescribeImagePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImagePermissionResponse
 */
DescribeImagePermissionResponse Client::describeImagePermissionWithOptions(const DescribeImagePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImagePermission"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImagePermissionResponse>();
}

/**
 * @summary Queries the recipient Alibaba Cloud accounts with which an image is shared.
 *
 * @description You can call the [ModifyImagePermission](https://help.aliyun.com/document_detail/436982.html) operation to share an image with another cloud computer user or unshare an image. You can call the DescribeImagePermission operation to obtain the Alibaba Cloud accounts with which the current image is shared.
 *
 * @param request DescribeImagePermissionRequest
 * @return DescribeImagePermissionResponse
 */
DescribeImagePermissionResponse Client::describeImagePermission(const DescribeImagePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImagePermissionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about images.
 *
 * @param request DescribeImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImagesResponse
 */
DescribeImagesResponse Client::describeImagesWithOptions(const DescribeImagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopInstanceType()) {
    query["DesktopInstanceType"] = request.getDesktopInstanceType();
  }

  if (!!request.hasFotaVersion()) {
    query["FotaVersion"] = request.getFotaVersion();
  }

  if (!!request.hasGpuCategory()) {
    query["GpuCategory"] = request.getGpuCategory();
  }

  if (!!request.hasGpuDriverVersion()) {
    query["GpuDriverVersion"] = request.getGpuDriverVersion();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasImageStatus()) {
    query["ImageStatus"] = request.getImageStatus();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.getImageType();
  }

  if (!!request.hasLanguageType()) {
    query["LanguageType"] = request.getLanguageType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSessionType()) {
    query["SessionType"] = request.getSessionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImages"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImagesResponse>();
}

/**
 * @summary Queries the information about images.
 *
 * @param request DescribeImagesRequest
 * @return DescribeImagesResponse
 */
DescribeImagesResponse Client::describeImages(const DescribeImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImagesWithOptions(request, runtime);
}

/**
 * @summary Queries the execution list and status of Cloud Assistant scripts.
 *
 * @description - After you run a command, the command is not guaranteed to succeed or produce the expected results. Check the actual execution results based on the response of this operation.
 * - You can query execution information from the last two weeks. A maximum of 100,000 execution records are retained.
 *
 * @param request DescribeInvocationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvocationsResponse
 */
DescribeInvocationsResponse Client::describeInvocationsWithOptions(const DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandType()) {
    query["CommandType"] = request.getCommandType();
  }

  if (!!request.hasContentEncoding()) {
    query["ContentEncoding"] = request.getContentEncoding();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopIds()) {
    query["DesktopIds"] = request.getDesktopIds();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasIncludeInvokeDesktops()) {
    query["IncludeInvokeDesktops"] = request.getIncludeInvokeDesktops();
  }

  if (!!request.hasIncludeOutput()) {
    query["IncludeOutput"] = request.getIncludeOutput();
  }

  if (!!request.hasInvokeId()) {
    query["InvokeId"] = request.getInvokeId();
  }

  if (!!request.hasInvokeStatus()) {
    query["InvokeStatus"] = request.getInvokeStatus();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInvocations"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvocationsResponse>();
}

/**
 * @summary Queries the execution list and status of Cloud Assistant scripts.
 *
 * @description - After you run a command, the command is not guaranteed to succeed or produce the expected results. Check the actual execution results based on the response of this operation.
 * - You can query execution information from the last two weeks. A maximum of 100,000 execution records are retained.
 *
 * @param request DescribeInvocationsRequest
 * @return DescribeInvocationsResponse
 */
DescribeInvocationsResponse Client::describeInvocations(const DescribeInvocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvocationsWithOptions(request, runtime);
}

/**
 * @summary 查询公网IP
 *
 * @param request DescribeIpAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpAddressesResponse
 */
DescribeIpAddressesResponse Client::describeIpAddressesWithOptions(const DescribeIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEipId()) {
    query["EipId"] = request.getEipId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpAddresses"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpAddressesResponse>();
}

/**
 * @summary 查询公网IP
 *
 * @param request DescribeIpAddressesRequest
 * @return DescribeIpAddressesResponse
 */
DescribeIpAddressesResponse Client::describeIpAddresses(const DescribeIpAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpAddressesWithOptions(request, runtime);
}

/**
 * @summary Queries Key Management Service (KMS) keys of users. The first time you call this operation, you can try to create a service key for Elastic Desktop Service (EDS) and call the operation to return results.
 *
 * @param request DescribeKmsKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKmsKeysResponse
 */
DescribeKmsKeysResponse Client::describeKmsKeysWithOptions(const DescribeKmsKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKmsKeys"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKmsKeysResponse>();
}

/**
 * @summary Queries Key Management Service (KMS) keys of users. The first time you call this operation, you can try to create a service key for Elastic Desktop Service (EDS) and call the operation to return results.
 *
 * @param request DescribeKmsKeysRequest
 * @return DescribeKmsKeysResponse
 */
DescribeKmsKeysResponse Client::describeKmsKeys(const DescribeKmsKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKmsKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the price for changing the specifications of a monthly-subscribed unlimited-duration cloud computer or premium Internet bandwidth.
 *
 * @param request DescribeModificationPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModificationPriceResponse
 */
DescribeModificationPriceResponse Client::describeModificationPriceWithOptions(const DescribeModificationPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasResourceSpecs()) {
    query["ResourceSpecs"] = request.getResourceSpecs();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRootDiskPerformanceLevel()) {
    query["RootDiskPerformanceLevel"] = request.getRootDiskPerformanceLevel();
  }

  if (!!request.hasRootDiskSizeGib()) {
    query["RootDiskSizeGib"] = request.getRootDiskSizeGib();
  }

  if (!!request.hasUserDiskPerformanceLevel()) {
    query["UserDiskPerformanceLevel"] = request.getUserDiskPerformanceLevel();
  }

  if (!!request.hasUserDiskSizeGib()) {
    query["UserDiskSizeGib"] = request.getUserDiskSizeGib();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModificationPrice"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModificationPriceResponse>();
}

/**
 * @summary Queries the price for changing the specifications of a monthly-subscribed unlimited-duration cloud computer or premium Internet bandwidth.
 *
 * @param request DescribeModificationPriceRequest
 * @return DescribeModificationPriceResponse
 */
DescribeModificationPriceResponse Client::describeModificationPrice(const DescribeModificationPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModificationPriceWithOptions(request, runtime);
}

/**
 * @summary Queries NAS file systems.
 *
 * @param request DescribeNASFileSystemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNASFileSystemsResponse
 */
DescribeNASFileSystemsResponse Client::describeNASFileSystemsWithOptions(const DescribeNASFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMatchCompatibleProfile()) {
    query["MatchCompatibleProfile"] = request.getMatchCompatibleProfile();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNASFileSystems"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNASFileSystemsResponse>();
}

/**
 * @summary Queries NAS file systems.
 *
 * @param request DescribeNASFileSystemsRequest
 * @return DescribeNASFileSystemsResponse
 */
DescribeNASFileSystemsResponse Client::describeNASFileSystems(const DescribeNASFileSystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNASFileSystemsWithOptions(request, runtime);
}

/**
 * @summary 查询NAT详细列表
 *
 * @param request DescribeNatGatewaysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatGatewaysResponse
 */
DescribeNatGatewaysResponse Client::describeNatGatewaysWithOptions(const DescribeNatGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatGateways"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatGatewaysResponse>();
}

/**
 * @summary 查询NAT详细列表
 *
 * @param request DescribeNatGatewaysRequest
 * @return DescribeNatGatewaysResponse
 */
DescribeNatGatewaysResponse Client::describeNatGateways(const DescribeNatGatewaysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatGatewaysWithOptions(request, runtime);
}

/**
 * @summary Queries the details of one or more premium Internet bandwidth plans.
 *
 * @param request DescribeNetworkPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkPackagesResponse
 */
DescribeNetworkPackagesResponse Client::describeNetworkPackagesWithOptions(const DescribeNetworkPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetworkPackageId()) {
    query["NetworkPackageId"] = request.getNetworkPackageId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkPackages"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkPackagesResponse>();
}

/**
 * @summary Queries the details of one or more premium Internet bandwidth plans.
 *
 * @param request DescribeNetworkPackagesRequest
 * @return DescribeNetworkPackagesResponse
 */
DescribeNetworkPackagesResponse Client::describeNetworkPackages(const DescribeNetworkPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkPackagesWithOptions(request, runtime);
}

/**
 * @summary Gets all properties of an office network, including its ID, name, status, and creation time.
 *
 * @param request DescribeOfficeSitesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOfficeSitesResponse
 */
DescribeOfficeSitesResponse Client::describeOfficeSitesWithOptions(const DescribeOfficeSitesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountType()) {
    query["AccountType"] = request.getAccountType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOfficeSiteType()) {
    query["OfficeSiteType"] = request.getOfficeSiteType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityProtection()) {
    query["SecurityProtection"] = request.getSecurityProtection();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOfficeSites"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOfficeSitesResponse>();
}

/**
 * @summary Gets all properties of an office network, including its ID, name, status, and creation time.
 *
 * @param request DescribeOfficeSitesRequest
 * @return DescribeOfficeSitesResponse
 */
DescribeOfficeSitesResponse Client::describeOfficeSites(const DescribeOfficeSitesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOfficeSitesWithOptions(request, runtime);
}

/**
 * @summary Queries metrics such as the online user count and the assigned user count.
 *
 * @description Before you call this operation, make sure that you are familiar with the resource types and product types of Elastic Desktop Service.
 *
 * @param request DescribeOnlineUserCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOnlineUserCountResponse
 */
DescribeOnlineUserCountResponse Client::describeOnlineUserCountWithOptions(const DescribeOnlineUserCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSearchRegionId()) {
    query["SearchRegionId"] = request.getSearchRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOnlineUserCount"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOnlineUserCountResponse>();
}

/**
 * @summary Queries metrics such as the online user count and the assigned user count.
 *
 * @description Before you call this operation, make sure that you are familiar with the resource types and product types of Elastic Desktop Service.
 *
 * @param request DescribeOnlineUserCountRequest
 * @return DescribeOnlineUserCountResponse
 */
DescribeOnlineUserCountResponse Client::describeOnlineUserCount(const DescribeOnlineUserCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOnlineUserCountWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a cloud computer policy.
 *
 * @param request DescribePolicyGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolicyGroupsResponse
 */
DescribePolicyGroupsResponse Client::describePolicyGroupsWithOptions(const DescribePolicyGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasExternalPolicyGroupIds()) {
    query["ExternalPolicyGroupIds"] = request.getExternalPolicyGroupIds();
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

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolicyGroups"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolicyGroupsResponse>();
}

/**
 * @summary Retrieves the details of a cloud computer policy.
 *
 * @param request DescribePolicyGroupsRequest
 * @return DescribePolicyGroupsResponse
 */
DescribePolicyGroupsResponse Client::describePolicyGroups(const DescribePolicyGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolicyGroupsWithOptions(request, runtime);
}

/**
 * @summary Query the new purchase price of Elastic Desktop Service (EDS) products.
 *
 * @param request DescribePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePriceWithOptions(const DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasGroupDesktopCount()) {
    query["GroupDesktopCount"] = request.getGroupDesktopCount();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.getInternetChargeType();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRootDiskCategory()) {
    query["RootDiskCategory"] = request.getRootDiskCategory();
  }

  if (!!request.hasRootDiskPerformanceLevel()) {
    query["RootDiskPerformanceLevel"] = request.getRootDiskPerformanceLevel();
  }

  if (!!request.hasRootDiskSizeGib()) {
    query["RootDiskSizeGib"] = request.getRootDiskSizeGib();
  }

  if (!!request.hasUserDiskCategory()) {
    query["UserDiskCategory"] = request.getUserDiskCategory();
  }

  if (!!request.hasUserDiskPerformanceLevel()) {
    query["UserDiskPerformanceLevel"] = request.getUserDiskPerformanceLevel();
  }

  if (!!request.hasUserDiskSizeGib()) {
    query["UserDiskSizeGib"] = request.getUserDiskSizeGib();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrice"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePriceResponse>();
}

/**
 * @summary Query the new purchase price of Elastic Desktop Service (EDS) products.
 *
 * @param request DescribePriceRequest
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePrice(const DescribePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceWithOptions(request, runtime);
}

/**
 * @summary 查询价格用于创建超卖组
 *
 * @param request DescribePriceForCreateDesktopOversoldGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceForCreateDesktopOversoldGroupResponse
 */
DescribePriceForCreateDesktopOversoldGroupResponse Client::describePriceForCreateDesktopOversoldGroupWithOptions(const DescribePriceForCreateDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConcurrenceCount()) {
    query["ConcurrenceCount"] = request.getConcurrenceCount();
  }

  if (!!request.hasDataDiskSize()) {
    query["DataDiskSize"] = request.getDataDiskSize();
  }

  if (!!request.hasDesktopType()) {
    query["DesktopType"] = request.getDesktopType();
  }

  if (!!request.hasOversoldUserCount()) {
    query["OversoldUserCount"] = request.getOversoldUserCount();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasSystemDiskSize()) {
    query["SystemDiskSize"] = request.getSystemDiskSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePriceForCreateDesktopOversoldGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePriceForCreateDesktopOversoldGroupResponse>();
}

/**
 * @summary 查询价格用于创建超卖组
 *
 * @param request DescribePriceForCreateDesktopOversoldGroupRequest
 * @return DescribePriceForCreateDesktopOversoldGroupResponse
 */
DescribePriceForCreateDesktopOversoldGroupResponse Client::describePriceForCreateDesktopOversoldGroup(const DescribePriceForCreateDesktopOversoldGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceForCreateDesktopOversoldGroupWithOptions(request, runtime);
}

/**
 * @summary 查询价格用于变配超卖组
 *
 * @param request DescribePriceForModifyDesktopOversoldGroupSaleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceForModifyDesktopOversoldGroupSaleResponse
 */
DescribePriceForModifyDesktopOversoldGroupSaleResponse Client::describePriceForModifyDesktopOversoldGroupSaleWithOptions(const DescribePriceForModifyDesktopOversoldGroupSaleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConcurrenceCount()) {
    query["ConcurrenceCount"] = request.getConcurrenceCount();
  }

  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasOversoldUserCount()) {
    query["OversoldUserCount"] = request.getOversoldUserCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePriceForModifyDesktopOversoldGroupSale"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePriceForModifyDesktopOversoldGroupSaleResponse>();
}

/**
 * @summary 查询价格用于变配超卖组
 *
 * @param request DescribePriceForModifyDesktopOversoldGroupSaleRequest
 * @return DescribePriceForModifyDesktopOversoldGroupSaleResponse
 */
DescribePriceForModifyDesktopOversoldGroupSaleResponse Client::describePriceForModifyDesktopOversoldGroupSale(const DescribePriceForModifyDesktopOversoldGroupSaleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceForModifyDesktopOversoldGroupSaleWithOptions(request, runtime);
}

/**
 * @summary 查询价格用于续费超卖组
 *
 * @param request DescribePriceForRenewDesktopOversoldGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceForRenewDesktopOversoldGroupResponse
 */
DescribePriceForRenewDesktopOversoldGroupResponse Client::describePriceForRenewDesktopOversoldGroupWithOptions(const DescribePriceForRenewDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePriceForRenewDesktopOversoldGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePriceForRenewDesktopOversoldGroupResponse>();
}

/**
 * @summary 查询价格用于续费超卖组
 *
 * @param request DescribePriceForRenewDesktopOversoldGroupRequest
 * @return DescribePriceForRenewDesktopOversoldGroupResponse
 */
DescribePriceForRenewDesktopOversoldGroupResponse Client::describePriceForRenewDesktopOversoldGroup(const DescribePriceForRenewDesktopOversoldGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceForRenewDesktopOversoldGroupWithOptions(request, runtime);
}

/**
 * @summary Queries QoS rules.
 *
 * @param request DescribeQosRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQosRulesResponse
 */
DescribeQosRulesResponse Client::describeQosRulesWithOptions(const DescribeQosRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkPackageId()) {
    query["NetworkPackageId"] = request.getNetworkPackageId();
  }

  if (!!request.hasQosRuleName()) {
    query["QosRuleName"] = request.getQosRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQosRules"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQosRulesResponse>();
}

/**
 * @summary Queries QoS rules.
 *
 * @param request DescribeQosRulesRequest
 * @return DescribeQosRulesResponse
 */
DescribeQosRulesResponse Client::describeQosRules(const DescribeQosRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQosRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieve screen recording files from all regions.
 *
 * @param request DescribeRecordFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordFileResponse
 */
DescribeRecordFileResponse Client::describeRecordFileWithOptions(const DescribeRecordFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderSort()) {
    query["OrderSort"] = request.getOrderSort();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRecordType()) {
    query["RecordType"] = request.getRecordType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecordFile"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordFileResponse>();
}

/**
 * @summary Retrieve screen recording files from all regions.
 *
 * @param request DescribeRecordFileRequest
 * @return DescribeRecordFileResponse
 */
DescribeRecordFileResponse Client::describeRecordFile(const DescribeRecordFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordFileWithOptions(request, runtime);
}

/**
 * @summary Queries the details of screen recording files.
 *
 * @param request DescribeRecordingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordingsResponse
 */
DescribeRecordingsResponse Client::describeRecordingsWithOptions(const DescribeRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNeedSignedUrl()) {
    query["NeedSignedUrl"] = request.getNeedSignedUrl();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSignedUrlExpireMinutes()) {
    query["SignedUrlExpireMinutes"] = request.getSignedUrlExpireMinutes();
  }

  if (!!request.hasStandardEndTime()) {
    query["StandardEndTime"] = request.getStandardEndTime();
  }

  if (!!request.hasStandardStartTime()) {
    query["StandardStartTime"] = request.getStandardStartTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecordings"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordingsResponse>();
}

/**
 * @summary Queries the details of screen recording files.
 *
 * @param request DescribeRecordingsRequest
 * @return DescribeRecordingsResponse
 */
DescribeRecordingsResponse Client::describeRecordings(const DescribeRecordingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordingsWithOptions(request, runtime);
}

/**
 * @summary Queries the unsubscription price of cloud computers purchased on a monthly basis.
 *
 * @param request DescribeRefundPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRefundPriceResponse
 */
DescribeRefundPriceResponse Client::describeRefundPriceWithOptions(const DescribeRefundPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasRefundType()) {
    query["RefundType"] = request.getRefundType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRefundPrice"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRefundPriceResponse>();
}

/**
 * @summary Queries the unsubscription price of cloud computers purchased on a monthly basis.
 *
 * @param request DescribeRefundPriceRequest
 * @return DescribeRefundPriceResponse
 */
DescribeRefundPriceResponse Client::describeRefundPrice(const DescribeRefundPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRefundPriceWithOptions(request, runtime);
}

/**
 * @summary Queries the Alibaba Cloud regions that are available for Elastic Desktop Service (EDS).
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the Alibaba Cloud regions that are available for Elastic Desktop Service (EDS).
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the renewal price for an Elastic Desktop Service product.
 *
 * @param request DescribeRenewalPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRenewalPriceResponse
 */
DescribeRenewalPriceResponse Client::describeRenewalPriceWithOptions(const DescribeRenewalPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRenewalPrice"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRenewalPriceResponse>();
}

/**
 * @summary Retrieves the renewal price for an Elastic Desktop Service product.
 *
 * @param request DescribeRenewalPriceRequest
 * @return DescribeRenewalPriceResponse
 */
DescribeRenewalPriceResponse Client::describeRenewalPrice(const DescribeRenewalPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRenewalPriceWithOptions(request, runtime);
}

/**
 * @summary Queries cloud resources that are associated with a global policy.
 *
 * @param request DescribeResourceByCenterPolicyIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceByCenterPolicyIdResponse
 */
DescribeResourceByCenterPolicyIdResponse Client::describeResourceByCenterPolicyIdWithOptions(const DescribeResourceByCenterPolicyIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceByCenterPolicyId"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceByCenterPolicyIdResponse>();
}

/**
 * @summary Queries cloud resources that are associated with a global policy.
 *
 * @param request DescribeResourceByCenterPolicyIdRequest
 * @return DescribeResourceByCenterPolicyIdResponse
 */
DescribeResourceByCenterPolicyIdResponse Client::describeResourceByCenterPolicyId(const DescribeResourceByCenterPolicyIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceByCenterPolicyIdWithOptions(request, runtime);
}

/**
 * @summary 查询路由条目列表
 *
 * @param request DescribeRouteEntryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRouteEntryListResponse
 */
DescribeRouteEntryListResponse Client::describeRouteEntryListWithOptions(const DescribeRouteEntryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRouteEntryList"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRouteEntryListResponse>();
}

/**
 * @summary 查询路由条目列表
 *
 * @param request DescribeRouteEntryListRequest
 * @return DescribeRouteEntryListResponse
 */
DescribeRouteEntryListResponse Client::describeRouteEntryList(const DescribeRouteEntryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRouteEntryListWithOptions(request, runtime);
}

/**
 * @summary 查询路由表列表
 *
 * @param request DescribeRouteTableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRouteTableListResponse
 */
DescribeRouteTableListResponse Client::describeRouteTableListWithOptions(const DescribeRouteTableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRouteTableId()) {
    query["RouteTableId"] = request.getRouteTableId();
  }

  if (!!request.hasRouteTableName()) {
    query["RouteTableName"] = request.getRouteTableName();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRouteTableList"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRouteTableListResponse>();
}

/**
 * @summary 查询路由表列表
 *
 * @param request DescribeRouteTableListRequest
 * @return DescribeRouteTableListResponse
 */
DescribeRouteTableListResponse Client::describeRouteTableList(const DescribeRouteTableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRouteTableListWithOptions(request, runtime);
}

/**
 * @summary 查询办公网络维度安全组策略
 *
 * @param request DescribeSecurityGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityGroupAttributeResponse
 */
DescribeSecurityGroupAttributeResponse Client::describeSecurityGroupAttributeWithOptions(const DescribeSecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityGroupAttribute"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityGroupAttributeResponse>();
}

/**
 * @summary 查询办公网络维度安全组策略
 *
 * @param request DescribeSecurityGroupAttributeRequest
 * @return DescribeSecurityGroupAttributeResponse
 */
DescribeSecurityGroupAttributeResponse Client::describeSecurityGroupAttribute(const DescribeSecurityGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the session statistics of a region.
 *
 * @description - This is a central operation and can be called only by using services in the China (Shanghai) region.
 * - You can query session statistics for the past hour.
 *
 * @param request DescribeSessionStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSessionStatisticResponse
 */
DescribeSessionStatisticResponse Client::describeSessionStatisticWithOptions(const DescribeSessionStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSearchRegionId()) {
    query["SearchRegionId"] = request.getSearchRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSessionStatistic"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSessionStatisticResponse>();
}

/**
 * @summary Queries the session statistics of a region.
 *
 * @description - This is a central operation and can be called only by using services in the China (Shanghai) region.
 * - You can query session statistics for the past hour.
 *
 * @param request DescribeSessionStatisticRequest
 * @return DescribeSessionStatisticResponse
 */
DescribeSessionStatisticResponse Client::describeSessionStatistic(const DescribeSessionStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSessionStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the snapshot list and snapshot details of a cloud computer.
 *
 * @param request DescribeSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSnapshotsResponse
 */
DescribeSnapshotsResponse Client::describeSnapshotsWithOptions(const DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreator()) {
    query["Creator"] = request.getCreator();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopName()) {
    query["DesktopName"] = request.getDesktopName();
  }

  if (!!request.hasDesktopScenario()) {
    query["DesktopScenario"] = request.getDesktopScenario();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasSnapshotName()) {
    query["SnapshotName"] = request.getSnapshotName();
  }

  if (!!request.hasSnapshotType()) {
    query["SnapshotType"] = request.getSnapshotType();
  }

  if (!!request.hasSourceDiskType()) {
    query["SourceDiskType"] = request.getSourceDiskType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSnapshots"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSnapshotsResponse>();
}

/**
 * @summary Queries the snapshot list and snapshot details of a cloud computer.
 *
 * @param request DescribeSnapshotsRequest
 * @return DescribeSnapshotsResponse
 */
DescribeSnapshotsResponse Client::describeSnapshots(const DescribeSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSnapshotsWithOptions(request, runtime);
}

/**
 * @summary 查询SNAT条目
 *
 * @param request DescribeSnatTableEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSnatTableEntriesResponse
 */
DescribeSnatTableEntriesResponse Client::describeSnatTableEntriesWithOptions(const DescribeSnatTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnatEntryId()) {
    query["SnatEntryId"] = request.getSnatEntryId();
  }

  if (!!request.hasSnatTableId()) {
    query["SnatTableId"] = request.getSnatTableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSnatTableEntries"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSnatTableEntriesResponse>();
}

/**
 * @summary 查询SNAT条目
 *
 * @param request DescribeSnatTableEntriesRequest
 * @return DescribeSnatTableEntriesResponse
 */
DescribeSnatTableEntriesResponse Client::describeSnatTableEntries(const DescribeSnatTableEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSnatTableEntriesWithOptions(request, runtime);
}

/**
 * @summary 查询子网
 *
 * @param request DescribeSubnetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubnetsResponse
 */
DescribeSubnetsResponse Client::describeSubnetsWithOptions(const DescribeSubnetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEid()) {
    query["Eid"] = request.getEid();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSubnetId()) {
    query["SubnetId"] = request.getSubnetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubnets"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubnetsResponse>();
}

/**
 * @summary 查询子网
 *
 * @param request DescribeSubnetsRequest
 * @return DescribeSubnetsResponse
 */
DescribeSubnetsResponse Client::describeSubnets(const DescribeSubnetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubnetsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of cloud computer templates.
 *
 * @param request DescribeTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplatesWithOptions(const DescribeTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasTemplateIds()) {
    body["TemplateIds"] = request.getTemplateIds();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    body["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeTemplates"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplatesResponse>();
}

/**
 * @summary Queries the details of cloud computer templates.
 *
 * @param request DescribeTemplatesRequest
 * @return DescribeTemplatesResponse
 */
DescribeTemplatesResponse Client::describeTemplates(const DescribeTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves details for a specified configuration group.
 *
 * @param request DescribeTimerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTimerGroupResponse
 */
DescribeTimerGroupResponse Client::describeTimerGroupWithOptions(const DescribeTimerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTimerGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTimerGroupResponse>();
}

/**
 * @summary Retrieves details for a specified configuration group.
 *
 * @param request DescribeTimerGroupRequest
 * @return DescribeTimerGroupResponse
 */
DescribeTimerGroupResponse Client::describeTimerGroup(const DescribeTimerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTimerGroupWithOptions(request, runtime);
}

/**
 * @summary 查询超卖组中用户连接数据
 *
 * @param request DescribeUserConnectTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserConnectTimeResponse
 */
DescribeUserConnectTimeResponse Client::describeUserConnectTimeWithOptions(const DescribeUserConnectTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUserDesktopId()) {
    query["UserDesktopId"] = request.getUserDesktopId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserConnectTime"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserConnectTimeResponse>();
}

/**
 * @summary 查询超卖组中用户连接数据
 *
 * @param request DescribeUserConnectTimeRequest
 * @return DescribeUserConnectTimeResponse
 */
DescribeUserConnectTimeResponse Client::describeUserConnectTime(const DescribeUserConnectTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserConnectTimeWithOptions(request, runtime);
}

/**
 * @summary Queries the connection records of an authorized user to cloud computers in a cloud computer pool.
 *
 * @param request DescribeUserConnectionRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserConnectionRecordsResponse
 */
DescribeUserConnectionRecordsResponse Client::describeUserConnectionRecordsWithOptions(const DescribeUserConnectionRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectDurationFrom()) {
    query["ConnectDurationFrom"] = request.getConnectDurationFrom();
  }

  if (!!request.hasConnectDurationTo()) {
    query["ConnectDurationTo"] = request.getConnectDurationTo();
  }

  if (!!request.hasConnectEndTimeFrom()) {
    query["ConnectEndTimeFrom"] = request.getConnectEndTimeFrom();
  }

  if (!!request.hasConnectEndTimeTo()) {
    query["ConnectEndTimeTo"] = request.getConnectEndTimeTo();
  }

  if (!!request.hasConnectStartTimeFrom()) {
    query["ConnectStartTimeFrom"] = request.getConnectStartTimeFrom();
  }

  if (!!request.hasConnectStartTimeTo()) {
    query["ConnectStartTimeTo"] = request.getConnectStartTimeTo();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasEndUserType()) {
    query["EndUserType"] = request.getEndUserType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserConnectionRecords"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserConnectionRecordsResponse>();
}

/**
 * @summary Queries the connection records of an authorized user to cloud computers in a cloud computer pool.
 *
 * @param request DescribeUserConnectionRecordsRequest
 * @return DescribeUserConnectionRecordsResponse
 */
DescribeUserConnectionRecordsResponse Client::describeUserConnectionRecords(const DescribeUserConnectionRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserConnectionRecordsWithOptions(request, runtime);
}

/**
 * @param request DescribeUserProfilePathRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserProfilePathRulesResponse
 */
DescribeUserProfilePathRulesResponse Client::describeUserProfilePathRulesWithOptions(const DescribeUserProfilePathRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserProfilePathRules"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserProfilePathRulesResponse>();
}

/**
 * @param request DescribeUserProfilePathRulesRequest
 * @return DescribeUserProfilePathRulesResponse
 */
DescribeUserProfilePathRulesResponse Client::describeUserProfilePathRules(const DescribeUserProfilePathRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserProfilePathRulesWithOptions(request, runtime);
}

/**
 * @summary This operation queries the details of all authorized users in a cloud desktop group, including their usernames, email addresses, phone numbers, and the IDs of their authorized cloud desktops.
 *
 * @param request DescribeUsersInGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsersInGroupResponse
 */
DescribeUsersInGroupResponse Client::describeUsersInGroupWithOptions(const DescribeUsersInGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectState()) {
    query["ConnectState"] = request.getConnectState();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasEndUserIds()) {
    query["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.getOrgId();
  }

  if (!!request.hasQueryUserDetail()) {
    query["QueryUserDetail"] = request.getQueryUserDetail();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUsersInGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUsersInGroupResponse>();
}

/**
 * @summary This operation queries the details of all authorized users in a cloud desktop group, including their usernames, email addresses, phone numbers, and the IDs of their authorized cloud desktops.
 *
 * @param request DescribeUsersInGroupRequest
 * @return DescribeUsersInGroupResponse
 */
DescribeUsersInGroupResponse Client::describeUsersInGroup(const DescribeUsersInGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsersInGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the passwords for the accounts within a cloud computer image. For example, when the Chrome browser on the cloud computer queries the cached password, it requires the end user to enter the password for identity verification.
 *
 * @param request DescribeUsersPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsersPasswordResponse
 */
DescribeUsersPasswordResponse Client::describeUsersPasswordWithOptions(const DescribeUsersPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUsersPassword"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUsersPasswordResponse>();
}

/**
 * @summary Queries the passwords for the accounts within a cloud computer image. For example, when the Chrome browser on the cloud computer queries the cached password, it requires the end user to enter the password for identity verification.
 *
 * @param request DescribeUsersPasswordRequest
 * @return DescribeUsersPasswordResponse
 */
DescribeUsersPasswordResponse Client::describeUsersPassword(const DescribeUsersPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsersPasswordWithOptions(request, runtime);
}

/**
 * @summary Retrieves the virtual multi-factor authentication (MFA) device associated with an Active Directory (AD) account.
 *
 * @param request DescribeVirtualMFADevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVirtualMFADevicesResponse
 */
DescribeVirtualMFADevicesResponse Client::describeVirtualMFADevicesWithOptions(const DescribeVirtualMFADevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVirtualMFADevices"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVirtualMFADevicesResponse>();
}

/**
 * @summary Retrieves the virtual multi-factor authentication (MFA) device associated with an Active Directory (AD) account.
 *
 * @param request DescribeVirtualMFADevicesRequest
 * @return DescribeVirtualMFADevicesResponse
 */
DescribeVirtualMFADevicesResponse Client::describeVirtualMFADevices(const DescribeVirtualMFADevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVirtualMFADevicesWithOptions(request, runtime);
}

/**
 * @summary Queries the zones supported by Elastic Desktop Service (EDS) in a region.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVpcAccessZone()) {
    query["VpcAccessZone"] = request.getVpcAccessZone();
  }

  if (!!request.hasZoneType()) {
    query["ZoneType"] = request.getZoneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZonesResponse>();
}

/**
 * @summary Queries the zones supported by Elastic Desktop Service (EDS) in a region.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Unbinds an advanced office network from a CEN instance.
 *
 * @param request DetachCenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachCenResponse
 */
DetachCenResponse Client::detachCenWithOptions(const DetachCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachCen"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachCenResponse>();
}

/**
 * @summary Unbinds an advanced office network from a CEN instance.
 *
 * @param request DetachCenRequest
 * @return DetachCenResponse
 */
DetachCenResponse Client::detachCen(const DetachCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachCenWithOptions(request, runtime);
}

/**
 * @summary Unbinds a hardware client from a user.
 *
 * @param request DetachEndUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachEndUserResponse
 */
DetachEndUserResponse Client::detachEndUserWithOptions(const DetachEndUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdDomain()) {
    query["AdDomain"] = request.getAdDomain();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachEndUser"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachEndUserResponse>();
}

/**
 * @summary Unbinds a hardware client from a user.
 *
 * @param request DetachEndUserRequest
 * @return DetachEndUserResponse
 */
DetachEndUserResponse Client::detachEndUser(const DetachEndUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachEndUserWithOptions(request, runtime);
}

/**
 * @summary Disables specific cloud computers in a cloud computer share. After you call this operation to disable specific cloud computers, they enter the unavailable state.
 *
 * @param request DisableDesktopsInGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDesktopsInGroupResponse
 */
DisableDesktopsInGroupResponse Client::disableDesktopsInGroupWithOptions(const DisableDesktopsInGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasDesktopIds()) {
    query["DesktopIds"] = request.getDesktopIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDesktopsInGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDesktopsInGroupResponse>();
}

/**
 * @summary Disables specific cloud computers in a cloud computer share. After you call this operation to disable specific cloud computers, they enter the unavailable state.
 *
 * @param request DisableDesktopsInGroupRequest
 * @return DisableDesktopsInGroupResponse
 */
DisableDesktopsInGroupResponse Client::disableDesktopsInGroup(const DisableDesktopsInGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDesktopsInGroupWithOptions(request, runtime);
}

/**
 * @summary Disconnects cloud computer sessions.
 *
 * @param request DisconnectDesktopSessionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisconnectDesktopSessionsResponse
 */
DisconnectDesktopSessionsResponse Client::disconnectDesktopSessionsWithOptions(const DisconnectDesktopSessionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPreCheck()) {
    query["PreCheck"] = request.getPreCheck();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSessions()) {
    query["Sessions"] = request.getSessions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisconnectDesktopSessions"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisconnectDesktopSessionsResponse>();
}

/**
 * @summary Disconnects cloud computer sessions.
 *
 * @param request DisconnectDesktopSessionsRequest
 * @return DisconnectDesktopSessionsResponse
 */
DisconnectDesktopSessionsResponse Client::disconnectDesktopSessions(const DisconnectDesktopSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disconnectDesktopSessionsWithOptions(request, runtime);
}

/**
 * @summary 实例解绑/删除公网IP
 *
 * @param request DissociateIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateIpAddressResponse
 */
DissociateIpAddressResponse Client::dissociateIpAddressWithOptions(const DissociateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEipId()) {
    query["EipId"] = request.getEipId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DissociateIpAddress"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateIpAddressResponse>();
}

/**
 * @summary 实例解绑/删除公网IP
 *
 * @param request DissociateIpAddressRequest
 * @return DissociateIpAddressResponse
 */
DissociateIpAddressResponse Client::dissociateIpAddress(const DissociateIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateIpAddressWithOptions(request, runtime);
}

/**
 * @summary Disassociates a premium Internet bandwidth plan from the office network to which it was previously bound.
 *
 * @param request DissociateNetworkPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateNetworkPackageResponse
 */
DissociateNetworkPackageResponse Client::dissociateNetworkPackageWithOptions(const DissociateNetworkPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkPackageId()) {
    query["NetworkPackageId"] = request.getNetworkPackageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DissociateNetworkPackage"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateNetworkPackageResponse>();
}

/**
 * @summary Disassociates a premium Internet bandwidth plan from the office network to which it was previously bound.
 *
 * @param request DissociateNetworkPackageRequest
 * @return DissociateNetworkPackageResponse
 */
DissociateNetworkPackageResponse Client::dissociateNetworkPackage(const DissociateNetworkPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateNetworkPackageWithOptions(request, runtime);
}

/**
 * @summary Retrieves the download URL of a specified file.
 *
 * @param request DownloadCdsFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadCdsFileResponse
 */
DownloadCdsFileResponse Client::downloadCdsFileWithOptions(const DownloadCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadCdsFile"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadCdsFileResponse>();
}

/**
 * @summary Retrieves the download URL of a specified file.
 *
 * @param request DownloadCdsFileRequest
 * @return DownloadCdsFileResponse
 */
DownloadCdsFileResponse Client::downloadCdsFile(const DownloadCdsFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadCdsFileWithOptions(request, runtime);
}

/**
 * @summary Exports events that occur on a cloud desktop from an Alibaba Cloud Workspace client.
 *
 * @param request ExportClientEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportClientEventsResponse
 */
ExportClientEventsResponse Client::exportClientEventsWithOptions(const ExportClientEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopName()) {
    query["DesktopName"] = request.getDesktopName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasEventTypes()) {
    query["EventTypes"] = request.getEventTypes();
  }

  if (!!request.hasLangType()) {
    query["LangType"] = request.getLangType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOfficeSiteName()) {
    query["OfficeSiteName"] = request.getOfficeSiteName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportClientEvents"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportClientEventsResponse>();
}

/**
 * @summary Exports events that occur on a cloud desktop from an Alibaba Cloud Workspace client.
 *
 * @param request ExportClientEventsRequest
 * @return ExportClientEventsResponse
 */
ExportClientEventsResponse Client::exportClientEvents(const ExportClientEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportClientEventsWithOptions(request, runtime);
}

/**
 * @summary Exports the list of shared cloud desktops and saves it as an XLSX file. Each shared cloud desktop record includes the shared cloud desktop ID and name, office network ID and name, shared cloud desktop template, and security policy name.
 *
 * @param request ExportDesktopGroupInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportDesktopGroupInfoResponse
 */
ExportDesktopGroupInfoResponse Client::exportDesktopGroupInfoWithOptions(const ExportDesktopGroupInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasDesktopGroupName()) {
    query["DesktopGroupName"] = request.getDesktopGroupName();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.getExpiredTime();
  }

  if (!!request.hasLangType()) {
    query["LangType"] = request.getLangType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportDesktopGroupInfo"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportDesktopGroupInfoResponse>();
}

/**
 * @summary Exports the list of shared cloud desktops and saves it as an XLSX file. Each shared cloud desktop record includes the shared cloud desktop ID and name, office network ID and name, shared cloud desktop template, and security policy name.
 *
 * @param request ExportDesktopGroupInfoRequest
 * @return ExportDesktopGroupInfoResponse
 */
ExportDesktopGroupInfoResponse Client::exportDesktopGroupInfo(const ExportDesktopGroupInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportDesktopGroupInfoWithOptions(request, runtime);
}

/**
 * @summary Exports the cloud desktop list as a CSV file.
 *
 * @description The cloud desktop list exported by calling this operation is saved as a CSV file. Each cloud desktop record includes the following fields:
 * - Cloud desktop ID/Cloud desktop name
 * - Office network ID/Office network name
 * - Specifications/System/Protocol
 * - System cloud disk/Data cloud disk
 * - Status
 * - Billing method
 * - Expiration time
 * - Remaining duration/Total duration
 * - Number of assigned users/Current user
 * - Office network type
 * - Creation time
 * - Tags
 * - Encrypted or not
 * - IP
 * - Hostname
 *
 * @param request ExportDesktopListInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportDesktopListInfoResponse
 */
ExportDesktopListInfoResponse Client::exportDesktopListInfoWithOptions(const ExportDesktopListInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopName()) {
    query["DesktopName"] = request.getDesktopName();
  }

  if (!!request.hasDesktopStatus()) {
    query["DesktopStatus"] = request.getDesktopStatus();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.getExpiredTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLangType()) {
    query["LangType"] = request.getLangType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportDesktopListInfo"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportDesktopListInfoResponse>();
}

/**
 * @summary Exports the cloud desktop list as a CSV file.
 *
 * @description The cloud desktop list exported by calling this operation is saved as a CSV file. Each cloud desktop record includes the following fields:
 * - Cloud desktop ID/Cloud desktop name
 * - Office network ID/Office network name
 * - Specifications/System/Protocol
 * - System cloud disk/Data cloud disk
 * - Status
 * - Billing method
 * - Expiration time
 * - Remaining duration/Total duration
 * - Number of assigned users/Current user
 * - Office network type
 * - Creation time
 * - Tags
 * - Encrypted or not
 * - IP
 * - Hostname
 *
 * @param request ExportDesktopListInfoRequest
 * @return ExportDesktopListInfoResponse
 */
ExportDesktopListInfoResponse Client::exportDesktopListInfo(const ExportDesktopListInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportDesktopListInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a folder copy asynchronous node based on the AsyncTaskId parameter returned by the CopyCdsFile operation.
 *
 * @param request GetAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncTaskResponse
 */
GetAsyncTaskResponse Client::getAsyncTaskWithOptions(const GetAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsyncTaskId()) {
    query["AsyncTaskId"] = request.getAsyncTaskId();
  }

  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsyncTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncTaskResponse>();
}

/**
 * @summary Retrieves the details of a folder copy asynchronous node based on the AsyncTaskId parameter returned by the CopyCdsFile operation.
 *
 * @param request GetAsyncTaskRequest
 * @return GetAsyncTaskResponse
 */
GetAsyncTaskResponse Client::getAsyncTask(const GetAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary Obtains the credential that is used to connect to a cloud desktop.
 *
 * @description The cloud computer must be in the Running state. The ticket obtained by calling this operation will expire in 10 minutes.
 *
 * @param request GetConnectionTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicketWithOptions(const GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandContent()) {
    query["CommandContent"] = request.getCommandContent();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConnectionTicket"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConnectionTicketResponse>();
}

/**
 * @summary Obtains the credential that is used to connect to a cloud desktop.
 *
 * @description The cloud computer must be in the Running state. The ticket obtained by calling this operation will expire in 10 minutes.
 *
 * @param request GetConnectionTicketRequest
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicket(const GetConnectionTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnectionTicketWithOptions(request, runtime);
}

/**
 * @summary Get the stream collaboration credentials for remote assistance or shared collaboration.
 *
 * @param request GetCoordinateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCoordinateTicketResponse
 */
GetCoordinateTicketResponse Client::getCoordinateTicketWithOptions(const GetCoordinateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoId()) {
    query["CoId"] = request.getCoId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCoordinateTicket"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCoordinateTicketResponse>();
}

/**
 * @summary Get the stream collaboration credentials for remote assistance or shared collaboration.
 *
 * @param request GetCoordinateTicketRequest
 * @return GetCoordinateTicketResponse
 */
GetCoordinateTicketResponse Client::getCoordinateTicket(const GetCoordinateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCoordinateTicketWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a cloud computer share.
 *
 * @param request GetDesktopGroupDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDesktopGroupDetailResponse
 */
GetDesktopGroupDetailResponse Client::getDesktopGroupDetailWithOptions(const GetDesktopGroupDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDesktopGroupDetail"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDesktopGroupDetailResponse>();
}

/**
 * @summary Queries the details of a cloud computer share.
 *
 * @param request GetDesktopGroupDetailRequest
 * @return GetDesktopGroupDetailResponse
 */
GetDesktopGroupDetailResponse Client::getDesktopGroupDetail(const GetDesktopGroupDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDesktopGroupDetailWithOptions(request, runtime);
}

/**
 * @summary Queries whether single sign-on (SSO) is enabled for an office network.
 *
 * @param request GetOfficeSiteSsoStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOfficeSiteSsoStatusResponse
 */
GetOfficeSiteSsoStatusResponse Client::getOfficeSiteSsoStatusWithOptions(const GetOfficeSiteSsoStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOfficeSiteSsoStatus"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOfficeSiteSsoStatusResponse>();
}

/**
 * @summary Queries whether single sign-on (SSO) is enabled for an office network.
 *
 * @param request GetOfficeSiteSsoStatusRequest
 * @return GetOfficeSiteSsoStatusResponse
 */
GetOfficeSiteSsoStatusResponse Client::getOfficeSiteSsoStatus(const GetOfficeSiteSsoStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOfficeSiteSsoStatusWithOptions(request, runtime);
}

/**
 * @summary Obtains the metadata of a Security Assertion Markup Language (SAML) 2.0-based service provider (SP).
 *
 * @param request GetSpMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSpMetadataResponse
 */
GetSpMetadataResponse Client::getSpMetadataWithOptions(const GetSpMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSpMetadata"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSpMetadataResponse>();
}

/**
 * @summary Obtains the metadata of a Security Assertion Markup Language (SAML) 2.0-based service provider (SP).
 *
 * @param request GetSpMetadataRequest
 * @return GetSpMetadataResponse
 */
GetSpMetadataResponse Client::getSpMetadata(const GetSpMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSpMetadataWithOptions(request, runtime);
}

/**
 * @summary Hibernates cloud desktops.
 *
 * @param request HibernateDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HibernateDesktopsResponse
 */
HibernateDesktopsResponse Client::hibernateDesktopsWithOptions(const HibernateDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HibernateDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HibernateDesktopsResponse>();
}

/**
 * @summary Hibernates cloud desktops.
 *
 * @param request HibernateDesktopsRequest
 * @return HibernateDesktopsResponse
 */
HibernateDesktopsResponse Client::hibernateDesktops(const HibernateDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return hibernateDesktopsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of files in the network disk and obtain the download link of the file.
 *
 * @param tmpReq ListCdsFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCdsFilesResponse
 */
ListCdsFilesResponse Client::listCdsFilesWithOptions(const ListCdsFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCdsFilesShrinkRequest request = ListCdsFilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileIds()) {
    request.setFileIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFileIds(), "FileIds", "json"));
  }

  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileIdsShrink()) {
    query["FileIds"] = request.getFileIdsShrink();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasParentFileId()) {
    query["ParentFileId"] = request.getParentFileId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCdsFiles"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCdsFilesResponse>();
}

/**
 * @summary Queries the list of files in the network disk and obtain the download link of the file.
 *
 * @param request ListCdsFilesRequest
 * @return ListCdsFilesResponse
 */
ListCdsFilesResponse Client::listCdsFiles(const ListCdsFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCdsFilesWithOptions(request, runtime);
}

/**
 * @summary If you use an Active Directory (AD) directory to connect to your enterprise AD, call this operation to retrieve user information from your enterprise AD.
 *
 * @param request ListDirectoryUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDirectoryUsersResponse
 */
ListDirectoryUsersResponse Client::listDirectoryUsersWithOptions(const ListDirectoryUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssignedInfo()) {
    query["AssignedInfo"] = request.getAssignedInfo();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasIncludeAssignedUser()) {
    query["IncludeAssignedUser"] = request.getIncludeAssignedUser();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOUPath()) {
    query["OUPath"] = request.getOUPath();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDirectoryUsers"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDirectoryUsersResponse>();
}

/**
 * @summary If you use an Active Directory (AD) directory to connect to your enterprise AD, call this operation to retrieve user information from your enterprise AD.
 *
 * @param request ListDirectoryUsersRequest
 * @return ListDirectoryUsersResponse
 */
ListDirectoryUsersResponse Client::listDirectoryUsers(const ListDirectoryUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDirectoryUsersWithOptions(request, runtime);
}

/**
 * @summary Queries the permissions on a shared file on a drive.
 *
 * @param request ListFilePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFilePermissionResponse
 */
ListFilePermissionResponse Client::listFilePermissionWithOptions(const ListFilePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFilePermission"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFilePermissionResponse>();
}

/**
 * @summary Queries the permissions on a shared file on a drive.
 *
 * @param request ListFilePermissionRequest
 * @return ListFilePermissionResponse
 */
ListFilePermissionResponse Client::listFilePermission(const ListFilePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFilePermissionWithOptions(request, runtime);
}

/**
 * @summary Queries applications installed on a cloud computer.
 *
 * @param request ListInstalledAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstalledAppsResponse
 */
ListInstalledAppsResponse Client::listInstalledAppsWithOptions(const ListInstalledAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
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
    {"action" , "ListInstalledApps"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstalledAppsResponse>();
}

/**
 * @summary Queries applications installed on a cloud computer.
 *
 * @param request ListInstalledAppsRequest
 * @return ListInstalledAppsResponse
 */
ListInstalledAppsResponse Client::listInstalledApps(const ListInstalledAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstalledAppsWithOptions(request, runtime);
}

/**
 * @summary Queries information about an office network, including its status, cloud computer quantity, virtual private cloud (VPC) type, and more.
 *
 * @param request ListOfficeSiteOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOfficeSiteOverviewResponse
 */
ListOfficeSiteOverviewResponse Client::listOfficeSiteOverviewWithOptions(const ListOfficeSiteOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceRefresh()) {
    query["ForceRefresh"] = request.getForceRefresh();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasQueryRange()) {
    query["QueryRange"] = request.getQueryRange();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOfficeSiteOverview"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOfficeSiteOverviewResponse>();
}

/**
 * @summary Queries information about an office network, including its status, cloud computer quantity, virtual private cloud (VPC) type, and more.
 *
 * @param request ListOfficeSiteOverviewRequest
 * @return ListOfficeSiteOverviewResponse
 */
ListOfficeSiteOverviewResponse Client::listOfficeSiteOverview(const ListOfficeSiteOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOfficeSiteOverviewWithOptions(request, runtime);
}

/**
 * @summary Queries information about Active Directory (AD) accounts in an AD office network (formerly known as a workspace) that is connected to an AD domain.
 *
 * @param request ListOfficeSiteUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOfficeSiteUsersResponse
 */
ListOfficeSiteUsersResponse Client::listOfficeSiteUsersWithOptions(const ListOfficeSiteUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssignedInfo()) {
    query["AssignedInfo"] = request.getAssignedInfo();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasIncludeAssignedUser()) {
    query["IncludeAssignedUser"] = request.getIncludeAssignedUser();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOUPath()) {
    query["OUPath"] = request.getOUPath();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOfficeSiteUsers"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOfficeSiteUsersResponse>();
}

/**
 * @summary Queries information about Active Directory (AD) accounts in an AD office network (formerly known as a workspace) that is connected to an AD domain.
 *
 * @param request ListOfficeSiteUsersRequest
 * @return ListOfficeSiteUsersResponse
 */
ListOfficeSiteUsersResponse Client::listOfficeSiteUsers(const ListOfficeSiteUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOfficeSiteUsersWithOptions(request, runtime);
}

/**
 * @summary Queries the list of tags that are added to cloud computers.
 *
 * @description You must specify at least one of the following parameters in the request to specify the query object: `ResourceId.N`, `Tag.N.Key`, or `Tag.N.Value`.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the list of tags that are added to cloud computers.
 *
 * @description You must specify at least one of the following parameters in the request to specify the query object: `ResourceId.N`, `Tag.N.Key`, or `Tag.N.Value`.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the download URLs for transferred files.
 *
 * @param request ListTransferFileDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransferFileDownloadUrlResponse
 */
ListTransferFileDownloadUrlResponse Client::listTransferFileDownloadUrlWithOptions(const ListTransferFileDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileIds()) {
    query["FileIds"] = request.getFileIds();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransferFileDownloadUrl"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransferFileDownloadUrlResponse>();
}

/**
 * @summary Retrieves the download URLs for transferred files.
 *
 * @param request ListTransferFileDownloadUrlRequest
 * @return ListTransferFileDownloadUrlResponse
 */
ListTransferFileDownloadUrlResponse Client::listTransferFileDownloadUrl(const ListTransferFileDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransferFileDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the file information of a file transmission task.
 *
 * @param request ListTransferFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransferFilesResponse
 */
ListTransferFilesResponse Client::listTransferFilesWithOptions(const ListTransferFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransferFiles"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransferFilesResponse>();
}

/**
 * @summary Queries the file information of a file transmission task.
 *
 * @param request ListTransferFilesRequest
 * @return ListTransferFilesResponse
 */
ListTransferFilesResponse Client::listTransferFiles(const ListTransferFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransferFilesWithOptions(request, runtime);
}

/**
 * @summary Obtains the organizational units (OUs) of an Active Directory (AD) domain that is connected to an enterprise AD office network (formerly workspace).
 *
 * @param request ListUserAdOrganizationUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserAdOrganizationUnitsResponse
 */
ListUserAdOrganizationUnitsResponse Client::listUserAdOrganizationUnitsWithOptions(const ListUserAdOrganizationUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserAdOrganizationUnits"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserAdOrganizationUnitsResponse>();
}

/**
 * @summary Obtains the organizational units (OUs) of an Active Directory (AD) domain that is connected to an enterprise AD office network (formerly workspace).
 *
 * @param request ListUserAdOrganizationUnitsRequest
 * @return ListUserAdOrganizationUnitsResponse
 */
ListUserAdOrganizationUnitsResponse Client::listUserAdOrganizationUnits(const ListUserAdOrganizationUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserAdOrganizationUnitsWithOptions(request, runtime);
}

/**
 * @summary Locks a multi-factor authentication (MFA) device that is in the NORMAL state.
 *
 * @description After a virtual MFA device is locked, its status changes to LOCKED. The Active Directory (AD) user who uses the virtual MFA device is unable to pass MFA and is therefore unable to log on to the client. You can call the [UnlockVirtualMFADevice](https://help.aliyun.com/document_detail/206212.html) operation to unlock the device.
 *
 * @param request LockVirtualMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LockVirtualMFADeviceResponse
 */
LockVirtualMFADeviceResponse Client::lockVirtualMFADeviceWithOptions(const LockVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LockVirtualMFADevice"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LockVirtualMFADeviceResponse>();
}

/**
 * @summary Locks a multi-factor authentication (MFA) device that is in the NORMAL state.
 *
 * @description After a virtual MFA device is locked, its status changes to LOCKED. The Active Directory (AD) user who uses the virtual MFA device is unable to pass MFA and is therefore unable to log on to the client. You can call the [UnlockVirtualMFADevice](https://help.aliyun.com/document_detail/206212.html) operation to unlock the device.
 *
 * @param request LockVirtualMFADeviceRequest
 * @return LockVirtualMFADeviceResponse
 */
LockVirtualMFADeviceResponse Client::lockVirtualMFADevice(const LockVirtualMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lockVirtualMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Migrates one or more cloud computers to a new office network.
 *
 * @param request MigrateDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateDesktopsResponse
 */
MigrateDesktopsResponse Client::migrateDesktopsWithOptions(const MigrateDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTargetMemberIp()) {
    query["TargetMemberIp"] = request.getTargetMemberIp();
  }

  if (!!request.hasTargetOfficeSiteId()) {
    query["TargetOfficeSiteId"] = request.getTargetOfficeSiteId();
  }

  if (!!request.hasTargetSubnetId()) {
    query["TargetSubnetId"] = request.getTargetSubnetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateDesktopsResponse>();
}

/**
 * @summary Migrates one or more cloud computers to a new office network.
 *
 * @param request MigrateDesktopsRequest
 * @return MigrateDesktopsResponse
 */
MigrateDesktopsResponse Client::migrateDesktops(const MigrateDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateDesktopsWithOptions(request, runtime);
}

/**
 * @summary Update the protocols of images to Adaptive Streaming Protocol (ASP).
 *
 * @param request MigrateImageProtocolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateImageProtocolResponse
 */
MigrateImageProtocolResponse Client::migrateImageProtocolWithOptions(const MigrateImageProtocolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTargetProtocolType()) {
    query["TargetProtocolType"] = request.getTargetProtocolType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateImageProtocol"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateImageProtocolResponse>();
}

/**
 * @summary Update the protocols of images to Adaptive Streaming Protocol (ASP).
 *
 * @param request MigrateImageProtocolRequest
 * @return MigrateImageProtocolResponse
 */
MigrateImageProtocolResponse Client::migrateImageProtocol(const MigrateImageProtocolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return migrateImageProtocolWithOptions(request, runtime);
}

/**
 * @summary Modifies an Active Directory (AD) directory.
 *
 * @description You can modify the following domain name- and Domain Name System (DNS)-related parameters only for Active Directory (AD) directories that are in the ERROR or REGISTERING state: `DomainName`, `SubDomainName`, `DnsAddress.N`, and `SubDomainDnsAddress`.
 *
 * @param request ModifyADConnectorDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyADConnectorDirectoryResponse
 */
ModifyADConnectorDirectoryResponse Client::modifyADConnectorDirectoryWithOptions(const ModifyADConnectorDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdHostname()) {
    query["AdHostname"] = request.getAdHostname();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasDirectoryName()) {
    query["DirectoryName"] = request.getDirectoryName();
  }

  if (!!request.hasDnsAddress()) {
    query["DnsAddress"] = request.getDnsAddress();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainPassword()) {
    query["DomainPassword"] = request.getDomainPassword();
  }

  if (!!request.hasDomainUserName()) {
    query["DomainUserName"] = request.getDomainUserName();
  }

  if (!!request.hasMfaEnabled()) {
    query["MfaEnabled"] = request.getMfaEnabled();
  }

  if (!!request.hasOUName()) {
    query["OUName"] = request.getOUName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSubDomainDnsAddress()) {
    query["SubDomainDnsAddress"] = request.getSubDomainDnsAddress();
  }

  if (!!request.hasSubDomainName()) {
    query["SubDomainName"] = request.getSubDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyADConnectorDirectory"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyADConnectorDirectoryResponse>();
}

/**
 * @summary Modifies an Active Directory (AD) directory.
 *
 * @description You can modify the following domain name- and Domain Name System (DNS)-related parameters only for Active Directory (AD) directories that are in the ERROR or REGISTERING state: `DomainName`, `SubDomainName`, `DnsAddress.N`, and `SubDomainDnsAddress`.
 *
 * @param request ModifyADConnectorDirectoryRequest
 * @return ModifyADConnectorDirectoryResponse
 */
ModifyADConnectorDirectoryResponse Client::modifyADConnectorDirectory(const ModifyADConnectorDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyADConnectorDirectoryWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic properties of an enterprise Active Directory (AD) office network, such as the office network name and domain names of the enterprise AD subdomains.
 *
 * @description You can modify parameters of domain names and Domain Name System (DNS) for enterprise AD office networks that are in the `ERROR` or `REGISTERED` state. The parameters include `DomainName`, `SubDomainName`, `DnsAddress.N`, and `SubDomainDnsAddress.N`.
 *
 * @param request ModifyADConnectorOfficeSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyADConnectorOfficeSiteResponse
 */
ModifyADConnectorOfficeSiteResponse Client::modifyADConnectorOfficeSiteWithOptions(const ModifyADConnectorOfficeSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdHostname()) {
    query["AdHostname"] = request.getAdHostname();
  }

  if (!!request.hasBackupDCHostname()) {
    query["BackupDCHostname"] = request.getBackupDCHostname();
  }

  if (!!request.hasBackupDns()) {
    query["BackupDns"] = request.getBackupDns();
  }

  if (!!request.hasDnsAddress()) {
    query["DnsAddress"] = request.getDnsAddress();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainPassword()) {
    query["DomainPassword"] = request.getDomainPassword();
  }

  if (!!request.hasDomainUserName()) {
    query["DomainUserName"] = request.getDomainUserName();
  }

  if (!!request.hasMfaEnabled()) {
    query["MfaEnabled"] = request.getMfaEnabled();
  }

  if (!!request.hasOUName()) {
    query["OUName"] = request.getOUName();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOfficeSiteName()) {
    query["OfficeSiteName"] = request.getOfficeSiteName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSubDomainDnsAddress()) {
    query["SubDomainDnsAddress"] = request.getSubDomainDnsAddress();
  }

  if (!!request.hasSubDomainName()) {
    query["SubDomainName"] = request.getSubDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyADConnectorOfficeSite"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyADConnectorOfficeSiteResponse>();
}

/**
 * @summary Modifies the basic properties of an enterprise Active Directory (AD) office network, such as the office network name and domain names of the enterprise AD subdomains.
 *
 * @description You can modify parameters of domain names and Domain Name System (DNS) for enterprise AD office networks that are in the `ERROR` or `REGISTERED` state. The parameters include `DomainName`, `SubDomainName`, `DnsAddress.N`, and `SubDomainDnsAddress.N`.
 *
 * @param request ModifyADConnectorOfficeSiteRequest
 * @return ModifyADConnectorOfficeSiteResponse
 */
ModifyADConnectorOfficeSiteResponse Client::modifyADConnectorOfficeSite(const ModifyADConnectorOfficeSiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyADConnectorOfficeSiteWithOptions(request, runtime);
}

/**
 * @summary Modify the Internet access control policy on the office network or cloud computer granularity.
 *
 * @description You can set different Internet access control policies at different granularities to achieve the effect of composite policies. For example, you can disable the Internet access on the office network granularity and enable the Internet access on specific cloud computer granularity. The effect is that all cloud computers in the office network except the specified cloud computers are not allowed to access the Internet.
 *
 * @param request ModifyAclEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAclEntriesResponse
 */
ModifyAclEntriesResponse Client::modifyAclEntriesWithOptions(const ModifyAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAclEntries"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAclEntriesResponse>();
}

/**
 * @summary Modify the Internet access control policy on the office network or cloud computer granularity.
 *
 * @description You can set different Internet access control policies at different granularities to achieve the effect of composite policies. For example, you can disable the Internet access on the office network granularity and enable the Internet access on specific cloud computer granularity. The effect is that all cloud computers in the office network except the specified cloud computers are not allowed to access the Internet.
 *
 * @param request ModifyAclEntriesRequest
 * @return ModifyAclEntriesResponse
 */
ModifyAclEntriesResponse Client::modifyAclEntries(const ModifyAclEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAclEntriesWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration items of an automatic snapshot policy, including the policy name and snapshot retention period.
 *
 * @param request ModifyAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAutoSnapshotPolicyResponse
 */
ModifyAutoSnapshotPolicyResponse Client::modifyAutoSnapshotPolicyWithOptions(const ModifyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.getCronExpression();
  }

  if (!!request.hasDiskType()) {
    query["DiskType"] = request.getDiskType();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRetentionDays()) {
    query["RetentionDays"] = request.getRetentionDays();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAutoSnapshotPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAutoSnapshotPolicyResponse>();
}

/**
 * @summary Modifies the configuration items of an automatic snapshot policy, including the policy name and snapshot retention period.
 *
 * @param request ModifyAutoSnapshotPolicyRequest
 * @return ModifyAutoSnapshotPolicyResponse
 */
ModifyAutoSnapshotPolicyResponse Client::modifyAutoSnapshotPolicy(const ModifyAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies a custom cloud computer template.
 *
 * @description Only custom desktop templates can be modified.
 *
 * @param request ModifyBundleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBundleResponse
 */
ModifyBundleResponse Client::modifyBundleWithOptions(const ModifyBundleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBundleId()) {
    query["BundleId"] = request.getBundleId();
  }

  if (!!request.hasBundleName()) {
    query["BundleName"] = request.getBundleName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBundle"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBundleResponse>();
}

/**
 * @summary Modifies a custom cloud computer template.
 *
 * @description Only custom desktop templates can be modified.
 *
 * @param request ModifyBundleRequest
 * @return ModifyBundleResponse
 */
ModifyBundleResponse Client::modifyBundle(const ModifyBundleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBundleWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a disk file or folder, such as the file name.
 *
 * @param request ModifyCdsFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCdsFileResponse
 */
ModifyCdsFileResponse Client::modifyCdsFileWithOptions(const ModifyCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasConflictPolicy()) {
    query["ConflictPolicy"] = request.getConflictPolicy();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCdsFile"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCdsFileResponse>();
}

/**
 * @summary Modifies the attributes of a disk file or folder, such as the file name.
 *
 * @param request ModifyCdsFileRequest
 * @return ModifyCdsFileResponse
 */
ModifyCdsFileResponse Client::modifyCdsFile(const ModifyCdsFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCdsFileWithOptions(request, runtime);
}

/**
 * @summary Modifies the link for file sharing.
 *
 * @param request ModifyCdsFileShareLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCdsFileShareLinkResponse
 */
ModifyCdsFileShareLinkResponse Client::modifyCdsFileShareLinkWithOptions(const ModifyCdsFileShareLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisableDownload()) {
    query["DisableDownload"] = request.getDisableDownload();
  }

  if (!!request.hasDisablePreview()) {
    query["DisablePreview"] = request.getDisablePreview();
  }

  if (!!request.hasDisableSave()) {
    query["DisableSave"] = request.getDisableSave();
  }

  if (!!request.hasDownloadCount()) {
    query["DownloadCount"] = request.getDownloadCount();
  }

  if (!!request.hasDownloadLimit()) {
    query["DownloadLimit"] = request.getDownloadLimit();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasPreviewCount()) {
    query["PreviewCount"] = request.getPreviewCount();
  }

  if (!!request.hasPreviewLimit()) {
    query["PreviewLimit"] = request.getPreviewLimit();
  }

  if (!!request.hasReportCount()) {
    query["ReportCount"] = request.getReportCount();
  }

  if (!!request.hasSaveCount()) {
    query["SaveCount"] = request.getSaveCount();
  }

  if (!!request.hasSaveLimit()) {
    query["SaveLimit"] = request.getSaveLimit();
  }

  if (!!request.hasShareId()) {
    query["ShareId"] = request.getShareId();
  }

  if (!!request.hasShareName()) {
    query["ShareName"] = request.getShareName();
  }

  if (!!request.hasSharePwd()) {
    query["SharePwd"] = request.getSharePwd();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasVideoPreviewCount()) {
    query["VideoPreviewCount"] = request.getVideoPreviewCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCdsFileShareLink"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCdsFileShareLinkResponse>();
}

/**
 * @summary Modifies the link for file sharing.
 *
 * @param request ModifyCdsFileShareLinkRequest
 * @return ModifyCdsFileShareLinkResponse
 */
ModifyCdsFileShareLinkResponse Client::modifyCdsFileShareLink(const ModifyCdsFileShareLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCdsFileShareLinkWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a region-free policy.
 *
 * @param request ModifyCenterPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCenterPolicyResponse
 */
ModifyCenterPolicyResponse Client::modifyCenterPolicyWithOptions(const ModifyCenterPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcademicProxy()) {
    query["AcademicProxy"] = request.getAcademicProxy();
  }

  if (!!request.hasAdminAccess()) {
    query["AdminAccess"] = request.getAdminAccess();
  }

  if (!!request.hasAdminKeyboardOnFullScreen()) {
    query["AdminKeyboardOnFullScreen"] = request.getAdminKeyboardOnFullScreen();
  }

  if (!!request.hasAdminKeyboardOnWindows()) {
    query["AdminKeyboardOnWindows"] = request.getAdminKeyboardOnWindows();
  }

  if (!!request.hasAppContentProtection()) {
    query["AppContentProtection"] = request.getAppContentProtection();
  }

  if (!!request.hasAuthorizeAccessPolicyRule()) {
    query["AuthorizeAccessPolicyRule"] = request.getAuthorizeAccessPolicyRule();
  }

  if (!!request.hasAuthorizeSecurityPolicyRule()) {
    query["AuthorizeSecurityPolicyRule"] = request.getAuthorizeSecurityPolicyRule();
  }

  if (!!request.hasAutoReconnect()) {
    query["AutoReconnect"] = request.getAutoReconnect();
  }

  if (!!request.hasBusinessChannel()) {
    query["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasCameraRedirect()) {
    query["CameraRedirect"] = request.getCameraRedirect();
  }

  if (!!request.hasClientControlMenu()) {
    query["ClientControlMenu"] = request.getClientControlMenu();
  }

  if (!!request.hasClientCreateSnapshot()) {
    query["ClientCreateSnapshot"] = request.getClientCreateSnapshot();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasClipboard()) {
    query["Clipboard"] = request.getClipboard();
  }

  if (!!request.hasClipboardGraineds()) {
    query["ClipboardGraineds"] = request.getClipboardGraineds();
  }

  if (!!request.hasClipboardScope()) {
    query["ClipboardScope"] = request.getClipboardScope();
  }

  if (!!request.hasColorEnhancement()) {
    query["ColorEnhancement"] = request.getColorEnhancement();
  }

  if (!!request.hasCpdDriveClipboard()) {
    query["CpdDriveClipboard"] = request.getCpdDriveClipboard();
  }

  if (!!request.hasCpuDownGradeDuration()) {
    query["CpuDownGradeDuration"] = request.getCpuDownGradeDuration();
  }

  if (!!request.hasCpuOverload()) {
    query["CpuOverload"] = request.getCpuOverload();
  }

  if (!!request.hasCpuProcessors()) {
    query["CpuProcessors"] = request.getCpuProcessors();
  }

  if (!!request.hasCpuProtectedMode()) {
    query["CpuProtectedMode"] = request.getCpuProtectedMode();
  }

  if (!!request.hasCpuRateLimit()) {
    query["CpuRateLimit"] = request.getCpuRateLimit();
  }

  if (!!request.hasCpuSampleDuration()) {
    query["CpuSampleDuration"] = request.getCpuSampleDuration();
  }

  if (!!request.hasCpuSingleRateLimit()) {
    query["CpuSingleRateLimit"] = request.getCpuSingleRateLimit();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDeviceConnectHint()) {
    query["DeviceConnectHint"] = request.getDeviceConnectHint();
  }

  if (!!request.hasDeviceRedirects()) {
    query["DeviceRedirects"] = request.getDeviceRedirects();
  }

  if (!!request.hasDeviceRules()) {
    query["DeviceRules"] = request.getDeviceRules();
  }

  if (!!request.hasDisconnectKeepSession()) {
    query["DisconnectKeepSession"] = request.getDisconnectKeepSession();
  }

  if (!!request.hasDisconnectKeepSessionTime()) {
    query["DisconnectKeepSessionTime"] = request.getDisconnectKeepSessionTime();
  }

  if (!!request.hasDiskOverload()) {
    query["DiskOverload"] = request.getDiskOverload();
  }

  if (!!request.hasDisplayMode()) {
    query["DisplayMode"] = request.getDisplayMode();
  }

  if (!!request.hasDomainResolveRule()) {
    query["DomainResolveRule"] = request.getDomainResolveRule();
  }

  if (!!request.hasDomainResolveRuleType()) {
    query["DomainResolveRuleType"] = request.getDomainResolveRuleType();
  }

  if (!!request.hasEnableSessionRateLimiting()) {
    query["EnableSessionRateLimiting"] = request.getEnableSessionRateLimiting();
  }

  if (!!request.hasEndUserApplyAdminCoordinate()) {
    query["EndUserApplyAdminCoordinate"] = request.getEndUserApplyAdminCoordinate();
  }

  if (!!request.hasEndUserGroupCoordinate()) {
    query["EndUserGroupCoordinate"] = request.getEndUserGroupCoordinate();
  }

  if (!!request.hasExternalDrive()) {
    query["ExternalDrive"] = request.getExternalDrive();
  }

  if (!!request.hasFileMigrate()) {
    query["FileMigrate"] = request.getFileMigrate();
  }

  if (!!request.hasFileTransferAddress()) {
    query["FileTransferAddress"] = request.getFileTransferAddress();
  }

  if (!!request.hasFileTransferInSize()) {
    query["FileTransferInSize"] = request.getFileTransferInSize();
  }

  if (!!request.hasFileTransferInUnit()) {
    query["FileTransferInUnit"] = request.getFileTransferInUnit();
  }

  if (!!request.hasFileTransferOutSize()) {
    query["FileTransferOutSize"] = request.getFileTransferOutSize();
  }

  if (!!request.hasFileTransferOutUnit()) {
    query["FileTransferOutUnit"] = request.getFileTransferOutUnit();
  }

  if (!!request.hasFileTransferSizeLimit()) {
    query["FileTransferSizeLimit"] = request.getFileTransferSizeLimit();
  }

  if (!!request.hasFileTransferSpeed()) {
    query["FileTransferSpeed"] = request.getFileTransferSpeed();
  }

  if (!!request.hasFileTransferSpeedLocation()) {
    query["FileTransferSpeedLocation"] = request.getFileTransferSpeedLocation();
  }

  if (!!request.hasGpuAcceleration()) {
    query["GpuAcceleration"] = request.getGpuAcceleration();
  }

  if (!!request.hasHoverConfigMsg()) {
    query["HoverConfigMsg"] = request.getHoverConfigMsg();
  }

  if (!!request.hasHtml5FileTransfer()) {
    query["Html5FileTransfer"] = request.getHtml5FileTransfer();
  }

  if (!!request.hasInternetCommunicationProtocol()) {
    query["InternetCommunicationProtocol"] = request.getInternetCommunicationProtocol();
  }

  if (!!request.hasInternetPrinter()) {
    query["InternetPrinter"] = request.getInternetPrinter();
  }

  if (!!request.hasLocalDrive()) {
    query["LocalDrive"] = request.getLocalDrive();
  }

  if (!!request.hasMaxReconnectTime()) {
    query["MaxReconnectTime"] = request.getMaxReconnectTime();
  }

  if (!!request.hasMemoryDownGradeDuration()) {
    query["MemoryDownGradeDuration"] = request.getMemoryDownGradeDuration();
  }

  if (!!request.hasMemoryOverload()) {
    query["MemoryOverload"] = request.getMemoryOverload();
  }

  if (!!request.hasMemoryProcessors()) {
    query["MemoryProcessors"] = request.getMemoryProcessors();
  }

  if (!!request.hasMemoryProtectedMode()) {
    query["MemoryProtectedMode"] = request.getMemoryProtectedMode();
  }

  if (!!request.hasMemoryRateLimit()) {
    query["MemoryRateLimit"] = request.getMemoryRateLimit();
  }

  if (!!request.hasMemorySampleDuration()) {
    query["MemorySampleDuration"] = request.getMemorySampleDuration();
  }

  if (!!request.hasMemorySingleRateLimit()) {
    query["MemorySingleRateLimit"] = request.getMemorySingleRateLimit();
  }

  if (!!request.hasMobileRestart()) {
    query["MobileRestart"] = request.getMobileRestart();
  }

  if (!!request.hasMobileSafeMenu()) {
    query["MobileSafeMenu"] = request.getMobileSafeMenu();
  }

  if (!!request.hasMobileShutdown()) {
    query["MobileShutdown"] = request.getMobileShutdown();
  }

  if (!!request.hasMobileWuyingKeeper()) {
    query["MobileWuyingKeeper"] = request.getMobileWuyingKeeper();
  }

  if (!!request.hasMobileWyAssistant()) {
    query["MobileWyAssistant"] = request.getMobileWyAssistant();
  }

  if (!!request.hasModelLibrary()) {
    query["ModelLibrary"] = request.getModelLibrary();
  }

  if (!!request.hasMultiScreen()) {
    query["MultiScreen"] = request.getMultiScreen();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNetRedirect()) {
    query["NetRedirect"] = request.getNetRedirect();
  }

  if (!!request.hasNetRedirectRule()) {
    query["NetRedirectRule"] = request.getNetRedirectRule();
  }

  if (!!request.hasNoOperationDisconnect()) {
    query["NoOperationDisconnect"] = request.getNoOperationDisconnect();
  }

  if (!!request.hasNoOperationDisconnectTime()) {
    query["NoOperationDisconnectTime"] = request.getNoOperationDisconnectTime();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasPortProxy()) {
    query["PortProxy"] = request.getPortProxy();
  }

  if (!!request.hasPrinterRedirect()) {
    query["PrinterRedirect"] = request.getPrinterRedirect();
  }

  if (!!request.hasQualityEnhancement()) {
    query["QualityEnhancement"] = request.getQualityEnhancement();
  }

  if (!!request.hasRecordEventDuration()) {
    query["RecordEventDuration"] = request.getRecordEventDuration();
  }

  if (!!request.hasRecordEventFileExts()) {
    query["RecordEventFileExts"] = request.getRecordEventFileExts();
  }

  if (!!request.hasRecordEventFilePaths()) {
    query["RecordEventFilePaths"] = request.getRecordEventFilePaths();
  }

  if (!!request.hasRecordEventLevels()) {
    query["RecordEventLevels"] = request.getRecordEventLevels();
  }

  if (!!request.hasRecordEventRegisters()) {
    query["RecordEventRegisters"] = request.getRecordEventRegisters();
  }

  if (!!request.hasRecordEvents()) {
    query["RecordEvents"] = request.getRecordEvents();
  }

  if (!!request.hasRecording()) {
    query["Recording"] = request.getRecording();
  }

  if (!!request.hasRecordingAudio()) {
    query["RecordingAudio"] = request.getRecordingAudio();
  }

  if (!!request.hasRecordingDuration()) {
    query["RecordingDuration"] = request.getRecordingDuration();
  }

  if (!!request.hasRecordingEndTime()) {
    query["RecordingEndTime"] = request.getRecordingEndTime();
  }

  if (!!request.hasRecordingExpires()) {
    query["RecordingExpires"] = request.getRecordingExpires();
  }

  if (!!request.hasRecordingFps()) {
    query["RecordingFps"] = request.getRecordingFps();
  }

  if (!!request.hasRecordingStartTime()) {
    query["RecordingStartTime"] = request.getRecordingStartTime();
  }

  if (!!request.hasRecordingUserNotify()) {
    query["RecordingUserNotify"] = request.getRecordingUserNotify();
  }

  if (!!request.hasRecordingUserNotifyMessage()) {
    query["RecordingUserNotifyMessage"] = request.getRecordingUserNotifyMessage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoteCoordinate()) {
    query["RemoteCoordinate"] = request.getRemoteCoordinate();
  }

  if (!!request.hasResetDesktop()) {
    query["ResetDesktop"] = request.getResetDesktop();
  }

  if (!!request.hasResolutionDpi()) {
    query["ResolutionDpi"] = request.getResolutionDpi();
  }

  if (!!request.hasResolutionHeight()) {
    query["ResolutionHeight"] = request.getResolutionHeight();
  }

  if (!!request.hasResolutionModel()) {
    query["ResolutionModel"] = request.getResolutionModel();
  }

  if (!!request.hasResolutionWidth()) {
    query["ResolutionWidth"] = request.getResolutionWidth();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRevokeAccessPolicyRule()) {
    query["RevokeAccessPolicyRule"] = request.getRevokeAccessPolicyRule();
  }

  if (!!request.hasRevokeSecurityPolicyRule()) {
    query["RevokeSecurityPolicyRule"] = request.getRevokeSecurityPolicyRule();
  }

  if (!!request.hasSafeMenu()) {
    query["SafeMenu"] = request.getSafeMenu();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasScopeValue()) {
    query["ScopeValue"] = request.getScopeValue();
  }

  if (!!request.hasScreenDisplayMode()) {
    query["ScreenDisplayMode"] = request.getScreenDisplayMode();
  }

  if (!!request.hasSessionMaxRateKbps()) {
    query["SessionMaxRateKbps"] = request.getSessionMaxRateKbps();
  }

  if (!!request.hasSmoothEnhancement()) {
    query["SmoothEnhancement"] = request.getSmoothEnhancement();
  }

  if (!!request.hasStatusMonitor()) {
    query["StatusMonitor"] = request.getStatusMonitor();
  }

  if (!!request.hasStreamingMode()) {
    query["StreamingMode"] = request.getStreamingMode();
  }

  if (!!request.hasTargetFps()) {
    query["TargetFps"] = request.getTargetFps();
  }

  if (!!request.hasTaskbar()) {
    query["Taskbar"] = request.getTaskbar();
  }

  if (!!request.hasUsbRedirect()) {
    query["UsbRedirect"] = request.getUsbRedirect();
  }

  if (!!request.hasUsbSupplyRedirectRule()) {
    query["UsbSupplyRedirectRule"] = request.getUsbSupplyRedirectRule();
  }

  if (!!request.hasUseTime()) {
    query["UseTime"] = request.getUseTime();
  }

  if (!!request.hasVideoEncAvgKbps()) {
    query["VideoEncAvgKbps"] = request.getVideoEncAvgKbps();
  }

  if (!!request.hasVideoEncMaxQP()) {
    query["VideoEncMaxQP"] = request.getVideoEncMaxQP();
  }

  if (!!request.hasVideoEncMinQP()) {
    query["VideoEncMinQP"] = request.getVideoEncMinQP();
  }

  if (!!request.hasVideoEncPeakKbps()) {
    query["VideoEncPeakKbps"] = request.getVideoEncPeakKbps();
  }

  if (!!request.hasVideoEncPolicy()) {
    query["VideoEncPolicy"] = request.getVideoEncPolicy();
  }

  if (!!request.hasVideoRedirect()) {
    query["VideoRedirect"] = request.getVideoRedirect();
  }

  if (!!request.hasVisualQuality()) {
    query["VisualQuality"] = request.getVisualQuality();
  }

  if (!!request.hasWatermark()) {
    query["Watermark"] = request.getWatermark();
  }

  if (!!request.hasWatermarkAntiCam()) {
    query["WatermarkAntiCam"] = request.getWatermarkAntiCam();
  }

  if (!!request.hasWatermarkColor()) {
    query["WatermarkColor"] = request.getWatermarkColor();
  }

  if (!!request.hasWatermarkColumnAmount()) {
    query["WatermarkColumnAmount"] = request.getWatermarkColumnAmount();
  }

  if (!!request.hasWatermarkCustomText()) {
    query["WatermarkCustomText"] = request.getWatermarkCustomText();
  }

  if (!!request.hasWatermarkDegree()) {
    query["WatermarkDegree"] = request.getWatermarkDegree();
  }

  if (!!request.hasWatermarkFontSize()) {
    query["WatermarkFontSize"] = request.getWatermarkFontSize();
  }

  if (!!request.hasWatermarkFontStyle()) {
    query["WatermarkFontStyle"] = request.getWatermarkFontStyle();
  }

  if (!!request.hasWatermarkPower()) {
    query["WatermarkPower"] = request.getWatermarkPower();
  }

  if (!!request.hasWatermarkRowAmount()) {
    query["WatermarkRowAmount"] = request.getWatermarkRowAmount();
  }

  if (!!request.hasWatermarkSecurity()) {
    query["WatermarkSecurity"] = request.getWatermarkSecurity();
  }

  if (!!request.hasWatermarkShadow()) {
    query["WatermarkShadow"] = request.getWatermarkShadow();
  }

  if (!!request.hasWatermarkTransparencyValue()) {
    query["WatermarkTransparencyValue"] = request.getWatermarkTransparencyValue();
  }

  if (!!request.hasWatermarkType()) {
    query["WatermarkType"] = request.getWatermarkType();
  }

  if (!!request.hasWuyingKeeper()) {
    query["WuyingKeeper"] = request.getWuyingKeeper();
  }

  if (!!request.hasWyAssistant()) {
    query["WyAssistant"] = request.getWyAssistant();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCenterPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCenterPolicyResponse>();
}

/**
 * @summary Modifies the configuration of a region-free policy.
 *
 * @param request ModifyCenterPolicyRequest
 * @return ModifyCenterPolicyResponse
 */
ModifyCenterPolicyResponse Client::modifyCenterPolicy(const ModifyCenterPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCenterPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies team spaces.
 *
 * @param request ModifyCloudDriveGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCloudDriveGroupsResponse
 */
ModifyCloudDriveGroupsResponse Client::modifyCloudDriveGroupsWithOptions(const ModifyCloudDriveGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTotalSize()) {
    query["TotalSize"] = request.getTotalSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCloudDriveGroups"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCloudDriveGroupsResponse>();
}

/**
 * @summary Modifies team spaces.
 *
 * @param request ModifyCloudDriveGroupsRequest
 * @return ModifyCloudDriveGroupsResponse
 */
ModifyCloudDriveGroupsResponse Client::modifyCloudDriveGroups(const ModifyCloudDriveGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudDriveGroupsWithOptions(request, runtime);
}

/**
 * @summary The default policy for the enterprise file storage is that all users can upload files from on-premises devices to the enterprise file storage, but cannot download files from the enterprise file storage to on-premises devices. You can invoke this API to add users with exception permissions.
 *
 * @description When accessing the file storage within WUYING Workspace, file uploads and downloads between them are always allowed because both reside in a secure environment. However, if the visibility of the file storage on WUYING Terminal has been enabled, end users can directly access the file storage through the WUYING Terminal interface.
 * To prevent end users from transferring sensitive data from WUYING Workspace to on-premises devices via the file storage, the default policy allows users to upload files from on-premises devices to the enterprise file storage but prohibits downloading files from the enterprise file storage to on-premises devices. This default policy applies to all users of the file storage, and you do not need to configure its scope.
 * If needed, you can invoke this API to control user permissions for file transfer between the enterprise file storage and on-premises devices. Users added here will be exempt from the default policy.
 *
 * @param request ModifyCloudDrivePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCloudDrivePermissionResponse
 */
ModifyCloudDrivePermissionResponse Client::modifyCloudDrivePermissionWithOptions(const ModifyCloudDrivePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasDownloadEndUserIds()) {
    query["DownloadEndUserIds"] = request.getDownloadEndUserIds();
  }

  if (!!request.hasDownloadUploadEndUserIds()) {
    query["DownloadUploadEndUserIds"] = request.getDownloadUploadEndUserIds();
  }

  if (!!request.hasNoDownloadNoUploadEndUserIds()) {
    query["NoDownloadNoUploadEndUserIds"] = request.getNoDownloadNoUploadEndUserIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCloudDrivePermission"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCloudDrivePermissionResponse>();
}

/**
 * @summary The default policy for the enterprise file storage is that all users can upload files from on-premises devices to the enterprise file storage, but cannot download files from the enterprise file storage to on-premises devices. You can invoke this API to add users with exception permissions.
 *
 * @description When accessing the file storage within WUYING Workspace, file uploads and downloads between them are always allowed because both reside in a secure environment. However, if the visibility of the file storage on WUYING Terminal has been enabled, end users can directly access the file storage through the WUYING Terminal interface.
 * To prevent end users from transferring sensitive data from WUYING Workspace to on-premises devices via the file storage, the default policy allows users to upload files from on-premises devices to the enterprise file storage but prohibits downloading files from the enterprise file storage to on-premises devices. This default policy applies to all users of the file storage, and you do not need to configure its scope.
 * If needed, you can invoke this API to control user permissions for file transfer between the enterprise file storage and on-premises devices. Users added here will be exempt from the default policy.
 *
 * @param request ModifyCloudDrivePermissionRequest
 * @return ModifyCloudDrivePermissionResponse
 */
ModifyCloudDrivePermissionResponse Client::modifyCloudDrivePermission(const ModifyCloudDrivePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudDrivePermissionWithOptions(request, runtime);
}

/**
 * @summary Modify basic properties of a user\\"s personal disk, such as the status and storage capacity limit.
 *
 * @param request ModifyCloudDriveUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCloudDriveUsersResponse
 */
ModifyCloudDriveUsersResponse Client::modifyCloudDriveUsersWithOptions(const ModifyCloudDriveUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserMaxSize()) {
    query["UserMaxSize"] = request.getUserMaxSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCloudDriveUsers"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCloudDriveUsersResponse>();
}

/**
 * @summary Modify basic properties of a user\\"s personal disk, such as the status and storage capacity limit.
 *
 * @param request ModifyCloudDriveUsersRequest
 * @return ModifyCloudDriveUsersResponse
 */
ModifyCloudDriveUsersResponse Client::modifyCloudDriveUsers(const ModifyCloudDriveUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudDriveUsersWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information of a configuration group.
 *
 * @param request ModifyConfigGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyConfigGroupResponse
 */
ModifyConfigGroupResponse Client::modifyConfigGroupWithOptions(const ModifyConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyConfigGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyConfigGroupResponse>();
}

/**
 * @summary Modifies the basic information of a configuration group.
 *
 * @param request ModifyConfigGroupRequest
 * @return ModifyConfigGroupResponse
 */
ModifyConfigGroupResponse Client::modifyConfigGroup(const ModifyConfigGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyConfigGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the layouts of cloud computer list headers, such as the required fields and the display and hide settings.
 *
 * @param request ModifyCustomizedListHeadersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomizedListHeadersResponse
 */
ModifyCustomizedListHeadersResponse Client::modifyCustomizedListHeadersWithOptions(const ModifyCustomizedListHeadersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHeaders()) {
    query["Headers"] = request.getHeaders();
  }

  if (!!request.hasListType()) {
    query["ListType"] = request.getListType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCustomizedListHeaders"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustomizedListHeadersResponse>();
}

/**
 * @summary Modifies the layouts of cloud computer list headers, such as the required fields and the display and hide settings.
 *
 * @param request ModifyCustomizedListHeadersRequest
 * @return ModifyCustomizedListHeadersResponse
 */
ModifyCustomizedListHeadersResponse Client::modifyCustomizedListHeaders(const ModifyCustomizedListHeadersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomizedListHeadersWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of a cloud desktop to subscription or pay-as-you-go.
 *
 * @description - Before calling this operation, ensure you understand the billing methods for cloud desktops. For more information, see [billing overview](https://help.aliyun.com/document_detail/188395.html).
 * - Ensure the cloud desktop is in the running or stopped state and has no overdue payments.
 * - After you pay for the order, the system begins to convert the billing method. While the desktop is in the updating state, you cannot perform other operations, such as starting, stopping, or changing its configuration.
 * <props="china">
 * When you convert from subscription to pay-as-you-go, refund limits apply. For more information, see [Convert Subscription to Pay-As-You-Go](https://help.aliyun.com/document_detail/439964.html).
 *
 * @param request ModifyDesktopChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesktopChargeTypeResponse
 */
ModifyDesktopChargeTypeResponse Client::modifyDesktopChargeTypeWithOptions(const ModifyDesktopChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasUseDuration()) {
    query["UseDuration"] = request.getUseDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesktopChargeType"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesktopChargeTypeResponse>();
}

/**
 * @summary Changes the billing method of a cloud desktop to subscription or pay-as-you-go.
 *
 * @description - Before calling this operation, ensure you understand the billing methods for cloud desktops. For more information, see [billing overview](https://help.aliyun.com/document_detail/188395.html).
 * - Ensure the cloud desktop is in the running or stopped state and has no overdue payments.
 * - After you pay for the order, the system begins to convert the billing method. While the desktop is in the updating state, you cannot perform other operations, such as starting, stopping, or changing its configuration.
 * <props="china">
 * When you convert from subscription to pay-as-you-go, refund limits apply. For more information, see [Convert Subscription to Pay-As-You-Go](https://help.aliyun.com/document_detail/439964.html).
 *
 * @param request ModifyDesktopChargeTypeRequest
 * @return ModifyDesktopChargeTypeResponse
 */
ModifyDesktopChargeTypeResponse Client::modifyDesktopChargeType(const ModifyDesktopChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesktopChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies a shared cloud computer group.
 *
 * @description After you create a shared cloud computer group, the system automatically provisions cloud computers in the group based on its auto scaling policy and end-user connections. All cloud computers in the group use the same cloud computer template and security policy. You can modify the group’s configuration as needed, such as the group name, cloud computer template, and associated policies.
 *
 * @param request ModifyDesktopGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesktopGroupResponse
 */
ModifyDesktopGroupResponse Client::modifyDesktopGroupWithOptions(const ModifyDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowAutoSetup()) {
    query["AllowAutoSetup"] = request.getAllowAutoSetup();
  }

  if (!!request.hasAllowBufferCount()) {
    query["AllowBufferCount"] = request.getAllowBufferCount();
  }

  if (!!request.hasBindAmount()) {
    query["BindAmount"] = request.getBindAmount();
  }

  if (!!request.hasBuyDesktopsCount()) {
    query["BuyDesktopsCount"] = request.getBuyDesktopsCount();
  }

  if (!!request.hasClassify()) {
    query["Classify"] = request.getClassify();
  }

  if (!!request.hasComments()) {
    query["Comments"] = request.getComments();
  }

  if (!!request.hasConnectDuration()) {
    query["ConnectDuration"] = request.getConnectDuration();
  }

  if (!!request.hasDeleteDuration()) {
    query["DeleteDuration"] = request.getDeleteDuration();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasDesktopGroupName()) {
    query["DesktopGroupName"] = request.getDesktopGroupName();
  }

  if (!!request.hasDisableSessionConfig()) {
    query["DisableSessionConfig"] = request.getDisableSessionConfig();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasIdleDisconnectDuration()) {
    query["IdleDisconnectDuration"] = request.getIdleDisconnectDuration();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasKeepDuration()) {
    query["KeepDuration"] = request.getKeepDuration();
  }

  if (!!request.hasLoadPolicy()) {
    query["LoadPolicy"] = request.getLoadPolicy();
  }

  if (!!request.hasMaxDesktopsCount()) {
    query["MaxDesktopsCount"] = request.getMaxDesktopsCount();
  }

  if (!!request.hasMinDesktopsCount()) {
    query["MinDesktopsCount"] = request.getMinDesktopsCount();
  }

  if (!!request.hasOwnBundleId()) {
    query["OwnBundleId"] = request.getOwnBundleId();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasPolicyGroupIds()) {
    query["PolicyGroupIds"] = request.getPolicyGroupIds();
  }

  if (!!request.hasProfileFollowSwitch()) {
    query["ProfileFollowSwitch"] = request.getProfileFollowSwitch();
  }

  if (!!request.hasRatioThreshold()) {
    query["RatioThreshold"] = request.getRatioThreshold();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResetType()) {
    query["ResetType"] = request.getResetType();
  }

  if (!!request.hasScaleStrategyId()) {
    query["ScaleStrategyId"] = request.getScaleStrategyId();
  }

  if (!!request.hasStopDuration()) {
    query["StopDuration"] = request.getStopDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesktopGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesktopGroupResponse>();
}

/**
 * @summary Modifies a shared cloud computer group.
 *
 * @description After you create a shared cloud computer group, the system automatically provisions cloud computers in the group based on its auto scaling policy and end-user connections. All cloud computers in the group use the same cloud computer template and security policy. You can modify the group’s configuration as needed, such as the group name, cloud computer template, and associated policies.
 *
 * @param request ModifyDesktopGroupRequest
 * @return ModifyDesktopGroupResponse
 */
ModifyDesktopGroupResponse Client::modifyDesktopGroup(const ModifyDesktopGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesktopGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the hostname of a Windows cloud desktop in an AD workspace.
 *
 * @description You can only modify the hostname of Windows cloud desktops in an AD workspace. Modifying the hostname rebuilds the cloud desktop.
 *
 * @param request ModifyDesktopHostNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesktopHostNameResponse
 */
ModifyDesktopHostNameResponse Client::modifyDesktopHostNameWithOptions(const ModifyDesktopHostNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopIds()) {
    query["DesktopIds"] = request.getDesktopIds();
  }

  if (!!request.hasNewHostName()) {
    query["NewHostName"] = request.getNewHostName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesktopHostName"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesktopHostNameResponse>();
}

/**
 * @summary Modifies the hostname of a Windows cloud desktop in an AD workspace.
 *
 * @description You can only modify the hostname of Windows cloud desktops in an AD workspace. Modifying the hostname rebuilds the cloud desktop.
 *
 * @param request ModifyDesktopHostNameRequest
 * @return ModifyDesktopHostNameResponse
 */
ModifyDesktopHostNameResponse Client::modifyDesktopHostName(const ModifyDesktopHostNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesktopHostNameWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a specified cloud desktop.
 *
 * @param request ModifyDesktopNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesktopNameResponse
 */
ModifyDesktopNameResponse Client::modifyDesktopNameWithOptions(const ModifyDesktopNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopIds()) {
    query["DesktopIds"] = request.getDesktopIds();
  }

  if (!!request.hasNewDesktopName()) {
    query["NewDesktopName"] = request.getNewDesktopName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserAssignMode()) {
    query["UserAssignMode"] = request.getUserAssignMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesktopName"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesktopNameResponse>();
}

/**
 * @summary Modifies the name of a specified cloud desktop.
 *
 * @param request ModifyDesktopNameRequest
 * @return ModifyDesktopNameResponse
 */
ModifyDesktopNameResponse Client::modifyDesktopName(const ModifyDesktopNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesktopNameWithOptions(request, runtime);
}

/**
 * @summary 修改桌面超卖组
 *
 * @param request ModifyDesktopOversoldGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesktopOversoldGroupResponse
 */
ModifyDesktopOversoldGroupResponse Client::modifyDesktopOversoldGroupWithOptions(const ModifyDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConcurrenceCount()) {
    query["ConcurrenceCount"] = request.getConcurrenceCount();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasIdleDisconnectDuration()) {
    query["IdleDisconnectDuration"] = request.getIdleDisconnectDuration();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasKeepDuration()) {
    query["KeepDuration"] = request.getKeepDuration();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasOversoldUserCount()) {
    query["OversoldUserCount"] = request.getOversoldUserCount();
  }

  if (!!request.hasOversoldWarn()) {
    query["OversoldWarn"] = request.getOversoldWarn();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasStopDuration()) {
    query["StopDuration"] = request.getStopDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesktopOversoldGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesktopOversoldGroupResponse>();
}

/**
 * @summary 修改桌面超卖组
 *
 * @param request ModifyDesktopOversoldGroupRequest
 * @return ModifyDesktopOversoldGroupResponse
 */
ModifyDesktopOversoldGroupResponse Client::modifyDesktopOversoldGroup(const ModifyDesktopOversoldGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesktopOversoldGroupWithOptions(request, runtime);
}

/**
 * @summary 修改桌面超卖组售卖数据
 *
 * @param request ModifyDesktopOversoldGroupSaleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesktopOversoldGroupSaleResponse
 */
ModifyDesktopOversoldGroupSaleResponse Client::modifyDesktopOversoldGroupSaleWithOptions(const ModifyDesktopOversoldGroupSaleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConcurrenceCount()) {
    query["ConcurrenceCount"] = request.getConcurrenceCount();
  }

  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasOversoldUserCount()) {
    query["OversoldUserCount"] = request.getOversoldUserCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesktopOversoldGroupSale"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesktopOversoldGroupSaleResponse>();
}

/**
 * @summary 修改桌面超卖组售卖数据
 *
 * @param request ModifyDesktopOversoldGroupSaleRequest
 * @return ModifyDesktopOversoldGroupSaleResponse
 */
ModifyDesktopOversoldGroupSaleResponse Client::modifyDesktopOversoldGroupSale(const ModifyDesktopOversoldGroupSaleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesktopOversoldGroupSaleWithOptions(request, runtime);
}

/**
 * @summary 修改桌面超卖用户组
 *
 * @param request ModifyDesktopOversoldUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesktopOversoldUserGroupResponse
 */
ModifyDesktopOversoldUserGroupResponse Client::modifyDesktopOversoldUserGroupWithOptions(const ModifyDesktopOversoldUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesktopOversoldUserGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesktopOversoldUserGroupResponse>();
}

/**
 * @summary 修改桌面超卖用户组
 *
 * @param request ModifyDesktopOversoldUserGroupRequest
 * @return ModifyDesktopOversoldUserGroupResponse
 */
ModifyDesktopOversoldUserGroupResponse Client::modifyDesktopOversoldUserGroup(const ModifyDesktopOversoldUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesktopOversoldUserGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the desktop type and expands the disks of a cloud desktop.
 *
 * @description This operation modifies the configuration of a cloud desktop, including its desktop type and disk sizes.
 * - Before you modify the configuration, ensure you understand the supported desktop types and disk sizes. For more information, see [Cloud desktop specifications](https://help.aliyun.com/document_detail/188609.html). You can call the [DescribeDesktopTypes](~~DescribeDesktopTypes~~) operation to query the supported desktop types.
 * - When you call this operation, you must modify the desktop type, the system disk size, or the data disk size. This requires specifying at least one of the corresponding parameters: `DesktopType`, `RootDiskSizeGib`, or `UserDiskSizeGib`. Note the following:
 *   - A desktop type includes vCPU, memory, and GPU configurations. You can change the desktop type but cannot modify these resources individually.
 *   - You cannot change a desktop type between general-purpose and non-general-purpose, or between graphics-accelerated and non-graphics-accelerated.
 *   - Both the system disk and the data disk support expansion, but not shrinking.
 *   - If the cloud desktop uses the subscription billing method, the system calculates the price difference based on the configuration change. You must pay the price difference, or you will receive a refund.
 *   - For the same cloud desktop, wait at least five minutes between configuration change operations.
 *   - The cloud desktop must be in the Stopped state.
 * - This operation does not affect the personal data stored on the cloud desktop.
 *
 * @param request ModifyDesktopSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesktopSpecResponse
 */
ModifyDesktopSpecResponse Client::modifyDesktopSpecWithOptions(const ModifyDesktopSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopType()) {
    query["DesktopType"] = request.getDesktopType();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasResourceSpecs()) {
    query["ResourceSpecs"] = request.getResourceSpecs();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRootDiskSizeGib()) {
    query["RootDiskSizeGib"] = request.getRootDiskSizeGib();
  }

  if (!!request.hasUserDiskPerformanceLevel()) {
    query["UserDiskPerformanceLevel"] = request.getUserDiskPerformanceLevel();
  }

  if (!!request.hasUserDiskSizeGib()) {
    query["UserDiskSizeGib"] = request.getUserDiskSizeGib();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesktopSpec"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesktopSpecResponse>();
}

/**
 * @summary Modifies the desktop type and expands the disks of a cloud desktop.
 *
 * @description This operation modifies the configuration of a cloud desktop, including its desktop type and disk sizes.
 * - Before you modify the configuration, ensure you understand the supported desktop types and disk sizes. For more information, see [Cloud desktop specifications](https://help.aliyun.com/document_detail/188609.html). You can call the [DescribeDesktopTypes](~~DescribeDesktopTypes~~) operation to query the supported desktop types.
 * - When you call this operation, you must modify the desktop type, the system disk size, or the data disk size. This requires specifying at least one of the corresponding parameters: `DesktopType`, `RootDiskSizeGib`, or `UserDiskSizeGib`. Note the following:
 *   - A desktop type includes vCPU, memory, and GPU configurations. You can change the desktop type but cannot modify these resources individually.
 *   - You cannot change a desktop type between general-purpose and non-general-purpose, or between graphics-accelerated and non-graphics-accelerated.
 *   - Both the system disk and the data disk support expansion, but not shrinking.
 *   - If the cloud desktop uses the subscription billing method, the system calculates the price difference based on the configuration change. You must pay the price difference, or you will receive a refund.
 *   - For the same cloud desktop, wait at least five minutes between configuration change operations.
 *   - The cloud desktop must be in the Stopped state.
 * - This operation does not affect the personal data stored on the cloud desktop.
 *
 * @param request ModifyDesktopSpecRequest
 * @return ModifyDesktopSpecResponse
 */
ModifyDesktopSpecResponse Client::modifyDesktopSpec(const ModifyDesktopSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesktopSpecWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies scheduled tasks on cloud computers, such as starting, stopping, restarting, and resetting cloud computers on schedule.
 *
 * @param request ModifyDesktopTimerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesktopTimerResponse
 */
ModifyDesktopTimerResponse Client::modifyDesktopTimerWithOptions(const ModifyDesktopTimerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasDesktopTimers()) {
    query["DesktopTimers"] = request.getDesktopTimers();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUseDesktopTimers()) {
    query["UseDesktopTimers"] = request.getUseDesktopTimers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesktopTimer"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesktopTimerResponse>();
}

/**
 * @summary Creates or modifies scheduled tasks on cloud computers, such as starting, stopping, restarting, and resetting cloud computers on schedule.
 *
 * @param request ModifyDesktopTimerRequest
 * @return ModifyDesktopTimerResponse
 */
ModifyDesktopTimerResponse Client::modifyDesktopTimer(const ModifyDesktopTimerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesktopTimerWithOptions(request, runtime);
}

/**
 * @summary Changes an existing cloud computer policy for cloud computers.
 *
 * @description The cloud computers for which you want to change their policies must be in the Running state.
 *
 * @param request ModifyDesktopsPolicyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDesktopsPolicyGroupResponse
 */
ModifyDesktopsPolicyGroupResponse Client::modifyDesktopsPolicyGroupWithOptions(const ModifyDesktopsPolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasPolicyGroupIds()) {
    query["PolicyGroupIds"] = request.getPolicyGroupIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDesktopsPolicyGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDesktopsPolicyGroupResponse>();
}

/**
 * @summary Changes an existing cloud computer policy for cloud computers.
 *
 * @description The cloud computers for which you want to change their policies must be in the Running state.
 *
 * @param request ModifyDesktopsPolicyGroupRequest
 * @return ModifyDesktopsPolicyGroupResponse
 */
ModifyDesktopsPolicyGroupResponse Client::modifyDesktopsPolicyGroup(const ModifyDesktopsPolicyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDesktopsPolicyGroupWithOptions(request, runtime);
}

/**
 * @summary Modify the performance level of a cloud desktop\\"s system disk or data disk.
 *
 * @description When you create a WUYING Workspace, you can define its specifications using a custom template. Graphics and High-frequency workspaces use Enhanced SSDs (ESSDs) by default, which lets you set the disk capacity and performance level. You can modify the performance level of the system disk or data disk as needed.
 * > Only Graphics and High-frequency WUYING Workspaces support modifying the disk performance level.
 *
 * @param request ModifyDiskSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDiskSpecResponse
 */
ModifyDiskSpecResponse Client::modifyDiskSpecWithOptions(const ModifyDiskSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasRootDiskPerformanceLevel()) {
    query["RootDiskPerformanceLevel"] = request.getRootDiskPerformanceLevel();
  }

  if (!!request.hasUserDiskPerformanceLevel()) {
    query["UserDiskPerformanceLevel"] = request.getUserDiskPerformanceLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDiskSpec"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDiskSpecResponse>();
}

/**
 * @summary Modify the performance level of a cloud desktop\\"s system disk or data disk.
 *
 * @description When you create a WUYING Workspace, you can define its specifications using a custom template. Graphics and High-frequency workspaces use Enhanced SSDs (ESSDs) by default, which lets you set the disk capacity and performance level. You can modify the performance level of the system disk or data disk as needed.
 * > Only Graphics and High-frequency WUYING Workspaces support modifying the disk performance level.
 *
 * @param request ModifyDiskSpecRequest
 * @return ModifyDiskSpecResponse
 */
ModifyDiskSpecResponse Client::modifyDiskSpec(const ModifyDiskSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDiskSpecWithOptions(request, runtime);
}

/**
 * @summary Assigns a cloud computer to end users and removes all original end users of the cloud computer.
 *
 * @description *   The cloud computer must be in the Running state.
 * *   After you call this operation, the assignment result is immediately returned. You can call the [DescribeDesktops](https://help.aliyun.com/document_detail/436815.html) operation to query the assignment of the cloud computer. The value of the `ManagementFlags` response parameter indicates the assignment of the cloud computer. A value of `ASSIGNING` indicates that the cloud computer is being assigned, and other values indicate that the cloud computer is assigned.
 * *   We recommend that you check the assignment every 2 to 5 seconds and perform the checks within 50 seconds. Typically, 1 to 5 seconds are required to complete the assignment.
 *
 * @param request ModifyEntitlementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEntitlementResponse
 */
ModifyEntitlementResponse Client::modifyEntitlementWithOptions(const ModifyEntitlementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEntitlement"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEntitlementResponse>();
}

/**
 * @summary Assigns a cloud computer to end users and removes all original end users of the cloud computer.
 *
 * @description *   The cloud computer must be in the Running state.
 * *   After you call this operation, the assignment result is immediately returned. You can call the [DescribeDesktops](https://help.aliyun.com/document_detail/436815.html) operation to query the assignment of the cloud computer. The value of the `ManagementFlags` response parameter indicates the assignment of the cloud computer. A value of `ASSIGNING` indicates that the cloud computer is being assigned, and other values indicate that the cloud computer is assigned.
 * *   We recommend that you check the assignment every 2 to 5 seconds and perform the checks within 50 seconds. Typically, 1 to 5 seconds are required to complete the assignment.
 *
 * @param request ModifyEntitlementRequest
 * @return ModifyEntitlementResponse
 */
ModifyEntitlementResponse Client::modifyEntitlement(const ModifyEntitlementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEntitlementWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of an image, including the name and description of the image.
 *
 * @description You can call this operation to modify the attributes of only custom images that are in the Available state.
 *
 * @param request ModifyImageAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyImageAttributeResponse
 */
ModifyImageAttributeResponse Client::modifyImageAttributeWithOptions(const ModifyImageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyImageAttribute"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyImageAttributeResponse>();
}

/**
 * @summary Modifies the attributes of an image, including the name and description of the image.
 *
 * @description You can call this operation to modify the attributes of only custom images that are in the Available state.
 *
 * @param request ModifyImageAttributeRequest
 * @return ModifyImageAttributeResponse
 */
ModifyImageAttributeResponse Client::modifyImageAttribute(const ModifyImageAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyImageAttributeWithOptions(request, runtime);
}

/**
 * @summary Shares an image with other Alibaba Cloud accounts, or unshares an image from the recipient Alibaba Cloud accounts.
 *
 * @description ### [](#)Security of shared images
 * Elastic Desktop Service cannot guarantee the integrity and security of shared images. When you use a shared image, you must make sure that the image comes from a trusted sharer or account, and you are legally responsible for using the shared image.
 * ### [](#)Quota and billing
 * *   A shared image does not count against the image quotas of principals to which the image is shared.
 * *   After a principal uses a shared image to create a cloud computer, the sharer is not charged for the shared image.
 * *   You are not charged for shared images.
 * ### [](#)Supported sharing behaviors
 * *   You can share custom images with other Alibaba Cloud accounts.
 * *   You can share custom images between accounts in the China site (aliyun.com) and the international site (alibabacloud.com).
 * ### [](#)Unsupported sharing behaviors
 * *   You cannot share images that are shared by other Alibaba Cloud accounts.
 * *   You cannot share encrypted images.
 * *   You cannot share images across regions. If you want to share an image across regions, you must copy the image to the destination region and then share the image. For more information, see [CopyImage](https://help.aliyun.com/document_detail/436978.html).
 *
 * @param request ModifyImagePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyImagePermissionResponse
 */
ModifyImagePermissionResponse Client::modifyImagePermissionWithOptions(const ModifyImagePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddAccount()) {
    query["AddAccount"] = request.getAddAccount();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoveAccount()) {
    query["RemoveAccount"] = request.getRemoveAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyImagePermission"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyImagePermissionResponse>();
}

/**
 * @summary Shares an image with other Alibaba Cloud accounts, or unshares an image from the recipient Alibaba Cloud accounts.
 *
 * @description ### [](#)Security of shared images
 * Elastic Desktop Service cannot guarantee the integrity and security of shared images. When you use a shared image, you must make sure that the image comes from a trusted sharer or account, and you are legally responsible for using the shared image.
 * ### [](#)Quota and billing
 * *   A shared image does not count against the image quotas of principals to which the image is shared.
 * *   After a principal uses a shared image to create a cloud computer, the sharer is not charged for the shared image.
 * *   You are not charged for shared images.
 * ### [](#)Supported sharing behaviors
 * *   You can share custom images with other Alibaba Cloud accounts.
 * *   You can share custom images between accounts in the China site (aliyun.com) and the international site (alibabacloud.com).
 * ### [](#)Unsupported sharing behaviors
 * *   You cannot share images that are shared by other Alibaba Cloud accounts.
 * *   You cannot share encrypted images.
 * *   You cannot share images across regions. If you want to share an image across regions, you must copy the image to the destination region and then share the image. For more information, see [CopyImage](https://help.aliyun.com/document_detail/436978.html).
 *
 * @param request ModifyImagePermissionRequest
 * @return ModifyImagePermissionResponse
 */
ModifyImagePermissionResponse Client::modifyImagePermission(const ModifyImagePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyImagePermissionWithOptions(request, runtime);
}

/**
 * @summary Modifies the mount target of a File Storage NAS (NAS) file system.
 *
 * @description When you create a NAS file system, a mount target is automatically generated. By default, the mount target does not need to be changed. If the mount target is deleted by misoperation, you must specify a new mount target for the NAS file system in the workspace. You can call the [CreateMountTarget](https://help.aliyun.com/document_detail/62621.html) operation to create a mount target.
 *
 * @param request ModifyNASDefaultMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNASDefaultMountTargetResponse
 */
ModifyNASDefaultMountTargetResponse Client::modifyNASDefaultMountTargetWithOptions(const ModifyNASDefaultMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMountTargetDomain()) {
    query["MountTargetDomain"] = request.getMountTargetDomain();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNASDefaultMountTarget"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNASDefaultMountTargetResponse>();
}

/**
 * @summary Modifies the mount target of a File Storage NAS (NAS) file system.
 *
 * @description When you create a NAS file system, a mount target is automatically generated. By default, the mount target does not need to be changed. If the mount target is deleted by misoperation, you must specify a new mount target for the NAS file system in the workspace. You can call the [CreateMountTarget](https://help.aliyun.com/document_detail/62621.html) operation to create a mount target.
 *
 * @param request ModifyNASDefaultMountTargetRequest
 * @return ModifyNASDefaultMountTargetResponse
 */
ModifyNASDefaultMountTargetResponse Client::modifyNASDefaultMountTarget(const ModifyNASDefaultMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNASDefaultMountTargetWithOptions(request, runtime);
}

/**
 * @summary Modifies the bandwidth of a premium bandwidth plan.
 *
 * @param request ModifyNetworkPackageBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNetworkPackageBandwidthResponse
 */
ModifyNetworkPackageBandwidthResponse Client::modifyNetworkPackageBandwidthWithOptions(const ModifyNetworkPackageBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasNetworkPackageId()) {
    query["NetworkPackageId"] = request.getNetworkPackageId();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNetworkPackageBandwidth"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNetworkPackageBandwidthResponse>();
}

/**
 * @summary Modifies the bandwidth of a premium bandwidth plan.
 *
 * @param request ModifyNetworkPackageBandwidthRequest
 * @return ModifyNetworkPackageBandwidthResponse
 */
ModifyNetworkPackageBandwidthResponse Client::modifyNetworkPackageBandwidth(const ModifyNetworkPackageBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNetworkPackageBandwidthWithOptions(request, runtime);
}

/**
 * @summary Restores or disables a premium bandwidth plan.
 *
 * @description If you want to temporarily disable the Internet access of your cloud computer after the Internet access is enabled for your cloud computer, you can disable the premium bandwidth plan and restore it as needed.
 *
 * @param request ModifyNetworkPackageEnabledRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNetworkPackageEnabledResponse
 */
ModifyNetworkPackageEnabledResponse Client::modifyNetworkPackageEnabledWithOptions(const ModifyNetworkPackageEnabledRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasNetworkPackageId()) {
    query["NetworkPackageId"] = request.getNetworkPackageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNetworkPackageEnabled"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNetworkPackageEnabledResponse>();
}

/**
 * @summary Restores or disables a premium bandwidth plan.
 *
 * @description If you want to temporarily disable the Internet access of your cloud computer after the Internet access is enabled for your cloud computer, you can disable the premium bandwidth plan and restore it as needed.
 *
 * @param request ModifyNetworkPackageEnabledRequest
 * @return ModifyNetworkPackageEnabledResponse
 */
ModifyNetworkPackageEnabledResponse Client::modifyNetworkPackageEnabled(const ModifyNetworkPackageEnabledRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNetworkPackageEnabledWithOptions(request, runtime);
}

/**
 * @summary Modifies the Global Accelerator (GA) configuration.
 *
 * @param request ModifyOfficeSiteAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOfficeSiteAcceleratorResponse
 */
ModifyOfficeSiteAcceleratorResponse Client::modifyOfficeSiteAcceleratorWithOptions(const ModifyOfficeSiteAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateRegion()) {
    query["AccelerateRegion"] = request.getAccelerateRegion();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyOfficeSiteAccelerator"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOfficeSiteAcceleratorResponse>();
}

/**
 * @summary Modifies the Global Accelerator (GA) configuration.
 *
 * @param request ModifyOfficeSiteAcceleratorRequest
 * @return ModifyOfficeSiteAcceleratorResponse
 */
ModifyOfficeSiteAcceleratorResponse Client::modifyOfficeSiteAccelerator(const ModifyOfficeSiteAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyOfficeSiteAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Modifies basic attributes of an office site (formerly a workspace), such as its name and whether to grant users local administrative permissions on their cloud computers.
 *
 * @param request ModifyOfficeSiteAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOfficeSiteAttributeResponse
 */
ModifyOfficeSiteAttributeResponse Client::modifyOfficeSiteAttributeWithOptions(const ModifyOfficeSiteAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorityHost()) {
    query["AuthorityHost"] = request.getAuthorityHost();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientSecret()) {
    query["ClientSecret"] = request.getClientSecret();
  }

  if (!!request.hasDesktopAccessType()) {
    query["DesktopAccessType"] = request.getDesktopAccessType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEnableAdminAccess()) {
    query["EnableAdminAccess"] = request.getEnableAdminAccess();
  }

  if (!!request.hasNeedVerifyLoginRisk()) {
    query["NeedVerifyLoginRisk"] = request.getNeedVerifyLoginRisk();
  }

  if (!!request.hasNeedVerifyZeroDevice()) {
    query["NeedVerifyZeroDevice"] = request.getNeedVerifyZeroDevice();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOfficeSiteName()) {
    query["OfficeSiteName"] = request.getOfficeSiteName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyOfficeSiteAttribute"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOfficeSiteAttributeResponse>();
}

/**
 * @summary Modifies basic attributes of an office site (formerly a workspace), such as its name and whether to grant users local administrative permissions on their cloud computers.
 *
 * @param request ModifyOfficeSiteAttributeRequest
 * @return ModifyOfficeSiteAttributeResponse
 */
ModifyOfficeSiteAttributeResponse Client::modifyOfficeSiteAttribute(const ModifyOfficeSiteAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyOfficeSiteAttributeWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the communication between cloud computers in an office network (formerly workspace). If you enable the communication between cloud computers in an office network, the cloud computers can access each other.
 *
 * @param request ModifyOfficeSiteCrossDesktopAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOfficeSiteCrossDesktopAccessResponse
 */
ModifyOfficeSiteCrossDesktopAccessResponse Client::modifyOfficeSiteCrossDesktopAccessWithOptions(const ModifyOfficeSiteCrossDesktopAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableCrossDesktopAccess()) {
    query["EnableCrossDesktopAccess"] = request.getEnableCrossDesktopAccess();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyOfficeSiteCrossDesktopAccess"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOfficeSiteCrossDesktopAccessResponse>();
}

/**
 * @summary Enables or disables the communication between cloud computers in an office network (formerly workspace). If you enable the communication between cloud computers in an office network, the cloud computers can access each other.
 *
 * @param request ModifyOfficeSiteCrossDesktopAccessRequest
 * @return ModifyOfficeSiteCrossDesktopAccessResponse
 */
ModifyOfficeSiteCrossDesktopAccessResponse Client::modifyOfficeSiteCrossDesktopAccess(const ModifyOfficeSiteCrossDesktopAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyOfficeSiteCrossDesktopAccessWithOptions(request, runtime);
}

/**
 * @summary Modifies the DNS information of an office network.
 *
 * @param request ModifyOfficeSiteDnsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOfficeSiteDnsInfoResponse
 */
ModifyOfficeSiteDnsInfoResponse Client::modifyOfficeSiteDnsInfoWithOptions(const ModifyOfficeSiteDnsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsAddress()) {
    query["DnsAddress"] = request.getDnsAddress();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyOfficeSiteDnsInfo"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOfficeSiteDnsInfoResponse>();
}

/**
 * @summary Modifies the DNS information of an office network.
 *
 * @param request ModifyOfficeSiteDnsInfoRequest
 * @return ModifyOfficeSiteDnsInfoResponse
 */
ModifyOfficeSiteDnsInfoResponse Client::modifyOfficeSiteDnsInfo(const ModifyOfficeSiteDnsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyOfficeSiteDnsInfoWithOptions(request, runtime);
}

/**
 * @summary Enables or disables multi-factor authentication (MFA) for an enterprise Active Directory (AD) office network (formerly workspace).
 *
 * @param request ModifyOfficeSiteMfaEnabledRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOfficeSiteMfaEnabledResponse
 */
ModifyOfficeSiteMfaEnabledResponse Client::modifyOfficeSiteMfaEnabledWithOptions(const ModifyOfficeSiteMfaEnabledRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMfaEnabled()) {
    query["MfaEnabled"] = request.getMfaEnabled();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyOfficeSiteMfaEnabled"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOfficeSiteMfaEnabledResponse>();
}

/**
 * @summary Enables or disables multi-factor authentication (MFA) for an enterprise Active Directory (AD) office network (formerly workspace).
 *
 * @param request ModifyOfficeSiteMfaEnabledRequest
 * @return ModifyOfficeSiteMfaEnabledResponse
 */
ModifyOfficeSiteMfaEnabledResponse Client::modifyOfficeSiteMfaEnabled(const ModifyOfficeSiteMfaEnabledRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyOfficeSiteMfaEnabledWithOptions(request, runtime);
}

/**
 * @summary Modifies cloud computer policies.
 *
 * @param request ModifyPolicyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolicyGroupResponse
 */
ModifyPolicyGroupResponse Client::modifyPolicyGroupWithOptions(const ModifyPolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdminAccess()) {
    query["AdminAccess"] = request.getAdminAccess();
  }

  if (!!request.hasAppContentProtection()) {
    query["AppContentProtection"] = request.getAppContentProtection();
  }

  if (!!request.hasAuthorizeAccessPolicyRule()) {
    query["AuthorizeAccessPolicyRule"] = request.getAuthorizeAccessPolicyRule();
  }

  if (!!request.hasAuthorizeSecurityPolicyRule()) {
    query["AuthorizeSecurityPolicyRule"] = request.getAuthorizeSecurityPolicyRule();
  }

  if (!!request.hasCameraRedirect()) {
    query["CameraRedirect"] = request.getCameraRedirect();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasClipboard()) {
    query["Clipboard"] = request.getClipboard();
  }

  if (!!request.hasDeviceRedirects()) {
    query["DeviceRedirects"] = request.getDeviceRedirects();
  }

  if (!!request.hasDeviceRules()) {
    query["DeviceRules"] = request.getDeviceRules();
  }

  if (!!request.hasDomainList()) {
    query["DomainList"] = request.getDomainList();
  }

  if (!!request.hasDomainResolveRule()) {
    query["DomainResolveRule"] = request.getDomainResolveRule();
  }

  if (!!request.hasDomainResolveRuleType()) {
    query["DomainResolveRuleType"] = request.getDomainResolveRuleType();
  }

  if (!!request.hasEndUserApplyAdminCoordinate()) {
    query["EndUserApplyAdminCoordinate"] = request.getEndUserApplyAdminCoordinate();
  }

  if (!!request.hasEndUserGroupCoordinate()) {
    query["EndUserGroupCoordinate"] = request.getEndUserGroupCoordinate();
  }

  if (!!request.hasGpuAcceleration()) {
    query["GpuAcceleration"] = request.getGpuAcceleration();
  }

  if (!!request.hasHtml5Access()) {
    query["Html5Access"] = request.getHtml5Access();
  }

  if (!!request.hasHtml5FileTransfer()) {
    query["Html5FileTransfer"] = request.getHtml5FileTransfer();
  }

  if (!!request.hasInternetCommunicationProtocol()) {
    query["InternetCommunicationProtocol"] = request.getInternetCommunicationProtocol();
  }

  if (!!request.hasLocalDrive()) {
    query["LocalDrive"] = request.getLocalDrive();
  }

  if (!!request.hasMaxReconnectTime()) {
    query["MaxReconnectTime"] = request.getMaxReconnectTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNetRedirect()) {
    query["NetRedirect"] = request.getNetRedirect();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasPreemptLogin()) {
    query["PreemptLogin"] = request.getPreemptLogin();
  }

  if (!!request.hasPreemptLoginUser()) {
    query["PreemptLoginUser"] = request.getPreemptLoginUser();
  }

  if (!!request.hasPrinterRedirection()) {
    query["PrinterRedirection"] = request.getPrinterRedirection();
  }

  if (!!request.hasRecordContent()) {
    query["RecordContent"] = request.getRecordContent();
  }

  if (!!request.hasRecordContentExpires()) {
    query["RecordContentExpires"] = request.getRecordContentExpires();
  }

  if (!!request.hasRecording()) {
    query["Recording"] = request.getRecording();
  }

  if (!!request.hasRecordingAudio()) {
    query["RecordingAudio"] = request.getRecordingAudio();
  }

  if (!!request.hasRecordingDuration()) {
    query["RecordingDuration"] = request.getRecordingDuration();
  }

  if (!!request.hasRecordingEndTime()) {
    query["RecordingEndTime"] = request.getRecordingEndTime();
  }

  if (!!request.hasRecordingExpires()) {
    query["RecordingExpires"] = request.getRecordingExpires();
  }

  if (!!request.hasRecordingFps()) {
    query["RecordingFps"] = request.getRecordingFps();
  }

  if (!!request.hasRecordingStartTime()) {
    query["RecordingStartTime"] = request.getRecordingStartTime();
  }

  if (!!request.hasRecordingUserNotify()) {
    query["RecordingUserNotify"] = request.getRecordingUserNotify();
  }

  if (!!request.hasRecordingUserNotifyMessage()) {
    query["RecordingUserNotifyMessage"] = request.getRecordingUserNotifyMessage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemoteCoordinate()) {
    query["RemoteCoordinate"] = request.getRemoteCoordinate();
  }

  if (!!request.hasRevokeAccessPolicyRule()) {
    query["RevokeAccessPolicyRule"] = request.getRevokeAccessPolicyRule();
  }

  if (!!request.hasRevokeSecurityPolicyRule()) {
    query["RevokeSecurityPolicyRule"] = request.getRevokeSecurityPolicyRule();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasScopeValue()) {
    query["ScopeValue"] = request.getScopeValue();
  }

  if (!!request.hasUsbRedirect()) {
    query["UsbRedirect"] = request.getUsbRedirect();
  }

  if (!!request.hasUsbSupplyRedirectRule()) {
    query["UsbSupplyRedirectRule"] = request.getUsbSupplyRedirectRule();
  }

  if (!!request.hasVideoRedirect()) {
    query["VideoRedirect"] = request.getVideoRedirect();
  }

  if (!!request.hasVisualQuality()) {
    query["VisualQuality"] = request.getVisualQuality();
  }

  if (!!request.hasWatermark()) {
    query["Watermark"] = request.getWatermark();
  }

  if (!!request.hasWatermarkAntiCam()) {
    query["WatermarkAntiCam"] = request.getWatermarkAntiCam();
  }

  if (!!request.hasWatermarkColor()) {
    query["WatermarkColor"] = request.getWatermarkColor();
  }

  if (!!request.hasWatermarkDegree()) {
    query["WatermarkDegree"] = request.getWatermarkDegree();
  }

  if (!!request.hasWatermarkFontSize()) {
    query["WatermarkFontSize"] = request.getWatermarkFontSize();
  }

  if (!!request.hasWatermarkFontStyle()) {
    query["WatermarkFontStyle"] = request.getWatermarkFontStyle();
  }

  if (!!request.hasWatermarkPower()) {
    query["WatermarkPower"] = request.getWatermarkPower();
  }

  if (!!request.hasWatermarkRowAmount()) {
    query["WatermarkRowAmount"] = request.getWatermarkRowAmount();
  }

  if (!!request.hasWatermarkSecurity()) {
    query["WatermarkSecurity"] = request.getWatermarkSecurity();
  }

  if (!!request.hasWatermarkTransparency()) {
    query["WatermarkTransparency"] = request.getWatermarkTransparency();
  }

  if (!!request.hasWatermarkTransparencyValue()) {
    query["WatermarkTransparencyValue"] = request.getWatermarkTransparencyValue();
  }

  if (!!request.hasWatermarkType()) {
    query["WatermarkType"] = request.getWatermarkType();
  }

  if (!!request.hasWyAssistant()) {
    query["WyAssistant"] = request.getWyAssistant();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPolicyGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPolicyGroupResponse>();
}

/**
 * @summary Modifies cloud computer policies.
 *
 * @param request ModifyPolicyGroupRequest
 * @return ModifyPolicyGroupResponse
 */
ModifyPolicyGroupResponse Client::modifyPolicyGroup(const ModifyPolicyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolicyGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource bindings of a QoS rule.
 *
 * @param request ModifyQosEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyQosEntriesResponse
 */
ModifyQosEntriesResponse Client::modifyQosEntriesWithOptions(const ModifyQosEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthAndroidId()) {
    query["AuthAndroidId"] = request.getAuthAndroidId();
  }

  if (!!request.hasAuthDesktopGroupId()) {
    query["AuthDesktopGroupId"] = request.getAuthDesktopGroupId();
  }

  if (!!request.hasAuthDesktopId()) {
    query["AuthDesktopId"] = request.getAuthDesktopId();
  }

  if (!!request.hasQosRuleId()) {
    query["QosRuleId"] = request.getQosRuleId();
  }

  if (!!request.hasRevokeAndroidId()) {
    query["RevokeAndroidId"] = request.getRevokeAndroidId();
  }

  if (!!request.hasRevokeDesktopGroupId()) {
    query["RevokeDesktopGroupId"] = request.getRevokeDesktopGroupId();
  }

  if (!!request.hasRevokeDesktopId()) {
    query["RevokeDesktopId"] = request.getRevokeDesktopId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyQosEntries"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyQosEntriesResponse>();
}

/**
 * @summary Modifies the resource bindings of a QoS rule.
 *
 * @param request ModifyQosEntriesRequest
 * @return ModifyQosEntriesResponse
 */
ModifyQosEntriesResponse Client::modifyQosEntries(const ModifyQosEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyQosEntriesWithOptions(request, runtime);
}

/**
 * @summary You can modify a rate limiting rule.
 *
 * @param request ModifyQosRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyQosRuleResponse
 */
ModifyQosRuleResponse Client::modifyQosRuleWithOptions(const ModifyQosRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDownload()) {
    query["Download"] = request.getDownload();
  }

  if (!!request.hasQosRuleId()) {
    query["QosRuleId"] = request.getQosRuleId();
  }

  if (!!request.hasQosRuleName()) {
    query["QosRuleName"] = request.getQosRuleName();
  }

  if (!!request.hasUpload()) {
    query["Upload"] = request.getUpload();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyQosRule"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyQosRuleResponse>();
}

/**
 * @summary You can modify a rate limiting rule.
 *
 * @param request ModifyQosRuleRequest
 * @return ModifyQosRuleResponse
 */
ModifyQosRuleResponse Client::modifyQosRule(const ModifyQosRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyQosRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies a global policy that is associated with a cloud resource.
 *
 * @param request ModifyResourceCenterPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourceCenterPolicyResponse
 */
ModifyResourceCenterPolicyResponse Client::modifyResourceCenterPolicyWithOptions(const ModifyResourceCenterPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyGroupIds()) {
    query["PolicyGroupIds"] = request.getPolicyGroupIds();
  }

  if (!!request.hasPolicyGroupType()) {
    query["PolicyGroupType"] = request.getPolicyGroupType();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyResourceCenterPolicy"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyResourceCenterPolicyResponse>();
}

/**
 * @summary Modifies a global policy that is associated with a cloud resource.
 *
 * @param request ModifyResourceCenterPolicyRequest
 * @return ModifyResourceCenterPolicyResponse
 */
ModifyResourceCenterPolicyResponse Client::modifyResourceCenterPolicy(const ModifyResourceCenterPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourceCenterPolicyWithOptions(request, runtime);
}

/**
 * @summary 修改办公网络维度安全组策略
 *
 * @param request ModifySecurityGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityGroupAttributeResponse
 */
ModifySecurityGroupAttributeResponse Client::modifySecurityGroupAttributeWithOptions(const ModifySecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizeEgress()) {
    query["AuthorizeEgress"] = request.getAuthorizeEgress();
  }

  if (!!request.hasAuthorizeIngress()) {
    query["AuthorizeIngress"] = request.getAuthorizeIngress();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRevokeEgress()) {
    query["RevokeEgress"] = request.getRevokeEgress();
  }

  if (!!request.hasRevokeIngress()) {
    query["RevokeIngress"] = request.getRevokeIngress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityGroupAttribute"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityGroupAttributeResponse>();
}

/**
 * @summary 修改办公网络维度安全组策略
 *
 * @param request ModifySecurityGroupAttributeRequest
 * @return ModifySecurityGroupAttributeResponse
 */
ModifySecurityGroupAttributeResponse Client::modifySecurityGroupAttribute(const ModifySecurityGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies all parameters of a custom WUYING Workspace template.
 *
 * @description >Warning: 
 * This operation updates all parameters. To ensure compatibility with the default upgrade logic, any parameter that you do not specify is set to empty.
 *
 * @param request ModifyTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTemplateResponse
 */
ModifyTemplateResponse Client::modifyTemplateWithOptions(const ModifyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.getChargeType();
  }

  json bodyFlat = {};
  if (!!request.hasDataDiskList()) {
    bodyFlat["DataDiskList"] = request.getDataDiskList();
  }

  if (!!request.hasDefaultLanguage()) {
    body["DefaultLanguage"] = request.getDefaultLanguage();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    body["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPolicyGroupId()) {
    body["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasPostPaidAfterUsedUp()) {
    body["PostPaidAfterUsedUp"] = request.getPostPaidAfterUsedUp();
  }

  if (!!request.hasRegionConfigList()) {
    bodyFlat["RegionConfigList"] = request.getRegionConfigList();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceTagList()) {
    bodyFlat["ResourceTagList"] = request.getResourceTagList();
  }

  if (!!request.hasSiteConfigList()) {
    bodyFlat["SiteConfigList"] = request.getSiteConfigList();
  }

  if (!!request.hasSystemDiskPerformanceLevel()) {
    body["SystemDiskPerformanceLevel"] = request.getSystemDiskPerformanceLevel();
  }

  if (!!request.hasSystemDiskSize()) {
    body["SystemDiskSize"] = request.getSystemDiskSize();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTimerGroupId()) {
    body["TimerGroupId"] = request.getTimerGroupId();
  }

  if (!!request.hasUserDuration()) {
    body["UserDuration"] = request.getUserDuration();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyTemplate"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTemplateResponse>();
}

/**
 * @summary Modifies all parameters of a custom WUYING Workspace template.
 *
 * @description >Warning: 
 * This operation updates all parameters. To ensure compatibility with the default upgrade logic, any parameter that you do not specify is set to empty.
 *
 * @param request ModifyTemplateRequest
 * @return ModifyTemplateResponse
 */
ModifyTemplateResponse Client::modifyTemplate(const ModifyTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTemplateWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information of a custom cloud computer template, including the template name and template description.
 *
 * @description This operation allows you to modify only the name and description of a custom cloud computer template. To change other parameters of the template, call the [ModifyTemplate](https://help.aliyun.com/document_detail/2925841.html) operation.
 *
 * @param request ModifyTemplateBaseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTemplateBaseInfoResponse
 */
ModifyTemplateBaseInfoResponse Client::modifyTemplateBaseInfoWithOptions(const ModifyTemplateBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyTemplateBaseInfo"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTemplateBaseInfoResponse>();
}

/**
 * @summary Modifies the basic information of a custom cloud computer template, including the template name and template description.
 *
 * @description This operation allows you to modify only the name and description of a custom cloud computer template. To change other parameters of the template, call the [ModifyTemplate](https://help.aliyun.com/document_detail/2925841.html) operation.
 *
 * @param request ModifyTemplateBaseInfoRequest
 * @return ModifyTemplateBaseInfoResponse
 */
ModifyTemplateBaseInfoResponse Client::modifyTemplateBaseInfo(const ModifyTemplateBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTemplateBaseInfoWithOptions(request, runtime);
}

/**
 * @summary Modify configuration group settings, such as those for scheduled tasks.
 *
 * @param request ModifyTimerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTimerGroupResponse
 */
ModifyTimerGroupResponse Client::modifyTimerGroupWithOptions(const ModifyTimerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigTimers()) {
    query["ConfigTimers"] = request.getConfigTimers();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTimerGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTimerGroupResponse>();
}

/**
 * @summary Modify configuration group settings, such as those for scheduled tasks.
 *
 * @param request ModifyTimerGroupRequest
 * @return ModifyTimerGroupResponse
 */
ModifyTimerGroupResponse Client::modifyTimerGroup(const ModifyTimerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTimerGroupWithOptions(request, runtime);
}

/**
 * @summary Grants permissions on cloud desktops to end users, or revokes the permissions from the end users.
 *
 * @description You can modify end users only for cloud computers that are in the Running state.
 *
 * @param request ModifyUserEntitlementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserEntitlementResponse
 */
ModifyUserEntitlementResponse Client::modifyUserEntitlementWithOptions(const ModifyUserEntitlementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizeDesktopId()) {
    query["AuthorizeDesktopId"] = request.getAuthorizeDesktopId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRevokeDesktopId()) {
    query["RevokeDesktopId"] = request.getRevokeDesktopId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserEntitlement"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserEntitlementResponse>();
}

/**
 * @summary Grants permissions on cloud desktops to end users, or revokes the permissions from the end users.
 *
 * @description You can modify end users only for cloud computers that are in the Running state.
 *
 * @param request ModifyUserEntitlementRequest
 * @return ModifyUserEntitlementResponse
 */
ModifyUserEntitlementResponse Client::modifyUserEntitlement(const ModifyUserEntitlementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserEntitlementWithOptions(request, runtime);
}

/**
 * @summary Replaces the existing authorized users of a cloud computer share with different users
 *
 * @param request ModifyUserToDesktopGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserToDesktopGroupResponse
 */
ModifyUserToDesktopGroupResponse Client::modifyUserToDesktopGroupWithOptions(const ModifyUserToDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasNewEndUserIds()) {
    query["NewEndUserIds"] = request.getNewEndUserIds();
  }

  if (!!request.hasOldEndUserIds()) {
    query["OldEndUserIds"] = request.getOldEndUserIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserToDesktopGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserToDesktopGroupResponse>();
}

/**
 * @summary Replaces the existing authorized users of a cloud computer share with different users
 *
 * @param request ModifyUserToDesktopGroupRequest
 * @return ModifyUserToDesktopGroupResponse
 */
ModifyUserToDesktopGroupResponse Client::modifyUserToDesktopGroup(const ModifyUserToDesktopGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserToDesktopGroupWithOptions(request, runtime);
}

/**
 * @summary Moves a file or folder in a cloud disk to a new location.
 *
 * @param request MoveCdsFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveCdsFileResponse
 */
MoveCdsFileResponse Client::moveCdsFileWithOptions(const MoveCdsFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasConflictPolicy()) {
    query["ConflictPolicy"] = request.getConflictPolicy();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.getParentFolderId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveCdsFile"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveCdsFileResponse>();
}

/**
 * @summary Moves a file or folder in a cloud disk to a new location.
 *
 * @param request MoveCdsFileRequest
 * @return MoveCdsFileResponse
 */
MoveCdsFileResponse Client::moveCdsFile(const MoveCdsFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveCdsFileWithOptions(request, runtime);
}

/**
 * @summary Queries the historical daily and monthly active user counts for a specified date.
 *
 * @description ## Usage notes
 * - The `AliUid` parameter is automatically resolved from your AccessKey pair and does not need to be specified in the request.
 * - The `BusinessChannel` parameter defaults to Enterprise Edition, but you can select other business channels.
 * - By default, the query returns data for the previous day (T-1). To query for a different day, use the `DataDate` parameter in YYYY-MM-DD format.
 *
 * @param request QueryHistoryActiveUserCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryHistoryActiveUserCountResponse
 */
QueryHistoryActiveUserCountResponse Client::queryHistoryActiveUserCountWithOptions(const QueryHistoryActiveUserCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataDate()) {
    query["DataDate"] = request.getDataDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryHistoryActiveUserCount"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryHistoryActiveUserCountResponse>();
}

/**
 * @summary Queries the historical daily and monthly active user counts for a specified date.
 *
 * @description ## Usage notes
 * - The `AliUid` parameter is automatically resolved from your AccessKey pair and does not need to be specified in the request.
 * - The `BusinessChannel` parameter defaults to Enterprise Edition, but you can select other business channels.
 * - By default, the query returns data for the previous day (T-1). To query for a different day, use the `DataDate` parameter in YYYY-MM-DD format.
 *
 * @param request QueryHistoryActiveUserCountRequest
 * @return QueryHistoryActiveUserCountResponse
 */
QueryHistoryActiveUserCountResponse Client::queryHistoryActiveUserCount(const QueryHistoryActiveUserCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHistoryActiveUserCountWithOptions(request, runtime);
}

/**
 * @summary Retrieves historical average monitoring metrics for a desktop resource over a specified date range.
 *
 * @description ## Request
 * - This API retrieves historical average monitoring metrics for desktop resources that meet specified criteria within a time range.
 * - The `DataDate` and `EndDate` parameters specify the time range. If omitted, the query defaults to the previous day.
 * - You can filter results by criteria such as desktop ID, name, and custom numeric ranges.
 * - The response contains the details of each matching desktop resource and its corresponding average values.
 * - Use the `PageNum` and `PageSize` pagination parameters to control the number of results returned.
 * - Note: When using the `Ranges` parameter, ensure that you provide reasonable intervals. Unreasonable intervals can degrade query performance or lead to invalid results.
 *
 * @param tmpReq QueryHistoryAvgMetricListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryHistoryAvgMetricListResponse
 */
QueryHistoryAvgMetricListResponse Client::queryHistoryAvgMetricListWithOptions(const QueryHistoryAvgMetricListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryHistoryAvgMetricListShrinkRequest request = QueryHistoryAvgMetricListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRange()) {
    request.setRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRange(), "Range", "json"));
  }

  json query = {};
  if (!!request.hasDataDate()) {
    query["DataDate"] = request.getDataDate();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRangeShrink()) {
    query["Range"] = request.getRangeShrink();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryHistoryAvgMetricList"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryHistoryAvgMetricListResponse>();
}

/**
 * @summary Retrieves historical average monitoring metrics for a desktop resource over a specified date range.
 *
 * @description ## Request
 * - This API retrieves historical average monitoring metrics for desktop resources that meet specified criteria within a time range.
 * - The `DataDate` and `EndDate` parameters specify the time range. If omitted, the query defaults to the previous day.
 * - You can filter results by criteria such as desktop ID, name, and custom numeric ranges.
 * - The response contains the details of each matching desktop resource and its corresponding average values.
 * - Use the `PageNum` and `PageSize` pagination parameters to control the number of results returned.
 * - Note: When using the `Ranges` parameter, ensure that you provide reasonable intervals. Unreasonable intervals can degrade query performance or lead to invalid results.
 *
 * @param request QueryHistoryAvgMetricListRequest
 * @return QueryHistoryAvgMetricListResponse
 */
QueryHistoryAvgMetricListResponse Client::queryHistoryAvgMetricList(const QueryHistoryAvgMetricListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHistoryAvgMetricListWithOptions(request, runtime);
}

/**
 * @summary Queries the historical distribution of a specific metric over a specified time period.
 *
 * @description ## Request
 * This API queries the value distribution for specific metrics, such as CPU usage and memory usage, within a given date range. You can define custom value ranges for more detailed statistics. The API supports both the enterprise edition and commercial edition. By default, it returns statistics for the previous day (T-1).
 * - **BusinessChannel**: Defaults to the enterprise edition. The commercial edition is also available.
 * - **StartDate & EndDate**: Both default to T-1 (the previous day). The date must be in the `YYYY-MM-DD` format.
 * - **MetricName**: The metric to query. For a list of valid metrics, see the parameter description in this topic.
 * - **Ranges**: Defines multiple value ranges for a more detailed analysis. For each range, you can set a minimum value, a maximum value, and whether to include these boundary values.
 *
 * @param request QueryHistoryMetricDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryHistoryMetricDistributionResponse
 */
QueryHistoryMetricDistributionResponse Client::queryHistoryMetricDistributionWithOptions(const QueryHistoryMetricDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasRanges()) {
    query["Ranges"] = request.getRanges();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryHistoryMetricDistribution"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryHistoryMetricDistributionResponse>();
}

/**
 * @summary Queries the historical distribution of a specific metric over a specified time period.
 *
 * @description ## Request
 * This API queries the value distribution for specific metrics, such as CPU usage and memory usage, within a given date range. You can define custom value ranges for more detailed statistics. The API supports both the enterprise edition and commercial edition. By default, it returns statistics for the previous day (T-1).
 * - **BusinessChannel**: Defaults to the enterprise edition. The commercial edition is also available.
 * - **StartDate & EndDate**: Both default to T-1 (the previous day). The date must be in the `YYYY-MM-DD` format.
 * - **MetricName**: The metric to query. For a list of valid metrics, see the parameter description in this topic.
 * - **Ranges**: Defines multiple value ranges for a more detailed analysis. For each range, you can set a minimum value, a maximum value, and whether to include these boundary values.
 *
 * @param request QueryHistoryMetricDistributionRequest
 * @return QueryHistoryMetricDistributionResponse
 */
QueryHistoryMetricDistributionResponse Client::queryHistoryMetricDistribution(const QueryHistoryMetricDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHistoryMetricDistributionWithOptions(request, runtime);
}

/**
 * @summary Queries and ranks historical usage duration by end user or desktop.
 *
 * @description ## Usage notes
 * - **Date range**: You can query data within the last 90 days.
 * - **Pagination**: This operation uses the`NextToken` parameter for pagination. To retrieve the next page of results, use the `NextToken` value from the previous response.
 * - **Default and maximum limits**: This operation returns 5 records by default, with a maximum of 200 records per page.
 * - **Authentication**: This operation uses an AccessKey for authentication.
 * - **Caller account information**: You do not need to specify an Alibaba Cloud account ID (AliUid). The system automatically resolves it.
 * - **Billing**: This API operation is free of charge.
 *
 * @param request QueryHistoryUsageDurationRankRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryHistoryUsageDurationRankResponse
 */
QueryHistoryUsageDurationRankResponse Client::queryHistoryUsageDurationRankWithOptions(const QueryHistoryUsageDurationRankRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryHistoryUsageDurationRank"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryHistoryUsageDurationRankResponse>();
}

/**
 * @summary Queries and ranks historical usage duration by end user or desktop.
 *
 * @description ## Usage notes
 * - **Date range**: You can query data within the last 90 days.
 * - **Pagination**: This operation uses the`NextToken` parameter for pagination. To retrieve the next page of results, use the `NextToken` value from the previous response.
 * - **Default and maximum limits**: This operation returns 5 records by default, with a maximum of 200 records per page.
 * - **Authentication**: This operation uses an AccessKey for authentication.
 * - **Caller account information**: You do not need to specify an Alibaba Cloud account ID (AliUid). The system automatically resolves it.
 * - **Billing**: This API operation is free of charge.
 *
 * @param request QueryHistoryUsageDurationRankRequest
 * @return QueryHistoryUsageDurationRankResponse
 */
QueryHistoryUsageDurationRankResponse Client::queryHistoryUsageDurationRank(const QueryHistoryUsageDurationRankRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryHistoryUsageDurationRankWithOptions(request, runtime);
}

/**
 * @summary Reboots one or more desktops.
 *
 * @description The desktops must be in the Running state.
 *
 * @param request RebootDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootDesktopsResponse
 */
RebootDesktopsResponse Client::rebootDesktopsWithOptions(const RebootDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateSnapshot()) {
    query["CreateSnapshot"] = request.getCreateSnapshot();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasOsUpdate()) {
    query["OsUpdate"] = request.getOsUpdate();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.getPatchId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootDesktopsResponse>();
}

/**
 * @summary Reboots one or more desktops.
 *
 * @description The desktops must be in the Running state.
 *
 * @param request RebootDesktopsRequest
 * @return RebootDesktopsResponse
 */
RebootDesktopsResponse Client::rebootDesktops(const RebootDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootDesktopsWithOptions(request, runtime);
}

/**
 * @summary Replaces the image of one or more cloud computers.
 *
 * @description This operation is subject to the following limitations:
 * - For cloud computers in the China (Hong Kong) region and regions outside the Chinese mainland, you cannot switch to an image with a different operating system. For example, you cannot switch from a Windows image to a Linux image.
 * - You cannot switch between GPU images and non-GPU images. Graphics-optimized cloud computers must use GPU images, and non-graphics cloud computers can only use non-GPU images.
 * Changing the image re-initializes the cloud computer\\"s system disk with the new image. This action has the following effects:
 * - All data on the original system disk is erased. Any snapshots created from the original system disk become invalid, and the system automatically deletes them.
 * - If the new image has a different operating system, all data on the data disk is erased. Snapshots created from the data disk become invalid, and the system automatically deletes them. If the new image has the same operating system, data on the data disk is retained and its snapshots remain usable.
 *
 * @param request RebuildDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebuildDesktopsResponse
 */
RebuildDesktopsResponse Client::rebuildDesktopsWithOptions(const RebuildDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterStatus()) {
    query["AfterStatus"] = request.getAfterStatus();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebuildDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebuildDesktopsResponse>();
}

/**
 * @summary Replaces the image of one or more cloud computers.
 *
 * @description This operation is subject to the following limitations:
 * - For cloud computers in the China (Hong Kong) region and regions outside the Chinese mainland, you cannot switch to an image with a different operating system. For example, you cannot switch from a Windows image to a Linux image.
 * - You cannot switch between GPU images and non-GPU images. Graphics-optimized cloud computers must use GPU images, and non-graphics cloud computers can only use non-GPU images.
 * Changing the image re-initializes the cloud computer\\"s system disk with the new image. This action has the following effects:
 * - All data on the original system disk is erased. Any snapshots created from the original system disk become invalid, and the system automatically deletes them.
 * - If the new image has a different operating system, all data on the data disk is erased. Snapshots created from the data disk become invalid, and the system automatically deletes them. If the new image has the same operating system, data on the data disk is retained and its snapshots remain usable.
 *
 * @param request RebuildDesktopsRequest
 * @return RebuildDesktopsResponse
 */
RebuildDesktopsResponse Client::rebuildDesktops(const RebuildDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebuildDesktopsWithOptions(request, runtime);
}

/**
 * @summary 删除公网IP
 *
 * @param request ReleaseIpAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseIpAddressResponse
 */
ReleaseIpAddressResponse Client::releaseIpAddressWithOptions(const ReleaseIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEipId()) {
    query["EipId"] = request.getEipId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseIpAddress"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseIpAddressResponse>();
}

/**
 * @summary 删除公网IP
 *
 * @param request ReleaseIpAddressRequest
 * @return ReleaseIpAddressResponse
 */
ReleaseIpAddressResponse Client::releaseIpAddress(const ReleaseIpAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseIpAddressWithOptions(request, runtime);
}

/**
 * @summary Unshare a folder on the network disk.
 *
 * @param tmpReq RemoveFilePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveFilePermissionResponse
 */
RemoveFilePermissionResponse Client::removeFilePermissionWithOptions(const RemoveFilePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveFilePermissionShrinkRequest request = RemoveFilePermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMemberList()) {
    request.setMemberListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMemberList(), "MemberList", "json"));
  }

  json query = {};
  if (!!request.hasCdsId()) {
    query["CdsId"] = request.getCdsId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMemberListShrink()) {
    query["MemberList"] = request.getMemberListShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveFilePermission"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveFilePermissionResponse>();
}

/**
 * @summary Unshare a folder on the network disk.
 *
 * @param request RemoveFilePermissionRequest
 * @return RemoveFilePermissionResponse
 */
RemoveFilePermissionResponse Client::removeFilePermission(const RemoveFilePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeFilePermissionWithOptions(request, runtime);
}

/**
 * @summary Removes specified authorized users from a shared desktop group. After an authorized user is removed, that user can no longer connect to the cloud desktops in the group.
 *
 * @param request RemoveUserFromDesktopGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserFromDesktopGroupResponse
 */
RemoveUserFromDesktopGroupResponse Client::removeUserFromDesktopGroupWithOptions(const RemoveUserFromDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasDesktopGroupIds()) {
    query["DesktopGroupIds"] = request.getDesktopGroupIds();
  }

  if (!!request.hasEndUserIds()) {
    query["EndUserIds"] = request.getEndUserIds();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.getOrgId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSimpleUserGroupId()) {
    query["SimpleUserGroupId"] = request.getSimpleUserGroupId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.getUserGroupName();
  }

  if (!!request.hasUserOuPath()) {
    query["UserOuPath"] = request.getUserOuPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUserFromDesktopGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserFromDesktopGroupResponse>();
}

/**
 * @summary Removes specified authorized users from a shared desktop group. After an authorized user is removed, that user can no longer connect to the cloud desktops in the group.
 *
 * @param request RemoveUserFromDesktopGroupRequest
 * @return RemoveUserFromDesktopGroupResponse
 */
RemoveUserFromDesktopGroupResponse Client::removeUserFromDesktopGroup(const RemoveUserFromDesktopGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserFromDesktopGroupWithOptions(request, runtime);
}

/**
 * @summary 移除超卖用户组用户
 *
 * @param request RemoveUserFromDesktopOversoldUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserFromDesktopOversoldUserGroupResponse
 */
RemoveUserFromDesktopOversoldUserGroupResponse Client::removeUserFromDesktopOversoldUserGroupWithOptions(const RemoveUserFromDesktopOversoldUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasUserDesktopId()) {
    query["UserDesktopId"] = request.getUserDesktopId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUserFromDesktopOversoldUserGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserFromDesktopOversoldUserGroupResponse>();
}

/**
 * @summary 移除超卖用户组用户
 *
 * @param request RemoveUserFromDesktopOversoldUserGroupRequest
 * @return RemoveUserFromDesktopOversoldUserGroupResponse
 */
RemoveUserFromDesktopOversoldUserGroupResponse Client::removeUserFromDesktopOversoldUserGroup(const RemoveUserFromDesktopOversoldUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserFromDesktopOversoldUserGroupWithOptions(request, runtime);
}

/**
 * @summary Renews the subscription for a cloud computer pool.
 *
 * @param request RenewDesktopGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewDesktopGroupResponse
 */
RenewDesktopGroupResponse Client::renewDesktopGroupWithOptions(const RenewDesktopGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewDesktopGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewDesktopGroupResponse>();
}

/**
 * @summary Renews the subscription for a cloud computer pool.
 *
 * @param request RenewDesktopGroupRequest
 * @return RenewDesktopGroupResponse
 */
RenewDesktopGroupResponse Client::renewDesktopGroup(const RenewDesktopGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewDesktopGroupWithOptions(request, runtime);
}

/**
 * @summary 续费桌面超卖组
 *
 * @param request RenewDesktopOversoldGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewDesktopOversoldGroupResponse
 */
RenewDesktopOversoldGroupResponse Client::renewDesktopOversoldGroupWithOptions(const RenewDesktopOversoldGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOversoldGroupId()) {
    query["OversoldGroupId"] = request.getOversoldGroupId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewDesktopOversoldGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewDesktopOversoldGroupResponse>();
}

/**
 * @summary 续费桌面超卖组
 *
 * @param request RenewDesktopOversoldGroupRequest
 * @return RenewDesktopOversoldGroupResponse
 */
RenewDesktopOversoldGroupResponse Client::renewDesktopOversoldGroup(const RenewDesktopOversoldGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewDesktopOversoldGroupWithOptions(request, runtime);
}

/**
 * @summary Renews one or more subscription-based WUYING Workspace instances.
 *
 * @param request RenewDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewDesktopsResponse
 */
RenewDesktopsResponse Client::renewDesktopsWithOptions(const RenewDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewDesktopsResponse>();
}

/**
 * @summary Renews one or more subscription-based WUYING Workspace instances.
 *
 * @param request RenewDesktopsRequest
 * @return RenewDesktopsResponse
 */
RenewDesktopsResponse Client::renewDesktops(const RenewDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewDesktopsWithOptions(request, runtime);
}

/**
 * @summary Renews subscription-based premium public bandwidth.
 *
 * @param request RenewNetworkPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewNetworkPackagesResponse
 */
RenewNetworkPackagesResponse Client::renewNetworkPackagesWithOptions(const RenewNetworkPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasNetworkPackageId()) {
    query["NetworkPackageId"] = request.getNetworkPackageId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewNetworkPackages"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewNetworkPackagesResponse>();
}

/**
 * @summary Renews subscription-based premium public bandwidth.
 *
 * @param request RenewNetworkPackagesRequest
 * @return RenewNetworkPackagesResponse
 */
RenewNetworkPackagesResponse Client::renewNetworkPackages(const RenewNetworkPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewNetworkPackagesWithOptions(request, runtime);
}

/**
 * @summary Resets cloud desktops in a shared cloud desktop group.
 *
 * @description > This operation applies only to shared cloud desktops. It does not support resetting standard cloud desktops.
 *
 * @param request ResetDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetDesktopsResponse
 */
ResetDesktopsResponse Client::resetDesktopsWithOptions(const ResetDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasDesktopGroupIds()) {
    query["DesktopGroupIds"] = request.getDesktopGroupIds();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasLastRetryTime()) {
    query["LastRetryTime"] = request.getLastRetryTime();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResetScope()) {
    query["ResetScope"] = request.getResetScope();
  }

  if (!!request.hasResetType()) {
    query["ResetType"] = request.getResetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetDesktopsResponse>();
}

/**
 * @summary Resets cloud desktops in a shared cloud desktop group.
 *
 * @description > This operation applies only to shared cloud desktops. It does not support resetting standard cloud desktops.
 *
 * @param request ResetDesktopsRequest
 * @return ResetDesktopsResponse
 */
ResetDesktopsResponse Client::resetDesktops(const ResetDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetDesktopsWithOptions(request, runtime);
}

/**
 * @summary Resets the mount target of a File Storage NAS (NAS) file system.
 *
 * @description When you create a NAS file system, a mount target is automatically generated. By default, you do not need to modify the mount target of the NAS file system. If the mount target is disabled, you need to reset the mount target of the NAS file system.
 *
 * @param request ResetNASDefaultMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetNASDefaultMountTargetResponse
 */
ResetNASDefaultMountTargetResponse Client::resetNASDefaultMountTargetWithOptions(const ResetNASDefaultMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetNASDefaultMountTarget"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetNASDefaultMountTargetResponse>();
}

/**
 * @summary Resets the mount target of a File Storage NAS (NAS) file system.
 *
 * @description When you create a NAS file system, a mount target is automatically generated. By default, you do not need to modify the mount target of the NAS file system. If the mount target is disabled, you need to reset the mount target of the NAS file system.
 *
 * @param request ResetNASDefaultMountTargetRequest
 * @return ResetNASDefaultMountTargetResponse
 */
ResetNASDefaultMountTargetResponse Client::resetNASDefaultMountTarget(const ResetNASDefaultMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetNASDefaultMountTargetWithOptions(request, runtime);
}

/**
 * @summary Recovers disk data from a snapshot.
 *
 * @description When calling this interface, ensure the following:
 * - You must back up any data on the disk that you want to save.
 *   > Data recovery is an irreversible operation. After you call this interface, the disk will revert to its state at the time the snapshot was created. Any data created between the snapshot creation time and the current time will be lost. Therefore, back up important data.
 * - You must shut down the cloud computer to which the disk belongs.
 *
 * @param request ResetSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetSnapshotResponse
 */
ResetSnapshotResponse Client::resetSnapshotWithOptions(const ResetSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasStopDesktop()) {
    query["StopDesktop"] = request.getStopDesktop();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetSnapshot"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetSnapshotResponse>();
}

/**
 * @summary Recovers disk data from a snapshot.
 *
 * @description When calling this interface, ensure the following:
 * - You must back up any data on the disk that you want to save.
 *   > Data recovery is an irreversible operation. After you call this interface, the disk will revert to its state at the time the snapshot was created. Any data created between the snapshot creation time and the current time will be lost. Therefore, back up important data.
 * - You must shut down the cloud computer to which the disk belongs.
 *
 * @param request ResetSnapshotRequest
 * @return ResetSnapshotResponse
 */
ResetSnapshotResponse Client::resetSnapshot(const ResetSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetSnapshotWithOptions(request, runtime);
}

/**
 * @summary Cancels the permission for stream coordination operations.
 *
 * @param request RevokeCoordinatePrivilegeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeCoordinatePrivilegeResponse
 */
RevokeCoordinatePrivilegeResponse Client::revokeCoordinatePrivilegeWithOptions(const RevokeCoordinatePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoId()) {
    query["CoId"] = request.getCoId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeCoordinatePrivilege"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeCoordinatePrivilegeResponse>();
}

/**
 * @summary Cancels the permission for stream coordination operations.
 *
 * @param request RevokeCoordinatePrivilegeRequest
 * @return RevokeCoordinatePrivilegeResponse
 */
RevokeCoordinatePrivilegeResponse Client::revokeCoordinatePrivilege(const RevokeCoordinatePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeCoordinatePrivilegeWithOptions(request, runtime);
}

/**
 * @summary Runs a PowerShell or Bat script on one or more cloud computers that run Windows.
 *
 * @param request RunCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCommandResponse
 */
RunCommandResponse Client::runCommandWithOptions(const RunCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandContent()) {
    query["CommandContent"] = request.getCommandContent();
  }

  if (!!request.hasCommandRole()) {
    query["CommandRole"] = request.getCommandRole();
  }

  if (!!request.hasContentEncoding()) {
    query["ContentEncoding"] = request.getContentEncoding();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunCommand"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCommandResponse>();
}

/**
 * @summary Runs a PowerShell or Bat script on one or more cloud computers that run Windows.
 *
 * @param request RunCommandRequest
 * @return RunCommandResponse
 */
RunCommandResponse Client::runCommand(const RunCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCommandWithOptions(request, runtime);
}

/**
 * @summary Obtains the verification code that is required when you bind an advanced office network to a Cloud Enterprise Network (CEN) instance that belongs to another Alibaba Cloud account.
 *
 * @description You must call this operation to obtain the verification code that is required when you bind an advanced office network to a CEN instance that belongs to another Alibaba Cloud account. After you call this operation, the system sends a verification code to the email address associated with the Alibaba Cloud account to which the CEN instance belongs.
 *
 * @param request SendVerifyCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendVerifyCodeResponse
 */
SendVerifyCodeResponse Client::sendVerifyCodeWithOptions(const SendVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtraInfo()) {
    query["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVerifyCodeAction()) {
    query["VerifyCodeAction"] = request.getVerifyCodeAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendVerifyCode"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendVerifyCodeResponse>();
}

/**
 * @summary Obtains the verification code that is required when you bind an advanced office network to a Cloud Enterprise Network (CEN) instance that belongs to another Alibaba Cloud account.
 *
 * @description You must call this operation to obtain the verification code that is required when you bind an advanced office network to a CEN instance that belongs to another Alibaba Cloud account. After you call this operation, the system sends a verification code to the email address associated with the Alibaba Cloud account to which the CEN instance belongs.
 *
 * @param request SendVerifyCodeRequest
 * @return SendVerifyCodeResponse
 */
SendVerifyCodeResponse Client::sendVerifyCode(const SendVerifyCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendVerifyCodeWithOptions(request, runtime);
}

/**
 * @summary Configures an auto scaling policy for a multi-session cloud computer. Elastic Desktop Service allows multiple end users to share a cloud computer in a multi-session cloud computer pool. This helps save costs.
 *
 * @param request SetDesktopGroupScaleTimerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDesktopGroupScaleTimerResponse
 */
SetDesktopGroupScaleTimerResponse Client::setDesktopGroupScaleTimerWithOptions(const SetDesktopGroupScaleTimerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScaleTimerInfos()) {
    query["ScaleTimerInfos"] = request.getScaleTimerInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDesktopGroupScaleTimer"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDesktopGroupScaleTimerResponse>();
}

/**
 * @summary Configures an auto scaling policy for a multi-session cloud computer. Elastic Desktop Service allows multiple end users to share a cloud computer in a multi-session cloud computer pool. This helps save costs.
 *
 * @param request SetDesktopGroupScaleTimerRequest
 * @return SetDesktopGroupScaleTimerResponse
 */
SetDesktopGroupScaleTimerResponse Client::setDesktopGroupScaleTimer(const SetDesktopGroupScaleTimerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDesktopGroupScaleTimerWithOptions(request, runtime);
}

/**
 * @summary Configures a scheduled start, stop, restart, or reset task for a cloud computer share.
 *
 * @param request SetDesktopGroupTimerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDesktopGroupTimerResponse
 */
SetDesktopGroupTimerResponse Client::setDesktopGroupTimerWithOptions(const SetDesktopGroupTimerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.getCronExpression();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResetType()) {
    query["ResetType"] = request.getResetType();
  }

  if (!!request.hasTimerType()) {
    query["TimerType"] = request.getTimerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDesktopGroupTimer"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDesktopGroupTimerResponse>();
}

/**
 * @summary Configures a scheduled start, stop, restart, or reset task for a cloud computer share.
 *
 * @param request SetDesktopGroupTimerRequest
 * @return SetDesktopGroupTimerResponse
 */
SetDesktopGroupTimerResponse Client::setDesktopGroupTimer(const SetDesktopGroupTimerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDesktopGroupTimerWithOptions(request, runtime);
}

/**
 * @summary Sets the status of a scheduled task for a cloud computer share, such as enabling or disabling it.
 *
 * @param request SetDesktopGroupTimerStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDesktopGroupTimerStatusResponse
 */
SetDesktopGroupTimerStatusResponse Client::setDesktopGroupTimerStatusWithOptions(const SetDesktopGroupTimerStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTimerType()) {
    query["TimerType"] = request.getTimerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDesktopGroupTimerStatus"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDesktopGroupTimerStatusResponse>();
}

/**
 * @summary Sets the status of a scheduled task for a cloud computer share, such as enabling or disabling it.
 *
 * @param request SetDesktopGroupTimerStatusRequest
 * @return SetDesktopGroupTimerStatusResponse
 */
SetDesktopGroupTimerStatusResponse Client::setDesktopGroupTimerStatus(const SetDesktopGroupTimerStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDesktopGroupTimerStatusWithOptions(request, runtime);
}

/**
 * @summary Set the cloud computer maintenance mode.
 *
 * @description If you need to perform some maintenance operations on the cloud computer and want to prohibit end user from connecting and using the cloud computer during this period, you can switch it to maintenance mode.
 *
 * @param request SetDesktopMaintenanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDesktopMaintenanceResponse
 */
SetDesktopMaintenanceResponse Client::setDesktopMaintenanceWithOptions(const SetDesktopMaintenanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopIds()) {
    query["DesktopIds"] = request.getDesktopIds();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDesktopMaintenance"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDesktopMaintenanceResponse>();
}

/**
 * @summary Set the cloud computer maintenance mode.
 *
 * @description If you need to perform some maintenance operations on the cloud computer and want to prohibit end user from connecting and using the cloud computer during this period, you can switch it to maintenance mode.
 *
 * @param request SetDesktopMaintenanceRequest
 * @return SetDesktopMaintenanceResponse
 */
SetDesktopMaintenanceResponse Client::setDesktopMaintenance(const SetDesktopMaintenanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDesktopMaintenanceWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the single sign-on (SSO) feature for an AD-based office network.
 *
 * @description This operation has the same effect as [SetOfficeSiteSsoStatus](~~SetOfficeSiteSsoStatus~~). Use the SetOfficeSiteSsoStatus operation instead.
 *
 * @param request SetDirectorySsoStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDirectorySsoStatusResponse
 */
SetDirectorySsoStatusResponse Client::setDirectorySsoStatusWithOptions(const SetDirectorySsoStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEnableSso()) {
    query["EnableSso"] = request.getEnableSso();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDirectorySsoStatus"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDirectorySsoStatusResponse>();
}

/**
 * @summary Enables or disables the single sign-on (SSO) feature for an AD-based office network.
 *
 * @description This operation has the same effect as [SetOfficeSiteSsoStatus](~~SetOfficeSiteSsoStatus~~). Use the SetOfficeSiteSsoStatus operation instead.
 *
 * @param request SetDirectorySsoStatusRequest
 * @return SetDirectorySsoStatusResponse
 */
SetDirectorySsoStatusResponse Client::setDirectorySsoStatus(const SetDirectorySsoStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDirectorySsoStatusWithOptions(request, runtime);
}

/**
 * @summary Uploads the metadata of a Security Assertion Markup Language (SAML) 2.0-based identity provider (IdP).
 *
 * @description You can call this operation only for workspaces of the Active Directory (AD) and convenience account types.
 *
 * @param request SetIdpMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetIdpMetadataResponse
 */
SetIdpMetadataResponse Client::setIdpMetadataWithOptions(const SetIdpMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasIdpMetadata()) {
    query["IdpMetadata"] = request.getIdpMetadata();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetIdpMetadata"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetIdpMetadataResponse>();
}

/**
 * @summary Uploads the metadata of a Security Assertion Markup Language (SAML) 2.0-based identity provider (IdP).
 *
 * @description You can call this operation only for workspaces of the Active Directory (AD) and convenience account types.
 *
 * @param request SetIdpMetadataRequest
 * @return SetIdpMetadataResponse
 */
SetIdpMetadataResponse Client::setIdpMetadata(const SetIdpMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setIdpMetadataWithOptions(request, runtime);
}

/**
 * @summary Enables or disables single sign-on (SSO) for an office network.
 *
 * @param request SetOfficeSiteSsoStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetOfficeSiteSsoStatusResponse
 */
SetOfficeSiteSsoStatusResponse Client::setOfficeSiteSsoStatusWithOptions(const SetOfficeSiteSsoStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableSso()) {
    query["EnableSso"] = request.getEnableSso();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetOfficeSiteSsoStatus"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetOfficeSiteSsoStatusResponse>();
}

/**
 * @summary Enables or disables single sign-on (SSO) for an office network.
 *
 * @param request SetOfficeSiteSsoStatusRequest
 * @return SetOfficeSiteSsoStatusResponse
 */
SetOfficeSiteSsoStatusResponse Client::setOfficeSiteSsoStatus(const SetOfficeSiteSsoStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setOfficeSiteSsoStatusWithOptions(request, runtime);
}

/**
 * @summary 设置UPM用户目录黑白名单规则
 *
 * @param tmpReq SetUserProfilePathRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetUserProfilePathRulesResponse
 */
SetUserProfilePathRulesResponse Client::setUserProfilePathRulesWithOptions(const SetUserProfilePathRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetUserProfilePathRulesShrinkRequest request = SetUserProfilePathRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserProfilePathRule()) {
    request.setUserProfilePathRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserProfilePathRule(), "UserProfilePathRule", "json"));
  }

  json query = {};
  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserProfilePathRuleShrink()) {
    query["UserProfilePathRule"] = request.getUserProfilePathRuleShrink();
  }

  if (!!request.hasUserProfileRuleType()) {
    query["UserProfileRuleType"] = request.getUserProfileRuleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetUserProfilePathRules"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetUserProfilePathRulesResponse>();
}

/**
 * @summary 设置UPM用户目录黑白名单规则
 *
 * @param request SetUserProfilePathRulesRequest
 * @return SetUserProfilePathRulesResponse
 */
SetUserProfilePathRulesResponse Client::setUserProfilePathRules(const SetUserProfilePathRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setUserProfilePathRulesWithOptions(request, runtime);
}

/**
 * @summary Starts stopped cloud computers. After the API operation is successfully called, the cloud computers enter the Running state.
 *
 * @description The cloud computers that you want to start must be in the Stopped state.
 *
 * @param request StartDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDesktopsResponse
 */
StartDesktopsResponse Client::startDesktopsWithOptions(const StartDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDesktopsResponse>();
}

/**
 * @summary Starts stopped cloud computers. After the API operation is successfully called, the cloud computers enter the Running state.
 *
 * @description The cloud computers that you want to start must be in the Stopped state.
 *
 * @param request StartDesktopsRequest
 * @return StartDesktopsResponse
 */
StartDesktopsResponse Client::startDesktops(const StartDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDesktopsWithOptions(request, runtime);
}

/**
 * @summary Stops one or more running cloud desktops. After a successful call, the specified cloud desktops enter the Stopped state.
 *
 * @description The cloud desktops must be in the Running state.
 *
 * @param request StopDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDesktopsResponse
 */
StopDesktopsResponse Client::stopDesktopsWithOptions(const StopDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateSnapshot()) {
    query["CreateSnapshot"] = request.getCreateSnapshot();
  }

  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasOsUpdate()) {
    query["OsUpdate"] = request.getOsUpdate();
  }

  if (!!request.hasPatchId()) {
    query["PatchId"] = request.getPatchId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStoppedMode()) {
    query["StoppedMode"] = request.getStoppedMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDesktopsResponse>();
}

/**
 * @summary Stops one or more running cloud desktops. After a successful call, the specified cloud desktops enter the Stopped state.
 *
 * @description The cloud desktops must be in the Running state.
 *
 * @param request StopDesktopsRequest
 * @return StopDesktopsResponse
 */
StopDesktopsResponse Client::stopDesktops(const StopDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDesktopsWithOptions(request, runtime);
}

/**
 * @summary Stop a process that executes the Cloud Assistant script in one or more cloud computers.
 *
 * @description When you stop a one-time execution of a command, the command continues to run on the cloud desktops where it has started to run, and will not run on the cloud desktops where it has not started to run.
 *
 * @param request StopInvocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInvocationResponse
 */
StopInvocationResponse Client::stopInvocationWithOptions(const StopInvocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasInvokeId()) {
    query["InvokeId"] = request.getInvokeId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInvocation"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInvocationResponse>();
}

/**
 * @summary Stop a process that executes the Cloud Assistant script in one or more cloud computers.
 *
 * @description When you stop a one-time execution of a command, the command continues to run on the cloud desktops where it has started to run, and will not run on the cloud desktops where it has not started to run.
 *
 * @param request StopInvocationRequest
 * @return StopInvocationResponse
 */
StopInvocationResponse Client::stopInvocation(const StopInvocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInvocationWithOptions(request, runtime);
}

/**
 * @summary Adds tags to specified cloud desktops. This makes it easier to filter and manage cloud desktops by tag.
 *
 * @description If the specified TagKey already exists, the new TagValue overwrites the original TagValue.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to specified cloud desktops. This makes it easier to filter and manage cloud desktops by tag.
 *
 * @description If the specified TagKey already exists, the new TagValue overwrites the original TagValue.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the transmission and approval result for a submitted file.
 *
 * @param request TransferTaskApprovalCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferTaskApprovalCallbackResponse
 */
TransferTaskApprovalCallbackResponse Client::transferTaskApprovalCallbackWithOptions(const TransferTaskApprovalCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssBucketRegionId()) {
    query["OssBucketRegionId"] = request.getOssBucketRegionId();
  }

  if (!!request.hasResult()) {
    query["Result"] = request.getResult();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferTaskApprovalCallback"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferTaskApprovalCallbackResponse>();
}

/**
 * @summary Queries the transmission and approval result for a submitted file.
 *
 * @param request TransferTaskApprovalCallbackRequest
 * @return TransferTaskApprovalCallbackResponse
 */
TransferTaskApprovalCallbackResponse Client::transferTaskApprovalCallback(const TransferTaskApprovalCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferTaskApprovalCallbackWithOptions(request, runtime);
}

/**
 * @summary Unbinds a configuration group from resources.
 *
 * @param request UnbindConfigGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindConfigGroupResponse
 */
UnbindConfigGroupResponse Client::unbindConfigGroupWithOptions(const UnbindConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceInfos()) {
    query["ResourceInfos"] = request.getResourceInfos();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindConfigGroup"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindConfigGroupResponse>();
}

/**
 * @summary Unbinds a configuration group from resources.
 *
 * @param request UnbindConfigGroupRequest
 * @return UnbindConfigGroupResponse
 */
UnbindConfigGroupResponse Client::unbindConfigGroup(const UnbindConfigGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindConfigGroupWithOptions(request, runtime);
}

/**
 * @summary 解绑用户桌面
 *
 * @param request UnbindUserDesktopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindUserDesktopResponse
 */
UnbindUserDesktopResponse Client::unbindUserDesktopWithOptions(const UnbindUserDesktopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopAgentIds()) {
    query["DesktopAgentIds"] = request.getDesktopAgentIds();
  }

  if (!!request.hasDesktopGroupId()) {
    query["DesktopGroupId"] = request.getDesktopGroupId();
  }

  if (!!request.hasDesktopIds()) {
    query["DesktopIds"] = request.getDesktopIds();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.getReason();
  }

  if (!!request.hasUserDesktopIds()) {
    query["UserDesktopIds"] = request.getUserDesktopIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindUserDesktop"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindUserDesktopResponse>();
}

/**
 * @summary 解绑用户桌面
 *
 * @param request UnbindUserDesktopRequest
 * @return UnbindUserDesktopResponse
 */
UnbindUserDesktopResponse Client::unbindUserDesktop(const UnbindUserDesktopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindUserDesktopWithOptions(request, runtime);
}

/**
 * @summary Unlocks a virtual multi-factor authentication (MFA) device that is in the LOCKED state.
 *
 * @param request UnlockVirtualMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockVirtualMFADeviceResponse
 */
UnlockVirtualMFADeviceResponse Client::unlockVirtualMFADeviceWithOptions(const UnlockVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnlockVirtualMFADevice"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockVirtualMFADeviceResponse>();
}

/**
 * @summary Unlocks a virtual multi-factor authentication (MFA) device that is in the LOCKED state.
 *
 * @param request UnlockVirtualMFADeviceRequest
 * @return UnlockVirtualMFADeviceResponse
 */
UnlockVirtualMFADeviceResponse Client::unlockVirtualMFADevice(const UnlockVirtualMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockVirtualMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Removes tags from cloud desktops. After a tag is removed, if the tag is not added to any cloud desktop, the tag is automatically deleted.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from cloud desktops. After a tag is removed, if the tag is not added to any cloud desktop, the tag is automatically deleted.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the auto-push feature for an image update task.
 *
 * @description You can call this operation to manage each image update task. This operation is valid only when the auto-update switch in the image update module for global image updates is turned off. If the auto-update switch is turned on, the switches for each image update task are always turned on. If you want to turn on or off the auto-update switch, go to the Elastic Desktop Service console and choose **Operations > Image Updates** in the left-side navigation pane.
 *
 * @param request UpdateFotaTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFotaTaskResponse
 */
UpdateFotaTaskResponse Client::updateFotaTaskWithOptions(const UpdateFotaTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskUid()) {
    query["TaskUid"] = request.getTaskUid();
  }

  if (!!request.hasUserStatus()) {
    query["UserStatus"] = request.getUserStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFotaTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFotaTaskResponse>();
}

/**
 * @summary Enables or disables the auto-push feature for an image update task.
 *
 * @description You can call this operation to manage each image update task. This operation is valid only when the auto-update switch in the image update module for global image updates is turned off. If the auto-update switch is turned on, the switches for each image update task are always turned on. If you want to turn on or off the auto-update switch, go to the Elastic Desktop Service console and choose **Operations > Image Updates** in the left-side navigation pane.
 *
 * @param request UpdateFotaTaskRequest
 * @return UpdateFotaTaskResponse
 */
UpdateFotaTaskResponse Client::updateFotaTask(const UpdateFotaTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFotaTaskWithOptions(request, runtime);
}

/**
 * @summary Uploads a custom Windows image.
 *
 * @description > Only Windows operating system images can be uploaded.
 *
 * @param request UploadImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadImageResponse
 */
UploadImageResponse Client::uploadImageWithOptions(const UploadImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBootMode()) {
    query["BootMode"] = request.getBootMode();
  }

  if (!!request.hasDataDiskSize()) {
    query["DataDiskSize"] = request.getDataDiskSize();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnableSecurityCheck()) {
    query["EnableSecurityCheck"] = request.getEnableSecurityCheck();
  }

  if (!!request.hasGpuCategory()) {
    query["GpuCategory"] = request.getGpuCategory();
  }

  if (!!request.hasGpuDriverType()) {
    query["GpuDriverType"] = request.getGpuDriverType();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  if (!!request.hasLicenseType()) {
    query["LicenseType"] = request.getLicenseType();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  if (!!request.hasOssObjectPath()) {
    query["OssObjectPath"] = request.getOssObjectPath();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSystemDiskSize()) {
    query["SystemDiskSize"] = request.getSystemDiskSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadImage"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadImageResponse>();
}

/**
 * @summary Uploads a custom Windows image.
 *
 * @description > Only Windows operating system images can be uploaded.
 *
 * @param request UploadImageRequest
 * @return UploadImageResponse
 */
UploadImageResponse Client::uploadImage(const UploadImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadImageWithOptions(request, runtime);
}

/**
 * @summary Verifies the ID of a Cloud Enterprise Network (CEN) instance and the ID of the Alibaba Cloud account to which the instance belongs and checks whether a CIDR block conflict exists between the routes of the instance and the IPv4 CIDR blocks of the associated office network.
 *
 * @param request VerifyCenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyCenResponse
 */
VerifyCenResponse Client::verifyCenWithOptions(const VerifyCenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCenOwnerId()) {
    query["CenOwnerId"] = request.getCenOwnerId();
  }

  if (!!request.hasCidrBlock()) {
    query["CidrBlock"] = request.getCidrBlock();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVerifyCode()) {
    query["VerifyCode"] = request.getVerifyCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyCen"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyCenResponse>();
}

/**
 * @summary Verifies the ID of a Cloud Enterprise Network (CEN) instance and the ID of the Alibaba Cloud account to which the instance belongs and checks whether a CIDR block conflict exists between the routes of the instance and the IPv4 CIDR blocks of the associated office network.
 *
 * @param request VerifyCenRequest
 * @return VerifyCenResponse
 */
VerifyCenResponse Client::verifyCen(const VerifyCenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyCenWithOptions(request, runtime);
}

/**
 * @summary Wakes up cloud computers.
 *
 * @description Only cloud computers that are in the Hibernated state can be waked up.
 *
 * @param request WakeupDesktopsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WakeupDesktopsResponse
 */
WakeupDesktopsResponse Client::wakeupDesktopsWithOptions(const WakeupDesktopsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesktopId()) {
    query["DesktopId"] = request.getDesktopId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WakeupDesktops"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WakeupDesktopsResponse>();
}

/**
 * @summary Wakes up cloud computers.
 *
 * @description Only cloud computers that are in the Hibernated state can be waked up.
 *
 * @param request WakeupDesktopsRequest
 * @return WakeupDesktopsResponse
 */
WakeupDesktopsResponse Client::wakeupDesktops(const WakeupDesktopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return wakeupDesktopsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ecd20200930