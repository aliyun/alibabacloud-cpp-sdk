// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_HOLOGRAM20220601_HPP_
#define ALIBABACLOUD_HOLOGRAM20220601_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Hologram20220601Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Hologram20220601.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 绑定主实例
       *
       * @param request BindLeaderInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindLeaderInstanceResponse
       */
      Models::BindLeaderInstanceResponse bindLeaderInstanceWithOptions(const string &instanceId, const Models::BindLeaderInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定主实例
       *
       * @param request BindLeaderInstanceRequest
       * @return BindLeaderInstanceResponse
       */
      Models::BindLeaderInstanceResponse bindLeaderInstance(const string &instanceId, const Models::BindLeaderInstanceRequest &request);

      /**
       * @summary Updates a resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 创建db
       *
       * @param request CreateDatabaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabaseWithOptions(const string &instanceId, const Models::CreateDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建db
       *
       * @param request CreateDatabaseRequest
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabase(const string &instanceId, const Models::CreateDatabaseRequest &request);

      /**
       * @summary 创建外部db
       *
       * @param request CreateExternalDatabaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExternalDatabaseResponse
       */
      Models::CreateExternalDatabaseResponse createExternalDatabaseWithOptions(const string &instanceId, const Models::CreateExternalDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建外部db
       *
       * @param request CreateExternalDatabaseRequest
       * @return CreateExternalDatabaseResponse
       */
      Models::CreateExternalDatabaseResponse createExternalDatabase(const string &instanceId, const Models::CreateExternalDatabaseRequest &request);

      /**
       * @summary Creates a virtual warehouse.
       *
       * @param request CreateHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHoloWarehouseResponse
       */
      Models::CreateHoloWarehouseResponse createHoloWarehouseWithOptions(const string &instanceId, const Models::CreateHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual warehouse.
       *
       * @param request CreateHoloWarehouseRequest
       * @return CreateHoloWarehouseResponse
       */
      Models::CreateHoloWarehouseResponse createHoloWarehouse(const string &instanceId, const Models::CreateHoloWarehouseRequest &request);

      /**
       * @summary Creates a Hologres instance.
       *
       * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing details of Hologres, see [Pricing](https://www.alibabacloud.com/help/en/hologres/developer-reference/api-hologram-2022-06-01-createinstance).
       * *   When you purchase a Hologres instance, you must specify the region and zone in which the Hologres instance resides. A region may correspond to multiple zones. Example:
       * <!---->
       *     cn-hangzhou: cn-hangzhou-h, cn-hangzhou-j
       *        cn-shanghai: cn-shanghai-e, cn-shanghai-f
       *        cn-beijing: cn-beijing-i, cn-beijing-g
       *        cn-zhangjiakou: cn-zhangjiakou-b
       *        cn-shenzhen: cn-shenzhen-e
       *        cn-hongkong: cn-hongkong-b
       *        cn-shanghai-finance-1: cn-shanghai-finance-1z
       *        ap-northeast-1: ap-northeast-1a
       *        ap-southeast-1: ap-southeast-1c
       *        ap-southeast-3: ap-southeast-3b
       *        ap-southeast-5: ap-southeast-5b
       *        ap-south-1: ap-south-1b
       *        eu-central-1: eu-central-1a
       *        us-east-1: us-east-1a
       *        us-west-1: us-west-1b
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Hologres instance.
       *
       * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing details of Hologres, see [Pricing](https://www.alibabacloud.com/help/en/hologres/developer-reference/api-hologram-2022-06-01-createinstance).
       * *   When you purchase a Hologres instance, you must specify the region and zone in which the Hologres instance resides. A region may correspond to multiple zones. Example:
       * <!---->
       *     cn-hangzhou: cn-hangzhou-h, cn-hangzhou-j
       *        cn-shanghai: cn-shanghai-e, cn-shanghai-f
       *        cn-beijing: cn-beijing-i, cn-beijing-g
       *        cn-zhangjiakou: cn-zhangjiakou-b
       *        cn-shenzhen: cn-shenzhen-e
       *        cn-hongkong: cn-hongkong-b
       *        cn-shanghai-finance-1: cn-shanghai-finance-1z
       *        ap-northeast-1: ap-northeast-1a
       *        ap-southeast-1: ap-southeast-1c
       *        ap-southeast-3: ap-southeast-3b
       *        ap-southeast-5: ap-southeast-5b
       *        ap-south-1: ap-south-1b
       *        eu-central-1: eu-central-1a
       *        us-east-1: us-east-1a
       *        us-west-1: us-west-1b
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建手动备份
       *
       * @param request CreateManualBackupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateManualBackupResponse
       */
      Models::CreateManualBackupResponse createManualBackupWithOptions(const Models::CreateManualBackupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建手动备份
       *
       * @param request CreateManualBackupRequest
       * @return CreateManualBackupResponse
       */
      Models::CreateManualBackupResponse createManualBackup(const Models::CreateManualBackupRequest &request);

      /**
       * @summary 创建模型服务
       *
       * @param request CreateModelServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelServiceResponse
       */
      Models::CreateModelServiceResponse createModelServiceWithOptions(const string &instanceId, const Models::CreateModelServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模型服务
       *
       * @param request CreateModelServiceRequest
       * @return CreateModelServiceResponse
       */
      Models::CreateModelServiceResponse createModelService(const string &instanceId, const Models::CreateModelServiceRequest &request);

      /**
       * @summary 添加用户
       *
       * @param request CreateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const string &instanceId, const Models::CreateUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加用户
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const string &instanceId, const Models::CreateUserRequest &request);

      /**
       * @summary 创建warehouse
       *
       * @param request CreateWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWarehouseResponse
       */
      Models::CreateWarehouseResponse createWarehouseWithOptions(const string &instanceId, const Models::CreateWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建warehouse
       *
       * @param request CreateWarehouseRequest
       * @return CreateWarehouseResponse
       */
      Models::CreateWarehouseResponse createWarehouse(const string &instanceId, const Models::CreateWarehouseRequest &request);

      /**
       * @summary 创建分时弹性计划
       *
       * @param request CreateWarehouseScheduleTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWarehouseScheduleTaskResponse
       */
      Models::CreateWarehouseScheduleTaskResponse createWarehouseScheduleTaskWithOptions(const string &instanceId, const Models::CreateWarehouseScheduleTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建分时弹性计划
       *
       * @param request CreateWarehouseScheduleTaskRequest
       * @return CreateWarehouseScheduleTaskResponse
       */
      Models::CreateWarehouseScheduleTaskResponse createWarehouseScheduleTask(const string &instanceId, const Models::CreateWarehouseScheduleTaskRequest &request);

      /**
       * @summary 删除备份
       *
       * @param request DeleteBackupDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupDataResponse
       */
      Models::DeleteBackupDataResponse deleteBackupDataWithOptions(const string &id, const Models::DeleteBackupDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除备份
       *
       * @param request DeleteBackupDataRequest
       * @return DeleteBackupDataResponse
       */
      Models::DeleteBackupDataResponse deleteBackupData(const string &id, const Models::DeleteBackupDataRequest &request);

      /**
       * @summary Deletes a virtual warehouse.
       *
       * @param request DeleteHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHoloWarehouseResponse
       */
      Models::DeleteHoloWarehouseResponse deleteHoloWarehouseWithOptions(const string &instanceId, const Models::DeleteHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual warehouse.
       *
       * @param request DeleteHoloWarehouseRequest
       * @return DeleteHoloWarehouseResponse
       */
      Models::DeleteHoloWarehouseResponse deleteHoloWarehouse(const string &instanceId, const Models::DeleteHoloWarehouseRequest &request);

      /**
       * @summary Deletes a Hologres instance.
       *
       * @description > Before you call this operation, read the documentation and make sure that you understand the prerequisites and impacts of this operation.
       * *   After you delete a Hologres instance, data and objects in the instance cannot be restored. Proceed with caution. For more information, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview?spm=a2c63.p38356.0.0.efc33b87i5pDl7).
       * *   You can delete only pay-as-you-go instances.
       *
       * @param request DeleteInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const string &instanceId, const Models::DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Hologres instance.
       *
       * @description > Before you call this operation, read the documentation and make sure that you understand the prerequisites and impacts of this operation.
       * *   After you delete a Hologres instance, data and objects in the instance cannot be restored. Proceed with caution. For more information, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview?spm=a2c63.p38356.0.0.efc33b87i5pDl7).
       * *   You can delete only pay-as-you-go instances.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const string &instanceId, const Models::DeleteInstanceRequest &request);

      /**
       * @summary 删除模型资源
       *
       * @param request DeleteModelResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResourceResponse
       */
      Models::DeleteModelResourceResponse deleteModelResourceWithOptions(const string &instanceId, const Models::DeleteModelResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模型资源
       *
       * @param request DeleteModelResourceRequest
       * @return DeleteModelResourceResponse
       */
      Models::DeleteModelResourceResponse deleteModelResource(const string &instanceId, const Models::DeleteModelResourceRequest &request);

      /**
       * @summary 创建模型服务
       *
       * @param request DeleteModelServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelServiceResponse
       */
      Models::DeleteModelServiceResponse deleteModelServiceWithOptions(const string &instanceId, const Models::DeleteModelServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模型服务
       *
       * @param request DeleteModelServiceRequest
       * @return DeleteModelServiceResponse
       */
      Models::DeleteModelServiceResponse deleteModelService(const string &instanceId, const Models::DeleteModelServiceRequest &request);

      /**
       * @summary 删除计算组弹性计划
       *
       * @param request DeleteWarehouseScheduleTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWarehouseScheduleTaskResponse
       */
      Models::DeleteWarehouseScheduleTaskResponse deleteWarehouseScheduleTaskWithOptions(const string &instanceId, const Models::DeleteWarehouseScheduleTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除计算组弹性计划
       *
       * @param request DeleteWarehouseScheduleTaskRequest
       * @return DeleteWarehouseScheduleTaskResponse
       */
      Models::DeleteWarehouseScheduleTaskResponse deleteWarehouseScheduleTask(const string &instanceId, const Models::DeleteWarehouseScheduleTaskRequest &request);

      /**
       * @summary 暂停实例
       *
       * @param request DescribeTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停实例
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary 关闭OpenAPI执行SQL功能
       *
       * @param request DisableExecuteStatementRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableExecuteStatementResponse
       */
      Models::DisableExecuteStatementResponse disableExecuteStatementWithOptions(const string &instanceId, const Models::DisableExecuteStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭OpenAPI执行SQL功能
       *
       * @param request DisableExecuteStatementRequest
       * @return DisableExecuteStatementResponse
       */
      Models::DisableExecuteStatementResponse disableExecuteStatement(const string &instanceId, const Models::DisableExecuteStatementRequest &request);

      /**
       * @summary Disables data lake acceleration.
       *
       * @param request DisableHiveAccessRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableHiveAccessResponse
       */
      Models::DisableHiveAccessResponse disableHiveAccessWithOptions(const string &instanceId, const Models::DisableHiveAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables data lake acceleration.
       *
       * @param request DisableHiveAccessRequest
       * @return DisableHiveAccessResponse
       */
      Models::DisableHiveAccessResponse disableHiveAccess(const string &instanceId, const Models::DisableHiveAccessRequest &request);

      /**
       * @summary 取消执行计划
       *
       * @param request DisableOperationEventRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableOperationEventResponse
       */
      Models::DisableOperationEventResponse disableOperationEventWithOptions(const string &instanceId, const Models::DisableOperationEventRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消执行计划
       *
       * @param request DisableOperationEventRequest
       * @return DisableOperationEventResponse
       */
      Models::DisableOperationEventResponse disableOperationEvent(const string &instanceId, const Models::DisableOperationEventRequest &request);

      /**
       * @summary 关闭SSL
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSSLResponse
       */
      Models::DisableSSLResponse disableSSLWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭SSL
       *
       * @return DisableSSLResponse
       */
      Models::DisableSSLResponse disableSSL(const string &instanceId);

      /**
       * @summary 关闭服务账号
       *
       * @param request DisableSupportAccountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSupportAccountResponse
       */
      Models::DisableSupportAccountResponse disableSupportAccountWithOptions(const string &instanceId, const Models::DisableSupportAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭服务账号
       *
       * @param request DisableSupportAccountRequest
       * @return DisableSupportAccountResponse
       */
      Models::DisableSupportAccountResponse disableSupportAccount(const string &instanceId, const Models::DisableSupportAccountRequest &request);

      /**
       * @summary 关闭自动弹性
       *
       * @param request DisableWarehouseAutoScaleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableWarehouseAutoScaleResponse
       */
      Models::DisableWarehouseAutoScaleResponse disableWarehouseAutoScaleWithOptions(const string &instanceId, const Models::DisableWarehouseAutoScaleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭自动弹性
       *
       * @param request DisableWarehouseAutoScaleRequest
       * @return DisableWarehouseAutoScaleResponse
       */
      Models::DisableWarehouseAutoScaleResponse disableWarehouseAutoScale(const string &instanceId, const Models::DisableWarehouseAutoScaleRequest &request);

      /**
       * @summary 取消升级
       *
       * @param request DiscardUpgradeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiscardUpgradeResponse
       */
      Models::DiscardUpgradeResponse discardUpgradeWithOptions(const string &instanceId, const Models::DiscardUpgradeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消升级
       *
       * @param request DiscardUpgradeRequest
       * @return DiscardUpgradeResponse
       */
      Models::DiscardUpgradeResponse discardUpgrade(const string &instanceId, const Models::DiscardUpgradeRequest &request);

      /**
       * @summary 删除用户
       *
       * @param request DropUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropUserResponse
       */
      Models::DropUserResponse dropUserWithOptions(const string &instanceId, const Models::DropUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户
       *
       * @param request DropUserRequest
       * @return DropUserResponse
       */
      Models::DropUserResponse dropUser(const string &instanceId, const Models::DropUserRequest &request);

      /**
       * @summary 开启或关闭OpenAPI执行SQL功能
       *
       * @param request EnableExecuteStatementRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableExecuteStatementResponse
       */
      Models::EnableExecuteStatementResponse enableExecuteStatementWithOptions(const string &instanceId, const Models::EnableExecuteStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启或关闭OpenAPI执行SQL功能
       *
       * @param request EnableExecuteStatementRequest
       * @return EnableExecuteStatementResponse
       */
      Models::EnableExecuteStatementResponse enableExecuteStatement(const string &instanceId, const Models::EnableExecuteStatementRequest &request);

      /**
       * @summary Enables data lake acceleration.
       *
       * @param request EnableHiveAccessRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableHiveAccessResponse
       */
      Models::EnableHiveAccessResponse enableHiveAccessWithOptions(const string &instanceId, const Models::EnableHiveAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables data lake acceleration.
       *
       * @param request EnableHiveAccessRequest
       * @return EnableHiveAccessResponse
       */
      Models::EnableHiveAccessResponse enableHiveAccess(const string &instanceId, const Models::EnableHiveAccessRequest &request);

      /**
       * @summary 打开SSL
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSSLResponse
       */
      Models::EnableSSLResponse enableSSLWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打开SSL
       *
       * @return EnableSSLResponse
       */
      Models::EnableSSLResponse enableSSL(const string &instanceId);

      /**
       * @summary 打开服务账号
       *
       * @param request EnableSupportAccountRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSupportAccountResponse
       */
      Models::EnableSupportAccountResponse enableSupportAccountWithOptions(const string &instanceId, const Models::EnableSupportAccountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打开服务账号
       *
       * @param request EnableSupportAccountRequest
       * @return EnableSupportAccountResponse
       */
      Models::EnableSupportAccountResponse enableSupportAccount(const string &instanceId, const Models::EnableSupportAccountRequest &request);

      /**
       * @summary 开启自动弹性
       *
       * @param request EnableWarehouseAutoScaleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableWarehouseAutoScaleResponse
       */
      Models::EnableWarehouseAutoScaleResponse enableWarehouseAutoScaleWithOptions(const string &instanceId, const Models::EnableWarehouseAutoScaleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启自动弹性
       *
       * @param request EnableWarehouseAutoScaleRequest
       * @return EnableWarehouseAutoScaleResponse
       */
      Models::EnableWarehouseAutoScaleResponse enableWarehouseAutoScale(const string &instanceId, const Models::EnableWarehouseAutoScaleRequest &request);

      /**
       * @summary SQL执行
       *
       * @param request ExecuteStatementRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteStatementResponse
       */
      Models::ExecuteStatementResponse executeStatementWithOptions(const string &instanceId, const Models::ExecuteStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SQL执行
       *
       * @param request ExecuteStatementRequest
       * @return ExecuteStatementResponse
       */
      Models::ExecuteStatementResponse executeStatement(const string &instanceId, const Models::ExecuteStatementRequest &request);

      /**
       * @summary 获得证书信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateAttributeResponse
       */
      Models::GetCertificateAttributeResponse getCertificateAttributeWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得证书信息
       *
       * @return GetCertificateAttributeResponse
       */
      Models::GetCertificateAttributeResponse getCertificateAttribute(const string &instanceId);

      /**
       * @summary 查询实例是否已开启OpenAPI执行SQL功能
       *
       * @param request GetExecuteStatementEnabledRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExecuteStatementEnabledResponse
       */
      Models::GetExecuteStatementEnabledResponse getExecuteStatementEnabledWithOptions(const string &instanceId, const Models::GetExecuteStatementEnabledRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例是否已开启OpenAPI执行SQL功能
       *
       * @param request GetExecuteStatementEnabledRequest
       * @return GetExecuteStatementEnabledResponse
       */
      Models::GetExecuteStatementEnabledResponse getExecuteStatementEnabled(const string &instanceId, const Models::GetExecuteStatementEnabledRequest &request);

      /**
       * @summary 获取holoweb登陆权限
       *
       * @param request GetHoloWebLoginSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHoloWebLoginSettingResponse
       */
      Models::GetHoloWebLoginSettingResponse getHoloWebLoginSettingWithOptions(const string &instanceId, const Models::GetHoloWebLoginSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取holoweb登陆权限
       *
       * @param request GetHoloWebLoginSettingRequest
       * @return GetHoloWebLoginSettingResponse
       */
      Models::GetHoloWebLoginSettingResponse getHoloWebLoginSetting(const string &instanceId, const Models::GetHoloWebLoginSettingRequest &request);

      /**
       * @summary Obtains the details of an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of an instance.
       *
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const string &instanceId);

      /**
       * @summary 模型信息
       *
       * @param request GetInstanceModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceModelResponse
       */
      Models::GetInstanceModelResponse getInstanceModelWithOptions(const string &instanceId, const Models::GetInstanceModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型信息
       *
       * @param request GetInstanceModelRequest
       * @return GetInstanceModelResponse
       */
      Models::GetInstanceModelResponse getInstanceModel(const string &instanceId, const Models::GetInstanceModelRequest &request);

      /**
       * @summary 获取上次升级历史
       *
       * @param request GetLastUpgradeRecordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLastUpgradeRecordResponse
       */
      Models::GetLastUpgradeRecordResponse getLastUpgradeRecordWithOptions(const string &instanceId, const Models::GetLastUpgradeRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取上次升级历史
       *
       * @param request GetLastUpgradeRecordRequest
       * @return GetLastUpgradeRecordResponse
       */
      Models::GetLastUpgradeRecordResponse getLastUpgradeRecord(const string &instanceId, const Models::GetLastUpgradeRecordRequest &request);

      /**
       * @summary 获得根证书
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRootCertificateResponse
       */
      Models::GetRootCertificateResponse getRootCertificateWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得根证书
       *
       * @return GetRootCertificateResponse
       */
      Models::GetRootCertificateResponse getRootCertificate(const string &instanceId);

      /**
       * @summary 获取周期备份配置
       *
       * @param request GetScheduledBackupConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledBackupConfigResponse
       */
      Models::GetScheduledBackupConfigResponse getScheduledBackupConfigWithOptions(const Models::GetScheduledBackupConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取周期备份配置
       *
       * @param request GetScheduledBackupConfigRequest
       * @return GetScheduledBackupConfigResponse
       */
      Models::GetScheduledBackupConfigResponse getScheduledBackupConfig(const Models::GetScheduledBackupConfigRequest &request);

      /**
       * @summary 获取升级状态
       *
       * @param request GetUpgradeStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUpgradeStatusResponse
       */
      Models::GetUpgradeStatusResponse getUpgradeStatusWithOptions(const string &instanceId, const Models::GetUpgradeStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取升级状态
       *
       * @param request GetUpgradeStatusRequest
       * @return GetUpgradeStatusResponse
       */
      Models::GetUpgradeStatusResponse getUpgradeStatus(const string &instanceId, const Models::GetUpgradeStatusRequest &request);

      /**
       * @summary 是否可升级
       *
       * @param request GetUpgradeableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUpgradeableResponse
       */
      Models::GetUpgradeableResponse getUpgradeableWithOptions(const string &instanceId, const Models::GetUpgradeableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 是否可升级
       *
       * @param request GetUpgradeableRequest
       * @return GetUpgradeableResponse
       */
      Models::GetUpgradeableResponse getUpgradeable(const string &instanceId, const Models::GetUpgradeableRequest &request);

      /**
       * @summary Queries details of a virtual warehouse instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWarehouseDetailResponse
       */
      Models::GetWarehouseDetailResponse getWarehouseDetailWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details of a virtual warehouse instance.
       *
       * @return GetWarehouseDetailResponse
       */
      Models::GetWarehouseDetailResponse getWarehouseDetail(const string &instanceId);

      /**
       * @summary DB授权
       *
       * @param request GrantDatabasePermissionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantDatabasePermissionResponse
       */
      Models::GrantDatabasePermissionResponse grantDatabasePermissionWithOptions(const string &instanceId, const Models::GrantDatabasePermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DB授权
       *
       * @param request GrantDatabasePermissionRequest
       * @return GrantDatabasePermissionResponse
       */
      Models::GrantDatabasePermissionResponse grantDatabasePermission(const string &instanceId, const Models::GrantDatabasePermissionRequest &request);

      /**
       * @summary DB授权
       *
       * @param request GrantSchemaPermissionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantSchemaPermissionResponse
       */
      Models::GrantSchemaPermissionResponse grantSchemaPermissionWithOptions(const string &instanceId, const Models::GrantSchemaPermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DB授权
       *
       * @param request GrantSchemaPermissionRequest
       * @return GrantSchemaPermissionResponse
       */
      Models::GrantSchemaPermissionResponse grantSchemaPermission(const string &instanceId, const Models::GrantSchemaPermissionRequest &request);

      /**
       * @summary DB授权
       *
       * @param request GrantTablePermissionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantTablePermissionResponse
       */
      Models::GrantTablePermissionResponse grantTablePermissionWithOptions(const string &instanceId, const Models::GrantTablePermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DB授权
       *
       * @param request GrantTablePermissionRequest
       * @return GrantTablePermissionResponse
       */
      Models::GrantTablePermissionResponse grantTablePermission(const string &instanceId, const Models::GrantTablePermissionRequest &request);

      /**
       * @summary Queries a list of backups. A backup is a full data snapshot of an instance at the end of the snapshot time. You can purchase another instance to completely restore the original data.
       *
       * @param request ListBackupDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBackupDataResponse
       */
      Models::ListBackupDataResponse listBackupDataWithOptions(const Models::ListBackupDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of backups. A backup is a full data snapshot of an instance at the end of the snapshot time. You can purchase another instance to completely restore the original data.
       *
       * @param request ListBackupDataRequest
       * @return ListBackupDataResponse
       */
      Models::ListBackupDataResponse listBackupData(const Models::ListBackupDataRequest &request);

      /**
       * @summary 获取DB列表
       *
       * @param request ListDatabasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabasesWithOptions(const string &instanceId, const Models::ListDatabasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取DB列表
       *
       * @param request ListDatabasesRequest
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabases(const string &instanceId, const Models::ListDatabasesRequest &request);

      /**
       * @summary 获取只读从实例
       *
       * @param request ListFollowerInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFollowerInstancesResponse
       */
      Models::ListFollowerInstancesResponse listFollowerInstancesWithOptions(const string &instanceId, const Models::ListFollowerInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取只读从实例
       *
       * @param request ListFollowerInstancesRequest
       * @return ListFollowerInstancesResponse
       */
      Models::ListFollowerInstancesResponse listFollowerInstances(const string &instanceId, const Models::ListFollowerInstancesRequest &request);

      /**
       * @summary AI资源列表
       *
       * @param request ListInstanceModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceModelResponse
       */
      Models::ListInstanceModelResponse listInstanceModelWithOptions(const Models::ListInstanceModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI资源列表
       *
       * @param request ListInstanceModelRequest
       * @return ListInstanceModelResponse
       */
      Models::ListInstanceModelResponse listInstanceModel(const Models::ListInstanceModelRequest &request);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary 获取主实例
       *
       * @param request ListLeaderInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLeaderInstancesResponse
       */
      Models::ListLeaderInstancesResponse listLeaderInstancesWithOptions(const string &instanceId, const Models::ListLeaderInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取主实例
       *
       * @param request ListLeaderInstancesRequest
       * @return ListLeaderInstancesResponse
       */
      Models::ListLeaderInstancesResponse listLeaderInstances(const string &instanceId, const Models::ListLeaderInstancesRequest &request);

      /**
       * @summary 实例可迁移可用区列表
       *
       * @param request ListMigrationZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMigrationZonesResponse
       */
      Models::ListMigrationZonesResponse listMigrationZonesWithOptions(const string &instanceId, const Models::ListMigrationZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例可迁移可用区列表
       *
       * @param request ListMigrationZonesRequest
       * @return ListMigrationZonesResponse
       */
      Models::ListMigrationZonesResponse listMigrationZones(const string &instanceId, const Models::ListMigrationZonesRequest &request);

      /**
       * @summary 列出模型列表
       *
       * @param request ListModelCatalogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelCatalogResponse
       */
      Models::ListModelCatalogResponse listModelCatalogWithOptions(const string &instanceId, const Models::ListModelCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出模型列表
       *
       * @param request ListModelCatalogRequest
       * @return ListModelCatalogResponse
       */
      Models::ListModelCatalogResponse listModelCatalog(const string &instanceId, const Models::ListModelCatalogRequest &request);

      /**
       * @summary 运维事件列表
       *
       * @param request ListOperationEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationEventsResponse
       */
      Models::ListOperationEventsResponse listOperationEventsWithOptions(const Models::ListOperationEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运维事件列表
       *
       * @param request ListOperationEventsRequest
       * @return ListOperationEventsResponse
       */
      Models::ListOperationEventsResponse listOperationEvents(const Models::ListOperationEventsRequest &request);

      /**
       * @summary holoapp共有云所有开服的region
       *
       * @param request ListRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Models::ListRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary holoapp共有云所有开服的region
       *
       * @param request ListRegionsRequest
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions(const Models::ListRegionsRequest &request);

      /**
       * @summary 获取版本列表
       *
       * @param request ListUpgradeReleaseVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUpgradeReleaseVersionsResponse
       */
      Models::ListUpgradeReleaseVersionsResponse listUpgradeReleaseVersionsWithOptions(const string &instanceId, const Models::ListUpgradeReleaseVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取版本列表
       *
       * @param request ListUpgradeReleaseVersionsRequest
       * @return ListUpgradeReleaseVersionsResponse
       */
      Models::ListUpgradeReleaseVersionsResponse listUpgradeReleaseVersions(const string &instanceId, const Models::ListUpgradeReleaseVersionsRequest &request);

      /**
       * @summary 分时弹性日志
       *
       * @param request ListWarehouseScheduleEventRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWarehouseScheduleEventResponse
       */
      Models::ListWarehouseScheduleEventResponse listWarehouseScheduleEventWithOptions(const string &instanceId, const Models::ListWarehouseScheduleEventRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分时弹性日志
       *
       * @param request ListWarehouseScheduleEventRequest
       * @return ListWarehouseScheduleEventResponse
       */
      Models::ListWarehouseScheduleEventResponse listWarehouseScheduleEvent(const string &instanceId, const Models::ListWarehouseScheduleEventRequest &request);

      /**
       * @summary 计算分时弹性计划列表
       *
       * @param request ListWarehouseScheduleTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWarehouseScheduleTaskResponse
       */
      Models::ListWarehouseScheduleTaskResponse listWarehouseScheduleTaskWithOptions(const string &instanceId, const Models::ListWarehouseScheduleTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 计算分时弹性计划列表
       *
       * @param request ListWarehouseScheduleTaskRequest
       * @return ListWarehouseScheduleTaskResponse
       */
      Models::ListWarehouseScheduleTaskResponse listWarehouseScheduleTask(const string &instanceId, const Models::ListWarehouseScheduleTaskRequest &request);

      /**
       * @summary Queries the list of virtual warehouse instances.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWarehousesResponse
       */
      Models::ListWarehousesResponse listWarehousesWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of virtual warehouse instances.
       *
       * @return ListWarehousesResponse
       */
      Models::ListWarehousesResponse listWarehouses(const string &instanceId);

      /**
       * @summary 实例迁移
       *
       * @param request MigrateInstanceZoneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateInstanceZoneResponse
       */
      Models::MigrateInstanceZoneResponse migrateInstanceZoneWithOptions(const string &instanceId, const Models::MigrateInstanceZoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例迁移
       *
       * @param request MigrateInstanceZoneRequest
       * @return MigrateInstanceZoneResponse
       */
      Models::MigrateInstanceZoneResponse migrateInstanceZone(const string &instanceId, const Models::MigrateInstanceZoneRequest &request);

      /**
       * @summary 准备升级
       *
       * @param request PrepareUpgradeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrepareUpgradeResponse
       */
      Models::PrepareUpgradeResponse prepareUpgradeWithOptions(const string &instanceId, const Models::PrepareUpgradeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 准备升级
       *
       * @param request PrepareUpgradeRequest
       * @return PrepareUpgradeResponse
       */
      Models::PrepareUpgradeResponse prepareUpgrade(const string &instanceId, const Models::PrepareUpgradeRequest &request);

      /**
       * @summary Triggers shard rebalancing for a virtual warehouse.
       *
       * @param request RebalanceHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebalanceHoloWarehouseResponse
       */
      Models::RebalanceHoloWarehouseResponse rebalanceHoloWarehouseWithOptions(const string &instanceId, const Models::RebalanceHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers shard rebalancing for a virtual warehouse.
       *
       * @param request RebalanceHoloWarehouseRequest
       * @return RebalanceHoloWarehouseResponse
       */
      Models::RebalanceHoloWarehouseResponse rebalanceHoloWarehouse(const string &instanceId, const Models::RebalanceHoloWarehouseRequest &request);

      /**
       * @summary Renames a virtual warehouse.
       *
       * @param request RenameHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameHoloWarehouseResponse
       */
      Models::RenameHoloWarehouseResponse renameHoloWarehouseWithOptions(const string &instanceId, const Models::RenameHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames a virtual warehouse.
       *
       * @param request RenameHoloWarehouseRequest
       * @return RenameHoloWarehouseResponse
       */
      Models::RenameHoloWarehouseResponse renameHoloWarehouse(const string &instanceId, const Models::RenameHoloWarehouseRequest &request);

      /**
       * @summary Manually renews a Hologres instance. You can enable monthly auto-renewal when you renew a Hologres instance.
       *
       * @description >  Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
       * *   For more information about how to renew a Hologres instance, see [Manage renewals](https://www.alibabacloud.com/help/zh/hologres/product-overview/manage-renewals?spm=a2c63.p38356.0.0.38e731c9VAwtDP).
       * *   You can renew only subscription instances.
       *
       * @param request RenewInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const string &instanceId, const Models::RenewInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually renews a Hologres instance. You can enable monthly auto-renewal when you renew a Hologres instance.
       *
       * @description >  Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
       * *   For more information about how to renew a Hologres instance, see [Manage renewals](https://www.alibabacloud.com/help/zh/hologres/product-overview/manage-renewals?spm=a2c63.p38356.0.0.38e731c9VAwtDP).
       * *   You can renew only subscription instances.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const string &instanceId, const Models::RenewInstanceRequest &request);

      /**
       * @summary 更新证书
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewSSLCertificateResponse
       */
      Models::RenewSSLCertificateResponse renewSSLCertificateWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新证书
       *
       * @return RenewSSLCertificateResponse
       */
      Models::RenewSSLCertificateResponse renewSSLCertificate(const string &instanceId);

      /**
       * @summary Restarts a virtual warehouse.
       *
       * @param request RestartHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartHoloWarehouseResponse
       */
      Models::RestartHoloWarehouseResponse restartHoloWarehouseWithOptions(const string &instanceId, const Models::RestartHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a virtual warehouse.
       *
       * @param request RestartHoloWarehouseRequest
       * @return RestartHoloWarehouseResponse
       */
      Models::RestartHoloWarehouseResponse restartHoloWarehouse(const string &instanceId, const Models::RestartHoloWarehouseRequest &request);

      /**
       * @summary Restarts an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an instance.
       *
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const string &instanceId);

      /**
       * @summary Resumes a virtual warehouse.
       *
       * @param request ResumeHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeHoloWarehouseResponse
       */
      Models::ResumeHoloWarehouseResponse resumeHoloWarehouseWithOptions(const string &instanceId, const Models::ResumeHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a virtual warehouse.
       *
       * @param request ResumeHoloWarehouseRequest
       * @return ResumeHoloWarehouseResponse
       */
      Models::ResumeHoloWarehouseResponse resumeHoloWarehouse(const string &instanceId, const Models::ResumeHoloWarehouseRequest &request);

      /**
       * @summary Resumes an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an instance.
       *
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstance(const string &instanceId);

      /**
       * @summary 取消DB授权
       *
       * @param request RevokeDatabasePermissionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeDatabasePermissionResponse
       */
      Models::RevokeDatabasePermissionResponse revokeDatabasePermissionWithOptions(const string &instanceId, const Models::RevokeDatabasePermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消DB授权
       *
       * @param request RevokeDatabasePermissionRequest
       * @return RevokeDatabasePermissionResponse
       */
      Models::RevokeDatabasePermissionResponse revokeDatabasePermission(const string &instanceId, const Models::RevokeDatabasePermissionRequest &request);

      /**
       * @summary 取消Schema授权
       *
       * @param request RevokeSchemaPermissionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeSchemaPermissionResponse
       */
      Models::RevokeSchemaPermissionResponse revokeSchemaPermissionWithOptions(const string &instanceId, const Models::RevokeSchemaPermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消Schema授权
       *
       * @param request RevokeSchemaPermissionRequest
       * @return RevokeSchemaPermissionResponse
       */
      Models::RevokeSchemaPermissionResponse revokeSchemaPermission(const string &instanceId, const Models::RevokeSchemaPermissionRequest &request);

      /**
       * @summary 取消表授权
       *
       * @param request RevokeTablePermissionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeTablePermissionResponse
       */
      Models::RevokeTablePermissionResponse revokeTablePermissionWithOptions(const string &instanceId, const Models::RevokeTablePermissionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消表授权
       *
       * @param request RevokeTablePermissionRequest
       * @return RevokeTablePermissionResponse
       */
      Models::RevokeTablePermissionResponse revokeTablePermission(const string &instanceId, const Models::RevokeTablePermissionRequest &request);

      /**
       * @summary Scales in or out a virtual warehouse.
       *
       * @param request ScaleHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleHoloWarehouseResponse
       */
      Models::ScaleHoloWarehouseResponse scaleHoloWarehouseWithOptions(const string &instanceId, const Models::ScaleHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales in or out a virtual warehouse.
       *
       * @param request ScaleHoloWarehouseRequest
       * @return ScaleHoloWarehouseResponse
       */
      Models::ScaleHoloWarehouseResponse scaleHoloWarehouse(const string &instanceId, const Models::ScaleHoloWarehouseRequest &request);

      /**
       * @summary Changes the specifications and storage space of a Hologres instance.
       *
       * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
       * *   During the change of computing resource specifications of a Hologres instance, the instance is unavailable. During the change of storage resource specifications of a Hologres instance, the instance can work normally. Do not frequently change instance specifications. For more information, see [Upgrade or downgrade instance specifications](https://www.alibabacloud.com/help/en/hologres/product-overview/upgrade-or-downgrade-instance-specifications).
       *
       * @param request ScaleInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleInstanceResponse
       */
      Models::ScaleInstanceResponse scaleInstanceWithOptions(const string &instanceId, const Models::ScaleInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the specifications and storage space of a Hologres instance.
       *
       * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
       * *   During the change of computing resource specifications of a Hologres instance, the instance is unavailable. During the change of storage resource specifications of a Hologres instance, the instance can work normally. Do not frequently change instance specifications. For more information, see [Upgrade or downgrade instance specifications](https://www.alibabacloud.com/help/en/hologres/product-overview/upgrade-or-downgrade-instance-specifications).
       *
       * @param request ScaleInstanceRequest
       * @return ScaleInstanceResponse
       */
      Models::ScaleInstanceResponse scaleInstance(const string &instanceId, const Models::ScaleInstanceRequest &request);

      /**
       * @summary Stops an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an instance.
       *
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const string &instanceId);

      /**
       * @summary Suspends a virtual warehouse.
       *
       * @param request SuspendHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendHoloWarehouseResponse
       */
      Models::SuspendHoloWarehouseResponse suspendHoloWarehouseWithOptions(const string &instanceId, const Models::SuspendHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a virtual warehouse.
       *
       * @param request SuspendHoloWarehouseRequest
       * @return SuspendHoloWarehouseResponse
       */
      Models::SuspendHoloWarehouseResponse suspendHoloWarehouse(const string &instanceId, const Models::SuspendHoloWarehouseRequest &request);

      /**
       * @summary 新增tag
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增tag
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 解除绑定主实例
       *
       * @param request UnBindLeaderInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnBindLeaderInstanceResponse
       */
      Models::UnBindLeaderInstanceResponse unBindLeaderInstanceWithOptions(const string &instanceId, const Models::UnBindLeaderInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解除绑定主实例
       *
       * @param request UnBindLeaderInstanceRequest
       * @return UnBindLeaderInstanceResponse
       */
      Models::UnBindLeaderInstanceResponse unBindLeaderInstance(const string &instanceId, const Models::UnBindLeaderInstanceRequest &request);

      /**
       * @summary 删除tag
       *
       * @param request UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除tag
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 修改小版本自动升级开关
       *
       * @param request UpdateAutoUpgradeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutoUpgradeResponse
       */
      Models::UpdateAutoUpgradeResponse updateAutoUpgradeWithOptions(const string &instanceId, const Models::UpdateAutoUpgradeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改小版本自动升级开关
       *
       * @param request UpdateAutoUpgradeRequest
       * @return UpdateAutoUpgradeResponse
       */
      Models::UpdateAutoUpgradeResponse updateAutoUpgrade(const string &instanceId, const Models::UpdateAutoUpgradeRequest &request);

      /**
       * @summary 更新备份描述
       *
       * @param request UpdateBackupDataDescRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBackupDataDescResponse
       */
      Models::UpdateBackupDataDescResponse updateBackupDataDescWithOptions(const string &id, const Models::UpdateBackupDataDescRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新备份描述
       *
       * @param request UpdateBackupDataDescRequest
       * @return UpdateBackupDataDescResponse
       */
      Models::UpdateBackupDataDescResponse updateBackupDataDesc(const string &id, const Models::UpdateBackupDataDescRequest &request);

      /**
       * @summary 修改holoweb登陆权限
       *
       * @param request UpdateHoloWebLoginSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHoloWebLoginSettingResponse
       */
      Models::UpdateHoloWebLoginSettingResponse updateHoloWebLoginSettingWithOptions(const string &instanceId, const Models::UpdateHoloWebLoginSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改holoweb登陆权限
       *
       * @param request UpdateHoloWebLoginSettingRequest
       * @return UpdateHoloWebLoginSettingResponse
       */
      Models::UpdateHoloWebLoginSettingResponse updateHoloWebLoginSetting(const string &instanceId, const Models::UpdateHoloWebLoginSettingRequest &request);

      /**
       * @summary Changes the name of an instance.
       *
       * @param request UpdateInstanceNameRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceNameWithOptions(const string &instanceId, const Models::UpdateInstanceNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of an instance.
       *
       * @param request UpdateInstanceNameRequest
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceName(const string &instanceId, const Models::UpdateInstanceNameRequest &request);

      /**
       * @summary Modifies the network configuration of an instance.
       *
       * @param request UpdateInstanceNetworkTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceNetworkTypeResponse
       */
      Models::UpdateInstanceNetworkTypeResponse updateInstanceNetworkTypeWithOptions(const string &instanceId, const Models::UpdateInstanceNetworkTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network configuration of an instance.
       *
       * @param request UpdateInstanceNetworkTypeRequest
       * @return UpdateInstanceNetworkTypeResponse
       */
      Models::UpdateInstanceNetworkTypeResponse updateInstanceNetworkType(const string &instanceId, const Models::UpdateInstanceNetworkTypeRequest &request);

      /**
       * @summary 修改端口号
       *
       * @param request UpdateInstancePortRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstancePortResponse
       */
      Models::UpdateInstancePortResponse updateInstancePortWithOptions(const string &instanceId, const Models::UpdateInstancePortRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改端口号
       *
       * @param request UpdateInstancePortRequest
       * @return UpdateInstancePortResponse
       */
      Models::UpdateInstancePortResponse updateInstancePort(const string &instanceId, const Models::UpdateInstancePortRequest &request);

      /**
       * @summary 修改可维护时间窗口
       *
       * @param request UpdateMaintenanceWindowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMaintenanceWindowResponse
       */
      Models::UpdateMaintenanceWindowResponse updateMaintenanceWindowWithOptions(const string &instanceId, const Models::UpdateMaintenanceWindowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改可维护时间窗口
       *
       * @param request UpdateMaintenanceWindowRequest
       * @return UpdateMaintenanceWindowResponse
       */
      Models::UpdateMaintenanceWindowResponse updateMaintenanceWindow(const string &instanceId, const Models::UpdateMaintenanceWindowRequest &request);

      /**
       * @summary 创建模型服务
       *
       * @param request UpdateModelServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelServiceResponse
       */
      Models::UpdateModelServiceResponse updateModelServiceWithOptions(const string &instanceId, const Models::UpdateModelServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模型服务
       *
       * @param request UpdateModelServiceRequest
       * @return UpdateModelServiceResponse
       */
      Models::UpdateModelServiceResponse updateModelService(const string &instanceId, const Models::UpdateModelServiceRequest &request);

      /**
       * @summary 修改运维事件执行时间
       *
       * @param request UpdateOperationEventScheduleTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOperationEventScheduleTimeResponse
       */
      Models::UpdateOperationEventScheduleTimeResponse updateOperationEventScheduleTimeWithOptions(const string &instanceId, const Models::UpdateOperationEventScheduleTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改运维事件执行时间
       *
       * @param request UpdateOperationEventScheduleTimeRequest
       * @return UpdateOperationEventScheduleTimeResponse
       */
      Models::UpdateOperationEventScheduleTimeResponse updateOperationEventScheduleTime(const string &instanceId, const Models::UpdateOperationEventScheduleTimeRequest &request);

      /**
       * @summary 配置周期备份
       *
       * @param request UpdateScheduledBackupConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScheduledBackupConfigResponse
       */
      Models::UpdateScheduledBackupConfigResponse updateScheduledBackupConfigWithOptions(const Models::UpdateScheduledBackupConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置周期备份
       *
       * @param request UpdateScheduledBackupConfigRequest
       * @return UpdateScheduledBackupConfigResponse
       */
      Models::UpdateScheduledBackupConfigResponse updateScheduledBackupConfig(const Models::UpdateScheduledBackupConfigRequest &request);

      /**
       * @summary 创建分时弹性计划
       *
       * @param request UpdateWarehouseScheduleTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWarehouseScheduleTaskResponse
       */
      Models::UpdateWarehouseScheduleTaskResponse updateWarehouseScheduleTaskWithOptions(const string &instanceId, const Models::UpdateWarehouseScheduleTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建分时弹性计划
       *
       * @param request UpdateWarehouseScheduleTaskRequest
       * @return UpdateWarehouseScheduleTaskResponse
       */
      Models::UpdateWarehouseScheduleTaskResponse updateWarehouseScheduleTask(const string &instanceId, const Models::UpdateWarehouseScheduleTaskRequest &request);

      /**
       * @summary 开始升级
       *
       * @param request UpgradeInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeInstanceResponse
       */
      Models::UpgradeInstanceResponse upgradeInstanceWithOptions(const string &instanceId, const Models::UpgradeInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开始升级
       *
       * @param request UpgradeInstanceRequest
       * @return UpgradeInstanceResponse
       */
      Models::UpgradeInstanceResponse upgradeInstance(const string &instanceId, const Models::UpgradeInstanceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
