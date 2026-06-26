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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "eds-aic.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "eds-aic.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @description - You can attach to an ADB key pair only to cloud phone instances in the Running state.
 * - After you attach an ADB key pair, make sure the private key of the ADB key pair is copied to the \\~/.android directory (macOS or Linux operating systems) or the C:\\Users\\Username.android directory (Windows operating systems). In addition, you must run the adb kill-server command to restart the ADB process to ensure correct ADB connection. Otherwise, ADB connection may fail due to authentication exceptions.
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
 * @description - You can attach to an ADB key pair only to cloud phone instances in the Running state.
 * - After you attach an ADB key pair, make sure the private key of the ADB key pair is copied to the \\~/.android directory (macOS or Linux operating systems) or the C:\\Users\\Username.android directory (Windows operating systems). In addition, you must run the adb kill-server command to restart the ADB process to ensure correct ADB connection. Otherwise, ADB connection may fail due to authentication exceptions.
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
 * @summary Creates a full backup of a Cloud Phone instance. The backup includes installed applications and properties.
 *
 * @description 1. To ensure that the backup is successful, shut down the instance before you start the data backup. The operation may fail if the cloud phone instance is used during the backup process.
 * 2. You should test the backup file to ensure that you can restore the instance from it. After the restoration is complete, verify that your data is complete and that all features function correctly. Do not delete the original backup file or reset the source instance until this verification is complete. Otherwise, you may lose your data.
 * 3. You cannot back up and restore data between different image versions, between custom images and public images, or across different architectures, such as cpm.gx7.10xlarge and cpm.gx8.16xlarge.
 *
 * @param request BackupAndroidInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BackupAndroidInstanceResponse
 */
