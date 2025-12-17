#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210901.hpp>
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
using namespace AlibabaCloud::AppstreamCenter20210901::Models;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{

AlibabaCloud::AppstreamCenter20210901::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("appstream-center", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Sets the execution time of an over-the-air (OTA) update task.
 *
 * @param request ApproveOtaTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveOtaTaskResponse
 */
ApproveOtaTaskResponse Client::approveOtaTaskWithOptions(const ApproveOtaTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasOtaType()) {
    body["OtaType"] = request.otaType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ApproveOtaTask"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApproveOtaTaskResponse>();
}

/**
 * @summary Sets the execution time of an over-the-air (OTA) update task.
 *
 * @param request ApproveOtaTaskRequest
 * @return ApproveOtaTaskResponse
 */
ApproveOtaTaskResponse Client::approveOtaTask(const ApproveOtaTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveOtaTaskWithOptions(request, runtime);
}

/**
 * @summary 授权用户
 *
 * @param tmpReq AuthorizeInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeInstanceGroupResponse
 */
AuthorizeInstanceGroupResponse Client::authorizeInstanceGroupWithOptions(const AuthorizeInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AuthorizeInstanceGroupShrinkRequest request = AuthorizeInstanceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserMeta()) {
    request.setUserMetaShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userMeta(), "UserMeta", "json"));
  }

  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAppInstancePersistentId()) {
    body["AppInstancePersistentId"] = request.appInstancePersistentId();
  }

  json bodyFlat = {};
  if (!!request.hasAuthorizeUserGroupIds()) {
    bodyFlat["AuthorizeUserGroupIds"] = request.authorizeUserGroupIds();
  }

  if (!!request.hasAuthorizeUserIds()) {
    bodyFlat["AuthorizeUserIds"] = request.authorizeUserIds();
  }

  if (!!request.hasAvatarId()) {
    body["AvatarId"] = request.avatarId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasUnAuthorizeUserGroupIds()) {
    bodyFlat["UnAuthorizeUserGroupIds"] = request.unAuthorizeUserGroupIds();
  }

  if (!!request.hasUnAuthorizeUserIds()) {
    bodyFlat["UnAuthorizeUserIds"] = request.unAuthorizeUserIds();
  }

  if (!!request.hasUserMetaShrink()) {
    body["UserMeta"] = request.userMetaShrink();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AuthorizeInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeInstanceGroupResponse>();
}

/**
 * @summary 授权用户
 *
 * @param request AuthorizeInstanceGroupRequest
 * @return AuthorizeInstanceGroupResponse
 */
AuthorizeInstanceGroupResponse Client::authorizeInstanceGroup(const AuthorizeInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a delivery group.
 *
 * @description Before you call this operation, make sure that you fully understand the [billing methods and prices](https://help.aliyun.com/document_detail/426039.html) of App Streaming.
 * A delivery group is a logical group that is used to deliver cloud applications to end users, including the images, resource management policies, and user groups on which the cloud applications rely. For more information, see [Publish delivery groups](https://help.aliyun.com/document_detail/426046.html).
 *
 * @param tmpReq CreateAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInstanceGroupResponse
 */
CreateAppInstanceGroupResponse Client::createAppInstanceGroupWithOptions(const CreateAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppInstanceGroupShrinkRequest request = CreateAppInstanceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetwork()) {
    request.setNetworkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.network(), "Network", "json"));
  }

  if (!!tmpReq.hasNodePool()) {
    request.setNodePoolShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodePool(), "NodePool", "json"));
  }

  if (!!tmpReq.hasRuntimePolicy()) {
    request.setRuntimePolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.runtimePolicy(), "RuntimePolicy", "json"));
  }

  if (!!tmpReq.hasSecurityPolicy()) {
    request.setSecurityPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.securityPolicy(), "SecurityPolicy", "json"));
  }

  if (!!tmpReq.hasStoragePolicy()) {
    request.setStoragePolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.storagePolicy(), "StoragePolicy", "json"));
  }

  if (!!tmpReq.hasUserDefinePolicy()) {
    request.setUserDefinePolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userDefinePolicy(), "UserDefinePolicy", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  if (!!tmpReq.hasVideoPolicy()) {
    request.setVideoPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoPolicy(), "VideoPolicy", "json"));
  }

  json query = {};
  if (!!request.hasUserDefinePolicyShrink()) {
    query["UserDefinePolicy"] = request.userDefinePolicyShrink();
  }

  json body = {};
  if (!!request.hasAppCenterImageId()) {
    body["AppCenterImageId"] = request.appCenterImageId();
  }

  if (!!request.hasAppInstanceGroupName()) {
    body["AppInstanceGroupName"] = request.appInstanceGroupName();
  }

  if (!!request.hasAppPackageType()) {
    body["AppPackageType"] = request.appPackageType();
  }

  if (!!request.hasAppPolicyId()) {
    body["AppPolicyId"] = request.appPolicyId();
  }

  if (!!request.hasAuthMode()) {
    body["AuthMode"] = request.authMode();
  }

  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.autoPay();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasChargeResourceMode()) {
    body["ChargeResourceMode"] = request.chargeResourceMode();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.chargeType();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNetworkShrink()) {
    body["Network"] = request.networkShrink();
  }

  if (!!request.hasNodePoolShrink()) {
    body["NodePool"] = request.nodePoolShrink();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.period();
  }

  if (!!request.hasPeriodUnit()) {
    body["PeriodUnit"] = request.periodUnit();
  }

  if (!!request.hasPreOpenAppId()) {
    body["PreOpenAppId"] = request.preOpenAppId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasPromotionId()) {
    body["PromotionId"] = request.promotionId();
  }

  if (!!request.hasRuntimePolicyShrink()) {
    body["RuntimePolicy"] = request.runtimePolicyShrink();
  }

  if (!!request.hasSecurityPolicyShrink()) {
    body["SecurityPolicy"] = request.securityPolicyShrink();
  }

  if (!!request.hasSessionTimeout()) {
    body["SessionTimeout"] = request.sessionTimeout();
  }

  if (!!request.hasStoragePolicyShrink()) {
    body["StoragePolicy"] = request.storagePolicyShrink();
  }

  if (!!request.hasSubPayType()) {
    body["SubPayType"] = request.subPayType();
  }

  if (!!request.hasUserGroupIds()) {
    body["UserGroupIds"] = request.userGroupIds();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.userInfoShrink();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.users();
  }

  if (!!request.hasVideoPolicyShrink()) {
    body["VideoPolicy"] = request.videoPolicyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppInstanceGroupResponse>();
}

