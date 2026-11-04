#include <darabonba/Core.hpp>
#include <alibabacloud/Linkvisual20180120.hpp>
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
using namespace AlibabaCloud::Linkvisual20180120::Models;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{

AlibabaCloud::Linkvisual20180120::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "linkvisual.aliyuncs.com"},
    {"ap-northeast-2-pop" , "linkvisual.aliyuncs.com"},
    {"ap-south-1" , "linkvisual.aliyuncs.com"},
    {"ap-southeast-1" , "linkvisual.aliyuncs.com"},
    {"ap-southeast-2" , "linkvisual.aliyuncs.com"},
    {"ap-southeast-3" , "linkvisual.aliyuncs.com"},
    {"ap-southeast-5" , "linkvisual.aliyuncs.com"},
    {"cn-beijing" , "linkvisual.aliyuncs.com"},
    {"cn-beijing-finance-1" , "linkvisual.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "linkvisual.aliyuncs.com"},
    {"cn-beijing-gov-1" , "linkvisual.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "linkvisual.aliyuncs.com"},
    {"cn-chengdu" , "linkvisual.aliyuncs.com"},
    {"cn-edge-1" , "linkvisual.aliyuncs.com"},
    {"cn-fujian" , "linkvisual.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-finance" , "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "linkvisual.aliyuncs.com"},
    {"cn-hongkong" , "linkvisual.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "linkvisual.aliyuncs.com"},
    {"cn-huhehaote" , "linkvisual.aliyuncs.com"},
    {"cn-north-2-gov-1" , "linkvisual.aliyuncs.com"},
    {"cn-qingdao" , "linkvisual.aliyuncs.com"},
    {"cn-qingdao-nebula" , "linkvisual.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "linkvisual.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "linkvisual.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "linkvisual.aliyuncs.com"},
    {"cn-shanghai-inner" , "linkvisual.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "linkvisual.aliyuncs.com"},
    {"cn-shenzhen" , "linkvisual.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "linkvisual.aliyuncs.com"},
    {"cn-shenzhen-inner" , "linkvisual.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "linkvisual.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "linkvisual.aliyuncs.com"},
    {"cn-wuhan" , "linkvisual.aliyuncs.com"},
    {"cn-yushanfang" , "linkvisual.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "linkvisual.aliyuncs.com"},
    {"cn-zhangjiakou" , "linkvisual.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "linkvisual.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "linkvisual.aliyuncs.com"},
    {"eu-central-1" , "linkvisual.aliyuncs.com"},
    {"eu-west-1" , "linkvisual.aliyuncs.com"},
    {"eu-west-1-oxs" , "linkvisual.aliyuncs.com"},
    {"me-east-1" , "linkvisual.aliyuncs.com"},
    {"rus-west-1-pop" , "linkvisual.aliyuncs.com"},
    {"us-east-1" , "linkvisual.aliyuncs.com"},
    {"us-west-1" , "linkvisual.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("linkvisual", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates an intelligent alert event recording plan for an IP camera.
 *
 * @param request AddEventRecordPlanDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEventRecordPlanDeviceResponse
 */
AddEventRecordPlanDeviceResponse Client::addEventRecordPlanDeviceWithOptions(const AddEventRecordPlanDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddEventRecordPlanDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddEventRecordPlanDeviceResponse>();
}

/**
 * @summary Creates an intelligent alert event recording plan for an IP camera.
 *
 * @param request AddEventRecordPlanDeviceRequest
 * @return AddEventRecordPlanDeviceResponse
 */
AddEventRecordPlanDeviceResponse Client::addEventRecordPlanDevice(const AddEventRecordPlanDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEventRecordPlanDeviceWithOptions(request, runtime);
}

/**
 * @summary Creates a device group for the face library.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 * - After you invoke this API operation, the system returns the ID of the device group (**DeviceGroupId**). Save this value locally for use when invoking other API operations.
 *
 * @param request AddFaceDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFaceDeviceGroupResponse
 */
AddFaceDeviceGroupResponse Client::addFaceDeviceGroupWithOptions(const AddFaceDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceGroupName()) {
    query["DeviceGroupName"] = request.getDeviceGroupName();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFaceDeviceGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFaceDeviceGroupResponse>();
}

/**
 * @summary Creates a device group for the face library.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 * - After you invoke this API operation, the system returns the ID of the device group (**DeviceGroupId**). Save this value locally for use when invoking other API operations.
 *
 * @param request AddFaceDeviceGroupRequest
 * @return AddFaceDeviceGroupResponse
 */
AddFaceDeviceGroupResponse Client::addFaceDeviceGroup(const AddFaceDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFaceDeviceGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a device to a device group.
 *
 * @param request AddFaceDeviceToDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFaceDeviceToDeviceGroupResponse
 */
AddFaceDeviceToDeviceGroupResponse Client::addFaceDeviceToDeviceGroupWithOptions(const AddFaceDeviceToDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.getDeviceGroupId();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFaceDeviceToDeviceGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFaceDeviceToDeviceGroupResponse>();
}

/**
 * @summary Adds a device to a device group.
 *
 * @param request AddFaceDeviceToDeviceGroupRequest
 * @return AddFaceDeviceToDeviceGroupResponse
 */
AddFaceDeviceToDeviceGroupResponse Client::addFaceDeviceToDeviceGroup(const AddFaceDeviceToDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFaceDeviceToDeviceGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a user to the face database.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 * - Configure a URL for downloading the user\\"s face image in advance.
 *     > Only JPEG and JPG image formats are supported, and the image URL cannot contain Chinese characters.
 * - After you invoke this API operation, the system returns a user ID (**UserId**). Save this value locally for use when you invoke other API operations.
 *
 * @param request AddFaceUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFaceUserResponse
 */
AddFaceUserResponse Client::addFaceUserWithOptions(const AddFaceUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomUserId()) {
    query["CustomUserId"] = request.getCustomUserId();
  }

  if (!!request.hasFacePicUrl()) {
    query["FacePicUrl"] = request.getFacePicUrl();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFaceUser"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFaceUserResponse>();
}

/**
 * @summary Adds a user to the face database.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 * - Configure a URL for downloading the user\\"s face image in advance.
 *     > Only JPEG and JPG image formats are supported, and the image URL cannot contain Chinese characters.
 * - After you invoke this API operation, the system returns a user ID (**UserId**). Save this value locally for use when you invoke other API operations.
 *
 * @param request AddFaceUserRequest
 * @return AddFaceUserResponse
 */
AddFaceUserResponse Client::addFaceUser(const AddFaceUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFaceUserWithOptions(request, runtime);
}

/**
 * @summary Creates a user group.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) limit for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 * - After you invoke this API operation, the system returns the ID of the user group (**UserGroupId**). Save this value locally for use when you invoke other API operations.
 *
 * @param request AddFaceUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFaceUserGroupResponse
 */
AddFaceUserGroupResponse Client::addFaceUserGroupWithOptions(const AddFaceUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.getUserGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFaceUserGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFaceUserGroupResponse>();
}

/**
 * @summary Creates a user group.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) limit for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 * - After you invoke this API operation, the system returns the ID of the user group (**UserGroupId**). Save this value locally for use when you invoke other API operations.
 *
 * @param request AddFaceUserGroupRequest
 * @return AddFaceUserGroupResponse
 */
AddFaceUserGroupResponse Client::addFaceUserGroup(const AddFaceUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFaceUserGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a face synchronization relationship between a user group and a device group.
 *
 * @param request AddFaceUserGroupAndDeviceGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFaceUserGroupAndDeviceGroupRelationResponse
 */
AddFaceUserGroupAndDeviceGroupRelationResponse Client::addFaceUserGroupAndDeviceGroupRelationWithOptions(const AddFaceUserGroupAndDeviceGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.getDeviceGroupId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasRelation()) {
    query["Relation"] = request.getRelation();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFaceUserGroupAndDeviceGroupRelation"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFaceUserGroupAndDeviceGroupRelationResponse>();
}

/**
 * @summary Adds a face synchronization relationship between a user group and a device group.
 *
 * @param request AddFaceUserGroupAndDeviceGroupRelationRequest
 * @return AddFaceUserGroupAndDeviceGroupRelationResponse
 */
AddFaceUserGroupAndDeviceGroupRelationResponse Client::addFaceUserGroupAndDeviceGroupRelation(const AddFaceUserGroupAndDeviceGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFaceUserGroupAndDeviceGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Adds a face image for a user in the face database.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 * - Configure a download URL for the user\\"s face image in advance.
 *     > Only images in JPEG and JPG format are supported, and the image URL cannot contain Chinese characters.
 * - After you invoke this API operation, the system returns the unique identity (**Data**) of the user\\"s face image. Save this value locally for use when you invoke other API operations.
 *
 * @param request AddFaceUserPictureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFaceUserPictureResponse
 */
AddFaceUserPictureResponse Client::addFaceUserPictureWithOptions(const AddFaceUserPictureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFacePicUrl()) {
    query["FacePicUrl"] = request.getFacePicUrl();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFaceUserPicture"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFaceUserPictureResponse>();
}

/**
 * @summary Adds a face image for a user in the face database.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 * - Configure a download URL for the user\\"s face image in advance.
 *     > Only images in JPEG and JPG format are supported, and the image URL cannot contain Chinese characters.
 * - After you invoke this API operation, the system returns the unique identity (**Data**) of the user\\"s face image. Save this value locally for use when you invoke other API operations.
 *
 * @param request AddFaceUserPictureRequest
 * @return AddFaceUserPictureResponse
 */
AddFaceUserPictureResponse Client::addFaceUserPicture(const AddFaceUserPictureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFaceUserPictureWithOptions(request, runtime);
}

/**
 * @summary Adds a user to a user group.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request AddFaceUserToUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFaceUserToUserGroupResponse
 */
AddFaceUserToUserGroupResponse Client::addFaceUserToUserGroupWithOptions(const AddFaceUserToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFaceUserToUserGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFaceUserToUserGroupResponse>();
}

/**
 * @summary Adds a user to a user group.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request AddFaceUserToUserGroupRequest
 * @return AddFaceUserToUserGroupResponse
 */
AddFaceUserToUserGroupResponse Client::addFaceUserToUserGroup(const AddFaceUserToUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFaceUserToUserGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a continuous recording plan for an IPC device.
 *
 * @param request AddRecordPlanDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRecordPlanDeviceResponse
 */
AddRecordPlanDeviceResponse Client::addRecordPlanDeviceWithOptions(const AddRecordPlanDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRecordPlanDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRecordPlanDeviceResponse>();
}

/**
 * @summary Adds a continuous recording plan for an IPC device.
 *
 * @param request AddRecordPlanDeviceRequest
 * @return AddRecordPlanDeviceResponse
 */
AddRecordPlanDeviceResponse Client::addRecordPlanDevice(const AddRecordPlanDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRecordPlanDeviceWithOptions(request, runtime);
}

/**
 * @param request BatchQueryVisionDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchQueryVisionDeviceInfoResponse
 */
BatchQueryVisionDeviceInfoResponse Client::batchQueryVisionDeviceInfoWithOptions(const BatchQueryVisionDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceNameList()) {
    query["DeviceNameList"] = request.getDeviceNameList();
  }

  if (!!request.hasIotIdList()) {
    query["IotIdList"] = request.getIotIdList();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchQueryVisionDeviceInfo"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchQueryVisionDeviceInfoResponse>();
}

/**
 * @param request BatchQueryVisionDeviceInfoRequest
 * @return BatchQueryVisionDeviceInfoResponse
 */
BatchQueryVisionDeviceInfoResponse Client::batchQueryVisionDeviceInfo(const BatchQueryVisionDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchQueryVisionDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary Binds devices to an image search instance in batches.
 *
 * @description ## Limits
 * If you invoke this operation on an Enterprise instance, you must specify the **IotInstanceId** request parameter. Otherwise, the invocation failed.
 *
 * @param request BindPictureSearchAppWithDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindPictureSearchAppWithDevicesResponse
 */
BindPictureSearchAppWithDevicesResponse Client::bindPictureSearchAppWithDevicesWithOptions(const BindPictureSearchAppWithDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasDeviceIotIds()) {
    query["DeviceIotIds"] = request.getDeviceIotIds();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindPictureSearchAppWithDevices"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindPictureSearchAppWithDevicesResponse>();
}

/**
 * @summary Binds devices to an image search instance in batches.
 *
 * @description ## Limits
 * If you invoke this operation on an Enterprise instance, you must specify the **IotInstanceId** request parameter. Otherwise, the invocation failed.
 *
 * @param request BindPictureSearchAppWithDevicesRequest
 * @return BindPictureSearchAppWithDevicesResponse
 */
BindPictureSearchAppWithDevicesResponse Client::bindPictureSearchAppWithDevices(const BindPictureSearchAppWithDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindPictureSearchAppWithDevicesWithOptions(request, runtime);
}

/**
 * @summary Checks whether the face of a specified user is successfully synchronized on the device.
 *
 * @param request CheckFaceUserDoExistOnDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckFaceUserDoExistOnDeviceResponse
 */
CheckFaceUserDoExistOnDeviceResponse Client::checkFaceUserDoExistOnDeviceWithOptions(const CheckFaceUserDoExistOnDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckFaceUserDoExistOnDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckFaceUserDoExistOnDeviceResponse>();
}

/**
 * @summary Checks whether the face of a specified user is successfully synchronized on the device.
 *
 * @param request CheckFaceUserDoExistOnDeviceRequest
 * @return CheckFaceUserDoExistOnDeviceResponse
 */
CheckFaceUserDoExistOnDeviceResponse Client::checkFaceUserDoExistOnDevice(const CheckFaceUserDoExistOnDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkFaceUserDoExistOnDeviceWithOptions(request, runtime);
}

/**
 * @summary Clears all face databases under a specified business isolation ID for a V-series edge all-in-one machine.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request ClearFaceDeviceDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearFaceDeviceDBResponse
 */
ClearFaceDeviceDBResponse Client::clearFaceDeviceDBWithOptions(const ClearFaceDeviceDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearFaceDeviceDB"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearFaceDeviceDBResponse>();
}

/**
 * @summary Clears all face databases under a specified business isolation ID for a V-series edge all-in-one machine.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request ClearFaceDeviceDBRequest
 * @return ClearFaceDeviceDBResponse
 */
ClearFaceDeviceDBResponse Client::clearFaceDeviceDB(const ClearFaceDeviceDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearFaceDeviceDBWithOptions(request, runtime);
}

/**
 * @summary Creates a recording plan for intelligent alert events.
 *
 * @param request CreateEventRecordPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEventRecordPlanResponse
 */
CreateEventRecordPlanResponse Client::createEventRecordPlanWithOptions(const CreateEventRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventTypes()) {
    query["EventTypes"] = request.getEventTypes();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPreRecordDuration()) {
    query["PreRecordDuration"] = request.getPreRecordDuration();
  }

  if (!!request.hasRecordDuration()) {
    query["RecordDuration"] = request.getRecordDuration();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEventRecordPlan"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEventRecordPlanResponse>();
}

/**
 * @summary Creates a recording plan for intelligent alert events.
 *
 * @param request CreateEventRecordPlanRequest
 * @return CreateEventRecordPlanResponse
 */
CreateEventRecordPlanResponse Client::createEventRecordPlan(const CreateEventRecordPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEventRecordPlanWithOptions(request, runtime);
}

/**
 * @param request CreateGbDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGbDeviceResponse
 */
CreateGbDeviceResponse Client::createGbDeviceWithOptions(const CreateGbDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.getGbId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasMediaNetProtocol()) {
    query["MediaNetProtocol"] = request.getMediaNetProtocol();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasSubProductKey()) {
    query["SubProductKey"] = request.getSubProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGbDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGbDeviceResponse>();
}

/**
 * @param request CreateGbDeviceRequest
 * @return CreateGbDeviceResponse
 */
CreateGbDeviceResponse Client::createGbDevice(const CreateGbDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGbDeviceWithOptions(request, runtime);
}

/**
 * @summary Creates a local video recording upload job.
 *
 * @description A single local video recording upload job supports uploading up to 200 files. The maximum number of items in the TimeSlot list is 200.
 *
 * @param request CreateLocalFileUploadJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLocalFileUploadJobResponse
 */
CreateLocalFileUploadJobResponse Client::createLocalFileUploadJobWithOptions(const CreateLocalFileUploadJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasTimeSlot()) {
    query["TimeSlot"] = request.getTimeSlot();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLocalFileUploadJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLocalFileUploadJobResponse>();
}

/**
 * @summary Creates a local video recording upload job.
 *
 * @description A single local video recording upload job supports uploading up to 200 files. The maximum number of items in the TimeSlot list is 200.
 *
 * @param request CreateLocalFileUploadJobRequest
 * @return CreateLocalFileUploadJobResponse
 */
CreateLocalFileUploadJobResponse Client::createLocalFileUploadJob(const CreateLocalFileUploadJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLocalFileUploadJobWithOptions(request, runtime);
}

/**
 * @summary Creates a task to download local video recordings by time.
 *
 * @description ## Limits
 * - The maximum duration for a single time-based download is 30 minutes.
 * - Download tasks and files are retained for up to 1 day. You can re-download them after they expire.
 * - A single instance supports up to 10 concurrent downloads. Completed downloads are not counted.
 * - If the audio and video encoding parameters change, the downloaded recording defaults to the first half of the recording.
 * - Due to fluctuations in the device\\"s upstream network, the link may be abnormally disconnected or the device may actively drop data. As a result, the uploaded and downloaded recordings may be incomplete.
 * - The downloaded recording data is determined by the device\\"s stream pushing logic. If the pushed data is abnormal, the duration of the downloaded recording may not match the time period specified in the task settings.
 * ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request CreateLocalRecordDownloadByTimeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLocalRecordDownloadByTimeJobResponse
 */
CreateLocalRecordDownloadByTimeJobResponse Client::createLocalRecordDownloadByTimeJobWithOptions(const CreateLocalRecordDownloadByTimeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.getSpeed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLocalRecordDownloadByTimeJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLocalRecordDownloadByTimeJobResponse>();
}

/**
 * @summary Creates a task to download local video recordings by time.
 *
 * @description ## Limits
 * - The maximum duration for a single time-based download is 30 minutes.
 * - Download tasks and files are retained for up to 1 day. You can re-download them after they expire.
 * - A single instance supports up to 10 concurrent downloads. Completed downloads are not counted.
 * - If the audio and video encoding parameters change, the downloaded recording defaults to the first half of the recording.
 * - Due to fluctuations in the device\\"s upstream network, the link may be abnormally disconnected or the device may actively drop data. As a result, the uploaded and downloaded recordings may be incomplete.
 * - The downloaded recording data is determined by the device\\"s stream pushing logic. If the pushed data is abnormal, the duration of the downloaded recording may not match the time period specified in the task settings.
 * ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request CreateLocalRecordDownloadByTimeJobRequest
 * @return CreateLocalRecordDownloadByTimeJobResponse
 */
CreateLocalRecordDownloadByTimeJobResponse Client::createLocalRecordDownloadByTimeJob(const CreateLocalRecordDownloadByTimeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLocalRecordDownloadByTimeJobWithOptions(request, runtime);
}

/**
 * @summary Creates an image search application instance.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 * > A Resource Access Management (RAM) user shares the quota of the Alibaba Cloud account.
 *
 * @param request CreatePictureSearchAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePictureSearchAppResponse
 */
CreatePictureSearchAppResponse Client::createPictureSearchAppWithOptions(const CreatePictureSearchAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesc()) {
    query["Desc"] = request.getDesc();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePictureSearchApp"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePictureSearchAppResponse>();
}

/**
 * @summary Creates an image search application instance.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 * > A Resource Access Management (RAM) user shares the quota of the Alibaba Cloud account.
 *
 * @param request CreatePictureSearchAppRequest
 * @return CreatePictureSearchAppResponse
 */
CreatePictureSearchAppResponse Client::createPictureSearchApp(const CreatePictureSearchAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPictureSearchAppWithOptions(request, runtime);
}

/**
 * @summary Creates an integrated image search task.
 *
 * @description Integrated image search retrieves both face and human body features simultaneously during an image search.
 * > This feature requires the deployment of face and human body detection algorithms on V-series edge all-in-one machines.
 *
 * @param request CreatePictureSearchJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePictureSearchJobResponse
 */
CreatePictureSearchJobResponse Client::createPictureSearchJobWithOptions(const CreatePictureSearchJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasBodyThreshold()) {
    query["BodyThreshold"] = request.getBodyThreshold();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPictureSearchType()) {
    query["PictureSearchType"] = request.getPictureSearchType();
  }

  if (!!request.hasSearchPicUrl()) {
    query["SearchPicUrl"] = request.getSearchPicUrl();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePictureSearchJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePictureSearchJobResponse>();
}

/**
 * @summary Creates an integrated image search task.
 *
 * @description Integrated image search retrieves both face and human body features simultaneously during an image search.
 * > This feature requires the deployment of face and human body detection algorithms on V-series edge all-in-one machines.
 *
 * @param request CreatePictureSearchJobRequest
 * @return CreatePictureSearchJobResponse
 */
CreatePictureSearchJobResponse Client::createPictureSearchJob(const CreatePictureSearchJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPictureSearchJobWithOptions(request, runtime);
}

/**
 * @summary Creates a task to download cloud recordings by time.
 *
 * @description ## Limits
 * - Maximum duration for a single time-based download: 30 minutes.
 * - Download time precision: The precision of the download time range is within 10 seconds. For example, if you select a 20-second data segment to download, up to 30 seconds of data may be downloaded.
 * - Maximum number of recording files for a single time-based download: 100.
 * - Download tasks and files are retained for up to 1 day. You can re-download them after they expire.
 * - Maximum concurrent downloads per instance: 10. Completed downloads are not counted.
 * - If the audio and video encoding parameters change, the first half of the recording is downloaded by default.
 * - If the download time ranges of recordings overlap, the cloud deduplicates the overlapping data.
 * ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the account.
 *
 * @param request CreateRecordDownloadByTimeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecordDownloadByTimeJobResponse
 */
CreateRecordDownloadByTimeJobResponse Client::createRecordDownloadByTimeJobWithOptions(const CreateRecordDownloadByTimeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasRecordType()) {
    query["RecordType"] = request.getRecordType();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRecordDownloadByTimeJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecordDownloadByTimeJobResponse>();
}

/**
 * @summary Creates a task to download cloud recordings by time.
 *
 * @description ## Limits
 * - Maximum duration for a single time-based download: 30 minutes.
 * - Download time precision: The precision of the download time range is within 10 seconds. For example, if you select a 20-second data segment to download, up to 30 seconds of data may be downloaded.
 * - Maximum number of recording files for a single time-based download: 100.
 * - Download tasks and files are retained for up to 1 day. You can re-download them after they expire.
 * - Maximum concurrent downloads per instance: 10. Completed downloads are not counted.
 * - If the audio and video encoding parameters change, the first half of the recording is downloaded by default.
 * - If the download time ranges of recordings overlap, the cloud deduplicates the overlapping data.
 * ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the account.
 *
 * @param request CreateRecordDownloadByTimeJobRequest
 * @return CreateRecordDownloadByTimeJobResponse
 */
CreateRecordDownloadByTimeJobResponse Client::createRecordDownloadByTimeJob(const CreateRecordDownloadByTimeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecordDownloadByTimeJobWithOptions(request, runtime);
}

/**
 * @summary Creates a recording plan based on a time template.
 *
 * @param request CreateRecordPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecordPlanResponse
 */
CreateRecordPlanResponse Client::createRecordPlanWithOptions(const CreateRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRecordPlan"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecordPlanResponse>();
}

/**
 * @summary Creates a recording plan based on a time template.
 *
 * @param request CreateRecordPlanRequest
 * @return CreateRecordPlanResponse
 */
CreateRecordPlanResponse Client::createRecordPlan(const CreateRecordPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecordPlanWithOptions(request, runtime);
}

/**
 * @param request CreateRtmpDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRtmpDeviceResponse
 */
CreateRtmpDeviceResponse Client::createRtmpDeviceWithOptions(const CreateRtmpDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasPullAuthKey()) {
    query["PullAuthKey"] = request.getPullAuthKey();
  }

  if (!!request.hasPullKeyExpireTime()) {
    query["PullKeyExpireTime"] = request.getPullKeyExpireTime();
  }

  if (!!request.hasPushAuthKey()) {
    query["PushAuthKey"] = request.getPushAuthKey();
  }

  if (!!request.hasPushKeyExpireTime()) {
    query["PushKeyExpireTime"] = request.getPushKeyExpireTime();
  }

  if (!!request.hasSubStreamName()) {
    query["SubStreamName"] = request.getSubStreamName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRtmpDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRtmpDeviceResponse>();
}

/**
 * @param request CreateRtmpDeviceRequest
 * @return CreateRtmpDeviceResponse
 */
CreateRtmpDeviceResponse Client::createRtmpDevice(const CreateRtmpDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRtmpDeviceWithOptions(request, runtime);
}

/**
 * @summary Creates a video stream pushing job.
 *
 * @description ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
 * > All Resource Access Management (RAM) users under an Alibaba Cloud account share the quota of the account.
 *
 * @param request CreateStreamPushJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStreamPushJobResponse
 */
CreateStreamPushJobResponse Client::createStreamPushJobWithOptions(const CreateStreamPushJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasPushUrl()) {
    query["PushUrl"] = request.getPushUrl();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStreamPushJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStreamPushJobResponse>();
}

/**
 * @summary Creates a video stream pushing job.
 *
 * @description ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
 * > All Resource Access Management (RAM) users under an Alibaba Cloud account share the quota of the account.
 *
 * @param request CreateStreamPushJobRequest
 * @return CreateStreamPushJobResponse
 */
CreateStreamPushJobResponse Client::createStreamPushJob(const CreateStreamPushJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStreamPushJobWithOptions(request, runtime);
}

/**
 * @summary Creates a cloud snapshot task.
 *
 * @description ## QPS limit
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request CreateStreamSnapshotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStreamSnapshotJobResponse
 */
CreateStreamSnapshotJobResponse Client::createStreamSnapshotJobWithOptions(const CreateStreamSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasSnapshotInterval()) {
    query["SnapshotInterval"] = request.getSnapshotInterval();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStreamSnapshotJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStreamSnapshotJobResponse>();
}

/**
 * @summary Creates a cloud snapshot task.
 *
 * @description ## QPS limit
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request CreateStreamSnapshotJobRequest
 * @return CreateStreamSnapshotJobResponse
 */
CreateStreamSnapshotJobResponse Client::createStreamSnapshotJob(const CreateStreamSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStreamSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary Creates a time template.
 *
 * @param request CreateTimeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTimeTemplateResponse
 */
CreateTimeTemplateResponse Client::createTimeTemplateWithOptions(const CreateTimeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllDay()) {
    query["AllDay"] = request.getAllDay();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTimeSections()) {
    query["TimeSections"] = request.getTimeSections();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTimeTemplate"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTimeTemplateResponse>();
}

/**
 * @summary Creates a time template.
 *
 * @param request CreateTimeTemplateRequest
 * @return CreateTimeTemplateResponse
 */
CreateTimeTemplateResponse Client::createTimeTemplate(const CreateTimeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTimeTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes an intelligent event recording plan.
 *
 * @param request DeleteEventRecordPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventRecordPlanResponse
 */
DeleteEventRecordPlanResponse Client::deleteEventRecordPlanWithOptions(const DeleteEventRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEventRecordPlan"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventRecordPlanResponse>();
}

/**
 * @summary Deletes an intelligent event recording plan.
 *
 * @param request DeleteEventRecordPlanRequest
 * @return DeleteEventRecordPlanResponse
 */
DeleteEventRecordPlanResponse Client::deleteEventRecordPlan(const DeleteEventRecordPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventRecordPlanWithOptions(request, runtime);
}

/**
 * @summary Deletes the IP cameras associated with an intelligent alert event recording plan.
 *
 * @param request DeleteEventRecordPlanDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventRecordPlanDeviceResponse
 */
DeleteEventRecordPlanDeviceResponse Client::deleteEventRecordPlanDeviceWithOptions(const DeleteEventRecordPlanDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEventRecordPlanDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventRecordPlanDeviceResponse>();
}

/**
 * @summary Deletes the IP cameras associated with an intelligent alert event recording plan.
 *
 * @param request DeleteEventRecordPlanDeviceRequest
 * @return DeleteEventRecordPlanDeviceResponse
 */
DeleteEventRecordPlanDeviceResponse Client::deleteEventRecordPlanDevice(const DeleteEventRecordPlanDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventRecordPlanDeviceWithOptions(request, runtime);
}

/**
 * @summary Deletes a device group.
 *
 * @param request DeleteFaceDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaceDeviceGroupResponse
 */
DeleteFaceDeviceGroupResponse Client::deleteFaceDeviceGroupWithOptions(const DeleteFaceDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.getDeviceGroupId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFaceDeviceGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFaceDeviceGroupResponse>();
}

/**
 * @summary Deletes a device group.
 *
 * @param request DeleteFaceDeviceGroupRequest
 * @return DeleteFaceDeviceGroupResponse
 */
DeleteFaceDeviceGroupResponse Client::deleteFaceDeviceGroup(const DeleteFaceDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaceDeviceGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a user from the face management service.
 *
 * @param request DeleteFaceUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaceUserResponse
 */
DeleteFaceUserResponse Client::deleteFaceUserWithOptions(const DeleteFaceUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFaceUser"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFaceUserResponse>();
}

/**
 * @summary Deletes a user from the face management service.
 *
 * @param request DeleteFaceUserRequest
 * @return DeleteFaceUserResponse
 */
DeleteFaceUserResponse Client::deleteFaceUser(const DeleteFaceUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaceUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified user group.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
 * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request DeleteFaceUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaceUserGroupResponse
 */
DeleteFaceUserGroupResponse Client::deleteFaceUserGroupWithOptions(const DeleteFaceUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFaceUserGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFaceUserGroupResponse>();
}

/**
 * @summary Deletes a specified user group.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
 * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request DeleteFaceUserGroupRequest
 * @return DeleteFaceUserGroupResponse
 */
DeleteFaceUserGroupResponse Client::deleteFaceUserGroup(const DeleteFaceUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaceUserGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes the face synchronization relationship between a user group and a device group.
 *
 * @description ## Before you begin
 * The maximum number of queries per second (QPS) per Alibaba Cloud account for invoking this operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request DeleteFaceUserGroupAndDeviceGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaceUserGroupAndDeviceGroupRelationResponse
 */
DeleteFaceUserGroupAndDeviceGroupRelationResponse Client::deleteFaceUserGroupAndDeviceGroupRelationWithOptions(const DeleteFaceUserGroupAndDeviceGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasControlId()) {
    query["ControlId"] = request.getControlId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFaceUserGroupAndDeviceGroupRelation"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFaceUserGroupAndDeviceGroupRelationResponse>();
}

/**
 * @summary Deletes the face synchronization relationship between a user group and a device group.
 *
 * @description ## Before you begin
 * The maximum number of queries per second (QPS) per Alibaba Cloud account for invoking this operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request DeleteFaceUserGroupAndDeviceGroupRelationRequest
 * @return DeleteFaceUserGroupAndDeviceGroupRelationResponse
 */
DeleteFaceUserGroupAndDeviceGroupRelationResponse Client::deleteFaceUserGroupAndDeviceGroupRelation(const DeleteFaceUserGroupAndDeviceGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaceUserGroupAndDeviceGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified face image from a user in the face library.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
 * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request DeleteFaceUserPictureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaceUserPictureResponse
 */
DeleteFaceUserPictureResponse Client::deleteFaceUserPictureWithOptions(const DeleteFaceUserPictureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFacePicMd5()) {
    query["FacePicMd5"] = request.getFacePicMd5();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFaceUserPicture"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFaceUserPictureResponse>();
}

/**
 * @summary Deletes a specified face image from a user in the face library.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
 * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request DeleteFaceUserPictureRequest
 * @return DeleteFaceUserPictureResponse
 */
DeleteFaceUserPictureResponse Client::deleteFaceUserPicture(const DeleteFaceUserPictureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaceUserPictureWithOptions(request, runtime);
}

/**
 * @param request DeleteGbDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGbDeviceResponse
 */
DeleteGbDeviceResponse Client::deleteGbDeviceWithOptions(const DeleteGbDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGbDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGbDeviceResponse>();
}

/**
 * @param request DeleteGbDeviceRequest
 * @return DeleteGbDeviceResponse
 */
DeleteGbDeviceResponse Client::deleteGbDevice(const DeleteGbDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGbDeviceWithOptions(request, runtime);
}

/**
 * @summary Stops a local recording upload task.
 *
 * @description After you stop a local recording upload task, the recording files that have been created are not deleted.
 *
 * @param request DeleteLocalFileUploadJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLocalFileUploadJobResponse
 */
DeleteLocalFileUploadJobResponse Client::deleteLocalFileUploadJobWithOptions(const DeleteLocalFileUploadJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLocalFileUploadJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLocalFileUploadJobResponse>();
}

/**
 * @summary Stops a local recording upload task.
 *
 * @description After you stop a local recording upload task, the recording files that have been created are not deleted.
 *
 * @param request DeleteLocalFileUploadJobRequest
 * @return DeleteLocalFileUploadJobResponse
 */
DeleteLocalFileUploadJobResponse Client::deleteLocalFileUploadJob(const DeleteLocalFileUploadJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLocalFileUploadJobWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple cloud pictures with specified picture IDs for a specified IPC device.
 *
 * @param request DeletePictureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePictureResponse
 */
DeletePictureResponse Client::deletePictureWithOptions(const DeletePictureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPictureIdList()) {
    query["PictureIdList"] = request.getPictureIdList();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePicture"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePictureResponse>();
}

/**
 * @summary Deletes multiple cloud pictures with specified picture IDs for a specified IPC device.
 *
 * @param request DeletePictureRequest
 * @return DeletePictureResponse
 */
DeletePictureResponse Client::deletePicture(const DeletePictureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePictureWithOptions(request, runtime);
}

/**
 * @summary Deletes video files stored in the cloud.
 *
 * @param request DeleteRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecordResponse
 */
DeleteRecordResponse Client::deleteRecordWithOptions(const DeleteRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasFileNameList()) {
    query["FileNameList"] = request.getFileNameList();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecord"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecordResponse>();
}

/**
 * @summary Deletes video files stored in the cloud.
 *
 * @param request DeleteRecordRequest
 * @return DeleteRecordResponse
 */
DeleteRecordResponse Client::deleteRecord(const DeleteRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecordWithOptions(request, runtime);
}

/**
 * @summary Deletes a recording plan.
 *
 * @param request DeleteRecordPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecordPlanResponse
 */
DeleteRecordPlanResponse Client::deleteRecordPlanWithOptions(const DeleteRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecordPlan"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecordPlanResponse>();
}

/**
 * @summary Deletes a recording plan.
 *
 * @param request DeleteRecordPlanRequest
 * @return DeleteRecordPlanResponse
 */
DeleteRecordPlanResponse Client::deleteRecordPlan(const DeleteRecordPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecordPlanWithOptions(request, runtime);
}

/**
 * @summary Deletes the recording plan associated with an IPC device.
 *
 * @param request DeleteRecordPlanDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecordPlanDeviceResponse
 */
DeleteRecordPlanDeviceResponse Client::deleteRecordPlanDeviceWithOptions(const DeleteRecordPlanDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecordPlanDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecordPlanDeviceResponse>();
}

/**
 * @summary Deletes the recording plan associated with an IPC device.
 *
 * @param request DeleteRecordPlanDeviceRequest
 * @return DeleteRecordPlanDeviceResponse
 */
DeleteRecordPlanDeviceResponse Client::deleteRecordPlanDevice(const DeleteRecordPlanDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecordPlanDeviceWithOptions(request, runtime);
}

/**
 * @param request DeleteRtmpDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRtmpDeviceResponse
 */
DeleteRtmpDeviceResponse Client::deleteRtmpDeviceWithOptions(const DeleteRtmpDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRtmpDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRtmpDeviceResponse>();
}

/**
 * @param request DeleteRtmpDeviceRequest
 * @return DeleteRtmpDeviceResponse
 */
DeleteRtmpDeviceResponse Client::deleteRtmpDevice(const DeleteRtmpDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRtmpDeviceWithOptions(request, runtime);
}

/**
 * @param request DeleteRtmpKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRtmpKeyResponse
 */
DeleteRtmpKeyResponse Client::deleteRtmpKeyWithOptions(const DeleteRtmpKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRtmpKey"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRtmpKeyResponse>();
}

/**
 * @param request DeleteRtmpKeyRequest
 * @return DeleteRtmpKeyResponse
 */
DeleteRtmpKeyResponse Client::deleteRtmpKey(const DeleteRtmpKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRtmpKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes a video stream pushing job.
 *
 * @description ## QPS limit
 * A single Alibaba Cloud account can invoke this operation up to 50 times per second (QPS).
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of that account.
 *
 * @param request DeleteStreamPushJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStreamPushJobResponse
 */
DeleteStreamPushJobResponse Client::deleteStreamPushJobWithOptions(const DeleteStreamPushJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStreamPushJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStreamPushJobResponse>();
}

/**
 * @summary Deletes a video stream pushing job.
 *
 * @description ## QPS limit
 * A single Alibaba Cloud account can invoke this operation up to 50 times per second (QPS).
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of that account.
 *
 * @param request DeleteStreamPushJobRequest
 * @return DeleteStreamPushJobResponse
 */
DeleteStreamPushJobResponse Client::deleteStreamPushJob(const DeleteStreamPushJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStreamPushJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a video snapshot task.
 *
 * @description ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request DeleteStreamSnapshotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStreamSnapshotJobResponse
 */
DeleteStreamSnapshotJobResponse Client::deleteStreamSnapshotJobWithOptions(const DeleteStreamSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStreamSnapshotJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStreamSnapshotJobResponse>();
}

/**
 * @summary Deletes a video snapshot task.
 *
 * @description ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request DeleteStreamSnapshotJobRequest
 * @return DeleteStreamSnapshotJobResponse
 */
DeleteStreamSnapshotJobResponse Client::deleteStreamSnapshotJob(const DeleteStreamSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStreamSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a time template.
 *
 * @param request DeleteTimeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTimeTemplateResponse
 */
DeleteTimeTemplateResponse Client::deleteTimeTemplateWithOptions(const DeleteTimeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTimeTemplate"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTimeTemplateResponse>();
}

/**
 * @summary Deletes a time template.
 *
 * @param request DeleteTimeTemplateRequest
 * @return DeleteTimeTemplateResponse
 */
DeleteTimeTemplateResponse Client::deleteTimeTemplate(const DeleteTimeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTimeTemplateWithOptions(request, runtime);
}

/**
 * @param request EnableGbSubDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableGbSubDeviceResponse
 */
EnableGbSubDeviceResponse Client::enableGbSubDeviceWithOptions(const EnableGbSubDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasSubDeviceId()) {
    query["SubDeviceId"] = request.getSubDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableGbSubDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableGbSubDeviceResponse>();
}

/**
 * @param request EnableGbSubDeviceRequest
 * @return EnableGbSubDeviceResponse
 */
EnableGbSubDeviceResponse Client::enableGbSubDevice(const EnableGbSubDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableGbSubDeviceWithOptions(request, runtime);
}

/**
 * @summary Queries the status of an integrated image search task.
 *
 * @description Integrated image search retrieves both facial and body features during an image search.
 * > This feature requires the deployment of face and body detection algorithms on V-series edge all-in-one machines.
 *
 * @param request GetPictureSearchJobStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPictureSearchJobStatusResponse
 */
GetPictureSearchJobStatusResponse Client::getPictureSearchJobStatusWithOptions(const GetPictureSearchJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPictureSearchJobStatus"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPictureSearchJobStatusResponse>();
}

/**
 * @summary Queries the status of an integrated image search task.
 *
 * @description Integrated image search retrieves both facial and body features during an image search.
 * > This feature requires the deployment of face and body detection algorithms on V-series edge all-in-one machines.
 *
 * @param request GetPictureSearchJobStatusRequest
 * @return GetPictureSearchJobStatusResponse
 */
GetPictureSearchJobStatusResponse Client::getPictureSearchJobStatus(const GetPictureSearchJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPictureSearchJobStatusWithOptions(request, runtime);
}

/**
 * @summary Starts an image search application instance to search for images.
 *
 * @param request PictureSearchPictureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PictureSearchPictureResponse
 */
PictureSearchPictureResponse Client::pictureSearchPictureWithOptions(const PictureSearchPictureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasContainPicUrl()) {
    query["ContainPicUrl"] = request.getContainPicUrl();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPictureSearchType()) {
    query["PictureSearchType"] = request.getPictureSearchType();
  }

  if (!!request.hasSearchPicUrl()) {
    query["SearchPicUrl"] = request.getSearchPicUrl();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PictureSearchPicture"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PictureSearchPictureResponse>();
}

/**
 * @summary Starts an image search application instance to search for images.
 *
 * @param request PictureSearchPictureRequest
 * @return PictureSearchPictureResponse
 */
PictureSearchPictureResponse Client::pictureSearchPicture(const PictureSearchPictureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pictureSearchPictureWithOptions(request, runtime);
}

/**
 * @summary Queries the intelligent alert events for vehicle operations.
 *
 * @description ## Usage notes
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 10.  
 * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request QueryCarProcessEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCarProcessEventsResponse
 */
QueryCarProcessEventsResponse Client::queryCarProcessEventsWithOptions(const QueryCarProcessEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.getActionType();
  }

  if (!!request.hasAreaIndex()) {
    query["AreaIndex"] = request.getAreaIndex();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlateNo()) {
    query["PlateNo"] = request.getPlateNo();
  }

  if (!!request.hasSubDeviceName()) {
    query["SubDeviceName"] = request.getSubDeviceName();
  }

  if (!!request.hasSubIotId()) {
    query["SubIotId"] = request.getSubIotId();
  }

  if (!!request.hasSubProductKey()) {
    query["SubProductKey"] = request.getSubProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCarProcessEvents"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCarProcessEventsResponse>();
}

/**
 * @summary Queries the intelligent alert events for vehicle operations.
 *
 * @description ## Usage notes
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 10.  
 * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request QueryCarProcessEventsRequest
 * @return QueryCarProcessEventsResponse
 */
QueryCarProcessEventsResponse Client::queryCarProcessEvents(const QueryCarProcessEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCarProcessEventsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of intelligent alert events for an IPC device.
 *
 * @param request QueryDeviceEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceEventResponse
 */
QueryDeviceEventResponse Client::queryDeviceEventWithOptions(const QueryDeviceEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDeviceEvent"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeviceEventResponse>();
}

/**
 * @summary Queries a list of intelligent alert events for an IPC device.
 *
 * @param request QueryDeviceEventRequest
 * @return QueryDeviceEventResponse
 */
QueryDeviceEventResponse Client::queryDeviceEvent(const QueryDeviceEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeviceEventWithOptions(request, runtime);
}

/**
 * @summary Retrieves the image captured and uploaded by an IPC device when an intelligent alert event is triggered.
 *
 * @param request QueryDeviceEventPictureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceEventPictureResponse
 */
QueryDeviceEventPictureResponse Client::queryDeviceEventPictureWithOptions(const QueryDeviceEventPictureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDeviceEventPicture"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeviceEventPictureResponse>();
}

/**
 * @summary Retrieves the image captured and uploaded by an IPC device when an intelligent alert event is triggered.
 *
 * @param request QueryDeviceEventPictureRequest
 * @return QueryDeviceEventPictureResponse
 */
QueryDeviceEventPictureResponse Client::queryDeviceEventPicture(const QueryDeviceEventPictureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeviceEventPictureWithOptions(request, runtime);
}

/**
 * @summary Retrieves the URL of the recording file for a specified intelligent alert event of an IP camera (IPC) device.
 *
 * @param request QueryDeviceEventRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceEventRecordResponse
 */
QueryDeviceEventRecordResponse Client::queryDeviceEventRecordWithOptions(const QueryDeviceEventRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDeviceEventRecord"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeviceEventRecordResponse>();
}

/**
 * @summary Retrieves the URL of the recording file for a specified intelligent alert event of an IP camera (IPC) device.
 *
 * @param request QueryDeviceEventRecordRequest
 * @return QueryDeviceEventRecordResponse
 */
QueryDeviceEventRecordResponse Client::queryDeviceEventRecord(const QueryDeviceEventRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeviceEventRecordWithOptions(request, runtime);
}

/**
 * @summary Retrieves image URLs based on a list of image IDs.
 *
 * @param request QueryDevicePictureByListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDevicePictureByListResponse
 */
QueryDevicePictureByListResponse Client::queryDevicePictureByListWithOptions(const QueryDevicePictureByListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPictureIdList()) {
    query["PictureIdList"] = request.getPictureIdList();
  }

  if (!!request.hasPictureType()) {
    query["PictureType"] = request.getPictureType();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasThumbWidth()) {
    query["ThumbWidth"] = request.getThumbWidth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDevicePictureByList"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDevicePictureByListResponse>();
}

/**
 * @summary Retrieves image URLs based on a list of image IDs.
 *
 * @param request QueryDevicePictureByListRequest
 * @return QueryDevicePictureByListResponse
 */
QueryDevicePictureByListResponse Client::queryDevicePictureByList(const QueryDevicePictureByListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDevicePictureByListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about images captured by an IPC device.
 *
 * @param request QueryDevicePictureFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDevicePictureFileResponse
 */
QueryDevicePictureFileResponse Client::queryDevicePictureFileWithOptions(const QueryDevicePictureFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaptureId()) {
    query["CaptureId"] = request.getCaptureId();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPictureType()) {
    query["PictureType"] = request.getPictureType();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasThumbWidth()) {
    query["ThumbWidth"] = request.getThumbWidth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDevicePictureFile"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDevicePictureFileResponse>();
}

/**
 * @summary Queries the information about images captured by an IPC device.
 *
 * @param request QueryDevicePictureFileRequest
 * @return QueryDevicePictureFileResponse
 */
QueryDevicePictureFileResponse Client::queryDevicePictureFile(const QueryDevicePictureFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDevicePictureFileWithOptions(request, runtime);
}

/**
 * @summary Queries the cloud storage image lifecycle for an IPC device.
 *
 * @param request QueryDevicePictureLifeCycleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDevicePictureLifeCycleResponse
 */
QueryDevicePictureLifeCycleResponse Client::queryDevicePictureLifeCycleWithOptions(const QueryDevicePictureLifeCycleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDevicePictureLifeCycle"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDevicePictureLifeCycleResponse>();
}

/**
 * @summary Queries the cloud storage image lifecycle for an IPC device.
 *
 * @param request QueryDevicePictureLifeCycleRequest
 * @return QueryDevicePictureLifeCycleResponse
 */
QueryDevicePictureLifeCycleResponse Client::queryDevicePictureLifeCycle(const QueryDevicePictureLifeCycleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDevicePictureLifeCycleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the cloud storage recording lifecycle of an IPC device.
 *
 * @param request QueryDeviceRecordLifeCycleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceRecordLifeCycleResponse
 */
QueryDeviceRecordLifeCycleResponse Client::queryDeviceRecordLifeCycleWithOptions(const QueryDeviceRecordLifeCycleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceList()) {
    query["DeviceList"] = request.getDeviceList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDeviceRecordLifeCycle"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeviceRecordLifeCycleResponse>();
}

/**
 * @summary Retrieves the cloud storage recording lifecycle of an IPC device.
 *
 * @param request QueryDeviceRecordLifeCycleRequest
 * @return QueryDeviceRecordLifeCycleResponse
 */
QueryDeviceRecordLifeCycleResponse Client::queryDeviceRecordLifeCycle(const QueryDeviceRecordLifeCycleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeviceRecordLifeCycleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the URL of a recording file with a specified file name from the storage card of a local network video recorder or IP camera.
 *
 * @param request QueryDeviceVodUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceVodUrlResponse
 */
QueryDeviceVodUrlResponse Client::queryDeviceVodUrlWithOptions(const QueryDeviceVodUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEnableStun()) {
    query["EnableStun"] = request.getEnableStun();
  }

  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.getEncryptType();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPlayUnLimited()) {
    query["PlayUnLimited"] = request.getPlayUnLimited();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasScheme()) {
    query["Scheme"] = request.getScheme();
  }

  if (!!request.hasSeekTime()) {
    query["SeekTime"] = request.getSeekTime();
  }

  if (!!request.hasShouldEncrypt()) {
    query["ShouldEncrypt"] = request.getShouldEncrypt();
  }

  if (!!request.hasUrlValidDuration()) {
    query["UrlValidDuration"] = request.getUrlValidDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDeviceVodUrl"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeviceVodUrlResponse>();
}

/**
 * @summary Retrieves the URL of a recording file with a specified file name from the storage card of a local network video recorder or IP camera.
 *
 * @param request QueryDeviceVodUrlRequest
 * @return QueryDeviceVodUrlResponse
 */
QueryDeviceVodUrlResponse Client::queryDeviceVodUrl(const QueryDeviceVodUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeviceVodUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves the playback URL of a recording file within a specified time range from the storage card of a local network video recorder (NVR) or IP camera (IPC) device.
 *
 * @description ## Limits
 * This operation is supported only in scenarios where IPC devices are directly connected to IoT Platform.
 *
 * @param request QueryDeviceVodUrlByTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceVodUrlByTimeResponse
 */
QueryDeviceVodUrlByTimeResponse Client::queryDeviceVodUrlByTimeWithOptions(const QueryDeviceVodUrlByTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEnableStun()) {
    query["EnableStun"] = request.getEnableStun();
  }

  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.getEncryptType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPlayUnLimited()) {
    query["PlayUnLimited"] = request.getPlayUnLimited();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasScheme()) {
    query["Scheme"] = request.getScheme();
  }

  if (!!request.hasSeekTime()) {
    query["SeekTime"] = request.getSeekTime();
  }

  if (!!request.hasShouldEncrypt()) {
    query["ShouldEncrypt"] = request.getShouldEncrypt();
  }

  if (!!request.hasUrlValidDuration()) {
    query["UrlValidDuration"] = request.getUrlValidDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDeviceVodUrlByTime"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeviceVodUrlByTimeResponse>();
}

/**
 * @summary Retrieves the playback URL of a recording file within a specified time range from the storage card of a local network video recorder (NVR) or IP camera (IPC) device.
 *
 * @description ## Limits
 * This operation is supported only in scenarios where IPC devices are directly connected to IoT Platform.
 *
 * @param request QueryDeviceVodUrlByTimeRequest
 * @return QueryDeviceVodUrlByTimeResponse
 */
QueryDeviceVodUrlByTimeResponse Client::queryDeviceVodUrlByTime(const QueryDeviceVodUrlByTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeviceVodUrlByTimeWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an intelligent alert event recording plan.
 *
 * @param request QueryEventRecordPlanDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEventRecordPlanDetailResponse
 */
QueryEventRecordPlanDetailResponse Client::queryEventRecordPlanDetailWithOptions(const QueryEventRecordPlanDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEventRecordPlanDetail"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEventRecordPlanDetailResponse>();
}

/**
 * @summary Queries the details of an intelligent alert event recording plan.
 *
 * @param request QueryEventRecordPlanDetailRequest
 * @return QueryEventRecordPlanDetailResponse
 */
QueryEventRecordPlanDetailResponse Client::queryEventRecordPlanDetail(const QueryEventRecordPlanDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEventRecordPlanDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the intelligent alert event recording plan of an IPC device by device ID.
 *
 * @param request QueryEventRecordPlanDeviceByDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEventRecordPlanDeviceByDeviceResponse
 */
QueryEventRecordPlanDeviceByDeviceResponse Client::queryEventRecordPlanDeviceByDeviceWithOptions(const QueryEventRecordPlanDeviceByDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEventRecordPlanDeviceByDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEventRecordPlanDeviceByDeviceResponse>();
}

/**
 * @summary Queries the intelligent alert event recording plan of an IPC device by device ID.
 *
 * @param request QueryEventRecordPlanDeviceByDeviceRequest
 * @return QueryEventRecordPlanDeviceByDeviceResponse
 */
QueryEventRecordPlanDeviceByDeviceResponse Client::queryEventRecordPlanDeviceByDevice(const QueryEventRecordPlanDeviceByDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEventRecordPlanDeviceByDeviceWithOptions(request, runtime);
}

/**
 * @summary Queries the list of cameras associated with an intelligent alert event recording plan.
 *
 * @param request QueryEventRecordPlanDeviceByPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEventRecordPlanDeviceByPlanResponse
 */
QueryEventRecordPlanDeviceByPlanResponse Client::queryEventRecordPlanDeviceByPlanWithOptions(const QueryEventRecordPlanDeviceByPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEventRecordPlanDeviceByPlan"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEventRecordPlanDeviceByPlanResponse>();
}

/**
 * @summary Queries the list of cameras associated with an intelligent alert event recording plan.
 *
 * @param request QueryEventRecordPlanDeviceByPlanRequest
 * @return QueryEventRecordPlanDeviceByPlanResponse
 */
QueryEventRecordPlanDeviceByPlanResponse Client::queryEventRecordPlanDeviceByPlan(const QueryEventRecordPlanDeviceByPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEventRecordPlanDeviceByPlanWithOptions(request, runtime);
}

/**
 * @summary Queries the list of intelligent alert event recording plans.
 *
 * @param request QueryEventRecordPlansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEventRecordPlansResponse
 */
QueryEventRecordPlansResponse Client::queryEventRecordPlansWithOptions(const QueryEventRecordPlansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEventRecordPlans"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEventRecordPlansResponse>();
}

/**
 * @summary Queries the list of intelligent alert event recording plans.
 *
 * @param request QueryEventRecordPlansRequest
 * @return QueryEventRecordPlansResponse
 */
QueryEventRecordPlansResponse Client::queryEventRecordPlans(const QueryEventRecordPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEventRecordPlansWithOptions(request, runtime);
}

/**
 * @summary Queries all device groups.
 *
 * @param request QueryFaceAllDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceAllDeviceGroupResponse
 */
QueryFaceAllDeviceGroupResponse Client::queryFaceAllDeviceGroupWithOptions(const QueryFaceAllDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceAllDeviceGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceAllDeviceGroupResponse>();
}

/**
 * @summary Queries all device groups.
 *
 * @param request QueryFaceAllDeviceGroupRequest
 * @return QueryFaceAllDeviceGroupResponse
 */
QueryFaceAllDeviceGroupResponse Client::queryFaceAllDeviceGroup(const QueryFaceAllDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceAllDeviceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries all user groups.
 *
 * @param request QueryFaceAllUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceAllUserGroupResponse
 */
QueryFaceAllUserGroupResponse Client::queryFaceAllUserGroupWithOptions(const QueryFaceAllUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceAllUserGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceAllUserGroupResponse>();
}

/**
 * @summary Queries all user groups.
 *
 * @param request QueryFaceAllUserGroupRequest
 * @return QueryFaceAllUserGroupResponse
 */
QueryFaceAllUserGroupResponse Client::queryFaceAllUserGroup(const QueryFaceAllUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceAllUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the user groups and device groups with face synchronization relationships.
 *
 * @param request QueryFaceAllUserGroupAndDeviceGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceAllUserGroupAndDeviceGroupRelationResponse
 */
QueryFaceAllUserGroupAndDeviceGroupRelationResponse Client::queryFaceAllUserGroupAndDeviceGroupRelationWithOptions(const QueryFaceAllUserGroupAndDeviceGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceAllUserGroupAndDeviceGroupRelation"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceAllUserGroupAndDeviceGroupRelationResponse>();
}

/**
 * @summary Queries the user groups and device groups with face synchronization relationships.
 *
 * @param request QueryFaceAllUserGroupAndDeviceGroupRelationRequest
 * @return QueryFaceAllUserGroupAndDeviceGroupRelationResponse
 */
QueryFaceAllUserGroupAndDeviceGroupRelationResponse Client::queryFaceAllUserGroupAndDeviceGroupRelation(const QueryFaceAllUserGroupAndDeviceGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceAllUserGroupAndDeviceGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Queries all users in a user group.
 *
 * @param request QueryFaceAllUserIdsByGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceAllUserIdsByGroupIdResponse
 */
QueryFaceAllUserIdsByGroupIdResponse Client::queryFaceAllUserIdsByGroupIdWithOptions(const QueryFaceAllUserIdsByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceAllUserIdsByGroupId"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceAllUserIdsByGroupIdResponse>();
}

/**
 * @summary Queries all users in a user group.
 *
 * @param request QueryFaceAllUserIdsByGroupIdRequest
 * @return QueryFaceAllUserIdsByGroupIdResponse
 */
QueryFaceAllUserIdsByGroupIdResponse Client::queryFaceAllUserIdsByGroupId(const QueryFaceAllUserIdsByGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceAllUserIdsByGroupIdWithOptions(request, runtime);
}

/**
 * @summary Queries the user ID in the caller\\"s service based on the user ID from the face image library synchronization service.
 *
 * @param request QueryFaceCustomUserIdByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceCustomUserIdByUserIdResponse
 */
QueryFaceCustomUserIdByUserIdResponse Client::queryFaceCustomUserIdByUserIdWithOptions(const QueryFaceCustomUserIdByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceCustomUserIdByUserId"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceCustomUserIdByUserIdResponse>();
}

/**
 * @summary Queries the user ID in the caller\\"s service based on the user ID from the face image library synchronization service.
 *
 * @param request QueryFaceCustomUserIdByUserIdRequest
 * @return QueryFaceCustomUserIdByUserIdResponse
 */
QueryFaceCustomUserIdByUserIdResponse Client::queryFaceCustomUserIdByUserId(const QueryFaceCustomUserIdByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceCustomUserIdByUserIdWithOptions(request, runtime);
}

/**
 * @summary Queries the device groups to which a device belongs.
 *
 * @param request QueryFaceDeviceGroupsByDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceDeviceGroupsByDeviceResponse
 */
QueryFaceDeviceGroupsByDeviceResponse Client::queryFaceDeviceGroupsByDeviceWithOptions(const QueryFaceDeviceGroupsByDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceDeviceGroupsByDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceDeviceGroupsByDeviceResponse>();
}

/**
 * @summary Queries the device groups to which a device belongs.
 *
 * @param request QueryFaceDeviceGroupsByDeviceRequest
 * @return QueryFaceDeviceGroupsByDeviceResponse
 */
QueryFaceDeviceGroupsByDeviceResponse Client::queryFaceDeviceGroupsByDevice(const QueryFaceDeviceGroupsByDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceDeviceGroupsByDeviceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a user.
 *
 * @param request QueryFaceUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceUserResponse
 */
QueryFaceUserResponse Client::queryFaceUserWithOptions(const QueryFaceUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceUser"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceUserResponse>();
}

/**
 * @summary Queries the details of a user.
 *
 * @param request QueryFaceUserRequest
 * @return QueryFaceUserResponse
 */
QueryFaceUserResponse Client::queryFaceUser(const QueryFaceUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceUserWithOptions(request, runtime);
}

/**
 * @summary Queries user information in batches based on a list of user IDs.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request QueryFaceUserBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceUserBatchResponse
 */
QueryFaceUserBatchResponse Client::queryFaceUserBatchWithOptions(const QueryFaceUserBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasUserIdList()) {
    query["UserIdList"] = request.getUserIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceUserBatch"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceUserBatchResponse>();
}

/**
 * @summary Queries user information in batches based on a list of user IDs.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request QueryFaceUserBatchRequest
 * @return QueryFaceUserBatchResponse
 */
QueryFaceUserBatchResponse Client::queryFaceUserBatch(const QueryFaceUserBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceUserBatchWithOptions(request, runtime);
}

/**
 * @summary Queries face data by face name.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request QueryFaceUserByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceUserByNameResponse
 */
QueryFaceUserByNameResponse Client::queryFaceUserByNameWithOptions(const QueryFaceUserByNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceUserByName"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceUserByNameResponse>();
}

/**
 * @summary Queries face data by face name.
 *
 * @description ## Usage notes
 * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request QueryFaceUserByNameRequest
 * @return QueryFaceUserByNameResponse
 */
QueryFaceUserByNameResponse Client::queryFaceUserByName(const QueryFaceUserByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceUserByNameWithOptions(request, runtime);
}

/**
 * @summary Queries the user groups to which a user belongs.
 *
 * @param request QueryFaceUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceUserGroupResponse
 */
QueryFaceUserGroupResponse Client::queryFaceUserGroupWithOptions(const QueryFaceUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
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
    {"action" , "QueryFaceUserGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceUserGroupResponse>();
}

/**
 * @summary Queries the user groups to which a user belongs.
 *
 * @param request QueryFaceUserGroupRequest
 * @return QueryFaceUserGroupResponse
 */
QueryFaceUserGroupResponse Client::queryFaceUserGroup(const QueryFaceUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the face synchronization relationships between user groups and device groups.
 *
 * @param request QueryFaceUserGroupAndDeviceGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceUserGroupAndDeviceGroupRelationResponse
 */
QueryFaceUserGroupAndDeviceGroupRelationResponse Client::queryFaceUserGroupAndDeviceGroupRelationWithOptions(const QueryFaceUserGroupAndDeviceGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasControlId()) {
    query["ControlId"] = request.getControlId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceUserGroupAndDeviceGroupRelation"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceUserGroupAndDeviceGroupRelationResponse>();
}

/**
 * @summary Queries the face synchronization relationships between user groups and device groups.
 *
 * @param request QueryFaceUserGroupAndDeviceGroupRelationRequest
 * @return QueryFaceUserGroupAndDeviceGroupRelationResponse
 */
QueryFaceUserGroupAndDeviceGroupRelationResponse Client::queryFaceUserGroupAndDeviceGroupRelation(const QueryFaceUserGroupAndDeviceGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceUserGroupAndDeviceGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Queries the user ID in the face library synchronization service based on the user ID in the caller system.
 *
 * @param request QueryFaceUserIdByCustomUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceUserIdByCustomUserIdResponse
 */
QueryFaceUserIdByCustomUserIdResponse Client::queryFaceUserIdByCustomUserIdWithOptions(const QueryFaceUserIdByCustomUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomUserId()) {
    query["CustomUserId"] = request.getCustomUserId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceUserIdByCustomUserId"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceUserIdByCustomUserIdResponse>();
}

/**
 * @summary Queries the user ID in the face library synchronization service based on the user ID in the caller system.
 *
 * @param request QueryFaceUserIdByCustomUserIdRequest
 * @return QueryFaceUserIdByCustomUserIdResponse
 */
QueryFaceUserIdByCustomUserIdResponse Client::queryFaceUserIdByCustomUserId(const QueryFaceUserIdByCustomUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceUserIdByCustomUserIdWithOptions(request, runtime);
}

/**
 * @param request QueryGbSubDeviceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGbSubDeviceListResponse
 */
QueryGbSubDeviceListResponse Client::queryGbSubDeviceListWithOptions(const QueryGbSubDeviceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPageStart()) {
    query["PageStart"] = request.getPageStart();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryGbSubDeviceList"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGbSubDeviceListResponse>();
}

/**
 * @param request QueryGbSubDeviceListRequest
 * @return QueryGbSubDeviceListResponse
 */
QueryGbSubDeviceListResponse Client::queryGbSubDeviceList(const QueryGbSubDeviceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGbSubDeviceListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the live streaming URL of an IPC device.
 *
 * @param request QueryLiveStreamingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLiveStreamingResponse
 */
QueryLiveStreamingResponse Client::queryLiveStreamingWithOptions(const QueryLiveStreamingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheDuration()) {
    query["CacheDuration"] = request.getCacheDuration();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEnableStun()) {
    query["EnableStun"] = request.getEnableStun();
  }

  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.getEncryptType();
  }

  if (!!request.hasForceIFrame()) {
    query["ForceIFrame"] = request.getForceIFrame();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPlayUnLimited()) {
    query["PlayUnLimited"] = request.getPlayUnLimited();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasScheme()) {
    query["Scheme"] = request.getScheme();
  }

  if (!!request.hasShouldEncrypt()) {
    query["ShouldEncrypt"] = request.getShouldEncrypt();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  if (!!request.hasUrlValidDuration()) {
    query["UrlValidDuration"] = request.getUrlValidDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryLiveStreaming"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLiveStreamingResponse>();
}

/**
 * @summary Retrieves the live streaming URL of an IPC device.
 *
 * @param request QueryLiveStreamingRequest
 * @return QueryLiveStreamingResponse
 */
QueryLiveStreamingResponse Client::queryLiveStreaming(const QueryLiveStreamingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryLiveStreamingWithOptions(request, runtime);
}

/**
 * @summary Queries the task result of a local video recording upload node.
 *
 * @param request QueryLocalFileUploadJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLocalFileUploadJobResponse
 */
QueryLocalFileUploadJobResponse Client::queryLocalFileUploadJobWithOptions(const QueryLocalFileUploadJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryLocalFileUploadJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLocalFileUploadJobResponse>();
}

/**
 * @summary Queries the task result of a local video recording upload node.
 *
 * @param request QueryLocalFileUploadJobRequest
 * @return QueryLocalFileUploadJobResponse
 */
QueryLocalFileUploadJobResponse Client::queryLocalFileUploadJob(const QueryLocalFileUploadJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryLocalFileUploadJobWithOptions(request, runtime);
}

/**
 * @summary Queries whether an IP camera has video recordings for each day of a specified month.
 *
 * @param request QueryMonthRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMonthRecordResponse
 */
QueryMonthRecordResponse Client::queryMonthRecordWithOptions(const QueryMonthRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasMonth()) {
    query["Month"] = request.getMonth();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMonthRecord"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMonthRecordResponse>();
}

/**
 * @summary Queries whether an IP camera has video recordings for each day of a specified month.
 *
 * @param request QueryMonthRecordRequest
 * @return QueryMonthRecordResponse
 */
QueryMonthRecordResponse Client::queryMonthRecord(const QueryMonthRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMonthRecordWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of images.
 *
 * @description ## QPS limit
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 500.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryPictureFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPictureFilesResponse
 */
QueryPictureFilesResponse Client::queryPictureFilesWithOptions(const QueryPictureFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPictureSource()) {
    query["PictureSource"] = request.getPictureSource();
  }

  if (!!request.hasPictureType()) {
    query["PictureType"] = request.getPictureType();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPictureFiles"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPictureFilesResponse>();
}

/**
 * @summary Retrieves a list of images.
 *
 * @description ## QPS limit
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 500.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryPictureFilesRequest
 * @return QueryPictureFilesResponse
 */
QueryPictureFilesResponse Client::queryPictureFiles(const QueryPictureFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPictureFilesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of V-series edge all-in-one machines bound to an image search application instance.
 *
 * @param request QueryPictureSearchAiboxesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPictureSearchAiboxesResponse
 */
QueryPictureSearchAiboxesResponse Client::queryPictureSearchAiboxesWithOptions(const QueryPictureSearchAiboxesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPictureSearchAiboxes"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPictureSearchAiboxesResponse>();
}

/**
 * @summary Queries the list of V-series edge all-in-one machines bound to an image search application instance.
 *
 * @param request QueryPictureSearchAiboxesRequest
 * @return QueryPictureSearchAiboxesResponse
 */
QueryPictureSearchAiboxesResponse Client::queryPictureSearchAiboxes(const QueryPictureSearchAiboxesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPictureSearchAiboxesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of created image search application instances.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request QueryPictureSearchAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPictureSearchAppsResponse
 */
QueryPictureSearchAppsResponse Client::queryPictureSearchAppsWithOptions(const QueryPictureSearchAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPictureSearchApps"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPictureSearchAppsResponse>();
}

/**
 * @summary Queries the list of created image search application instances.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request QueryPictureSearchAppsRequest
 * @return QueryPictureSearchAppsResponse
 */
QueryPictureSearchAppsResponse Client::queryPictureSearchApps(const QueryPictureSearchAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPictureSearchAppsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of devices bound to an image search application instance.
 *
 * @param request QueryPictureSearchDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPictureSearchDevicesResponse
 */
QueryPictureSearchDevicesResponse Client::queryPictureSearchDevicesWithOptions(const QueryPictureSearchDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPictureSearchDevices"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPictureSearchDevicesResponse>();
}

/**
 * @summary Queries the list of devices bound to an image search application instance.
 *
 * @param request QueryPictureSearchDevicesRequest
 * @return QueryPictureSearchDevicesResponse
 */
QueryPictureSearchDevicesResponse Client::queryPictureSearchDevices(const QueryPictureSearchDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPictureSearchDevicesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of integrated image search jobs.
 *
 * @description Integrated image search means that both faces and human bodies are retrieved simultaneously during an image search.
 * > This feature requires the deployment of face and human body detection algorithms on V-series edge all-in-one machines.
 *
 * @param request QueryPictureSearchJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPictureSearchJobResponse
 */
QueryPictureSearchJobResponse Client::queryPictureSearchJobWithOptions(const QueryPictureSearchJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasJobStatus()) {
    query["JobStatus"] = request.getJobStatus();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPictureSearchJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPictureSearchJobResponse>();
}

/**
 * @summary Queries the list of integrated image search jobs.
 *
 * @description Integrated image search means that both faces and human bodies are retrieved simultaneously during an image search.
 * > This feature requires the deployment of face and human body detection algorithms on V-series edge all-in-one machines.
 *
 * @param request QueryPictureSearchJobRequest
 * @return QueryPictureSearchJobResponse
 */
QueryPictureSearchJobResponse Client::queryPictureSearchJob(const QueryPictureSearchJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPictureSearchJobWithOptions(request, runtime);
}

/**
 * @summary Queries the image retrieval results of an integrated image search job.
 *
 * @param request QueryPictureSearchJobResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPictureSearchJobResultResponse
 */
QueryPictureSearchJobResultResponse Client::queryPictureSearchJobResultWithOptions(const QueryPictureSearchJobResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPictureSearchJobResult"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPictureSearchJobResultResponse>();
}

/**
 * @summary Queries the image retrieval results of an integrated image search job.
 *
 * @param request QueryPictureSearchJobResultRequest
 * @return QueryPictureSearchJobResultResponse
 */
QueryPictureSearchJobResultResponse Client::queryPictureSearchJobResult(const QueryPictureSearchJobResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPictureSearchJobResultWithOptions(request, runtime);
}

/**
 * @summary Queries the list of cloud video recordings.
 *
 * @description ## QPS limit
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 250.
 * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordResponse
 */
QueryRecordResponse Client::queryRecordWithOptions(const QueryRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasNeedSnapshot()) {
    query["NeedSnapshot"] = request.getNeedSnapshot();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasRecordType()) {
    query["RecordType"] = request.getRecordType();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecord"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordResponse>();
}

/**
 * @summary Queries the list of cloud video recordings.
 *
 * @description ## QPS limit
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 250.
 * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryRecordRequest
 * @return QueryRecordResponse
 */
QueryRecordResponse Client::queryRecord(const QueryRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the URL of a recording file by recording file ID.
 *
 * @param request QueryRecordByRecordIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordByRecordIdResponse
 */
QueryRecordByRecordIdResponse Client::queryRecordByRecordIdWithOptions(const QueryRecordByRecordIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordByRecordId"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordByRecordIdResponse>();
}

/**
 * @summary Queries the URL of a recording file by recording file ID.
 *
 * @param request QueryRecordByRecordIdRequest
 * @return QueryRecordByRecordIdResponse
 */
QueryRecordByRecordIdResponse Client::queryRecordByRecordId(const QueryRecordByRecordIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordByRecordIdWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a cloud record download task by task ID, including the start time, recording progress, recording type, and download URL.
 *
 * @description ## Limits
 * The obtained recording download URL is valid for 1 hour.
 * ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryRecordDownloadJobByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordDownloadJobByIdResponse
 */
QueryRecordDownloadJobByIdResponse Client::queryRecordDownloadJobByIdWithOptions(const QueryRecordDownloadJobByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordDownloadJobById"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordDownloadJobByIdResponse>();
}

/**
 * @summary Queries the details of a cloud record download task by task ID, including the start time, recording progress, recording type, and download URL.
 *
 * @description ## Limits
 * The obtained recording download URL is valid for 1 hour.
 * ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryRecordDownloadJobByIdRequest
 * @return QueryRecordDownloadJobByIdResponse
 */
QueryRecordDownloadJobByIdResponse Client::queryRecordDownloadJobById(const QueryRecordDownloadJobByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordDownloadJobByIdWithOptions(request, runtime);
}

/**
 * @summary Queries the list of cloud recording download tasks.
 *
 * @description ## Limits
 * The obtained recording download URL is valid for 1 hour.
 * ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
 * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryRecordDownloadJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordDownloadJobListResponse
 */
QueryRecordDownloadJobListResponse Client::queryRecordDownloadJobListWithOptions(const QueryRecordDownloadJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordDownloadJobList"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordDownloadJobListResponse>();
}

/**
 * @summary Queries the list of cloud recording download tasks.
 *
 * @description ## Limits
 * The obtained recording download URL is valid for 1 hour.
 * ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
 * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryRecordDownloadJobListRequest
 * @return QueryRecordDownloadJobListResponse
 */
QueryRecordDownloadJobListResponse Client::queryRecordDownloadJobList(const QueryRecordDownloadJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordDownloadJobListWithOptions(request, runtime);
}

/**
 * @summary Requests the download URL of a cloud recording file.
 *
 * @description ## Usage notes
 * Generating a cloud recording file takes a long time. You must poll this operation to obtain the progress. The download URL is generated only after the progress is complete.
 *
 * @param request QueryRecordDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordDownloadUrlResponse
 */
QueryRecordDownloadUrlResponse Client::queryRecordDownloadUrlWithOptions(const QueryRecordDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordDownloadUrl"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordDownloadUrlResponse>();
}

/**
 * @summary Requests the download URL of a cloud recording file.
 *
 * @description ## Usage notes
 * Generating a cloud recording file takes a long time. You must poll this operation to obtain the progress. The download URL is generated only after the progress is complete.
 *
 * @param request QueryRecordDownloadUrlRequest
 * @return QueryRecordDownloadUrlResponse
 */
QueryRecordDownloadUrlResponse Client::queryRecordDownloadUrl(const QueryRecordDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a recording plan.
 *
 * @param request QueryRecordPlanDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordPlanDetailResponse
 */
QueryRecordPlanDetailResponse Client::queryRecordPlanDetailWithOptions(const QueryRecordPlanDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordPlanDetail"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordPlanDetailResponse>();
}

/**
 * @summary Queries the details of a recording plan.
 *
 * @param request QueryRecordPlanDetailRequest
 * @return QueryRecordPlanDetailResponse
 */
QueryRecordPlanDetailResponse Client::queryRecordPlanDetail(const QueryRecordPlanDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordPlanDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the recording plan of a video device based on the device ID of the IP camera (IPC).
 *
 * @param request QueryRecordPlanDeviceByDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordPlanDeviceByDeviceResponse
 */
QueryRecordPlanDeviceByDeviceResponse Client::queryRecordPlanDeviceByDeviceWithOptions(const QueryRecordPlanDeviceByDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordPlanDeviceByDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordPlanDeviceByDeviceResponse>();
}

/**
 * @summary Queries the recording plan of a video device based on the device ID of the IP camera (IPC).
 *
 * @param request QueryRecordPlanDeviceByDeviceRequest
 * @return QueryRecordPlanDeviceByDeviceResponse
 */
QueryRecordPlanDeviceByDeviceResponse Client::queryRecordPlanDeviceByDevice(const QueryRecordPlanDeviceByDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordPlanDeviceByDeviceWithOptions(request, runtime);
}

/**
 * @summary Queries the devices associated with a recording plan.
 *
 * @param request QueryRecordPlanDeviceByPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordPlanDeviceByPlanResponse
 */
QueryRecordPlanDeviceByPlanResponse Client::queryRecordPlanDeviceByPlanWithOptions(const QueryRecordPlanDeviceByPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordPlanDeviceByPlan"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordPlanDeviceByPlanResponse>();
}

/**
 * @summary Queries the devices associated with a recording plan.
 *
 * @param request QueryRecordPlanDeviceByPlanRequest
 * @return QueryRecordPlanDeviceByPlanResponse
 */
QueryRecordPlanDeviceByPlanResponse Client::queryRecordPlanDeviceByPlan(const QueryRecordPlanDeviceByPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordPlanDeviceByPlanWithOptions(request, runtime);
}

/**
 * @summary Queries a list of recording plans.
 *
 * @param request QueryRecordPlansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordPlansResponse
 */
QueryRecordPlansResponse Client::queryRecordPlansWithOptions(const QueryRecordPlansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordPlans"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordPlansResponse>();
}

/**
 * @summary Queries a list of recording plans.
 *
 * @param request QueryRecordPlansRequest
 * @return QueryRecordPlansResponse
 */
QueryRecordPlansResponse Client::queryRecordPlans(const QueryRecordPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordPlansWithOptions(request, runtime);
}

/**
 * @summary Queries the playback URL of a cloud recording file.
 *
 * @param request QueryRecordUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordUrlResponse
 */
QueryRecordUrlResponse Client::queryRecordUrlWithOptions(const QueryRecordUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasSeekTime()) {
    query["SeekTime"] = request.getSeekTime();
  }

  if (!!request.hasUrlValidDuration()) {
    query["UrlValidDuration"] = request.getUrlValidDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordUrl"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordUrlResponse>();
}

/**
 * @summary Queries the playback URL of a cloud recording file.
 *
 * @param request QueryRecordUrlRequest
 * @return QueryRecordUrlResponse
 */
QueryRecordUrlResponse Client::queryRecordUrl(const QueryRecordUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves the playback URL for recording files within a specified time range.
 *
 * @param request QueryRecordUrlByTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordUrlByTimeResponse
 */
QueryRecordUrlByTimeResponse Client::queryRecordUrlByTimeWithOptions(const QueryRecordUrlByTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  if (!!request.hasUrlValidDuration()) {
    query["UrlValidDuration"] = request.getUrlValidDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordUrlByTime"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordUrlByTimeResponse>();
}

/**
 * @summary Retrieves the playback URL for recording files within a specified time range.
 *
 * @param request QueryRecordUrlByTimeRequest
 * @return QueryRecordUrlByTimeResponse
 */
QueryRecordUrlByTimeResponse Client::queryRecordUrlByTime(const QueryRecordUrlByTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordUrlByTimeWithOptions(request, runtime);
}

/**
 * @param request QueryRtmpKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRtmpKeyResponse
 */
QueryRtmpKeyResponse Client::queryRtmpKeyWithOptions(const QueryRtmpKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRtmpKey"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRtmpKeyResponse>();
}

/**
 * @param request QueryRtmpKeyRequest
 * @return QueryRtmpKeyResponse
 */
QueryRtmpKeyResponse Client::queryRtmpKey(const QueryRtmpKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRtmpKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a video stream push job, such as the creation time, current push status, job type, and push URL.
 *
 * @description ## QPS limit
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 50.
 * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryStreamPushJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryStreamPushJobResponse
 */
QueryStreamPushJobResponse Client::queryStreamPushJobWithOptions(const QueryStreamPushJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryStreamPushJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryStreamPushJobResponse>();
}

/**
 * @summary Queries the details of a video stream push job, such as the creation time, current push status, job type, and push URL.
 *
 * @description ## QPS limit
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 50.
 * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryStreamPushJobRequest
 * @return QueryStreamPushJobResponse
 */
QueryStreamPushJobResponse Client::queryStreamPushJob(const QueryStreamPushJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryStreamPushJobWithOptions(request, runtime);
}

/**
 * @summary Queries the list and details of video stream push jobs, including the creation time, current push status, job type, and push URL.
 *
 * @description ## QPS limit
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryStreamPushJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryStreamPushJobListResponse
 */
QueryStreamPushJobListResponse Client::queryStreamPushJobListWithOptions(const QueryStreamPushJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryStreamPushJobList"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryStreamPushJobListResponse>();
}

/**
 * @summary Queries the list and details of video stream push jobs, including the creation time, current push status, job type, and push URL.
 *
 * @description ## QPS limit
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryStreamPushJobListRequest
 * @return QueryStreamPushJobListResponse
 */
QueryStreamPushJobListResponse Client::queryStreamPushJobList(const QueryStreamPushJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryStreamPushJobListWithOptions(request, runtime);
}

/**
 * @summary Queries the list and details of cloud snapshot tasks, including the snapshot interval and stream type.
 *
 * @description ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryStreamSnapshotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryStreamSnapshotJobResponse
 */
QueryStreamSnapshotJobResponse Client::queryStreamSnapshotJobWithOptions(const QueryStreamSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryStreamSnapshotJob"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryStreamSnapshotJobResponse>();
}

/**
 * @summary Queries the list and details of cloud snapshot tasks, including the snapshot interval and stream type.
 *
 * @description ## QPS limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
 * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
 *
 * @param request QueryStreamSnapshotJobRequest
 * @return QueryStreamSnapshotJobResponse
 */
QueryStreamSnapshotJobResponse Client::queryStreamSnapshotJob(const QueryStreamSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryStreamSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary Queries the time template information of a device.
 *
 * @param request QueryTimeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTimeTemplateResponse
 */
QueryTimeTemplateResponse Client::queryTimeTemplateWithOptions(const QueryTimeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTimeTemplate"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTimeTemplateResponse>();
}

/**
 * @summary Queries the time template information of a device.
 *
 * @param request QueryTimeTemplateRequest
 * @return QueryTimeTemplateResponse
 */
QueryTimeTemplateResponse Client::queryTimeTemplate(const QueryTimeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTimeTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified time template.
 *
 * @param request QueryTimeTemplateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTimeTemplateDetailResponse
 */
QueryTimeTemplateDetailResponse Client::queryTimeTemplateDetailWithOptions(const QueryTimeTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTimeTemplateDetail"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTimeTemplateDetailResponse>();
}

/**
 * @summary Queries the details of a specified time template.
 *
 * @param request QueryTimeTemplateDetailRequest
 * @return QueryTimeTemplateDetailResponse
 */
QueryTimeTemplateDetailResponse Client::queryTimeTemplateDetail(const QueryTimeTemplateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTimeTemplateDetailWithOptions(request, runtime);
}

/**
 * @param request QueryVisionDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVisionDeviceInfoResponse
 */
QueryVisionDeviceInfoResponse Client::queryVisionDeviceInfoWithOptions(const QueryVisionDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVisionDeviceInfo"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVisionDeviceInfoResponse>();
}

/**
 * @param request QueryVisionDeviceInfoRequest
 * @return QueryVisionDeviceInfoResponse
 */
QueryVisionDeviceInfoResponse Client::queryVisionDeviceInfo(const QueryVisionDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVisionDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the voice intercom address of an IPC device.
 *
 * @param request QueryVoiceIntercomRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVoiceIntercomResponse
 */
QueryVoiceIntercomResponse Client::queryVoiceIntercomWithOptions(const QueryVoiceIntercomRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasScheme()) {
    query["Scheme"] = request.getScheme();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVoiceIntercom"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVoiceIntercomResponse>();
}

/**
 * @summary Retrieves the voice intercom address of an IPC device.
 *
 * @param request QueryVoiceIntercomRequest
 * @return QueryVoiceIntercomResponse
 */
QueryVoiceIntercomResponse Client::queryVoiceIntercom(const QueryVoiceIntercomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVoiceIntercomWithOptions(request, runtime);
}

/**
 * @param request RefreshGbSubDeviceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshGbSubDeviceListResponse
 */
RefreshGbSubDeviceListResponse Client::refreshGbSubDeviceListWithOptions(const RefreshGbSubDeviceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshGbSubDeviceList"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshGbSubDeviceListResponse>();
}

/**
 * @param request RefreshGbSubDeviceListRequest
 * @return RefreshGbSubDeviceListResponse
 */
RefreshGbSubDeviceListResponse Client::refreshGbSubDeviceList(const RefreshGbSubDeviceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshGbSubDeviceListWithOptions(request, runtime);
}

/**
 * @summary Removes a device from a device group.
 *
 * @param request RemoveFaceDeviceFromDeviceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveFaceDeviceFromDeviceGroupResponse
 */
RemoveFaceDeviceFromDeviceGroupResponse Client::removeFaceDeviceFromDeviceGroupWithOptions(const RemoveFaceDeviceFromDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceGroupId()) {
    query["DeviceGroupId"] = request.getDeviceGroupId();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveFaceDeviceFromDeviceGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveFaceDeviceFromDeviceGroupResponse>();
}

/**
 * @summary Removes a device from a device group.
 *
 * @param request RemoveFaceDeviceFromDeviceGroupRequest
 * @return RemoveFaceDeviceFromDeviceGroupResponse
 */
RemoveFaceDeviceFromDeviceGroupResponse Client::removeFaceDeviceFromDeviceGroup(const RemoveFaceDeviceFromDeviceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeFaceDeviceFromDeviceGroupWithOptions(request, runtime);
}

/**
 * @summary Removes a user from a user group.
 *
 * @param request RemoveFaceUserFromUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveFaceUserFromUserGroupResponse
 */
RemoveFaceUserFromUserGroupResponse Client::removeFaceUserFromUserGroupWithOptions(const RemoveFaceUserFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveFaceUserFromUserGroup"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveFaceUserFromUserGroupResponse>();
}

/**
 * @summary Removes a user from a user group.
 *
 * @param request RemoveFaceUserFromUserGroupRequest
 * @return RemoveFaceUserFromUserGroupResponse
 */
RemoveFaceUserFromUserGroupResponse Client::removeFaceUserFromUserGroup(const RemoveFaceUserFromUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeFaceUserFromUserGroupWithOptions(request, runtime);
}

/**
 * @summary Sets the cloud storage image lifecycle for an IPC device.
 *
 * @description > By default, images are permanently stored in the cloud before you configure the cloud storage image lifecycle.
 *
 * @param request SetDevicePictureLifeCycleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDevicePictureLifeCycleResponse
 */
SetDevicePictureLifeCycleResponse Client::setDevicePictureLifeCycleWithOptions(const SetDevicePictureLifeCycleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDay()) {
    query["Day"] = request.getDay();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDevicePictureLifeCycle"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDevicePictureLifeCycleResponse>();
}

/**
 * @summary Sets the cloud storage image lifecycle for an IPC device.
 *
 * @description > By default, images are permanently stored in the cloud before you configure the cloud storage image lifecycle.
 *
 * @param request SetDevicePictureLifeCycleRequest
 * @return SetDevicePictureLifeCycleResponse
 */
SetDevicePictureLifeCycleResponse Client::setDevicePictureLifeCycle(const SetDevicePictureLifeCycleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDevicePictureLifeCycleWithOptions(request, runtime);
}

/**
 * @summary Sets the recording lifecycle of an IPC device, which specifies the number of days that recording files are stored in the cloud.
 *
 * @param request SetDeviceRecordLifeCycleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDeviceRecordLifeCycleResponse
 */
SetDeviceRecordLifeCycleResponse Client::setDeviceRecordLifeCycleWithOptions(const SetDeviceRecordLifeCycleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDay()) {
    query["Day"] = request.getDay();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDeviceRecordLifeCycle"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDeviceRecordLifeCycleResponse>();
}

/**
 * @summary Sets the recording lifecycle of an IPC device, which specifies the number of days that recording files are stored in the cloud.
 *
 * @param request SetDeviceRecordLifeCycleRequest
 * @return SetDeviceRecordLifeCycleResponse
 */
SetDeviceRecordLifeCycleResponse Client::setDeviceRecordLifeCycle(const SetDeviceRecordLifeCycleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDeviceRecordLifeCycleWithOptions(request, runtime);
}

/**
 * @summary Stops the live streaming of an IPC device.
 *
 * @description ## Usage notes
 * - Before you invoke this operation, you must implement the Thing Specification Language (TSL) model service for stopping live streaming with the identity **StopPushStreaming** on the IPC device. If this service is not implemented on the IPC device, or the IPC device does not return a normal response after receiving the service invocation, the IPC device will not stop pushing the stream. For more information about TSL models, see [What is a TSL model](https://help.aliyun.com/document_detail/73727.html).
 * - If no one is watching the stream on the IPC device, you do not need to invoke this operation. IoT Platform automatically triggers the device to stop pushing the stream.
 * - During the procedure of triggering a video recording event, invoking this operation causes interruptions to the video file. Use this operation with caution.
 *
 * @param request StopLiveStreamingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopLiveStreamingResponse
 */
StopLiveStreamingResponse Client::stopLiveStreamingWithOptions(const StopLiveStreamingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopLiveStreaming"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopLiveStreamingResponse>();
}

/**
 * @summary Stops the live streaming of an IPC device.
 *
 * @description ## Usage notes
 * - Before you invoke this operation, you must implement the Thing Specification Language (TSL) model service for stopping live streaming with the identity **StopPushStreaming** on the IPC device. If this service is not implemented on the IPC device, or the IPC device does not return a normal response after receiving the service invocation, the IPC device will not stop pushing the stream. For more information about TSL models, see [What is a TSL model](https://help.aliyun.com/document_detail/73727.html).
 * - If no one is watching the stream on the IPC device, you do not need to invoke this operation. IoT Platform automatically triggers the device to stop pushing the stream.
 * - During the procedure of triggering a video recording event, invoking this operation causes interruptions to the video file. Use this operation with caution.
 *
 * @param request StopLiveStreamingRequest
 * @return StopLiveStreamingResponse
 */
StopLiveStreamingResponse Client::stopLiveStreaming(const StopLiveStreamingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopLiveStreamingWithOptions(request, runtime);
}

/**
 * @summary Stops an IP camera from actively triggering video recording.
 *
 * @param request StopTriggeredRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTriggeredRecordResponse
 */
StopTriggeredRecordResponse Client::stopTriggeredRecordWithOptions(const StopTriggeredRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTriggeredRecord"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTriggeredRecordResponse>();
}

/**
 * @summary Stops an IP camera from actively triggering video recording.
 *
 * @param request StopTriggeredRecordRequest
 * @return StopTriggeredRecordResponse
 */
StopTriggeredRecordResponse Client::stopTriggeredRecord(const StopTriggeredRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopTriggeredRecordWithOptions(request, runtime);
}

/**
 * @summary Transfers devices to another instance.
 *
 * @description Before you call this operation to transfer devices to another instance, contact technical support to evaluate the migration plan and prevent features from becoming unavailable after the migration.
 * **Before you begin**
 * - The devices to be transferred have the video service feature enabled.
 *     - Devices in the Enterprise instance: Log on to the IoT Platform console and click **Enterprise instance**. In the left-side navigation pane, choose **Video Service** > **Access Service**. On the **Access Service** page, click the **Product Management** tab. Check the product to which the device to be transferred belongs, and make sure that the **Enabled/Disabled Status** column displays **Enabled**.
 *     - Devices in an Enterprise Edition instance: The video service is enabled.
 * - The device distribution task is complete. For more information, see [CreateDeviceDistributeJob](https://help.aliyun.com/document_detail/199390.html) or [Device distribution](https://help.aliyun.com/document_detail/143450.html).
 * - Make sure that a picture lifecycle is configured for camera devices. If no picture lifecycle is configured for a camera device, calling this operation automatically sets the picture lifecycle to 180 days. For more information, see [SetDevicePictureLifeCycle](https://help.aliyun.com/document_detail/107880.html).
 * **Background information**
 * - If the source instance and target instance are of different types, review the Billable methods of the instances before the migration. For more information about Billable methods, see [Billing overview](https://help.aliyun.com/document_detail/124250.html).
 * - During the migration, devices go offline. The more devices you migrate, the longer the migration takes. Data generated by the devices during this period cannot be retained.
 *
 * @param request TransferDeviceInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferDeviceInstanceResponse
 */
TransferDeviceInstanceResponse Client::transferDeviceInstanceWithOptions(const TransferDeviceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceNameList()) {
    query["DeviceNameList"] = request.getDeviceNameList();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasTargetInstanceId()) {
    query["TargetInstanceId"] = request.getTargetInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferDeviceInstance"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferDeviceInstanceResponse>();
}

/**
 * @summary Transfers devices to another instance.
 *
 * @description Before you call this operation to transfer devices to another instance, contact technical support to evaluate the migration plan and prevent features from becoming unavailable after the migration.
 * **Before you begin**
 * - The devices to be transferred have the video service feature enabled.
 *     - Devices in the Enterprise instance: Log on to the IoT Platform console and click **Enterprise instance**. In the left-side navigation pane, choose **Video Service** > **Access Service**. On the **Access Service** page, click the **Product Management** tab. Check the product to which the device to be transferred belongs, and make sure that the **Enabled/Disabled Status** column displays **Enabled**.
 *     - Devices in an Enterprise Edition instance: The video service is enabled.
 * - The device distribution task is complete. For more information, see [CreateDeviceDistributeJob](https://help.aliyun.com/document_detail/199390.html) or [Device distribution](https://help.aliyun.com/document_detail/143450.html).
 * - Make sure that a picture lifecycle is configured for camera devices. If no picture lifecycle is configured for a camera device, calling this operation automatically sets the picture lifecycle to 180 days. For more information, see [SetDevicePictureLifeCycle](https://help.aliyun.com/document_detail/107880.html).
 * **Background information**
 * - If the source instance and target instance are of different types, review the Billable methods of the instances before the migration. For more information about Billable methods, see [Billing overview](https://help.aliyun.com/document_detail/124250.html).
 * - During the migration, devices go offline. The more devices you migrate, the longer the migration takes. Data generated by the devices during this period cannot be retained.
 *
 * @param request TransferDeviceInstanceRequest
 * @return TransferDeviceInstanceResponse
 */
TransferDeviceInstanceResponse Client::transferDeviceInstance(const TransferDeviceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferDeviceInstanceWithOptions(request, runtime);
}

/**
 * @summary Triggers an IPC device to capture an image and upload it to the cloud.
 *
 * @param request TriggerCapturePictureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerCapturePictureResponse
 */
TriggerCapturePictureResponse Client::triggerCapturePictureWithOptions(const TriggerCapturePictureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TriggerCapturePicture"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerCapturePictureResponse>();
}

/**
 * @summary Triggers an IPC device to capture an image and upload it to the cloud.
 *
 * @param request TriggerCapturePictureRequest
 * @return TriggerCapturePictureResponse
 */
TriggerCapturePictureResponse Client::triggerCapturePicture(const TriggerCapturePictureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return triggerCapturePictureWithOptions(request, runtime);
}

/**
 * @summary Triggers the specified IPC device to start recording and uploads the recording file to the cloud.
 *
 * @param request TriggerRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerRecordResponse
 */
TriggerRecordResponse Client::triggerRecordWithOptions(const TriggerRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPreRecordDuration()) {
    query["PreRecordDuration"] = request.getPreRecordDuration();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasRecordDuration()) {
    query["RecordDuration"] = request.getRecordDuration();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TriggerRecord"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerRecordResponse>();
}

/**
 * @summary Triggers the specified IPC device to start recording and uploads the recording file to the cloud.
 *
 * @param request TriggerRecordRequest
 * @return TriggerRecordResponse
 */
TriggerRecordResponse Client::triggerRecord(const TriggerRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return triggerRecordWithOptions(request, runtime);
}

/**
 * @summary Dissociates multiple devices from an image search application instance.
 *
 * @description ## Limits
 * If you invoke this operation on an Enterprise instance, you must specify the **IotInstanceId** request parameter. Otherwise, the call is failed.
 *
 * @param request UnbindPictureSearchAppWithDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindPictureSearchAppWithDevicesResponse
 */
UnbindPictureSearchAppWithDevicesResponse Client::unbindPictureSearchAppWithDevicesWithOptions(const UnbindPictureSearchAppWithDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasDeviceIotIds()) {
    query["DeviceIotIds"] = request.getDeviceIotIds();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindPictureSearchAppWithDevices"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindPictureSearchAppWithDevicesResponse>();
}

/**
 * @summary Dissociates multiple devices from an image search application instance.
 *
 * @description ## Limits
 * If you invoke this operation on an Enterprise instance, you must specify the **IotInstanceId** request parameter. Otherwise, the call is failed.
 *
 * @param request UnbindPictureSearchAppWithDevicesRequest
 * @return UnbindPictureSearchAppWithDevicesResponse
 */
UnbindPictureSearchAppWithDevicesResponse Client::unbindPictureSearchAppWithDevices(const UnbindPictureSearchAppWithDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindPictureSearchAppWithDevicesWithOptions(request, runtime);
}

/**
 * @summary Updates the video recording plan for intelligent alert events.
 *
 * @param request UpdateEventRecordPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEventRecordPlanResponse
 */
UpdateEventRecordPlanResponse Client::updateEventRecordPlanWithOptions(const UpdateEventRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventTypes()) {
    query["EventTypes"] = request.getEventTypes();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  if (!!request.hasPreRecordDuration()) {
    query["PreRecordDuration"] = request.getPreRecordDuration();
  }

  if (!!request.hasRecordDuration()) {
    query["RecordDuration"] = request.getRecordDuration();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEventRecordPlan"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEventRecordPlanResponse>();
}

/**
 * @summary Updates the video recording plan for intelligent alert events.
 *
 * @param request UpdateEventRecordPlanRequest
 * @return UpdateEventRecordPlanResponse
 */
UpdateEventRecordPlanResponse Client::updateEventRecordPlan(const UpdateEventRecordPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEventRecordPlanWithOptions(request, runtime);
}

/**
 * @summary Updates user information.
 *
 * @param request UpdateFaceUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFaceUserResponse
 */
UpdateFaceUserResponse Client::updateFaceUserWithOptions(const UpdateFaceUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomUserId()) {
    query["CustomUserId"] = request.getCustomUserId();
  }

  if (!!request.hasFacePicUrl()) {
    query["FacePicUrl"] = request.getFacePicUrl();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFaceUser"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFaceUserResponse>();
}

/**
 * @summary Updates user information.
 *
 * @param request UpdateFaceUserRequest
 * @return UpdateFaceUserResponse
 */
UpdateFaceUserResponse Client::updateFaceUser(const UpdateFaceUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFaceUserWithOptions(request, runtime);
}

/**
 * @summary Updates the face synchronization relationship between a user group and a device group.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request UpdateFaceUserGroupAndDeviceGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFaceUserGroupAndDeviceGroupRelationResponse
 */
UpdateFaceUserGroupAndDeviceGroupRelationResponse Client::updateFaceUserGroupAndDeviceGroupRelationWithOptions(const UpdateFaceUserGroupAndDeviceGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasControlId()) {
    query["ControlId"] = request.getControlId();
  }

  if (!!request.hasIsolationId()) {
    query["IsolationId"] = request.getIsolationId();
  }

  if (!!request.hasRelation()) {
    query["Relation"] = request.getRelation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFaceUserGroupAndDeviceGroupRelation"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFaceUserGroupAndDeviceGroupRelationResponse>();
}

/**
 * @summary Updates the face synchronization relationship between a user group and a device group.
 *
 * @description ## Limits
 * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
 *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
 *
 * @param request UpdateFaceUserGroupAndDeviceGroupRelationRequest
 * @return UpdateFaceUserGroupAndDeviceGroupRelationResponse
 */
UpdateFaceUserGroupAndDeviceGroupRelationResponse Client::updateFaceUserGroupAndDeviceGroupRelation(const UpdateFaceUserGroupAndDeviceGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFaceUserGroupAndDeviceGroupRelationWithOptions(request, runtime);
}

/**
 * @param request UpdateGbDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGbDeviceResponse
 */
UpdateGbDeviceResponse Client::updateGbDeviceWithOptions(const UpdateGbDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasGbId()) {
    query["GbId"] = request.getGbId();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGbDevice"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGbDeviceResponse>();
}

/**
 * @param request UpdateGbDeviceRequest
 * @return UpdateGbDeviceResponse
 */
UpdateGbDeviceResponse Client::updateGbDevice(const UpdateGbDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGbDeviceWithOptions(request, runtime);
}

/**
 * @summary Sets the IP protocol version supported by an instance.
 *
 * @param request UpdateInstanceInternetProtocolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceInternetProtocolResponse
 */
UpdateInstanceInternetProtocolResponse Client::updateInstanceInternetProtocolWithOptions(const UpdateInstanceInternetProtocolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceInternetProtocol"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceInternetProtocolResponse>();
}

/**
 * @summary Sets the IP protocol version supported by an instance.
 *
 * @param request UpdateInstanceInternetProtocolRequest
 * @return UpdateInstanceInternetProtocolResponse
 */
UpdateInstanceInternetProtocolResponse Client::updateInstanceInternetProtocol(const UpdateInstanceInternetProtocolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceInternetProtocolWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of an image search application instance.
 *
 * @param request UpdatePictureSearchAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePictureSearchAppResponse
 */
UpdatePictureSearchAppResponse Client::updatePictureSearchAppWithOptions(const UpdatePictureSearchAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePictureSearchApp"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePictureSearchAppResponse>();
}

/**
 * @summary Modifies the information of an image search application instance.
 *
 * @param request UpdatePictureSearchAppRequest
 * @return UpdatePictureSearchAppResponse
 */
UpdatePictureSearchAppResponse Client::updatePictureSearchApp(const UpdatePictureSearchAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePictureSearchAppWithOptions(request, runtime);
}

/**
 * @summary Updates a recording plan.
 *
 * @param request UpdateRecordPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecordPlanResponse
 */
UpdateRecordPlanResponse Client::updateRecordPlanWithOptions(const UpdateRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.getPlanId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecordPlan"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecordPlanResponse>();
}

/**
 * @summary Updates a recording plan.
 *
 * @param request UpdateRecordPlanRequest
 * @return UpdateRecordPlanResponse
 */
UpdateRecordPlanResponse Client::updateRecordPlan(const UpdateRecordPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecordPlanWithOptions(request, runtime);
}

/**
 * @param request UpdateRtmpKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRtmpKeyResponse
 */
UpdateRtmpKeyResponse Client::updateRtmpKeyWithOptions(const UpdateRtmpKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasIotId()) {
    query["IotId"] = request.getIotId();
  }

  if (!!request.hasIotInstanceId()) {
    query["IotInstanceId"] = request.getIotInstanceId();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  if (!!request.hasPullAuthKey()) {
    query["PullAuthKey"] = request.getPullAuthKey();
  }

  if (!!request.hasPullKeyExpireTime()) {
    query["PullKeyExpireTime"] = request.getPullKeyExpireTime();
  }

  if (!!request.hasPushAuthKey()) {
    query["PushAuthKey"] = request.getPushAuthKey();
  }

  if (!!request.hasPushKeyExpireTime()) {
    query["PushKeyExpireTime"] = request.getPushKeyExpireTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRtmpKey"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRtmpKeyResponse>();
}

/**
 * @param request UpdateRtmpKeyRequest
 * @return UpdateRtmpKeyResponse
 */
UpdateRtmpKeyResponse Client::updateRtmpKey(const UpdateRtmpKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRtmpKeyWithOptions(request, runtime);
}

/**
 * @summary Updates a time template.
 *
 * @param request UpdateTimeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTimeTemplateResponse
 */
UpdateTimeTemplateResponse Client::updateTimeTemplateWithOptions(const UpdateTimeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllDay()) {
    query["AllDay"] = request.getAllDay();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTimeSections()) {
    query["TimeSections"] = request.getTimeSections();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTimeTemplate"},
    {"version" , "2018-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTimeTemplateResponse>();
}

/**
 * @summary Updates a time template.
 *
 * @param request UpdateTimeTemplateRequest
 * @return UpdateTimeTemplateResponse
 */
UpdateTimeTemplateResponse Client::updateTimeTemplate(const UpdateTimeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTimeTemplateWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Linkvisual20180120