BackupAndroidInstanceResponse Client::backupAndroidInstanceWithOptions(const BackupAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIdList()) {
    query["AndroidInstanceIdList"] = request.getAndroidInstanceIdList();
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

  if (!!request.hasUploadEndpoint()) {
    query["UploadEndpoint"] = request.getUploadEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BackupAndroidInstance"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BackupAndroidInstanceResponse>();
}

/**
 * @summary Creates a full backup of a Cloud Phone instance. The backup includes installed applications and properties.
 *
 * @description 1. To ensure that the backup is successful, shut down the instance before you start the data backup. The operation may fail if the cloud phone instance is used during the backup process.
 * 2. You should test the backup file to ensure that you can restore the instance from it. After the restoration is complete, verify that your data is complete and that all features function correctly. Do not delete the original backup file or reset the source instance until this verification is complete. Otherwise, you may lose your data.
 * 3. You cannot back up and restore data between different image versions, between custom images and public images, or across different architectures, such as cpm.gx7.10xlarge and cpm.gx8.16xlarge.
 *
 * @param request BackupAndroidInstanceRequest
 * @return BackupAndroidInstanceResponse
 */
BackupAndroidInstanceResponse Client::backupAndroidInstance(const BackupAndroidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return backupAndroidInstanceWithOptions(request, runtime);
}

/**
 * @summary Backs up specified applications on a cloud phone instance. The backup includes the application and its cache.
 *
 * @description 1. Shut down the cloud phone instance before you back up data to ensure that the operation succeeds. Using the cloud phone during a backup may cause the operation to fail.
 * 2. Ensure that the backup file can be used to restore the instance successfully. After you restore from a backup, verify that your data is complete and that all features are working correctly. Do not delete the original backup file or reset the source instance until you complete this verification. Failure to do so may result in data loss.
 * 3. Backup and restore operations are not suppported across different image versions, between custom images and public images, or across different architectures, such as cpm.gx7.10xlarge and cpm.gx8.16xlarge.
 *
 * @param request BackupAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BackupAppResponse
 */
BackupAppResponse Client::backupAppWithOptions(const BackupAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIdList()) {
    query["AndroidInstanceIdList"] = request.getAndroidInstanceIdList();
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

  if (!!request.hasSourceAppList()) {
    query["SourceAppList"] = request.getSourceAppList();
  }

  if (!!request.hasUploadEndpoint()) {
    query["UploadEndpoint"] = request.getUploadEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BackupApp"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BackupAppResponse>();
}

/**
 * @summary Backs up specified applications on a cloud phone instance. The backup includes the application and its cache.
 *
 * @description 1. Shut down the cloud phone instance before you back up data to ensure that the operation succeeds. Using the cloud phone during a backup may cause the operation to fail.
 * 2. Ensure that the backup file can be used to restore the instance successfully. After you restore from a backup, verify that your data is complete and that all features are working correctly. Do not delete the original backup file or reset the source instance until you complete this verification. Failure to do so may result in data loss.
 * 3. Backup and restore operations are not suppported across different image versions, between custom images and public images, or across different architectures, such as cpm.gx7.10xlarge and cpm.gx8.16xlarge.
 *
 * @param request BackupAppRequest
 * @return BackupAppResponse
 */
BackupAppResponse Client::backupApp(const BackupAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return backupAppWithOptions(request, runtime);
}

/**
 * @summary Generates a backup file and uploads it to remote storage. You can use this operation for regular data backups. You can also back up files from one instance and restore them to multiple instances, a process similar to data replication or migration.
 *
 * @description You can save backup files generated by cloud phones only to Object Storage Service (OSS).
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
 * @summary Generates a backup file and uploads it to remote storage. You can use this operation for regular data backups. You can also back up files from one instance and restore them to multiple instances, a process similar to data replication or migration.
 *
 * @description You can save backup files generated by cloud phones only to Object Storage Service (OSS).
 *
 * @param request BackupFileRequest
 * @return BackupFileResponse
 */
BackupFileResponse Client::backupFile(const BackupFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return backupFileWithOptions(request, runtime);
}

/**
 * @summary Retrieves connection tickets in batch. This operation generates connection tickets asynchronously. In most cases, the tickets are returned directly in the response of the first call. However, in some situations, the initial response will contain a `TaskId`. You must then poll this endpoint with the `TaskId` until the generation is complete and the tickets are returned.
 *
 * @description <props="china">
 * 本接口的作用因云手机产品版本和实例串流模式而异：
 * - 云手机实例版或云手机矩阵版（抢占模式）：只能通过同一个`EnduserId`获取`Ticket`。
 * - 云手机矩阵版（协同模式）：可通过传入不同的`EnduserId`来为不同的用户（至多 5 个）同时获取`Ticket`并串流。每次只能传入 1 个`EnduserId`。
 * > 实例串流模式可通过 [ModifyCloudPhoneNode](https://help.aliyun.com/document_detail/2878539.html) 接口的`StreamMode`参数来定义。
 *
 * @param request BatchGetAcpConnectionTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetAcpConnectionTicketResponse
 */
BatchGetAcpConnectionTicketResponse Client::batchGetAcpConnectionTicketWithOptions(const BatchGetAcpConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionMode()) {
    query["ConnectionMode"] = request.getConnectionMode();
  }

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

  if (!!request.hasPorts()) {
    query["Ports"] = request.getPorts();
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
 * @summary Retrieves connection tickets in batch. This operation generates connection tickets asynchronously. In most cases, the tickets are returned directly in the response of the first call. However, in some situations, the initial response will contain a `TaskId`. You must then poll this endpoint with the `TaskId` until the generation is complete and the tickets are returned.
 *
 * @description <props="china">
 * 本接口的作用因云手机产品版本和实例串流模式而异：
 * - 云手机实例版或云手机矩阵版（抢占模式）：只能通过同一个`EnduserId`获取`Ticket`。
 * - 云手机矩阵版（协同模式）：可通过传入不同的`EnduserId`来为不同的用户（至多 5 个）同时获取`Ticket`并串流。每次只能传入 1 个`EnduserId`。
 * > 实例串流模式可通过 [ModifyCloudPhoneNode](https://help.aliyun.com/document_detail/2878539.html) 接口的`StreamMode`参数来定义。
 *
 * @param request BatchGetAcpConnectionTicketRequest
 * @return BatchGetAcpConnectionTicketResponse
 */
BatchGetAcpConnectionTicketResponse Client::batchGetAcpConnectionTicket(const BatchGetAcpConnectionTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetAcpConnectionTicketWithOptions(request, runtime);
}

/**
 * @summary Cancels running agent tasks on a mobile node.
 *
 * @param request CancelAgentTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAgentTaskResponse
 */
CancelAgentTaskResponse Client::cancelAgentTaskWithOptions(const CancelAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelAgentTask"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAgentTaskResponse>();
}

/**
 * @summary Cancels running agent tasks on a mobile node.
 *
 * @param request CancelAgentTaskRequest
 * @return CancelAgentTaskResponse
 */
CancelAgentTaskResponse Client::cancelAgentTask(const CancelAgentTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAgentTaskWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a cloud phone matrix, including the instance type and the number of cloud phone instances.
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
 * @summary Modifies the configuration of a cloud phone matrix, including the instance type and the number of cloud phone instances.
 *
 * @param request ChangeCloudPhoneNodeRequest
 * @return ChangeCloudPhoneNodeResponse
 */
ChangeCloudPhoneNodeResponse Client::changeCloudPhoneNode(const ChangeCloudPhoneNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeCloudPhoneNodeWithOptions(request, runtime);
}

/**
 * @summary Checks the inventory of Cloud Phone resources. Before you create an instance, call this operation to check whether resources are available in the target region. Create the instance only after you confirm that resources are available.
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
 * @summary Checks the inventory of Cloud Phone resources. Before you create an instance, call this operation to check whether resources are available in the target region. Create the instance only after you confirm that resources are available.
 *
 * @param request CheckResourceStockRequest
 * @return CheckResourceStockResponse
 */
CheckResourceStockResponse Client::checkResourceStock(const CheckResourceStockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkResourceStockWithOptions(request, runtime);
}

/**
 * @summary Create pay-as-you-go or subscription cloud phone instance groups. An instance group can manage multiple instances. You can group instances with similar functions into an instance group to manage them as a single unit.
 *
 * @description <props="china">
 * Before you create a cloud phone instance group, you must complete identity verification. For more information, see [Individual identity verification](https://help.aliyun.com/document_detail/48263.html).
 * Note that creating a cloud phone instance group incurs charges. Before you proceed, make sure that you understand the [billing method](https://help.aliyun.com/document_detail/2807121.html).
 * - If the billing method for the instance group is subscription (PrePaid), AutoPay is set to false by default. After you call the API, go to <props="china">[Alibaba Cloud Expenses and Costs](https://usercenter2.aliyun.com/order/list)<props="intl">[Alibaba Cloud Expenses and Costs](https://usercenter2-intl.aliyun.com/order/list) to manually pay for the order.
 * - To enable automatic payments, set AutoPay to true.
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

  if (!!request.hasInstanceVersion()) {
    query["InstanceVersion"] = request.getInstanceVersion();
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

  if (!!request.hasPaidCallBackUrl()) {
    query["PaidCallBackUrl"] = request.getPaidCallBackUrl();
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

  if (!!request.hasSaleMode()) {
    query["SaleMode"] = request.getSaleMode();
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
 * @summary Create pay-as-you-go or subscription cloud phone instance groups. An instance group can manage multiple instances. You can group instances with similar functions into an instance group to manage them as a single unit.
 *
 * @description <props="china">
 * Before you create a cloud phone instance group, you must complete identity verification. For more information, see [Individual identity verification](https://help.aliyun.com/document_detail/48263.html).
 * Note that creating a cloud phone instance group incurs charges. Before you proceed, make sure that you understand the [billing method](https://help.aliyun.com/document_detail/2807121.html).
 * - If the billing method for the instance group is subscription (PrePaid), AutoPay is set to false by default. After you call the API, go to <props="china">[Alibaba Cloud Expenses and Costs](https://usercenter2.aliyun.com/order/list)<props="intl">[Alibaba Cloud Expenses and Costs](https://usercenter2-intl.aliyun.com/order/list) to manually pay for the order.
 * - To enable automatic payments, set AutoPay to true.
 *
 * @param request CreateAndroidInstanceGroupRequest
 * @return CreateAndroidInstanceGroupResponse
 */
CreateAndroidInstanceGroupResponse Client::createAndroidInstanceGroup(const CreateAndroidInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAndroidInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an Android application. Before you can install an application, you must use this API operation to create it. The application is not downloaded when it is created. It is downloaded only during installation. Ensure that the cloud phone can access the download URL.
 *
 * @description When you create an application, you can pass the application information in one of the following two ways:
 * - Method 1: Pass an application from the WUYING Workspace app center.
 *   - Supported methods:
 *     - Method 1: Pass `FileName` and `FilePath`. Both parameters are required.
 *     - Method 2: Pass `OssAppUrl`.
 *   - Rule: If you pass an application from the WUYING Workspace app center, you must use at least one of the two methods. If you use both, Method 1 takes precedence.
 *   - Prerequisite: Log on to the [Elastic Desktop Service Enterprise console](https://eds.console.aliyun.com/osshelp). Follow the on-screen instructions to upload your application file to the WUYING Workspace app center. You can then obtain the required request parameters for this operation: `FileName` and `FilePath`, or `OssAppUrl`.
 * - Method 2: Pass a custom application.
 *   - Supported method: Pass `CustomAppInfo`.
 *   - Rule: If you pass `CustomAppInfo`, all six fields in this object parameter are required.
 * > If you use both Method 1 and Method 2, the information passed in Method 2 takes precedence.
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
 * @summary Creates an Android application. Before you can install an application, you must use this API operation to create it. The application is not downloaded when it is created. It is downloaded only during installation. Ensure that the cloud phone can access the download URL.
 *
 * @description When you create an application, you can pass the application information in one of the following two ways:
 * - Method 1: Pass an application from the WUYING Workspace app center.
 *   - Supported methods:
 *     - Method 1: Pass `FileName` and `FilePath`. Both parameters are required.
 *     - Method 2: Pass `OssAppUrl`.
 *   - Rule: If you pass an application from the WUYING Workspace app center, you must use at least one of the two methods. If you use both, Method 1 takes precedence.
 *   - Prerequisite: Log on to the [Elastic Desktop Service Enterprise console](https://eds.console.aliyun.com/osshelp). Follow the on-screen instructions to upload your application file to the WUYING Workspace app center. You can then obtain the required request parameters for this operation: `FileName` and `FilePath`, or `OssAppUrl`.
 * - Method 2: Pass a custom application.
 *   - Supported method: Pass `CustomAppInfo`.
 *   - Rule: If you pass `CustomAppInfo`, all six fields in this object parameter are required.
 * > If you use both Method 1 and Method 2, the information passed in Method 2 takes precedence.
 *
 * @param request CreateAppRequest
 * @return CreateAppResponse
 */
CreateAppResponse Client::createApp(const CreateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppWithOptions(request, runtime);
}

/**
 * @summary In Cloud Phone, a matrix is a logical resource management unit that represents a physical server instance. Creating a matrix provisions a physical server, which you can then partition into multiple independent Cloud Phone instances. These instances share the compute, storage, and network resources of the matrix. The matrix configuration determines how many instances you can create.
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

  if (!!request.hasPaidCallBackUrl()) {
    query["PaidCallBackUrl"] = request.getPaidCallBackUrl();
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
 * @summary In Cloud Phone, a matrix is a logical resource management unit that represents a physical server instance. Creating a matrix provisions a physical server, which you can then partition into multiple independent Cloud Phone instances. These instances share the compute, storage, and network resources of the matrix. The matrix configuration determines how many instances you can create.
 *
 * @param request CreateCloudPhoneNodeRequest
 * @return CreateCloudPhoneNodeResponse
 */
CreateCloudPhoneNodeResponse Client::createCloudPhoneNode(const CreateCloudPhoneNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudPhoneNodeWithOptions(request, runtime);
}

/**
 * @summary Creates an order for a credit package.
 *
 * @description This is a billable operation. Before calling this operation, ensure that you understand the [billing methods and pricing](https://help.aliyun.com/zh/ecp/jvs-mobile-billing-instructions?spm=a2c4g.11186623.help-menu-254658.d_0_1_1.78bc5732j49PWP) of Wuying Cloud Phone.
 *
 * @param request CreateCreditPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCreditPackageResponse
 */
CreateCreditPackageResponse Client::createCreditPackageWithOptions(const CreateCreditPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasCreditAmount()) {
    query["CreditAmount"] = request.getCreditAmount();
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
    {"action" , "CreateCreditPackage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCreditPackageResponse>();
}

/**
 * @summary Creates an order for a credit package.
 *
 * @description This is a billable operation. Before calling this operation, ensure that you understand the [billing methods and pricing](https://help.aliyun.com/zh/ecp/jvs-mobile-billing-instructions?spm=a2c4g.11186623.help-menu-254658.d_0_1_1.78bc5732j49PWP) of Wuying Cloud Phone.
 *
 * @param request CreateCreditPackageRequest
 * @return CreateCreditPackageResponse
 */
CreateCreditPackageResponse Client::createCreditPackage(const CreateCreditPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCreditPackageWithOptions(request, runtime);
}

/**
 * @summary Creates a custom image from a cloud phone instance. Then, you can use the image to create more cloud phones with the same configuration.
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
 * @summary Creates a custom image from a cloud phone instance. Then, you can use the image to create more cloud phones with the same configuration.
 *
 * @param request CreateCustomImageRequest
 * @return CreateCustomImageResponse
 */
CreateCustomImageResponse Client::createCustomImage(const CreateCustomImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomImageWithOptions(request, runtime);
}

/**
 * @summary You can connect to Cloud Phones using the Android Debug Bridge (ADB). ADB lets you manage devices and applications, and transfer files. These operations require high permissions. Because Cloud Phones do not have physical interfaces, you cannot use a USB connection to trigger an authorization dialog box on the device. Therefore, you must configure a key pair before you connect to a Cloud Phone with ADB over a network. This key pair ensures that the device trusts the client and that all operations are secure. You can call the CreateKeyPair operation to create an ADB key pair. The system stores the public key and returns the private key. The private key is in PEM-encoded PKCS#8 format and complies with ADB connection standards. You must securely store the private key.
 *
 * @description You can also use the Android Debug Bridge (ADB) tool to create a key pair and then upload it to the Cloud Phone console by calling the [](t2729840.xdita#)operation. This key pair can be used in the same way as a key pair created by the system.
 * Each tenant can have a maximum of 500 key pairs.
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
 * @summary You can connect to Cloud Phones using the Android Debug Bridge (ADB). ADB lets you manage devices and applications, and transfer files. These operations require high permissions. Because Cloud Phones do not have physical interfaces, you cannot use a USB connection to trigger an authorization dialog box on the device. Therefore, you must configure a key pair before you connect to a Cloud Phone with ADB over a network. This key pair ensures that the device trusts the client and that all operations are secure. You can call the CreateKeyPair operation to create an ADB key pair. The system stores the public key and returns the private key. The private key is in PEM-encoded PKCS#8 format and complies with ADB connection standards. You must securely store the private key.
 *
 * @description You can also use the Android Debug Bridge (ADB) tool to create a key pair and then upload it to the Cloud Phone console by calling the [](t2729840.xdita#)operation. This key pair can be used in the same way as a key pair created by the system.
 * Each tenant can have a maximum of 500 key pairs.
 *
 * @param request CreateKeyPairRequest
 * @return CreateKeyPairResponse
 */
CreateKeyPairResponse Client::createKeyPair(const CreateKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createKeyPairWithOptions(request, runtime);
}

/**
 * @summary Places an order for a package.
 *
 * @description This is a billable operation. Before you call this operation, review the [billing methods and pricing](https://help.aliyun.com/zh/ecp/jvs-mobile-billing-instructions?spm=a2c4g.11174283.help-menu-254658.d_0_1_1.23695732Cpmwbs) of Wuying Cloud Phone.
 *
 * @param request CreateMobileAgentPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMobileAgentPackageResponse
 */
CreateMobileAgentPackageResponse Client::createMobileAgentPackageWithOptions(const CreateMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasCreditAmount()) {
    query["CreditAmount"] = request.getCreditAmount();
  }

  if (!!request.hasCreditConfig()) {
    query["CreditConfig"] = request.getCreditConfig();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasMobileAgentPackageSpec()) {
    query["MobileAgentPackageSpec"] = request.getMobileAgentPackageSpec();
  }

  if (!!request.hasPackageSpecId()) {
    query["PackageSpecId"] = request.getPackageSpecId();
  }

  if (!!request.hasPaidCallbackUrl()) {
    query["PaidCallbackUrl"] = request.getPaidCallbackUrl();
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
    {"action" , "CreateMobileAgentPackage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMobileAgentPackageResponse>();
}

/**
 * @summary Places an order for a package.
 *
 * @description This is a billable operation. Before you call this operation, review the [billing methods and pricing](https://help.aliyun.com/zh/ecp/jvs-mobile-billing-instructions?spm=a2c4g.11174283.help-menu-254658.d_0_1_1.23695732Cpmwbs) of Wuying Cloud Phone.
 *
 * @param request CreateMobileAgentPackageRequest
 * @return CreateMobileAgentPackageResponse
 */
CreateMobileAgentPackageResponse Client::createMobileAgentPackage(const CreateMobileAgentPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMobileAgentPackageWithOptions(request, runtime);
}

/**
 * @summary Creates a policy that applies unified settings to cloud phones. These settings include features such as network redirection, watermarks, resolution, and the clipboard.
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
 * @summary Creates a policy that applies unified settings to cloud phones. These settings include features such as network redirection, watermarks, resolution, and the clipboard.
 *
 * @param request CreatePolicyGroupRequest
 * @return CreatePolicyGroupResponse
 */
CreatePolicyGroupResponse Client::createPolicyGroup(const CreatePolicyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyGroupWithOptions(request, runtime);
}

/**
 * @summary This asynchronous API operation generates a screenshot of a cloud phone.
 *
 * @description This operation creates a screenshot of a cloud phone and uploads it to the default Object Storage Service (OSS) bucket. The operation returns a task ID. You can then call the DescribeTasks operation to retrieve the download link for the screenshot.
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
 * @summary This asynchronous API operation generates a screenshot of a cloud phone.
 *
 * @description This operation creates a screenshot of a cloud phone and uploads it to the default Object Storage Service (OSS) bucket. The operation returns a task ID. You can then call the DescribeTasks operation to retrieve the download link for the screenshot.
 *
 * @param request CreateScreenshotRequest
 * @return CreateScreenshotResponse
 */
CreateScreenshotResponse Client::createScreenshot(const CreateScreenshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScreenshotWithOptions(request, runtime);
}

/**
 * @summary Creates a system property template. The key-value pairs defined in the template are sent to cloud phones and set as properties in their Android systems using the setprop command. APKs or related programs can then read these property values.
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
 * @summary Creates a system property template. The key-value pairs defined in the template are sent to cloud phones and set as properties in their Android systems using the setprop command. APKs or related programs can then read these property values.
 *
 * @param request CreateSystemPropertyTemplateRequest
 * @return CreateSystemPropertyTemplateResponse
 */
CreateSystemPropertyTemplateResponse Client::createSystemPropertyTemplate(const CreateSystemPropertyTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSystemPropertyTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes an Android instance group. All instances in the group are also deleted. This operation cannot be undone. Proceed with caution.
 *
 * @description Pay-as-you-go instance groups can be deleted at any time.
 * Subscription instance groups can be deleted only after they expire.
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
 * @summary Deletes an Android instance group. All instances in the group are also deleted. This operation cannot be undone. Proceed with caution.
 *
 * @description Pay-as-you-go instance groups can be deleted at any time.
 * Subscription instance groups can be deleted only after they expire.
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
 * @summary Deletes a batch of backup files.
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
 * @summary Deletes a batch of backup files.
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
 * @summary Deletes a node package.
 *
 * @param request DeleteMobileAgentPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMobileAgentPackageResponse
 */
DeleteMobileAgentPackageResponse Client::deleteMobileAgentPackageWithOptions(const DeleteMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPackageIds()) {
    query["PackageIds"] = request.getPackageIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMobileAgentPackage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMobileAgentPackageResponse>();
}

/**
 * @summary Deletes a node package.
 *
 * @param request DeleteMobileAgentPackageRequest
 * @return DeleteMobileAgentPackageResponse
 */
DeleteMobileAgentPackageResponse Client::deleteMobileAgentPackage(const DeleteMobileAgentPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMobileAgentPackageWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more policy groups.
 *
 * @description A policy group cannot be deleted if it is associated with an instance group.
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
 * @summary Deletes one or more policy groups.
 *
 * @description A policy group cannot be deleted if it is associated with an instance group.
 *
 * @param request DeletePolicyGroupRequest
 * @return DeletePolicyGroupResponse
 */
DeletePolicyGroupResponse Client::deletePolicyGroup(const DeletePolicyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes system property templates.
 *
 * @description Deleting property templates does not affect instances for which you have already called the [](t3010125.xdita#)operation to send templates.
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
 * @summary Deletes system property templates.
 *
 * @description Deleting property templates does not affect instances for which you have already called the [](t3010125.xdita#)operation to send templates.
 *
 * @param request DeleteSystemPropertyTemplatesRequest
 * @return DeleteSystemPropertyTemplatesResponse
 */
DeleteSystemPropertyTemplatesResponse Client::deleteSystemPropertyTemplates(const DeleteSystemPropertyTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSystemPropertyTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves details of specified Agent Tasks.
 *
 * @param request DescribeAgentTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgentTaskResponse
 */
DescribeAgentTaskResponse Client::describeAgentTaskWithOptions(const DescribeAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgentTask"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgentTaskResponse>();
}

/**
 * @summary Retrieves details of specified Agent Tasks.
 *
 * @param request DescribeAgentTaskRequest
 * @return DescribeAgentTaskResponse
 */
DescribeAgentTaskResponse Client::describeAgentTask(const DescribeAgentTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgentTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a cloud phone instance group.
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

  if (!!request.hasInstanceVersion()) {
    query["InstanceVersion"] = request.getInstanceVersion();
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
 * @summary Queries the details of a cloud phone instance group.
 *
 * @param request DescribeAndroidInstanceGroupsRequest
 * @return DescribeAndroidInstanceGroupsResponse
 */
DescribeAndroidInstanceGroupsResponse Client::describeAndroidInstanceGroups(const DescribeAndroidInstanceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAndroidInstanceGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of cloud phone instances.
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

  if (!!request.hasInstanceVersion()) {
    query["InstanceVersion"] = request.getInstanceVersion();
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

  if (!!request.hasSortKey()) {
    query["SortKey"] = request.getSortKey();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
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
 * @summary Queries the details of cloud phone instances.
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
 * @summary Queries a list of backup files.
 *
 * @description Currently, only backup files generated by cloud phones can be stored in Object Storage Service (OSS).
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
 * @summary Queries a list of backup files.
 *
 * @description Currently, only backup files generated by cloud phones can be stored in Object Storage Service (OSS).
 *
 * @param request DescribeBackupFilesRequest
 * @return DescribeBackupFilesResponse
 */
DescribeBackupFilesResponse Client::describeBackupFiles(const DescribeBackupFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupFilesWithOptions(request, runtime);
}

/**
 * @summary Queries information about buckets. This operation returns only the buckets whose names start with `cloudphone-saved-bucket-`.
 *
 * @description Currently, you can save backup files generated by Cloud Phone only to Object Storage Service (OSS).
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
 * @summary Queries information about buckets. This operation returns only the buckets whose names start with `cloudphone-saved-bucket-`.
 *
 * @description Currently, you can save backup files generated by Cloud Phone only to Object Storage Service (OSS).
 *
 * @param request DescribeBucketsRequest
 * @return DescribeBucketsResponse
 */
DescribeBucketsResponse Client::describeBuckets(const DescribeBucketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBucketsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of Cloud Phone matrices.
 * In the Cloud Phone service, a matrix (Cloud Phone Server) is a logical resource management unit that represents a physical server instance. This physical server can be partitioned into multiple independent Cloud Phone instances that share the underlying computing, storage, and network resources of the matrix. Creating a matrix is equivalent to provisioning a physical server on which you can create Cloud Phone instances. The number of instances that you can create varies depending on the configuration.
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

  if (!!request.hasNodeNameList()) {
    query["NodeNameList"] = request.getNodeNameList();
  }

  if (!!request.hasServerType()) {
    query["ServerType"] = request.getServerType();
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
 * @summary Queries the details of Cloud Phone matrices.
 * In the Cloud Phone service, a matrix (Cloud Phone Server) is a logical resource management unit that represents a physical server instance. This physical server can be partitioned into multiple independent Cloud Phone instances that share the underlying computing, storage, and network resources of the matrix. Creating a matrix is equivalent to provisioning a physical server on which you can create Cloud Phone instances. The number of instances that you can create varies depending on the configuration.
 *
 * @param request DescribeCloudPhoneNodesRequest
 * @return DescribeCloudPhoneNodesResponse
 */
DescribeCloudPhoneNodesResponse Client::describeCloudPhoneNodes(const DescribeCloudPhoneNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudPhoneNodesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of one or more credit packages.
 *
 * @param request DescribeCreditPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCreditPackageResponse
 */
DescribeCreditPackageResponse Client::describeCreditPackageWithOptions(const DescribeCreditPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreditPackageId()) {
    query["CreditPackageId"] = request.getCreditPackageId();
  }

  if (!!request.hasCreditPackageStatus()) {
    query["CreditPackageStatus"] = request.getCreditPackageStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCreditPackage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCreditPackageResponse>();
}

/**
 * @summary Retrieves the details of one or more credit packages.
 *
 * @param request DescribeCreditPackageRequest
 * @return DescribeCreditPackageResponse
 */
DescribeCreditPackageResponse Client::describeCreditPackage(const DescribeCreditPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCreditPackageWithOptions(request, runtime);
}

/**
 * @summary Queries the display settings.
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
 * @summary Queries the display settings.
 *
 * @param request DescribeDisplayConfigRequest
 * @return DescribeDisplayConfigResponse
 */
DescribeDisplayConfigResponse Client::describeDisplayConfig(const DescribeDisplayConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDisplayConfigWithOptions(request, runtime);
}

/**
 * @summary Queries a list of available images.
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
 * @summary Queries a list of available images.
 *
 * @param request DescribeImageListRequest
 * @return DescribeImageListResponse
 */
DescribeImageListResponse Client::describeImageList(const DescribeImageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageListWithOptions(request, runtime);
}

/**
 * @summary Queries the execution results of a command run by calling the RunCommand operation.
 *
 * @description This operation is being deprecated. Use the [](t2740507.xdita#)operation to query the progress and results of a command execution.
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
 * @summary Queries the execution results of a command run by calling the RunCommand operation.
 *
 * @description This operation is being deprecated. Use the [](t2740507.xdita#)operation to query the progress and results of a command execution.
 *
 * @param request DescribeInvocationsRequest
 * @return DescribeInvocationsResponse
 */
DescribeInvocationsResponse Client::describeInvocations(const DescribeInvocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvocationsWithOptions(request, runtime);
}

/**
 * @summary Retrieves details of JVS instances.
 *
 * @param request DescribeJVSInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJVSInstanceResponse
 */
DescribeJVSInstanceResponse Client::describeJVSInstanceWithOptions(const DescribeJVSInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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
    {"action" , "DescribeJVSInstance"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJVSInstanceResponse>();
}

/**
 * @summary Retrieves details of JVS instances.
 *
 * @param request DescribeJVSInstanceRequest
 * @return DescribeJVSInstanceResponse
 */
DescribeJVSInstanceResponse Client::describeJVSInstance(const DescribeJVSInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJVSInstanceWithOptions(request, runtime);
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
 * @summary Queries the latest monitoring data for an instance or a matrix. You can query metrics such as CPU, memory, disk, and network.
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
 * @summary Queries the latest monitoring data for an instance or a matrix. You can query metrics such as CPU, memory, disk, and network.
 *
 * @param request DescribeMetricLastRequest
 * @return DescribeMetricLastResponse
 */
DescribeMetricLastResponse Client::describeMetricLast(const DescribeMetricLastRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricLastWithOptions(request, runtime);
}

/**
 * @summary Queries monitoring data for specified metrics, such as network bandwidth.
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
 * @summary Queries monitoring data for specified metrics, such as network bandwidth.
 *
 * @param request DescribeMetricListRequest
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricList(const DescribeMetricListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricListWithOptions(request, runtime);
}

/**
 * @summary Queries the latest monitoring data for metrics such as instance network bandwidth and returns the results in a sorted list.
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
 * @summary Queries the latest monitoring data for metrics such as instance network bandwidth and returns the results in a sorted list.
 *
 * @param request DescribeMetricTopRequest
 * @return DescribeMetricTopResponse
 */
DescribeMetricTopResponse Client::describeMetricTop(const DescribeMetricTopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricTopWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of one or more node packages.
 *
 * @param request DescribeMobileAgentPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMobileAgentPackageResponse
 */
DescribeMobileAgentPackageResponse Client::describeMobileAgentPackageWithOptions(const DescribeMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPackageIds()) {
    query["PackageIds"] = request.getPackageIds();
  }

  if (!!request.hasPackageSpec()) {
    query["PackageSpec"] = request.getPackageSpec();
  }

  if (!!request.hasPackageStatus()) {
    query["PackageStatus"] = request.getPackageStatus();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMobileAgentPackage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMobileAgentPackageResponse>();
}

/**
 * @summary Retrieves the details of one or more node packages.
 *
 * @param request DescribeMobileAgentPackageRequest
 * @return DescribeMobileAgentPackageResponse
 */
DescribeMobileAgentPackageResponse Client::describeMobileAgentPackage(const DescribeMobileAgentPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMobileAgentPackageWithOptions(request, runtime);
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
 * @summary Queries the available specifications for cloud phones. This information is required to create an instance. For the cloud phone matrix mode, this operation also returns the minimum and maximum number of instances allowed per matrix.
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

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
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
 * @summary Queries the available specifications for cloud phones. This information is required to create an instance. For the cloud phone matrix mode, this operation also returns the minimum and maximum number of instances allowed per matrix.
 *
 * @param request DescribeSpecRequest
 * @return DescribeSpecResponse
 */
DescribeSpecResponse Client::describeSpec(const DescribeSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSpecWithOptions(request, runtime);
}

/**
 * @summary Describes system property templates.
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
 * @summary Describes system property templates.
 *
 * @param request DescribeSystemPropertyTemplatesRequest
 * @return DescribeSystemPropertyTemplatesResponse
 */
DescribeSystemPropertyTemplatesResponse Client::describeSystemPropertyTemplates(const DescribeSystemPropertyTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemPropertyTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries tasks created for a cloud phone instance. Many operations on cloud phones—such as creating, starting, or stopping them—are asynchronous. When you initiate an operation, the system returns a `Task ID` that you can use to track its progress and final result. You can call this API to retrieve a list of all tasks and their execution statuses.
 *
 * @description - You can call the DescribeTasks operation to query the tasks created for one or more cloud phone instances.
 * - The system currently supports various tasks, including starting, stopping, restarting, and resetting cloud phone instances; backing up and restoring data; installing apps; and executing remote commands.
 * - You can use the Level field to specify the type of task. If Level is set to 1, it represents a batch task. If Level is set to 2, it represents an instance-level task.
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
 * @summary Queries tasks created for a cloud phone instance. Many operations on cloud phones—such as creating, starting, or stopping them—are asynchronous. When you initiate an operation, the system returns a `Task ID` that you can use to track its progress and final result. You can call this API to retrieve a list of all tasks and their execution statuses.
 *
 * @description - You can call the DescribeTasks operation to query the tasks created for one or more cloud phone instances.
 * - The system currently supports various tasks, including starting, stopping, restarting, and resetting cloud phone instances; backing up and restoring data; installing apps; and executing remote commands.
 * - You can use the Level field to specify the type of task. If Level is set to 1, it represents a batch task. If Level is set to 2, it represents an instance-level task.
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
 * @description - After a key pair is detached, the cloud phone no longer stores a valid ADB public key. As a result, ADB connections may fail to authenticate.
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
 * @description - After a key pair is detached, the cloud phone no longer stores a valid ADB public key. As a result, ADB connections may fail to authenticate.
 *
 * @param request DetachKeyPairRequest
 * @return DetachKeyPairResponse
 */
DetachKeyPairResponse Client::detachKeyPair(const DetachKeyPairRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachKeyPairWithOptions(request, runtime);
}

/**
 * @summary Disconnects a connected instance or disassociates an instance that is associated with another user.
 *
 * @description Connections to instances are established using the [](t2848888.xdita#). After a connection is closed with `session.stop()`, the system maintains the user-instance association for 5 minutes. During this time, other users cannot connect. The `DisconnectAndroidInstance` operation lets you disassociate the instance immediately.
 * <props="china">If you use the Cloud Phone Matrix Edition and the instance stream pattern is collaborative mode, you can specify `EndUserId` to disconnect a specific user and invalidate the corresponding ticket.
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
 * @summary Disconnects a connected instance or disassociates an instance that is associated with another user.
 *
 * @description Connections to instances are established using the [](t2848888.xdita#). After a connection is closed with `session.stop()`, the system maintains the user-instance association for 5 minutes. During this time, other users cannot connect. The `DisconnectAndroidInstance` operation lets you disassociate the instance immediately.
 * <props="china">If you use the Cloud Phone Matrix Edition and the instance stream pattern is collaborative mode, you can specify `EndUserId` to disconnect a specific user and invalidate the corresponding ticket.
 *
 * @param request DisconnectAndroidInstanceRequest
 * @return DisconnectAndroidInstanceResponse
 */
DisconnectAndroidInstanceResponse Client::disconnectAndroidInstance(const DisconnectAndroidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disconnectAndroidInstanceWithOptions(request, runtime);
}

/**
 * @summary Distributes an image to one or more regions. This lets you use the image to create cloud phones in regions other than its source region.
 *
 * @description You cannot cancel the distribution of an image to a region after the image is distributed.
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
 * @summary Distributes an image to one or more regions. This lets you use the image to create cloud phones in regions other than its source region.
 *
 * @description You cannot cancel the distribution of an image to a region after the image is distributed.
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
 * @summary Ends all coordination tasks for a cloud phone instance and invalidates the coordination code.
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
 * @summary Ends all coordination tasks for a cloud phone instance and invalidates the coordination code.
 *
 * @param request EndCoordinationRequest
 * @return EndCoordinationResponse
 */
EndCoordinationResponse Client::endCoordination(const EndCoordinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return endCoordinationWithOptions(request, runtime);
}

/**
 * @summary Expands the storage of a cloud phone matrix. You can expand shared storage for matrix-level files such as images, and instance storage. Expanding the storage incurs new fees, and the API response returns an order ID.
 *
 * @description This operation is only available on the china site (aliyun.com).
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

  if (!!request.hasPaidCallBackUrl()) {
    query["PaidCallBackUrl"] = request.getPaidCallBackUrl();
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
 * @summary Expands the storage of a cloud phone matrix. You can expand shared storage for matrix-level files such as images, and instance storage. Expanding the storage incurs new fees, and the API response returns an order ID.
 *
 * @description This operation is only available on the china site (aliyun.com).
 *
 * @param request ExpandDataVolumeRequest
 * @return ExpandDataVolumeResponse
 */
ExpandDataVolumeResponse Client::expandDataVolume(const ExpandDataVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return expandDataVolumeWithOptions(request, runtime);
}

/**
 * @summary Expands the phone storage for one or more matrix instances.
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

  if (!!request.hasPaidCallBackUrl()) {
    query["PaidCallBackUrl"] = request.getPaidCallBackUrl();
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
 * @summary Expands the phone storage for one or more matrix instances.
 *
 * @param request ExpandPhoneDataVolumeRequest
 * @return ExpandPhoneDataVolumeResponse
 */
ExpandPhoneDataVolumeResponse Client::expandPhoneDataVolume(const ExpandPhoneDataVolumeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return expandPhoneDataVolumeWithOptions(request, runtime);
}

/**
 * @summary Fetches files from a cloud phone to Object Storage Service (OSS).
 *
 * @description This operation fetches only files or folders from a cloud phone to Object Storage Service.
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

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
 * @summary Fetches files from a cloud phone to Object Storage Service (OSS).
 *
 * @description This operation fetches only files or folders from a cloud phone to Object Storage Service.
 *
 * @param request FetchFileRequest
 * @return FetchFileResponse
 */
FetchFileResponse Client::fetchFile(const FetchFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchFileWithOptions(request, runtime);
}

/**
 * @summary By default, you can only use the BatchGetAcpConnectionTicket operation to get the ticket for a connection to a cloud phone, and a cloud phone supports only one connected user at a time. To allow multiple users to connect to a cloud phone at the same time, connect to the cloud phone with a convenience account, use this operation to generate a collaboration code by using the current account, and share this code with other convenience accounts to allow them to access the same cloud phone.
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
 * @summary By default, you can only use the BatchGetAcpConnectionTicket operation to get the ticket for a connection to a cloud phone, and a cloud phone supports only one connected user at a time. To allow multiple users to connect to a cloud phone at the same time, connect to the cloud phone with a convenience account, use this operation to generate a collaboration code by using the current account, and share this code with other convenience accounts to allow them to access the same cloud phone.
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
 * @summary Retrieves the properties of an instance. This operation runs the android getprop command to retrieve all properties of the cloud phone.
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
 * @summary Retrieves the properties of an instance. This operation runs the android getprop command to retrieve all properties of the cloud phone.
 *
 * @param request GetInstancePropertiesRequest
 * @return GetInstancePropertiesResponse
 */
GetInstancePropertiesResponse Client::getInstanceProperties(const GetInstancePropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstancePropertiesWithOptions(request, runtime);
}

/**
 * @summary Queries the network access blacklist for IP addresses and domain names.
 *
 * @description - This operation requires image version 26.01 or later.
 * - This operation queries the network access blacklist for your account. The blacklist includes IP addresses and domain names.
 *
 * @param request GetNetworkBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkBlacklistResponse
 */
GetNetworkBlacklistResponse Client::getNetworkBlacklistWithOptions(const GetNetworkBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNetworkBlacklist"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetworkBlacklistResponse>();
}

/**
 * @summary Queries the network access blacklist for IP addresses and domain names.
 *
 * @description - This operation requires image version 26.01 or later.
 * - This operation queries the network access blacklist for your account. The blacklist includes IP addresses and domain names.
 *
 * @param request GetNetworkBlacklistRequest
 * @return GetNetworkBlacklistResponse
 */
GetNetworkBlacklistResponse Client::getNetworkBlacklist(const GetNetworkBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkBlacklistWithOptions(request, runtime);
}

/**
 * @summary Imports a custom image.
 *
 * @description 1. You can import a custom image to develop custom features or services.
 * 2. First, obtain the required Android Open Source Project (AOSP) image baseline from the platform. Then, create a custom build. After the build is complete, import the image to the platform. For detailed instructions, contact Wuying technical support.
 * 3. Ensure the image tar package is smaller than 2 GB. Otherwise, image parsing may fail.
 * 4. Ensure the Object Storage Service (OSS) address is in mainland China. If the address is outside mainland China or in the Hong Kong region, the image file download may time out.
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
 * @summary Imports a custom image.
 *
 * @description 1. You can import a custom image to develop custom features or services.
 * 2. First, obtain the required Android Open Source Project (AOSP) image baseline from the platform. Then, create a custom build. After the build is complete, import the image to the platform. For detailed instructions, contact Wuying technical support.
 * 3. Ensure the image tar package is smaller than 2 GB. Otherwise, image parsing may fail.
 * 4. Ensure the Object Storage Service (OSS) address is in mainland China. If the address is outside mainland China or in the Hong Kong region, the image file download may time out.
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
 * @summary Installs applications in batches on Cloud Phone instances.
 *
 * @description Before you can install an application, you must create it by calling the [CreateApp](https://help.aliyun.com/document_detail/2807330.html) operation. This is an asynchronous operation. You can call the [DescribeTasks](~~DescribeTasks~~) operation to query the task status.
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
 * @summary Installs applications in batches on Cloud Phone instances.
 *
 * @description Before you can install an application, you must create it by calling the [CreateApp](https://help.aliyun.com/document_detail/2807330.html) operation. This is an asynchronous operation. You can call the [DescribeTasks](~~DescribeTasks~~) operation to query the task status.
 *
 * @param request InstallAppRequest
 * @return InstallAppResponse
 */
InstallAppResponse Client::installApp(const InstallAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installAppWithOptions(request, runtime);
}

/**
 * @summary Installs the monitoring plugin in a single step. An instance can generate monitoring data only after the plugin is installed.
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
 * @summary Installs the monitoring plugin in a single step. An instance can generate monitoring data only after the plugin is installed.
 *
 * @param request InstallMonitorAgentRequest
 * @return InstallMonitorAgentResponse
 */
InstallMonitorAgentResponse Client::installMonitorAgent(const InstallMonitorAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installMonitorAgentWithOptions(request, runtime);
}

/**
 * @summary Diagnoses and recovers cloud phone matrix instances. This operation clears the system log files of an instance to prevent the instance from becoming unrecoverable due to a full disk.
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
 * @summary Diagnoses and recovers cloud phone matrix instances. This operation clears the system log files of an instance to prevent the instance from becoming unrecoverable due to a full disk.
 *
 * @param request InstanceHealerRequest
 * @return InstanceHealerResponse
 */
InstanceHealerResponse Client::instanceHealer(const InstanceHealerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return instanceHealerWithOptions(request, runtime);
}

/**
 * @summary Queries the Android Debug Bridge (ADB) connection information for instances. This operation is available only to standard networks.
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
 * @summary Queries the Android Debug Bridge (ADB) connection information for instances. This operation is available only to standard networks.
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
 * @summary Queries the tags that are associated with Cloud Phone instances.
 *
 * @description Specify at least one of the following parameters in the request to determine the queried object: `ResourceId.N`, `Tag.N.Key`, or `Tag.N.Value`.
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
 * @summary Queries the tags that are associated with Cloud Phone instances.
 *
 * @description Specify at least one of the following parameters in the request to determine the queried object: `ResourceId.N`, `Tag.N.Key`, or `Tag.N.Value`.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of an Android instance. Currently, this operation can be used to modify only the instance name and the upstream and downstream bandwidth limits.
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
 * @summary Modifies the information of an Android instance. Currently, this operation can be used to modify only the instance name and the upstream and downstream bandwidth limits.
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
 * @summary Modifies a cloud phone matrix. Currently, you can only modify the name of a cloud phone matrix. Note: In the Cloud Phone system, a Matrix (Cloud Phone Server) is a logical resource management unit that represents a single physical server instance. This physical server can be partitioned into multiple, independently running cloud phone instances. These instances share the Matrix\\"s underlying compute, storage, and network resources. Creating a Matrix is equivalent to leasing a dedicated physical server. On this server, you can then create your cloud phone instances. The number of instances you can create depends on their configuration.
 *
 * @description Changing the streaming mode is an asynchronous operation. Please do not perform this action frequently.
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
 * @summary Modifies a cloud phone matrix. Currently, you can only modify the name of a cloud phone matrix. Note: In the Cloud Phone system, a Matrix (Cloud Phone Server) is a logical resource management unit that represents a single physical server instance. This physical server can be partitioned into multiple, independently running cloud phone instances. These instances share the Matrix\\"s underlying compute, storage, and network resources. Creating a Matrix is equivalent to leasing a dedicated physical server. On this server, you can then create your cloud phone instances. The number of instances you can create depends on their configuration.
 *
 * @description Changing the streaming mode is an asynchronous operation. Please do not perform this action frequently.
 *
 * @param request ModifyCloudPhoneNodeRequest
 * @return ModifyCloudPhoneNodeResponse
 */
ModifyCloudPhoneNodeResponse Client::modifyCloudPhoneNode(const ModifyCloudPhoneNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudPhoneNodeWithOptions(request, runtime);
}

/**
 * @summary Modifies display settings.
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
 * @summary Modifies display settings.
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
 * @summary Modifies the configuration of a JVS instance.
 *
 * @param request ModifyJVSInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyJVSInstanceResponse
 */
ModifyJVSInstanceResponse Client::modifyJVSInstanceWithOptions(const ModifyJVSInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyToAll()) {
    query["ApplyToAll"] = request.getApplyToAll();
  }

  if (!!request.hasCreditConfig()) {
    query["CreditConfig"] = request.getCreditConfig();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyJVSInstance"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyJVSInstanceResponse>();
}

/**
 * @summary Modifies the configuration of a JVS instance.
 *
 * @param request ModifyJVSInstanceRequest
 * @return ModifyJVSInstanceResponse
 */
ModifyJVSInstanceResponse Client::modifyJVSInstance(const ModifyJVSInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyJVSInstanceWithOptions(request, runtime);
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
 * @summary Modifies the information of a policy group.
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
 * @summary Modifies the information of a policy group.
 *
 * @param request ModifyPolicyGroupRequest
 * @return ModifyPolicyGroupResponse
 */
ModifyPolicyGroupResponse Client::modifyPolicyGroup(const ModifyPolicyGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolicyGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies a property template.
 *
 * @description When you modify a property template, the [](t3010125.xdita#)operation is not triggered. To apply the changes to cloud phones, you must call the [](t3010125.xdita#)operation separately.
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
 * @summary Modifies a property template.
 *
 * @description When you modify a property template, the [](t3010125.xdita#)operation is not triggered. To apply the changes to cloud phones, you must call the [](t3010125.xdita#)operation separately.
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
 * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [](t2740507.xdita#)operation.
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
 * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [](t2740507.xdita#)operation.
 *
 * @param request OperateAppRequest
 * @return OperateAppResponse
 */
OperateAppResponse Client::operateApp(const OperateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateAppWithOptions(request, runtime);
}

/**
 * @summary Pauses running agent tasks on Mobile nodes.
 *
 * @param request PauseAgentTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseAgentTaskResponse
 */
PauseAgentTaskResponse Client::pauseAgentTaskWithOptions(const PauseAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseAgentTask"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseAgentTaskResponse>();
}

/**
 * @summary Pauses running agent tasks on Mobile nodes.
 *
 * @param request PauseAgentTaskRequest
 * @return PauseAgentTaskResponse
 */
PauseAgentTaskResponse Client::pauseAgentTask(const PauseAgentTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseAgentTaskWithOptions(request, runtime);
}

/**
 * @summary Reboots (shuts down and then starts) Cloud Phone instances.
 *
 * @description You can reboot an instance only if its status is Active, Abnormal, Backup failed, or **Recover failed**.
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

  if (!!request.hasIgnoreParamValidation()) {
    query["IgnoreParamValidation"] = request.getIgnoreParamValidation();
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
 * @summary Reboots (shuts down and then starts) Cloud Phone instances.
 *
 * @description You can reboot an instance only if its status is Active, Abnormal, Backup failed, or **Recover failed**.
 *
 * @param request RebootAndroidInstancesInGroupRequest
 * @return RebootAndroidInstancesInGroupResponse
 */
RebootAndroidInstancesInGroupResponse Client::rebootAndroidInstancesInGroup(const RebootAndroidInstancesInGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebootAndroidInstancesInGroupWithOptions(request, runtime);
}

/**
 * @summary Restores a full instance backup to another cloud phone instance.
 *
 * @description 1. When you restore a full instance, the system restarts the instance to ensure a successful restoration. A restart is not required if you restore only applications and data. Make sure the instance is in an active state. Do not perform any operations on the instance during the restoration process. Otherwise, the restoration may fail.
 * 2. Ensure that the backup file can be used to restore the instance properly. After a restoration is complete, check that all your data is complete and all features are working properly. Do not delete the original backup file or reset the source instance until you have verified the restored data. Otherwise, you may lose your data.
 *
 * @param request RecoverAndroidInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecoverAndroidInstanceResponse
 */
RecoverAndroidInstanceResponse Client::recoverAndroidInstanceWithOptions(const RecoverAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIdList()) {
    query["AndroidInstanceIdList"] = request.getAndroidInstanceIdList();
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
    {"action" , "RecoverAndroidInstance"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecoverAndroidInstanceResponse>();
}

/**
 * @summary Restores a full instance backup to another cloud phone instance.
 *
 * @description 1. When you restore a full instance, the system restarts the instance to ensure a successful restoration. A restart is not required if you restore only applications and data. Make sure the instance is in an active state. Do not perform any operations on the instance during the restoration process. Otherwise, the restoration may fail.
 * 2. Ensure that the backup file can be used to restore the instance properly. After a restoration is complete, check that all your data is complete and all features are working properly. Do not delete the original backup file or reset the source instance until you have verified the restored data. Otherwise, you may lose your data.
 *
 * @param request RecoverAndroidInstanceRequest
 * @return RecoverAndroidInstanceResponse
 */
RecoverAndroidInstanceResponse Client::recoverAndroidInstance(const RecoverAndroidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recoverAndroidInstanceWithOptions(request, runtime);
}

/**
 * @summary Recovers an application from a backup file to another cloud phone instance.
 *
 * @description 1. A full instance recovery restarts the cloud phone. An application and data recovery does not require a restart. To ensure a successful recovery, make sure your cloud phone is in the active state. Do not perform any operations on the cloud phone during the recovery process. Otherwise, the recovery operation may fail.
 * 2. If the application being recovered already exists on the target cloud phone, the existing application is uninstalled before the backup version is installed. This prevents version conflicts.
 * 3. Ensure that your backup file can be used to recover the instance or application properly. After a recovery is complete, verify that your data is complete and all features work correctly. Do not delete the original backup file or reset the source instance until you have verified that the recovery was successful. Otherwise, there is risks that you lose some data.
 *
 * @param request RecoverAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecoverAppResponse
 */
RecoverAppResponse Client::recoverAppWithOptions(const RecoverAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidInstanceIdList()) {
    query["AndroidInstanceIdList"] = request.getAndroidInstanceIdList();
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
    {"action" , "RecoverApp"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecoverAppResponse>();
}

/**
 * @summary Recovers an application from a backup file to another cloud phone instance.
 *
 * @description 1. A full instance recovery restarts the cloud phone. An application and data recovery does not require a restart. To ensure a successful recovery, make sure your cloud phone is in the active state. Do not perform any operations on the cloud phone during the recovery process. Otherwise, the recovery operation may fail.
 * 2. If the application being recovered already exists on the target cloud phone, the existing application is uninstalled before the backup version is installed. This prevents version conflicts.
 * 3. Ensure that your backup file can be used to recover the instance or application properly. After a recovery is complete, verify that your data is complete and all features work correctly. Do not delete the original backup file or reset the source instance until you have verified that the recovery was successful. Otherwise, there is risks that you lose some data.
 *
 * @param request RecoverAppRequest
 * @return RecoverAppResponse
 */
RecoverAppResponse Client::recoverApp(const RecoverAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recoverAppWithOptions(request, runtime);
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
 * @summary Renews subscription Cloud Phone instance groups. If a subscription instance group expires, the system automatically deletes the instance group and its instances after 15 days. You cannot recover deleted resources. Renew your instance groups promptly to prevent resource loss.
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

  if (!!request.hasPaidCallBackUrl()) {
    query["PaidCallBackUrl"] = request.getPaidCallBackUrl();
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
 * @summary Renews subscription Cloud Phone instance groups. If a subscription instance group expires, the system automatically deletes the instance group and its instances after 15 days. You cannot recover deleted resources. Renew your instance groups promptly to prevent resource loss.
 *
 * @param request RenewAndroidInstanceGroupsRequest
 * @return RenewAndroidInstanceGroupsResponse
 */
RenewAndroidInstanceGroupsResponse Client::renewAndroidInstanceGroups(const RenewAndroidInstanceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewAndroidInstanceGroupsWithOptions(request, runtime);
}

/**
 * @summary Renews the specified cloud phone matrices.
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

  if (!!request.hasPaidCallBackUrl()) {
    query["PaidCallBackUrl"] = request.getPaidCallBackUrl();
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
 * @summary Renews the specified cloud phone matrices.
 *
 * @param request RenewCloudPhoneNodesRequest
 * @return RenewCloudPhoneNodesResponse
 */
RenewCloudPhoneNodesResponse Client::renewCloudPhoneNodes(const RenewCloudPhoneNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewCloudPhoneNodesWithOptions(request, runtime);
}

/**
 * @summary Renews a mobile agent package.
 *
 * @param request RenewMobileAgentPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewMobileAgentPackageResponse
 */
RenewMobileAgentPackageResponse Client::renewMobileAgentPackageWithOptions(const RenewMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasMobileAgentPackageIds()) {
    query["MobileAgentPackageIds"] = request.getMobileAgentPackageIds();
  }

  if (!!request.hasPaidCallbackUrl()) {
    query["PaidCallbackUrl"] = request.getPaidCallbackUrl();
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
    {"action" , "RenewMobileAgentPackage"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewMobileAgentPackageResponse>();
}

/**
 * @summary Renews a mobile agent package.
 *
 * @param request RenewMobileAgentPackageRequest
 * @return RenewMobileAgentPackageResponse
 */
RenewMobileAgentPackageResponse Client::renewMobileAgentPackage(const RenewMobileAgentPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewMobileAgentPackageWithOptions(request, runtime);
}

/**
 * @summary Resets the instance by reinstalling the operating system using its original image. Note: The reset operation will fail if the image that was used to create the Cloud Phone has since been deleted.
 *
 * @description You can reset an instance (initialize its system) only when the instance is Active, Stopped, Abnormal, Backup Failed, or **Recover Failed**.
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

  if (!!request.hasIgnoreParamValidation()) {
    query["IgnoreParamValidation"] = request.getIgnoreParamValidation();
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
 * @summary Resets the instance by reinstalling the operating system using its original image. Note: The reset operation will fail if the image that was used to create the Cloud Phone has since been deleted.
 *
 * @description You can reset an instance (initialize its system) only when the instance is Active, Stopped, Abnormal, Backup Failed, or **Recover Failed**.
 *
 * @param request ResetAndroidInstancesInGroupRequest
 * @return ResetAndroidInstancesInGroupResponse
 */
ResetAndroidInstancesInGroupResponse Client::resetAndroidInstancesInGroup(const ResetAndroidInstancesInGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAndroidInstancesInGroupWithOptions(request, runtime);
}

/**
 * @summary Resumes paused agent automation tasks on a mobile instance.
 *
 * @param request ResumeAgentTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeAgentTaskResponse
 */
ResumeAgentTaskResponse Client::resumeAgentTaskWithOptions(const ResumeAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionalPrompt()) {
    query["AdditionalPrompt"] = request.getAdditionalPrompt();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeAgentTask"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeAgentTaskResponse>();
}

/**
 * @summary Resumes paused agent automation tasks on a mobile instance.
 *
 * @param request ResumeAgentTaskRequest
 * @return ResumeAgentTaskResponse
 */
ResumeAgentTaskResponse Client::resumeAgentTask(const ResumeAgentTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeAgentTaskWithOptions(request, runtime);
}

/**
 * @summary Triggers an Agent on Mobile nodes to execute an AI automation task.
 *
 * @param request RunAgentTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunAgentTaskResponse
 */
RunAgentTaskResponse Client::runAgentTaskWithOptions(const RunAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasMaxSteps()) {
    query["MaxSteps"] = request.getMaxSteps();
  }

  if (!!request.hasScheduleId()) {
    query["ScheduleId"] = request.getScheduleId();
  }

  if (!!request.hasTaskConfigId()) {
    query["TaskConfigId"] = request.getTaskConfigId();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasUserPrompt()) {
    query["UserPrompt"] = request.getUserPrompt();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunAgentTask"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunAgentTaskResponse>();
}

/**
 * @summary Triggers an Agent on Mobile nodes to execute an AI automation task.
 *
 * @param request RunAgentTaskRequest
 * @return RunAgentTaskResponse
 */
RunAgentTaskResponse Client::runAgentTask(const RunAgentTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runAgentTaskWithOptions(request, runtime);
}

/**
 * @summary Runs a command on one or more cloud phone instances.
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
 * @summary Runs a command on one or more cloud phone instances.
 *
 * @param request RunCommandRequest
 * @return RunCommandResponse
 */
RunCommandResponse Client::runCommand(const RunCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCommandWithOptions(request, runtime);
}

/**
 * @summary Runs a synchronous command on one or more Cloud Phone instances and returns the execution result.
 *
 * @description The `RunSyncCommand` operation is designed for commands that return a result quickly, typically within milliseconds. For longer-running commands that may take several seconds, we recommend using the asynchronous [](t2729835.xdita#)operation.
 *
 * @param request RunSyncCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSyncCommandResponse
 */
RunSyncCommandResponse Client::runSyncCommandWithOptions(const RunSyncCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandContent()) {
    query["CommandContent"] = request.getCommandContent();
  }

  if (!!request.hasContentEncoding()) {
    query["ContentEncoding"] = request.getContentEncoding();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasWaitTime()) {
    query["WaitTime"] = request.getWaitTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunSyncCommand"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunSyncCommandResponse>();
}

/**
 * @summary Runs a synchronous command on one or more Cloud Phone instances and returns the execution result.
 *
 * @description The `RunSyncCommand` operation is designed for commands that return a result quickly, typically within milliseconds. For longer-running commands that may take several seconds, we recommend using the asynchronous [](t2729835.xdita#)operation.
 *
 * @param request RunSyncCommandRequest
 * @return RunSyncCommandResponse
 */
RunSyncCommandResponse Client::runSyncCommand(const RunSyncCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runSyncCommandWithOptions(request, runtime);
}

/**
 * @summary Pushes files from Object Storage Service (OSS) or a public download link to one or more cloud phones.
 *
 * @description Use this operation to send files or folders from Object Storage Service (OSS) to cloud phones.
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

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFileMd5()) {
    query["FileMd5"] = request.getFileMd5();
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
 * @summary Pushes files from Object Storage Service (OSS) or a public download link to one or more cloud phones.
 *
 * @description Use this operation to send files or folders from Object Storage Service (OSS) to cloud phones.
 *
 * @param request SendFileRequest
 * @return SendFileResponse
 */
SendFileResponse Client::sendFile(const SendFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendFileWithOptions(request, runtime);
}

/**
 * @summary Sends a property template to cloud phone instances and, based on the template, sets properties in the Android system using the setprop command. An APK or a related program can read these property values. If you specify multiple template IDs, the property templates are randomly sent to the cloud phone instances.
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
 * @summary Sends a property template to cloud phone instances and, based on the template, sets properties in the Android system using the setprop command. An APK or a related program can read these property values. If you specify multiple template IDs, the property templates are randomly sent to the cloud phone instances.
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
 * @summary Adds or purges IP addresses and domain names from the network access blacklist.
 *
 * @description - This operation requires image version 26.01 or later.
 * - This API call synchronously updates the IP address blacklist and the domain name blacklist.
 * - The IP address blacklist supports individual IP addresses and IP address segments. The update overwrites the existing configuration. If you pass an empty string (""), all configured IP blacklist entries are purged.
 * - The domain name blacklist supports only exact matches and does not support regular expressions. If you pass an empty string (""), all configured domain name blacklist entries are purged.
 * - After you change the configuration, restart the cloud phone to apply the new blacklist rules. Note that these rules may not take effect if you use an agent.
 *
 * @param request SetNetworkBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetNetworkBlacklistResponse
 */
SetNetworkBlacklistResponse Client::setNetworkBlacklistWithOptions(const SetNetworkBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainBlacklist()) {
    query["DomainBlacklist"] = request.getDomainBlacklist();
  }

  if (!!request.hasIpBlacklist()) {
    query["IpBlacklist"] = request.getIpBlacklist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetNetworkBlacklist"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetNetworkBlacklistResponse>();
}

/**
 * @summary Adds or purges IP addresses and domain names from the network access blacklist.
 *
 * @description - This operation requires image version 26.01 or later.
 * - This API call synchronously updates the IP address blacklist and the domain name blacklist.
 * - The IP address blacklist supports individual IP addresses and IP address segments. The update overwrites the existing configuration. If you pass an empty string (""), all configured IP blacklist entries are purged.
 * - The domain name blacklist supports only exact matches and does not support regular expressions. If you pass an empty string (""), all configured domain name blacklist entries are purged.
 * - After you change the configuration, restart the cloud phone to apply the new blacklist rules. Note that these rules may not take effect if you use an agent.
 *
 * @param request SetNetworkBlacklistRequest
 * @return SetNetworkBlacklistResponse
 */
SetNetworkBlacklistResponse Client::setNetworkBlacklist(const SetNetworkBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setNetworkBlacklistWithOptions(request, runtime);
}

/**
 * @summary Start cloud phone instances.
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
 * @summary Start cloud phone instances.
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
 * @summary Enables the Android Debug Bridge (ADB) connection for an instance and creates an Internet mapping rule for its ADB port. This feature is available only for standard networks.
 *
 * @description This feature can be enabled when the instance is not in the **UNAVAILABLE** state and has a **private IP address** assigned.
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
 * @summary Enables the Android Debug Bridge (ADB) connection for an instance and creates an Internet mapping rule for its ADB port. This feature is available only for standard networks.
 *
 * @description This feature can be enabled when the instance is not in the **UNAVAILABLE** state and has a **private IP address** assigned.
 *
 * @param request StartInstanceAdbRequest
 * @return StartInstanceAdbResponse
 */
StartInstanceAdbResponse Client::startInstanceAdb(const StartInstanceAdbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceAdbWithOptions(request, runtime);
}

/**
 * @summary Stops (shuts down) an Android instance.
 *
 * @description An instance can be stopped only if it is in the Active, Backup Failed, or **Recover Failed** status.
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
 * @summary Stops (shuts down) an Android instance.
 *
 * @description An instance can be stopped only if it is in the Active, Backup Failed, or **Recover Failed** status.
 *
 * @param request StopAndroidInstanceRequest
 * @return StopAndroidInstanceResponse
 */
StopAndroidInstanceResponse Client::stopAndroidInstance(const StopAndroidInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAndroidInstanceWithOptions(request, runtime);
}

/**
 * @summary Disables the ADB connection for an Android instance and deletes its ADB port forwarding rules. This operation applies only to standard networks.
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
 * @summary Disables the ADB connection for an Android instance and deletes its ADB port forwarding rules. This operation applies only to standard networks.
 *
 * @param request StopInstanceAdbRequest
 * @return StopInstanceAdbResponse
 */
StopInstanceAdbResponse Client::stopInstanceAdb(const StopInstanceAdbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceAdbWithOptions(request, runtime);
}

/**
 * @summary Adds tags to one or more cloud phones.
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
 * @summary Adds tags to one or more cloud phones.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Uninstalls applications from one or more Cloud Phone instances.
 *
 * @description This is an asynchronous operation. You can query the task status in the Task Hub by calling [DescribeTasks](~~DescribeTasks~~).
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
 * @summary Uninstalls applications from one or more Cloud Phone instances.
 *
 * @description This is an asynchronous operation. You can query the task status in the Task Hub by calling [DescribeTasks](~~DescribeTasks~~).
 *
 * @param request UninstallAppRequest
 * @return UninstallAppResponse
 */
UninstallAppResponse Client::uninstallApp(const UninstallAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallAppWithOptions(request, runtime);
}

/**
 * @summary Uninstalls the monitoring plugin.
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
 * @summary Uninstalls the monitoring plugin.
 *
 * @param request UninstallMonitorAgentRequest
 * @return UninstallMonitorAgentResponse
 */
UninstallMonitorAgentResponse Client::uninstallMonitorAgent(const UninstallMonitorAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallMonitorAgentWithOptions(request, runtime);
}

/**
 * @summary Removes tags from cloud phones. If a tag is no longer associated with any cloud phone after it is removed, the tag is automatically deleted.
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
 * @summary Removes tags from cloud phones. If a tag is no longer associated with any cloud phone after it is removed, the tag is automatically deleted.
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
 * @summary Updates the image of an instance group. This update affects all instances in the group.
 *
 * @description The image and the instance group must be in the active state. The image must be available in the same region as the instance group.
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
 * @summary Updates the image of an instance group. This update affects all instances in the group.
 *
 * @description The image and the instance group must be in the active state. The image must be available in the same region as the instance group.
 *
 * @param request UpdateInstanceGroupImageRequest
 * @return UpdateInstanceGroupImageResponse
 */
UpdateInstanceGroupImageResponse Client::updateInstanceGroupImage(const UpdateInstanceGroupImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceGroupImageWithOptions(request, runtime);
}

/**
 * @summary Changes the image of an instance in a cloud phone matrix. You can change the image for an instance only when the instance is in the Running, Stopped, or Failed to change the image state. The GPU vendor of the target image must match the GPU vendor of the server where the instance runs. If you change the image across major versions, such as from Android 10 to Android 12, the system clears all data. This operation is equivalent to changing the image and then resetting the instance.
 *
 * @description <props="china">You can change images only for cloud phone matrix instances. Other instance types are not supported.<props="intl">This feature is not available on the Alibaba Cloud international site (www\\.alibabacloud.com).
 *
 * @param request UpdateInstanceImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceImageResponse
 */
UpdateInstanceImageResponse Client::updateInstanceImageWithOptions(const UpdateInstanceImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIgnoreParamValidation()) {
    query["IgnoreParamValidation"] = request.getIgnoreParamValidation();
  }

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
 * @summary Changes the image of an instance in a cloud phone matrix. You can change the image for an instance only when the instance is in the Running, Stopped, or Failed to change the image state. The GPU vendor of the target image must match the GPU vendor of the server where the instance runs. If you change the image across major versions, such as from Android 10 to Android 12, the system clears all data. This operation is equivalent to changing the image and then resetting the instance.
 *
 * @description <props="china">You can change images only for cloud phone matrix instances. Other instance types are not supported.<props="intl">This feature is not available on the Alibaba Cloud international site (www\\.alibabacloud.com).
 *
 * @param request UpdateInstanceImageRequest
 * @return UpdateInstanceImageResponse
 */
UpdateInstanceImageResponse Client::updateInstanceImage(const UpdateInstanceImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceImageWithOptions(request, runtime);
}

/**
 * @summary Upgrades an instance group. This operation only supports scaling out an instance group, which increases the number of instances.
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

  if (!!request.hasPaidCallBackUrl()) {
    query["PaidCallBackUrl"] = request.getPaidCallBackUrl();
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
 * @summary Upgrades an instance group. This operation only supports scaling out an instance group, which increases the number of instances.
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