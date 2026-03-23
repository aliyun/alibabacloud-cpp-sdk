// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RDS20140815_HPP_
#define ALIBABACLOUD_RDS20140815_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Rds20140815Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Rds20140815.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 接受并授权执行系统事件操作
       *
       * @param request AcceptRCInquiredSystemEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptRCInquiredSystemEventResponse
       */
      Models::AcceptRCInquiredSystemEventResponse acceptRCInquiredSystemEventWithOptions(const Models::AcceptRCInquiredSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 接受并授权执行系统事件操作
       *
       * @param request AcceptRCInquiredSystemEventRequest
       * @return AcceptRCInquiredSystemEventResponse
       */
      Models::AcceptRCInquiredSystemEventResponse acceptRCInquiredSystemEvent(const Models::AcceptRCInquiredSystemEventRequest &request);

      /**
       * @summary 激活迁移上云目标端实例
       *
       * @param request ActivateMigrationTargetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateMigrationTargetInstanceResponse
       */
      Models::ActivateMigrationTargetInstanceResponse activateMigrationTargetInstanceWithOptions(const Models::ActivateMigrationTargetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 激活迁移上云目标端实例
       *
       * @param request ActivateMigrationTargetInstanceRequest
       * @return ActivateMigrationTargetInstanceResponse
       */
      Models::ActivateMigrationTargetInstanceResponse activateMigrationTargetInstance(const Models::ActivateMigrationTargetInstanceRequest &request);

      /**
       * @summary 在RDS资源上添加标签信息
       *
       * @param request AddTagsToResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTagsToResourceResponse
       */
      Models::AddTagsToResourceResponse addTagsToResourceWithOptions(const Models::AddTagsToResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在RDS资源上添加标签信息
       *
       * @param request AddTagsToResourceRequest
       * @return AddTagsToResourceResponse
       */
      Models::AddTagsToResourceResponse addTagsToResource(const Models::AddTagsToResourceRequest &request);

      /**
       * @summary 为RDS实例分配公网链接地址
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(const Models::AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为RDS实例分配公网链接地址
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(const Models::AllocateInstancePublicConnectionRequest &request);

      /**
       * @summary 申请读写分离链接地址
       *
       * @param request AllocateReadWriteSplittingConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateReadWriteSplittingConnectionResponse
       */
      Models::AllocateReadWriteSplittingConnectionResponse allocateReadWriteSplittingConnectionWithOptions(const Models::AllocateReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请读写分离链接地址
       *
       * @param request AllocateReadWriteSplittingConnectionRequest
       * @return AllocateReadWriteSplittingConnectionResponse
       */
      Models::AllocateReadWriteSplittingConnectionResponse allocateReadWriteSplittingConnection(const Models::AllocateReadWriteSplittingConnectionRequest &request);

      /**
       * @summary 绑定弹性网卡到RDS Custom实例
       *
       * @param request AssociateEipAddressWithRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateEipAddressWithRCInstanceResponse
       */
      Models::AssociateEipAddressWithRCInstanceResponse associateEipAddressWithRCInstanceWithOptions(const Models::AssociateEipAddressWithRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定弹性网卡到RDS Custom实例
       *
       * @param request AssociateEipAddressWithRCInstanceRequest
       * @return AssociateEipAddressWithRCInstanceResponse
       */
      Models::AssociateEipAddressWithRCInstanceResponse associateEipAddressWithRCInstance(const Models::AssociateEipAddressWithRCInstanceRequest &request);

      /**
       * @summary Invoke the AttachRCDisk API to mount a pay-as-you-go data disk or a system disk to an RDS Custom instance. The instance and the disk must be in the same zone.
       *
       * @description When invoking this API, note the following:
       * - The disk status must be Available (ready to mount).
       * - When mounting a data disk:
       *   - The target RDS Custom instance must be in the running or stopped state.
       *   - If the disk was purchased separately, its metering method must be pay-as-you-go.
       *   - When a system disk previously detached from an RDS Custom instance is mounted as a data disk, there is no restriction on its metering method.
       *   - An elastic ephemeral disk, once unmounted, can only be remounted to its original instance.
       * - When mounting a system disk:
       *   - The target RDS Custom instance must be the source instance from which the system disk was originally unmounted.
       *   - The target RDS Custom instance must be in the stopped state.
       *   - You must configure logon credentials for the instance.
       *   - Elastic ephemeral disks cannot be mounted as system disks.
       *
       * @param request AttachRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachRCDiskResponse
       */
      Models::AttachRCDiskResponse attachRCDiskWithOptions(const Models::AttachRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the AttachRCDisk API to mount a pay-as-you-go data disk or a system disk to an RDS Custom instance. The instance and the disk must be in the same zone.
       *
       * @description When invoking this API, note the following:
       * - The disk status must be Available (ready to mount).
       * - When mounting a data disk:
       *   - The target RDS Custom instance must be in the running or stopped state.
       *   - If the disk was purchased separately, its metering method must be pay-as-you-go.
       *   - When a system disk previously detached from an RDS Custom instance is mounted as a data disk, there is no restriction on its metering method.
       *   - An elastic ephemeral disk, once unmounted, can only be remounted to its original instance.
       * - When mounting a system disk:
       *   - The target RDS Custom instance must be the source instance from which the system disk was originally unmounted.
       *   - The target RDS Custom instance must be in the stopped state.
       *   - You must configure logon credentials for the instance.
       *   - Elastic ephemeral disks cannot be mounted as system disks.
       *
       * @param request AttachRCDiskRequest
       * @return AttachRCDiskResponse
       */
      Models::AttachRCDiskResponse attachRCDisk(const Models::AttachRCDiskRequest &request);

      /**
       * @summary 添加实例到集群
       *
       * @param tmpReq AttachRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachRCInstancesResponse
       */
      Models::AttachRCInstancesResponse attachRCInstancesWithOptions(const Models::AttachRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加实例到集群
       *
       * @param request AttachRCInstancesRequest
       * @return AttachRCInstancesResponse
       */
      Models::AttachRCInstancesResponse attachRCInstances(const Models::AttachRCInstancesRequest &request);

      /**
       * @summary 白名单模板关联实例
       *
       * @param request AttachWhitelistTemplateToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachWhitelistTemplateToInstanceResponse
       */
      Models::AttachWhitelistTemplateToInstanceResponse attachWhitelistTemplateToInstanceWithOptions(const Models::AttachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 白名单模板关联实例
       *
       * @param request AttachWhitelistTemplateToInstanceRequest
       * @return AttachWhitelistTemplateToInstanceResponse
       */
      Models::AttachWhitelistTemplateToInstanceResponse attachWhitelistTemplateToInstance(const Models::AttachWhitelistTemplateToInstanceRequest &request);

      /**
       * @summary 检查备份加密信息
       *
       * @param request AuthorizeBackupEncryptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeBackupEncryptionResponse
       */
      Models::AuthorizeBackupEncryptionResponse authorizeBackupEncryptionWithOptions(const Models::AuthorizeBackupEncryptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查备份加密信息
       *
       * @param request AuthorizeBackupEncryptionRequest
       * @return AuthorizeBackupEncryptionResponse
       */
      Models::AuthorizeBackupEncryptionResponse authorizeBackupEncryption(const Models::AuthorizeBackupEncryptionRequest &request);

      /**
       * @summary Adds rules to the specified security group.
       *
       * @param tmpReq AuthorizeRCSecurityGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeRCSecurityGroupPermissionResponse
       */
      Models::AuthorizeRCSecurityGroupPermissionResponse authorizeRCSecurityGroupPermissionWithOptions(const Models::AuthorizeRCSecurityGroupPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds rules to the specified security group.
       *
       * @param request AuthorizeRCSecurityGroupPermissionRequest
       * @return AuthorizeRCSecurityGroupPermissionResponse
       */
      Models::AuthorizeRCSecurityGroupPermissionResponse authorizeRCSecurityGroupPermission(const Models::AuthorizeRCSecurityGroupPermissionRequest &request);

      /**
       * @summary 查询共享代理实例下各节点的读写权重值
       *
       * @param request CalculateDBInstanceWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CalculateDBInstanceWeightResponse
       */
      Models::CalculateDBInstanceWeightResponse calculateDBInstanceWeightWithOptions(const Models::CalculateDBInstanceWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询共享代理实例下各节点的读写权重值
       *
       * @param request CalculateDBInstanceWeightRequest
       * @return CalculateDBInstanceWeightResponse
       */
      Models::CalculateDBInstanceWeightResponse calculateDBInstanceWeight(const Models::CalculateDBInstanceWeightRequest &request);

      /**
       * @summary 取消主动运维任务
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消主动运维任务
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary 检查可用的账号名称
       *
       * @param request CheckAccountNameAvailableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccountNameAvailableResponse
       */
      Models::CheckAccountNameAvailableResponse checkAccountNameAvailableWithOptions(const Models::CheckAccountNameAvailableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查可用的账号名称
       *
       * @param request CheckAccountNameAvailableRequest
       * @return CheckAccountNameAvailableResponse
       */
      Models::CheckAccountNameAvailableResponse checkAccountNameAvailable(const Models::CheckAccountNameAvailableRequest &request);

      /**
       * @summary 检查备份加密授权
       *
       * @param request CheckBackupEncryptionAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckBackupEncryptionAuthorizedResponse
       */
      Models::CheckBackupEncryptionAuthorizedResponse checkBackupEncryptionAuthorizedWithOptions(const Models::CheckBackupEncryptionAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查备份加密授权
       *
       * @param request CheckBackupEncryptionAuthorizedRequest
       * @return CheckBackupEncryptionAuthorizedResponse
       */
      Models::CheckBackupEncryptionAuthorizedResponse checkBackupEncryptionAuthorized(const Models::CheckBackupEncryptionAuthorizedRequest &request);

      /**
       * @summary 检查云资源授权
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(const Models::CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查云资源授权
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(const Models::CheckCloudResourceAuthorizedRequest &request);

      /**
       * @summary 预检查某RDS实例是否可以用跨地域备份集进行跨地域恢复
       *
       * @param request CheckCreateDdrDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCreateDdrDBInstanceResponse
       */
      Models::CheckCreateDdrDBInstanceResponse checkCreateDdrDBInstanceWithOptions(const Models::CheckCreateDdrDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预检查某RDS实例是否可以用跨地域备份集进行跨地域恢复
       *
       * @param request CheckCreateDdrDBInstanceRequest
       * @return CheckCreateDdrDBInstanceResponse
       */
      Models::CheckCreateDdrDBInstanceResponse checkCreateDdrDBInstance(const Models::CheckCreateDdrDBInstanceRequest &request);

      /**
       * @summary 检查数据库名是否可用
       *
       * @param request CheckDBNameAvailableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDBNameAvailableResponse
       */
      Models::CheckDBNameAvailableResponse checkDBNameAvailableWithOptions(const Models::CheckDBNameAvailableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查数据库名是否可用
       *
       * @param request CheckDBNameAvailableRequest
       * @return CheckDBNameAvailableResponse
       */
      Models::CheckDBNameAvailableResponse checkDBNameAvailable(const Models::CheckDBNameAvailableRequest &request);

      /**
       * @summary 检查实例是否存在
       *
       * @param request CheckInstanceExistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceExistResponse
       */
      Models::CheckInstanceExistResponse checkInstanceExistWithOptions(const Models::CheckInstanceExistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查实例是否存在
       *
       * @param request CheckInstanceExistRequest
       * @return CheckInstanceExistResponse
       */
      Models::CheckInstanceExistResponse checkInstanceExist(const Models::CheckInstanceExistRequest &request);

      /**
       * @summary 查看是否已创建服务关联角色（SLR）和是否开租
       *
       * @param request CheckRdsCustomInitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckRdsCustomInitResponse
       */
      Models::CheckRdsCustomInitResponse checkRdsCustomInitWithOptions(const Models::CheckRdsCustomInitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看是否已创建服务关联角色（SLR）和是否开租
       *
       * @param request CheckRdsCustomInitRequest
       * @return CheckRdsCustomInitResponse
       */
      Models::CheckRdsCustomInitResponse checkRdsCustomInit(const Models::CheckRdsCustomInitRequest &request);

      /**
       * @summary 检查地域是否支持备份加密
       *
       * @param request CheckRegionSupportBackupEncryptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckRegionSupportBackupEncryptionResponse
       */
      Models::CheckRegionSupportBackupEncryptionResponse checkRegionSupportBackupEncryptionWithOptions(const Models::CheckRegionSupportBackupEncryptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查地域是否支持备份加密
       *
       * @param request CheckRegionSupportBackupEncryptionRequest
       * @return CheckRegionSupportBackupEncryptionResponse
       */
      Models::CheckRegionSupportBackupEncryptionResponse checkRegionSupportBackupEncryption(const Models::CheckRegionSupportBackupEncryptionRequest &request);

      /**
       * @summary 查看是否已创建服务关联角色（SLR）
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看是否已创建服务关联角色（SLR）
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary This API is used to restore historical data to a new instance (referred to as a clone instance).
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites for using the API and the impact of its usage before performing any operation.
       * - [RDS MySQL Data Restoration](https://help.aliyun.com/document_detail/96147.html)
       * - [RDS PostgreSQL Data Restoration](https://help.aliyun.com/document_detail/96776.html)
       * - [RDS SQL Server Data Restoration](https://help.aliyun.com/document_detail/95722.html)
       * - [RDS MariaDB Data Restoration](https://help.aliyun.com/document_detail/97151.html)
       *
       * @param tmpReq CloneDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneDBInstanceResponse
       */
      Models::CloneDBInstanceResponse cloneDBInstanceWithOptions(const Models::CloneDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to restore historical data to a new instance (referred to as a clone instance).
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites for using the API and the impact of its usage before performing any operation.
       * - [RDS MySQL Data Restoration](https://help.aliyun.com/document_detail/96147.html)
       * - [RDS PostgreSQL Data Restoration](https://help.aliyun.com/document_detail/96776.html)
       * - [RDS SQL Server Data Restoration](https://help.aliyun.com/document_detail/95722.html)
       * - [RDS MariaDB Data Restoration](https://help.aliyun.com/document_detail/97151.html)
       *
       * @param request CloneDBInstanceRequest
       * @return CloneDBInstanceResponse
       */
      Models::CloneDBInstanceResponse cloneDBInstance(const Models::CloneDBInstanceRequest &request);

      /**
       * @summary 克隆参数组
       *
       * @param request CloneParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneParameterGroupResponse
       */
      Models::CloneParameterGroupResponse cloneParameterGroupWithOptions(const Models::CloneParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 克隆参数组
       *
       * @param request CloneParameterGroupRequest
       * @return CloneParameterGroupResponse
       */
      Models::CloneParameterGroupResponse cloneParameterGroup(const Models::CloneParameterGroupRequest &request);

      /**
       * @summary 通知消息确认
       *
       * @param tmpReq ConfirmNotifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmNotifyResponse
       */
      Models::ConfirmNotifyResponse confirmNotifyWithOptions(const Models::ConfirmNotifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通知消息确认
       *
       * @param request ConfirmNotifyRequest
       * @return ConfirmNotifyResponse
       */
      Models::ConfirmNotifyResponse confirmNotify(const Models::ConfirmNotifyRequest &request);

      /**
       * @summary 在实例间拷贝数据库
       *
       * @param request CopyDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyDatabaseResponse
       */
      Models::CopyDatabaseResponse copyDatabaseWithOptions(const Models::CopyDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在实例间拷贝数据库
       *
       * @param request CopyDatabaseRequest
       * @return CopyDatabaseResponse
       */
      Models::CopyDatabaseResponse copyDatabase(const Models::CopyDatabaseRequest &request);

      /**
       * @summary 在同一账号下不同实例间复制数据库
       *
       * @param request CopyDatabaseBetweenInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyDatabaseBetweenInstancesResponse
       */
      Models::CopyDatabaseBetweenInstancesResponse copyDatabaseBetweenInstancesWithOptions(const Models::CopyDatabaseBetweenInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在同一账号下不同实例间复制数据库
       *
       * @param request CopyDatabaseBetweenInstancesRequest
       * @return CopyDatabaseBetweenInstancesResponse
       */
      Models::CopyDatabaseBetweenInstancesResponse copyDatabaseBetweenInstances(const Models::CopyDatabaseBetweenInstancesRequest &request);

      /**
       * @summary 在RDS实例中创建账号
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在RDS实例中创建账号
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary This API is used to create a backup set for an RDS instance.
       *
       * @description ### Supported Engines  
       * - RDS MySQL  
       * - RDS PostgreSQL  
       * - RDS SQL Server  
       * - RDS MariaDB  
       * ### Feature Description  
       * This API invokes the built-in backup feature of RDS. You can also use DBS. For more information, <props="china">see [DBS API Overview](https://help.aliyun.com/document_detail/2841997.html)<props="intl">see [DBS API Overview](https://help.aliyun.com/document_detail/2402073.html).  
       * ### Notes  
       * When invoking this API, the instance must meet the following conditions; otherwise, the operation will fail:  
       * - The instance status is **running**.  
       * - No backup job is currently running.  
       * - The number of backup sets that can be created for a single instance per day does not exceed 20.  
       * ### Related Function Documentation  
       * - [Back Up Data for RDS MySQL](https://help.aliyun.com/document_detail/378074.html)  
       * - [Back Up Data for RDS PostgreSQL](https://help.aliyun.com/document_detail/96772.html)  
       * - [Back Up Data for RDS SQL Server](https://help.aliyun.com/document_detail/95717.html)  
       * - [Back Up Data for RDS MariaDB](https://help.aliyun.com/document_detail/97147.html)
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to create a backup set for an RDS instance.
       *
       * @description ### Supported Engines  
       * - RDS MySQL  
       * - RDS PostgreSQL  
       * - RDS SQL Server  
       * - RDS MariaDB  
       * ### Feature Description  
       * This API invokes the built-in backup feature of RDS. You can also use DBS. For more information, <props="china">see [DBS API Overview](https://help.aliyun.com/document_detail/2841997.html)<props="intl">see [DBS API Overview](https://help.aliyun.com/document_detail/2402073.html).  
       * ### Notes  
       * When invoking this API, the instance must meet the following conditions; otherwise, the operation will fail:  
       * - The instance status is **running**.  
       * - No backup job is currently running.  
       * - The number of backup sets that can be created for a single instance per day does not exceed 20.  
       * ### Related Function Documentation  
       * - [Back Up Data for RDS MySQL](https://help.aliyun.com/document_detail/378074.html)  
       * - [Back Up Data for RDS PostgreSQL](https://help.aliyun.com/document_detail/96772.html)  
       * - [Back Up Data for RDS SQL Server](https://help.aliyun.com/document_detail/95717.html)  
       * - [Back Up Data for RDS MariaDB](https://help.aliyun.com/document_detail/97147.html)
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary 创建迁移检查任务
       *
       * @param request CreateCloudMigrationPrecheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudMigrationPrecheckTaskResponse
       */
      Models::CreateCloudMigrationPrecheckTaskResponse createCloudMigrationPrecheckTaskWithOptions(const Models::CreateCloudMigrationPrecheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建迁移检查任务
       *
       * @param request CreateCloudMigrationPrecheckTaskRequest
       * @return CreateCloudMigrationPrecheckTaskResponse
       */
      Models::CreateCloudMigrationPrecheckTaskResponse createCloudMigrationPrecheckTask(const Models::CreateCloudMigrationPrecheckTaskRequest &request);

      /**
       * @summary 创建迁移上云任务
       *
       * @param request CreateCloudMigrationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudMigrationTaskResponse
       */
      Models::CreateCloudMigrationTaskResponse createCloudMigrationTaskWithOptions(const Models::CreateCloudMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建迁移上云任务
       *
       * @param request CreateCloudMigrationTaskRequest
       * @return CreateCloudMigrationTaskResponse
       */
      Models::CreateCloudMigrationTaskResponse createCloudMigrationTask(const Models::CreateCloudMigrationTaskRequest &request);

      /**
       * @summary This API is used to create an RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related Function Documentation
       * >Warning: This API operation incurs a Fee. Carefully read the related Function Documentation before performing this operation.
       * If an error occurs when you invoke the API, you can search for the error message to View the cause of the fault.
       * - [Create an RDS MySQL instance](https://help.aliyun.com/document_detail/148036.html)
       * - [Create a Serverless ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/412231.html)
       * - [Create an RDS PostgreSQL instance](https://help.aliyun.com/document_detail/148038.html)
       * - [Create a Serverless ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/607753.html)
       * - [Create a Babelfish for RDS PostgreSQL instance](https://help.aliyun.com/document_detail/428615.html)
       * - [Create an RDS SQL Server instance](https://help.aliyun.com/document_detail/148037.html)
       * - [Create a Serverless ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/603465.html)
       * - [Create an RDS MariaDB instance](https://help.aliyun.com/document_detail/148040.html)
       *
       * @param tmpReq CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to create an RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related Function Documentation
       * >Warning: This API operation incurs a Fee. Carefully read the related Function Documentation before performing this operation.
       * If an error occurs when you invoke the API, you can search for the error message to View the cause of the fault.
       * - [Create an RDS MySQL instance](https://help.aliyun.com/document_detail/148036.html)
       * - [Create a Serverless ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/412231.html)
       * - [Create an RDS PostgreSQL instance](https://help.aliyun.com/document_detail/148038.html)
       * - [Create a Serverless ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/607753.html)
       * - [Create a Babelfish for RDS PostgreSQL instance](https://help.aliyun.com/document_detail/428615.html)
       * - [Create an RDS SQL Server instance](https://help.aliyun.com/document_detail/148037.html)
       * - [Create a Serverless ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/603465.html)
       * - [Create an RDS MariaDB instance](https://help.aliyun.com/document_detail/148040.html)
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary 创建实例的Endpoint
       *
       * @param tmpReq CreateDBInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceEndpointResponse
       */
      Models::CreateDBInstanceEndpointResponse createDBInstanceEndpointWithOptions(const Models::CreateDBInstanceEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例的Endpoint
       *
       * @param request CreateDBInstanceEndpointRequest
       * @return CreateDBInstanceEndpointResponse
       */
      Models::CreateDBInstanceEndpointResponse createDBInstanceEndpoint(const Models::CreateDBInstanceEndpointRequest &request);

      /**
       * @summary 创建实例的Endpoint连接地址
       *
       * @param request CreateDBInstanceEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceEndpointAddressResponse
       */
      Models::CreateDBInstanceEndpointAddressResponse createDBInstanceEndpointAddressWithOptions(const Models::CreateDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例的Endpoint连接地址
       *
       * @param request CreateDBInstanceEndpointAddressRequest
       * @return CreateDBInstanceEndpointAddressResponse
       */
      Models::CreateDBInstanceEndpointAddressResponse createDBInstanceEndpointAddress(const Models::CreateDBInstanceEndpointAddressRequest &request);

      /**
       * @summary rds重建实例openapi
       *
       * @param request CreateDBInstanceForRebuildRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceForRebuildResponse
       */
      Models::CreateDBInstanceForRebuildResponse createDBInstanceForRebuildWithOptions(const Models::CreateDBInstanceForRebuildRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary rds重建实例openapi
       *
       * @param request CreateDBInstanceForRebuildRequest
       * @return CreateDBInstanceForRebuildResponse
       */
      Models::CreateDBInstanceForRebuildResponse createDBInstanceForRebuild(const Models::CreateDBInstanceForRebuildRequest &request);

      /**
       * @summary Create a replication channel for a native replication instance
       *
       * @param request CreateDBInstanceReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceReplicationResponse
       */
      Models::CreateDBInstanceReplicationResponse createDBInstanceReplicationWithOptions(const Models::CreateDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a replication channel for a native replication instance
       *
       * @param request CreateDBInstanceReplicationRequest
       * @return CreateDBInstanceReplicationResponse
       */
      Models::CreateDBInstanceReplicationResponse createDBInstanceReplication(const Models::CreateDBInstanceReplicationRequest &request);

      /**
       * @summary 创建实例主机安全组规则
       *
       * @param request CreateDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceSecurityGroupRuleResponse
       */
      Models::CreateDBInstanceSecurityGroupRuleResponse createDBInstanceSecurityGroupRuleWithOptions(const Models::CreateDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例主机安全组规则
       *
       * @param request CreateDBInstanceSecurityGroupRuleRequest
       * @return CreateDBInstanceSecurityGroupRuleResponse
       */
      Models::CreateDBInstanceSecurityGroupRuleResponse createDBInstanceSecurityGroupRule(const Models::CreateDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary category cluster add node
       *
       * @param tmpReq CreateDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBNodesResponse
       */
      Models::CreateDBNodesResponse createDBNodesWithOptions(const Models::CreateDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary category cluster add node
       *
       * @param request CreateDBNodesRequest
       * @return CreateDBNodesResponse
       */
      Models::CreateDBNodesResponse createDBNodes(const Models::CreateDBNodesRequest &request);

      /**
       * @summary 创建RDS实例数据库代理的连接地址
       *
       * @param request CreateDBProxyEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBProxyEndpointAddressResponse
       */
      Models::CreateDBProxyEndpointAddressResponse createDBProxyEndpointAddressWithOptions(const Models::CreateDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建RDS实例数据库代理的连接地址
       *
       * @param request CreateDBProxyEndpointAddressRequest
       * @return CreateDBProxyEndpointAddressResponse
       */
      Models::CreateDBProxyEndpointAddressResponse createDBProxyEndpointAddress(const Models::CreateDBProxyEndpointAddressRequest &request);

      /**
       * @summary 为指定RDS示例创建DB
       *
       * @param request CreateDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabaseWithOptions(const Models::CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为指定RDS示例创建DB
       *
       * @param request CreateDatabaseRequest
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabase(const Models::CreateDatabaseRequest &request);

      /**
       * @summary 创建Ddr实例
       *
       * @param request CreateDdrInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDdrInstanceResponse
       */
      Models::CreateDdrInstanceResponse createDdrInstanceWithOptions(const Models::CreateDdrInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Ddr实例
       *
       * @param request CreateDdrInstanceRequest
       * @return CreateDdrInstanceResponse
       */
      Models::CreateDdrInstanceResponse createDdrInstance(const Models::CreateDdrInstanceRequest &request);

      /**
       * @summary 创建全球多活数据库集群
       *
       * @param request CreateGADInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGADInstanceResponse
       */
      Models::CreateGADInstanceResponse createGADInstanceWithOptions(const Models::CreateGADInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建全球多活数据库集群
       *
       * @param request CreateGADInstanceRequest
       * @return CreateGADInstanceResponse
       */
      Models::CreateGADInstanceResponse createGADInstance(const Models::CreateGADInstanceRequest &request);

      /**
       * @summary 增加Gad节点
       *
       * @param request CreateGadInstanceMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGadInstanceMemberResponse
       */
      Models::CreateGadInstanceMemberResponse createGadInstanceMemberWithOptions(const Models::CreateGadInstanceMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加Gad节点
       *
       * @param request CreateGadInstanceMemberRequest
       * @return CreateGadInstanceMemberResponse
       */
      Models::CreateGadInstanceMemberResponse createGadInstanceMember(const Models::CreateGadInstanceMemberRequest &request);

      /**
       * @summary Create a Data Import Job
       *
       * @description Create a Data Import Job for importing data into an RDS MySQL instance with native replication
       *
       * @param request CreateImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImportTaskResponse
       */
      Models::CreateImportTaskResponse createImportTaskWithOptions(const Models::CreateImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a Data Import Job
       *
       * @description Create a Data Import Job for importing data into an RDS MySQL instance with native replication
       *
       * @param request CreateImportTaskRequest
       * @return CreateImportTaskResponse
       */
      Models::CreateImportTaskResponse createImportTask(const Models::CreateImportTaskRequest &request);

      /**
       * @summary 创建全密态规则
       *
       * @description ## Request Description
       * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
       *
       * @param tmpReq CreateMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMaskingRulesResponse
       */
      Models::CreateMaskingRulesResponse createMaskingRulesWithOptions(const Models::CreateMaskingRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建全密态规则
       *
       * @description ## Request Description
       * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
       *
       * @param request CreateMaskingRulesRequest
       * @return CreateMaskingRulesResponse
       */
      Models::CreateMaskingRulesResponse createMaskingRules(const Models::CreateMaskingRulesRequest &request);

      /**
       * @summary 将OSS上的备份文件还原到RDS SQL Server实例，实现数据上云
       *
       * @param request CreateMigrateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMigrateTaskResponse
       */
      Models::CreateMigrateTaskResponse createMigrateTaskWithOptions(const Models::CreateMigrateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将OSS上的备份文件还原到RDS SQL Server实例，实现数据上云
       *
       * @param request CreateMigrateTaskRequest
       * @return CreateMigrateTaskResponse
       */
      Models::CreateMigrateTaskResponse createMigrateTask(const Models::CreateMigrateTaskRequest &request);

      /**
       * @summary 打开RDS SQL Server备份数据上云任务的数据库
       *
       * @param request CreateOnlineDatabaseTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOnlineDatabaseTaskResponse
       */
      Models::CreateOnlineDatabaseTaskResponse createOnlineDatabaseTaskWithOptions(const Models::CreateOnlineDatabaseTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打开RDS SQL Server备份数据上云任务的数据库
       *
       * @param request CreateOnlineDatabaseTaskRequest
       * @return CreateOnlineDatabaseTaskResponse
       */
      Models::CreateOnlineDatabaseTaskResponse createOnlineDatabaseTask(const Models::CreateOnlineDatabaseTaskRequest &request);

      /**
       * @summary 创建删除节点订单
       *
       * @param tmpReq CreateOrderForDeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderForDeleteDBNodesResponse
       */
      Models::CreateOrderForDeleteDBNodesResponse createOrderForDeleteDBNodesWithOptions(const Models::CreateOrderForDeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建删除节点订单
       *
       * @param request CreateOrderForDeleteDBNodesRequest
       * @return CreateOrderForDeleteDBNodesResponse
       */
      Models::CreateOrderForDeleteDBNodesResponse createOrderForDeleteDBNodes(const Models::CreateOrderForDeleteDBNodesRequest &request);

      /**
       * @summary 创建参数模板
       *
       * @param request CreateParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroupWithOptions(const Models::CreateParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建参数模板
       *
       * @param request CreateParameterGroupRequest
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroup(const Models::CreateParameterGroupRequest &request);

      /**
       * @summary 创建插件
       *
       * @param request CreatePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePostgresExtensionsResponse
       */
      Models::CreatePostgresExtensionsResponse createPostgresExtensionsWithOptions(const Models::CreatePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建插件
       *
       * @param request CreatePostgresExtensionsRequest
       * @return CreatePostgresExtensionsResponse
       */
      Models::CreatePostgresExtensionsResponse createPostgresExtensions(const Models::CreatePostgresExtensionsRequest &request);

      /**
       * @summary 创建RDS CUSTOM部署集
       *
       * @param request CreateRCDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCDeploymentSetResponse
       */
      Models::CreateRCDeploymentSetResponse createRCDeploymentSetWithOptions(const Models::CreateRCDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建RDS CUSTOM部署集
       *
       * @param request CreateRCDeploymentSetRequest
       * @return CreateRCDeploymentSetResponse
       */
      Models::CreateRCDeploymentSetResponse createRCDeploymentSet(const Models::CreateRCDeploymentSetRequest &request);

      /**
       * @summary 创建RC云盘
       *
       * @param request CreateRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCDiskResponse
       */
      Models::CreateRCDiskResponse createRCDiskWithOptions(const Models::CreateRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建RC云盘
       *
       * @param request CreateRCDiskRequest
       * @return CreateRCDiskResponse
       */
      Models::CreateRCDiskResponse createRCDisk(const Models::CreateRCDiskRequest &request);

      /**
       * @summary 创建RDS Custom实例的镜像
       *
       * @param request CreateRCImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCImageResponse
       */
      Models::CreateRCImageResponse createRCImageWithOptions(const Models::CreateRCImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建RDS Custom实例的镜像
       *
       * @param request CreateRCImageRequest
       * @return CreateRCImageResponse
       */
      Models::CreateRCImageResponse createRCImage(const Models::CreateRCImageRequest &request);

      /**
       * @summary 创建RC节点池模版
       *
       * @param tmpReq CreateRCNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCNodePoolResponse
       */
      Models::CreateRCNodePoolResponse createRCNodePoolWithOptions(const Models::CreateRCNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建RC节点池模版
       *
       * @param request CreateRCNodePoolRequest
       * @return CreateRCNodePoolResponse
       */
      Models::CreateRCNodePoolResponse createRCNodePool(const Models::CreateRCNodePoolRequest &request);

      /**
       * @summary Create a snapshot for a disk.
       *
       * @description You cannot create a snapshot for the specified disk in the following scenarios:
       * - The number of retained manual snapshots for the disk has reached 256.
       * - The previous snapshot creation has not completed.
       * - The instance to which the disk is mounted has never been started.
       * - The instance to which the disk is mounted is not in the **Stopped** or **running** state.
       * When creating a snapshot, note the following:
       * - If snapshot creation has not completed, the snapshot cannot be used to create a custom image (CreateImage).
       * - If the disk is attached to an RDS Custom instance, do not change the instance status during snapshot creation.
       * - You can create snapshots for disks in the **expired** state. If the disk reaches its expiration and release time while a snapshot is being created, the disk will be released and the snapshot in the **Creating** state will be deleted simultaneously.
       *
       * @param request CreateRCSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCSnapshotResponse
       */
      Models::CreateRCSnapshotResponse createRCSnapshotWithOptions(const Models::CreateRCSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a snapshot for a disk.
       *
       * @description You cannot create a snapshot for the specified disk in the following scenarios:
       * - The number of retained manual snapshots for the disk has reached 256.
       * - The previous snapshot creation has not completed.
       * - The instance to which the disk is mounted has never been started.
       * - The instance to which the disk is mounted is not in the **Stopped** or **running** state.
       * When creating a snapshot, note the following:
       * - If snapshot creation has not completed, the snapshot cannot be used to create a custom image (CreateImage).
       * - If the disk is attached to an RDS Custom instance, do not change the instance status during snapshot creation.
       * - You can create snapshots for disks in the **expired** state. If the disk reaches its expiration and release time while a snapshot is being created, the disk will be released and the snapshot in the **Creating** state will be deleted simultaneously.
       *
       * @param request CreateRCSnapshotRequest
       * @return CreateRCSnapshotResponse
       */
      Models::CreateRCSnapshotResponse createRCSnapshot(const Models::CreateRCSnapshotRequest &request);

      /**
       * @summary This API is used to create a read-only instance for an RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites and potential impacts of using this API before proceeding with any operation.
       * - [Create a Read-Only Instance for RDS MySQL](https://help.aliyun.com/document_detail/56991.html)
       * - [Create a DuckDB Analytic Instance for RDS MySQL](https://help.aliyun.com/document_detail/2950002.html)
       * - [Create a Read-Only Instance for RDS PostgreSQL](https://help.aliyun.com/document_detail/108959.html)
       * - [Create a DuckDB Analytic Instance for RDS PostgreSQL](https://help.aliyun.com/document_detail/2977241.html)
       * - [Create a Read-Only Instance for RDS SQL Server](https://help.aliyun.com/document_detail/99005.html)
       *
       * @param request CreateReadOnlyDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReadOnlyDBInstanceResponse
       */
      Models::CreateReadOnlyDBInstanceResponse createReadOnlyDBInstanceWithOptions(const Models::CreateReadOnlyDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to create a read-only instance for an RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites and potential impacts of using this API before proceeding with any operation.
       * - [Create a Read-Only Instance for RDS MySQL](https://help.aliyun.com/document_detail/56991.html)
       * - [Create a DuckDB Analytic Instance for RDS MySQL](https://help.aliyun.com/document_detail/2950002.html)
       * - [Create a Read-Only Instance for RDS PostgreSQL](https://help.aliyun.com/document_detail/108959.html)
       * - [Create a DuckDB Analytic Instance for RDS PostgreSQL](https://help.aliyun.com/document_detail/2977241.html)
       * - [Create a Read-Only Instance for RDS SQL Server](https://help.aliyun.com/document_detail/99005.html)
       *
       * @param request CreateReadOnlyDBInstanceRequest
       * @return CreateReadOnlyDBInstanceResponse
       */
      Models::CreateReadOnlyDBInstanceResponse createReadOnlyDBInstance(const Models::CreateReadOnlyDBInstanceRequest &request);

      /**
       * @summary 创建复制链路
       *
       * @param request CreateReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReplicationLinkResponse
       */
      Models::CreateReplicationLinkResponse createReplicationLinkWithOptions(const Models::CreateReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建复制链路
       *
       * @param request CreateReplicationLinkRequest
       * @return CreateReplicationLinkResponse
       */
      Models::CreateReplicationLinkResponse createReplicationLink(const Models::CreateReplicationLinkRequest &request);

      /**
       * @summary 创建DataAPI用户凭证
       *
       * @param request CreateSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecretWithOptions(const Models::CreateSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建DataAPI用户凭证
       *
       * @param request CreateSecretRequest
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecret(const Models::CreateSecretRequest &request);

      /**
       * @summary 创建服务关联角色
       *
       * @param request CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建服务关联角色
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary 创建临时实例
       *
       * @param request CreateTempDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTempDBInstanceResponse
       */
      Models::CreateTempDBInstanceResponse createTempDBInstanceWithOptions(const Models::CreateTempDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建临时实例
       *
       * @param request CreateTempDBInstanceRequest
       * @return CreateTempDBInstanceResponse
       */
      Models::CreateTempDBInstanceResponse createTempDBInstance(const Models::CreateTempDBInstanceRequest &request);

      /**
       * @summary This API is used to claim a coupon.
       *
       * @param request CreateYouhuiForOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYouhuiForOrderResponse
       */
      Models::CreateYouhuiForOrderResponse createYouhuiForOrderWithOptions(const Models::CreateYouhuiForOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to claim a coupon.
       *
       * @param request CreateYouhuiForOrderRequest
       * @return CreateYouhuiForOrderResponse
       */
      Models::CreateYouhuiForOrderResponse createYouhuiForOrder(const Models::CreateYouhuiForOrderRequest &request);

      /**
       * @summary 将当前RDS SQL Server实例退出所在域
       *
       * @param request DeleteADSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteADSettingResponse
       */
      Models::DeleteADSettingResponse deleteADSettingWithOptions(const Models::DeleteADSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将当前RDS SQL Server实例退出所在域
       *
       * @param request DeleteADSettingRequest
       * @return DeleteADSettingResponse
       */
      Models::DeleteADSettingResponse deleteADSetting(const Models::DeleteADSettingRequest &request);

      /**
       * @summary 删除指定账号
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定账号
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary 删除实例备份
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实例备份
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary 删除备份文件
       *
       * @param request DeleteBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupFileResponse
       */
      Models::DeleteBackupFileResponse deleteBackupFileWithOptions(const Models::DeleteBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除备份文件
       *
       * @param request DeleteBackupFileRequest
       * @return DeleteBackupFileResponse
       */
      Models::DeleteBackupFileResponse deleteBackupFile(const Models::DeleteBackupFileRequest &request);

      /**
       * @summary 释放RDS实例
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放RDS实例
       *
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

      /**
       * @summary 删除实例的Endpoint
       *
       * @param request DeleteDBInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceEndpointResponse
       */
      Models::DeleteDBInstanceEndpointResponse deleteDBInstanceEndpointWithOptions(const Models::DeleteDBInstanceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实例的Endpoint
       *
       * @param request DeleteDBInstanceEndpointRequest
       * @return DeleteDBInstanceEndpointResponse
       */
      Models::DeleteDBInstanceEndpointResponse deleteDBInstanceEndpoint(const Models::DeleteDBInstanceEndpointRequest &request);

      /**
       * @summary 删除实例的Endpoint连接地址
       *
       * @param request DeleteDBInstanceEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceEndpointAddressResponse
       */
      Models::DeleteDBInstanceEndpointAddressResponse deleteDBInstanceEndpointAddressWithOptions(const Models::DeleteDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实例的Endpoint连接地址
       *
       * @param request DeleteDBInstanceEndpointAddressRequest
       * @return DeleteDBInstanceEndpointAddressResponse
       */
      Models::DeleteDBInstanceEndpointAddressResponse deleteDBInstanceEndpointAddress(const Models::DeleteDBInstanceEndpointAddressRequest &request);

      /**
       * @summary Delete a replication link from a native replication instance
       *
       * @param request DeleteDBInstanceReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceReplicationResponse
       */
      Models::DeleteDBInstanceReplicationResponse deleteDBInstanceReplicationWithOptions(const Models::DeleteDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a replication link from a native replication instance
       *
       * @param request DeleteDBInstanceReplicationRequest
       * @return DeleteDBInstanceReplicationResponse
       */
      Models::DeleteDBInstanceReplicationResponse deleteDBInstanceReplication(const Models::DeleteDBInstanceReplicationRequest &request);

      /**
       * @summary 删除实例主机安全组规则
       *
       * @param request DeleteDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceSecurityGroupRuleResponse
       */
      Models::DeleteDBInstanceSecurityGroupRuleResponse deleteDBInstanceSecurityGroupRuleWithOptions(const Models::DeleteDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实例主机安全组规则
       *
       * @param request DeleteDBInstanceSecurityGroupRuleRequest
       * @return DeleteDBInstanceSecurityGroupRuleResponse
       */
      Models::DeleteDBInstanceSecurityGroupRuleResponse deleteDBInstanceSecurityGroupRule(const Models::DeleteDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary category cluster delete node
       *
       * @param tmpReq DeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBNodesResponse
       */
      Models::DeleteDBNodesResponse deleteDBNodesWithOptions(const Models::DeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary category cluster delete node
       *
       * @param request DeleteDBNodesRequest
       * @return DeleteDBNodesResponse
       */
      Models::DeleteDBNodesResponse deleteDBNodes(const Models::DeleteDBNodesRequest &request);

      /**
       * @summary 删除RDS实例数据库代理的连接地址
       *
       * @param request DeleteDBProxyEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBProxyEndpointAddressResponse
       */
      Models::DeleteDBProxyEndpointAddressResponse deleteDBProxyEndpointAddressWithOptions(const Models::DeleteDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RDS实例数据库代理的连接地址
       *
       * @param request DeleteDBProxyEndpointAddressRequest
       * @return DeleteDBProxyEndpointAddressResponse
       */
      Models::DeleteDBProxyEndpointAddressResponse deleteDBProxyEndpointAddress(const Models::DeleteDBProxyEndpointAddressRequest &request);

      /**
       * @summary 删除指定DB
       *
       * @param request DeleteDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabaseWithOptions(const Models::DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定DB
       *
       * @param request DeleteDatabaseRequest
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabase(const Models::DeleteDatabaseRequest &request);

      /**
       * @summary DeleteGadInstance
       *
       * @param request DeleteGadInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGadInstanceResponse
       */
      Models::DeleteGadInstanceResponse deleteGadInstanceWithOptions(const Models::DeleteGadInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteGadInstance
       *
       * @param request DeleteGadInstanceRequest
       * @return DeleteGadInstanceResponse
       */
      Models::DeleteGadInstanceResponse deleteGadInstance(const Models::DeleteGadInstanceRequest &request);

      /**
       * @summary Deletes the encryption or desensitization rule for a specified instance.
       *
       * @description ## Request Description
       * - Before using this API, ensure that you have activated the column encryption service in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using this API again.
       *
       * @param request DeleteMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaskingRulesResponse
       */
      Models::DeleteMaskingRulesResponse deleteMaskingRulesWithOptions(const Models::DeleteMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the encryption or desensitization rule for a specified instance.
       *
       * @description ## Request Description
       * - Before using this API, ensure that you have activated the column encryption service in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using this API again.
       *
       * @param request DeleteMaskingRulesRequest
       * @return DeleteMaskingRulesResponse
       */
      Models::DeleteMaskingRulesResponse deleteMaskingRules(const Models::DeleteMaskingRulesRequest &request);

      /**
       * @summary 删除指定参数模板
       *
       * @param request DeleteParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroupWithOptions(const Models::DeleteParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定参数模板
       *
       * @param request DeleteParameterGroupRequest
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroup(const Models::DeleteParameterGroupRequest &request);

      /**
       * @summary Delete a scheduled task for modifying instance parameters.
       *
       * @description ### Applicable Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
       * - [Set Instance Parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
       * - [Set Instance Parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request DeleteParameterTimedScheduleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterTimedScheduleTaskResponse
       */
      Models::DeleteParameterTimedScheduleTaskResponse deleteParameterTimedScheduleTaskWithOptions(const Models::DeleteParameterTimedScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a scheduled task for modifying instance parameters.
       *
       * @description ### Applicable Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
       * - [Set Instance Parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
       * - [Set Instance Parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request DeleteParameterTimedScheduleTaskRequest
       * @return DeleteParameterTimedScheduleTaskResponse
       */
      Models::DeleteParameterTimedScheduleTaskResponse deleteParameterTimedScheduleTask(const Models::DeleteParameterTimedScheduleTaskRequest &request);

      /**
       * @summary 删除插件
       *
       * @param request DeletePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePostgresExtensionsResponse
       */
      Models::DeletePostgresExtensionsResponse deletePostgresExtensionsWithOptions(const Models::DeletePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除插件
       *
       * @param request DeletePostgresExtensionsRequest
       * @return DeletePostgresExtensionsResponse
       */
      Models::DeletePostgresExtensionsResponse deletePostgresExtensions(const Models::DeletePostgresExtensionsRequest &request);

      /**
       * @summary 移除集群中的节点
       *
       * @param tmpReq DeleteRCClusterNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCClusterNodesResponse
       */
      Models::DeleteRCClusterNodesResponse deleteRCClusterNodesWithOptions(const Models::DeleteRCClusterNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除集群中的节点
       *
       * @param request DeleteRCClusterNodesRequest
       * @return DeleteRCClusterNodesResponse
       */
      Models::DeleteRCClusterNodesResponse deleteRCClusterNodes(const Models::DeleteRCClusterNodesRequest &request);

      /**
       * @summary 删除RDS CUSTOM部署集
       *
       * @param request DeleteRCDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCDeploymentSetResponse
       */
      Models::DeleteRCDeploymentSetResponse deleteRCDeploymentSetWithOptions(const Models::DeleteRCDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RDS CUSTOM部署集
       *
       * @param request DeleteRCDeploymentSetRequest
       * @return DeleteRCDeploymentSetResponse
       */
      Models::DeleteRCDeploymentSetResponse deleteRCDeploymentSet(const Models::DeleteRCDeploymentSetRequest &request);

      /**
       * @summary 删除RC云盘
       *
       * @param request DeleteRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCDiskResponse
       */
      Models::DeleteRCDiskResponse deleteRCDiskWithOptions(const Models::DeleteRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RC云盘
       *
       * @param request DeleteRCDiskRequest
       * @return DeleteRCDiskResponse
       */
      Models::DeleteRCDiskResponse deleteRCDisk(const Models::DeleteRCDiskRequest &request);

      /**
       * @summary 删除RDS用户专属主机实例
       *
       * @param request DeleteRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCInstanceResponse
       */
      Models::DeleteRCInstanceResponse deleteRCInstanceWithOptions(const Models::DeleteRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RDS用户专属主机实例
       *
       * @param request DeleteRCInstanceRequest
       * @return DeleteRCInstanceResponse
       */
      Models::DeleteRCInstanceResponse deleteRCInstance(const Models::DeleteRCInstanceRequest &request);

      /**
       * @summary 批量删除RDS用户专属主机实例
       *
       * @param tmpReq DeleteRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCInstancesResponse
       */
      Models::DeleteRCInstancesResponse deleteRCInstancesWithOptions(const Models::DeleteRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除RDS用户专属主机实例
       *
       * @param request DeleteRCInstancesRequest
       * @return DeleteRCInstancesResponse
       */
      Models::DeleteRCInstancesResponse deleteRCInstances(const Models::DeleteRCInstancesRequest &request);

      /**
       * @summary 删除RC模版
       *
       * @param request DeleteRCNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCNodePoolResponse
       */
      Models::DeleteRCNodePoolResponse deleteRCNodePoolWithOptions(const Models::DeleteRCNodePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RC模版
       *
       * @param request DeleteRCNodePoolRequest
       * @return DeleteRCNodePoolResponse
       */
      Models::DeleteRCNodePoolResponse deleteRCNodePool(const Models::DeleteRCNodePoolRequest &request);

      /**
       * @summary Deletes a cloud disk snapshot.
       *
       * @param request DeleteRCSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCSnapshotResponse
       */
      Models::DeleteRCSnapshotResponse deleteRCSnapshotWithOptions(const Models::DeleteRCSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cloud disk snapshot.
       *
       * @param request DeleteRCSnapshotRequest
       * @return DeleteRCSnapshotResponse
       */
      Models::DeleteRCSnapshotResponse deleteRCSnapshot(const Models::DeleteRCSnapshotRequest &request);

      /**
       * @summary RCVCluster删除接口
       *
       * @param request DeleteRCVClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCVClusterResponse
       */
      Models::DeleteRCVClusterResponse deleteRCVClusterWithOptions(const Models::DeleteRCVClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RCVCluster删除接口
       *
       * @param request DeleteRCVClusterRequest
       * @return DeleteRCVClusterResponse
       */
      Models::DeleteRCVClusterResponse deleteRCVCluster(const Models::DeleteRCVClusterRequest &request);

      /**
       * @summary 删除复制链路
       *
       * @param request DeleteReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReplicationLinkResponse
       */
      Models::DeleteReplicationLinkResponse deleteReplicationLinkWithOptions(const Models::DeleteReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除复制链路
       *
       * @param request DeleteReplicationLinkRequest
       * @return DeleteReplicationLinkResponse
       */
      Models::DeleteReplicationLinkResponse deleteReplicationLink(const Models::DeleteReplicationLinkRequest &request);

      /**
       * @summary 删除Data API的用户凭证
       *
       * @param request DeleteSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecretWithOptions(const Models::DeleteSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Data API的用户凭证
       *
       * @param request DeleteSecretRequest
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecret(const Models::DeleteSecretRequest &request);

      /**
       * @summary 删除实例复制槽
       *
       * @param request DeleteSlotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSlotResponse
       */
      Models::DeleteSlotResponse deleteSlotWithOptions(const Models::DeleteSlotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实例复制槽
       *
       * @param request DeleteSlotRequest
       * @return DeleteSlotResponse
       */
      Models::DeleteSlotResponse deleteSlot(const Models::DeleteSlotRequest &request);

      /**
       * @summary 删除目标用户备份
       *
       * @param request DeleteUserBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserBackupFileResponse
       */
      Models::DeleteUserBackupFileResponse deleteUserBackupFileWithOptions(const Models::DeleteUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除目标用户备份
       *
       * @param request DeleteUserBackupFileRequest
       * @return DeleteUserBackupFileResponse
       */
      Models::DeleteUserBackupFileResponse deleteUserBackupFile(const Models::DeleteUserBackupFileRequest &request);

      /**
       * @summary 查询数据库迁移列表
       *
       * @param request DescibeImportsFromDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescibeImportsFromDatabaseResponse
       */
      Models::DescibeImportsFromDatabaseResponse descibeImportsFromDatabaseWithOptions(const Models::DescibeImportsFromDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据库迁移列表
       *
       * @param request DescibeImportsFromDatabaseRequest
       * @return DescibeImportsFromDatabaseResponse
       */
      Models::DescibeImportsFromDatabaseResponse descibeImportsFromDatabase(const Models::DescibeImportsFromDatabaseRequest &request);

      /**
       * @summary 查询当前实例域相关信息, 包括是否已经加入域、域名称、所使用账号等
       *
       * @param request DescribeADInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeADInfoResponse
       */
      Models::DescribeADInfoResponse describeADInfoWithOptions(const Models::DescribeADInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前实例域相关信息, 包括是否已经加入域、域名称、所使用账号等
       *
       * @param request DescribeADInfoRequest
       * @return DescribeADInfoResponse
       */
      Models::DescribeADInfoResponse describeADInfo(const Models::DescribeADInfoRequest &request);

      /**
       * @summary Query the encryption or data masking permission configuration of an account in a specified instance.
       *
       * @description ## Request Description
       * - Before invoking this API, ensure that you have activated the column encryption service in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it.
       *
       * @param request DescribeAccountMaskingPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountMaskingPrivilegeResponse
       */
      Models::DescribeAccountMaskingPrivilegeResponse describeAccountMaskingPrivilegeWithOptions(const Models::DescribeAccountMaskingPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the encryption or data masking permission configuration of an account in a specified instance.
       *
       * @description ## Request Description
       * - Before invoking this API, ensure that you have activated the column encryption service in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it.
       *
       * @param request DescribeAccountMaskingPrivilegeRequest
       * @return DescribeAccountMaskingPrivilegeResponse
       */
      Models::DescribeAccountMaskingPrivilegeResponse describeAccountMaskingPrivilege(const Models::DescribeAccountMaskingPrivilegeRequest &request);

      /**
       * @summary 查询实例的账号列表
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例的账号列表
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary 查询RDS历史事件功能是否开启
       *
       * @param request DescribeActionEventPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActionEventPolicyResponse
       */
      Models::DescribeActionEventPolicyResponse describeActionEventPolicyWithOptions(const Models::DescribeActionEventPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS历史事件功能是否开启
       *
       * @param request DescribeActionEventPolicyRequest
       * @return DescribeActionEventPolicyResponse
       */
      Models::DescribeActionEventPolicyResponse describeActionEventPolicy(const Models::DescribeActionEventPolicyRequest &request);

      /**
       * @summary Obtain the user\\"s O\\&M configuration information, which currently includes scheduled management event time window information.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConfWithOptions(const Models::DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the user\\"s O\\&M configuration information, which currently includes scheduled management event time window information.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConf(const Models::DescribeActiveOperationMaintainConfRequest &request);

      /**
       * @summary 查询主动运维任务列表
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询主动运维任务列表
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary 批量获取白名单模板
       *
       * @param request DescribeAllWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllWhitelistTemplateResponse
       */
      Models::DescribeAllWhitelistTemplateResponse describeAllWhitelistTemplateWithOptions(const Models::DescribeAllWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取白名单模板
       *
       * @param request DescribeAllWhitelistTemplateRequest
       * @return DescribeAllWhitelistTemplateResponse
       */
      Models::DescribeAllWhitelistTemplateResponse describeAllWhitelistTemplate(const Models::DescribeAllWhitelistTemplateRequest &request);

      /**
       * @summary Queries the number of analytic instances that are associated with an ApsaraDB RDS for MySQL instance.
       *
       * @description ### 适用引擎
       * RDS MySQL
       * ### 相关功能文档
       * <props="china">[创建和查看MySQL分析实例](https://help.aliyun.com/document_detail/155180.html)
       *
       * @param request DescribeAnalyticdbByPrimaryDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAnalyticdbByPrimaryDBInstanceResponse
       */
      Models::DescribeAnalyticdbByPrimaryDBInstanceResponse describeAnalyticdbByPrimaryDBInstanceWithOptions(const Models::DescribeAnalyticdbByPrimaryDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of analytic instances that are associated with an ApsaraDB RDS for MySQL instance.
       *
       * @description ### 适用引擎
       * RDS MySQL
       * ### 相关功能文档
       * <props="china">[创建和查看MySQL分析实例](https://help.aliyun.com/document_detail/155180.html)
       *
       * @param request DescribeAnalyticdbByPrimaryDBInstanceRequest
       * @return DescribeAnalyticdbByPrimaryDBInstanceResponse
       */
      Models::DescribeAnalyticdbByPrimaryDBInstanceResponse describeAnalyticdbByPrimaryDBInstance(const Models::DescribeAnalyticdbByPrimaryDBInstanceRequest &request);

      /**
       * @summary 查询实例可购买规格，包括规格代码和存储空间
       *
       * @param request DescribeAvailableClassesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableClassesResponse
       */
      Models::DescribeAvailableClassesResponse describeAvailableClassesWithOptions(const Models::DescribeAvailableClassesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例可购买规格，包括规格代码和存储空间
       *
       * @param request DescribeAvailableClassesRequest
       * @return DescribeAvailableClassesResponse
       */
      Models::DescribeAvailableClassesResponse describeAvailableClasses(const Models::DescribeAvailableClassesRequest &request);

      /**
       * @summary 查询可用的跨地域信息
       *
       * @param request DescribeAvailableCrossRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableCrossRegionResponse
       */
      Models::DescribeAvailableCrossRegionResponse describeAvailableCrossRegionWithOptions(const Models::DescribeAvailableCrossRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询可用的跨地域信息
       *
       * @param request DescribeAvailableCrossRegionRequest
       * @return DescribeAvailableCrossRegionResponse
       */
      Models::DescribeAvailableCrossRegionResponse describeAvailableCrossRegion(const Models::DescribeAvailableCrossRegionRequest &request);

      /**
       * @summary 查询可用的指标
       *
       * @param request DescribeAvailableMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableMetricsResponse
       */
      Models::DescribeAvailableMetricsResponse describeAvailableMetricsWithOptions(const Models::DescribeAvailableMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询可用的指标
       *
       * @param request DescribeAvailableMetricsRequest
       * @return DescribeAvailableMetricsResponse
       */
      Models::DescribeAvailableMetricsResponse describeAvailableMetrics(const Models::DescribeAvailableMetricsRequest &request);

      /**
       * @summary 查询某跨地域备份文件可恢复哪个时间段的数据
       *
       * @param request DescribeAvailableRecoveryTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableRecoveryTimeResponse
       */
      Models::DescribeAvailableRecoveryTimeResponse describeAvailableRecoveryTimeWithOptions(const Models::DescribeAvailableRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询某跨地域备份文件可恢复哪个时间段的数据
       *
       * @param request DescribeAvailableRecoveryTimeRequest
       * @return DescribeAvailableRecoveryTimeResponse
       */
      Models::DescribeAvailableRecoveryTimeResponse describeAvailableRecoveryTime(const Models::DescribeAvailableRecoveryTimeRequest &request);

      /**
       * @summary 查询可用区列表
       *
       * @param request DescribeAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableZonesResponse
       */
      Models::DescribeAvailableZonesResponse describeAvailableZonesWithOptions(const Models::DescribeAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询可用区列表
       *
       * @param request DescribeAvailableZonesRequest
       * @return DescribeAvailableZonesResponse
       */
      Models::DescribeAvailableZonesResponse describeAvailableZones(const Models::DescribeAvailableZonesRequest &request);

      /**
       * @summary 查询数据库备份
       *
       * @param request DescribeBackupDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupDatabaseResponse
       */
      Models::DescribeBackupDatabaseResponse describeBackupDatabaseWithOptions(const Models::DescribeBackupDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据库备份
       *
       * @param request DescribeBackupDatabaseRequest
       * @return DescribeBackupDatabaseResponse
       */
      Models::DescribeBackupDatabaseResponse describeBackupDatabase(const Models::DescribeBackupDatabaseRequest &request);

      /**
       * @summary 查询实例备份设置
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例备份设置
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary 查询备份任务列表
       *
       * @param request DescribeBackupTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasksWithOptions(const Models::DescribeBackupTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询备份任务列表
       *
       * @param request DescribeBackupTasksRequest
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasks(const Models::DescribeBackupTasksRequest &request);

      /**
       * @summary This API is used to view the backup set list of an RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to view the backup set list of an RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary 查询binlog文件
       *
       * @param request DescribeBinlogFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBinlogFilesResponse
       */
      Models::DescribeBinlogFilesResponse describeBinlogFilesWithOptions(const Models::DescribeBinlogFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询binlog文件
       *
       * @param request DescribeBinlogFilesRequest
       * @return DescribeBinlogFilesResponse
       */
      Models::DescribeBinlogFilesResponse describeBinlogFiles(const Models::DescribeBinlogFilesRequest &request);

      /**
       * @summary 查询字符集名称
       *
       * @param request DescribeCharacterSetNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCharacterSetNameResponse
       */
      Models::DescribeCharacterSetNameResponse describeCharacterSetNameWithOptions(const Models::DescribeCharacterSetNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询字符集名称
       *
       * @param request DescribeCharacterSetNameRequest
       * @return DescribeCharacterSetNameResponse
       */
      Models::DescribeCharacterSetNameResponse describeCharacterSetName(const Models::DescribeCharacterSetNameRequest &request);

      /**
       * @summary 查询规格详情
       *
       * @param request DescribeClassDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClassDetailsResponse
       */
      Models::DescribeClassDetailsResponse describeClassDetailsWithOptions(const Models::DescribeClassDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询规格详情
       *
       * @param request DescribeClassDetailsRequest
       * @return DescribeClassDetailsResponse
       */
      Models::DescribeClassDetailsResponse describeClassDetails(const Models::DescribeClassDetailsRequest &request);

      /**
       * @summary 查询迁移上云检查任务
       *
       * @param request DescribeCloudMigrationPrecheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudMigrationPrecheckResultResponse
       */
      Models::DescribeCloudMigrationPrecheckResultResponse describeCloudMigrationPrecheckResultWithOptions(const Models::DescribeCloudMigrationPrecheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询迁移上云检查任务
       *
       * @param request DescribeCloudMigrationPrecheckResultRequest
       * @return DescribeCloudMigrationPrecheckResultResponse
       */
      Models::DescribeCloudMigrationPrecheckResultResponse describeCloudMigrationPrecheckResult(const Models::DescribeCloudMigrationPrecheckResultRequest &request);

      /**
       * @summary 查询迁移上云任务
       *
       * @param request DescribeCloudMigrationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudMigrationResultResponse
       */
      Models::DescribeCloudMigrationResultResponse describeCloudMigrationResultWithOptions(const Models::DescribeCloudMigrationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询迁移上云任务
       *
       * @param request DescribeCloudMigrationResultRequest
       * @return DescribeCloudMigrationResultResponse
       */
      Models::DescribeCloudMigrationResultResponse describeCloudMigrationResult(const Models::DescribeCloudMigrationResultRequest &request);

      /**
       * @summary 查询排序条目时区
       *
       * @param request DescribeCollationTimeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCollationTimeZonesResponse
       */
      Models::DescribeCollationTimeZonesResponse describeCollationTimeZonesWithOptions(const Models::DescribeCollationTimeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询排序条目时区
       *
       * @param request DescribeCollationTimeZonesRequest
       * @return DescribeCollationTimeZonesResponse
       */
      Models::DescribeCollationTimeZonesResponse describeCollationTimeZones(const Models::DescribeCollationTimeZonesRequest &request);

      /**
       * @summary Queries the settings of assured serverless.
       *
       * @description ### 适用引擎
       * RDS PostgreSQL
       * ### 相关功能文档
       * [承诺型Serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request DescribeComputeBurstConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComputeBurstConfigResponse
       */
      Models::DescribeComputeBurstConfigResponse describeComputeBurstConfigWithOptions(const Models::DescribeComputeBurstConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of assured serverless.
       *
       * @description ### 适用引擎
       * RDS PostgreSQL
       * ### 相关功能文档
       * [承诺型Serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request DescribeComputeBurstConfigRequest
       * @return DescribeComputeBurstConfigResponse
       */
      Models::DescribeComputeBurstConfigResponse describeComputeBurstConfig(const Models::DescribeComputeBurstConfigRequest &request);

      /**
       * @param request DescribeCrossBackupMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossBackupMetaListResponse
       */
      Models::DescribeCrossBackupMetaListResponse describeCrossBackupMetaListWithOptions(const Models::DescribeCrossBackupMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeCrossBackupMetaListRequest
       * @return DescribeCrossBackupMetaListResponse
       */
      Models::DescribeCrossBackupMetaListResponse describeCrossBackupMetaList(const Models::DescribeCrossBackupMetaListRequest &request);

      /**
       * @summary 查询所选地域的哪些实例开启了跨地域备份，以及这些实例的跨地域备份设置
       *
       * @param request DescribeCrossRegionBackupDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossRegionBackupDBInstanceResponse
       */
      Models::DescribeCrossRegionBackupDBInstanceResponse describeCrossRegionBackupDBInstanceWithOptions(const Models::DescribeCrossRegionBackupDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所选地域的哪些实例开启了跨地域备份，以及这些实例的跨地域备份设置
       *
       * @param request DescribeCrossRegionBackupDBInstanceRequest
       * @return DescribeCrossRegionBackupDBInstanceResponse
       */
      Models::DescribeCrossRegionBackupDBInstanceResponse describeCrossRegionBackupDBInstance(const Models::DescribeCrossRegionBackupDBInstanceRequest &request);

      /**
       * @summary 查询某RDS实例跨地域数据备份文件列表
       *
       * @param request DescribeCrossRegionBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossRegionBackupsResponse
       */
      Models::DescribeCrossRegionBackupsResponse describeCrossRegionBackupsWithOptions(const Models::DescribeCrossRegionBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询某RDS实例跨地域数据备份文件列表
       *
       * @param request DescribeCrossRegionBackupsRequest
       * @return DescribeCrossRegionBackupsResponse
       */
      Models::DescribeCrossRegionBackupsResponse describeCrossRegionBackups(const Models::DescribeCrossRegionBackupsRequest &request);

      /**
       * @summary 查询跨地域日志备份文件列表
       *
       * @param request DescribeCrossRegionLogBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossRegionLogBackupFilesResponse
       */
      Models::DescribeCrossRegionLogBackupFilesResponse describeCrossRegionLogBackupFilesWithOptions(const Models::DescribeCrossRegionLogBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询跨地域日志备份文件列表
       *
       * @param request DescribeCrossRegionLogBackupFilesRequest
       * @return DescribeCrossRegionLogBackupFilesResponse
       */
      Models::DescribeCrossRegionLogBackupFilesResponse describeCrossRegionLogBackupFiles(const Models::DescribeCrossRegionLogBackupFilesRequest &request);

      /**
       * @summary Query the latest upgrade/downgrade order of an instance
       *
       * @param request DescribeCurrentModifyOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCurrentModifyOrderResponse
       */
      Models::DescribeCurrentModifyOrderResponse describeCurrentModifyOrderWithOptions(const Models::DescribeCurrentModifyOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the latest upgrade/downgrade order of an instance
       *
       * @param request DescribeCurrentModifyOrderRequest
       * @return DescribeCurrentModifyOrderResponse
       */
      Models::DescribeCurrentModifyOrderResponse describeCurrentModifyOrder(const Models::DescribeCurrentModifyOrderRequest &request);

      /**
       * @summary Query instance resource usage
       *
       * @param request DescribeCustinsResourceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustinsResourceInfoResponse
       */
      Models::DescribeCustinsResourceInfoResponse describeCustinsResourceInfoWithOptions(const Models::DescribeCustinsResourceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query instance resource usage
       *
       * @param request DescribeCustinsResourceInfoRequest
       * @return DescribeCustinsResourceInfoResponse
       */
      Models::DescribeCustinsResourceInfoResponse describeCustinsResourceInfo(const Models::DescribeCustinsResourceInfoRequest &request);

      /**
       * @summary This API is used to query the details of an RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query the details of an RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary 获取实例绑定的标签信息
       *
       * @param request DescribeDBInstanceByTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceByTagsResponse
       */
      Models::DescribeDBInstanceByTagsResponse describeDBInstanceByTagsWithOptions(const Models::DescribeDBInstanceByTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例绑定的标签信息
       *
       * @param request DescribeDBInstanceByTagsRequest
       * @return DescribeDBInstanceByTagsResponse
       */
      Models::DescribeDBInstanceByTagsResponse describeDBInstanceByTags(const Models::DescribeDBInstanceByTagsRequest &request);

      /**
       * @summary Query the column encryption algorithm configuration information of a specified instance.
       *
       * @description ## Request Description
       * - Before using this API, ensure that you have activated the column encryption service in the DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it again.
       *
       * @param request DescribeDBInstanceCLSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceCLSResponse
       */
      Models::DescribeDBInstanceCLSResponse describeDBInstanceCLSWithOptions(const Models::DescribeDBInstanceCLSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the column encryption algorithm configuration information of a specified instance.
       *
       * @description ## Request Description
       * - Before using this API, ensure that you have activated the column encryption service in the DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it again.
       *
       * @param request DescribeDBInstanceCLSRequest
       * @return DescribeDBInstanceCLSResponse
       */
      Models::DescribeDBInstanceCLSResponse describeDBInstanceCLS(const Models::DescribeDBInstanceCLSRequest &request);

      /**
       * @summary Obtain instance ingest endpoint diagnosis information
       *
       * @param request DescribeDBInstanceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceConnectivityResponse
       */
      Models::DescribeDBInstanceConnectivityResponse describeDBInstanceConnectivityWithOptions(const Models::DescribeDBInstanceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain instance ingest endpoint diagnosis information
       *
       * @param request DescribeDBInstanceConnectivityRequest
       * @return DescribeDBInstanceConnectivityResponse
       */
      Models::DescribeDBInstanceConnectivityResponse describeDBInstanceConnectivity(const Models::DescribeDBInstanceConnectivityRequest &request);

      /**
       * @param request DescribeDBInstanceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceDetailResponse
       */
      Models::DescribeDBInstanceDetailResponse describeDBInstanceDetailWithOptions(const Models::DescribeDBInstanceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDBInstanceDetailRequest
       * @return DescribeDBInstanceDetailResponse
       */
      Models::DescribeDBInstanceDetailResponse describeDBInstanceDetail(const Models::DescribeDBInstanceDetailRequest &request);

      /**
       * @summary 查询RDS实例是否开启了云盘加密，以及密钥详情
       *
       * @param request DescribeDBInstanceEncryptionKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceEncryptionKeyResponse
       */
      Models::DescribeDBInstanceEncryptionKeyResponse describeDBInstanceEncryptionKeyWithOptions(const Models::DescribeDBInstanceEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例是否开启了云盘加密，以及密钥详情
       *
       * @param request DescribeDBInstanceEncryptionKeyRequest
       * @return DescribeDBInstanceEncryptionKeyResponse
       */
      Models::DescribeDBInstanceEncryptionKeyResponse describeDBInstanceEncryptionKey(const Models::DescribeDBInstanceEncryptionKeyRequest &request);

      /**
       * @summary 查询实例的Endpoint
       *
       * @param request DescribeDBInstanceEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceEndpointsResponse
       */
      Models::DescribeDBInstanceEndpointsResponse describeDBInstanceEndpointsWithOptions(const Models::DescribeDBInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例的Endpoint
       *
       * @param request DescribeDBInstanceEndpointsRequest
       * @return DescribeDBInstanceEndpointsResponse
       */
      Models::DescribeDBInstanceEndpointsResponse describeDBInstanceEndpoints(const Models::DescribeDBInstanceEndpointsRequest &request);

      /**
       * @summary 查询RDS实例高可用模式和数据复制方式
       *
       * @param request DescribeDBInstanceHAConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceHAConfigResponse
       */
      Models::DescribeDBInstanceHAConfigResponse describeDBInstanceHAConfigWithOptions(const Models::DescribeDBInstanceHAConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例高可用模式和数据复制方式
       *
       * @param request DescribeDBInstanceHAConfigRequest
       * @return DescribeDBInstanceHAConfigResponse
       */
      Models::DescribeDBInstanceHAConfigResponse describeDBInstanceHAConfig(const Models::DescribeDBInstanceHAConfigRequest &request);

      /**
       * @summary 查询RDS实例IP白名单
       *
       * @param request DescribeDBInstanceIPArrayListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceIPArrayListResponse
       */
      Models::DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayListWithOptions(const Models::DescribeDBInstanceIPArrayListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例IP白名单
       *
       * @param request DescribeDBInstanceIPArrayListRequest
       * @return DescribeDBInstanceIPArrayListResponse
       */
      Models::DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayList(const Models::DescribeDBInstanceIPArrayListRequest &request);

      /**
       * @summary 查询RDS实例的底层ECS实例的hostname
       *
       * @param request DescribeDBInstanceIpHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceIpHostnameResponse
       */
      Models::DescribeDBInstanceIpHostnameResponse describeDBInstanceIpHostnameWithOptions(const Models::DescribeDBInstanceIpHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例的底层ECS实例的hostname
       *
       * @param request DescribeDBInstanceIpHostnameRequest
       * @return DescribeDBInstanceIpHostnameResponse
       */
      Models::DescribeDBInstanceIpHostnameResponse describeDBInstanceIpHostname(const Models::DescribeDBInstanceIpHostnameRequest &request);

      /**
       * @summary 查询RDS PostgreSQL实例已开启展示的增强指标
       *
       * @param request DescribeDBInstanceMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceMetricsResponse
       */
      Models::DescribeDBInstanceMetricsResponse describeDBInstanceMetricsWithOptions(const Models::DescribeDBInstanceMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS PostgreSQL实例已开启展示的增强指标
       *
       * @param request DescribeDBInstanceMetricsRequest
       * @return DescribeDBInstanceMetricsResponse
       */
      Models::DescribeDBInstanceMetricsResponse describeDBInstanceMetrics(const Models::DescribeDBInstanceMetricsRequest &request);

      /**
       * @summary 查询监控频率
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitorWithOptions(const Models::DescribeDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询监控频率
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitor(const Models::DescribeDBInstanceMonitorRequest &request);

      /**
       * @summary 查询实例的所有连接地址信息
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(const Models::DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例的所有连接地址信息
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(const Models::DescribeDBInstanceNetInfoRequest &request);

      /**
       * @summary 查询内部实例网络信息
       *
       * @param request DescribeDBInstanceNetInfoForChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoForChannelResponse
       */
      Models::DescribeDBInstanceNetInfoForChannelResponse describeDBInstanceNetInfoForChannelWithOptions(const Models::DescribeDBInstanceNetInfoForChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询内部实例网络信息
       *
       * @param request DescribeDBInstanceNetInfoForChannelRequest
       * @return DescribeDBInstanceNetInfoForChannelResponse
       */
      Models::DescribeDBInstanceNetInfoForChannelResponse describeDBInstanceNetInfoForChannel(const Models::DescribeDBInstanceNetInfoForChannelRequest &request);

      /**
       * @summary 查询实例性能数据
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformanceWithOptions(const Models::DescribeDBInstancePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例性能数据
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformance(const Models::DescribeDBInstancePerformanceRequest &request);

      /**
       * @deprecated OpenAPI DescribeDBInstancePromoteActivity is deprecated
       *
       * @summary 查询数据库实例提升状态操作
       *
       * @param request DescribeDBInstancePromoteActivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancePromoteActivityResponse
       */
      Models::DescribeDBInstancePromoteActivityResponse describeDBInstancePromoteActivityWithOptions(const Models::DescribeDBInstancePromoteActivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDBInstancePromoteActivity is deprecated
       *
       * @summary 查询数据库实例提升状态操作
       *
       * @param request DescribeDBInstancePromoteActivityRequest
       * @return DescribeDBInstancePromoteActivityResponse
       */
      Models::DescribeDBInstancePromoteActivityResponse describeDBInstancePromoteActivity(const Models::DescribeDBInstancePromoteActivityRequest &request);

      /**
       * @summary 查询数据库实例代理配置
       *
       * @param request DescribeDBInstanceProxyConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceProxyConfigurationResponse
       */
      Models::DescribeDBInstanceProxyConfigurationResponse describeDBInstanceProxyConfigurationWithOptions(const Models::DescribeDBInstanceProxyConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据库实例代理配置
       *
       * @param request DescribeDBInstanceProxyConfigurationRequest
       * @return DescribeDBInstanceProxyConfigurationResponse
       */
      Models::DescribeDBInstanceProxyConfigurationResponse describeDBInstanceProxyConfiguration(const Models::DescribeDBInstanceProxyConfigurationRequest &request);

      /**
       * @summary This API is used to query the status and configuration of a native replication instance.
       *
       * @description ### Applicable Engine
       * RDS MySQL
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the Function Documentation to ensure you fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
       *
       * @param request DescribeDBInstanceReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceReplicationResponse
       */
      Models::DescribeDBInstanceReplicationResponse describeDBInstanceReplicationWithOptions(const Models::DescribeDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query the status and configuration of a native replication instance.
       *
       * @description ### Applicable Engine
       * RDS MySQL
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the Function Documentation to ensure you fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
       *
       * @param request DescribeDBInstanceReplicationRequest
       * @return DescribeDBInstanceReplicationResponse
       */
      Models::DescribeDBInstanceReplicationResponse describeDBInstanceReplication(const Models::DescribeDBInstanceReplicationRequest &request);

      /**
       * @summary 查询RDS实例的SSL配置
       *
       * @param request DescribeDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(const Models::DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例的SSL配置
       *
       * @param request DescribeDBInstanceSSLRequest
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSL(const Models::DescribeDBInstanceSSLRequest &request);

      /**
       * @summary 描述实例主机安全组规则
       *
       * @param request DescribeDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSecurityGroupRuleResponse
       */
      Models::DescribeDBInstanceSecurityGroupRuleResponse describeDBInstanceSecurityGroupRuleWithOptions(const Models::DescribeDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述实例主机安全组规则
       *
       * @param request DescribeDBInstanceSecurityGroupRuleRequest
       * @return DescribeDBInstanceSecurityGroupRuleResponse
       */
      Models::DescribeDBInstanceSecurityGroupRuleResponse describeDBInstanceSecurityGroupRule(const Models::DescribeDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary 查询RDS实例的TDE配置信息
       *
       * @param request DescribeDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceTDEResponse
       */
      Models::DescribeDBInstanceTDEResponse describeDBInstanceTDEWithOptions(const Models::DescribeDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例的TDE配置信息
       *
       * @param request DescribeDBInstanceTDERequest
       * @return DescribeDBInstanceTDEResponse
       */
      Models::DescribeDBInstanceTDEResponse describeDBInstanceTDE(const Models::DescribeDBInstanceTDERequest &request);

      /**
       * @summary This API is used to query the list of RDS instances.
       *
       * @description ### Supported Engines  
       * - RDS MySQL  
       * - RDS PostgreSQL  
       * - RDS SQL Server  
       * - RDS MariaDB
       *
       * @param request DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query the list of RDS instances.
       *
       * @description ### Supported Engines  
       * - RDS MySQL  
       * - RDS PostgreSQL  
       * - RDS SQL Server  
       * - RDS MariaDB
       *
       * @param request DescribeDBInstancesRequest
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstances(const Models::DescribeDBInstancesRequest &request);

      /**
       * @deprecated OpenAPI DescribeDBInstancesAsCsv is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary 以CSV的方式查询实例列表
       *
       * @param request DescribeDBInstancesAsCsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesAsCsvResponse
       */
      Models::DescribeDBInstancesAsCsvResponse describeDBInstancesAsCsvWithOptions(const Models::DescribeDBInstancesAsCsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDBInstancesAsCsv is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary 以CSV的方式查询实例列表
       *
       * @param request DescribeDBInstancesAsCsvRequest
       * @return DescribeDBInstancesAsCsvResponse
       */
      Models::DescribeDBInstancesAsCsvResponse describeDBInstancesAsCsv(const Models::DescribeDBInstancesAsCsvRequest &request);

      /**
       * @summary 查询到期数据库实例
       *
       * @param request DescribeDBInstancesByExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesByExpireTimeResponse
       */
      Models::DescribeDBInstancesByExpireTimeResponse describeDBInstancesByExpireTimeWithOptions(const Models::DescribeDBInstancesByExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询到期数据库实例
       *
       * @param request DescribeDBInstancesByExpireTimeRequest
       * @return DescribeDBInstancesByExpireTimeResponse
       */
      Models::DescribeDBInstancesByExpireTimeResponse describeDBInstancesByExpireTime(const Models::DescribeDBInstancesByExpireTimeRequest &request);

      /**
       * @summary 查询数据库实例性能
       *
       * @param request DescribeDBInstancesByPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesByPerformanceResponse
       */
      Models::DescribeDBInstancesByPerformanceResponse describeDBInstancesByPerformanceWithOptions(const Models::DescribeDBInstancesByPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据库实例性能
       *
       * @param request DescribeDBInstancesByPerformanceRequest
       * @return DescribeDBInstancesByPerformanceResponse
       */
      Models::DescribeDBInstancesByPerformanceResponse describeDBInstancesByPerformance(const Models::DescribeDBInstancesByPerformanceRequest &request);

      /**
       * @deprecated OpenAPI DescribeDBInstancesForClone is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary 查询克隆的数据库实例
       *
       * @param request DescribeDBInstancesForCloneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesForCloneResponse
       */
      Models::DescribeDBInstancesForCloneResponse describeDBInstancesForCloneWithOptions(const Models::DescribeDBInstancesForCloneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDBInstancesForClone is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary 查询克隆的数据库实例
       *
       * @param request DescribeDBInstancesForCloneRequest
       * @return DescribeDBInstancesForCloneResponse
       */
      Models::DescribeDBInstancesForCloneResponse describeDBInstancesForClone(const Models::DescribeDBInstancesForCloneRequest &request);

      /**
       * @summary 查询数据库实例小版本信息
       *
       * @param request DescribeDBMiniEngineVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBMiniEngineVersionsResponse
       */
      Models::DescribeDBMiniEngineVersionsResponse describeDBMiniEngineVersionsWithOptions(const Models::DescribeDBMiniEngineVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据库实例小版本信息
       *
       * @param request DescribeDBMiniEngineVersionsRequest
       * @return DescribeDBMiniEngineVersionsResponse
       */
      Models::DescribeDBMiniEngineVersionsResponse describeDBMiniEngineVersions(const Models::DescribeDBMiniEngineVersionsRequest &request);

      /**
       * @summary This API is used to query the PolarProxy settings of an RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       *
       * @param request DescribeDBProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyResponse
       */
      Models::DescribeDBProxyResponse describeDBProxyWithOptions(const Models::DescribeDBProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query the PolarProxy settings of an RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       *
       * @param request DescribeDBProxyRequest
       * @return DescribeDBProxyResponse
       */
      Models::DescribeDBProxyResponse describeDBProxy(const Models::DescribeDBProxyRequest &request);

      /**
       * @summary 查询RDS实例数据库代理的连接地址信息
       *
       * @param request DescribeDBProxyEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyEndpointResponse
       */
      Models::DescribeDBProxyEndpointResponse describeDBProxyEndpointWithOptions(const Models::DescribeDBProxyEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例数据库代理的连接地址信息
       *
       * @param request DescribeDBProxyEndpointRequest
       * @return DescribeDBProxyEndpointResponse
       */
      Models::DescribeDBProxyEndpointResponse describeDBProxyEndpoint(const Models::DescribeDBProxyEndpointRequest &request);

      /**
       * @summary This API is used to query the performance data of the database proxy for an ApsaraDB RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * > Starting from October 17, 2023, ApsaraDB RDS MySQL Cluster Edition gradually provides one free dedicated database proxy per instance in each edge zone. For more information, see [Offer: One Free Dedicated Database Proxy for RDS MySQL Cluster Edition](https://help.aliyun.com/document_detail/2555466.html).  
       * ### Related Function Documentation  
       * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites and potential impacts of using this API before performing any operation.
       * - [View Monitoring Data for RDS MySQL](https://help.aliyun.com/document_detail/194241.html)
       * - [View Monitoring Data for RDS PostgreSQL](https://help.aliyun.com/document_detail/418275.html)
       *
       * @param request DescribeDBProxyPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyPerformanceResponse
       */
      Models::DescribeDBProxyPerformanceResponse describeDBProxyPerformanceWithOptions(const Models::DescribeDBProxyPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query the performance data of the database proxy for an ApsaraDB RDS instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * > Starting from October 17, 2023, ApsaraDB RDS MySQL Cluster Edition gradually provides one free dedicated database proxy per instance in each edge zone. For more information, see [Offer: One Free Dedicated Database Proxy for RDS MySQL Cluster Edition](https://help.aliyun.com/document_detail/2555466.html).  
       * ### Related Function Documentation  
       * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites and potential impacts of using this API before performing any operation.
       * - [View Monitoring Data for RDS MySQL](https://help.aliyun.com/document_detail/194241.html)
       * - [View Monitoring Data for RDS PostgreSQL](https://help.aliyun.com/document_detail/418275.html)
       *
       * @param request DescribeDBProxyPerformanceRequest
       * @return DescribeDBProxyPerformanceResponse
       */
      Models::DescribeDBProxyPerformanceResponse describeDBProxyPerformance(const Models::DescribeDBProxyPerformanceRequest &request);

      /**
       * @summary 查询SQLServer的DTC安全主机IP
       *
       * @param request DescribeDTCSecurityIpHostsForSQLServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDTCSecurityIpHostsForSQLServerResponse
       */
      Models::DescribeDTCSecurityIpHostsForSQLServerResponse describeDTCSecurityIpHostsForSQLServerWithOptions(const Models::DescribeDTCSecurityIpHostsForSQLServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询SQLServer的DTC安全主机IP
       *
       * @param request DescribeDTCSecurityIpHostsForSQLServerRequest
       * @return DescribeDTCSecurityIpHostsForSQLServerResponse
       */
      Models::DescribeDTCSecurityIpHostsForSQLServerResponse describeDTCSecurityIpHostsForSQLServer(const Models::DescribeDTCSecurityIpHostsForSQLServerRequest &request);

      /**
       * @summary 查询实例中数据库列表
       *
       * @param request DescribeDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabasesResponse
       */
      Models::DescribeDatabasesResponse describeDatabasesWithOptions(const Models::DescribeDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例中数据库列表
       *
       * @param request DescribeDatabasesRequest
       * @return DescribeDatabasesResponse
       */
      Models::DescribeDatabasesResponse describeDatabases(const Models::DescribeDatabasesRequest &request);

      /**
       * @summary 查询专用主机组
       *
       * @param request DescribeDedicatedHostGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostGroupsResponse
       */
      Models::DescribeDedicatedHostGroupsResponse describeDedicatedHostGroupsWithOptions(const Models::DescribeDedicatedHostGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询专用主机组
       *
       * @param request DescribeDedicatedHostGroupsRequest
       * @return DescribeDedicatedHostGroupsResponse
       */
      Models::DescribeDedicatedHostGroupsResponse describeDedicatedHostGroups(const Models::DescribeDedicatedHostGroupsRequest &request);

      /**
       * @summary 查询专属集群内的主机信息
       *
       * @param request DescribeDedicatedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHostsWithOptions(const Models::DescribeDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询专属集群内的主机信息
       *
       * @param request DescribeDedicatedHostsRequest
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHosts(const Models::DescribeDedicatedHostsRequest &request);

      /**
       * @summary 查询已完成的备份
       *
       * @param request DescribeDetachedBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDetachedBackupsResponse
       */
      Models::DescribeDetachedBackupsResponse describeDetachedBackupsWithOptions(const Models::DescribeDetachedBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询已完成的备份
       *
       * @param request DescribeDetachedBackupsRequest
       * @return DescribeDetachedBackupsResponse
       */
      Models::DescribeDetachedBackupsResponse describeDetachedBackups(const Models::DescribeDetachedBackupsRequest &request);

      /**
       * @summary This API queries the error logs of an instance within a specified period.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeErrorLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeErrorLogsResponse
       */
      Models::DescribeErrorLogsResponse describeErrorLogsWithOptions(const Models::DescribeErrorLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API queries the error logs of an instance within a specified period.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeErrorLogsRequest
       * @return DescribeErrorLogsResponse
       */
      Models::DescribeErrorLogsResponse describeErrorLogs(const Models::DescribeErrorLogsRequest &request);

      /**
       * @summary 查询实例事件
       *
       * @param request DescribeEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例事件
       *
       * @param request DescribeEventsRequest
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEvents(const Models::DescribeEventsRequest &request);

      /**
       * @summary DescribeGadInstances
       *
       * @param request DescribeGadInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstancesWithOptions(const Models::DescribeGadInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeGadInstances
       *
       * @param request DescribeGadInstancesRequest
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstances(const Models::DescribeGadInstancesRequest &request);

      /**
       * @summary 查询RDS实例的可用性检测方式
       *
       * @param request DescribeHADiagnoseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHADiagnoseConfigResponse
       */
      Models::DescribeHADiagnoseConfigResponse describeHADiagnoseConfigWithOptions(const Models::DescribeHADiagnoseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例的可用性检测方式
       *
       * @param request DescribeHADiagnoseConfigRequest
       * @return DescribeHADiagnoseConfigResponse
       */
      Models::DescribeHADiagnoseConfigResponse describeHADiagnoseConfig(const Models::DescribeHADiagnoseConfigRequest &request);

      /**
       * @summary 查询HA切换配置
       *
       * @param request DescribeHASwitchConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHASwitchConfigResponse
       */
      Models::DescribeHASwitchConfigResponse describeHASwitchConfigWithOptions(const Models::DescribeHASwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HA切换配置
       *
       * @param request DescribeHASwitchConfigRequest
       * @return DescribeHASwitchConfigResponse
       */
      Models::DescribeHASwitchConfigResponse describeHASwitchConfig(const Models::DescribeHASwitchConfigRequest &request);

      /**
       * @summary 事件中心事件列表
       *
       * @param request DescribeHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEventsWithOptions(const Models::DescribeHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 事件中心事件列表
       *
       * @param request DescribeHistoryEventsRequest
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEvents(const Models::DescribeHistoryEventsRequest &request);

      /**
       * @summary 事件中心事件统计
       *
       * @param request DescribeHistoryEventsStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStatWithOptions(const Models::DescribeHistoryEventsStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 事件中心事件统计
       *
       * @param request DescribeHistoryEventsStatRequest
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStat(const Models::DescribeHistoryEventsStatRequest &request);

      /**
       * @summary 任务中心任务列表
       *
       * @param request DescribeHistoryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasksWithOptions(const Models::DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务中心任务列表
       *
       * @param request DescribeHistoryTasksRequest
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasks(const Models::DescribeHistoryTasksRequest &request);

      /**
       * @summary 任务中心任务统计
       *
       * @param request DescribeHistoryTasksStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStatWithOptions(const Models::DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务中心任务统计
       *
       * @param request DescribeHistoryTasksStatRequest
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStat(const Models::DescribeHistoryTasksStatRequest &request);

      /**
       * @summary Query the elasticity policy parameters of a host group
       *
       * @param request DescribeHostGroupElasticStrategyParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHostGroupElasticStrategyParametersResponse
       */
      Models::DescribeHostGroupElasticStrategyParametersResponse describeHostGroupElasticStrategyParametersWithOptions(const Models::DescribeHostGroupElasticStrategyParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the elasticity policy parameters of a host group
       *
       * @param request DescribeHostGroupElasticStrategyParametersRequest
       * @return DescribeHostGroupElasticStrategyParametersResponse
       */
      Models::DescribeHostGroupElasticStrategyParametersResponse describeHostGroupElasticStrategyParameters(const Models::DescribeHostGroupElasticStrategyParametersRequest &request);

      /**
       * @summary 查询实例的WebShell信息
       *
       * @param request DescribeHostWebShellRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHostWebShellResponse
       */
      Models::DescribeHostWebShellResponse describeHostWebShellWithOptions(const Models::DescribeHostWebShellRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例的WebShell信息
       *
       * @param request DescribeHostWebShellRequest
       * @return DescribeHostWebShellResponse
       */
      Models::DescribeHostWebShellResponse describeHostWebShell(const Models::DescribeHostWebShellRequest &request);

      /**
       * @summary RDS native replication instance, query data import job details
       *
       * @description Query the details of an import job
       *
       * @param request DescribeImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImportTaskResponse
       */
      Models::DescribeImportTaskResponse describeImportTaskWithOptions(const Models::DescribeImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RDS native replication instance, query data import job details
       *
       * @description Query the details of an import job
       *
       * @param request DescribeImportTaskRequest
       * @return DescribeImportTaskResponse
       */
      Models::DescribeImportTaskResponse describeImportTask(const Models::DescribeImportTaskRequest &request);

      /**
       * @summary Queries the details of a precheck for an import job and returns specific precheck items and their results.
       *
       * @description Queries the details of a precheck for an import job.
       *
       * @param request DescribeImportTaskValidationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImportTaskValidationResponse
       */
      Models::DescribeImportTaskValidationResponse describeImportTaskValidationWithOptions(const Models::DescribeImportTaskValidationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a precheck for an import job and returns specific precheck items and their results.
       *
       * @description Queries the details of a precheck for an import job.
       *
       * @param request DescribeImportTaskValidationRequest
       * @return DescribeImportTaskValidationResponse
       */
      Models::DescribeImportTaskValidationResponse describeImportTaskValidation(const Models::DescribeImportTaskValidationRequest &request);

      /**
       * @summary 查询实例自动续费属性
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttributeWithOptions(const Models::DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例自动续费属性
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttribute(const Models::DescribeInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary 查询实例跨备份策略
       *
       * @param request DescribeInstanceCrossBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceCrossBackupPolicyResponse
       */
      Models::DescribeInstanceCrossBackupPolicyResponse describeInstanceCrossBackupPolicyWithOptions(const Models::DescribeInstanceCrossBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例跨备份策略
       *
       * @param request DescribeInstanceCrossBackupPolicyRequest
       * @return DescribeInstanceCrossBackupPolicyResponse
       */
      Models::DescribeInstanceCrossBackupPolicyResponse describeInstanceCrossBackupPolicy(const Models::DescribeInstanceCrossBackupPolicyRequest &request);

      /**
       * @summary 查询RDS实例的保留关键字，即创建数据库或账号时禁用的关键字
       *
       * @param request DescribeInstanceKeywordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceKeywordsResponse
       */
      Models::DescribeInstanceKeywordsResponse describeInstanceKeywordsWithOptions(const Models::DescribeInstanceKeywordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例的保留关键字，即创建数据库或账号时禁用的关键字
       *
       * @param request DescribeInstanceKeywordsRequest
       * @return DescribeInstanceKeywordsResponse
       */
      Models::DescribeInstanceKeywordsResponse describeInstanceKeywords(const Models::DescribeInstanceKeywordsRequest &request);

      /**
       * @summary 查询实例关联白名单模板
       *
       * @param request DescribeInstanceLinkedWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceLinkedWhitelistTemplateResponse
       */
      Models::DescribeInstanceLinkedWhitelistTemplateResponse describeInstanceLinkedWhitelistTemplateWithOptions(const Models::DescribeInstanceLinkedWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例关联白名单模板
       *
       * @param request DescribeInstanceLinkedWhitelistTemplateRequest
       * @return DescribeInstanceLinkedWhitelistTemplateResponse
       */
      Models::DescribeInstanceLinkedWhitelistTemplateResponse describeInstanceLinkedWhitelistTemplate(const Models::DescribeInstanceLinkedWhitelistTemplateRequest &request);

      /**
       * @summary 检测kms资源是否关联rds实例
       *
       * @param request DescribeKmsAssociateResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKmsAssociateResourcesResponse
       */
      Models::DescribeKmsAssociateResourcesResponse describeKmsAssociateResourcesWithOptions(const Models::DescribeKmsAssociateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检测kms资源是否关联rds实例
       *
       * @param request DescribeKmsAssociateResourcesRequest
       * @return DescribeKmsAssociateResourcesResponse
       */
      Models::DescribeKmsAssociateResourcesResponse describeKmsAssociateResources(const Models::DescribeKmsAssociateResourcesRequest &request);

      /**
       * @summary 查询本地可用恢复时间
       *
       * @param request DescribeLocalAvailableRecoveryTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLocalAvailableRecoveryTimeResponse
       */
      Models::DescribeLocalAvailableRecoveryTimeResponse describeLocalAvailableRecoveryTimeWithOptions(const Models::DescribeLocalAvailableRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询本地可用恢复时间
       *
       * @param request DescribeLocalAvailableRecoveryTimeRequest
       * @return DescribeLocalAvailableRecoveryTimeResponse
       */
      Models::DescribeLocalAvailableRecoveryTimeResponse describeLocalAvailableRecoveryTime(const Models::DescribeLocalAvailableRecoveryTimeRequest &request);

      /**
       * @summary 查询日志备份文件
       *
       * @param request DescribeLogBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogBackupFilesResponse
       */
      Models::DescribeLogBackupFilesResponse describeLogBackupFilesWithOptions(const Models::DescribeLogBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询日志备份文件
       *
       * @param request DescribeLogBackupFilesRequest
       * @return DescribeLogBackupFilesResponse
       */
      Models::DescribeLogBackupFilesResponse describeLogBackupFiles(const Models::DescribeLogBackupFilesRequest &request);

      /**
       * @summary Obtain information about instances pending upgrade in the RDS Marketing project
       *
       * @param request DescribeMarketingActivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMarketingActivityResponse
       */
      Models::DescribeMarketingActivityResponse describeMarketingActivityWithOptions(const Models::DescribeMarketingActivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain information about instances pending upgrade in the RDS Marketing project
       *
       * @param request DescribeMarketingActivityRequest
       * @return DescribeMarketingActivityResponse
       */
      Models::DescribeMarketingActivityResponse describeMarketingActivity(const Models::DescribeMarketingActivityRequest &request);

      /**
       * @summary Query the list of encryption or desensitization rules for a specified instance.
       *
       * @description ## Request Description  
       * - Before using this API, ensure that you have enabled the column encryption service in the DAS Security Center.  
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
       *
       * @param request DescribeMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMaskingRulesResponse
       */
      Models::DescribeMaskingRulesResponse describeMaskingRulesWithOptions(const Models::DescribeMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of encryption or desensitization rules for a specified instance.
       *
       * @description ## Request Description  
       * - Before using this API, ensure that you have enabled the column encryption service in the DAS Security Center.  
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
       *
       * @param request DescribeMaskingRulesRequest
       * @return DescribeMaskingRulesResponse
       */
      Models::DescribeMaskingRulesResponse describeMaskingRules(const Models::DescribeMaskingRulesRequest &request);

      /**
       * @summary 查询目标备份集中可恢复的库表信息
       *
       * @param request DescribeMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaListResponse
       */
      Models::DescribeMetaListResponse describeMetaListWithOptions(const Models::DescribeMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询目标备份集中可恢复的库表信息
       *
       * @param request DescribeMetaListRequest
       * @return DescribeMetaListResponse
       */
      Models::DescribeMetaListResponse describeMetaList(const Models::DescribeMetaListRequest &request);

      /**
       * @summary 通过迁移任务id查询迁移任务
       *
       * @param request DescribeMigrateTaskByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrateTaskByIdResponse
       */
      Models::DescribeMigrateTaskByIdResponse describeMigrateTaskByIdWithOptions(const Models::DescribeMigrateTaskByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过迁移任务id查询迁移任务
       *
       * @param request DescribeMigrateTaskByIdRequest
       * @return DescribeMigrateTaskByIdResponse
       */
      Models::DescribeMigrateTaskByIdResponse describeMigrateTaskById(const Models::DescribeMigrateTaskByIdRequest &request);

      /**
       * @summary 查询迁移任务
       *
       * @param request DescribeMigrateTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrateTasksResponse
       */
      Models::DescribeMigrateTasksResponse describeMigrateTasksWithOptions(const Models::DescribeMigrateTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询迁移任务
       *
       * @param request DescribeMigrateTasksRequest
       * @return DescribeMigrateTasksResponse
       */
      Models::DescribeMigrateTasksResponse describeMigrateTasks(const Models::DescribeMigrateTasksRequest &request);

      /**
       * @summary 查询PostgreSQL实例Hba配置变更日志
       *
       * @param request DescribeModifyPGHbaConfigLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModifyPGHbaConfigLogResponse
       */
      Models::DescribeModifyPGHbaConfigLogResponse describeModifyPGHbaConfigLogWithOptions(const Models::DescribeModifyPGHbaConfigLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询PostgreSQL实例Hba配置变更日志
       *
       * @param request DescribeModifyPGHbaConfigLogRequest
       * @return DescribeModifyPGHbaConfigLogResponse
       */
      Models::DescribeModifyPGHbaConfigLogResponse describeModifyPGHbaConfigLog(const Models::DescribeModifyPGHbaConfigLogRequest &request);

      /**
       * @summary 查询变更参数模板日志
       *
       * @param request DescribeModifyParameterLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModifyParameterLogResponse
       */
      Models::DescribeModifyParameterLogResponse describeModifyParameterLogWithOptions(const Models::DescribeModifyParameterLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询变更参数模板日志
       *
       * @param request DescribeModifyParameterLogRequest
       * @return DescribeModifyParameterLogResponse
       */
      Models::DescribeModifyParameterLogResponse describeModifyParameterLog(const Models::DescribeModifyParameterLogRequest &request);

      /**
       * @summary 查询OSS下载
       *
       * @param request DescribeOssDownloadsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssDownloadsResponse
       */
      Models::DescribeOssDownloadsResponse describeOssDownloadsWithOptions(const Models::DescribeOssDownloadsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询OSS下载
       *
       * @param request DescribeOssDownloadsRequest
       * @return DescribeOssDownloadsResponse
       */
      Models::DescribeOssDownloadsResponse describeOssDownloads(const Models::DescribeOssDownloadsRequest &request);

      /**
       * @summary 查询PostgreSQL实例HBA配置
       *
       * @param request DescribePGHbaConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePGHbaConfigResponse
       */
      Models::DescribePGHbaConfigResponse describePGHbaConfigWithOptions(const Models::DescribePGHbaConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询PostgreSQL实例HBA配置
       *
       * @param request DescribePGHbaConfigRequest
       * @return DescribePGHbaConfigResponse
       */
      Models::DescribePGHbaConfigResponse describePGHbaConfig(const Models::DescribePGHbaConfigRequest &request);

      /**
       * @summary 查询目标参数模板详情
       *
       * @param request DescribeParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroupWithOptions(const Models::DescribeParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询目标参数模板详情
       *
       * @param request DescribeParameterGroupRequest
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroup(const Models::DescribeParameterGroupRequest &request);

      /**
       * @summary 查看目标地域的参数模板列表
       *
       * @param request DescribeParameterGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroupsWithOptions(const Models::DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看目标地域的参数模板列表
       *
       * @param request DescribeParameterGroupsRequest
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroups(const Models::DescribeParameterGroupsRequest &request);

      /**
       * @summary 查询参数模板列表
       *
       * @param request DescribeParameterTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(const Models::DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询参数模板列表
       *
       * @param request DescribeParameterTemplatesRequest
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplates(const Models::DescribeParameterTemplatesRequest &request);

      /**
       * @summary Query the details of a scheduled task for modifying instance parameters.
       *
       * @description ### Applicable Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the function documentation to ensure you fully understand the prerequisites for using the API and the impact it may cause after use, and then perform the operation.
       * - [Set Instance Parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
       * - [Set Instance Parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request DescribeParameterTimedScheduleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTimedScheduleTaskResponse
       */
      Models::DescribeParameterTimedScheduleTaskResponse describeParameterTimedScheduleTaskWithOptions(const Models::DescribeParameterTimedScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of a scheduled task for modifying instance parameters.
       *
       * @description ### Applicable Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the function documentation to ensure you fully understand the prerequisites for using the API and the impact it may cause after use, and then perform the operation.
       * - [Set Instance Parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
       * - [Set Instance Parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request DescribeParameterTimedScheduleTaskRequest
       * @return DescribeParameterTimedScheduleTaskResponse
       */
      Models::DescribeParameterTimedScheduleTaskResponse describeParameterTimedScheduleTask(const Models::DescribeParameterTimedScheduleTaskRequest &request);

      /**
       * @summary 查询RDS实例参数
       *
       * @param request DescribeParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParametersWithOptions(const Models::DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例参数
       *
       * @param request DescribeParametersRequest
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParameters(const Models::DescribeParametersRequest &request);

      /**
       * @summary 获取插件信息
       *
       * @param request DescribePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostgresExtensionsResponse
       */
      Models::DescribePostgresExtensionsResponse describePostgresExtensionsWithOptions(const Models::DescribePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取插件信息
       *
       * @param request DescribePostgresExtensionsRequest
       * @return DescribePostgresExtensionsResponse
       */
      Models::DescribePostgresExtensionsResponse describePostgresExtensions(const Models::DescribePostgresExtensionsRequest &request);

      /**
       * @summary 查询价格
       *
       * @param tmpReq DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询价格
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary Query RDS quick sale configuration
       *
       * @param request DescribeQuickSaleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQuickSaleConfigResponse
       */
      Models::DescribeQuickSaleConfigResponse describeQuickSaleConfigWithOptions(const Models::DescribeQuickSaleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query RDS quick sale configuration
       *
       * @param request DescribeQuickSaleConfigRequest
       * @return DescribeQuickSaleConfigResponse
       */
      Models::DescribeQuickSaleConfigResponse describeQuickSaleConfig(const Models::DescribeQuickSaleConfigRequest &request);

      /**
       * @summary 查询可用区的资源库存
       *
       * @param request DescribeRCAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCAvailableResourceResponse
       */
      Models::DescribeRCAvailableResourceResponse describeRCAvailableResourceWithOptions(const Models::DescribeRCAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询可用区的资源库存
       *
       * @param request DescribeRCAvailableResourceRequest
       * @return DescribeRCAvailableResourceResponse
       */
      Models::DescribeRCAvailableResourceResponse describeRCAvailableResource(const Models::DescribeRCAvailableResourceRequest &request);

      /**
       * @summary 查询云助手安装状态
       *
       * @param tmpReq DescribeRCCloudAssistantStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCCloudAssistantStatusResponse
       */
      Models::DescribeRCCloudAssistantStatusResponse describeRCCloudAssistantStatusWithOptions(const Models::DescribeRCCloudAssistantStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云助手安装状态
       *
       * @param request DescribeRCCloudAssistantStatusRequest
       * @return DescribeRCCloudAssistantStatusResponse
       */
      Models::DescribeRCCloudAssistantStatusResponse describeRCCloudAssistantStatus(const Models::DescribeRCCloudAssistantStatusRequest &request);

      /**
       * @summary Queries the kubeconfig file of a Container Service for Kubernetes (ACK) cluster in which an RDS Custom instance resides.
       *
       * @param request DescribeRCClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCClusterConfigResponse
       */
      Models::DescribeRCClusterConfigResponse describeRCClusterConfigWithOptions(const Models::DescribeRCClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the kubeconfig file of a Container Service for Kubernetes (ACK) cluster in which an RDS Custom instance resides.
       *
       * @param request DescribeRCClusterConfigRequest
       * @return DescribeRCClusterConfigResponse
       */
      Models::DescribeRCClusterConfigResponse describeRCClusterConfig(const Models::DescribeRCClusterConfigRequest &request);

      /**
       * @summary Queries the RDS custom nodes in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeRCClusterNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCClusterNodesResponse
       */
      Models::DescribeRCClusterNodesResponse describeRCClusterNodesWithOptions(const Models::DescribeRCClusterNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the RDS custom nodes in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeRCClusterNodesRequest
       * @return DescribeRCClusterNodesResponse
       */
      Models::DescribeRCClusterNodesResponse describeRCClusterNodes(const Models::DescribeRCClusterNodesRequest &request);

      /**
       * @summary 查询RDS Custom集群列表
       *
       * @param request DescribeRCClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCClustersResponse
       */
      Models::DescribeRCClustersResponse describeRCClustersWithOptions(const Models::DescribeRCClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS Custom集群列表
       *
       * @param request DescribeRCClustersRequest
       * @return DescribeRCClustersResponse
       */
      Models::DescribeRCClustersResponse describeRCClusters(const Models::DescribeRCClustersRequest &request);

      /**
       * @summary 描述RDS CUSTOM部署集
       *
       * @param request DescribeRCDeploymentSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCDeploymentSetsResponse
       */
      Models::DescribeRCDeploymentSetsResponse describeRCDeploymentSetsWithOptions(const Models::DescribeRCDeploymentSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述RDS CUSTOM部署集
       *
       * @param request DescribeRCDeploymentSetsRequest
       * @return DescribeRCDeploymentSetsResponse
       */
      Models::DescribeRCDeploymentSetsResponse describeRCDeploymentSets(const Models::DescribeRCDeploymentSetsRequest &request);

      /**
       * @summary Invoke the DescribeRCDisks API to view disk information of RDS Custom instances.
       *
       * @param request DescribeRCDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCDisksResponse
       */
      Models::DescribeRCDisksResponse describeRCDisksWithOptions(const Models::DescribeRCDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the DescribeRCDisks API to view disk information of RDS Custom instances.
       *
       * @param request DescribeRCDisksRequest
       * @return DescribeRCDisksResponse
       */
      Models::DescribeRCDisksResponse describeRCDisks(const Models::DescribeRCDisksRequest &request);

      /**
       * @summary 查询RDS用户专属主机实例
       *
       * @param request DescribeRCElasticScalingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCElasticScalingResponse
       */
      Models::DescribeRCElasticScalingResponse describeRCElasticScalingWithOptions(const Models::DescribeRCElasticScalingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS用户专属主机实例
       *
       * @param request DescribeRCElasticScalingRequest
       * @return DescribeRCElasticScalingResponse
       */
      Models::DescribeRCElasticScalingResponse describeRCElasticScaling(const Models::DescribeRCElasticScalingRequest &request);

      /**
       * @summary Invoke the DescribeRCImageList API and specify parameters such as RegionId to query the list of custom images that can be used to create RDS Custom instances.
       *
       * @param request DescribeRCImageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCImageListResponse
       */
      Models::DescribeRCImageListResponse describeRCImageListWithOptions(const Models::DescribeRCImageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the DescribeRCImageList API and specify parameters such as RegionId to query the list of custom images that can be used to create RDS Custom instances.
       *
       * @param request DescribeRCImageListRequest
       * @return DescribeRCImageListResponse
       */
      Models::DescribeRCImageListResponse describeRCImageList(const Models::DescribeRCImageListRequest &request);

      /**
       * @summary Invoke the DescribeRCInstanceAttribute API to query the details of a single RDS Custom instance.
       *
       * @param request DescribeRCInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceAttributeResponse
       */
      Models::DescribeRCInstanceAttributeResponse describeRCInstanceAttributeWithOptions(const Models::DescribeRCInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the DescribeRCInstanceAttribute API to query the details of a single RDS Custom instance.
       *
       * @param request DescribeRCInstanceAttributeRequest
       * @return DescribeRCInstanceAttributeResponse
       */
      Models::DescribeRCInstanceAttributeResponse describeRCInstanceAttribute(const Models::DescribeRCInstanceAttributeRequest &request);

      /**
       * @summary 查询RDS Custom实例被DDos攻击的数量
       *
       * @param request DescribeRCInstanceDdosCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceDdosCountResponse
       */
      Models::DescribeRCInstanceDdosCountResponse describeRCInstanceDdosCountWithOptions(const Models::DescribeRCInstanceDdosCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS Custom实例被DDos攻击的数量
       *
       * @param request DescribeRCInstanceDdosCountRequest
       * @return DescribeRCInstanceDdosCountResponse
       */
      Models::DescribeRCInstanceDdosCountResponse describeRCInstanceDdosCount(const Models::DescribeRCInstanceDdosCountRequest &request);

      /**
       * @summary 查询指定实例系统事件信息
       *
       * @param request DescribeRCInstanceHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceHistoryEventsResponse
       */
      Models::DescribeRCInstanceHistoryEventsResponse describeRCInstanceHistoryEventsWithOptions(const Models::DescribeRCInstanceHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定实例系统事件信息
       *
       * @param request DescribeRCInstanceHistoryEventsRequest
       * @return DescribeRCInstanceHistoryEventsResponse
       */
      Models::DescribeRCInstanceHistoryEventsResponse describeRCInstanceHistoryEvents(const Models::DescribeRCInstanceHistoryEventsRequest &request);

      /**
       * @summary 查询RDS Custom实例的公网IP
       *
       * @param request DescribeRCInstanceIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceIpAddressResponse
       */
      Models::DescribeRCInstanceIpAddressResponse describeRCInstanceIpAddressWithOptions(const Models::DescribeRCInstanceIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS Custom实例的公网IP
       *
       * @param request DescribeRCInstanceIpAddressRequest
       * @return DescribeRCInstanceIpAddressResponse
       */
      Models::DescribeRCInstanceIpAddressResponse describeRCInstanceIpAddress(const Models::DescribeRCInstanceIpAddressRequest &request);

      /**
       * @summary 查询rds_custom实例规格族列表
       *
       * @param request DescribeRCInstanceTypeFamiliesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceTypeFamiliesResponse
       */
      Models::DescribeRCInstanceTypeFamiliesResponse describeRCInstanceTypeFamiliesWithOptions(const Models::DescribeRCInstanceTypeFamiliesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询rds_custom实例规格族列表
       *
       * @param request DescribeRCInstanceTypeFamiliesRequest
       * @return DescribeRCInstanceTypeFamiliesResponse
       */
      Models::DescribeRCInstanceTypeFamiliesResponse describeRCInstanceTypeFamilies(const Models::DescribeRCInstanceTypeFamiliesRequest &request);

      /**
       * @summary 查询RDS Custom规格信息
       *
       * @param tmpReq DescribeRCInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceTypesResponse
       */
      Models::DescribeRCInstanceTypesResponse describeRCInstanceTypesWithOptions(const Models::DescribeRCInstanceTypesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS Custom规格信息
       *
       * @param request DescribeRCInstanceTypesRequest
       * @return DescribeRCInstanceTypesResponse
       */
      Models::DescribeRCInstanceTypesResponse describeRCInstanceTypes(const Models::DescribeRCInstanceTypesRequest &request);

      /**
       * @summary 获取主机vnc地址
       *
       * @param request DescribeRCInstanceVncUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceVncUrlResponse
       */
      Models::DescribeRCInstanceVncUrlResponse describeRCInstanceVncUrlWithOptions(const Models::DescribeRCInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取主机vnc地址
       *
       * @param request DescribeRCInstanceVncUrlRequest
       * @return DescribeRCInstanceVncUrlResponse
       */
      Models::DescribeRCInstanceVncUrlResponse describeRCInstanceVncUrl(const Models::DescribeRCInstanceVncUrlRequest &request);

      /**
       * @summary You can invoke the DescribeRCInstances API to query the list of specified RDS Custom instances. If no instance ID (InstanceId) is specified, the API returns the list of all RDS Custom instances in the destination region.
       *
       * @param request DescribeRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstancesResponse
       */
      Models::DescribeRCInstancesResponse describeRCInstancesWithOptions(const Models::DescribeRCInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke the DescribeRCInstances API to query the list of specified RDS Custom instances. If no instance ID (InstanceId) is specified, the API returns the list of all RDS Custom instances in the destination region.
       *
       * @param request DescribeRCInstancesRequest
       * @return DescribeRCInstancesResponse
       */
      Models::DescribeRCInstancesResponse describeRCInstances(const Models::DescribeRCInstancesRequest &request);

      /**
       * @summary 查询云助手命令执行结果
       *
       * @param tmpReq DescribeRCInvocationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInvocationResultsResponse
       */
      Models::DescribeRCInvocationResultsResponse describeRCInvocationResultsWithOptions(const Models::DescribeRCInvocationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云助手命令执行结果
       *
       * @param request DescribeRCInvocationResultsRequest
       * @return DescribeRCInvocationResultsResponse
       */
      Models::DescribeRCInvocationResultsResponse describeRCInvocationResults(const Models::DescribeRCInvocationResultsRequest &request);

      /**
       * @summary This API is used to query the monitoring data of a specified metric for a target RDS Custom instance.
       *
       * @param request DescribeRCMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCMetricListResponse
       */
      Models::DescribeRCMetricListResponse describeRCMetricListWithOptions(const Models::DescribeRCMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query the monitoring data of a specified metric for a target RDS Custom instance.
       *
       * @param request DescribeRCMetricListRequest
       * @return DescribeRCMetricListResponse
       */
      Models::DescribeRCMetricListResponse describeRCMetricList(const Models::DescribeRCMetricListRequest &request);

      /**
       * @summary DescribeRCNetworkInterfaces
       *
       * @param request DescribeRCNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCNetworkInterfacesResponse
       */
      Models::DescribeRCNetworkInterfacesResponse describeRCNetworkInterfacesWithOptions(const Models::DescribeRCNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeRCNetworkInterfaces
       *
       * @param request DescribeRCNetworkInterfacesRequest
       * @return DescribeRCNetworkInterfacesResponse
       */
      Models::DescribeRCNetworkInterfacesResponse describeRCNetworkInterfaces(const Models::DescribeRCNetworkInterfacesRequest &request);

      /**
       * @summary 描述RC模版
       *
       * @param request DescribeRCNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCNodePoolResponse
       */
      Models::DescribeRCNodePoolResponse describeRCNodePoolWithOptions(const Models::DescribeRCNodePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述RC模版
       *
       * @param request DescribeRCNodePoolRequest
       * @return DescribeRCNodePoolResponse
       */
      Models::DescribeRCNodePoolResponse describeRCNodePool(const Models::DescribeRCNodePoolRequest &request);

      /**
       * @summary 变更实例规格或系统盘类型之前，查询某一可用区下实例规格或系统盘的库存情况
       *
       * @param tmpReq DescribeRCResourcesModificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCResourcesModificationResponse
       */
      Models::DescribeRCResourcesModificationResponse describeRCResourcesModificationWithOptions(const Models::DescribeRCResourcesModificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更实例规格或系统盘类型之前，查询某一可用区下实例规格或系统盘的库存情况
       *
       * @param request DescribeRCResourcesModificationRequest
       * @return DescribeRCResourcesModificationResponse
       */
      Models::DescribeRCResourcesModificationResponse describeRCResourcesModification(const Models::DescribeRCResourcesModificationRequest &request);

      /**
       * @summary Queries the security groups of RDS Custom instances.
       *
       * @param request DescribeRCSecurityGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCSecurityGroupListResponse
       */
      Models::DescribeRCSecurityGroupListResponse describeRCSecurityGroupListWithOptions(const Models::DescribeRCSecurityGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security groups of RDS Custom instances.
       *
       * @param request DescribeRCSecurityGroupListRequest
       * @return DescribeRCSecurityGroupListResponse
       */
      Models::DescribeRCSecurityGroupListResponse describeRCSecurityGroupList(const Models::DescribeRCSecurityGroupListRequest &request);

      /**
       * @summary 描述RC安全组规则
       *
       * @param request DescribeRCSecurityGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCSecurityGroupPermissionResponse
       */
      Models::DescribeRCSecurityGroupPermissionResponse describeRCSecurityGroupPermissionWithOptions(const Models::DescribeRCSecurityGroupPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述RC安全组规则
       *
       * @param request DescribeRCSecurityGroupPermissionRequest
       * @return DescribeRCSecurityGroupPermissionResponse
       */
      Models::DescribeRCSecurityGroupPermissionResponse describeRCSecurityGroupPermission(const Models::DescribeRCSecurityGroupPermissionRequest &request);

      /**
       * @summary This API is used to query snapshot list information, such as snapshot status, the remaining time for a snapshot being created to complete, and the number of days automatic snapshots are retained.
       *
       * @param request DescribeRCSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCSnapshotsResponse
       */
      Models::DescribeRCSnapshotsResponse describeRCSnapshotsWithOptions(const Models::DescribeRCSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query snapshot list information, such as snapshot status, the remaining time for a snapshot being created to complete, and the number of days automatic snapshots are retained.
       *
       * @param request DescribeRCSnapshotsRequest
       * @return DescribeRCSnapshotsResponse
       */
      Models::DescribeRCSnapshotsResponse describeRCSnapshots(const Models::DescribeRCSnapshotsRequest &request);

      /**
       * @summary 描述vCluster
       *
       * @param request DescribeRCVClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCVClusterResponse
       */
      Models::DescribeRCVClusterResponse describeRCVClusterWithOptions(const Models::DescribeRCVClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述vCluster
       *
       * @param request DescribeRCVClusterRequest
       * @return DescribeRCVClusterResponse
       */
      Models::DescribeRCVClusterResponse describeRCVCluster(const Models::DescribeRCVClusterRequest &request);

      /**
       * @deprecated OpenAPI DescribeRdsResourceSettings is deprecated
       *
       * @summary Obtains the notification settings for instance resources. This operation can still be called but is no longer maintained.
       *
       * @description 该接口已停止维护：接口仍可以正常调用，但阿里云不再维护该接口。
       *
       * @param request DescribeRdsResourceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsResourceSettingsResponse
       */
      Models::DescribeRdsResourceSettingsResponse describeRdsResourceSettingsWithOptions(const Models::DescribeRdsResourceSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRdsResourceSettings is deprecated
       *
       * @summary Obtains the notification settings for instance resources. This operation can still be called but is no longer maintained.
       *
       * @description 该接口已停止维护：接口仍可以正常调用，但阿里云不再维护该接口。
       *
       * @param request DescribeRdsResourceSettingsRequest
       * @return DescribeRdsResourceSettingsResponse
       */
      Models::DescribeRdsResourceSettingsResponse describeRdsResourceSettings(const Models::DescribeRdsResourceSettingsRequest &request);

      /**
       * @summary 查询只读实例复制延迟
       *
       * @param request DescribeReadDBInstanceDelayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReadDBInstanceDelayResponse
       */
      Models::DescribeReadDBInstanceDelayResponse describeReadDBInstanceDelayWithOptions(const Models::DescribeReadDBInstanceDelayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询只读实例复制延迟
       *
       * @param request DescribeReadDBInstanceDelayRequest
       * @return DescribeReadDBInstanceDelayResponse
       */
      Models::DescribeReadDBInstanceDelayResponse describeReadDBInstanceDelay(const Models::DescribeReadDBInstanceDelayRequest &request);

      /**
       * @summary 查询日志信息
       *
       * @param request DescribeRegionInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionInfosResponse
       */
      Models::DescribeRegionInfosResponse describeRegionInfosWithOptions(const Models::DescribeRegionInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询日志信息
       *
       * @param request DescribeRegionInfosRequest
       * @return DescribeRegionInfosResponse
       */
      Models::DescribeRegionInfosResponse describeRegionInfos(const Models::DescribeRegionInfosRequest &request);

      /**
       * @summary 查询地域列表
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询地域列表
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary 查询重建实例价格
       *
       * @param request DescribeRenewalPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPriceWithOptions(const Models::DescribeRenewalPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询重建实例价格
       *
       * @param request DescribeRenewalPriceRequest
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPrice(const Models::DescribeRenewalPriceRequest &request);

      /**
       * @summary 查询复制链路操作日志
       *
       * @param request DescribeReplicationLinkLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReplicationLinkLogsResponse
       */
      Models::DescribeReplicationLinkLogsResponse describeReplicationLinkLogsWithOptions(const Models::DescribeReplicationLinkLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询复制链路操作日志
       *
       * @param request DescribeReplicationLinkLogsRequest
       * @return DescribeReplicationLinkLogsResponse
       */
      Models::DescribeReplicationLinkLogsResponse describeReplicationLinkLogs(const Models::DescribeReplicationLinkLogsRequest &request);

      /**
       * @summary Resource details on the overview page
       *
       * @param request DescribeResourceDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceDetailsResponse
       */
      Models::DescribeResourceDetailsResponse describeResourceDetailsWithOptions(const Models::DescribeResourceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resource details on the overview page
       *
       * @param request DescribeResourceDetailsRequest
       * @return DescribeResourceDetailsResponse
       */
      Models::DescribeResourceDetailsResponse describeResourceDetails(const Models::DescribeResourceDetailsRequest &request);

      /**
       * @summary 查询资源使用情况
       *
       * @param request DescribeResourceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceUsageResponse
       */
      Models::DescribeResourceUsageResponse describeResourceUsageWithOptions(const Models::DescribeResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资源使用情况
       *
       * @param request DescribeResourceUsageRequest
       * @return DescribeResourceUsageResponse
       */
      Models::DescribeResourceUsageResponse describeResourceUsage(const Models::DescribeResourceUsageRequest &request);

      /**
       * @summary 查询RDS实例的SQL洞察（SQL审计）功能是否开启
       *
       * @param request DescribeSQLCollectorPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLCollectorPolicyResponse
       */
      Models::DescribeSQLCollectorPolicyResponse describeSQLCollectorPolicyWithOptions(const Models::DescribeSQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例的SQL洞察（SQL审计）功能是否开启
       *
       * @param request DescribeSQLCollectorPolicyRequest
       * @return DescribeSQLCollectorPolicyResponse
       */
      Models::DescribeSQLCollectorPolicyResponse describeSQLCollectorPolicy(const Models::DescribeSQLCollectorPolicyRequest &request);

      /**
       * @summary 查询RDS实例的SQL洞察日志保存时长
       *
       * @param request DescribeSQLCollectorRetentionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLCollectorRetentionResponse
       */
      Models::DescribeSQLCollectorRetentionResponse describeSQLCollectorRetentionWithOptions(const Models::DescribeSQLCollectorRetentionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例的SQL洞察日志保存时长
       *
       * @param request DescribeSQLCollectorRetentionRequest
       * @return DescribeSQLCollectorRetentionResponse
       */
      Models::DescribeSQLCollectorRetentionResponse describeSQLCollectorRetention(const Models::DescribeSQLCollectorRetentionRequest &request);

      /**
       * @summary 查询SQL日志文件
       *
       * @param request DescribeSQLLogFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogFilesResponse
       */
      Models::DescribeSQLLogFilesResponse describeSQLLogFilesWithOptions(const Models::DescribeSQLLogFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询SQL日志文件
       *
       * @param request DescribeSQLLogFilesRequest
       * @return DescribeSQLLogFilesResponse
       */
      Models::DescribeSQLLogFilesResponse describeSQLLogFiles(const Models::DescribeSQLLogFilesRequest &request);

      /**
       * @summary 查询SQL日志记录
       *
       * @param request DescribeSQLLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogRecordsResponse
       */
      Models::DescribeSQLLogRecordsResponse describeSQLLogRecordsWithOptions(const Models::DescribeSQLLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询SQL日志记录
       *
       * @param request DescribeSQLLogRecordsRequest
       * @return DescribeSQLLogRecordsResponse
       */
      Models::DescribeSQLLogRecordsResponse describeSQLLogRecords(const Models::DescribeSQLLogRecordsRequest &request);

      /**
       * @summary 查询SQL日志列表
       *
       * @param request DescribeSQLLogReportListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogReportListResponse
       */
      Models::DescribeSQLLogReportListResponse describeSQLLogReportListWithOptions(const Models::DescribeSQLLogReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询SQL日志列表
       *
       * @param request DescribeSQLLogReportListRequest
       * @return DescribeSQLLogReportListResponse
       */
      Models::DescribeSQLLogReportListResponse describeSQLLogReportList(const Models::DescribeSQLLogReportListRequest &request);

      /**
       * @summary 查询SQLServer升级版本
       *
       * @description Supported engine:  
       * * SQL Server (supports only 2016 and earlier versions)
       *
       * @param request DescribeSQLServerUpgradeVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLServerUpgradeVersionsResponse
       */
      Models::DescribeSQLServerUpgradeVersionsResponse describeSQLServerUpgradeVersionsWithOptions(const Models::DescribeSQLServerUpgradeVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询SQLServer升级版本
       *
       * @description Supported engine:  
       * * SQL Server (supports only 2016 and earlier versions)
       *
       * @param request DescribeSQLServerUpgradeVersionsRequest
       * @return DescribeSQLServerUpgradeVersionsResponse
       */
      Models::DescribeSQLServerUpgradeVersionsResponse describeSQLServerUpgradeVersions(const Models::DescribeSQLServerUpgradeVersionsRequest &request);

      /**
       * @summary 列举描述Data Api 用户凭证
       *
       * @param request DescribeSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecretsResponse
       */
      Models::DescribeSecretsResponse describeSecretsWithOptions(const Models::DescribeSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举描述Data Api 用户凭证
       *
       * @param request DescribeSecretsRequest
       * @return DescribeSecretsResponse
       */
      Models::DescribeSecretsResponse describeSecrets(const Models::DescribeSecretsRequest &request);

      /**
       * @summary Queries ECS security groups to which an instance is added.
       *
       * @description ### 适用引擎
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * ### 相关功能文档
       * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
       * - [RDS MySQL设置安全组](https://help.aliyun.com/document_detail/201042.html)
       * - [RDS PostgreSQL设置安全组](https://help.aliyun.com/document_detail/206310.html)
       * - [RDS SQL Server设置安全组](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfigurationWithOptions(const Models::DescribeSecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries ECS security groups to which an instance is added.
       *
       * @description ### 适用引擎
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * ### 相关功能文档
       * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
       * - [RDS MySQL设置安全组](https://help.aliyun.com/document_detail/201042.html)
       * - [RDS PostgreSQL设置安全组](https://help.aliyun.com/document_detail/206310.html)
       * - [RDS SQL Server设置安全组](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfiguration(const Models::DescribeSecurityGroupConfigurationRequest &request);

      /**
       * @summary 获取实例所有复制槽相关信息
       *
       * @param request DescribeSlotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlotsResponse
       */
      Models::DescribeSlotsResponse describeSlotsWithOptions(const Models::DescribeSlotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例所有复制槽相关信息
       *
       * @param request DescribeSlotsRequest
       * @return DescribeSlotsResponse
       */
      Models::DescribeSlotsResponse describeSlots(const Models::DescribeSlotsRequest &request);

      /**
       * @summary This API is used to view the slow query log details of an instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Notes
       * - The response parameters of this API are updated once per minute.
       * - When you invoke this API to pull data, a certain latency will occur. Please wait patiently for the response.
       * - Starting from September 1, 2024, due to optimization of the SQL templating algorithm, the value of the SQLHash field will change when you call this API. For more information, see [【Notifications】Optimization of the Templating Algorithm for Slow SQL Statements](https://help.aliyun.com/document_detail/2845725.html).
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to view the slow query log details of an instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Notes
       * - The response parameters of this API are updated once per minute.
       * - When you invoke this API to pull data, a certain latency will occur. Please wait patiently for the response.
       * - Starting from September 1, 2024, due to optimization of the SQL templating algorithm, the value of the SQLHash field will change when you call this API. For more information, see [【Notifications】Optimization of the Templating Algorithm for Slow SQL Statements](https://help.aliyun.com/document_detail/2845725.html).
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary 查询慢日志列表
       *
       * @param request DescribeSlowLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogsResponse
       */
      Models::DescribeSlowLogsResponse describeSlowLogsWithOptions(const Models::DescribeSlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询慢日志列表
       *
       * @param request DescribeSlowLogsRequest
       * @return DescribeSlowLogsResponse
       */
      Models::DescribeSlowLogsResponse describeSlowLogs(const Models::DescribeSlowLogsRequest &request);

      /**
       * @summary 查询是否支持在线扩盘
       *
       * @param request DescribeSupportOnlineResizeDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportOnlineResizeDiskResponse
       */
      Models::DescribeSupportOnlineResizeDiskResponse describeSupportOnlineResizeDiskWithOptions(const Models::DescribeSupportOnlineResizeDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询是否支持在线扩盘
       *
       * @param request DescribeSupportOnlineResizeDiskRequest
       * @return DescribeSupportOnlineResizeDiskResponse
       */
      Models::DescribeSupportOnlineResizeDiskResponse describeSupportOnlineResizeDisk(const Models::DescribeSupportOnlineResizeDiskRequest &request);

      /**
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary 查询任务列表
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务列表
       *
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary Queries the check report for a major engine version upgrade of an ApsaraDB RDS for MySQL instance or ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### 适用引擎
       * RDS MySQL
       * RDS PostgreSQL
       * ### 相关功能文档
       * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
       * - [RDS MySQL大版本升级检查报告](https://help.aliyun.com/document_detail/2794383.html)
       * - [RDS PostgreSQL升级数据库大版本](https://help.aliyun.com/document_detail/203309.html)
       * - [解读RDS PostgreSQL大版本升级检查报告](https://help.aliyun.com/document_detail/218391.html)
       *
       * @param request DescribeUpgradeMajorVersionPrecheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpgradeMajorVersionPrecheckTaskResponse
       */
      Models::DescribeUpgradeMajorVersionPrecheckTaskResponse describeUpgradeMajorVersionPrecheckTaskWithOptions(const Models::DescribeUpgradeMajorVersionPrecheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the check report for a major engine version upgrade of an ApsaraDB RDS for MySQL instance or ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### 适用引擎
       * RDS MySQL
       * RDS PostgreSQL
       * ### 相关功能文档
       * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
       * - [RDS MySQL大版本升级检查报告](https://help.aliyun.com/document_detail/2794383.html)
       * - [RDS PostgreSQL升级数据库大版本](https://help.aliyun.com/document_detail/203309.html)
       * - [解读RDS PostgreSQL大版本升级检查报告](https://help.aliyun.com/document_detail/218391.html)
       *
       * @param request DescribeUpgradeMajorVersionPrecheckTaskRequest
       * @return DescribeUpgradeMajorVersionPrecheckTaskResponse
       */
      Models::DescribeUpgradeMajorVersionPrecheckTaskResponse describeUpgradeMajorVersionPrecheckTask(const Models::DescribeUpgradeMajorVersionPrecheckTaskRequest &request);

      /**
       * @summary This API is used to query the history of major version upgrade jobs for RDS PostgreSQL instances.
       *
       * @description ### Applicable Engine  
       * RDS PostgreSQL
       *
       * @param request DescribeUpgradeMajorVersionTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpgradeMajorVersionTasksResponse
       */
      Models::DescribeUpgradeMajorVersionTasksResponse describeUpgradeMajorVersionTasksWithOptions(const Models::DescribeUpgradeMajorVersionTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query the history of major version upgrade jobs for RDS PostgreSQL instances.
       *
       * @description ### Applicable Engine  
       * RDS PostgreSQL
       *
       * @param request DescribeUpgradeMajorVersionTasksRequest
       * @return DescribeUpgradeMajorVersionTasksResponse
       */
      Models::DescribeUpgradeMajorVersionTasksResponse describeUpgradeMajorVersionTasks(const Models::DescribeUpgradeMajorVersionTasksRequest &request);

      /**
       * @summary 查询交换机列表
       *
       * @param request DescribeVSwitchListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchListResponse
       */
      Models::DescribeVSwitchListResponse describeVSwitchListWithOptions(const Models::DescribeVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询交换机列表
       *
       * @param request DescribeVSwitchListRequest
       * @return DescribeVSwitchListResponse
       */
      Models::DescribeVSwitchListResponse describeVSwitchList(const Models::DescribeVSwitchListRequest &request);

      /**
       * @summary 查询交换机
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询交换机
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary 查询VPC列表
       *
       * @param request DescribeVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcsWithOptions(const Models::DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询VPC列表
       *
       * @param request DescribeVpcsRequest
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcs(const Models::DescribeVpcsRequest &request);

      /**
       * @summary 查询白名单模板列表
       *
       * @param request DescribeWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhitelistTemplateResponse
       */
      Models::DescribeWhitelistTemplateResponse describeWhitelistTemplateWithOptions(const Models::DescribeWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询白名单模板列表
       *
       * @param request DescribeWhitelistTemplateRequest
       * @return DescribeWhitelistTemplateResponse
       */
      Models::DescribeWhitelistTemplateResponse describeWhitelistTemplate(const Models::DescribeWhitelistTemplateRequest &request);

      /**
       * @summary 查询白名单模板关联实例
       *
       * @param request DescribeWhitelistTemplateLinkedInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhitelistTemplateLinkedInstanceResponse
       */
      Models::DescribeWhitelistTemplateLinkedInstanceResponse describeWhitelistTemplateLinkedInstanceWithOptions(const Models::DescribeWhitelistTemplateLinkedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询白名单模板关联实例
       *
       * @param request DescribeWhitelistTemplateLinkedInstanceRequest
       * @return DescribeWhitelistTemplateLinkedInstanceResponse
       */
      Models::DescribeWhitelistTemplateLinkedInstanceResponse describeWhitelistTemplateLinkedInstance(const Models::DescribeWhitelistTemplateLinkedInstanceRequest &request);

      /**
       * @summary 销毁实例
       *
       * @param request DestroyDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DestroyDBInstanceResponse
       */
      Models::DestroyDBInstanceResponse destroyDBInstanceWithOptions(const Models::DestroyDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 销毁实例
       *
       * @param request DestroyDBInstanceRequest
       * @return DestroyDBInstanceResponse
       */
      Models::DestroyDBInstanceResponse destroyDBInstance(const Models::DestroyDBInstanceRequest &request);

      /**
       * @summary DetachGadInstanceMember
       *
       * @param request DetachGadInstanceMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachGadInstanceMemberResponse
       */
      Models::DetachGadInstanceMemberResponse detachGadInstanceMemberWithOptions(const Models::DetachGadInstanceMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DetachGadInstanceMember
       *
       * @param request DetachGadInstanceMemberRequest
       * @return DetachGadInstanceMemberResponse
       */
      Models::DetachGadInstanceMemberResponse detachGadInstanceMember(const Models::DetachGadInstanceMemberRequest &request);

      /**
       * @summary 卸载RC云盘
       *
       * @param request DetachRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachRCDiskResponse
       */
      Models::DetachRCDiskResponse detachRCDiskWithOptions(const Models::DetachRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 卸载RC云盘
       *
       * @param request DetachRCDiskRequest
       * @return DetachRCDiskResponse
       */
      Models::DetachRCDiskResponse detachRCDisk(const Models::DetachRCDiskRequest &request);

      /**
       * @summary 接触实例关联白名单模板
       *
       * @param request DetachWhitelistTemplateToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachWhitelistTemplateToInstanceResponse
       */
      Models::DetachWhitelistTemplateToInstanceResponse detachWhitelistTemplateToInstanceWithOptions(const Models::DetachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 接触实例关联白名单模板
       *
       * @param request DetachWhitelistTemplateToInstanceRequest
       * @return DetachWhitelistTemplateToInstanceResponse
       */
      Models::DetachWhitelistTemplateToInstanceResponse detachWhitelistTemplateToInstance(const Models::DetachWhitelistTemplateToInstanceRequest &request);

      /**
       * @summary 开启备份加密
       *
       * @param request EnableBackupEncryptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableBackupEncryptionResponse
       */
      Models::EnableBackupEncryptionResponse enableBackupEncryptionWithOptions(const Models::EnableBackupEncryptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启备份加密
       *
       * @param request EnableBackupEncryptionRequest
       * @return EnableBackupEncryptionResponse
       */
      Models::EnableBackupEncryptionResponse enableBackupEncryption(const Models::EnableBackupEncryptionRequest &request);

      /**
       * @summary Evaluate the available disk space for emergency local disk scale-out and unlock.
       *
       * @param request EvaluateLocalExtendDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluateLocalExtendDiskResponse
       */
      Models::EvaluateLocalExtendDiskResponse evaluateLocalExtendDiskWithOptions(const Models::EvaluateLocalExtendDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Evaluate the available disk space for emergency local disk scale-out and unlock.
       *
       * @param request EvaluateLocalExtendDiskRequest
       * @return EvaluateLocalExtendDiskResponse
       */
      Models::EvaluateLocalExtendDiskResponse evaluateLocalExtendDisk(const Models::EvaluateLocalExtendDiskRequest &request);

      /**
       * @summary 获取实例拓扑
       *
       * @param request GetDBInstanceTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDBInstanceTopologyResponse
       */
      Models::GetDBInstanceTopologyResponse getDBInstanceTopologyWithOptions(const Models::GetDBInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例拓扑
       *
       * @param request GetDBInstanceTopologyRequest
       * @return GetDBInstanceTopologyResponse
       */
      Models::GetDBInstanceTopologyResponse getDBInstanceTopology(const Models::GetDBInstanceTopologyRequest &request);

      /**
       * @summary 查询RDS实例数据库代理连接地址SSL加密信息
       *
       * @param request GetDbProxyInstanceSslRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDbProxyInstanceSslResponse
       */
      Models::GetDbProxyInstanceSslResponse getDbProxyInstanceSslWithOptions(const Models::GetDbProxyInstanceSslRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS实例数据库代理连接地址SSL加密信息
       *
       * @param request GetDbProxyInstanceSslRequest
       * @return GetDbProxyInstanceSslResponse
       */
      Models::GetDbProxyInstanceSslResponse getDbProxyInstanceSsl(const Models::GetDbProxyInstanceSslRequest &request);

      /**
       * @summary This API is used to grant a specified database account access permissions to one or more databases.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites and the impact of using this API before performing any operation.
       * - [Modify Account Permissions for RDS MySQL](https://help.aliyun.com/document_detail/96101.html)
       * - [Modify Account Permissions for RDS SQL Server](https://help.aliyun.com/document_detail/95692.html)
       * - [Modify Account Permissions for RDS MariaDB](https://help.aliyun.com/document_detail/97134.html)
       * - [Permission Details for RDS PostgreSQL](https://help.aliyun.com/document_detail/257684.html)
       *
       * @param request GrantAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilegeWithOptions(const Models::GrantAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to grant a specified database account access permissions to one or more databases.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the function documentation to fully understand the prerequisites and the impact of using this API before performing any operation.
       * - [Modify Account Permissions for RDS MySQL](https://help.aliyun.com/document_detail/96101.html)
       * - [Modify Account Permissions for RDS SQL Server](https://help.aliyun.com/document_detail/95692.html)
       * - [Modify Account Permissions for RDS MariaDB](https://help.aliyun.com/document_detail/97134.html)
       * - [Permission Details for RDS PostgreSQL](https://help.aliyun.com/document_detail/257684.html)
       *
       * @param request GrantAccountPrivilegeRequest
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilege(const Models::GrantAccountPrivilegeRequest &request);

      /**
       * @summary 授权操作人权限
       *
       * @param request GrantOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantOperatorPermissionResponse
       */
      Models::GrantOperatorPermissionResponse grantOperatorPermissionWithOptions(const Models::GrantOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授权操作人权限
       *
       * @param request GrantOperatorPermissionRequest
       * @return GrantOperatorPermissionResponse
       */
      Models::GrantOperatorPermissionResponse grantOperatorPermission(const Models::GrantOperatorPermissionRequest &request);

      /**
       * @summary This API is used to import backup data from a self-managed MySQL 5.7 database into RDS.
       *
       * @description ### Supported Engine
       * - RDS MySQL
       * ### Feature Description
       * User backups refer to full backup data from a self-managed MySQL database. You can recover user backups to the cloud.
       * ### Notes
       * **To invoke this API, you must meet the following conditions:**
       * * You have backed up your self-managed MySQL 5.7 or 8.0 database using XtraBackup, and the backup file name ends with `_qp.xb`. For more information, see [Migrate Full Backup Data from Self-Managed MySQL 5.7 or 8.0 Databases to the Cloud](https://help.aliyun.com/document_detail/251779.html).
       * * You have uploaded the backup files of your self-managed MySQL 5.7 or 8.0 database to an OSS bucket in the corresponding Region. For more information, see [Migrate Full Backup Data from Self-Managed MySQL 5.7 or 8.0 Databases to the Cloud](https://help.aliyun.com/document_detail/251779.html).
       *
       * @param request ImportUserBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportUserBackupFileResponse
       */
      Models::ImportUserBackupFileResponse importUserBackupFileWithOptions(const Models::ImportUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to import backup data from a self-managed MySQL 5.7 database into RDS.
       *
       * @description ### Supported Engine
       * - RDS MySQL
       * ### Feature Description
       * User backups refer to full backup data from a self-managed MySQL database. You can recover user backups to the cloud.
       * ### Notes
       * **To invoke this API, you must meet the following conditions:**
       * * You have backed up your self-managed MySQL 5.7 or 8.0 database using XtraBackup, and the backup file name ends with `_qp.xb`. For more information, see [Migrate Full Backup Data from Self-Managed MySQL 5.7 or 8.0 Databases to the Cloud](https://help.aliyun.com/document_detail/251779.html).
       * * You have uploaded the backup files of your self-managed MySQL 5.7 or 8.0 database to an OSS bucket in the corresponding Region. For more information, see [Migrate Full Backup Data from Self-Managed MySQL 5.7 or 8.0 Databases to the Cloud](https://help.aliyun.com/document_detail/251779.html).
       *
       * @param request ImportUserBackupFileRequest
       * @return ImportUserBackupFileResponse
       */
      Models::ImportUserBackupFileResponse importUserBackupFile(const Models::ImportUserBackupFileRequest &request);

      /**
       * @summary 为实例安装云助手Agent
       *
       * @param tmpReq InstallRCCloudAssistantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallRCCloudAssistantResponse
       */
      Models::InstallRCCloudAssistantResponse installRCCloudAssistantWithOptions(const Models::InstallRCCloudAssistantRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为实例安装云助手Agent
       *
       * @param request InstallRCCloudAssistantRequest
       * @return InstallRCCloudAssistantResponse
       */
      Models::InstallRCCloudAssistantResponse installRCCloudAssistant(const Models::InstallRCCloudAssistantRequest &request);

      /**
       * @summary 查询实例规格列表
       *
       * @param request ListClassesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClassesResponse
       */
      Models::ListClassesResponse listClassesWithOptions(const Models::ListClassesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例规格列表
       *
       * @param request ListClassesRequest
       * @return ListClassesResponse
       */
      Models::ListClassesResponse listClasses(const Models::ListClassesRequest &request);

      /**
       * @summary List and query native replication data import jobs.
       *
       * @description List and query native replication instance data import jobs.
       *
       * @param request ListImportTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImportTasksResponse
       */
      Models::ListImportTasksResponse listImportTasksWithOptions(const Models::ListImportTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List and query native replication data import jobs.
       *
       * @description List and query native replication instance data import jobs.
       *
       * @param request ListImportTasksRequest
       * @return ListImportTasksResponse
       */
      Models::ListImportTasksResponse listImportTasks(const Models::ListImportTasksRequest &request);

      /**
       * @summary RCVCluster列表接口
       *
       * @param request ListRCVClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRCVClustersResponse
       */
      Models::ListRCVClustersResponse listRCVClustersWithOptions(const Models::ListRCVClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RCVCluster列表接口
       *
       * @param request ListRCVClustersRequest
       * @return ListRCVClustersResponse
       */
      Models::ListRCVClustersResponse listRCVClusters(const Models::ListRCVClustersRequest &request);

      /**
       * @summary 查询RDS资源已绑定的标签列表
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS资源已绑定的标签列表
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 查询所有已导入至RDS的用户备份的详情
       *
       * @param request ListUserBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserBackupFilesResponse
       */
      Models::ListUserBackupFilesResponse listUserBackupFilesWithOptions(const Models::ListUserBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所有已导入至RDS的用户备份的详情
       *
       * @param request ListUserBackupFilesRequest
       * @return ListUserBackupFilesResponse
       */
      Models::ListUserBackupFilesResponse listUserBackupFiles(const Models::ListUserBackupFilesRequest &request);

      /**
       * @summary 锁定账号
       *
       * @param request LockAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockAccountResponse
       */
      Models::LockAccountResponse lockAccountWithOptions(const Models::LockAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 锁定账号
       *
       * @param request LockAccountRequest
       * @return LockAccountResponse
       */
      Models::LockAccountResponse lockAccount(const Models::LockAccountRequest &request);

      /**
       * @summary 迁移实例链接到其他可用区
       *
       * @param request MigrateConnectionToOtherZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateConnectionToOtherZoneResponse
       */
      Models::MigrateConnectionToOtherZoneResponse migrateConnectionToOtherZoneWithOptions(const Models::MigrateConnectionToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 迁移实例链接到其他可用区
       *
       * @param request MigrateConnectionToOtherZoneRequest
       * @return MigrateConnectionToOtherZoneResponse
       */
      Models::MigrateConnectionToOtherZoneResponse migrateConnectionToOtherZone(const Models::MigrateConnectionToOtherZoneRequest &request);

      /**
       * @summary 迁移RDS实例
       *
       * @param request MigrateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateDBInstanceResponse
       */
      Models::MigrateDBInstanceResponse migrateDBInstanceWithOptions(const Models::MigrateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 迁移RDS实例
       *
       * @param request MigrateDBInstanceRequest
       * @return MigrateDBInstanceResponse
       */
      Models::MigrateDBInstanceResponse migrateDBInstance(const Models::MigrateDBInstanceRequest &request);

      /**
       * @summary category cluster migrate db nodes
       *
       * @param tmpReq MigrateDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateDBNodesResponse
       */
      Models::MigrateDBNodesResponse migrateDBNodesWithOptions(const Models::MigrateDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary category cluster migrate db nodes
       *
       * @param request MigrateDBNodesRequest
       * @return MigrateDBNodesResponse
       */
      Models::MigrateDBNodesResponse migrateDBNodes(const Models::MigrateDBNodesRequest &request);

      /**
       * @summary 将RDS白名单从通用模式切换为高安全模式
       *
       * @param request MigrateSecurityIPModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateSecurityIPModeResponse
       */
      Models::MigrateSecurityIPModeResponse migrateSecurityIPModeWithOptions(const Models::MigrateSecurityIPModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将RDS白名单从通用模式切换为高安全模式
       *
       * @param request MigrateSecurityIPModeRequest
       * @return MigrateSecurityIPModeResponse
       */
      Models::MigrateSecurityIPModeResponse migrateSecurityIPMode(const Models::MigrateSecurityIPModeRequest &request);

      /**
       * @summary RDS实例迁移到其他可用区
       *
       * @param request MigrateToOtherZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZoneWithOptions(const Models::MigrateToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RDS实例迁移到其他可用区
       *
       * @param request MigrateToOtherZoneRequest
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZone(const Models::MigrateToOtherZoneRequest &request);

      /**
       * @summary 修改AD信息
       *
       * @param request ModifyADInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyADInfoResponse
       */
      Models::ModifyADInfoResponse modifyADInfoWithOptions(const Models::ModifyADInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改AD信息
       *
       * @param request ModifyADInfoRequest
       * @return ModifyADInfoResponse
       */
      Models::ModifyADInfoResponse modifyADInfo(const Models::ModifyADInfoRequest &request);

      /**
       * @summary 修改账号检查策略
       *
       * @param request ModifyAccountCheckPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountCheckPolicyResponse
       */
      Models::ModifyAccountCheckPolicyResponse modifyAccountCheckPolicyWithOptions(const Models::ModifyAccountCheckPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改账号检查策略
       *
       * @param request ModifyAccountCheckPolicyRequest
       * @return ModifyAccountCheckPolicyResponse
       */
      Models::ModifyAccountCheckPolicyResponse modifyAccountCheckPolicy(const Models::ModifyAccountCheckPolicyRequest &request);

      /**
       * @summary 修改账号备注信息
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改账号备注信息
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Modify the encryption or masking permissions of an account in a specified instance.
       *
       * @description ## Request Description
       * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
       *
       * @param request ModifyAccountMaskingPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountMaskingPrivilegeResponse
       */
      Models::ModifyAccountMaskingPrivilegeResponse modifyAccountMaskingPrivilegeWithOptions(const Models::ModifyAccountMaskingPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the encryption or masking permissions of an account in a specified instance.
       *
       * @description ## Request Description
       * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
       *
       * @param request ModifyAccountMaskingPrivilegeRequest
       * @return ModifyAccountMaskingPrivilegeResponse
       */
      Models::ModifyAccountMaskingPrivilegeResponse modifyAccountMaskingPrivilege(const Models::ModifyAccountMaskingPrivilegeRequest &request);

      /**
       * @summary 修改密码策略
       *
       * @param request ModifyAccountSecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountSecurityPolicyResponse
       */
      Models::ModifyAccountSecurityPolicyResponse modifyAccountSecurityPolicyWithOptions(const Models::ModifyAccountSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改密码策略
       *
       * @param request ModifyAccountSecurityPolicyRequest
       * @return ModifyAccountSecurityPolicyResponse
       */
      Models::ModifyAccountSecurityPolicyResponse modifyAccountSecurityPolicy(const Models::ModifyAccountSecurityPolicyRequest &request);

      /**
       * @summary 开启或关闭RDS历史事件功能
       *
       * @param request ModifyActionEventPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActionEventPolicyResponse
       */
      Models::ModifyActionEventPolicyResponse modifyActionEventPolicyWithOptions(const Models::ModifyActionEventPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启或关闭RDS历史事件功能
       *
       * @param request ModifyActionEventPolicyRequest
       * @return ModifyActionEventPolicyResponse
       */
      Models::ModifyActionEventPolicyResponse modifyActionEventPolicy(const Models::ModifyActionEventPolicyRequest &request);

      /**
       * @summary 批量修改主动运维任务
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量修改主动运维任务
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary 修改RDS的备份策略
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS的备份策略
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Extends the expiration time of backup sets generated by manual backup for a single database, including physical backup sets and full backup sets.
       *
       * @param request ModifyBackupSetExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupSetExpireTimeResponse
       */
      Models::ModifyBackupSetExpireTimeResponse modifyBackupSetExpireTimeWithOptions(const Models::ModifyBackupSetExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extends the expiration time of backup sets generated by manual backup for a single database, including physical backup sets and full backup sets.
       *
       * @param request ModifyBackupSetExpireTimeRequest
       * @return ModifyBackupSetExpireTimeResponse
       */
      Models::ModifyBackupSetExpireTimeResponse modifyBackupSetExpireTime(const Models::ModifyBackupSetExpireTimeRequest &request);

      /**
       * @summary 修改排序时区
       *
       * @param request ModifyCollationTimeZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCollationTimeZoneResponse
       */
      Models::ModifyCollationTimeZoneResponse modifyCollationTimeZoneWithOptions(const Models::ModifyCollationTimeZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改排序时区
       *
       * @param request ModifyCollationTimeZoneRequest
       * @return ModifyCollationTimeZoneResponse
       */
      Models::ModifyCollationTimeZoneResponse modifyCollationTimeZone(const Models::ModifyCollationTimeZoneRequest &request);

      /**
       * @summary Modifies the settings of assured serverless or disables assured serverless.
       *
       * @description ### 适用引擎
       * RDS PostgreSQL
       * ### 相关功能文档
       * [承诺型Serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request ModifyComputeBurstConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyComputeBurstConfigResponse
       */
      Models::ModifyComputeBurstConfigResponse modifyComputeBurstConfigWithOptions(const Models::ModifyComputeBurstConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the settings of assured serverless or disables assured serverless.
       *
       * @description ### 适用引擎
       * RDS PostgreSQL
       * ### 相关功能文档
       * [承诺型Serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request ModifyComputeBurstConfigRequest
       * @return ModifyComputeBurstConfigResponse
       */
      Models::ModifyComputeBurstConfigResponse modifyComputeBurstConfig(const Models::ModifyComputeBurstConfigRequest &request);

      /**
       * @summary This API is used to modify RDS instance resources.
       *
       * @param request ModifyCustinsResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustinsResourceResponse
       */
      Models::ModifyCustinsResourceResponse modifyCustinsResourceWithOptions(const Models::ModifyCustinsResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to modify RDS instance resources.
       *
       * @param request ModifyCustinsResourceRequest
       * @return ModifyCustinsResourceResponse
       */
      Models::ModifyCustinsResourceResponse modifyCustinsResource(const Models::ModifyCustinsResourceRequest &request);

      /**
       * @summary 修改DB备注信息
       *
       * @param request ModifyDBDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBDescriptionResponse
       */
      Models::ModifyDBDescriptionResponse modifyDBDescriptionWithOptions(const Models::ModifyDBDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改DB备注信息
       *
       * @param request ModifyDBDescriptionRequest
       * @return ModifyDBDescriptionResponse
       */
      Models::ModifyDBDescriptionResponse modifyDBDescription(const Models::ModifyDBDescriptionRequest &request);

      /**
       * @summary 设置RDS实例是否自动升级内核小版本
       *
       * @param request ModifyDBInstanceAutoUpgradeMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceAutoUpgradeMinorVersionResponse
       */
      Models::ModifyDBInstanceAutoUpgradeMinorVersionResponse modifyDBInstanceAutoUpgradeMinorVersionWithOptions(const Models::ModifyDBInstanceAutoUpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置RDS实例是否自动升级内核小版本
       *
       * @param request ModifyDBInstanceAutoUpgradeMinorVersionRequest
       * @return ModifyDBInstanceAutoUpgradeMinorVersionResponse
       */
      Models::ModifyDBInstanceAutoUpgradeMinorVersionResponse modifyDBInstanceAutoUpgradeMinorVersion(const Models::ModifyDBInstanceAutoUpgradeMinorVersionRequest &request);

      /**
       * @summary Modify the column encryption algorithm configuration for a specified instance.
       *
       * @description ## Request Description
       * - Before using this API, ensure that you have activated the column encryption service in the DAS Security Center.
       * - If you receive an error message when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it again.
       *
       * @param request ModifyDBInstanceCLSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceCLSResponse
       */
      Models::ModifyDBInstanceCLSResponse modifyDBInstanceCLSWithOptions(const Models::ModifyDBInstanceCLSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the column encryption algorithm configuration for a specified instance.
       *
       * @description ## Request Description
       * - Before using this API, ensure that you have activated the column encryption service in the DAS Security Center.
       * - If you receive an error message when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and activate the column encryption service before using it again.
       *
       * @param request ModifyDBInstanceCLSRequest
       * @return ModifyDBInstanceCLSResponse
       */
      Models::ModifyDBInstanceCLSResponse modifyDBInstanceCLS(const Models::ModifyDBInstanceCLSRequest &request);

      /**
       * @summary 修改实例配置
       *
       * @param request ModifyDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(const Models::ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例配置
       *
       * @param request ModifyDBInstanceConfigRequest
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfig(const Models::ModifyDBInstanceConfigRequest &request);

      /**
       * @summary This API is used to manage the connection address and port of an instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the impact of its use before performing any operation.
       * - [Modify the connection address and port for RDS MySQL](https://help.aliyun.com/document_detail/96163.html)
       * - [Modify the connection address and port for RDS PostgreSQL](https://help.aliyun.com/document_detail/96788.html)
       * - [Modify the connection address and port for RDS SQL Server](https://help.aliyun.com/document_detail/95740.html)
       * - [Modify the connection address and port for RDS MariaDB](https://help.aliyun.com/document_detail/97157.html)
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to manage the connection address and port of an instance.
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the impact of its use before performing any operation.
       * - [Modify the connection address and port for RDS MySQL](https://help.aliyun.com/document_detail/96163.html)
       * - [Modify the connection address and port for RDS PostgreSQL](https://help.aliyun.com/document_detail/96788.html)
       * - [Modify the connection address and port for RDS SQL Server](https://help.aliyun.com/document_detail/95740.html)
       * - [Modify the connection address and port for RDS MariaDB](https://help.aliyun.com/document_detail/97157.html)
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @summary 修改只读实例延迟时间
       *
       * @param request ModifyDBInstanceDelayedReplicationTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDelayedReplicationTimeResponse
       */
      Models::ModifyDBInstanceDelayedReplicationTimeResponse modifyDBInstanceDelayedReplicationTimeWithOptions(const Models::ModifyDBInstanceDelayedReplicationTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改只读实例延迟时间
       *
       * @param request ModifyDBInstanceDelayedReplicationTimeRequest
       * @return ModifyDBInstanceDelayedReplicationTimeResponse
       */
      Models::ModifyDBInstanceDelayedReplicationTimeResponse modifyDBInstanceDelayedReplicationTime(const Models::ModifyDBInstanceDelayedReplicationTimeRequest &request);

      /**
       * @summary 修改实例是否开启删除保护
       *
       * @param request ModifyDBInstanceDeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDeletionProtectionResponse
       */
      Models::ModifyDBInstanceDeletionProtectionResponse modifyDBInstanceDeletionProtectionWithOptions(const Models::ModifyDBInstanceDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例是否开启删除保护
       *
       * @param request ModifyDBInstanceDeletionProtectionRequest
       * @return ModifyDBInstanceDeletionProtectionResponse
       */
      Models::ModifyDBInstanceDeletionProtectionResponse modifyDBInstanceDeletionProtection(const Models::ModifyDBInstanceDeletionProtectionRequest &request);

      /**
       * @summary 修改实例备注信息
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(const Models::ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例备注信息
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(const Models::ModifyDBInstanceDescriptionRequest &request);

      /**
       * @summary 修改实例的Endpoint信息
       *
       * @param tmpReq ModifyDBInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceEndpointResponse
       */
      Models::ModifyDBInstanceEndpointResponse modifyDBInstanceEndpointWithOptions(const Models::ModifyDBInstanceEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例的Endpoint信息
       *
       * @param request ModifyDBInstanceEndpointRequest
       * @return ModifyDBInstanceEndpointResponse
       */
      Models::ModifyDBInstanceEndpointResponse modifyDBInstanceEndpoint(const Models::ModifyDBInstanceEndpointRequest &request);

      /**
       * @summary 修改实例的Endpoint连接地址信息
       *
       * @param request ModifyDBInstanceEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceEndpointAddressResponse
       */
      Models::ModifyDBInstanceEndpointAddressResponse modifyDBInstanceEndpointAddressWithOptions(const Models::ModifyDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例的Endpoint连接地址信息
       *
       * @param request ModifyDBInstanceEndpointAddressRequest
       * @return ModifyDBInstanceEndpointAddressResponse
       */
      Models::ModifyDBInstanceEndpointAddressResponse modifyDBInstanceEndpointAddress(const Models::ModifyDBInstanceEndpointAddressRequest &request);

      /**
       * @summary 修改实例的高可用模式和数据复制方式
       *
       * @param request ModifyDBInstanceHAConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceHAConfigResponse
       */
      Models::ModifyDBInstanceHAConfigResponse modifyDBInstanceHAConfigWithOptions(const Models::ModifyDBInstanceHAConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例的高可用模式和数据复制方式
       *
       * @param request ModifyDBInstanceHAConfigRequest
       * @return ModifyDBInstanceHAConfigResponse
       */
      Models::ModifyDBInstanceHAConfigResponse modifyDBInstanceHAConfig(const Models::ModifyDBInstanceHAConfigRequest &request);

      /**
       * @summary 设置实例运维时间
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTimeWithOptions(const Models::ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置实例运维时间
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTime(const Models::ModifyDBInstanceMaintainTimeRequest &request);

      /**
       * @summary 变更RDS PostgreSQL实例需要展示的增强监控指标
       *
       * @param request ModifyDBInstanceMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMetricsResponse
       */
      Models::ModifyDBInstanceMetricsResponse modifyDBInstanceMetricsWithOptions(const Models::ModifyDBInstanceMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更RDS PostgreSQL实例需要展示的增强监控指标
       *
       * @param request ModifyDBInstanceMetricsRequest
       * @return ModifyDBInstanceMetricsResponse
       */
      Models::ModifyDBInstanceMetricsResponse modifyDBInstanceMetrics(const Models::ModifyDBInstanceMetricsRequest &request);

      /**
       * @summary Modifies a monitoring frequency.
       *
       * @description ### 适用引擎
       * - RDS MySQL
       * - RDS SQL Server
       * ### 注意事项
       * RDS MySQL的秒级监控需要收取额外费用，请确保在使用该接口前，已充分了解RDS产品的[收费方式和价格](https://help.aliyun.com/document_detail/45020.html)。
       * ### 相关功能文档
       * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
       * - [RDS MySQL设置监控频率](https://help.aliyun.com/document_detail/96112.html)
       * - [RDS SQL Server设置监控频率](https://help.aliyun.com/document_detail/95710.html)
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitorWithOptions(const Models::ModifyDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a monitoring frequency.
       *
       * @description ### 适用引擎
       * - RDS MySQL
       * - RDS SQL Server
       * ### 注意事项
       * RDS MySQL的秒级监控需要收取额外费用，请确保在使用该接口前，已充分了解RDS产品的[收费方式和价格](https://help.aliyun.com/document_detail/45020.html)。
       * ### 相关功能文档
       * >Notice: 使用该接口前，请仔细阅读功能文档，确保完全了解使用接口的前提条件及使用后造成的影响后，再进行操作。
       * - [RDS MySQL设置监控频率](https://help.aliyun.com/document_detail/96112.html)
       * - [RDS SQL Server设置监控频率](https://help.aliyun.com/document_detail/95710.html)
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitor(const Models::ModifyDBInstanceMonitorRequest &request);

      /**
       * @summary 设置实例网络链接过期时间
       *
       * @param request ModifyDBInstanceNetworkExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceNetworkExpireTimeResponse
       */
      Models::ModifyDBInstanceNetworkExpireTimeResponse modifyDBInstanceNetworkExpireTimeWithOptions(const Models::ModifyDBInstanceNetworkExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置实例网络链接过期时间
       *
       * @param request ModifyDBInstanceNetworkExpireTimeRequest
       * @return ModifyDBInstanceNetworkExpireTimeResponse
       */
      Models::ModifyDBInstanceNetworkExpireTimeResponse modifyDBInstanceNetworkExpireTime(const Models::ModifyDBInstanceNetworkExpireTimeRequest &request);

      /**
       * @summary 将网络类型为经典网络的RDS实例转换为专有网络
       *
       * @param request ModifyDBInstanceNetworkTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceNetworkTypeResponse
       */
      Models::ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkTypeWithOptions(const Models::ModifyDBInstanceNetworkTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将网络类型为经典网络的RDS实例转换为专有网络
       *
       * @param request ModifyDBInstanceNetworkTypeRequest
       * @return ModifyDBInstanceNetworkTypeResponse
       */
      Models::ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkType(const Models::ModifyDBInstanceNetworkTypeRequest &request);

      /**
       * @summary 变更实例计费方式
       *
       * @param request ModifyDBInstancePayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstancePayTypeResponse
       */
      Models::ModifyDBInstancePayTypeResponse modifyDBInstancePayTypeWithOptions(const Models::ModifyDBInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更实例计费方式
       *
       * @param request ModifyDBInstancePayTypeRequest
       * @return ModifyDBInstancePayTypeResponse
       */
      Models::ModifyDBInstancePayTypeResponse modifyDBInstancePayType(const Models::ModifyDBInstancePayTypeRequest &request);

      /**
       * @summary Enables or disables the native replication feature of ApsaraDB RDS for MySQL.
       *
       * @param request ModifyDBInstanceReplicationSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceReplicationSwitchResponse
       */
      Models::ModifyDBInstanceReplicationSwitchResponse modifyDBInstanceReplicationSwitchWithOptions(const Models::ModifyDBInstanceReplicationSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the native replication feature of ApsaraDB RDS for MySQL.
       *
       * @param request ModifyDBInstanceReplicationSwitchRequest
       * @return ModifyDBInstanceReplicationSwitchResponse
       */
      Models::ModifyDBInstanceReplicationSwitchResponse modifyDBInstanceReplicationSwitch(const Models::ModifyDBInstanceReplicationSwitchRequest &request);

      /**
       * @summary 设置实例访问链路支持SSL加密
       *
       * @param request ModifyDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSSLResponse
       */
      Models::ModifyDBInstanceSSLResponse modifyDBInstanceSSLWithOptions(const Models::ModifyDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置实例访问链路支持SSL加密
       *
       * @param request ModifyDBInstanceSSLRequest
       * @return ModifyDBInstanceSSLResponse
       */
      Models::ModifyDBInstanceSSLResponse modifyDBInstanceSSL(const Models::ModifyDBInstanceSSLRequest &request);

      /**
       * @summary 修改实例主机安全组规则
       *
       * @param request ModifyDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSecurityGroupRuleResponse
       */
      Models::ModifyDBInstanceSecurityGroupRuleResponse modifyDBInstanceSecurityGroupRuleWithOptions(const Models::ModifyDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例主机安全组规则
       *
       * @param request ModifyDBInstanceSecurityGroupRuleRequest
       * @return ModifyDBInstanceSecurityGroupRuleResponse
       */
      Models::ModifyDBInstanceSecurityGroupRuleResponse modifyDBInstanceSecurityGroupRule(const Models::ModifyDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary 数据库实例变更配置
       *
       * @param tmpReq ModifyDBInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSpecResponse
       */
      Models::ModifyDBInstanceSpecResponse modifyDBInstanceSpecWithOptions(const Models::ModifyDBInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据库实例变更配置
       *
       * @param request ModifyDBInstanceSpecRequest
       * @return ModifyDBInstanceSpecResponse
       */
      Models::ModifyDBInstanceSpecResponse modifyDBInstanceSpec(const Models::ModifyDBInstanceSpecRequest &request);

      /**
       * @summary 设置RDS实例开启透明传输加密
       *
       * @param request ModifyDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceTDEResponse
       */
      Models::ModifyDBInstanceTDEResponse modifyDBInstanceTDEWithOptions(const Models::ModifyDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置RDS实例开启透明传输加密
       *
       * @param request ModifyDBInstanceTDERequest
       * @return ModifyDBInstanceTDEResponse
       */
      Models::ModifyDBInstanceTDEResponse modifyDBInstanceTDE(const Models::ModifyDBInstanceTDERequest &request);

      /**
       * @summary Enable or disable the vector storage toggle for a MySQL instance.
       *
       * @description ### Supported Engine
       * - RDS MySQL
       * ### Related Function Documentation
       * >Notice: Before invoking this API, carefully read the Function Documentation to fully understand the prerequisites and the Impact of using this API, and then perform the operation.
       * - [RDS MySQL Vector Storage](https://help.aliyun.com/document_detail/2998661.html)
       *
       * @param request ModifyDBInstanceVectorSupportStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceVectorSupportStatusResponse
       */
      Models::ModifyDBInstanceVectorSupportStatusResponse modifyDBInstanceVectorSupportStatusWithOptions(const Models::ModifyDBInstanceVectorSupportStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable or disable the vector storage toggle for a MySQL instance.
       *
       * @description ### Supported Engine
       * - RDS MySQL
       * ### Related Function Documentation
       * >Notice: Before invoking this API, carefully read the Function Documentation to fully understand the prerequisites and the Impact of using this API, and then perform the operation.
       * - [RDS MySQL Vector Storage](https://help.aliyun.com/document_detail/2998661.html)
       *
       * @param request ModifyDBInstanceVectorSupportStatusRequest
       * @return ModifyDBInstanceVectorSupportStatusResponse
       */
      Models::ModifyDBInstanceVectorSupportStatusResponse modifyDBInstanceVectorSupportStatus(const Models::ModifyDBInstanceVectorSupportStatusRequest &request);

      /**
       * @summary category cluster modify node class
       *
       * @param tmpReq ModifyDBNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeResponse
       */
      Models::ModifyDBNodeResponse modifyDBNodeWithOptions(const Models::ModifyDBNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary category cluster modify node class
       *
       * @param request ModifyDBNodeRequest
       * @return ModifyDBNodeResponse
       */
      Models::ModifyDBNodeResponse modifyDBNode(const Models::ModifyDBNodeRequest &request);

      /**
       * @summary 修改RDS实例的数据库代理功能
       *
       * @param tmpReq ModifyDBProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyResponse
       */
      Models::ModifyDBProxyResponse modifyDBProxyWithOptions(const Models::ModifyDBProxyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS实例的数据库代理功能
       *
       * @param request ModifyDBProxyRequest
       * @return ModifyDBProxyResponse
       */
      Models::ModifyDBProxyResponse modifyDBProxy(const Models::ModifyDBProxyRequest &request);

      /**
       * @summary Modifies the connection settings for a database proxy endpoint.
       *
       * @param request ModifyDBProxyEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyEndpointResponse
       */
      Models::ModifyDBProxyEndpointResponse modifyDBProxyEndpointWithOptions(const Models::ModifyDBProxyEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the connection settings for a database proxy endpoint.
       *
       * @param request ModifyDBProxyEndpointRequest
       * @return ModifyDBProxyEndpointResponse
       */
      Models::ModifyDBProxyEndpointResponse modifyDBProxyEndpoint(const Models::ModifyDBProxyEndpointRequest &request);

      /**
       * @summary 修改RDS实例数据库代理的连接地址
       *
       * @param request ModifyDBProxyEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyEndpointAddressResponse
       */
      Models::ModifyDBProxyEndpointAddressResponse modifyDBProxyEndpointAddressWithOptions(const Models::ModifyDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS实例数据库代理的连接地址
       *
       * @param request ModifyDBProxyEndpointAddressRequest
       * @return ModifyDBProxyEndpointAddressResponse
       */
      Models::ModifyDBProxyEndpointAddressResponse modifyDBProxyEndpointAddress(const Models::ModifyDBProxyEndpointAddressRequest &request);

      /**
       * @summary 修改RDS实例数据库代理的代理数量
       *
       * @param tmpReq ModifyDBProxyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyInstanceResponse
       */
      Models::ModifyDBProxyInstanceResponse modifyDBProxyInstanceWithOptions(const Models::ModifyDBProxyInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS实例数据库代理的代理数量
       *
       * @param request ModifyDBProxyInstanceRequest
       * @return ModifyDBProxyInstanceResponse
       */
      Models::ModifyDBProxyInstanceResponse modifyDBProxyInstance(const Models::ModifyDBProxyInstanceRequest &request);

      /**
       * @summary SQLServer实例修改DTC主机安全IP
       *
       * @param request ModifyDTCSecurityIpHostsForSQLServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDTCSecurityIpHostsForSQLServerResponse
       */
      Models::ModifyDTCSecurityIpHostsForSQLServerResponse modifyDTCSecurityIpHostsForSQLServerWithOptions(const Models::ModifyDTCSecurityIpHostsForSQLServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SQLServer实例修改DTC主机安全IP
       *
       * @param request ModifyDTCSecurityIpHostsForSQLServerRequest
       * @return ModifyDTCSecurityIpHostsForSQLServerResponse
       */
      Models::ModifyDTCSecurityIpHostsForSQLServerResponse modifyDTCSecurityIpHostsForSQLServer(const Models::ModifyDTCSecurityIpHostsForSQLServerRequest &request);

      /**
       * @summary 设置实例存储空间自动扩容
       *
       * @param request ModifyDasInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDasInstanceConfigResponse
       */
      Models::ModifyDasInstanceConfigResponse modifyDasInstanceConfigWithOptions(const Models::ModifyDasInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置实例存储空间自动扩容
       *
       * @param request ModifyDasInstanceConfigRequest
       * @return ModifyDasInstanceConfigResponse
       */
      Models::ModifyDasInstanceConfigResponse modifyDasInstanceConfig(const Models::ModifyDasInstanceConfigRequest &request);

      /**
       * @summary 修改数据库属性
       *
       * @param request ModifyDatabaseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatabaseConfigResponse
       */
      Models::ModifyDatabaseConfigResponse modifyDatabaseConfigWithOptions(const Models::ModifyDatabaseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改数据库属性
       *
       * @param request ModifyDatabaseConfigRequest
       * @return ModifyDatabaseConfigResponse
       */
      Models::ModifyDatabaseConfigResponse modifyDatabaseConfig(const Models::ModifyDatabaseConfigRequest &request);

      /**
       * @summary 设置RDS实例数据库代理连接地址SSL加密
       *
       * @param request ModifyDbProxyInstanceSslRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDbProxyInstanceSslResponse
       */
      Models::ModifyDbProxyInstanceSslResponse modifyDbProxyInstanceSslWithOptions(const Models::ModifyDbProxyInstanceSslRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置RDS实例数据库代理连接地址SSL加密
       *
       * @param request ModifyDbProxyInstanceSslRequest
       * @return ModifyDbProxyInstanceSslResponse
       */
      Models::ModifyDbProxyInstanceSslResponse modifyDbProxyInstanceSsl(const Models::ModifyDbProxyInstanceSslRequest &request);

      /**
       * @summary 事件中心修改事件信息
       *
       * @param request ModifyEventInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventInfoResponse
       */
      Models::ModifyEventInfoResponse modifyEventInfoWithOptions(const Models::ModifyEventInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 事件中心修改事件信息
       *
       * @param request ModifyEventInfoRequest
       * @return ModifyEventInfoResponse
       */
      Models::ModifyEventInfoResponse modifyEventInfo(const Models::ModifyEventInfoRequest &request);

      /**
       * @summary 修改RDS实例的可用性检测方式
       *
       * @param request ModifyHADiagnoseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHADiagnoseConfigResponse
       */
      Models::ModifyHADiagnoseConfigResponse modifyHADiagnoseConfigWithOptions(const Models::ModifyHADiagnoseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS实例的可用性检测方式
       *
       * @param request ModifyHADiagnoseConfigRequest
       * @return ModifyHADiagnoseConfigResponse
       */
      Models::ModifyHADiagnoseConfigResponse modifyHADiagnoseConfig(const Models::ModifyHADiagnoseConfigRequest &request);

      /**
       * @summary 开启或关闭RDS实例的主备自动切换功能
       *
       * @param request ModifyHASwitchConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHASwitchConfigResponse
       */
      Models::ModifyHASwitchConfigResponse modifyHASwitchConfigWithOptions(const Models::ModifyHASwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启或关闭RDS实例的主备自动切换功能
       *
       * @param request ModifyHASwitchConfigRequest
       * @return ModifyHASwitchConfigResponse
       */
      Models::ModifyHASwitchConfigResponse modifyHASwitchConfig(const Models::ModifyHASwitchConfigRequest &request);

      /**
       * @summary Modify a Data Import Job for an RDS MySQL Instance with Native Replication
       *
       * @description Modifies a data import job for an RDS MySQL instance with native replication.
       *
       * @param request ModifyImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImportTaskResponse
       */
      Models::ModifyImportTaskResponse modifyImportTaskWithOptions(const Models::ModifyImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify a Data Import Job for an RDS MySQL Instance with Native Replication
       *
       * @description Modifies a data import job for an RDS MySQL instance with native replication.
       *
       * @param request ModifyImportTaskRequest
       * @return ModifyImportTaskResponse
       */
      Models::ModifyImportTaskResponse modifyImportTask(const Models::ModifyImportTaskRequest &request);

      /**
       * @summary 修改设置实例是否自动续费
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttributeWithOptions(const Models::ModifyInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改设置实例是否自动续费
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttribute(const Models::ModifyInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary 修改RDS跨地域备份设置
       *
       * @param request ModifyInstanceCrossBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceCrossBackupPolicyResponse
       */
      Models::ModifyInstanceCrossBackupPolicyResponse modifyInstanceCrossBackupPolicyWithOptions(const Models::ModifyInstanceCrossBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS跨地域备份设置
       *
       * @param request ModifyInstanceCrossBackupPolicyRequest
       * @return ModifyInstanceCrossBackupPolicyResponse
       */
      Models::ModifyInstanceCrossBackupPolicyResponse modifyInstanceCrossBackupPolicy(const Models::ModifyInstanceCrossBackupPolicyRequest &request);

      /**
       * @summary Modifies the encryption or desensitization rule for a specified instance.
       *
       * @description ## Request description
       * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
       *
       * @param tmpReq ModifyMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaskingRulesResponse
       */
      Models::ModifyMaskingRulesResponse modifyMaskingRulesWithOptions(const Models::ModifyMaskingRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the encryption or desensitization rule for a specified instance.
       *
       * @description ## Request description
       * - Before using this API, ensure that you have enabled the column encryption service in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking the API, go to the DAS (Database Autonomy Service) Security Center to purchase and enable the column encryption service before using it again.
       *
       * @param request ModifyMaskingRulesRequest
       * @return ModifyMaskingRulesResponse
       */
      Models::ModifyMaskingRulesResponse modifyMaskingRules(const Models::ModifyMaskingRulesRequest &request);

      /**
       * @summary 修改PostgreSQL数据库的HBA配置文件
       *
       * @param request ModifyPGHbaConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPGHbaConfigResponse
       */
      Models::ModifyPGHbaConfigResponse modifyPGHbaConfigWithOptions(const Models::ModifyPGHbaConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改PostgreSQL数据库的HBA配置文件
       *
       * @param request ModifyPGHbaConfigRequest
       * @return ModifyPGHbaConfigResponse
       */
      Models::ModifyPGHbaConfigResponse modifyPGHbaConfig(const Models::ModifyPGHbaConfigRequest &request);

      /**
       * @summary 修改数据库参数
       *
       * @param request ModifyParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterResponse
       */
      Models::ModifyParameterResponse modifyParameterWithOptions(const Models::ModifyParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改数据库参数
       *
       * @param request ModifyParameterRequest
       * @return ModifyParameterResponse
       */
      Models::ModifyParameterResponse modifyParameter(const Models::ModifyParameterRequest &request);

      /**
       * @summary 修改RDS参数模板
       *
       * @param request ModifyParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterGroupResponse
       */
      Models::ModifyParameterGroupResponse modifyParameterGroupWithOptions(const Models::ModifyParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS参数模板
       *
       * @param request ModifyParameterGroupRequest
       * @return ModifyParameterGroupResponse
       */
      Models::ModifyParameterGroupResponse modifyParameterGroup(const Models::ModifyParameterGroupRequest &request);

      /**
       * @summary Modify the effective period in a scheduled task for parameter modification
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites and potential Impact of using this API before performing any operation.
       * - [Configure instance parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
       * - [Configure instance parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request ModifyParameterTimedScheduleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterTimedScheduleTaskResponse
       */
      Models::ModifyParameterTimedScheduleTaskResponse modifyParameterTimedScheduleTaskWithOptions(const Models::ModifyParameterTimedScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the effective period in a scheduled task for parameter modification
       *
       * @description ### Supported Engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related Function Documentation
       * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites and potential Impact of using this API before performing any operation.
       * - [Configure instance parameters for RDS MySQL](https://help.aliyun.com/document_detail/96063.html)
       * - [Configure instance parameters for RDS PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request ModifyParameterTimedScheduleTaskRequest
       * @return ModifyParameterTimedScheduleTaskResponse
       */
      Models::ModifyParameterTimedScheduleTaskResponse modifyParameterTimedScheduleTask(const Models::ModifyParameterTimedScheduleTaskRequest &request);

      /**
       * @summary 修改部署集的名称和描述信息
       *
       * @param request ModifyRCDeploymentSetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCDeploymentSetAttributeResponse
       */
      Models::ModifyRCDeploymentSetAttributeResponse modifyRCDeploymentSetAttributeWithOptions(const Models::ModifyRCDeploymentSetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改部署集的名称和描述信息
       *
       * @param request ModifyRCDeploymentSetAttributeRequest
       * @return ModifyRCDeploymentSetAttributeResponse
       */
      Models::ModifyRCDeploymentSetAttributeResponse modifyRCDeploymentSetAttribute(const Models::ModifyRCDeploymentSetAttributeRequest &request);

      /**
       * @summary Modify the name, description, whether to release with the instance, whether to delete automatic snapshots when the disk is deleted, whether to enable the automatic snapshot policy, and whether to enable the performance burst feature for an Elastic Block Storage device.
       *
       * @description You can invoke the DiskId parameter to modify properties of an Elastic Block Storage device, such as its name, description, and whether it is released with the instance.
       *
       * @param request ModifyRCDiskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCDiskAttributeResponse
       */
      Models::ModifyRCDiskAttributeResponse modifyRCDiskAttributeWithOptions(const Models::ModifyRCDiskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the name, description, whether to release with the instance, whether to delete automatic snapshots when the disk is deleted, whether to enable the automatic snapshot policy, and whether to enable the performance burst feature for an Elastic Block Storage device.
       *
       * @description You can invoke the DiskId parameter to modify properties of an Elastic Block Storage device, such as its name, description, and whether it is released with the instance.
       *
       * @param request ModifyRCDiskAttributeRequest
       * @return ModifyRCDiskAttributeResponse
       */
      Models::ModifyRCDiskAttributeResponse modifyRCDiskAttribute(const Models::ModifyRCDiskAttributeRequest &request);

      /**
       * @summary 修改RDS用户磁盘付费类型
       *
       * @param request ModifyRCDiskChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCDiskChargeTypeResponse
       */
      Models::ModifyRCDiskChargeTypeResponse modifyRCDiskChargeTypeWithOptions(const Models::ModifyRCDiskChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS用户磁盘付费类型
       *
       * @param request ModifyRCDiskChargeTypeRequest
       * @return ModifyRCDiskChargeTypeResponse
       */
      Models::ModifyRCDiskChargeTypeResponse modifyRCDiskChargeType(const Models::ModifyRCDiskChargeTypeRequest &request);

      /**
       * @summary 变更云盘类型或性能级别
       *
       * @param request ModifyRCDiskSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCDiskSpecResponse
       */
      Models::ModifyRCDiskSpecResponse modifyRCDiskSpecWithOptions(const Models::ModifyRCDiskSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更云盘类型或性能级别
       *
       * @param request ModifyRCDiskSpecRequest
       * @return ModifyRCDiskSpecResponse
       */
      Models::ModifyRCDiskSpecResponse modifyRCDiskSpec(const Models::ModifyRCDiskSpecRequest &request);

      /**
       * @summary 查询RDS用户专属主机实例
       *
       * @param request ModifyRCElasticScalingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCElasticScalingResponse
       */
      Models::ModifyRCElasticScalingResponse modifyRCElasticScalingWithOptions(const Models::ModifyRCElasticScalingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS用户专属主机实例
       *
       * @param request ModifyRCElasticScalingRequest
       * @return ModifyRCElasticScalingResponse
       */
      Models::ModifyRCElasticScalingResponse modifyRCElasticScaling(const Models::ModifyRCElasticScalingRequest &request);

      /**
       * @summary ModifyRCInstance
       *
       * @description Before using this API, ensure that you fully understand the metering method, Pricing, and refund rules for decreasing the quota of RDS Custom instances.
       * When invoking this API, note the following:
       * - You cannot modify the instance type of an expired instance. You can renew the instance and try again.
       * - Only **Standard Edition disk instances** support changing the instance type.
       * - When upgrading or decreasing the quota of the instance type, note the following:
       *   - The instance must be in the **running** (Running) or **stopped** (Stopped) status.
       *   - The price difference between the original and new instance types will be refunded to your original payment method. Coupons already used will not be returned.
       *
       * @param request ModifyRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceResponse
       */
      Models::ModifyRCInstanceResponse modifyRCInstanceWithOptions(const Models::ModifyRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyRCInstance
       *
       * @description Before using this API, ensure that you fully understand the metering method, Pricing, and refund rules for decreasing the quota of RDS Custom instances.
       * When invoking this API, note the following:
       * - You cannot modify the instance type of an expired instance. You can renew the instance and try again.
       * - Only **Standard Edition disk instances** support changing the instance type.
       * - When upgrading or decreasing the quota of the instance type, note the following:
       *   - The instance must be in the **running** (Running) or **stopped** (Stopped) status.
       *   - The price difference between the original and new instance types will be refunded to your original payment method. Coupons already used will not be returned.
       *
       * @param request ModifyRCInstanceRequest
       * @return ModifyRCInstanceResponse
       */
      Models::ModifyRCInstanceResponse modifyRCInstance(const Models::ModifyRCInstanceRequest &request);

      /**
       * @summary 修改rds custom实例的部分属性
       *
       * @param tmpReq ModifyRCInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceAttributeResponse
       */
      Models::ModifyRCInstanceAttributeResponse modifyRCInstanceAttributeWithOptions(const Models::ModifyRCInstanceAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改rds custom实例的部分属性
       *
       * @param request ModifyRCInstanceAttributeRequest
       * @return ModifyRCInstanceAttributeResponse
       */
      Models::ModifyRCInstanceAttributeResponse modifyRCInstanceAttribute(const Models::ModifyRCInstanceAttributeRequest &request);

      /**
       * @summary 修改RDS用户专属主机实例付费类型
       *
       * @param request ModifyRCInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceChargeTypeResponse
       */
      Models::ModifyRCInstanceChargeTypeResponse modifyRCInstanceChargeTypeWithOptions(const Models::ModifyRCInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS用户专属主机实例付费类型
       *
       * @param request ModifyRCInstanceChargeTypeRequest
       * @return ModifyRCInstanceChargeTypeResponse
       */
      Models::ModifyRCInstanceChargeTypeResponse modifyRCInstanceChargeType(const Models::ModifyRCInstanceChargeTypeRequest &request);

      /**
       * @summary 修改RC实例描述
       *
       * @param request ModifyRCInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceDescriptionResponse
       */
      Models::ModifyRCInstanceDescriptionResponse modifyRCInstanceDescriptionWithOptions(const Models::ModifyRCInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RC实例描述
       *
       * @param request ModifyRCInstanceDescriptionRequest
       * @return ModifyRCInstanceDescriptionResponse
       */
      Models::ModifyRCInstanceDescriptionResponse modifyRCInstanceDescription(const Models::ModifyRCInstanceDescriptionRequest &request);

      /**
       * @summary 修改RDS Custom实例密钥对
       *
       * @param request ModifyRCInstanceKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceKeyPairResponse
       */
      Models::ModifyRCInstanceKeyPairResponse modifyRCInstanceKeyPairWithOptions(const Models::ModifyRCInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS Custom实例密钥对
       *
       * @param request ModifyRCInstanceKeyPairRequest
       * @return ModifyRCInstanceKeyPairResponse
       */
      Models::ModifyRCInstanceKeyPairResponse modifyRCInstanceKeyPair(const Models::ModifyRCInstanceKeyPairRequest &request);

      /**
       * @summary 修改RDS Custom实例的公网配置
       *
       * @param request ModifyRCInstanceNetworkSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceNetworkSpecResponse
       */
      Models::ModifyRCInstanceNetworkSpecResponse modifyRCInstanceNetworkSpecWithOptions(const Models::ModifyRCInstanceNetworkSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS Custom实例的公网配置
       *
       * @param request ModifyRCInstanceNetworkSpecRequest
       * @return ModifyRCInstanceNetworkSpecResponse
       */
      Models::ModifyRCInstanceNetworkSpecResponse modifyRCInstanceNetworkSpec(const Models::ModifyRCInstanceNetworkSpecRequest &request);

      /**
       * @summary 修改RC实例安全组
       *
       * @param request ModifyRCInstanceVpcAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceVpcAttributeResponse
       */
      Models::ModifyRCInstanceVpcAttributeResponse modifyRCInstanceVpcAttributeWithOptions(const Models::ModifyRCInstanceVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RC实例安全组
       *
       * @param request ModifyRCInstanceVpcAttributeRequest
       * @return ModifyRCInstanceVpcAttributeResponse
       */
      Models::ModifyRCInstanceVpcAttributeResponse modifyRCInstanceVpcAttribute(const Models::ModifyRCInstanceVpcAttributeRequest &request);

      /**
       * @summary 修改RC安全组规则
       *
       * @param request ModifyRCSecurityGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCSecurityGroupPermissionResponse
       */
      Models::ModifyRCSecurityGroupPermissionResponse modifyRCSecurityGroupPermissionWithOptions(const Models::ModifyRCSecurityGroupPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RC安全组规则
       *
       * @param request ModifyRCSecurityGroupPermissionRequest
       * @return ModifyRCSecurityGroupPermissionResponse
       */
      Models::ModifyRCSecurityGroupPermissionResponse modifyRCSecurityGroupPermission(const Models::ModifyRCSecurityGroupPermissionRequest &request);

      /**
       * @summary 修改RCVCluster
       *
       * @param tmpReq ModifyRCVClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCVClusterResponse
       */
      Models::ModifyRCVClusterResponse modifyRCVClusterWithOptions(const Models::ModifyRCVClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RCVCluster
       *
       * @param request ModifyRCVClusterRequest
       * @return ModifyRCVClusterResponse
       */
      Models::ModifyRCVClusterResponse modifyRCVCluster(const Models::ModifyRCVClusterRequest &request);

      /**
       * @summary 修改读写分离地址
       *
       * @param request ModifyReadWriteSplittingConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReadWriteSplittingConnectionResponse
       */
      Models::ModifyReadWriteSplittingConnectionResponse modifyReadWriteSplittingConnectionWithOptions(const Models::ModifyReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改读写分离地址
       *
       * @param request ModifyReadWriteSplittingConnectionRequest
       * @return ModifyReadWriteSplittingConnectionResponse
       */
      Models::ModifyReadWriteSplittingConnectionResponse modifyReadWriteSplittingConnection(const Models::ModifyReadWriteSplittingConnectionRequest &request);

      /**
       * @summary 设置只读实例延迟复制时间
       *
       * @param request ModifyReadonlyInstanceDelayReplicationTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReadonlyInstanceDelayReplicationTimeResponse
       */
      Models::ModifyReadonlyInstanceDelayReplicationTimeResponse modifyReadonlyInstanceDelayReplicationTimeWithOptions(const Models::ModifyReadonlyInstanceDelayReplicationTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置只读实例延迟复制时间
       *
       * @param request ModifyReadonlyInstanceDelayReplicationTimeRequest
       * @return ModifyReadonlyInstanceDelayReplicationTimeResponse
       */
      Models::ModifyReadonlyInstanceDelayReplicationTimeResponse modifyReadonlyInstanceDelayReplicationTime(const Models::ModifyReadonlyInstanceDelayReplicationTimeRequest &request);

      /**
       * @summary 将RDS实例移动到指定资源组
       *
       * @param request ModifyResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroupWithOptions(const Models::ModifyResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将RDS实例移动到指定资源组
       *
       * @param request ModifyResourceGroupRequest
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroup(const Models::ModifyResourceGroupRequest &request);

      /**
       * @summary 修改SQL收集策略
       *
       * @param request ModifySQLCollectorPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySQLCollectorPolicyResponse
       */
      Models::ModifySQLCollectorPolicyResponse modifySQLCollectorPolicyWithOptions(const Models::ModifySQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改SQL收集策略
       *
       * @param request ModifySQLCollectorPolicyRequest
       * @return ModifySQLCollectorPolicyResponse
       */
      Models::ModifySQLCollectorPolicyResponse modifySQLCollectorPolicy(const Models::ModifySQLCollectorPolicyRequest &request);

      /**
       * @summary 修改RDS实例的SQL洞察日志保存时长
       *
       * @param request ModifySQLCollectorRetentionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySQLCollectorRetentionResponse
       */
      Models::ModifySQLCollectorRetentionResponse modifySQLCollectorRetentionWithOptions(const Models::ModifySQLCollectorRetentionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS实例的SQL洞察日志保存时长
       *
       * @param request ModifySQLCollectorRetentionRequest
       * @return ModifySQLCollectorRetentionResponse
       */
      Models::ModifySQLCollectorRetentionResponse modifySQLCollectorRetention(const Models::ModifySQLCollectorRetentionRequest &request);

      /**
       * @summary 修改RDS实例的安全组配置
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfigurationWithOptions(const Models::ModifySecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS实例的安全组配置
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfiguration(const Models::ModifySecurityGroupConfigurationRequest &request);

      /**
       * @summary 修改RDS的白名单列表
       *
       * @param request ModifySecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIpsWithOptions(const Models::ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS的白名单列表
       *
       * @param request ModifySecurityIpsRequest
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIps(const Models::ModifySecurityIpsRequest &request);

      /**
       * @summary 任务中心修改任务信息
       *
       * @param request ModifyTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfoWithOptions(const Models::ModifyTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务中心修改任务信息
       *
       * @param request ModifyTaskInfoRequest
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfo(const Models::ModifyTaskInfoRequest &request);

      /**
       * @summary 修改白名单模板
       *
       * @param request ModifyWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWhitelistTemplateResponse
       */
      Models::ModifyWhitelistTemplateResponse modifyWhitelistTemplateWithOptions(const Models::ModifyWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改白名单模板
       *
       * @param request ModifyWhitelistTemplateRequest
       * @return ModifyWhitelistTemplateResponse
       */
      Models::ModifyWhitelistTemplateResponse modifyWhitelistTemplate(const Models::ModifyWhitelistTemplateRequest &request);

      /**
       * @summary Precheck for deleting a node and creating an order
       *
       * @param tmpReq PreCheckCreateOrderForDeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreCheckCreateOrderForDeleteDBNodesResponse
       */
      Models::PreCheckCreateOrderForDeleteDBNodesResponse preCheckCreateOrderForDeleteDBNodesWithOptions(const Models::PreCheckCreateOrderForDeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Precheck for deleting a node and creating an order
       *
       * @param request PreCheckCreateOrderForDeleteDBNodesRequest
       * @return PreCheckCreateOrderForDeleteDBNodesResponse
       */
      Models::PreCheckCreateOrderForDeleteDBNodesResponse preCheckCreateOrderForDeleteDBNodes(const Models::PreCheckCreateOrderForDeleteDBNodesRequest &request);

      /**
       * @summary Checks whether DuckDB-based analytical instances can be created for the specified RDS for PostgreSQL primary instance. If DuckDB-based analytical instances cannot be created, this operation returns the failure causes and provides solutions or recommended specification values.
       *
       * @description ### 适用引擎
       * RDS PostgreSQL
       * ### 相关功能文档
       * [DuckDB分析实例](https://help.aliyun.com/document_detail/2977241.html)
       *
       * @param request PrecheckDuckDBDependencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrecheckDuckDBDependencyResponse
       */
      Models::PrecheckDuckDBDependencyResponse precheckDuckDBDependencyWithOptions(const Models::PrecheckDuckDBDependencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether DuckDB-based analytical instances can be created for the specified RDS for PostgreSQL primary instance. If DuckDB-based analytical instances cannot be created, this operation returns the failure causes and provides solutions or recommended specification values.
       *
       * @description ### 适用引擎
       * RDS PostgreSQL
       * ### 相关功能文档
       * [DuckDB分析实例](https://help.aliyun.com/document_detail/2977241.html)
       *
       * @param request PrecheckDuckDBDependencyRequest
       * @return PrecheckDuckDBDependencyResponse
       */
      Models::PrecheckDuckDBDependencyResponse precheckDuckDBDependency(const Models::PrecheckDuckDBDependencyRequest &request);

      /**
       * @summary 清理RDS实例本地日志
       *
       * @param request PurgeDBInstanceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurgeDBInstanceLogResponse
       */
      Models::PurgeDBInstanceLogResponse purgeDBInstanceLogWithOptions(const Models::PurgeDBInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清理RDS实例本地日志
       *
       * @param request PurgeDBInstanceLogRequest
       * @return PurgeDBInstanceLogResponse
       */
      Models::PurgeDBInstanceLogResponse purgeDBInstanceLog(const Models::PurgeDBInstanceLogRequest &request);

      /**
       * @summary RDS通知消息查询
       *
       * @param request QueryNotifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryNotifyResponse
       */
      Models::QueryNotifyResponse queryNotifyWithOptions(const Models::QueryNotifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RDS通知消息查询
       *
       * @param request QueryNotifyRequest
       * @return QueryNotifyResponse
       */
      Models::QueryNotifyResponse queryNotify(const Models::QueryNotifyRequest &request);

      /**
       * @summary This API is used to query RDS bot hot spot questions.
       *
       * @param request QueryRecommendByCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecommendByCodeResponse
       */
      Models::QueryRecommendByCodeResponse queryRecommendByCodeWithOptions(const Models::QueryRecommendByCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query RDS bot hot spot questions.
       *
       * @param request QueryRecommendByCodeRequest
       * @return QueryRecommendByCodeResponse
       */
      Models::QueryRecommendByCodeResponse queryRecommendByCode(const Models::QueryRecommendByCodeRequest &request);

      /**
       * @summary 创建服务关联角色和开租
       *
       * @param request RdsCustomInitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RdsCustomInitResponse
       */
      Models::RdsCustomInitResponse rdsCustomInitWithOptions(const Models::RdsCustomInitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建服务关联角色和开租
       *
       * @param request RdsCustomInitRequest
       * @return RdsCustomInitResponse
       */
      Models::RdsCustomInitResponse rdsCustomInit(const Models::RdsCustomInitRequest &request);

      /**
       * @summary 重启RDS用户专属主机实例
       *
       * @param request RebootRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootRCInstanceResponse
       */
      Models::RebootRCInstanceResponse rebootRCInstanceWithOptions(const Models::RebootRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启RDS用户专属主机实例
       *
       * @param request RebootRCInstanceRequest
       * @return RebootRCInstanceResponse
       */
      Models::RebootRCInstanceResponse rebootRCInstance(const Models::RebootRCInstanceRequest &request);

      /**
       * @summary 批量重启RC实例
       *
       * @param tmpReq RebootRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootRCInstancesResponse
       */
      Models::RebootRCInstancesResponse rebootRCInstancesWithOptions(const Models::RebootRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量重启RC实例
       *
       * @param request RebootRCInstancesRequest
       * @return RebootRCInstancesResponse
       */
      Models::RebootRCInstancesResponse rebootRCInstances(const Models::RebootRCInstancesRequest &request);

      /**
       * @summary 重搭备库实例
       *
       * @param request RebuildDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildDBInstanceResponse
       */
      Models::RebuildDBInstanceResponse rebuildDBInstanceWithOptions(const Models::RebuildDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重搭备库实例
       *
       * @param request RebuildDBInstanceRequest
       * @return RebuildDBInstanceResponse
       */
      Models::RebuildDBInstanceResponse rebuildDBInstance(const Models::RebuildDBInstanceRequest &request);

      /**
       * @summary 重建复制链路
       *
       * @param request RebuildReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildReplicationLinkResponse
       */
      Models::RebuildReplicationLinkResponse rebuildReplicationLinkWithOptions(const Models::RebuildReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重建复制链路
       *
       * @param request RebuildReplicationLinkRequest
       * @return RebuildReplicationLinkResponse
       */
      Models::RebuildReplicationLinkResponse rebuildReplicationLink(const Models::RebuildReplicationLinkRequest &request);

      /**
       * @summary 接收实例
       *
       * @param request ReceiveDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReceiveDBInstanceResponse
       */
      Models::ReceiveDBInstanceResponse receiveDBInstanceWithOptions(const Models::ReceiveDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 接收实例
       *
       * @param request ReceiveDBInstanceRequest
       * @return ReceiveDBInstanceResponse
       */
      Models::ReceiveDBInstanceResponse receiveDBInstance(const Models::ReceiveDBInstanceRequest &request);

      /**
       * @summary 恢复数据库实例
       *
       * @param request RecoveryDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoveryDBInstanceResponse
       */
      Models::RecoveryDBInstanceResponse recoveryDBInstanceWithOptions(const Models::RecoveryDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复数据库实例
       *
       * @param request RecoveryDBInstanceRequest
       * @return RecoveryDBInstanceResponse
       */
      Models::RecoveryDBInstanceResponse recoveryDBInstance(const Models::RecoveryDBInstanceRequest &request);

      /**
       * @summary 重新部署实例
       *
       * @param request RedeployRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedeployRCInstanceResponse
       */
      Models::RedeployRCInstanceResponse redeployRCInstanceWithOptions(const Models::RedeployRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新部署实例
       *
       * @param request RedeployRCInstanceRequest
       * @return RedeployRCInstanceResponse
       */
      Models::RedeployRCInstanceResponse redeployRCInstance(const Models::RedeployRCInstanceRequest &request);

      /**
       * @summary 释放实例的链接地址
       *
       * @param request ReleaseInstanceConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceConnectionResponse
       */
      Models::ReleaseInstanceConnectionResponse releaseInstanceConnectionWithOptions(const Models::ReleaseInstanceConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放实例的链接地址
       *
       * @param request ReleaseInstanceConnectionRequest
       * @return ReleaseInstanceConnectionResponse
       */
      Models::ReleaseInstanceConnectionResponse releaseInstanceConnection(const Models::ReleaseInstanceConnectionRequest &request);

      /**
       * @summary 释放RDS实例的公网链接地址
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(const Models::ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放RDS实例的公网链接地址
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(const Models::ReleaseInstancePublicConnectionRequest &request);

      /**
       * @summary Releases the read/write splitting endpoint of an instance.
       *
       * @description ### 适用引擎
       * - RDS MySQL
       * - RDS SQL Server
       * ### 前体条件
       * 调用该接口时，实例必须满足以下条件，否则将操作失败：
       * * MySQL实例使用的是共享代理。
       * * 实例已开通读写分离。
       * * 实例为如下版本：
       *     * MySQL 5.7高可用版（本地SSD盘）
       *     * MySQL 5.6
       *     * SQL Server集群版
       *
       * @param request ReleaseReadWriteSplittingConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseReadWriteSplittingConnectionResponse
       */
      Models::ReleaseReadWriteSplittingConnectionResponse releaseReadWriteSplittingConnectionWithOptions(const Models::ReleaseReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the read/write splitting endpoint of an instance.
       *
       * @description ### 适用引擎
       * - RDS MySQL
       * - RDS SQL Server
       * ### 前体条件
       * 调用该接口时，实例必须满足以下条件，否则将操作失败：
       * * MySQL实例使用的是共享代理。
       * * 实例已开通读写分离。
       * * 实例为如下版本：
       *     * MySQL 5.7高可用版（本地SSD盘）
       *     * MySQL 5.6
       *     * SQL Server集群版
       *
       * @param request ReleaseReadWriteSplittingConnectionRequest
       * @return ReleaseReadWriteSplittingConnectionResponse
       */
      Models::ReleaseReadWriteSplittingConnectionResponse releaseReadWriteSplittingConnection(const Models::ReleaseReadWriteSplittingConnectionRequest &request);

      /**
       * @summary 移除标签
       *
       * @param request RemoveTagsFromResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagsFromResourceResponse
       */
      Models::RemoveTagsFromResourceResponse removeTagsFromResourceWithOptions(const Models::RemoveTagsFromResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除标签
       *
       * @param request RemoveTagsFromResourceRequest
       * @return RemoveTagsFromResourceResponse
       */
      Models::RemoveTagsFromResourceResponse removeTagsFromResource(const Models::RemoveTagsFromResourceRequest &request);

      /**
       * @summary 为RDS实例续费
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为RDS实例续费
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary This API is used to renew a subscription-based RDS Custom instance.
       *
       * @param request RenewRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewRCInstanceResponse
       */
      Models::RenewRCInstanceResponse renewRCInstanceWithOptions(const Models::RenewRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to renew a subscription-based RDS Custom instance.
       *
       * @param request RenewRCInstanceRequest
       * @return RenewRCInstanceResponse
       */
      Models::RenewRCInstanceResponse renewRCInstance(const Models::RenewRCInstanceRequest &request);

      /**
       * @summary Reinstalls the operating system (OS) of an RDS Custom instance.
       *
       * @description - 实例的状态必须为已暂停（Stopped）状态。
       * - 重装系统将丢失原系统盘上的数据，请谨慎操作。
       *
       * @param request ReplaceRCInstanceSystemDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceRCInstanceSystemDiskResponse
       */
      Models::ReplaceRCInstanceSystemDiskResponse replaceRCInstanceSystemDiskWithOptions(const Models::ReplaceRCInstanceSystemDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reinstalls the operating system (OS) of an RDS Custom instance.
       *
       * @description - 实例的状态必须为已暂停（Stopped）状态。
       * - 重装系统将丢失原系统盘上的数据，请谨慎操作。
       *
       * @param request ReplaceRCInstanceSystemDiskRequest
       * @return ReplaceRCInstanceSystemDiskResponse
       */
      Models::ReplaceRCInstanceSystemDiskResponse replaceRCInstanceSystemDisk(const Models::ReplaceRCInstanceSystemDiskRequest &request);

      /**
       * @summary 重置实例的账号密码
       *
       * @param request ResetAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountResponse
       */
      Models::ResetAccountResponse resetAccountWithOptions(const Models::ResetAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置实例的账号密码
       *
       * @param request ResetAccountRequest
       * @return ResetAccountResponse
       */
      Models::ResetAccountResponse resetAccount(const Models::ResetAccountRequest &request);

      /**
       * @summary 重置指定账号的密码
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置指定账号的密码
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary ResizeRCInstanceDisk
       *
       * @description Local disk instances do not support changing storage space.
       *
       * @param request ResizeRCInstanceDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeRCInstanceDiskResponse
       */
      Models::ResizeRCInstanceDiskResponse resizeRCInstanceDiskWithOptions(const Models::ResizeRCInstanceDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ResizeRCInstanceDisk
       *
       * @description Local disk instances do not support changing storage space.
       *
       * @param request ResizeRCInstanceDiskRequest
       * @return ResizeRCInstanceDiskResponse
       */
      Models::ResizeRCInstanceDiskResponse resizeRCInstanceDisk(const Models::ResizeRCInstanceDiskRequest &request);

      /**
       * @summary 重启实例
       *
       * @param request RestartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstanceWithOptions(const Models::RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启实例
       *
       * @param request RestartDBInstanceRequest
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstance(const Models::RestartDBInstanceRequest &request);

      /**
       * @summary 容灾实例库表灰度
       *
       * @param request RestoreDdrTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreDdrTableResponse
       */
      Models::RestoreDdrTableResponse restoreDdrTableWithOptions(const Models::RestoreDdrTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 容灾实例库表灰度
       *
       * @param request RestoreDdrTableRequest
       * @return RestoreDdrTableResponse
       */
      Models::RestoreDdrTableResponse restoreDdrTable(const Models::RestoreDdrTableRequest &request);

      /**
       * @summary 库表恢复
       *
       * @param request RestoreTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreTableResponse
       */
      Models::RestoreTableResponse restoreTableWithOptions(const Models::RestoreTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 库表恢复
       *
       * @param request RestoreTableRequest
       * @return RestoreTableResponse
       */
      Models::RestoreTableResponse restoreTable(const Models::RestoreTableRequest &request);

      /**
       * @summary 撤销账户权限
       *
       * @param request RevokeAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAccountPrivilegeResponse
       */
      Models::RevokeAccountPrivilegeResponse revokeAccountPrivilegeWithOptions(const Models::RevokeAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 撤销账户权限
       *
       * @param request RevokeAccountPrivilegeRequest
       * @return RevokeAccountPrivilegeResponse
       */
      Models::RevokeAccountPrivilegeResponse revokeAccountPrivilege(const Models::RevokeAccountPrivilegeRequest &request);

      /**
       * @summary 撤销操作权限
       *
       * @param request RevokeOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeOperatorPermissionResponse
       */
      Models::RevokeOperatorPermissionResponse revokeOperatorPermissionWithOptions(const Models::RevokeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 撤销操作权限
       *
       * @param request RevokeOperatorPermissionRequest
       * @return RevokeOperatorPermissionResponse
       */
      Models::RevokeOperatorPermissionResponse revokeOperatorPermission(const Models::RevokeOperatorPermissionRequest &request);

      /**
       * @summary Deletes security group rules with the specified IDs.
       *
       * @param tmpReq RevokeRCSecurityGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeRCSecurityGroupPermissionResponse
       */
      Models::RevokeRCSecurityGroupPermissionResponse revokeRCSecurityGroupPermissionWithOptions(const Models::RevokeRCSecurityGroupPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes security group rules with the specified IDs.
       *
       * @param request RevokeRCSecurityGroupPermissionRequest
       * @return RevokeRCSecurityGroupPermissionResponse
       */
      Models::RevokeRCSecurityGroupPermissionResponse revokeRCSecurityGroupPermission(const Models::RevokeRCSecurityGroupPermissionRequest &request);

      /**
       * @summary 创建并执行云助手命令
       *
       * @param tmpReq RunRCCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunRCCommandResponse
       */
      Models::RunRCCommandResponse runRCCommandWithOptions(const Models::RunRCCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建并执行云助手命令
       *
       * @param request RunRCCommandRequest
       * @return RunRCCommandResponse
       */
      Models::RunRCCommandResponse runRCCommand(const Models::RunRCCommandRequest &request);

      /**
       * @summary Invoke the RunRCInstances API and specify parameters such as ImageId, InstanceType, VSwitchId, and SecurityGroupId to create one or more RDS Custom instances.
       *
       * @description - Before creating an RDS Custom instance, submit a ticket to request that your Alibaba Cloud account be added to the whitelist.  
       * - Only subscription-type RDS Custom instances are supported.  
       * - Supported regions include Beijing, Shanghai, Shenzhen, and Hangzhou.
       *
       * @param tmpReq RunRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunRCInstancesResponse
       */
      Models::RunRCInstancesResponse runRCInstancesWithOptions(const Models::RunRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the RunRCInstances API and specify parameters such as ImageId, InstanceType, VSwitchId, and SecurityGroupId to create one or more RDS Custom instances.
       *
       * @description - Before creating an RDS Custom instance, submit a ticket to request that your Alibaba Cloud account be added to the whitelist.  
       * - Only subscription-type RDS Custom instances are supported.  
       * - Supported regions include Beijing, Shanghai, Shenzhen, and Hangzhou.
       *
       * @param request RunRCInstancesRequest
       * @return RunRCInstancesResponse
       */
      Models::RunRCInstancesResponse runRCInstances(const Models::RunRCInstancesRequest &request);

      /**
       * @summary 启动已经停止的RDS实例
       *
       * @param request StartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDBInstanceResponse
       */
      Models::StartDBInstanceResponse startDBInstanceWithOptions(const Models::StartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动已经停止的RDS实例
       *
       * @param request StartDBInstanceRequest
       * @return StartDBInstanceResponse
       */
      Models::StartDBInstanceResponse startDBInstance(const Models::StartDBInstanceRequest &request);

      /**
       * @summary 启动RDS用户专属主机实例
       *
       * @param request StartRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRCInstanceResponse
       */
      Models::StartRCInstanceResponse startRCInstanceWithOptions(const Models::StartRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动RDS用户专属主机实例
       *
       * @param request StartRCInstanceRequest
       * @return StartRCInstanceResponse
       */
      Models::StartRCInstanceResponse startRCInstance(const Models::StartRCInstanceRequest &request);

      /**
       * @summary 批量启动RC实例
       *
       * @param tmpReq StartRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRCInstancesResponse
       */
      Models::StartRCInstancesResponse startRCInstancesWithOptions(const Models::StartRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量启动RC实例
       *
       * @param request StartRCInstancesRequest
       * @return StartRCInstancesResponse
       */
      Models::StartRCInstancesResponse startRCInstances(const Models::StartRCInstancesRequest &request);

      /**
       * @summary 暂停RDS实例，实例处于停机状态
       *
       * @param request StopDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDBInstanceResponse
       */
      Models::StopDBInstanceResponse stopDBInstanceWithOptions(const Models::StopDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停RDS实例，实例处于停机状态
       *
       * @param request StopDBInstanceRequest
       * @return StopDBInstanceResponse
       */
      Models::StopDBInstanceResponse stopDBInstance(const Models::StopDBInstanceRequest &request);

      /**
       * @summary Invoke StopRCInstance to stop a running RDS Custom instance. After the API is successfully invoked, the instance transitions from the Stopping state to the Stopped state.
       *
       * @param request StopRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRCInstanceResponse
       */
      Models::StopRCInstanceResponse stopRCInstanceWithOptions(const Models::StopRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke StopRCInstance to stop a running RDS Custom instance. After the API is successfully invoked, the instance transitions from the Stopping state to the Stopped state.
       *
       * @param request StopRCInstanceRequest
       * @return StopRCInstanceResponse
       */
      Models::StopRCInstanceResponse stopRCInstance(const Models::StopRCInstanceRequest &request);

      /**
       * @summary 批量停止RC实例
       *
       * @param tmpReq StopRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRCInstancesResponse
       */
      Models::StopRCInstancesResponse stopRCInstancesWithOptions(const Models::StopRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量停止RC实例
       *
       * @param request StopRCInstancesRequest
       * @return StopRCInstancesResponse
       */
      Models::StopRCInstancesResponse stopRCInstances(const Models::StopRCInstancesRequest &request);

      /**
       * @summary 切换RDS实例的主备实例
       *
       * @param request SwitchDBInstanceHARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHAWithOptions(const Models::SwitchDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 切换RDS实例的主备实例
       *
       * @param request SwitchDBInstanceHARequest
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHA(const Models::SwitchDBInstanceHARequest &request);

      /**
       * @summary 切换内外网地址，内网地址变为外网地址，外网地址变为内网地址。
       *
       * @param request SwitchDBInstanceNetTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceNetTypeResponse
       */
      Models::SwitchDBInstanceNetTypeResponse switchDBInstanceNetTypeWithOptions(const Models::SwitchDBInstanceNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 切换内外网地址，内网地址变为外网地址，外网地址变为内网地址。
       *
       * @param request SwitchDBInstanceNetTypeRequest
       * @return SwitchDBInstanceNetTypeResponse
       */
      Models::SwitchDBInstanceNetTypeResponse switchDBInstanceNetType(const Models::SwitchDBInstanceNetTypeRequest &request);

      /**
       * @summary 迁移RDS实例的VPC实例
       *
       * @param request SwitchDBInstanceVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceVpcResponse
       */
      Models::SwitchDBInstanceVpcResponse switchDBInstanceVpcWithOptions(const Models::SwitchDBInstanceVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 迁移RDS实例的VPC实例
       *
       * @param request SwitchDBInstanceVpcRequest
       * @return SwitchDBInstanceVpcResponse
       */
      Models::SwitchDBInstanceVpcResponse switchDBInstanceVpc(const Models::SwitchDBInstanceVpcRequest &request);

      /**
       * @summary Zero-downtime major version upgrade traffic switchover for RDS PostgreSQL.
       *
       * @description Applicable engine:  
       * * RDS PostgreSQL
       *
       * @param request SwitchOverMajorVersionUpgradeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchOverMajorVersionUpgradeResponse
       */
      Models::SwitchOverMajorVersionUpgradeResponse switchOverMajorVersionUpgradeWithOptions(const Models::SwitchOverMajorVersionUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Zero-downtime major version upgrade traffic switchover for RDS PostgreSQL.
       *
       * @description Applicable engine:  
       * * RDS PostgreSQL
       *
       * @param request SwitchOverMajorVersionUpgradeRequest
       * @return SwitchOverMajorVersionUpgradeResponse
       */
      Models::SwitchOverMajorVersionUpgradeResponse switchOverMajorVersionUpgrade(const Models::SwitchOverMajorVersionUpgradeRequest &request);

      /**
       * @summary Switches the data synchronization link to synchronize data from a disaster recovery (DR) instance to the primary ApsaraDB RDS for SQL Server instance.
       *
       * @param request SwitchReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchReplicationLinkResponse
       */
      Models::SwitchReplicationLinkResponse switchReplicationLinkWithOptions(const Models::SwitchReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the data synchronization link to synchronize data from a disaster recovery (DR) instance to the primary ApsaraDB RDS for SQL Server instance.
       *
       * @param request SwitchReplicationLinkRequest
       * @return SwitchReplicationLinkResponse
       */
      Models::SwitchReplicationLinkResponse switchReplicationLink(const Models::SwitchReplicationLinkRequest &request);

      /**
       * @summary 同步密钥对
       *
       * @param request SyncRCKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncRCKeyPairResponse
       */
      Models::SyncRCKeyPairResponse syncRCKeyPairWithOptions(const Models::SyncRCKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步密钥对
       *
       * @param request SyncRCKeyPairRequest
       * @return SyncRCKeyPairResponse
       */
      Models::SyncRCKeyPairResponse syncRCKeyPair(const Models::SyncRCKeyPairRequest &request);

      /**
       * @summary 同步RDS Custom的安全组
       *
       * @param request SyncRCSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncRCSecurityGroupResponse
       */
      Models::SyncRCSecurityGroupResponse syncRCSecurityGroupWithOptions(const Models::SyncRCSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步RDS Custom的安全组
       *
       * @param request SyncRCSecurityGroupRequest
       * @return SyncRCSecurityGroupResponse
       */
      Models::SyncRCSecurityGroupResponse syncRCSecurityGroup(const Models::SyncRCSecurityGroupRequest &request);

      /**
       * @summary 为RDS资源绑定标签
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为RDS资源绑定标签
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 终止迁移任务
       *
       * @param request TerminateMigrateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateMigrateTaskResponse
       */
      Models::TerminateMigrateTaskResponse terminateMigrateTaskWithOptions(const Models::TerminateMigrateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 终止迁移任务
       *
       * @param request TerminateMigrateTaskRequest
       * @return TerminateMigrateTaskResponse
       */
      Models::TerminateMigrateTaskResponse terminateMigrateTask(const Models::TerminateMigrateTaskRequest &request);

      /**
       * @summary 变更RDS实例的计费方式
       *
       * @param request TransformDBInstancePayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformDBInstancePayTypeResponse
       */
      Models::TransformDBInstancePayTypeResponse transformDBInstancePayTypeWithOptions(const Models::TransformDBInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更RDS实例的计费方式
       *
       * @param request TransformDBInstancePayTypeRequest
       * @return TransformDBInstancePayTypeResponse
       */
      Models::TransformDBInstancePayTypeResponse transformDBInstancePayType(const Models::TransformDBInstancePayTypeRequest &request);

      /**
       * @summary 解绑RDS Custom实例的弹性公网
       *
       * @param request UnassociateEipAddressWithRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateEipAddressWithRCInstanceResponse
       */
      Models::UnassociateEipAddressWithRCInstanceResponse unassociateEipAddressWithRCInstanceWithOptions(const Models::UnassociateEipAddressWithRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑RDS Custom实例的弹性公网
       *
       * @param request UnassociateEipAddressWithRCInstanceRequest
       * @return UnassociateEipAddressWithRCInstanceResponse
       */
      Models::UnassociateEipAddressWithRCInstanceResponse unassociateEipAddressWithRCInstance(const Models::UnassociateEipAddressWithRCInstanceRequest &request);

      /**
       * @summary 解锁RDS实例的账号
       *
       * @param request UnlockAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockAccountResponse
       */
      Models::UnlockAccountResponse unlockAccountWithOptions(const Models::UnlockAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解锁RDS实例的账号
       *
       * @param request UnlockAccountRequest
       * @return UnlockAccountResponse
       */
      Models::UnlockAccountResponse unlockAccount(const Models::UnlockAccountRequest &request);

      /**
       * @summary 解除指定资源的标签
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解除指定资源的标签
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Update replication channel for a native replication instance
       *
       * @description ### Supported Engine  
       * RDS MySQL  
       * ### Related Function Documentation  
       * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
       *
       * @param request UpdateDBInstanceReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDBInstanceReplicationResponse
       */
      Models::UpdateDBInstanceReplicationResponse updateDBInstanceReplicationWithOptions(const Models::UpdateDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update replication channel for a native replication instance
       *
       * @description ### Supported Engine  
       * RDS MySQL  
       * ### Related Function Documentation  
       * >Notice: Before using this API, carefully read the Function Documentation to fully understand the prerequisites for using the API and the Impact of its use before performing any operation.
       *
       * @param request UpdateDBInstanceReplicationRequest
       * @return UpdateDBInstanceReplicationResponse
       */
      Models::UpdateDBInstanceReplicationResponse updateDBInstanceReplication(const Models::UpdateDBInstanceReplicationRequest &request);

      /**
       * @summary 更新插件版本
       *
       * @param request UpdatePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostgresExtensionsResponse
       */
      Models::UpdatePostgresExtensionsResponse updatePostgresExtensionsWithOptions(const Models::UpdatePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新插件版本
       *
       * @param request UpdatePostgresExtensionsRequest
       * @return UpdatePostgresExtensionsResponse
       */
      Models::UpdatePostgresExtensionsResponse updatePostgresExtensions(const Models::UpdatePostgresExtensionsRequest &request);

      /**
       * @summary 变更用户备份的备注信息和保留时长
       *
       * @param request UpdateUserBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserBackupFileResponse
       */
      Models::UpdateUserBackupFileResponse updateUserBackupFileWithOptions(const Models::UpdateUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更用户备份的备注信息和保留时长
       *
       * @param request UpdateUserBackupFileRequest
       * @return UpdateUserBackupFileResponse
       */
      Models::UpdateUserBackupFileResponse updateUserBackupFile(const Models::UpdateUserBackupFileRequest &request);

      /**
       * @summary 升级RDS实例的大版本
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersionWithOptions(const Models::UpgradeDBInstanceEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级RDS实例的大版本
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersion(const Models::UpgradeDBInstanceEngineVersionRequest &request);

      /**
       * @summary 升级RDS实例的内核小版本
       *
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersionWithOptions(const Models::UpgradeDBInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级RDS实例的内核小版本
       *
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersion(const Models::UpgradeDBInstanceKernelVersionRequest &request);

      /**
       * @summary 升级数据库实例大版本
       *
       * @param request UpgradeDBInstanceMajorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceMajorVersionResponse
       */
      Models::UpgradeDBInstanceMajorVersionResponse upgradeDBInstanceMajorVersionWithOptions(const Models::UpgradeDBInstanceMajorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级数据库实例大版本
       *
       * @param request UpgradeDBInstanceMajorVersionRequest
       * @return UpgradeDBInstanceMajorVersionResponse
       */
      Models::UpgradeDBInstanceMajorVersionResponse upgradeDBInstanceMajorVersion(const Models::UpgradeDBInstanceMajorVersionRequest &request);

      /**
       * @summary This API is used to perform a pre-check before upgrading the major version of RDS MySQL or RDS PostgreSQL.
       *
       * @description ### Applicable Engines  
       * RDS MySQL  
       * RDS PostgreSQL  
       * ### Related Function Documentation  
       * >Notice: Before using this API, carefully read the Function Documentation to ensure you fully understand the prerequisites for using the API and the Impact of its use before performing any operation.  
       * - [RDS MySQL Major Version Upgrade Check Report](https://help.aliyun.com/document_detail/2794383.html)  
       * - [Upgrade the Major Version of an RDS PostgreSQL Database](https://help.aliyun.com/document_detail/2879540.html)
       *
       * @param request UpgradeDBInstanceMajorVersionPrecheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceMajorVersionPrecheckResponse
       */
      Models::UpgradeDBInstanceMajorVersionPrecheckResponse upgradeDBInstanceMajorVersionPrecheckWithOptions(const Models::UpgradeDBInstanceMajorVersionPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to perform a pre-check before upgrading the major version of RDS MySQL or RDS PostgreSQL.
       *
       * @description ### Applicable Engines  
       * RDS MySQL  
       * RDS PostgreSQL  
       * ### Related Function Documentation  
       * >Notice: Before using this API, carefully read the Function Documentation to ensure you fully understand the prerequisites for using the API and the Impact of its use before performing any operation.  
       * - [RDS MySQL Major Version Upgrade Check Report](https://help.aliyun.com/document_detail/2794383.html)  
       * - [Upgrade the Major Version of an RDS PostgreSQL Database](https://help.aliyun.com/document_detail/2879540.html)
       *
       * @param request UpgradeDBInstanceMajorVersionPrecheckRequest
       * @return UpgradeDBInstanceMajorVersionPrecheckResponse
       */
      Models::UpgradeDBInstanceMajorVersionPrecheckResponse upgradeDBInstanceMajorVersionPrecheck(const Models::UpgradeDBInstanceMajorVersionPrecheckRequest &request);

      /**
       * @summary 升级RDS实例数据库代理节点的内核版本
       *
       * @param request UpgradeDBProxyInstanceKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBProxyInstanceKernelVersionResponse
       */
      Models::UpgradeDBProxyInstanceKernelVersionResponse upgradeDBProxyInstanceKernelVersionWithOptions(const Models::UpgradeDBProxyInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级RDS实例数据库代理节点的内核版本
       *
       * @param request UpgradeDBProxyInstanceKernelVersionRequest
       * @return UpgradeDBProxyInstanceKernelVersionResponse
       */
      Models::UpgradeDBProxyInstanceKernelVersionResponse upgradeDBProxyInstanceKernelVersion(const Models::UpgradeDBProxyInstanceKernelVersionRequest &request);

      /**
       * @summary Precheck for Data Import Job on RDS MySQL Instance with Native Replication
       *
       * @description Precheck for Data Import Job on RDS MySQL Instance with Native Replication
       *
       * @param request ValidateImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateImportTaskResponse
       */
      Models::ValidateImportTaskResponse validateImportTaskWithOptions(const Models::ValidateImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Precheck for Data Import Job on RDS MySQL Instance with Native Replication
       *
       * @description Precheck for Data Import Job on RDS MySQL Instance with Native Replication
       *
       * @param request ValidateImportTaskRequest
       * @return ValidateImportTaskResponse
       */
      Models::ValidateImportTaskResponse validateImportTask(const Models::ValidateImportTaskRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
