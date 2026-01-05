#include <darabonba/Core.hpp>
#include <alibabacloud/EdsAic20230930.hpp>
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
using namespace AlibabaCloud::EdsAic20230930::Models;
namespace AlibabaCloud
{
namespace EdsAic20230930
{

AlibabaCloud::EdsAic20230930::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("eds-aic", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Attaches an Android Debug Bridge (ADB) key pair to one or more cloud phone instances.
 *
 * @description *   You can attach to an ADB key pair only to cloud phone instances in the Running state.
 * *   After you attach an ADB key pair, make sure the private key of the ADB key pair is copied to the ~/.android directory (macOS or Linux operating systems) or the C:\\Users\\Username.android directory (Windows operating systems). In addition, you must run the adb kill-server command to restart the ADB process to ensure correct ADB connection. Otherwise, ADB connection may fail due to authentication exceptions.
 *
 * @param request AttachKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachKeyPairResponse
 */
AttachKeyPairResponse Client::attachKeyPairWithOptions(const AttachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasKeyPairId()) {
    query["KeyPairId"] = request.getKeyPairId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachKeyPair"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachKeyPairResponse>();
}

/**
 * @summary Attaches an Android Debug Bridge (ADB) key pair to one or more cloud phone instances.
 *
 * @description *   You can attach to an ADB key pair only to cloud phone instances in the Running state.
 * *   After you attach an ADB key pair, make sure the private key of the ADB key pair is copied to the ~/.android directory (macOS or Linux operating systems) or the C:\\Users\\Username.android directory (Windows operating systems). In addition, you must run the adb kill-server command to restart the ADB process to ensure correct ADB connection. Otherwise, ADB connection may fail due to authentication exceptions.
 *
 * @param request AttachKeyPairRequest
 * @return AttachKeyPairResponse
 */
AttachKeyPairResponse Client::attachKeyPair(const AttachKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachKeyPairWithOptions(request, runtime);
}

/**
 * @summary Authorize/unauthorize Android instances for users.
 *
 * @description Instance states that support user assignment: Available, Shutting Down, Stopped, Starting, Backing Up, Restoring, Backup Failed, Restore Failed.
 * Instance states that support unassignment: Available, Shutting Down, Stopped, Starting, Backing Up, Restoring, Backup Failed, Restore Failed, Expired, Overdue, Deleted.
 *
 * @param request AuthorizeAndroidInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeAndroidInstanceResponse
 */
AuthorizeAndroidInstanceResponse Client::authorizeAndroidInstanceWithOptions(const AuthorizeAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIds()) {
    query["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasAuthorizeUserId()) {
    query["AuthorizeUserId"] = request.getAuthorizeUserId();
  }

  if (!!request.hasUnAuthorizeUserId()) {
    query["UnAuthorizeUserId"] = request.getUnAuthorizeUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeAndroidInstance"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeAndroidInstanceResponse>();
}

/**
 * @summary Authorize/unauthorize Android instances for users.
 *
 * @description Instance states that support user assignment: Available, Shutting Down, Stopped, Starting, Backing Up, Restoring, Backup Failed, Restore Failed.
 * Instance states that support unassignment: Available, Shutting Down, Stopped, Starting, Backing Up, Restoring, Backup Failed, Restore Failed, Expired, Overdue, Deleted.
 *
 * @param request AuthorizeAndroidInstanceRequest
 * @return AuthorizeAndroidInstanceResponse
 */
AuthorizeAndroidInstanceResponse Client::authorizeAndroidInstance(const AuthorizeAndroidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeAndroidInstanceWithOptions(request, runtime);
}

/**
 * @summary Generates and uploads backup files.
 *
 * @description Currently, this operation allows you to upload only backup files generated by cloud phones to Object Storage Service (OSS) buckets.
 *
 * @param request BackupFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BackupFileResponse
 */
BackupFileResponse Client::backupFileWithOptions(const BackupFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIdList()) {
    query["AndroidInstanceIdList"] = request.getAndroidInstanceIdList();
  }

  if (!!request.hasBackupAll()) {
    query["BackupAll"] = request.getBackupAll();
  }

  if (!!request.hasBackupFileName()) {
    query["BackupFileName"] = request.getBackupFileName();
  }

  if (!!request.hasBackupFilePath()) {
    query["BackupFilePath"] = request.getBackupFilePath();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExcludeSourceFilePathList()) {
    query["ExcludeSourceFilePathList"] = request.getExcludeSourceFilePathList();
  }

  if (!!request.hasSourceAppList()) {
    query["SourceAppList"] = request.getSourceAppList();
  }

  if (!!request.hasSourceFilePathList()) {
    query["SourceFilePathList"] = request.getSourceFilePathList();
  }

  if (!!request.hasUploadEndpoint()) {
    query["UploadEndpoint"] = request.getUploadEndpoint();
  }

  if (!!request.hasUploadType()) {
    query["UploadType"] = request.getUploadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BackupFile"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BackupFileResponse>();
}

/**
 * @summary Generates and uploads backup files.
 *
 * @description Currently, this operation allows you to upload only backup files generated by cloud phones to Object Storage Service (OSS) buckets.
 *
 * @param request BackupFileRequest
 * @return BackupFileResponse
 */
BackupFileResponse Client::backupFile(const BackupFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return backupFileWithOptions(request, runtime);
}

/**
 * @summary Retrieves connection tickets in batch.
 *
 * @param request BatchGetAcpConnectionTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetAcpConnectionTicketResponse
 */
BatchGetAcpConnectionTicketResponse Client::batchGetAcpConnectionTicketWithOptions(const BatchGetAcpConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasInstanceGroupId()) {
    query["InstanceGroupId"] = request.getInstanceGroupId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInstanceTasks()) {
    query["InstanceTasks"] = request.getInstanceTasks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetAcpConnectionTicket"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetAcpConnectionTicketResponse>();
}

/**
 * @summary Retrieves connection tickets in batch.
 *
 * @param request BatchGetAcpConnectionTicketRequest
 * @return BatchGetAcpConnectionTicketResponse
 */
BatchGetAcpConnectionTicketResponse Client::batchGetAcpConnectionTicket(const BatchGetAcpConnectionTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetAcpConnectionTicketWithOptions(request, runtime);
}

/**
 * @summary 修改云手机矩阵的配置
 *
 * @param request ChangeCloudPhoneNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeCloudPhoneNodeResponse
 */
ChangeCloudPhoneNodeResponse Client::changeCloudPhoneNodeWithOptions(const ChangeCloudPhoneNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasDisplayConfig()) {
    query["DisplayConfig"] = request.getDisplayConfig();
  }

  if (!!request.hasDownBandwidthLimit()) {
    query["DownBandwidthLimit"] = request.getDownBandwidthLimit();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasPhoneCount()) {
    query["PhoneCount"] = request.getPhoneCount();
  }

  if (!!request.hasPhoneDataVolume()) {
    query["PhoneDataVolume"] = request.getPhoneDataVolume();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasShareDataVolume()) {
    query["ShareDataVolume"] = request.getShareDataVolume();
  }

  if (!!request.hasSwapSize()) {
    query["SwapSize"] = request.getSwapSize();
  }

  if (!!request.hasUpBandwidthLimit()) {
    query["UpBandwidthLimit"] = request.getUpBandwidthLimit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeCloudPhoneNode"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeCloudPhoneNodeResponse>();
}

/**
 * @summary 修改云手机矩阵的配置
 *
 * @param request ChangeCloudPhoneNodeRequest
 * @return ChangeCloudPhoneNodeResponse
 */
ChangeCloudPhoneNodeResponse Client::changeCloudPhoneNode(const ChangeCloudPhoneNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeCloudPhoneNodeWithOptions(request, runtime);
}

/**
 * @summary Check the resource inventory.
 *
 * @param request CheckResourceStockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckResourceStockResponse
 */
CheckResourceStockResponse Client::checkResourceStockWithOptions(const CheckResourceStockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcpSpecId()) {
    query["AcpSpecId"] = request.getAcpSpecId();
  }

  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasGpuAcceleration()) {
    query["GpuAcceleration"] = request.getGpuAcceleration();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckResourceStock"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckResourceStockResponse>();
}

/**
 * @summary Check the resource inventory.
 *
 * @param request CheckResourceStockRequest
 * @return CheckResourceStockResponse
 */
CheckResourceStockResponse Client::checkResourceStock(const CheckResourceStockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkResourceStockWithOptions(request, runtime);
}

/**
 * @summary Creates pay-as-you-go or subscription instance groups.
 *
 * @description Before creating an instance group, ensure you understand the [billing methods](https://help.aliyun.com/document_detail/2807121.html) supported by Cloud Phone.
 * *   If the billing method of an instance group is PrePaid, AutoPay is set to false by default. In this case, you need to go to [Expenses and Costs](https://usercenter2-intl.aliyun.com/order/list) to manually complete the payment.
 * *   You can also set AutoPay to true based on your business requirements.
 *
 * @param tmpReq CreateAndroidInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAndroidInstanceGroupResponse
 */
CreateAndroidInstanceGroupResponse Client::createAndroidInstanceGroupWithOptions(const CreateAndroidInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAndroidInstanceGroupShrinkRequest request = CreateAndroidInstanceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetworkInfo()) {
    request.setNetworkInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetworkInfo(), "NetworkInfo", "json"));
  }

  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasBandwidthPackageType()) {
    query["BandwidthPackageType"] = request.getBandwidthPackageType();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableIpv6()) {
    query["EnableIpv6"] = request.getEnableIpv6();
  }

  if (!!request.hasGpuAcceleration()) {
    query["GpuAcceleration"] = request.getGpuAcceleration();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceGroupName()) {
    query["InstanceGroupName"] = request.getInstanceGroupName();
  }

  if (!!request.hasInstanceGroupSpec()) {
    query["InstanceGroupSpec"] = request.getInstanceGroupSpec();
  }

  if (!!request.hasIpv6Bandwidth()) {
    query["Ipv6Bandwidth"] = request.getIpv6Bandwidth();
  }

  if (!!request.hasKeyPairId()) {
    query["KeyPairId"] = request.getKeyPairId();
  }

  if (!!request.hasNetworkInfoShrink()) {
    query["NetworkInfo"] = request.getNetworkInfoShrink();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasNumberOfInstances()) {
    query["NumberOfInstances"] = request.getNumberOfInstances();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
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

  if (!!request.hasStreamMode()) {
    query["StreamMode"] = request.getStreamMode();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAndroidInstanceGroup"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAndroidInstanceGroupResponse>();
}

/**
 * @summary Creates pay-as-you-go or subscription instance groups.
 *
 * @description Before creating an instance group, ensure you understand the [billing methods](https://help.aliyun.com/document_detail/2807121.html) supported by Cloud Phone.
 * *   If the billing method of an instance group is PrePaid, AutoPay is set to false by default. In this case, you need to go to [Expenses and Costs](https://usercenter2-intl.aliyun.com/order/list) to manually complete the payment.
 * *   You can also set AutoPay to true based on your business requirements.
 *
 * @param request CreateAndroidInstanceGroupRequest
 * @return CreateAndroidInstanceGroupResponse
 */
CreateAndroidInstanceGroupResponse Client::createAndroidInstanceGroup(const CreateAndroidInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAndroidInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an Android application.
 *
 * @description When creating an app, you can provide app information to the system in one of the following ways:
 * *   Way 1: Apps from the Application Center
 *     *   You can use one of the following methods:
 *         *   Method 1: Pass in the `FileName` and `FilePath` parameters at the same time.
 *         *   Method 2: Pass in the `OssAppUrl` parameter
 *     *   Rule: If your app is from the Alibaba Cloud Workspace Application Center, you must use either Method 1 or Method 2. If both are used, Method 1 takes priority.
 *     *   Condition: Before you proceed, log on to the [Elastic Desktop Service (EDS) Enterprise console](https://eds.console.aliyun.com/osshelp) and follow the on-screen instructions to upload the app file to the Application Center to obtain the values of the `FileName`, `FilePath`, and `OssAppUrl` parameters.
 * *   Way 2: Custom apps
 *     *   Pass in the `CustomAppInfo` parameter.
 *     *   Rule: If you pass in the `CustomAppInfo` parameter, all six fields within it are required.
 * >  If Way 1 and Way 2 are adopted simultaneously, the information from Way 2 takes priority.
 *
 * @param tmpReq CreateAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppResponse
 */
CreateAppResponse Client::createAppWithOptions(const CreateAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppShrinkRequest request = CreateAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomAppInfo()) {
    request.setCustomAppInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomAppInfo(), "CustomAppInfo", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasCustomAppInfoShrink()) {
    query["CustomAppInfo"] = request.getCustomAppInfoShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasIconUrl()) {
    query["IconUrl"] = request.getIconUrl();
  }

  if (!!request.hasInstallParam()) {
    query["InstallParam"] = request.getInstallParam();
  }

  if (!!request.hasOssAppUrl()) {
    query["OssAppUrl"] = request.getOssAppUrl();
  }

  if (!!request.hasSignApk()) {
    query["SignApk"] = request.getSignApk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApp"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppResponse>();
}

/**
 * @summary Creates an Android application.
 *
 * @description When creating an app, you can provide app information to the system in one of the following ways:
 * *   Way 1: Apps from the Application Center
 *     *   You can use one of the following methods:
 *         *   Method 1: Pass in the `FileName` and `FilePath` parameters at the same time.
 *         *   Method 2: Pass in the `OssAppUrl` parameter
 *     *   Rule: If your app is from the Alibaba Cloud Workspace Application Center, you must use either Method 1 or Method 2. If both are used, Method 1 takes priority.
 *     *   Condition: Before you proceed, log on to the [Elastic Desktop Service (EDS) Enterprise console](https://eds.console.aliyun.com/osshelp) and follow the on-screen instructions to upload the app file to the Application Center to obtain the values of the `FileName`, `FilePath`, and `OssAppUrl` parameters.
 * *   Way 2: Custom apps
 *     *   Pass in the `CustomAppInfo` parameter.
 *     *   Rule: If you pass in the `CustomAppInfo` parameter, all six fields within it are required.
 * >  If Way 1 and Way 2 are adopted simultaneously, the information from Way 2 takes priority.
 *
 * @param request CreateAppRequest
 * @return CreateAppResponse
 */
CreateAppResponse Client::createApp(const CreateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppWithOptions(request, runtime);
}

/**
 * @summary Creates a cloud phone matrix.
 *
 * @param tmpReq CreateCloudPhoneNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudPhoneNodeResponse
 */
CreateCloudPhoneNodeResponse Client::createCloudPhoneNodeWithOptions(const CreateCloudPhoneNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCloudPhoneNodeShrinkRequest request = CreateCloudPhoneNodeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDisplayConfig()) {
    request.setDisplayConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDisplayConfig(), "DisplayConfig", "json"));
  }

  if (!!tmpReq.hasNetworkInfo()) {
    request.setNetworkInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetworkInfo(), "NetworkInfo", "json"));
  }

  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasBandwidthPackageType()) {
    query["BandwidthPackageType"] = request.getBandwidthPackageType();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasCount()) {
    query["Count"] = request.getCount();
  }

  if (!!request.hasDownBandwidthLimit()) {
    query["DownBandwidthLimit"] = request.getDownBandwidthLimit();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasIsSingleImgDisk()) {
    query["IsSingleImgDisk"] = request.getIsSingleImgDisk();
  }

  if (!!request.hasNetworkId()) {
    query["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasNetworkInfoShrink()) {
    query["NetworkInfo"] = request.getNetworkInfoShrink();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasNodeName()) {
    query["NodeName"] = request.getNodeName();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPhoneCount()) {
    query["PhoneCount"] = request.getPhoneCount();
  }

  if (!!request.hasPhoneDataVolume()) {
    query["PhoneDataVolume"] = request.getPhoneDataVolume();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasResolutionHeight()) {
    query["ResolutionHeight"] = request.getResolutionHeight();
  }

  if (!!request.hasResolutionWidth()) {
    query["ResolutionWidth"] = request.getResolutionWidth();
  }

  if (!!request.hasServerShareDataVolume()) {
    query["ServerShareDataVolume"] = request.getServerShareDataVolume();
  }

  if (!!request.hasServerType()) {
    query["ServerType"] = request.getServerType();
  }

  if (!!request.hasStreamMode()) {
    query["StreamMode"] = request.getStreamMode();
  }

  if (!!request.hasSwapSize()) {
    query["SwapSize"] = request.getSwapSize();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUpBandwidthLimit()) {
    query["UpBandwidthLimit"] = request.getUpBandwidthLimit();
  }

  if (!!request.hasUseTemplate()) {
    query["UseTemplate"] = request.getUseTemplate();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  json body = {};
  if (!!request.hasDisplayConfigShrink()) {
    body["DisplayConfig"] = request.getDisplayConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCloudPhoneNode"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudPhoneNodeResponse>();
}

/**
 * @summary Creates a cloud phone matrix.
 *
 * @param request CreateCloudPhoneNodeRequest
 * @return CreateCloudPhoneNodeResponse
 */
CreateCloudPhoneNodeResponse Client::createCloudPhoneNode(const CreateCloudPhoneNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudPhoneNodeWithOptions(request, runtime);
}

/**
 * @summary Creates a custom image from a cloud phone instance.
 *
 * @param request CreateCustomImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomImageResponse
 */
CreateCustomImageResponse Client::createCustomImageWithOptions(const CreateCustomImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasImageName()) {
    body["ImageName"] = request.getImageName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateCustomImage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomImageResponse>();
}

/**
 * @summary Creates a custom image from a cloud phone instance.
 *
 * @param request CreateCustomImageRequest
 * @return CreateCustomImageResponse
 */
CreateCustomImageResponse Client::createCustomImage(const CreateCustomImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomImageWithOptions(request, runtime);
}

/**
 * @summary Creates an Android Debug Bridge (ADB) key pair. The system retains the public key and provides a PEM-encoded private key in PKCS#8 format, adhering to the ADB connection specification. You must securely store the private key.
 *
 * @description In addition to using the CreateKeyPair operation to generate a key pair, you can also create one by using the ADB tool and upload it to the Cloud Phone console. The usage of this key pair is identical to that of a system-generated key pair.
 * Each tenant can create up to 500 key pairs.
 *
 * @param request CreateKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKeyPairResponse
 */
CreateKeyPairResponse Client::createKeyPairWithOptions(const CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateKeyPair"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKeyPairResponse>();
}

/**
 * @summary Creates an Android Debug Bridge (ADB) key pair. The system retains the public key and provides a PEM-encoded private key in PKCS#8 format, adhering to the ADB connection specification. You must securely store the private key.
 *
 * @description In addition to using the CreateKeyPair operation to generate a key pair, you can also create one by using the ADB tool and upload it to the Cloud Phone console. The usage of this key pair is identical to that of a system-generated key pair.
 * Each tenant can create up to 500 key pairs.
 *
 * @param request CreateKeyPairRequest
 * @return CreateKeyPairResponse
 */
CreateKeyPairResponse Client::createKeyPair(const CreateKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createKeyPairWithOptions(request, runtime);
}

/**
 * @summary Creates a policy.
 *
 * @param tmpReq CreatePolicyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyGroupResponse
 */
CreatePolicyGroupResponse Client::createPolicyGroupWithOptions(const CreatePolicyGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePolicyGroupShrinkRequest request = CreatePolicyGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetRedirectPolicy()) {
    request.setNetRedirectPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetRedirectPolicy(), "NetRedirectPolicy", "json"));
  }

  if (!!tmpReq.hasWatermark()) {
    request.setWatermarkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWatermark(), "Watermark", "json"));
  }

  json body = {};
  if (!!request.hasCameraRedirect()) {
    body["CameraRedirect"] = request.getCameraRedirect();
  }

  if (!!request.hasClipboard()) {
    body["Clipboard"] = request.getClipboard();
  }

  if (!!request.hasHtml5FileTransfer()) {
    body["Html5FileTransfer"] = request.getHtml5FileTransfer();
  }

  if (!!request.hasLocalDrive()) {
    body["LocalDrive"] = request.getLocalDrive();
  }

  if (!!request.hasLockResolution()) {
    body["LockResolution"] = request.getLockResolution();
  }

  if (!!request.hasNetRedirectPolicyShrink()) {
    body["NetRedirectPolicy"] = request.getNetRedirectPolicyShrink();
  }

  if (!!request.hasPolicyGroupName()) {
    body["PolicyGroupName"] = request.getPolicyGroupName();
  }

  if (!!request.hasPolicyType()) {
    body["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasResolutionHeight()) {
    body["ResolutionHeight"] = request.getResolutionHeight();
  }

  if (!!request.hasResolutionWidth()) {
    body["ResolutionWidth"] = request.getResolutionWidth();
  }

  if (!!request.hasWatermarkShrink()) {
    body["Watermark"] = request.getWatermarkShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePolicyGroup"},
    {"version" , "2023-09-30"},
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
 * @summary Creates a policy.
 *
 * @param request CreatePolicyGroupRequest
 * @return CreatePolicyGroupResponse
 */
CreatePolicyGroupResponse Client::createPolicyGroup(const CreatePolicyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a screenshot of a cloud phone instance.
 *
 * @description You can call this operation to create a screenshot of a cloud phone instance and upload it to the default Object Storage Service (OSS) bucket. The operation returns a task ID, which you can use with the DescribeTasks operation to get the download link for the screenshot.
 *
 * @param request CreateScreenshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScreenshotResponse
 */
CreateScreenshotResponse Client::createScreenshotWithOptions(const CreateScreenshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIdList()) {
    query["AndroidInstanceIdList"] = request.getAndroidInstanceIdList();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasScreenshotId()) {
    query["ScreenshotId"] = request.getScreenshotId();
  }

  if (!!request.hasSkipCheckPolicyConfig()) {
    query["SkipCheckPolicyConfig"] = request.getSkipCheckPolicyConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScreenshot"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScreenshotResponse>();
}

/**
 * @summary Creates a screenshot of a cloud phone instance.
 *
 * @description You can call this operation to create a screenshot of a cloud phone instance and upload it to the default Object Storage Service (OSS) bucket. The operation returns a task ID, which you can use with the DescribeTasks operation to get the download link for the screenshot.
 *
 * @param request CreateScreenshotRequest
 * @return CreateScreenshotResponse
 */
CreateScreenshotResponse Client::createScreenshot(const CreateScreenshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScreenshotWithOptions(request, runtime);
}

/**
 * @summary 创建系统属性模板
 *
 * @param tmpReq CreateSystemPropertyTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSystemPropertyTemplateResponse
 */
CreateSystemPropertyTemplateResponse Client::createSystemPropertyTemplateWithOptions(const CreateSystemPropertyTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSystemPropertyTemplateShrinkRequest request = CreateSystemPropertyTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSystemPropertyInfo()) {
    request.setSystemPropertyInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSystemPropertyInfo(), "SystemPropertyInfo", "json"));
  }

  json query = {};
  if (!!request.hasEnableAuto()) {
    query["EnableAuto"] = request.getEnableAuto();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasSystemPropertyInfoShrink()) {
    query["SystemPropertyInfo"] = request.getSystemPropertyInfoShrink();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSystemPropertyTemplate"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSystemPropertyTemplateResponse>();
}

/**
 * @summary 创建系统属性模板
 *
 * @param request CreateSystemPropertyTemplateRequest
 * @return CreateSystemPropertyTemplateResponse
 */
CreateSystemPropertyTemplateResponse Client::createSystemPropertyTemplate(const CreateSystemPropertyTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSystemPropertyTemplateWithOptions(request, runtime);
}

/**
 * @summary Delete an instance group.
 *
 * @description You can delete only pay-as-you-go instance groups.
 * You can delete subscription instance groups only after they expire.
 *
 * @param request DeleteAndroidInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAndroidInstanceGroupResponse
 */
DeleteAndroidInstanceGroupResponse Client::deleteAndroidInstanceGroupWithOptions(const DeleteAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceGroupIds()) {
    query["InstanceGroupIds"] = request.getInstanceGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAndroidInstanceGroup"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAndroidInstanceGroupResponse>();
}

/**
 * @summary Delete an instance group.
 *
 * @description You can delete only pay-as-you-go instance groups.
 * You can delete subscription instance groups only after they expire.
 *
 * @param request DeleteAndroidInstanceGroupRequest
 * @return DeleteAndroidInstanceGroupResponse
 */
DeleteAndroidInstanceGroupResponse Client::deleteAndroidInstanceGroup(const DeleteAndroidInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAndroidInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an application. Before you delete an application, make sure that the application is not installed on any instances.
 *
 * @param request DeleteAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppsResponse
 */
DeleteAppsResponse Client::deleteAppsWithOptions(const DeleteAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIdList()) {
    query["AppIdList"] = request.getAppIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApps"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppsResponse>();
}

/**
 * @summary Deletes an application. Before you delete an application, make sure that the application is not installed on any instances.
 *
 * @param request DeleteAppsRequest
 * @return DeleteAppsResponse
 */
DeleteAppsResponse Client::deleteApps(const DeleteAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppsWithOptions(request, runtime);
}

/**
 * @summary 删除备份文件
 *
 * @param request DeleteBackupFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupFileResponse
 */
DeleteBackupFileResponse Client::deleteBackupFileWithOptions(const DeleteBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupFileIdList()) {
    query["BackupFileIdList"] = request.getBackupFileIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackupFile"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupFileResponse>();
}

/**
 * @summary 删除备份文件
 *
 * @param request DeleteBackupFileRequest
 * @return DeleteBackupFileResponse
 */
DeleteBackupFileResponse Client::deleteBackupFile(const DeleteBackupFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupFileWithOptions(request, runtime);
}

/**
 * @summary Deletes a cloud phone matrix.
 *
 * @description Before you proceed, make sure that the cloud phone matrix that you want to delete expired.
 *
 * @param request DeleteCloudPhoneNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudPhoneNodesResponse
 */
DeleteCloudPhoneNodesResponse Client::deleteCloudPhoneNodesWithOptions(const DeleteCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeIds()) {
    body["NodeIds"] = request.getNodeIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCloudPhoneNodes"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudPhoneNodesResponse>();
}

/**
 * @summary Deletes a cloud phone matrix.
 *
 * @description Before you proceed, make sure that the cloud phone matrix that you want to delete expired.
 *
 * @param request DeleteCloudPhoneNodesRequest
 * @return DeleteCloudPhoneNodesResponse
 */
DeleteCloudPhoneNodesResponse Client::deleteCloudPhoneNodes(const DeleteCloudPhoneNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudPhoneNodesWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom image.
 *
 * @description You cannot delete an image that is currently in use by an instance group.
 *
 * @param tmpReq DeleteImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImagesResponse
 */
DeleteImagesResponse Client::deleteImagesWithOptions(const DeleteImagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteImagesShrinkRequest request = DeleteImagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImageIds()) {
    request.setImageIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getImageIds(), "ImageIds", "json"));
  }

  json body = {};
  if (!!request.hasImageIdsShrink()) {
    body["ImageIds"] = request.getImageIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteImages"},
    {"version" , "2023-09-30"},
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
 * @summary Deletes a custom image.
 *
 * @description You cannot delete an image that is currently in use by an instance group.
 *
 * @param request DeleteImagesRequest
 * @return DeleteImagesResponse
 */
DeleteImagesResponse Client::deleteImages(const DeleteImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImagesWithOptions(request, runtime);
}

/**
 * @summary Deletes Android Debug Bridge (ADB) key pairs.
 *
 * @description *   If a cloud phone instance is currently associated with the ADB key pair you intend to delete, the ADB key pair cannot be deleted.
 * *   Once an ADB key pair is deleted, it cannot be retrieved or queried by using the DescribeKeyPairs operation.
 *
 * @param request DeleteKeyPairsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKeyPairsResponse
 */
DeleteKeyPairsResponse Client::deleteKeyPairsWithOptions(const DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyPairIds()) {
    query["KeyPairIds"] = request.getKeyPairIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKeyPairs"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKeyPairsResponse>();
}

/**
 * @summary Deletes Android Debug Bridge (ADB) key pairs.
 *
 * @description *   If a cloud phone instance is currently associated with the ADB key pair you intend to delete, the ADB key pair cannot be deleted.
 * *   Once an ADB key pair is deleted, it cannot be retrieved or queried by using the DescribeKeyPairs operation.
 *
 * @param request DeleteKeyPairsRequest
 * @return DeleteKeyPairsResponse
 */
DeleteKeyPairsResponse Client::deleteKeyPairs(const DeleteKeyPairsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKeyPairsWithOptions(request, runtime);
}

/**
 * @summary Deletes a policy.
 *
 * @param request DeletePolicyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyGroupResponse
 */
DeletePolicyGroupResponse Client::deletePolicyGroupWithOptions(const DeletePolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyGroupIds()) {
    query["PolicyGroupIds"] = request.getPolicyGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicyGroup"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyGroupResponse>();
}

/**
 * @summary Deletes a policy.
 *
 * @param request DeletePolicyGroupRequest
 * @return DeletePolicyGroupResponse
 */
DeletePolicyGroupResponse Client::deletePolicyGroup(const DeletePolicyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyGroupWithOptions(request, runtime);
}

/**
 * @summary 删除系统属性模板
 *
 * @param request DeleteSystemPropertyTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSystemPropertyTemplatesResponse
 */
DeleteSystemPropertyTemplatesResponse Client::deleteSystemPropertyTemplatesWithOptions(const DeleteSystemPropertyTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.getTemplateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSystemPropertyTemplates"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSystemPropertyTemplatesResponse>();
}

/**
 * @summary 删除系统属性模板
 *
 * @param request DeleteSystemPropertyTemplatesRequest
 * @return DeleteSystemPropertyTemplatesResponse
 */
DeleteSystemPropertyTemplatesResponse Client::deleteSystemPropertyTemplates(const DeleteSystemPropertyTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSystemPropertyTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an instance group.
 *
 * @param request DescribeAndroidInstanceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAndroidInstanceGroupsResponse
 */
DescribeAndroidInstanceGroupsResponse Client::describeAndroidInstanceGroupsWithOptions(const DescribeAndroidInstanceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasInstanceGroupIds()) {
    query["InstanceGroupIds"] = request.getInstanceGroupIds();
  }

  if (!!request.hasInstanceGroupName()) {
    query["InstanceGroupName"] = request.getInstanceGroupName();
  }

  if (!!request.hasKeyPairId()) {
    query["KeyPairId"] = request.getKeyPairId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasSaleMode()) {
    query["SaleMode"] = request.getSaleMode();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAndroidInstanceGroups"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAndroidInstanceGroupsResponse>();
}

/**
 * @summary Queries the details of an instance group.
 *
 * @param request DescribeAndroidInstanceGroupsRequest
 * @return DescribeAndroidInstanceGroupsResponse
 */
DescribeAndroidInstanceGroupsResponse Client::describeAndroidInstanceGroups(const DescribeAndroidInstanceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAndroidInstanceGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries cloud phone instances.
 *
 * @param request DescribeAndroidInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAndroidInstancesResponse
 */
DescribeAndroidInstancesResponse Client::describeAndroidInstancesWithOptions(const DescribeAndroidInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIds()) {
    query["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasAndroidInstanceName()) {
    query["AndroidInstanceName"] = request.getAndroidInstanceName();
  }

  if (!!request.hasAppManagePolicyId()) {
    query["AppManagePolicyId"] = request.getAppManagePolicyId();
  }

  if (!!request.hasAuthorizedUserId()) {
    query["AuthorizedUserId"] = request.getAuthorizedUserId();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasInstanceGroupId()) {
    query["InstanceGroupId"] = request.getInstanceGroupId();
  }

  if (!!request.hasInstanceGroupIds()) {
    query["InstanceGroupIds"] = request.getInstanceGroupIds();
  }

  if (!!request.hasInstanceGroupName()) {
    query["InstanceGroupName"] = request.getInstanceGroupName();
  }

  if (!!request.hasKeyPairId()) {
    query["KeyPairId"] = request.getKeyPairId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasNodeName()) {
    query["NodeName"] = request.getNodeName();
  }

  if (!!request.hasOfficeSiteIds()) {
    query["OfficeSiteIds"] = request.getOfficeSiteIds();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.getPrivateIpAddress();
  }

  if (!!request.hasQosRuleIds()) {
    query["QosRuleIds"] = request.getQosRuleIds();
  }

  if (!!request.hasSaleMode()) {
    query["SaleMode"] = request.getSaleMode();
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
    {"action" , "DescribeAndroidInstances"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAndroidInstancesResponse>();
}

/**
 * @summary Queries cloud phone instances.
 *
 * @param request DescribeAndroidInstancesRequest
 * @return DescribeAndroidInstancesResponse
 */
DescribeAndroidInstancesResponse Client::describeAndroidInstances(const DescribeAndroidInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAndroidInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries applications.
 *
 * @param request DescribeAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppsResponse
 */
DescribeAppsResponse Client::describeAppsWithOptions(const DescribeAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIdList()) {
    query["AppIdList"] = request.getAppIdList();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.getAppType();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasInstallationStatus()) {
    query["InstallationStatus"] = request.getInstallationStatus();
  }

  if (!!request.hasMD5()) {
    query["MD5"] = request.getMD5();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApps"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppsResponse>();
}

/**
 * @summary Queries applications.
 *
 * @param request DescribeAppsRequest
 * @return DescribeAppsResponse
 */
DescribeAppsResponse Client::describeApps(const DescribeAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppsWithOptions(request, runtime);
}

/**
 * @summary Queries backup files.
 *
 * @description Currently, this operation allows you to query only backup files generated by cloud phones that are stored in Object Storage Service (OSS) buckets.
 *
 * @param request DescribeBackupFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupFilesResponse
 */
DescribeBackupFilesResponse Client::describeBackupFilesWithOptions(const DescribeBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceId()) {
    query["AndroidInstanceId"] = request.getAndroidInstanceId();
  }

  if (!!request.hasAndroidInstanceName()) {
    query["AndroidInstanceName"] = request.getAndroidInstanceName();
  }

  if (!!request.hasBackupAll()) {
    query["BackupAll"] = request.getBackupAll();
  }

  if (!!request.hasBackupFileId()) {
    query["BackupFileId"] = request.getBackupFileId();
  }

  if (!!request.hasBackupFileName()) {
    query["BackupFileName"] = request.getBackupFileName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasInstanceGroupId()) {
    query["InstanceGroupId"] = request.getInstanceGroupId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSaleMode()) {
    query["SaleMode"] = request.getSaleMode();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.getStatusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupFiles"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupFilesResponse>();
}

/**
 * @summary Queries backup files.
 *
 * @description Currently, this operation allows you to query only backup files generated by cloud phones that are stored in Object Storage Service (OSS) buckets.
 *
 * @param request DescribeBackupFilesRequest
 * @return DescribeBackupFilesResponse
 */
DescribeBackupFilesResponse Client::describeBackupFiles(const DescribeBackupFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupFilesWithOptions(request, runtime);
}

/**
 * @summary 查询bucket信息
 *
 * @param request DescribeBucketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBucketsResponse
 */
DescribeBucketsResponse Client::describeBucketsWithOptions(const DescribeBucketsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBuckets"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBucketsResponse>();
}

/**
 * @summary 查询bucket信息
 *
 * @param request DescribeBucketsRequest
 * @return DescribeBucketsResponse
 */
DescribeBucketsResponse Client::describeBuckets(const DescribeBucketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBucketsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a cloud phone matrix.
 *
 * @param request DescribeCloudPhoneNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudPhoneNodesResponse
 */
DescribeCloudPhoneNodesResponse Client::describeCloudPhoneNodesWithOptions(const DescribeCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.getNodeIds();
  }

  if (!!request.hasNodeName()) {
    query["NodeName"] = request.getNodeName();
  }

  if (!!request.hasServerType()) {
    query["ServerType"] = request.getServerType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudPhoneNodes"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudPhoneNodesResponse>();
}

/**
 * @summary Queries the details of a cloud phone matrix.
 *
 * @param request DescribeCloudPhoneNodesRequest
 * @return DescribeCloudPhoneNodesResponse
 */
DescribeCloudPhoneNodesResponse Client::describeCloudPhoneNodes(const DescribeCloudPhoneNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudPhoneNodesWithOptions(request, runtime);
}

/**
 * @summary 查询显示设置
 *
 * @param request DescribeDisplayConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDisplayConfigResponse
 */
DescribeDisplayConfigResponse Client::describeDisplayConfigWithOptions(const DescribeDisplayConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAndroidInstanceIds()) {
    body["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeDisplayConfig"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDisplayConfigResponse>();
}

/**
 * @summary 查询显示设置
 *
 * @param request DescribeDisplayConfigRequest
 * @return DescribeDisplayConfigResponse
 */
DescribeDisplayConfigResponse Client::describeDisplayConfig(const DescribeDisplayConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDisplayConfigWithOptions(request, runtime);
}

/**
 * @summary Queries images.
 *
 * @param request DescribeImageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImageListResponse
 */
DescribeImageListResponse Client::describeImageListWithOptions(const DescribeImageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageBizTags()) {
    query["ImageBizTags"] = request.getImageBizTags();
  }

  if (!!request.hasImagePackageType()) {
    query["ImagePackageType"] = request.getImagePackageType();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasSystemType()) {
    query["SystemType"] = request.getSystemType();
  }

  json body = {};
  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    body["ImageName"] = request.getImageName();
  }

  if (!!request.hasImageType()) {
    body["ImageType"] = request.getImageType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeImageList"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImageListResponse>();
}

/**
 * @summary Queries images.
 *
 * @param request DescribeImageListRequest
 * @return DescribeImageListResponse
 */
DescribeImageListResponse Client::describeImageList(const DescribeImageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageListWithOptions(request, runtime);
}

/**
 * @summary Queries the execution results of commands.
 *
 * @param request DescribeInvocationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvocationsResponse
 */
DescribeInvocationsResponse Client::describeInvocationsWithOptions(const DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInvocationId()) {
    query["InvocationId"] = request.getInvocationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInvocations"},
    {"version" , "2023-09-30"},
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
 * @summary Queries the execution results of commands.
 *
 * @param request DescribeInvocationsRequest
 * @return DescribeInvocationsResponse
 */
DescribeInvocationsResponse Client::describeInvocations(const DescribeInvocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvocationsWithOptions(request, runtime);
}

/**
 * @summary Queries one or more key pairs.
 *
 * @param request DescribeKeyPairsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKeyPairsResponse
 */
DescribeKeyPairsResponse Client::describeKeyPairsWithOptions(const DescribeKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyPairIds()) {
    query["KeyPairIds"] = request.getKeyPairIds();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKeyPairs"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKeyPairsResponse>();
}

/**
 * @summary Queries one or more key pairs.
 *
 * @param request DescribeKeyPairsRequest
 * @return DescribeKeyPairsResponse
 */
DescribeKeyPairsResponse Client::describeKeyPairs(const DescribeKeyPairsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKeyPairsWithOptions(request, runtime);
}

/**
 * @summary 查询指定监控项的最新监控数据
 *
 * @param request DescribeMetricLastRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricLastResponse
 */
DescribeMetricLastResponse Client::describeMetricLastWithOptions(const DescribeMetricLastRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  json body = {};
  if (!!request.hasAndroidInstanceIds()) {
    body["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLength()) {
    body["Length"] = request.getLength();
  }

  if (!!request.hasMetricNames()) {
    body["MetricNames"] = request.getMetricNames();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeMetricLast"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricLastResponse>();
}

/**
 * @summary 查询指定监控项的最新监控数据
 *
 * @param request DescribeMetricLastRequest
 * @return DescribeMetricLastResponse
 */
DescribeMetricLastResponse Client::describeMetricLast(const DescribeMetricLastRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricLastWithOptions(request, runtime);
}

/**
 * @summary 查询指定监控项的监控数据
 *
 * @param request DescribeMetricListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricListWithOptions(const DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAndroidInstanceIds()) {
    body["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    body["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasLength()) {
    body["Length"] = request.getLength();
  }

  if (!!request.hasMetricNames()) {
    body["MetricNames"] = request.getMetricNames();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasProcessInfos()) {
    body["ProcessInfos"] = request.getProcessInfos();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeMetricList"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricListResponse>();
}

/**
 * @summary 查询指定监控项的监控数据
 *
 * @param request DescribeMetricListRequest
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricList(const DescribeMetricListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricListWithOptions(request, runtime);
}

/**
 * @summary 查询指定监控项的最新监控数据
 *
 * @param request DescribeMetricTopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricTopResponse
 */
DescribeMetricTopResponse Client::describeMetricTopWithOptions(const DescribeMetricTopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAndroidInstanceIds()) {
    body["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    body["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasLength()) {
    body["Length"] = request.getLength();
  }

  if (!!request.hasMetricNames()) {
    body["MetricNames"] = request.getMetricNames();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeMetricTop"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricTopResponse>();
}

/**
 * @summary 查询指定监控项的最新监控数据
 *
 * @param request DescribeMetricTopRequest
 * @return DescribeMetricTopResponse
 */
DescribeMetricTopResponse Client::describeMetricTop(const DescribeMetricTopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricTopWithOptions(request, runtime);
}

/**
 * @summary Query available regions.
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

  if (!!request.hasSaleMode()) {
    query["SaleMode"] = request.getSaleMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2023-09-30"},
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
 * @summary Query available regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Query available specifications.
 *
 * @param request DescribeSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSpecResponse
 */
DescribeSpecResponse Client::describeSpecWithOptions(const DescribeSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasMatrixSpec()) {
    query["MatrixSpec"] = request.getMatrixSpec();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSaleMode()) {
    query["SaleMode"] = request.getSaleMode();
  }

  if (!!request.hasSpecIds()) {
    query["SpecIds"] = request.getSpecIds();
  }

  if (!!request.hasSpecStatus()) {
    query["SpecStatus"] = request.getSpecStatus();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSpec"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSpecResponse>();
}

/**
 * @summary Query available specifications.
 *
 * @param request DescribeSpecRequest
 * @return DescribeSpecResponse
 */
DescribeSpecResponse Client::describeSpec(const DescribeSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSpecWithOptions(request, runtime);
}

/**
 * @summary 查询系统属性模板
 *
 * @param request DescribeSystemPropertyTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemPropertyTemplatesResponse
 */
DescribeSystemPropertyTemplatesResponse Client::describeSystemPropertyTemplatesWithOptions(const DescribeSystemPropertyTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.getTemplateIds();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSystemPropertyTemplates"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSystemPropertyTemplatesResponse>();
}

/**
 * @summary 查询系统属性模板
 *
 * @param request DescribeSystemPropertyTemplatesRequest
 * @return DescribeSystemPropertyTemplatesResponse
 */
DescribeSystemPropertyTemplatesResponse Client::describeSystemPropertyTemplates(const DescribeSystemPropertyTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemPropertyTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries tasks created for a cloud phone instance.
 *
 * @description *   You can call the DescribeTasks operation to query the tasks created for one or more cloud phone instances.
 * *   The system currently supports various tasks, including starting, stopping, restarting, and resetting cloud phone instances; backing up and restoring data; installing apps; and executing remote commands.
 * *   You can use the Level field to specify the type of task. If Level is set to 1, it represents a batch task. If Level is set to 2, it represents an instance-level task.
 * **Example**
 * Assume you restart two cloud phone instances with the instance IDs acp-25nt4kk9whhok\\*\\*\\*\\* and acp-j2taq887orj8l\\*\\*\\*\\*, and the returned request ID is B8ED2BA9-0C6A-5643-818F-B5D60A64\\*\\*\\*\\*. If you want to check the operation outcomes of the two cloud phone instances, you can call the DescribeTasks operation. You need to set the InvokeId request parameter to B8ED2BA9-0C6A-5643-818F-B5D60A64\\*\\*\\*\\*. If you only want to check the cloud phone instance with the ID acp-25nt4kk9whhok\\*\\*\\*\\*, you must set the ParentTaskId request parameter to the ID of the batch task and the AndroidInstanceId request parameter to acp-25nt4kk9whhok\\*\\*\\*\\* when calling the DescribeTasks operation.
 *
 * @param request DescribeTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasksWithOptions(const DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInvokeId()) {
    query["InvokeId"] = request.getInvokeId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.getParam();
  }

  if (!!request.hasParentTaskId()) {
    query["ParentTaskId"] = request.getParentTaskId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasTaskStatuses()) {
    query["TaskStatuses"] = request.getTaskStatuses();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasTaskTypes()) {
    query["TaskTypes"] = request.getTaskTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTasks"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTasksResponse>();
}

/**
 * @summary Queries tasks created for a cloud phone instance.
 *
 * @description *   You can call the DescribeTasks operation to query the tasks created for one or more cloud phone instances.
 * *   The system currently supports various tasks, including starting, stopping, restarting, and resetting cloud phone instances; backing up and restoring data; installing apps; and executing remote commands.
 * *   You can use the Level field to specify the type of task. If Level is set to 1, it represents a batch task. If Level is set to 2, it represents an instance-level task.
 * **Example**
 * Assume you restart two cloud phone instances with the instance IDs acp-25nt4kk9whhok\\*\\*\\*\\* and acp-j2taq887orj8l\\*\\*\\*\\*, and the returned request ID is B8ED2BA9-0C6A-5643-818F-B5D60A64\\*\\*\\*\\*. If you want to check the operation outcomes of the two cloud phone instances, you can call the DescribeTasks operation. You need to set the InvokeId request parameter to B8ED2BA9-0C6A-5643-818F-B5D60A64\\*\\*\\*\\*. If you only want to check the cloud phone instance with the ID acp-25nt4kk9whhok\\*\\*\\*\\*, you must set the ParentTaskId request parameter to the ID of the batch task and the AndroidInstanceId request parameter to acp-25nt4kk9whhok\\*\\*\\*\\* when calling the DescribeTasks operation.
 *
 * @param request DescribeTasksRequest
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasks(const DescribeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTasksWithOptions(request, runtime);
}

/**
 * @summary Detaches an Android Debug Bridge (ADB) key pair from one or more cloud phone instances.
 *
 * @description *   After you detach an ADB key pair from a cloud phone instance, the ADB connection will fail. This occurs because the system can no longer authenticate using a valid ADB public key, leading to authentication errors.
 *
 * @param request DetachKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachKeyPairResponse
 */
DetachKeyPairResponse Client::detachKeyPairWithOptions(const DetachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasKeyPairId()) {
    query["KeyPairId"] = request.getKeyPairId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachKeyPair"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachKeyPairResponse>();
}

/**
 * @summary Detaches an Android Debug Bridge (ADB) key pair from one or more cloud phone instances.
 *
 * @description *   After you detach an ADB key pair from a cloud phone instance, the ADB connection will fail. This occurs because the system can no longer authenticate using a valid ADB public key, leading to authentication errors.
 *
 * @param request DetachKeyPairRequest
 * @return DetachKeyPairResponse
 */
DetachKeyPairResponse Client::detachKeyPair(const DetachKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachKeyPairWithOptions(request, runtime);
}

/**
 * @summary 实例断开连接
 *
 * @param request DisconnectAndroidInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisconnectAndroidInstanceResponse
 */
DisconnectAndroidInstanceResponse Client::disconnectAndroidInstanceWithOptions(const DisconnectAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisconnectAndroidInstance"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisconnectAndroidInstanceResponse>();
}

/**
 * @summary 实例断开连接
 *
 * @param request DisconnectAndroidInstanceRequest
 * @return DisconnectAndroidInstanceResponse
 */
DisconnectAndroidInstanceResponse Client::disconnectAndroidInstance(const DisconnectAndroidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disconnectAndroidInstanceWithOptions(request, runtime);
}

/**
 * @summary Distributes an image.
 *
 * @description After you distribute an image in supported regions, the distribution cannot be canceled.
 *
 * @param request DistributeImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DistributeImageResponse
 */
DistributeImageResponse Client::distributeImageWithOptions(const DistributeImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDistributeRegionList()) {
    body["DistributeRegionList"] = request.getDistributeRegionList();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DistributeImage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DistributeImageResponse>();
}

/**
 * @summary Distributes an image.
 *
 * @description After you distribute an image in supported regions, the distribution cannot be canceled.
 *
 * @param request DistributeImageRequest
 * @return DistributeImageResponse
 */
DistributeImageResponse Client::distributeImage(const DistributeImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return distributeImageWithOptions(request, runtime);
}

/**
 * @summary Downgrades an instance group. Currently, this operation allows you to only delete specific cloud phone instances from an instance group.
 *
 * @description This operation only allows you to scale down an instance group.
 *
 * @param request DowngradeAndroidInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DowngradeAndroidInstanceGroupResponse
 */
DowngradeAndroidInstanceGroupResponse Client::downgradeAndroidInstanceGroupWithOptions(const DowngradeAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIds()) {
    query["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasInstanceGroupId()) {
    query["InstanceGroupId"] = request.getInstanceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DowngradeAndroidInstanceGroup"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DowngradeAndroidInstanceGroupResponse>();
}

/**
 * @summary Downgrades an instance group. Currently, this operation allows you to only delete specific cloud phone instances from an instance group.
 *
 * @description This operation only allows you to scale down an instance group.
 *
 * @param request DowngradeAndroidInstanceGroupRequest
 * @return DowngradeAndroidInstanceGroupResponse
 */
DowngradeAndroidInstanceGroupResponse Client::downgradeAndroidInstanceGroup(const DowngradeAndroidInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downgradeAndroidInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary 结束协同
 *
 * @param request EndCoordinationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndCoordinationResponse
 */
EndCoordinationResponse Client::endCoordinationWithOptions(const EndCoordinationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoordinatorUserId()) {
    query["CoordinatorUserId"] = request.getCoordinatorUserId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.getOwnerUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EndCoordination"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EndCoordinationResponse>();
}

/**
 * @summary 结束协同
 *
 * @param request EndCoordinationRequest
 * @return EndCoordinationResponse
 */
EndCoordinationResponse Client::endCoordination(const EndCoordinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return endCoordinationWithOptions(request, runtime);
}

/**
 * @summary 存储扩容
 *
 * @param request ExpandDataVolumeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExpandDataVolumeResponse
 */
ExpandDataVolumeResponse Client::expandDataVolumeWithOptions(const ExpandDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.getNodeIds();
  }

  if (!!request.hasPhoneDataVolume()) {
    query["PhoneDataVolume"] = request.getPhoneDataVolume();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasShareDataVolume()) {
    query["ShareDataVolume"] = request.getShareDataVolume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExpandDataVolume"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExpandDataVolumeResponse>();
}

/**
 * @summary 存储扩容
 *
 * @param request ExpandDataVolumeRequest
 * @return ExpandDataVolumeResponse
 */
ExpandDataVolumeResponse Client::expandDataVolume(const ExpandDataVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return expandDataVolumeWithOptions(request, runtime);
}

/**
 * @summary 扩容实例的独立机身存储
 *
 * @param request ExpandPhoneDataVolumeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExpandPhoneDataVolumeResponse
 */
ExpandPhoneDataVolumeResponse Client::expandPhoneDataVolumeWithOptions(const ExpandPhoneDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPhoneDataVolume()) {
    query["PhoneDataVolume"] = request.getPhoneDataVolume();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExpandPhoneDataVolume"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExpandPhoneDataVolumeResponse>();
}

/**
 * @summary 扩容实例的独立机身存储
 *
 * @param request ExpandPhoneDataVolumeRequest
 * @return ExpandPhoneDataVolumeResponse
 */
ExpandPhoneDataVolumeResponse Client::expandPhoneDataVolume(const ExpandPhoneDataVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return expandPhoneDataVolumeWithOptions(request, runtime);
}

/**
 * @summary Pulls a file from a cloud phone instance and stores it in Object Storage Service (OSS).
 *
 * @description Currently, this operation allows you to retrieve files or folders from cloud phone instances and save them directly to OSS.
 *
 * @param request FetchFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchFileResponse
 */
FetchFileResponse Client::fetchFileWithOptions(const FetchFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIdList()) {
    query["AndroidInstanceIdList"] = request.getAndroidInstanceIdList();
  }

  if (!!request.hasSourceFilePath()) {
    query["SourceFilePath"] = request.getSourceFilePath();
  }

  if (!!request.hasUploadEndpoint()) {
    query["UploadEndpoint"] = request.getUploadEndpoint();
  }

  if (!!request.hasUploadType()) {
    query["UploadType"] = request.getUploadType();
  }

  if (!!request.hasUploadUrl()) {
    query["UploadUrl"] = request.getUploadUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FetchFile"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FetchFileResponse>();
}

/**
 * @summary Pulls a file from a cloud phone instance and stores it in Object Storage Service (OSS).
 *
 * @description Currently, this operation allows you to retrieve files or folders from cloud phone instances and save them directly to OSS.
 *
 * @param request FetchFileRequest
 * @return FetchFileResponse
 */
FetchFileResponse Client::fetchFile(const FetchFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchFileWithOptions(request, runtime);
}

/**
 * @summary Generates a collaboration code for the cloud phone being accessed by using the current convenience account, and shares this code with other convenience accounts to allow them to access the same cloud phone.
 *
 * @description You can call this operation to generate a collaboration code for a cloud phone accessed by your current account and share this code with other convenience users to allow them to access the same cloud phone over the desktop, mobile, or web client.
 *
 * @param request GenerateCoordinationCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateCoordinationCodeResponse
 */
GenerateCoordinationCodeResponse Client::generateCoordinationCodeWithOptions(const GenerateCoordinationCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.getOwnerUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateCoordinationCode"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateCoordinationCodeResponse>();
}

/**
 * @summary Generates a collaboration code for the cloud phone being accessed by using the current convenience account, and shares this code with other convenience accounts to allow them to access the same cloud phone.
 *
 * @description You can call this operation to generate a collaboration code for a cloud phone accessed by your current account and share this code with other convenience users to allow them to access the same cloud phone over the desktop, mobile, or web client.
 *
 * @param request GenerateCoordinationCodeRequest
 * @return GenerateCoordinationCodeResponse
 */
GenerateCoordinationCodeResponse Client::generateCoordinationCode(const GenerateCoordinationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateCoordinationCodeWithOptions(request, runtime);
}

/**
 * @summary 获取属性模板信息
 *
 * @param request GetInstancePropertiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstancePropertiesResponse
 */
GetInstancePropertiesResponse Client::getInstancePropertiesWithOptions(const GetInstancePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceProperties"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstancePropertiesResponse>();
}

/**
 * @summary 获取属性模板信息
 *
 * @param request GetInstancePropertiesRequest
 * @return GetInstancePropertiesResponse
 */
GetInstancePropertiesResponse Client::getInstanceProperties(const GetInstancePropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstancePropertiesWithOptions(request, runtime);
}

/**
 * @summary 导入自定义镜像
 *
 * @param request ImportImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportImageResponse
 */
ImportImageResponse Client::importImageWithOptions(const ImportImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageDescription()) {
    query["ImageDescription"] = request.getImageDescription();
  }

  if (!!request.hasImageFileURL()) {
    query["ImageFileURL"] = request.getImageFileURL();
  }

  if (!!request.hasImageName()) {
    query["ImageName"] = request.getImageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportImage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportImageResponse>();
}

/**
 * @summary 导入自定义镜像
 *
 * @param request ImportImageRequest
 * @return ImportImageResponse
 */
ImportImageResponse Client::importImage(const ImportImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importImageWithOptions(request, runtime);
}

/**
 * @summary Imports the public key of an Android Debug Bridge (ADB) key pair.
 *
 * @description To avoid authorization errors that could cause ADB connection failures, you must import the public key of an ADB key pair.
 *
 * @param request ImportKeyPairRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportKeyPairResponse
 */
ImportKeyPairResponse Client::importKeyPairWithOptions(const ImportKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasPublicKeyBody()) {
    query["PublicKeyBody"] = request.getPublicKeyBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportKeyPair"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportKeyPairResponse>();
}

/**
 * @summary Imports the public key of an Android Debug Bridge (ADB) key pair.
 *
 * @description To avoid authorization errors that could cause ADB connection failures, you must import the public key of an ADB key pair.
 *
 * @param request ImportKeyPairRequest
 * @return ImportKeyPairResponse
 */
ImportKeyPairResponse Client::importKeyPair(const ImportKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importKeyPairWithOptions(request, runtime);
}

/**
 * @summary Installs an app on multiple cloud phone instances at the same time.
 *
 * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
 *
 * @param request InstallAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallAppResponse
 */
InstallAppResponse Client::installAppWithOptions(const InstallAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIdList()) {
    query["AppIdList"] = request.getAppIdList();
  }

  if (!!request.hasInstanceGroupIdList()) {
    query["InstanceGroupIdList"] = request.getInstanceGroupIdList();
  }

  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallApp"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallAppResponse>();
}

/**
 * @summary Installs an app on multiple cloud phone instances at the same time.
 *
 * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
 *
 * @param request InstallAppRequest
 * @return InstallAppResponse
 */
InstallAppResponse Client::installApp(const InstallAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installAppWithOptions(request, runtime);
}

/**
 * @summary 安装监控插件
 *
 * @param request InstallMonitorAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallMonitorAgentResponse
 */
InstallMonitorAgentResponse Client::installMonitorAgentWithOptions(const InstallMonitorAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAndroidInstanceIds()) {
    body["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasSaleMode()) {
    body["SaleMode"] = request.getSaleMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "InstallMonitorAgent"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallMonitorAgentResponse>();
}

/**
 * @summary 安装监控插件
 *
 * @param request InstallMonitorAgentRequest
 * @return InstallMonitorAgentResponse
 */
InstallMonitorAgentResponse Client::installMonitorAgent(const InstallMonitorAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installMonitorAgentWithOptions(request, runtime);
}

/**
 * @summary 实例诊断
 *
 * @param request InstanceHealerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstanceHealerResponse
 */
InstanceHealerResponse Client::instanceHealerWithOptions(const InstanceHealerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasStrategy()) {
    query["Strategy"] = request.getStrategy();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstanceHealer"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstanceHealerResponse>();
}

/**
 * @summary 实例诊断
 *
 * @param request InstanceHealerRequest
 * @return InstanceHealerResponse
 */
InstanceHealerResponse Client::instanceHealer(const InstanceHealerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return instanceHealerWithOptions(request, runtime);
}

/**
 * @summary 查询ADB端口连接信息
 *
 * @param request ListInstanceAdbAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceAdbAttributesResponse
 */
ListInstanceAdbAttributesResponse Client::listInstanceAdbAttributesWithOptions(const ListInstanceAdbAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalIp()) {
    query["ExternalIp"] = request.getExternalIp();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceAdbAttributes"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceAdbAttributesResponse>();
}

/**
 * @summary 查询ADB端口连接信息
 *
 * @param request ListInstanceAdbAttributesRequest
 * @return ListInstanceAdbAttributesResponse
 */
ListInstanceAdbAttributesResponse Client::listInstanceAdbAttributes(const ListInstanceAdbAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceAdbAttributesWithOptions(request, runtime);
}

/**
 * @summary Queries policies.
 *
 * @param request ListPolicyGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicyGroupsResponse
 */
ListPolicyGroupsResponse Client::listPolicyGroupsWithOptions(const ListPolicyGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPolicyGroupIds()) {
    body["PolicyGroupIds"] = request.getPolicyGroupIds();
  }

  if (!!request.hasPolicyGroupName()) {
    body["PolicyGroupName"] = request.getPolicyGroupName();
  }

  if (!!request.hasPolicyType()) {
    body["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListPolicyGroups"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicyGroupsResponse>();
}

/**
 * @summary Queries policies.
 *
 * @param request ListPolicyGroupsRequest
 * @return ListPolicyGroupsResponse
 */
ListPolicyGroupsResponse Client::listPolicyGroups(const ListPolicyGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicyGroupsWithOptions(request, runtime);
}

/**
 * @summary 查询资源标签
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
    {"version" , "2023-09-30"},
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
 * @summary 查询资源标签
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies attributes of a cloud phone instance. Currently, this operation allows you to modify only the name of a cloud phone instance.
 *
 * @param request ModifyAndroidInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAndroidInstanceResponse
 */
ModifyAndroidInstanceResponse Client::modifyAndroidInstanceWithOptions(const ModifyAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceId()) {
    query["AndroidInstanceId"] = request.getAndroidInstanceId();
  }

  if (!!request.hasDownBandwidthLimit()) {
    query["DownBandwidthLimit"] = request.getDownBandwidthLimit();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasNewAndroidInstanceName()) {
    query["NewAndroidInstanceName"] = request.getNewAndroidInstanceName();
  }

  if (!!request.hasUpBandwidthLimit()) {
    query["UpBandwidthLimit"] = request.getUpBandwidthLimit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAndroidInstance"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAndroidInstanceResponse>();
}

/**
 * @summary Modifies attributes of a cloud phone instance. Currently, this operation allows you to modify only the name of a cloud phone instance.
 *
 * @param request ModifyAndroidInstanceRequest
 * @return ModifyAndroidInstanceResponse
 */
ModifyAndroidInstanceResponse Client::modifyAndroidInstance(const ModifyAndroidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAndroidInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies attributes of an instance group.
 *
 * @param request ModifyAndroidInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAndroidInstanceGroupResponse
 */
ModifyAndroidInstanceGroupResponse Client::modifyAndroidInstanceGroupWithOptions(const ModifyAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceGroupId()) {
    query["InstanceGroupId"] = request.getInstanceGroupId();
  }

  if (!!request.hasNewInstanceGroupName()) {
    query["NewInstanceGroupName"] = request.getNewInstanceGroupName();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasStreamMode()) {
    query["StreamMode"] = request.getStreamMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAndroidInstanceGroup"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAndroidInstanceGroupResponse>();
}

/**
 * @summary Modifies attributes of an instance group.
 *
 * @param request ModifyAndroidInstanceGroupRequest
 * @return ModifyAndroidInstanceGroupResponse
 */
ModifyAndroidInstanceGroupResponse Client::modifyAndroidInstanceGroup(const ModifyAndroidInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAndroidInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Modify attributes of an application.
 *
 * @param request ModifyAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppResponse
 */
ModifyAppResponse Client::modifyAppWithOptions(const ModifyAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasIconUrl()) {
    query["IconUrl"] = request.getIconUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApp"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppResponse>();
}

/**
 * @summary Modify attributes of an application.
 *
 * @param request ModifyAppRequest
 * @return ModifyAppResponse
 */
ModifyAppResponse Client::modifyApp(const ModifyAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppWithOptions(request, runtime);
}

/**
 * @summary Modifies a cloud phone matrix. Currently, you can only modify the name of a cloud phone matrix.
 *
 * @param request ModifyCloudPhoneNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCloudPhoneNodeResponse
 */
ModifyCloudPhoneNodeResponse Client::modifyCloudPhoneNodeWithOptions(const ModifyCloudPhoneNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewNodeName()) {
    query["NewNodeName"] = request.getNewNodeName();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasStreamMode()) {
    query["StreamMode"] = request.getStreamMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCloudPhoneNode"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCloudPhoneNodeResponse>();
}

/**
 * @summary Modifies a cloud phone matrix. Currently, you can only modify the name of a cloud phone matrix.
 *
 * @param request ModifyCloudPhoneNodeRequest
 * @return ModifyCloudPhoneNodeResponse
 */
ModifyCloudPhoneNodeResponse Client::modifyCloudPhoneNode(const ModifyCloudPhoneNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudPhoneNodeWithOptions(request, runtime);
}

/**
 * @summary 修改显示设置
 *
 * @param tmpReq ModifyDisplayConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDisplayConfigResponse
 */
ModifyDisplayConfigResponse Client::modifyDisplayConfigWithOptions(const ModifyDisplayConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDisplayConfigShrinkRequest request = ModifyDisplayConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDisplayConfig()) {
    request.setDisplayConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDisplayConfig(), "DisplayConfig", "json"));
  }

  json body = {};
  if (!!request.hasAndroidInstanceIds()) {
    body["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasDisplayConfigShrink()) {
    body["DisplayConfig"] = request.getDisplayConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyDisplayConfig"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDisplayConfigResponse>();
}

/**
 * @summary 修改显示设置
 *
 * @param request ModifyDisplayConfigRequest
 * @return ModifyDisplayConfigResponse
 */
ModifyDisplayConfigResponse Client::modifyDisplayConfig(const ModifyDisplayConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDisplayConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the billing method. Currently, this operation only allows you to change the billing method from pay-as-you-go to subscription.
 *
 * @param request ModifyInstanceChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceChargeTypeResponse
 */
ModifyInstanceChargeTypeResponse Client::modifyInstanceChargeTypeWithOptions(const ModifyInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasInstanceGroupIds()) {
    query["InstanceGroupIds"] = request.getInstanceGroupIds();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceChargeType"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceChargeTypeResponse>();
}

/**
 * @summary Modifies the billing method. Currently, this operation only allows you to change the billing method from pay-as-you-go to subscription.
 *
 * @param request ModifyInstanceChargeTypeRequest
 * @return ModifyInstanceChargeTypeResponse
 */
ModifyInstanceChargeTypeResponse Client::modifyInstanceChargeType(const ModifyInstanceChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies Android Debug Bridge (ADB) key pairs.
 *
 * @param request ModifyKeyPairNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyKeyPairNameResponse
 */
ModifyKeyPairNameResponse Client::modifyKeyPairNameWithOptions(const ModifyKeyPairNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyPairId()) {
    query["KeyPairId"] = request.getKeyPairId();
  }

  if (!!request.hasNewKeyPairName()) {
    query["NewKeyPairName"] = request.getNewKeyPairName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyKeyPairName"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyKeyPairNameResponse>();
}

/**
 * @summary Modifies Android Debug Bridge (ADB) key pairs.
 *
 * @param request ModifyKeyPairNameRequest
 * @return ModifyKeyPairNameResponse
 */
ModifyKeyPairNameResponse Client::modifyKeyPairName(const ModifyKeyPairNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyKeyPairNameWithOptions(request, runtime);
}

/**
 * @summary Modifies a policy.
 *
 * @param tmpReq ModifyPolicyGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolicyGroupResponse
 */
ModifyPolicyGroupResponse Client::modifyPolicyGroupWithOptions(const ModifyPolicyGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyPolicyGroupShrinkRequest request = ModifyPolicyGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetRedirectPolicy()) {
    request.setNetRedirectPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetRedirectPolicy(), "NetRedirectPolicy", "json"));
  }

  if (!!tmpReq.hasWatermark()) {
    request.setWatermarkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWatermark(), "Watermark", "json"));
  }

  json body = {};
  if (!!request.hasCameraRedirect()) {
    body["CameraRedirect"] = request.getCameraRedirect();
  }

  if (!!request.hasClipboard()) {
    body["Clipboard"] = request.getClipboard();
  }

  if (!!request.hasHtml5FileTransfer()) {
    body["Html5FileTransfer"] = request.getHtml5FileTransfer();
  }

  if (!!request.hasLocalDrive()) {
    body["LocalDrive"] = request.getLocalDrive();
  }

  if (!!request.hasLockResolution()) {
    body["LockResolution"] = request.getLockResolution();
  }

  if (!!request.hasNetRedirectPolicyShrink()) {
    body["NetRedirectPolicy"] = request.getNetRedirectPolicyShrink();
  }

  if (!!request.hasPolicyGroupId()) {
    body["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasPolicyGroupName()) {
    body["PolicyGroupName"] = request.getPolicyGroupName();
  }

  if (!!request.hasResolutionHeight()) {
    body["ResolutionHeight"] = request.getResolutionHeight();
  }

  if (!!request.hasResolutionWidth()) {
    body["ResolutionWidth"] = request.getResolutionWidth();
  }

  if (!!request.hasWatermarkShrink()) {
    body["Watermark"] = request.getWatermarkShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyPolicyGroup"},
    {"version" , "2023-09-30"},
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
 * @summary Modifies a policy.
 *
 * @param request ModifyPolicyGroupRequest
 * @return ModifyPolicyGroupResponse
 */
ModifyPolicyGroupResponse Client::modifyPolicyGroup(const ModifyPolicyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolicyGroupWithOptions(request, runtime);
}

/**
 * @summary 修改属性模板
 *
 * @param tmpReq ModifySystemPropertyTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySystemPropertyTemplateResponse
 */
ModifySystemPropertyTemplateResponse Client::modifySystemPropertyTemplateWithOptions(const ModifySystemPropertyTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifySystemPropertyTemplateShrinkRequest request = ModifySystemPropertyTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSystemPropertyInfo()) {
    request.setSystemPropertyInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSystemPropertyInfo(), "SystemPropertyInfo", "json"));
  }

  json query = {};
  if (!!request.hasEnableAuto()) {
    query["EnableAuto"] = request.getEnableAuto();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasSystemPropertyInfoShrink()) {
    query["SystemPropertyInfo"] = request.getSystemPropertyInfoShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySystemPropertyTemplate"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySystemPropertyTemplateResponse>();
}

/**
 * @summary 修改属性模板
 *
 * @param request ModifySystemPropertyTemplateRequest
 * @return ModifySystemPropertyTemplateResponse
 */
ModifySystemPropertyTemplateResponse Client::modifySystemPropertyTemplate(const ModifySystemPropertyTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySystemPropertyTemplateWithOptions(request, runtime);
}

/**
 * @summary Operates apps in a cloud phone, such as opening, closing, and reopening apps.
 *
 * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
 *
 * @param request OperateAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateAppResponse
 */
OperateAppResponse Client::operateAppWithOptions(const OperateAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateApp"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateAppResponse>();
}

/**
 * @summary Operates apps in a cloud phone, such as opening, closing, and reopening apps.
 *
 * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
 *
 * @param request OperateAppRequest
 * @return OperateAppResponse
 */
OperateAppResponse Client::operateApp(const OperateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateAppWithOptions(request, runtime);
}

/**
 * @summary Restarts one or more cloud phone instances.
 *
 * @description Before you restart a cloud phone instance, make sure it is in one of the following states: **Available, Abnormal, Backup failure, and Restoration failure**.
 *
 * @param request RebootAndroidInstancesInGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebootAndroidInstancesInGroupResponse
 */
RebootAndroidInstancesInGroupResponse Client::rebootAndroidInstancesInGroupWithOptions(const RebootAndroidInstancesInGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIds()) {
    query["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasForceStop()) {
    query["ForceStop"] = request.getForceStop();
  }

  if (!!request.hasSaleMode()) {
    query["SaleMode"] = request.getSaleMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebootAndroidInstancesInGroup"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebootAndroidInstancesInGroupResponse>();
}

/**
 * @summary Restarts one or more cloud phone instances.
 *
 * @description Before you restart a cloud phone instance, make sure it is in one of the following states: **Available, Abnormal, Backup failure, and Restoration failure**.
 *
 * @param request RebootAndroidInstancesInGroupRequest
 * @return RebootAndroidInstancesInGroupResponse
 */
RebootAndroidInstancesInGroupResponse Client::rebootAndroidInstancesInGroup(const RebootAndroidInstancesInGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootAndroidInstancesInGroupWithOptions(request, runtime);
}

/**
 * @summary Restores backup files.
 *
 * @description Currently, this operation allows you to restore only backup files generated by cloud phones that are stored in Object Storage Service (OSS) buckets.
 *
 * @param request RecoveryFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecoveryFileResponse
 */
RecoveryFileResponse Client::recoveryFileWithOptions(const RecoveryFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIdList()) {
    query["AndroidInstanceIdList"] = request.getAndroidInstanceIdList();
  }

  if (!!request.hasBackupAll()) {
    query["BackupAll"] = request.getBackupAll();
  }

  if (!!request.hasBackupFileId()) {
    query["BackupFileId"] = request.getBackupFileId();
  }

  if (!!request.hasBackupFilePath()) {
    query["BackupFilePath"] = request.getBackupFilePath();
  }

  if (!!request.hasUploadEndpoint()) {
    query["UploadEndpoint"] = request.getUploadEndpoint();
  }

  if (!!request.hasUploadType()) {
    query["UploadType"] = request.getUploadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecoveryFile"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecoveryFileResponse>();
}

/**
 * @summary Restores backup files.
 *
 * @description Currently, this operation allows you to restore only backup files generated by cloud phones that are stored in Object Storage Service (OSS) buckets.
 *
 * @param request RecoveryFileRequest
 * @return RecoveryFileResponse
 */
RecoveryFileResponse Client::recoveryFile(const RecoveryFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recoveryFileWithOptions(request, runtime);
}

/**
 * @summary Renews instance groups.
 *
 * @param request RenewAndroidInstanceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewAndroidInstanceGroupsResponse
 */
RenewAndroidInstanceGroupsResponse Client::renewAndroidInstanceGroupsWithOptions(const RenewAndroidInstanceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasInstanceGroupIds()) {
    query["InstanceGroupIds"] = request.getInstanceGroupIds();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewAndroidInstanceGroups"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewAndroidInstanceGroupsResponse>();
}

/**
 * @summary Renews instance groups.
 *
 * @param request RenewAndroidInstanceGroupsRequest
 * @return RenewAndroidInstanceGroupsResponse
 */
RenewAndroidInstanceGroupsResponse Client::renewAndroidInstanceGroups(const RenewAndroidInstanceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewAndroidInstanceGroupsWithOptions(request, runtime);
}

/**
 * @summary Renews a cloud mobile matrix.
 *
 * @param request RenewCloudPhoneNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewCloudPhoneNodesResponse
 */
RenewCloudPhoneNodesResponse Client::renewCloudPhoneNodesWithOptions(const RenewCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  json body = {};
  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasNodeIds()) {
    body["NodeIds"] = request.getNodeIds();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    body["PeriodUnit"] = request.getPeriodUnit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenewCloudPhoneNodes"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewCloudPhoneNodesResponse>();
}

/**
 * @summary Renews a cloud mobile matrix.
 *
 * @param request RenewCloudPhoneNodesRequest
 * @return RenewCloudPhoneNodesResponse
 */
RenewCloudPhoneNodesResponse Client::renewCloudPhoneNodes(const RenewCloudPhoneNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewCloudPhoneNodesWithOptions(request, runtime);
}

/**
 * @summary Resets one or more cloud phone instances.
 *
 * @description Before you reset a cloud phone instance, make sure it is in one of the following states: **Available, Stopped, Abnormal, Backup failure, and Restoration failure**.
 *
 * @param request ResetAndroidInstancesInGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAndroidInstancesInGroupResponse
 */
ResetAndroidInstancesInGroupResponse Client::resetAndroidInstancesInGroupWithOptions(const ResetAndroidInstancesInGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIds()) {
    query["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasSaleMode()) {
    query["SaleMode"] = request.getSaleMode();
  }

  if (!!request.hasSettingResetType()) {
    query["SettingResetType"] = request.getSettingResetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAndroidInstancesInGroup"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAndroidInstancesInGroupResponse>();
}

/**
 * @summary Resets one or more cloud phone instances.
 *
 * @description Before you reset a cloud phone instance, make sure it is in one of the following states: **Available, Stopped, Abnormal, Backup failure, and Restoration failure**.
 *
 * @param request ResetAndroidInstancesInGroupRequest
 * @return ResetAndroidInstancesInGroupResponse
 */
ResetAndroidInstancesInGroupResponse Client::resetAndroidInstancesInGroup(const ResetAndroidInstancesInGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAndroidInstancesInGroupWithOptions(request, runtime);
}

/**
 * @summary Executes a command on a cloud phone instance.
 *
 * @param request RunCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCommandResponse
 */
RunCommandResponse Client::runCommandWithOptions(const RunCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasCommandContent()) {
    query["CommandContent"] = request.getCommandContent();
  }

  if (!!request.hasContentEncoding()) {
    query["ContentEncoding"] = request.getContentEncoding();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunCommand"},
    {"version" , "2023-09-30"},
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
 * @summary Executes a command on a cloud phone instance.
 *
 * @param request RunCommandRequest
 * @return RunCommandResponse
 */
RunCommandResponse Client::runCommand(const RunCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCommandWithOptions(request, runtime);
}

/**
 * @summary Pushes files from Object Storage Service (OSS) buckets to cloud phone instances.
 *
 * @description Currently, this operation allows you to only push files or folders from OSS buckets to cloud phone instances.
 *
 * @param request SendFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendFileResponse
 */
SendFileResponse Client::sendFileWithOptions(const SendFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIdList()) {
    query["AndroidInstanceIdList"] = request.getAndroidInstanceIdList();
  }

  if (!!request.hasAutoInstall()) {
    query["AutoInstall"] = request.getAutoInstall();
  }

  if (!!request.hasSourceFilePath()) {
    query["SourceFilePath"] = request.getSourceFilePath();
  }

  if (!!request.hasTargetFileName()) {
    query["TargetFileName"] = request.getTargetFileName();
  }

  if (!!request.hasUploadEndpoint()) {
    query["UploadEndpoint"] = request.getUploadEndpoint();
  }

  if (!!request.hasUploadType()) {
    query["UploadType"] = request.getUploadType();
  }

  if (!!request.hasUploadUrl()) {
    query["UploadUrl"] = request.getUploadUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendFile"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendFileResponse>();
}

/**
 * @summary Pushes files from Object Storage Service (OSS) buckets to cloud phone instances.
 *
 * @description Currently, this operation allows you to only push files or folders from OSS buckets to cloud phone instances.
 *
 * @param request SendFileRequest
 * @return SendFileResponse
 */
SendFileResponse Client::sendFile(const SendFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendFileWithOptions(request, runtime);
}

/**
 * @summary 发送属性模板
 *
 * @param request SendSystemPropertyTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendSystemPropertyTemplateResponse
 */
SendSystemPropertyTemplateResponse Client::sendSystemPropertyTemplateWithOptions(const SendSystemPropertyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.getTemplateIds();
  }

  json body = {};
  if (!!request.hasAndroidInstanceIds()) {
    body["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendSystemPropertyTemplate"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendSystemPropertyTemplateResponse>();
}

/**
 * @summary 发送属性模板
 *
 * @param request SendSystemPropertyTemplateRequest
 * @return SendSystemPropertyTemplateResponse
 */
SendSystemPropertyTemplateResponse Client::sendSystemPropertyTemplate(const SendSystemPropertyTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendSystemPropertyTemplateWithOptions(request, runtime);
}

/**
 * @summary Sets the authentication status for cloud phone instances. If you enable Android Debug Bridge (ADB) authentication for cloud phone instances, the system will verify the validity of the ADB key pairs provided by end users when they connect to the instances over ADB. To ensure successful authentication and a proper connection, we recommend that you attach ADB key pairs to cloud phone instances. If you disable ADB authentication for cloud phone instances, the system will no longer verify the validity of any ADB key pairs. As a result, end users can connect to the cloud phone instances over ADB without authentication, provided the network connection is functioning properly.
 *
 * @description Before you call this operation, make sure that the desired cloud phone instance is in the Running state.
 *
 * @param request SetAdbSecureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAdbSecureResponse
 */
SetAdbSecureResponse Client::setAdbSecureWithOptions(const SetAdbSecureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAdbSecure"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAdbSecureResponse>();
}

/**
 * @summary Sets the authentication status for cloud phone instances. If you enable Android Debug Bridge (ADB) authentication for cloud phone instances, the system will verify the validity of the ADB key pairs provided by end users when they connect to the instances over ADB. To ensure successful authentication and a proper connection, we recommend that you attach ADB key pairs to cloud phone instances. If you disable ADB authentication for cloud phone instances, the system will no longer verify the validity of any ADB key pairs. As a result, end users can connect to the cloud phone instances over ADB without authentication, provided the network connection is functioning properly.
 *
 * @description Before you call this operation, make sure that the desired cloud phone instance is in the Running state.
 *
 * @param request SetAdbSecureRequest
 * @return SetAdbSecureResponse
 */
SetAdbSecureResponse Client::setAdbSecure(const SetAdbSecureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAdbSecureWithOptions(request, runtime);
}

/**
 * @summary Start instances.
 *
 * @description Only supports starting when the instance is in the **Stopped, Backup Failed, or Recovery Failed** state.
 *
 * @param request StartAndroidInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAndroidInstanceResponse
 */
StartAndroidInstanceResponse Client::startAndroidInstanceWithOptions(const StartAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIds()) {
    query["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasSaleMode()) {
    query["SaleMode"] = request.getSaleMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartAndroidInstance"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAndroidInstanceResponse>();
}

/**
 * @summary Start instances.
 *
 * @description Only supports starting when the instance is in the **Stopped, Backup Failed, or Recovery Failed** state.
 *
 * @param request StartAndroidInstanceRequest
 * @return StartAndroidInstanceResponse
 */
StartAndroidInstanceResponse Client::startAndroidInstance(const StartAndroidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAndroidInstanceWithOptions(request, runtime);
}

/**
 * @summary 开启实例ADB端口并创建端口转发条目
 *
 * @param request StartInstanceAdbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceAdbResponse
 */
StartInstanceAdbResponse Client::startInstanceAdbWithOptions(const StartInstanceAdbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstanceAdb"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceAdbResponse>();
}

/**
 * @summary 开启实例ADB端口并创建端口转发条目
 *
 * @param request StartInstanceAdbRequest
 * @return StartInstanceAdbResponse
 */
StartInstanceAdbResponse Client::startInstanceAdb(const StartInstanceAdbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceAdbWithOptions(request, runtime);
}

/**
 * @summary Stops a cloud phone instance.
 *
 * @description Before you stop a cloud phone instance, make sure it is in one of the following states: **Available, Backup failure, and Restoration failure**.
 *
 * @param request StopAndroidInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAndroidInstanceResponse
 */
StopAndroidInstanceResponse Client::stopAndroidInstanceWithOptions(const StopAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIds()) {
    query["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasForceStop()) {
    query["ForceStop"] = request.getForceStop();
  }

  if (!!request.hasSaleMode()) {
    query["SaleMode"] = request.getSaleMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAndroidInstance"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAndroidInstanceResponse>();
}

/**
 * @summary Stops a cloud phone instance.
 *
 * @description Before you stop a cloud phone instance, make sure it is in one of the following states: **Available, Backup failure, and Restoration failure**.
 *
 * @param request StopAndroidInstanceRequest
 * @return StopAndroidInstanceResponse
 */
StopAndroidInstanceResponse Client::stopAndroidInstance(const StopAndroidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAndroidInstanceWithOptions(request, runtime);
}

/**
 * @summary 停止实例ADB端口并删除端口转发条目
 *
 * @param request StopInstanceAdbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceAdbResponse
 */
StopInstanceAdbResponse Client::stopInstanceAdbWithOptions(const StopInstanceAdbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstanceAdb"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceAdbResponse>();
}

/**
 * @summary 停止实例ADB端口并删除端口转发条目
 *
 * @param request StopInstanceAdbRequest
 * @return StopInstanceAdbResponse
 */
StopInstanceAdbResponse Client::stopInstanceAdb(const StopInstanceAdbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceAdbWithOptions(request, runtime);
}

/**
 * @summary 给资源打标签
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"version" , "2023-09-30"},
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
 * @summary 给资源打标签
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Uninstalls an app from multiple cloud phone instances.
 *
 * @description This operation runs asynchronously. To check the operation result, you can visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
 *
 * @param request UninstallAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallAppResponse
 */
UninstallAppResponse Client::uninstallAppWithOptions(const UninstallAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIdList()) {
    query["AppIdList"] = request.getAppIdList();
  }

  if (!!request.hasInstanceGroupIdList()) {
    query["InstanceGroupIdList"] = request.getInstanceGroupIdList();
  }

  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UninstallApp"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallAppResponse>();
}

/**
 * @summary Uninstalls an app from multiple cloud phone instances.
 *
 * @description This operation runs asynchronously. To check the operation result, you can visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
 *
 * @param request UninstallAppRequest
 * @return UninstallAppResponse
 */
UninstallAppResponse Client::uninstallApp(const UninstallAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallAppWithOptions(request, runtime);
}

/**
 * @summary 卸载监控插件
 *
 * @param request UninstallMonitorAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallMonitorAgentResponse
 */
UninstallMonitorAgentResponse Client::uninstallMonitorAgentWithOptions(const UninstallMonitorAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAndroidInstanceIds()) {
    body["AndroidInstanceIds"] = request.getAndroidInstanceIds();
  }

  if (!!request.hasSaleMode()) {
    body["SaleMode"] = request.getSaleMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UninstallMonitorAgent"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallMonitorAgentResponse>();
}

/**
 * @summary 卸载监控插件
 *
 * @param request UninstallMonitorAgentRequest
 * @return UninstallMonitorAgentResponse
 */
UninstallMonitorAgentResponse Client::uninstallMonitorAgent(const UninstallMonitorAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallMonitorAgentWithOptions(request, runtime);
}

/**
 * @summary 删除资源标签
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
    {"version" , "2023-09-30"},
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
 * @summary 删除资源标签
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates the name of a custom image.
 *
 * @param request UpdateCustomImageNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomImageNameResponse
 */
UpdateCustomImageNameResponse Client::updateCustomImageNameWithOptions(const UpdateCustomImageNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    body["ImageName"] = request.getImageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateCustomImageName"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomImageNameResponse>();
}

/**
 * @summary Updates the name of a custom image.
 *
 * @param request UpdateCustomImageNameRequest
 * @return UpdateCustomImageNameResponse
 */
UpdateCustomImageNameResponse Client::updateCustomImageName(const UpdateCustomImageNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomImageNameWithOptions(request, runtime);
}

/**
 * @summary Changes the image of an instance group.
 *
 * @description Before you call this operation, make sure the image is in the Available state and the region of the image is included in the region list of the desired instance group. In addition, the instance group itself is available.
 *
 * @param request UpdateInstanceGroupImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceGroupImageResponse
 */
UpdateInstanceGroupImageResponse Client::updateInstanceGroupImageWithOptions(const UpdateInstanceGroupImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceGroupIds()) {
    body["InstanceGroupIds"] = request.getInstanceGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceGroupImage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceGroupImageResponse>();
}

/**
 * @summary Changes the image of an instance group.
 *
 * @description Before you call this operation, make sure the image is in the Available state and the region of the image is included in the region list of the desired instance group. In addition, the instance group itself is available.
 *
 * @param request UpdateInstanceGroupImageRequest
 * @return UpdateInstanceGroupImageResponse
 */
UpdateInstanceGroupImageResponse Client::updateInstanceGroupImage(const UpdateInstanceGroupImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceGroupImageWithOptions(request, runtime);
}

/**
 * @summary 更新实例镜像
 *
 * @param request UpdateInstanceImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceImageResponse
 */
UpdateInstanceImageResponse Client::updateInstanceImageWithOptions(const UpdateInstanceImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasReset()) {
    query["Reset"] = request.getReset();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceImage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceImageResponse>();
}

/**
 * @summary 更新实例镜像
 *
 * @param request UpdateInstanceImageRequest
 * @return UpdateInstanceImageResponse
 */
UpdateInstanceImageResponse Client::updateInstanceImage(const UpdateInstanceImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceImageWithOptions(request, runtime);
}

/**
 * @summary Upgrades an instance group. Currently, this operation allows you to only increase the number of instances in an instance group.
 *
 * @description Currently, this operation allows you to only increase the size of an instance group.
 *
 * @param request UpgradeAndroidInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeAndroidInstanceGroupResponse
 */
UpgradeAndroidInstanceGroupResponse Client::upgradeAndroidInstanceGroupWithOptions(const UpgradeAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasIncreaseNumberOfInstance()) {
    query["IncreaseNumberOfInstance"] = request.getIncreaseNumberOfInstance();
  }

  if (!!request.hasInstanceGroupId()) {
    query["InstanceGroupId"] = request.getInstanceGroupId();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeAndroidInstanceGroup"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeAndroidInstanceGroupResponse>();
}

/**
 * @summary Upgrades an instance group. Currently, this operation allows you to only increase the number of instances in an instance group.
 *
 * @description Currently, this operation allows you to only increase the size of an instance group.
 *
 * @param request UpgradeAndroidInstanceGroupRequest
 * @return UpgradeAndroidInstanceGroupResponse
 */
UpgradeAndroidInstanceGroupResponse Client::upgradeAndroidInstanceGroup(const UpgradeAndroidInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeAndroidInstanceGroupWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace EdsAic20230930