/**
 * @summary Creates a delivery group.
 *
 * @description Before you call this operation, make sure that you fully understand the [billing methods and prices](https://help.aliyun.com/document_detail/426039.html) of App Streaming.
 * A delivery group is a logical group that is used to deliver cloud applications to end users, including the images, resource management policies, and user groups on which the cloud applications rely. For more information, see [Publish delivery groups](https://help.aliyun.com/document_detail/426046.html).
 *
 * @param request CreateAppInstanceGroupRequest
 * @return CreateAppInstanceGroupResponse
 */
CreateAppInstanceGroupResponse Client::createAppInstanceGroup(const CreateAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Create a custom image from a deployed instance. This allows you to quickly create more instances with the same configurations and avoid repeatedly configuring the instance environment each time you create the instance.
 *
 * @param request CreateImageByInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageByInstanceResponse
 */
CreateImageByInstanceResponse Client::createImageByInstanceWithOptions(const CreateImageByInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoCleanUserdata()) {
    body["AutoCleanUserdata"] = request.autoCleanUserdata();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDiskType()) {
    body["DiskType"] = request.diskType();
  }

  if (!!request.hasImageName()) {
    body["ImageName"] = request.imageName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasSubInstanceId()) {
    body["SubInstanceId"] = request.subInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateImageByInstance"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageByInstanceResponse>();
}

/**
 * @summary Create a custom image from a deployed instance. This allows you to quickly create more instances with the same configurations and avoid repeatedly configuring the instance environment each time you create the instance.
 *
 * @param request CreateImageByInstanceRequest
 * @return CreateImageByInstanceResponse
 */
CreateImageByInstanceResponse Client::createImageByInstance(const CreateImageByInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageByInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a new image by debugging the delivery group.
 *
 * @param request CreateImageFromAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageFromAppInstanceGroupResponse
 */
CreateImageFromAppInstanceGroupResponse Client::createImageFromAppInstanceGroupWithOptions(const CreateImageFromAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppCenterImageName()) {
    body["AppCenterImageName"] = request.appCenterImageName();
  }

  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateImageFromAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageFromAppInstanceGroupResponse>();
}

/**
 * @summary Creates a new image by debugging the delivery group.
 *
 * @param request CreateImageFromAppInstanceGroupRequest
 * @return CreateImageFromAppInstanceGroupResponse
 */
CreateImageFromAppInstanceGroupResponse Client::createImageFromAppInstanceGroup(const CreateImageFromAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageFromAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Create one or more workstations.
 *
 * @description 1.  Project is equivalent to the Resource Configuration module of the Cloud Flow console
 * 2.  If there are multiple versions behind the input parameter ContentId:
 *     **
 *     **Note** The default version is used.
 *     Bind simultaneously
 * 3.  You can call the current interface only if the default version of Content is available.
 *
 * @param request CreateWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWuyingServerResponse
 */
CreateWuyingServerResponse Client::createWuyingServerWithOptions(const CreateWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAmount()) {
    body["Amount"] = request.amount();
  }

  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.autoPay();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasBandwidth()) {
    body["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.chargeType();
  }

  json bodyFlat = {};
  if (!!request.hasDataDisk()) {
    bodyFlat["DataDisk"] = request.dataDisk();
  }

  if (!!request.hasHostName()) {
    body["HostName"] = request.hostName();
  }

  if (!!request.hasIdempotenceToken()) {
    body["IdempotenceToken"] = request.idempotenceToken();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  if (!!request.hasNetworkStrategyType()) {
    body["NetworkStrategyType"] = request.networkStrategyType();
  }

  if (!!request.hasOfficeSiteId()) {
    body["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.password();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.period();
  }

  if (!!request.hasPeriodUnit()) {
    body["PeriodUnit"] = request.periodUnit();
  }

  if (!!request.hasPromotionId()) {
    body["PromotionId"] = request.promotionId();
  }

  if (!!request.hasSavingPlanId()) {
    body["SavingPlanId"] = request.savingPlanId();
  }

  if (!!request.hasServerInstanceType()) {
    body["ServerInstanceType"] = request.serverInstanceType();
  }

  if (!!request.hasServerPortRange()) {
    body["ServerPortRange"] = request.serverPortRange();
  }

  if (!!request.hasSystemDiskCategory()) {
    body["SystemDiskCategory"] = request.systemDiskCategory();
  }

  if (!!request.hasSystemDiskPerformanceLevel()) {
    body["SystemDiskPerformanceLevel"] = request.systemDiskPerformanceLevel();
  }

  if (!!request.hasSystemDiskSize()) {
    body["SystemDiskSize"] = request.systemDiskSize();
  }

  if (!!request.hasVSwitchIds()) {
    body["VSwitchIds"] = request.vSwitchIds();
  }

  if (!!request.hasVirtualNodePoolId()) {
    body["VirtualNodePoolId"] = request.virtualNodePoolId();
  }

  if (!!request.hasWuyingServerName()) {
    body["WuyingServerName"] = request.wuyingServerName();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWuyingServerResponse>();
}

/**
 * @summary Create one or more workstations.
 *
 * @description 1.  Project is equivalent to the Resource Configuration module of the Cloud Flow console
 * 2.  If there are multiple versions behind the input parameter ContentId:
 *     **
 *     **Note** The default version is used.
 *     Bind simultaneously
 * 3.  You can call the current interface only if the default version of Content is available.
 *
 * @param request CreateWuyingServerRequest
 * @return CreateWuyingServerResponse
 */
CreateWuyingServerResponse Client::createWuyingServer(const CreateWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Deletes a delivery group that uses the By Resource - Pay-as-you-go billing method.
 *
 * @description >  You cannot call this operation to delete a subscription delivery group.
 *
 * @param request DeleteAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppInstanceGroupResponse
 */
DeleteAppInstanceGroupResponse Client::deleteAppInstanceGroupWithOptions(const DeleteAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppInstanceGroupResponse>();
}

/**
 * @summary Deletes a delivery group that uses the By Resource - Pay-as-you-go billing method.
 *
 * @description >  You cannot call this operation to delete a subscription delivery group.
 *
 * @param request DeleteAppInstanceGroupRequest
 * @return DeleteAppInstanceGroupResponse
 */
DeleteAppInstanceGroupResponse Client::deleteAppInstanceGroup(const DeleteAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an application instance.
 *
 * @description Only application instances that are in the Initializing or Idle state can be deleted. The operation can be called only by specific customers.
 *
 * @param request DeleteAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppInstancesResponse
 */
DeleteAppInstancesResponse Client::deleteAppInstancesWithOptions(const DeleteAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAppInstanceIds()) {
    body["AppInstanceIds"] = request.appInstanceIds();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAppInstances"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppInstancesResponse>();
}

/**
 * @summary Deletes an application instance.
 *
 * @description Only application instances that are in the Initializing or Idle state can be deleted. The operation can be called only by specific customers.
 *
 * @param request DeleteAppInstancesRequest
 * @return DeleteAppInstancesResponse
 */
DeleteAppInstancesResponse Client::deleteAppInstances(const DeleteAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInstancesWithOptions(request, runtime);
}

/**
 * @summary Delete a custom RDS image
 *
 * @description *   You can only delete custom images to which a user belongs.
 * *   If the product line is an image of the RDS cloud computer pool, RDS cloud application, and RDS workstation, make sure that no RDS instances use the image before you delete it.
 * *   The RDS CloudDesktop template references an image. When you delete an image, the template is also deleted.
 * *   If the image contains multiple regions, the images in all regions are deleted when the image is deleted.
 *
 * @param request DeleteImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImageWithOptions(const DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteImage"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteImageResponse>();
}

/**
 * @summary Delete a custom RDS image
 *
 * @description *   You can only delete custom images to which a user belongs.
 * *   If the product line is an image of the RDS cloud computer pool, RDS cloud application, and RDS workstation, make sure that no RDS instances use the image before you delete it.
 * *   The RDS CloudDesktop template references an image. When you delete an image, the template is also deleted.
 * *   If the image contains multiple regions, the images in all regions are deleted when the image is deleted.
 *
 * @param request DeleteImageRequest
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImage(const DeleteImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImageWithOptions(request, runtime);
}

/**
 * @summary 删除工作站
 *
 * @description Deletes a workstation.
 *
 * @param request DeleteWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWuyingServerResponse
 */
DeleteWuyingServerResponse Client::deleteWuyingServerWithOptions(const DeleteWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.wuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWuyingServerResponse>();
}

/**
 * @summary 删除工作站
 *
 * @description Deletes a workstation.
 *
 * @param request DeleteWuyingServerRequest
 * @return DeleteWuyingServerResponse
 */
DeleteWuyingServerResponse Client::deleteWuyingServer(const DeleteWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Queries the Elastic IP Addresses (EIPs) of workstations.
 *
 * @param request DescribeWuyingServerEipInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWuyingServerEipInfoResponse
 */
DescribeWuyingServerEipInfoResponse Client::describeWuyingServerEipInfoWithOptions(const DescribeWuyingServerEipInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsp()) {
    body["Isp"] = request.isp();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.wuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeWuyingServerEipInfo"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWuyingServerEipInfoResponse>();
}

/**
 * @summary Queries the Elastic IP Addresses (EIPs) of workstations.
 *
 * @param request DescribeWuyingServerEipInfoRequest
 * @return DescribeWuyingServerEipInfoResponse
 */
DescribeWuyingServerEipInfoResponse Client::describeWuyingServerEipInfo(const DescribeWuyingServerEipInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWuyingServerEipInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a delivery group.
 *
 * @param request GetAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppInstanceGroupResponse
 */
GetAppInstanceGroupResponse Client::getAppInstanceGroupWithOptions(const GetAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppInstanceGroupResponse>();
}

/**
 * @summary Queries the details of a delivery group.
 *
 * @param request GetAppInstanceGroupRequest
 * @return GetAppInstanceGroupResponse
 */
GetAppInstanceGroupResponse Client::getAppInstanceGroup(const GetAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the credential that is used to connect to App Streaming.
 *
 * @description You must call this operation at least twice to obtain a connection credential.
 * The first time you call this operation, the system assigns an application instance to the specified convenience account and then starts the application. In this case, the ID of the started task, which is indicated by `TaskID`, is returned.
 * In subsequent calls, you must configure `TaskID` to query whether the task is completed. If the value of `TaskStatus` in the response is `Finished`, the connection credential, which is indicated by `Ticket`, is returned.
 *
 * @param request GetConnectionTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicketWithOptions(const GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessType()) {
    body["AccessType"] = request.accessType();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasAppInstanceGroupIdList()) {
    body["AppInstanceGroupIdList"] = request.appInstanceGroupIdList();
  }

  if (!!request.hasAppInstanceId()) {
    body["AppInstanceId"] = request.appInstanceId();
  }

  if (!!request.hasAppInstancePersistentId()) {
    body["AppInstancePersistentId"] = request.appInstancePersistentId();
  }

  if (!!request.hasAppPolicyId()) {
    body["AppPolicyId"] = request.appPolicyId();
  }

  if (!!request.hasAppStartParam()) {
    body["AppStartParam"] = request.appStartParam();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.appVersion();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasEnvironmentConfig()) {
    body["EnvironmentConfig"] = request.environmentConfig();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetConnectionTicket"},
    {"version" , "2021-09-01"},
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
 * @summary Queries the credential that is used to connect to App Streaming.
 *
 * @description You must call this operation at least twice to obtain a connection credential.
 * The first time you call this operation, the system assigns an application instance to the specified convenience account and then starts the application. In this case, the ID of the started task, which is indicated by `TaskID`, is returned.
 * In subsequent calls, you must configure `TaskID` to query whether the task is completed. If the value of `TaskStatus` in the response is `Finished`, the connection credential, which is indicated by `Ticket`, is returned.
 *
 * @param request GetConnectionTicketRequest
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicket(const GetConnectionTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnectionTicketWithOptions(request, runtime);
}

/**
 * @summary Queries information that is used to debug an application instance.
 *
 * @param request GetDebugAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDebugAppInstanceResponse
 */
GetDebugAppInstanceResponse Client::getDebugAppInstanceWithOptions(const GetDebugAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDebugAppInstance"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDebugAppInstanceResponse>();
}

/**
 * @summary Queries information that is used to debug an application instance.
 *
 * @param request GetDebugAppInstanceRequest
 * @return GetDebugAppInstanceResponse
 */
GetDebugAppInstanceResponse Client::getDebugAppInstance(const GetDebugAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDebugAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an over-the-air (OTA) update task, including the available versions and version description.
 *
 * @param request GetOtaTaskByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOtaTaskByTaskIdResponse
 */
GetOtaTaskByTaskIdResponse Client::getOtaTaskByTaskIdWithOptions(const GetOtaTaskByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetOtaTaskByTaskId"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOtaTaskByTaskIdResponse>();
}

/**
 * @summary Queries the details of an over-the-air (OTA) update task, including the available versions and version description.
 *
 * @param request GetOtaTaskByTaskIdRequest
 * @return GetOtaTaskByTaskIdResponse
 */
GetOtaTaskByTaskIdResponse Client::getOtaTaskByTaskId(const GetOtaTaskByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOtaTaskByTaskIdWithOptions(request, runtime);
}

/**
 * @summary Queries resource prices.
 *
 * @param request GetResourcePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourcePriceResponse
 */
GetResourcePriceResponse Client::getResourcePriceWithOptions(const GetResourcePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.amount();
  }

  if (!!request.hasAppInstanceType()) {
    query["AppInstanceType"] = request.appInstanceType();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasNodeInstanceType()) {
    query["NodeInstanceType"] = request.nodeInstanceType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.periodUnit();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourcePrice"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourcePriceResponse>();
}

/**
 * @summary Queries resource prices.
 *
 * @param request GetResourcePriceRequest
 * @return GetResourcePriceResponse
 */
GetResourcePriceResponse Client::getResourcePrice(const GetResourcePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourcePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the renewal prices of App Streaming resources.
 *
 * @param request GetResourceRenewPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceRenewPriceResponse
 */
GetResourceRenewPriceResponse Client::getResourceRenewPriceWithOptions(const GetResourceRenewPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.periodUnit();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceRenewPrice"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceRenewPriceResponse>();
}

/**
 * @summary Queries the renewal prices of App Streaming resources.
 *
 * @param request GetResourceRenewPriceRequest
 * @return GetResourceRenewPriceResponse
 */
GetResourceRenewPriceResponse Client::getResourceRenewPrice(const GetResourceRenewPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceRenewPriceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of multiple delivery groups that meet the query conditions.
 *
 * @param request ListAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppInstanceGroupResponse
 */
ListAppInstanceGroupResponse Client::listAppInstanceGroupWithOptions(const ListAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCenterImageId()) {
    query["AppCenterImageId"] = request.appCenterImageId();
  }

  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAppInstanceGroupName()) {
    query["AppInstanceGroupName"] = request.appInstanceGroupName();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasNodeInstanceType()) {
    query["NodeInstanceType"] = request.nodeInstanceType();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  json body = {};
  if (!!request.hasExcludedUserGroupIds()) {
    body["ExcludedUserGroupIds"] = request.excludedUserGroupIds();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasUserGroupIds()) {
    body["UserGroupIds"] = request.userGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppInstanceGroupResponse>();
}

/**
 * @summary Queries the details of multiple delivery groups that meet the query conditions.
 *
 * @param request ListAppInstanceGroupRequest
 * @return ListAppInstanceGroupResponse
 */
ListAppInstanceGroupResponse Client::listAppInstanceGroup(const ListAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the details of application instances in a delivery group, including the IDs, status, creation time, update time, session status, and public IP addresses associated with the primary NICs of the instances.
 *
 * @param request ListAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppInstancesResponse
 */
ListAppInstancesResponse Client::listAppInstancesWithOptions(const ListAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.appInstanceId();
  }

  if (!!request.hasIncludeDeleted()) {
    query["IncludeDeleted"] = request.includeDeleted();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUserIdList()) {
    query["UserIdList"] = request.userIdList();
  }

  json body = {};
  if (!!request.hasAppInstanceIdList()) {
    body["AppInstanceIdList"] = request.appInstanceIdList();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAppInstances"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppInstancesResponse>();
}

/**
 * @summary Queries the details of application instances in a delivery group, including the IDs, status, creation time, update time, session status, and public IP addresses associated with the primary NICs of the instances.
 *
 * @param request ListAppInstancesRequest
 * @return ListAppInstancesResponse
 */
ListAppInstancesResponse Client::listAppInstances(const ListAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the user groups authorized by a delivery group.
 *
 * @param request ListAuthorizedUserGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedUserGroupsResponse
 */
ListAuthorizedUserGroupsResponse Client::listAuthorizedUserGroupsWithOptions(const ListAuthorizedUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAuthorizedUserGroups"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedUserGroupsResponse>();
}

/**
 * @summary Queries the user groups authorized by a delivery group.
 *
 * @param request ListAuthorizedUserGroupsRequest
 * @return ListAuthorizedUserGroupsResponse
 */
ListAuthorizedUserGroupsResponse Client::listAuthorizedUserGroups(const ListAuthorizedUserGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizedUserGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the bindings between users and resources.
 *
 * @param request ListBindInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBindInfoResponse
 */
ListBindInfoResponse Client::listBindInfoWithOptions(const ListBindInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppIdList()) {
    body["AppIdList"] = request.appIdList();
  }

  if (!!request.hasAppInstanceGroupIdList()) {
    body["AppInstanceGroupIdList"] = request.appInstanceGroupIdList();
  }

  if (!!request.hasAppInstanceIdList()) {
    body["AppInstanceIdList"] = request.appInstanceIdList();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasUserIdList()) {
    body["UserIdList"] = request.userIdList();
  }

  if (!!request.hasWyIdList()) {
    body["WyIdList"] = request.wyIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBindInfo"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBindInfoResponse>();
}

/**
 * @summary Queries the bindings between users and resources.
 *
 * @param request ListBindInfoRequest
 * @return ListBindInfoResponse
 */
ListBindInfoResponse Client::listBindInfo(const ListBindInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBindInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the image information about an ECS instance.
 *
 * @param request ListImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImageResponse
 */
ListImageResponse Client::listImageWithOptions(const ListImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTagList()) {
    query["TagList"] = request.tagList();
  }

  json body = {};
  if (!!request.hasBizRegionIdList()) {
    body["BizRegionIdList"] = request.bizRegionIdList();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasBizTypeList()) {
    body["BizTypeList"] = request.bizTypeList();
  }

  if (!!request.hasFeatureList()) {
    body["FeatureList"] = request.featureList();
  }

  if (!!request.hasFotaVersion()) {
    body["FotaVersion"] = request.fotaVersion();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  if (!!request.hasImageName()) {
    body["ImageName"] = request.imageName();
  }

  if (!!request.hasImageType()) {
    body["ImageType"] = request.imageType();
  }

  if (!!request.hasLanguageType()) {
    body["LanguageType"] = request.languageType();
  }

  if (!!request.hasOsType()) {
    body["OsType"] = request.osType();
  }

  if (!!request.hasPackageType()) {
    body["PackageType"] = request.packageType();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlatformName()) {
    body["PlatformName"] = request.platformName();
  }

  if (!!request.hasPlatformNameList()) {
    body["PlatformNameList"] = request.platformNameList();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasProductTypeList()) {
    body["ProductTypeList"] = request.productTypeList();
  }

  if (!!request.hasProtocolType()) {
    body["ProtocolType"] = request.protocolType();
  }

  if (!!request.hasResourceInstanceType()) {
    body["ResourceInstanceType"] = request.resourceInstanceType();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListImage"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImageResponse>();
}

/**
 * @summary Queries the image information about an ECS instance.
 *
 * @param request ListImageRequest
 * @return ListImageResponse
 */
ListImageResponse Client::listImage(const ListImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImageWithOptions(request, runtime);
}

/**
 * @summary Queries the resource types that are available for purchase when you create a delivery group.
 *
 * @param request ListNodeInstanceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeInstanceTypeResponse
 */
ListNodeInstanceTypeResponse Client::listNodeInstanceTypeWithOptions(const ListNodeInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.cpu();
  }

  if (!!request.hasGpu()) {
    query["Gpu"] = request.gpu();
  }

  if (!!request.hasGpuMemory()) {
    query["GpuMemory"] = request.gpuMemory();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.memory();
  }

  if (!!request.hasNodeInstanceType()) {
    query["NodeInstanceType"] = request.nodeInstanceType();
  }

  if (!!request.hasNodeInstanceTypeFamily()) {
    query["NodeInstanceTypeFamily"] = request.nodeInstanceTypeFamily();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.osType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.sortType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodeInstanceType"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodeInstanceTypeResponse>();
}

/**
 * @summary Queries the resource types that are available for purchase when you create a delivery group.
 *
 * @param request ListNodeInstanceTypeRequest
 * @return ListNodeInstanceTypeResponse
 */
ListNodeInstanceTypeResponse Client::listNodeInstanceType(const ListNodeInstanceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeInstanceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries resource nodes.
 *
 * @param request ListNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodesWithOptions(const ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary Queries resource nodes.
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about over-the-air (OTA) update tasks.
 *
 * @param request ListOtaTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOtaTaskResponse
 */
ListOtaTaskResponse Client::listOtaTaskWithOptions(const ListOtaTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasOtaType()) {
    body["OtaType"] = request.otaType();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListOtaTask"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOtaTaskResponse>();
}

/**
 * @summary Queries the information about over-the-air (OTA) update tasks.
 *
 * @param request ListOtaTaskRequest
 * @return ListOtaTaskResponse
 */
ListOtaTaskResponse Client::listOtaTask(const ListOtaTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOtaTaskWithOptions(request, runtime);
}

/**
 * @summary Queries app instances of the persistent session type in a delivery group.
 *
 * @param request ListPersistentAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPersistentAppInstancesResponse
 */
ListPersistentAppInstancesResponse Client::listPersistentAppInstancesWithOptions(const ListPersistentAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAppInstancePersistentIds()) {
    query["AppInstancePersistentIds"] = request.appInstancePersistentIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPersistentAppInstances"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPersistentAppInstancesResponse>();
}

/**
 * @summary Queries app instances of the persistent session type in a delivery group.
 *
 * @param request ListPersistentAppInstancesRequest
 * @return ListPersistentAppInstancesResponse
 */
ListPersistentAppInstancesResponse Client::listPersistentAppInstances(const ListPersistentAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPersistentAppInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the regions that are supported by App Streaming.
 *
 * @description >  All supported regions instead of available regions are returned by this operation. For more information, see [Supported regions](https://help.aliyun.com/document_detail/426036.html).
 *
 * @param request ListRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizSource()) {
    query["BizSource"] = request.bizSource();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2021-09-01"},
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
 * @summary Queries the regions that are supported by App Streaming.
 *
 * @description >  All supported regions instead of available regions are returned by this operation. For more information, see [Supported regions](https://help.aliyun.com/document_detail/426036.html).
 *
 * @param request ListRegionsRequest
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions(const ListRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags added to one or more cloud resources.
 *
 * @param request ListTagCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagCloudResourcesResponse
 */
ListTagCloudResourcesResponse Client::listTagCloudResourcesWithOptions(const ListTagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasScope()) {
    body["Scope"] = request.scope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTagCloudResources"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagCloudResourcesResponse>();
}

/**
 * @summary Queries the tags added to one or more cloud resources.
 *
 * @param request ListTagCloudResourcesRequest
 * @return ListTagCloudResourcesResponse
 */
ListTagCloudResourcesResponse Client::listTagCloudResources(const ListTagCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of the administrator account, such as whether the resource expiration reminder feature is enabled.
 *
 * @param request ListTenantConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTenantConfigResponse
 */
ListTenantConfigResponse Client::listTenantConfigWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListTenantConfig"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTenantConfigResponse>();
}

/**
 * @summary Queries the configurations of the administrator account, such as whether the resource expiration reminder feature is enabled.
 *
 * @return ListTenantConfigResponse
 */
ListTenantConfigResponse Client::listTenantConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTenantConfigWithOptions(runtime);
}

/**
 * @summary Queries the list of workstations.
 *
 * @param request ListWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWuyingServerResponse
 */
ListWuyingServerResponse Client::listWuyingServerWithOptions(const ListWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasAddVirtualNodePoolStatusList()) {
    bodyFlat["AddVirtualNodePoolStatusList"] = request.addVirtualNodePoolStatusList();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.chargeType();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  if (!!request.hasOfficeSiteId()) {
    body["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasServerInstanceType()) {
    body["ServerInstanceType"] = request.serverInstanceType();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasVirtualNodePoolId()) {
    body["VirtualNodePoolId"] = request.virtualNodePoolId();
  }

  if (!!request.hasWuyingServerIdList()) {
    bodyFlat["WuyingServerIdList"] = request.wuyingServerIdList();
  }

  if (!!request.hasWuyingServerNameOrId()) {
    body["WuyingServerNameOrId"] = request.wuyingServerNameOrId();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWuyingServerResponse>();
}

/**
 * @summary Queries the list of workstations.
 *
 * @param request ListWuyingServerRequest
 * @return ListWuyingServerResponse
 */
ListWuyingServerResponse Client::listWuyingServer(const ListWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Closes all sessions in a pay-as-you-go delivery group for which a scheduled scaling policy is used.
 *
 * @description >  This operation can be called only if you use a pay-as-you-go delivery group for which a scheduled scaling policy is used and if you call the operation at a time other than the scheduled time.
 *
 * @param request LogOffAllSessionsInAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LogOffAllSessionsInAppInstanceGroupResponse
 */
LogOffAllSessionsInAppInstanceGroupResponse Client::logOffAllSessionsInAppInstanceGroupWithOptions(const LogOffAllSessionsInAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LogOffAllSessionsInAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LogOffAllSessionsInAppInstanceGroupResponse>();
}

/**
 * @summary Closes all sessions in a pay-as-you-go delivery group for which a scheduled scaling policy is used.
 *
 * @description >  This operation can be called only if you use a pay-as-you-go delivery group for which a scheduled scaling policy is used and if you call the operation at a time other than the scheduled time.
 *
 * @param request LogOffAllSessionsInAppInstanceGroupRequest
 * @return LogOffAllSessionsInAppInstanceGroupResponse
 */
LogOffAllSessionsInAppInstanceGroupResponse Client::logOffAllSessionsInAppInstanceGroup(const LogOffAllSessionsInAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return logOffAllSessionsInAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the general policies of a delivery group, including the number of concurrent sessions and the retention period of disconnected sessions.
 *
 * @param tmpReq ModifyAppInstanceGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppInstanceGroupAttributeResponse
 */
ModifyAppInstanceGroupAttributeResponse Client::modifyAppInstanceGroupAttributeWithOptions(const ModifyAppInstanceGroupAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAppInstanceGroupAttributeShrinkRequest request = ModifyAppInstanceGroupAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetwork()) {
    request.setNetworkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.network(), "Network", "json"));
  }

  if (!!tmpReq.hasNodePool()) {
    request.setNodePoolShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodePool(), "NodePool", "json"));
  }

  if (!!tmpReq.hasSecurityPolicy()) {
    request.setSecurityPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.securityPolicy(), "SecurityPolicy", "json"));
  }

  if (!!tmpReq.hasStoragePolicy()) {
    request.setStoragePolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.storagePolicy(), "StoragePolicy", "json"));
  }

  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAppInstanceGroupName()) {
    query["AppInstanceGroupName"] = request.appInstanceGroupName();
  }

  if (!!request.hasNodePoolShrink()) {
    query["NodePool"] = request.nodePoolShrink();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.sessionTimeout();
  }

  json body = {};
  if (!!request.hasNetworkShrink()) {
    body["Network"] = request.networkShrink();
  }

  if (!!request.hasPerSessionPerApp()) {
    body["PerSessionPerApp"] = request.perSessionPerApp();
  }

  if (!!request.hasPreOpenAppId()) {
    body["PreOpenAppId"] = request.preOpenAppId();
  }

  if (!!request.hasPreOpenMode()) {
    body["PreOpenMode"] = request.preOpenMode();
  }

  if (!!request.hasSecurityPolicyShrink()) {
    body["SecurityPolicy"] = request.securityPolicyShrink();
  }

  if (!!request.hasStoragePolicyShrink()) {
    body["StoragePolicy"] = request.storagePolicyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyAppInstanceGroupAttribute"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppInstanceGroupAttributeResponse>();
}

/**
 * @summary Modifies the general policies of a delivery group, including the number of concurrent sessions and the retention period of disconnected sessions.
 *
 * @param request ModifyAppInstanceGroupAttributeRequest
 * @return ModifyAppInstanceGroupAttributeResponse
 */
ModifyAppInstanceGroupAttributeResponse Client::modifyAppInstanceGroupAttribute(const ModifyAppInstanceGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppInstanceGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Modify the delivery group display policy, including settings such as frame rate, resolution, and protocol type.
 *
 * @param tmpReq ModifyAppPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppPolicyResponse
 */
ModifyAppPolicyResponse Client::modifyAppPolicyWithOptions(const ModifyAppPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAppPolicyShrinkRequest request = ModifyAppPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVideoPolicy()) {
    request.setVideoPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoPolicy(), "VideoPolicy", "json"));
  }

  json query = {};
  if (!!request.hasAppPolicyId()) {
    query["AppPolicyId"] = request.appPolicyId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasVideoPolicyShrink()) {
    query["VideoPolicy"] = request.videoPolicyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppPolicy"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppPolicyResponse>();
}

/**
 * @summary Modify the delivery group display policy, including settings such as frame rate, resolution, and protocol type.
 *
 * @param request ModifyAppPolicyRequest
 * @return ModifyAppPolicyResponse
 */
ModifyAppPolicyResponse Client::modifyAppPolicy(const ModifyAppPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the properties of the cloud browser.
 *
 * @description Modifies the properties of the cloud browser.
 *
 * @param tmpReq ModifyBrowserInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBrowserInstanceGroupResponse
 */
ModifyBrowserInstanceGroupResponse Client::modifyBrowserInstanceGroupWithOptions(const ModifyBrowserInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyBrowserInstanceGroupShrinkRequest request = ModifyBrowserInstanceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBrowserConfig()) {
    request.setBrowserConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.browserConfig(), "BrowserConfig", "json"));
  }

  if (!!tmpReq.hasNetwork()) {
    request.setNetworkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.network(), "Network", "json"));
  }

  if (!!tmpReq.hasPolicy()) {
    request.setPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.policy(), "Policy", "json"));
  }

  if (!!tmpReq.hasTimers()) {
    request.setTimersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.timers(), "Timers", "json"));
  }

  json query = {};
  if (!!request.hasBrowserConfigShrink()) {
    query["BrowserConfig"] = request.browserConfigShrink();
  }

  if (!!request.hasBrowserInstanceGroupId()) {
    query["BrowserInstanceGroupId"] = request.browserInstanceGroupId();
  }

  if (!!request.hasPolicyShrink()) {
    query["Policy"] = request.policyShrink();
  }

  if (!!request.hasTimersShrink()) {
    query["Timers"] = request.timersShrink();
  }

  json body = {};
  if (!!request.hasCloudBrowserName()) {
    body["CloudBrowserName"] = request.cloudBrowserName();
  }

  if (!!request.hasNetworkShrink()) {
    body["Network"] = request.networkShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyBrowserInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBrowserInstanceGroupResponse>();
}

/**
 * @summary Modifies the properties of the cloud browser.
 *
 * @description Modifies the properties of the cloud browser.
 *
 * @param request ModifyBrowserInstanceGroupRequest
 * @return ModifyBrowserInstanceGroupResponse
 */
ModifyBrowserInstanceGroupResponse Client::modifyBrowserInstanceGroup(const ModifyBrowserInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBrowserInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Changes the number of nodes in a subscription delivery group.
 *
 * @param tmpReq ModifyNodePoolAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNodePoolAmountResponse
 */
ModifyNodePoolAmountResponse Client::modifyNodePoolAmountWithOptions(const ModifyNodePoolAmountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyNodePoolAmountShrinkRequest request = ModifyNodePoolAmountShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodePool()) {
    request.setNodePoolShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodePool(), "NodePool", "json"));
  }

  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasNodePoolShrink()) {
    body["NodePool"] = request.nodePoolShrink();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyNodePoolAmount"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNodePoolAmountResponse>();
}

/**
 * @summary Changes the number of nodes in a subscription delivery group.
 *
 * @param request ModifyNodePoolAmountRequest
 * @return ModifyNodePoolAmountResponse
 */
ModifyNodePoolAmountResponse Client::modifyNodePoolAmount(const ModifyNodePoolAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNodePoolAmountWithOptions(request, runtime);
}

/**
 * @summary Changes the scaling policy of a delivery group. The following scaling policies are supported: fixed resource number, scheduled scaling, and auto scaling.
 *
 * @description You can select one of the following scaling policies for cloud app resources:
 * *   No scaling: Resources are not scaled.
 * *   Auto scaling: Resources are automatically scaled based on the number of connected sessions and the duration during which no session is connected.
 * *   Scheduled scaling: Resources are scaled during specific periods of time on specific dates.
 * Before you call this operation, make sure that you fully understand the [billing methods and prices](https://help.aliyun.com/document_detail/426039.html) of App Streaming.
 *
 * @param tmpReq ModifyNodePoolAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNodePoolAttributeResponse
 */
ModifyNodePoolAttributeResponse Client::modifyNodePoolAttributeWithOptions(const ModifyNodePoolAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyNodePoolAttributeShrinkRequest request = ModifyNodePoolAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodePoolStrategy()) {
    request.setNodePoolStrategyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodePoolStrategy(), "NodePoolStrategy", "json"));
  }

  json body = {};
  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasNodeCapacity()) {
    body["NodeCapacity"] = request.nodeCapacity();
  }

  if (!!request.hasNodePoolStrategyShrink()) {
    body["NodePoolStrategy"] = request.nodePoolStrategyShrink();
  }

  if (!!request.hasPoolId()) {
    body["PoolId"] = request.poolId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyNodePoolAttribute"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNodePoolAttributeResponse>();
}

/**
 * @summary Changes the scaling policy of a delivery group. The following scaling policies are supported: fixed resource number, scheduled scaling, and auto scaling.
 *
 * @description You can select one of the following scaling policies for cloud app resources:
 * *   No scaling: Resources are not scaled.
 * *   Auto scaling: Resources are automatically scaled based on the number of connected sessions and the duration during which no session is connected.
 * *   Scheduled scaling: Resources are scaled during specific periods of time on specific dates.
 * Before you call this operation, make sure that you fully understand the [billing methods and prices](https://help.aliyun.com/document_detail/426039.html) of App Streaming.
 *
 * @param request ModifyNodePoolAttributeRequest
 * @return ModifyNodePoolAttributeResponse
 */
ModifyNodePoolAttributeResponse Client::modifyNodePoolAttribute(const ModifyNodePoolAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNodePoolAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of the administrator account, such as whether to enable the resource expiration reminder feature.
 *
 * @param request ModifyTenantConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTenantConfigResponse
 */
ModifyTenantConfigResponse Client::modifyTenantConfigWithOptions(const ModifyTenantConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupExpireRemind()) {
    body["AppInstanceGroupExpireRemind"] = request.appInstanceGroupExpireRemind();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyTenantConfig"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTenantConfigResponse>();
}

/**
 * @summary Modifies the configurations of the administrator account, such as whether to enable the resource expiration reminder feature.
 *
 * @param request ModifyTenantConfigRequest
 * @return ModifyTenantConfigResponse
 */
ModifyTenantConfigResponse Client::modifyTenantConfig(const ModifyTenantConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTenantConfigWithOptions(request, runtime);
}

/**
 * @summary Modify workstation properties.
 *
 * @param request ModifyWuyingServerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWuyingServerAttributeResponse
 */
ModifyWuyingServerAttributeResponse Client::modifyWuyingServerAttributeWithOptions(const ModifyWuyingServerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPassword()) {
    body["Password"] = request.password();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.wuyingServerId();
  }

  if (!!request.hasWuyingServerName()) {
    body["WuyingServerName"] = request.wuyingServerName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyWuyingServerAttribute"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWuyingServerAttributeResponse>();
}

/**
 * @summary Modify workstation properties.
 *
 * @param request ModifyWuyingServerAttributeRequest
 * @return ModifyWuyingServerAttributeResponse
 */
ModifyWuyingServerAttributeResponse Client::modifyWuyingServerAttribute(const ModifyWuyingServerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWuyingServerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the assigned users that are added to a delivery group by page.
 *
 * @param request PageListAppInstanceGroupUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PageListAppInstanceGroupUserResponse
 */
PageListAppInstanceGroupUserResponse Client::pageListAppInstanceGroupUserWithOptions(const PageListAppInstanceGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PageListAppInstanceGroupUser"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PageListAppInstanceGroupUserResponse>();
}

/**
 * @summary Queries the assigned users that are added to a delivery group by page.
 *
 * @param request PageListAppInstanceGroupUserRequest
 * @return PageListAppInstanceGroupUserResponse
 */
PageListAppInstanceGroupUserResponse Client::pageListAppInstanceGroupUser(const PageListAppInstanceGroupUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pageListAppInstanceGroupUserWithOptions(request, runtime);
}

/**
 * @summary Renews a delivery group.
 *
 * @description Before you call this operation, make sure that you fully understand the [billing methods and prices](https://help.aliyun.com/document_detail/426039.html) of App Streaming.
 *
 * @param tmpReq RenewAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewAppInstanceGroupResponse
 */
RenewAppInstanceGroupResponse Client::renewAppInstanceGroupWithOptions(const RenewAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RenewAppInstanceGroupShrinkRequest request = RenewAppInstanceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRenewNodes()) {
    request.setRenewNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.renewNodes(), "RenewNodes", "json"));
  }

  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.periodUnit();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.promotionId();
  }

  if (!!request.hasRenewAmount()) {
    query["RenewAmount"] = request.renewAmount();
  }

  if (!!request.hasRenewMode()) {
    query["RenewMode"] = request.renewMode();
  }

  if (!!request.hasRenewNodesShrink()) {
    query["RenewNodes"] = request.renewNodesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewAppInstanceGroupResponse>();
}

/**
 * @summary Renews a delivery group.
 *
 * @description Before you call this operation, make sure that you fully understand the [billing methods and prices](https://help.aliyun.com/document_detail/426039.html) of App Streaming.
 *
 * @param request RenewAppInstanceGroupRequest
 * @return RenewAppInstanceGroupResponse
 */
RenewAppInstanceGroupResponse Client::renewAppInstanceGroup(const RenewAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Renew one workstation.
 *
 * @param request RenewWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewWuyingServerResponse
 */
RenewWuyingServerResponse Client::renewWuyingServerWithOptions(const RenewWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.autoPay();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.period();
  }

  if (!!request.hasPeriodUnit()) {
    body["PeriodUnit"] = request.periodUnit();
  }

  if (!!request.hasPromotionId()) {
    body["PromotionId"] = request.promotionId();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.wuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RenewWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewWuyingServerResponse>();
}

/**
 * @summary Renew one workstation.
 *
 * @param request RenewWuyingServerRequest
 * @return RenewWuyingServerResponse
 */
RenewWuyingServerResponse Client::renewWuyingServer(const RenewWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Restarts the workstation.
 *
 * @param request RestartWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartWuyingServerResponse
 */
RestartWuyingServerResponse Client::restartWuyingServerWithOptions(const RestartWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasWuyingServerIdList()) {
    bodyFlat["WuyingServerIdList"] = request.wuyingServerIdList();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RestartWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartWuyingServerResponse>();
}

/**
 * @summary Restarts the workstation.
 *
 * @param request RestartWuyingServerRequest
 * @return RestartWuyingServerResponse
 */
RestartWuyingServerResponse Client::restartWuyingServer(const RestartWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Initiates a task to replicate an image to another region.
 *
 * @param request StartTaskForDistributeImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTaskForDistributeImageResponse
 */
StartTaskForDistributeImageResponse Client::startTaskForDistributeImageWithOptions(const StartTaskForDistributeImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationRegionList()) {
    body["DestinationRegionList"] = request.destinationRegionList();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasRetryType()) {
    body["RetryType"] = request.retryType();
  }

  if (!!request.hasSourceRegion()) {
    body["SourceRegion"] = request.sourceRegion();
  }

  if (!!request.hasVersionId()) {
    body["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartTaskForDistributeImage"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTaskForDistributeImageResponse>();
}

/**
 * @summary Initiates a task to replicate an image to another region.
 *
 * @param request StartTaskForDistributeImageRequest
 * @return StartTaskForDistributeImageResponse
 */
StartTaskForDistributeImageResponse Client::startTaskForDistributeImage(const StartTaskForDistributeImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTaskForDistributeImageWithOptions(request, runtime);
}

/**
 * @summary Start the workstation.
 *
 * @param request StartWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartWuyingServerResponse
 */
StartWuyingServerResponse Client::startWuyingServerWithOptions(const StartWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasWuyingServerIdList()) {
    bodyFlat["WuyingServerIdList"] = request.wuyingServerIdList();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartWuyingServerResponse>();
}

/**
 * @summary Start the workstation.
 *
 * @param request StartWuyingServerRequest
 * @return StartWuyingServerResponse
 */
StartWuyingServerResponse Client::startWuyingServer(const StartWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Stops the workstation.
 *
 * @param request StopWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopWuyingServerResponse
 */
StopWuyingServerResponse Client::stopWuyingServerWithOptions(const StopWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasForce()) {
    body["Force"] = request.force();
  }

  json bodyFlat = {};
  if (!!request.hasWuyingServerIdList()) {
    bodyFlat["WuyingServerIdList"] = request.wuyingServerIdList();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopWuyingServerResponse>();
}

/**
 * @summary Stops the workstation.
 *
 * @param request StopWuyingServerRequest
 * @return StopWuyingServerResponse
 */
StopWuyingServerResponse Client::stopWuyingServer(const StopWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopWuyingServerWithOptions(request, runtime);
}

/**
 * @summary 为云资源创建并绑定标签
 *
 * @param request TagCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagCloudResourcesResponse
 */
TagCloudResourcesResponse Client::tagCloudResourcesWithOptions(const TagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TagCloudResources"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagCloudResourcesResponse>();
}

/**
 * @summary 为云资源创建并绑定标签
 *
 * @param request TagCloudResourcesRequest
 * @return TagCloudResourcesResponse
 */
TagCloudResourcesResponse Client::tagCloudResources(const TagCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbinds a user and a session.
 *
 * @param request UnbindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindResponse
 */
UnbindResponse Client::unbindWithOptions(const UnbindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAppInstanceId()) {
    body["AppInstanceId"] = request.appInstanceId();
  }

  if (!!request.hasAppInstancePersistentId()) {
    body["AppInstancePersistentId"] = request.appInstancePersistentId();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Unbind"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindResponse>();
}

/**
 * @summary Unbinds a user and a session.
 *
 * @param request UnbindRequest
 * @return UnbindResponse
 */
UnbindResponse Client::unbind(const UnbindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindWithOptions(request, runtime);
}

/**
 * @summary Removes tags from cloud resources.
 *
 * @param request UntagCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagCloudResourcesResponse
 */
UntagCloudResourcesResponse Client::untagCloudResourcesWithOptions(const UntagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKeys()) {
    body["TagKeys"] = request.tagKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UntagCloudResources"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagCloudResourcesResponse>();
}

/**
 * @summary Removes tags from cloud resources.
 *
 * @param request UntagCloudResourcesRequest
 * @return UntagCloudResourcesResponse
 */
UntagCloudResourcesResponse Client::untagCloudResources(const UntagCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates the image of a delivery group.
 *
 * @description **
 * **Warning** After the image is updated, the end user session accessing the cloud application will be disconnected. Exercise caution to avoid end user data loss.
 * >  After the image of the delivery group is updated, the change takes effect on the terminal in approximately 2 minutes.
 *
 * @param request UpdateAppInstanceGroupImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppInstanceGroupImageResponse
 */
UpdateAppInstanceGroupImageResponse Client::updateAppInstanceGroupImageWithOptions(const UpdateAppInstanceGroupImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCenterImageId()) {
    query["AppCenterImageId"] = request.appCenterImageId();
  }

  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppInstanceGroupImage"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppInstanceGroupImageResponse>();
}

/**
 * @summary Updates the image of a delivery group.
 *
 * @description **
 * **Warning** After the image is updated, the end user session accessing the cloud application will be disconnected. Exercise caution to avoid end user data loss.
 * >  After the image of the delivery group is updated, the change takes effect on the terminal in approximately 2 minutes.
 *
 * @param request UpdateAppInstanceGroupImageRequest
 * @return UpdateAppInstanceGroupImageResponse
 */
UpdateAppInstanceGroupImageResponse Client::updateAppInstanceGroupImage(const UpdateAppInstanceGroupImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppInstanceGroupImageWithOptions(request, runtime);
}

/**
 * @summary Updates the workstation image.
 *
 * @param request UpdateWuyingServerImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWuyingServerImageResponse
 */
UpdateWuyingServerImageResponse Client::updateWuyingServerImageWithOptions(const UpdateWuyingServerImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.wuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWuyingServerImage"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWuyingServerImageResponse>();
}

/**
 * @summary Updates the workstation image.
 *
 * @param request UpdateWuyingServerImageRequest
 * @return UpdateWuyingServerImageResponse
 */
UpdateWuyingServerImageResponse Client::updateWuyingServerImage(const UpdateWuyingServerImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWuyingServerImageWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901