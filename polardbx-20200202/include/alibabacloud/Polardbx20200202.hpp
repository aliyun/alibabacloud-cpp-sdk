// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_POLARDBX20200202_HPP_
#define ALIBABACLOUD_POLARDBX20200202_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Polardbx20200202Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Polardbx20200202.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AlignStoragePrimaryAzoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlignStoragePrimaryAzoneResponse
       */
      Models::AlignStoragePrimaryAzoneResponse alignStoragePrimaryAzoneWithOptions(const Models::AlignStoragePrimaryAzoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AlignStoragePrimaryAzoneRequest
       * @return AlignStoragePrimaryAzoneResponse
       */
      Models::AlignStoragePrimaryAzoneResponse alignStoragePrimaryAzone(const Models::AlignStoragePrimaryAzoneRequest &request);

      /**
       * @summary 开通冷存储
       *
       * @param request AllocateColdDataVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateColdDataVolumeResponse
       */
      Models::AllocateColdDataVolumeResponse allocateColdDataVolumeWithOptions(const Models::AllocateColdDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通冷存储
       *
       * @param request AllocateColdDataVolumeRequest
       * @return AllocateColdDataVolumeResponse
       */
      Models::AllocateColdDataVolumeResponse allocateColdDataVolume(const Models::AllocateColdDataVolumeRequest &request);

      /**
       * @param request AllocateInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(const Models::AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AllocateInstancePublicConnectionRequest
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(const Models::AllocateInstancePublicConnectionRequest &request);

      /**
       * @param request AttachColumnarInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachColumnarInstanceResponse
       */
      Models::AttachColumnarInstanceResponse attachColumnarInstanceWithOptions(const Models::AttachColumnarInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AttachColumnarInstanceRequest
       * @return AttachColumnarInstanceResponse
       */
      Models::AttachColumnarInstanceResponse attachColumnarInstance(const Models::AttachColumnarInstanceRequest &request);

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
       * @summary 修改实例所在资源组.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例所在资源组.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @param request CheckCloudResourceAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(const Models::CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckCloudResourceAuthorizedRequest
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(const Models::CheckCloudResourceAuthorizedRequest &request);

      /**
       * @param request CheckSqlAuditSlsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSqlAuditSlsStatusResponse
       */
      Models::CheckSqlAuditSlsStatusResponse checkSqlAuditSlsStatusWithOptions(const Models::CheckSqlAuditSlsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckSqlAuditSlsStatusRequest
       * @return CheckSqlAuditSlsStatusResponse
       */
      Models::CheckSqlAuditSlsStatusResponse checkSqlAuditSlsStatus(const Models::CheckSqlAuditSlsStatusRequest &request);

      /**
       * @summary 取消实例迁移
       *
       * @param request CloseEngineMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseEngineMigrationResponse
       */
      Models::CloseEngineMigrationResponse closeEngineMigrationWithOptions(const Models::CloseEngineMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消实例迁移
       *
       * @param request CloseEngineMigrationRequest
       * @return CloseEngineMigrationResponse
       */
      Models::CloseEngineMigrationResponse closeEngineMigration(const Models::CloseEngineMigrationRequest &request);

      /**
       * @summary 回滚切换时确认无连接
       *
       * @param request ConfirmNoConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmNoConnectionResponse
       */
      Models::ConfirmNoConnectionResponse confirmNoConnectionWithOptions(const Models::ConfirmNoConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 回滚切换时确认无连接
       *
       * @param request ConfirmNoConnectionRequest
       * @return ConfirmNoConnectionResponse
       */
      Models::ConfirmNoConnectionResponse confirmNoConnection(const Models::ConfirmNoConnectionRequest &request);

      /**
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary 创建自定义endpoint
       *
       * @param request CreateCustomEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomEndpointResponse
       */
      Models::CreateCustomEndpointResponse createCustomEndpointWithOptions(const Models::CreateCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义endpoint
       *
       * @param request CreateCustomEndpointRequest
       * @return CreateCustomEndpointResponse
       */
      Models::CreateCustomEndpointResponse createCustomEndpoint(const Models::CreateCustomEndpointRequest &request);

      /**
       * @param request CreateDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBResponse
       */
      Models::CreateDBResponse createDBWithOptions(const Models::CreateDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDBRequest
       * @return CreateDBResponse
       */
      Models::CreateDBResponse createDB(const Models::CreateDBRequest &request);

      /**
       * @summary Creates a PolarDB-X instance.
       *
       * @param tmpReq CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a PolarDB-X instance.
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary 创建评估升级的数据迁移任务
       *
       * @param request CreateDataImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataImportTaskResponse
       */
      Models::CreateDataImportTaskResponse createDataImportTaskWithOptions(const Models::CreateDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建评估升级的数据迁移任务
       *
       * @param request CreateDataImportTaskRequest
       * @return CreateDataImportTaskResponse
       */
      Models::CreateDataImportTaskResponse createDataImportTask(const Models::CreateDataImportTaskRequest &request);

      /**
       * @summary 创建GDN实例
       *
       * @param request CreateGdnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGdnInstanceResponse
       */
      Models::CreateGdnInstanceResponse createGdnInstanceWithOptions(const Models::CreateGdnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建GDN实例
       *
       * @param request CreateGdnInstanceRequest
       * @return CreateGdnInstanceResponse
       */
      Models::CreateGdnInstanceResponse createGdnInstance(const Models::CreateGdnInstanceRequest &request);

      /**
       * @summary 创建评估预检任务
       *
       * @param request CreateRplInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRplInspectionTaskResponse
       */
      Models::CreateRplInspectionTaskResponse createRplInspectionTaskWithOptions(const Models::CreateRplInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建评估预检任务
       *
       * @param request CreateRplInspectionTaskRequest
       * @return CreateRplInspectionTaskResponse
       */
      Models::CreateRplInspectionTaskResponse createRplInspectionTask(const Models::CreateRplInspectionTaskRequest &request);

      /**
       * @summary 创建评估升级的兼容性评估任务
       *
       * @param request CreateSQLEvaluateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSQLEvaluateTaskResponse
       */
      Models::CreateSQLEvaluateTaskResponse createSQLEvaluateTaskWithOptions(const Models::CreateSQLEvaluateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建评估升级的兼容性评估任务
       *
       * @param request CreateSQLEvaluateTaskRequest
       * @return CreateSQLEvaluateTaskResponse
       */
      Models::CreateSQLEvaluateTaskResponse createSQLEvaluateTask(const Models::CreateSQLEvaluateTaskRequest &request);

      /**
       * @summary 创建 PolarDB-X 存储资源池
       *
       * @param request CreateStoragePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStoragePoolResponse
       */
      Models::CreateStoragePoolResponse createStoragePoolWithOptions(const Models::CreateStoragePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 PolarDB-X 存储资源池
       *
       * @param request CreateStoragePoolRequest
       * @return CreateStoragePoolResponse
       */
      Models::CreateStoragePoolResponse createStoragePool(const Models::CreateStoragePoolRequest &request);

      /**
       * @summary 创建评估升级的结构迁移任务
       *
       * @param request CreateStructureImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStructureImportTaskResponse
       */
      Models::CreateStructureImportTaskResponse createStructureImportTaskWithOptions(const Models::CreateStructureImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建评估升级的结构迁移任务
       *
       * @param request CreateStructureImportTaskRequest
       * @return CreateStructureImportTaskResponse
       */
      Models::CreateStructureImportTaskResponse createStructureImportTask(const Models::CreateStructureImportTaskRequest &request);

      /**
       * @param request CreateSuperAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSuperAccountResponse
       */
      Models::CreateSuperAccountResponse createSuperAccountWithOptions(const Models::CreateSuperAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateSuperAccountRequest
       * @return CreateSuperAccountResponse
       */
      Models::CreateSuperAccountResponse createSuperAccount(const Models::CreateSuperAccountRequest &request);

      /**
       * @summary 创建标准版迁移到企业版的操作任务
       *
       * @param request CreateTransformOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransformOperationResponse
       */
      Models::CreateTransformOperationResponse createTransformOperationWithOptions(const Models::CreateTransformOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标准版迁移到企业版的操作任务
       *
       * @param request CreateTransformOperationRequest
       * @return CreateTransformOperationResponse
       */
      Models::CreateTransformOperationResponse createTransformOperation(const Models::CreateTransformOperationRequest &request);

      /**
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary 删除自定义endpoint
       *
       * @param request DeleteCustomEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomEndpointResponse
       */
      Models::DeleteCustomEndpointResponse deleteCustomEndpointWithOptions(const Models::DeleteCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义endpoint
       *
       * @param request DeleteCustomEndpointRequest
       * @return DeleteCustomEndpointResponse
       */
      Models::DeleteCustomEndpointResponse deleteCustomEndpoint(const Models::DeleteCustomEndpointRequest &request);

      /**
       * @param request DeleteDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBResponse
       */
      Models::DeleteDBResponse deleteDBWithOptions(const Models::DeleteDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDBRequest
       * @return DeleteDBResponse
       */
      Models::DeleteDBResponse deleteDB(const Models::DeleteDBRequest &request);

      /**
       * @summary 释放实例
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放实例
       *
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

      /**
       * @summary 删除评估导入任务
       *
       * @param request DeleteEvaluateAndImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEvaluateAndImportTaskResponse
       */
      Models::DeleteEvaluateAndImportTaskResponse deleteEvaluateAndImportTaskWithOptions(const Models::DeleteEvaluateAndImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除评估导入任务
       *
       * @param request DeleteEvaluateAndImportTaskRequest
       * @return DeleteEvaluateAndImportTaskResponse
       */
      Models::DeleteEvaluateAndImportTaskResponse deleteEvaluateAndImportTask(const Models::DeleteEvaluateAndImportTaskRequest &request);

      /**
       * @summary 删除GDN实例
       *
       * @param request DeleteGdnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGdnInstanceResponse
       */
      Models::DeleteGdnInstanceResponse deleteGdnInstanceWithOptions(const Models::DeleteGdnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除GDN实例
       *
       * @param request DeleteGdnInstanceRequest
       * @return DeleteGdnInstanceResponse
       */
      Models::DeleteGdnInstanceResponse deleteGdnInstance(const Models::DeleteGdnInstanceRequest &request);

      /**
       * @param request DescribeAccountListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountListResponse
       */
      Models::DescribeAccountListResponse describeAccountListWithOptions(const Models::DescribeAccountListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeAccountListRequest
       * @return DescribeAccountListResponse
       */
      Models::DescribeAccountListResponse describeAccountList(const Models::DescribeAccountListRequest &request);

      /**
       * @summary 展示全局运维窗口配置
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConfWithOptions(const Models::DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 展示全局运维窗口配置
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConf(const Models::DescribeActiveOperationMaintainConfRequest &request);

      /**
       * @summary 获取主动运维任务数量
       *
       * @param request DescribeActiveOperationTaskCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskCountResponse
       */
      Models::DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCountWithOptions(const Models::DescribeActiveOperationTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取主动运维任务数量
       *
       * @param request DescribeActiveOperationTaskCountRequest
       * @return DescribeActiveOperationTaskCountResponse
       */
      Models::DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCount(const Models::DescribeActiveOperationTaskCountRequest &request);

      /**
       * @summary 获取待执行自动运维任务列表
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取待执行自动运维任务列表
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary 冷存储表列表
       *
       * @param request DescribeArchiveTableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeArchiveTableListResponse
       */
      Models::DescribeArchiveTableListResponse describeArchiveTableListWithOptions(const Models::DescribeArchiveTableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 冷存储表列表
       *
       * @param request DescribeArchiveTableListRequest
       * @return DescribeArchiveTableListResponse
       */
      Models::DescribeArchiveTableListResponse describeArchiveTableList(const Models::DescribeArchiveTableListRequest &request);

      /**
       * @summary 获取已开启跨地域备份的地域
       *
       * @param request DescribeAvailableCrossRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableCrossRegionsResponse
       */
      Models::DescribeAvailableCrossRegionsResponse describeAvailableCrossRegionsWithOptions(const Models::DescribeAvailableCrossRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取已开启跨地域备份的地域
       *
       * @param request DescribeAvailableCrossRegionsRequest
       * @return DescribeAvailableCrossRegionsResponse
       */
      Models::DescribeAvailableCrossRegionsResponse describeAvailableCrossRegions(const Models::DescribeAvailableCrossRegionsRequest &request);

      /**
       * @summary 描述备份策略
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述备份策略
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary 备份集详情
       *
       * @param request DescribeBackupSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupSetResponse
       */
      Models::DescribeBackupSetResponse describeBackupSetWithOptions(const Models::DescribeBackupSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 备份集详情
       *
       * @param request DescribeBackupSetRequest
       * @return DescribeBackupSetResponse
       */
      Models::DescribeBackupSetResponse describeBackupSet(const Models::DescribeBackupSetRequest &request);

      /**
       * @param request DescribeBackupSetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupSetListResponse
       */
      Models::DescribeBackupSetListResponse describeBackupSetListWithOptions(const Models::DescribeBackupSetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBackupSetListRequest
       * @return DescribeBackupSetListResponse
       */
      Models::DescribeBackupSetListResponse describeBackupSetList(const Models::DescribeBackupSetListRequest &request);

      /**
       * @param request DescribeBinaryLogListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBinaryLogListResponse
       */
      Models::DescribeBinaryLogListResponse describeBinaryLogListWithOptions(const Models::DescribeBinaryLogListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBinaryLogListRequest
       * @return DescribeBinaryLogListResponse
       */
      Models::DescribeBinaryLogListResponse describeBinaryLogList(const Models::DescribeBinaryLogListRequest &request);

      /**
       * @summary 查询多流规格列表
       *
       * @param request DescribeCdcClassListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdcClassListResponse
       */
      Models::DescribeCdcClassListResponse describeCdcClassListWithOptions(const Models::DescribeCdcClassListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多流规格列表
       *
       * @param request DescribeCdcClassListRequest
       * @return DescribeCdcClassListResponse
       */
      Models::DescribeCdcClassListResponse describeCdcClassList(const Models::DescribeCdcClassListRequest &request);

      /**
       * @summary 查询CDC信息
       *
       * @param request DescribeCdcInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdcInfoResponse
       */
      Models::DescribeCdcInfoResponse describeCdcInfoWithOptions(const Models::DescribeCdcInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询CDC信息
       *
       * @param request DescribeCdcInfoRequest
       * @return DescribeCdcInfoResponse
       */
      Models::DescribeCdcInfoResponse describeCdcInfo(const Models::DescribeCdcInfoRequest &request);

      /**
       * @summary 获取CDC版本列表
       *
       * @param request DescribeCdcVersionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdcVersionListResponse
       */
      Models::DescribeCdcVersionListResponse describeCdcVersionListWithOptions(const Models::DescribeCdcVersionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取CDC版本列表
       *
       * @param request DescribeCdcVersionListRequest
       * @return DescribeCdcVersionListResponse
       */
      Models::DescribeCdcVersionListResponse describeCdcVersionList(const Models::DescribeCdcVersionListRequest &request);

      /**
       * @param request DescribeCharacterSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCharacterSetResponse
       */
      Models::DescribeCharacterSetResponse describeCharacterSetWithOptions(const Models::DescribeCharacterSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeCharacterSetRequest
       * @return DescribeCharacterSetResponse
       */
      Models::DescribeCharacterSetResponse describeCharacterSet(const Models::DescribeCharacterSetRequest &request);

      /**
       * @summary 冷存储基础信息
       *
       * @param request DescribeColdDataBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColdDataBasicInfoResponse
       */
      Models::DescribeColdDataBasicInfoResponse describeColdDataBasicInfoWithOptions(const Models::DescribeColdDataBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 冷存储基础信息
       *
       * @param request DescribeColdDataBasicInfoRequest
       * @return DescribeColdDataBasicInfoResponse
       */
      Models::DescribeColdDataBasicInfoResponse describeColdDataBasicInfo(const Models::DescribeColdDataBasicInfoRequest &request);

      /**
       * @summary 查询列存规格列表
       *
       * @param request DescribeColumnarClassListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnarClassListResponse
       */
      Models::DescribeColumnarClassListResponse describeColumnarClassListWithOptions(const Models::DescribeColumnarClassListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询列存规格列表
       *
       * @param request DescribeColumnarClassListRequest
       * @return DescribeColumnarClassListResponse
       */
      Models::DescribeColumnarClassListResponse describeColumnarClassList(const Models::DescribeColumnarClassListRequest &request);

      /**
       * @summary 查询Columnar信息
       *
       * @param request DescribeColumnarInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnarInfoResponse
       */
      Models::DescribeColumnarInfoResponse describeColumnarInfoWithOptions(const Models::DescribeColumnarInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Columnar信息
       *
       * @param request DescribeColumnarInfoRequest
       * @return DescribeColumnarInfoResponse
       */
      Models::DescribeColumnarInfoResponse describeColumnarInfo(const Models::DescribeColumnarInfoRequest &request);

      /**
       * @summary 获取Columnar版本列表
       *
       * @param request DescribeColumnarVersionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnarVersionListResponse
       */
      Models::DescribeColumnarVersionListResponse describeColumnarVersionListWithOptions(const Models::DescribeColumnarVersionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Columnar版本列表
       *
       * @param request DescribeColumnarVersionListRequest
       * @return DescribeColumnarVersionListResponse
       */
      Models::DescribeColumnarVersionListResponse describeColumnarVersionList(const Models::DescribeColumnarVersionListRequest &request);

      /**
       * @summary 查询PolarDB-X 实例指定组件的属性列表
       *
       * @param request DescribeComponentPropetiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentPropetiesResponse
       */
      Models::DescribeComponentPropetiesResponse describeComponentPropetiesWithOptions(const Models::DescribeComponentPropetiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询PolarDB-X 实例指定组件的属性列表
       *
       * @param request DescribeComponentPropetiesRequest
       * @return DescribeComponentPropetiesResponse
       */
      Models::DescribeComponentPropetiesResponse describeComponentPropeties(const Models::DescribeComponentPropetiesRequest &request);

      /**
       * @summary 查询自定义连接信息
       *
       * @param request DescribeCustomEndpointListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomEndpointListResponse
       */
      Models::DescribeCustomEndpointListResponse describeCustomEndpointListWithOptions(const Models::DescribeCustomEndpointListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自定义连接信息
       *
       * @param request DescribeCustomEndpointListRequest
       * @return DescribeCustomEndpointListResponse
       */
      Models::DescribeCustomEndpointListResponse describeCustomEndpointList(const Models::DescribeCustomEndpointListRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary 查询实例配置信息
       *
       * @param request DescribeDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceConfigResponse
       */
      Models::DescribeDBInstanceConfigResponse describeDBInstanceConfigWithOptions(const Models::DescribeDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例配置信息
       *
       * @param request DescribeDBInstanceConfigRequest
       * @return DescribeDBInstanceConfigResponse
       */
      Models::DescribeDBInstanceConfigResponse describeDBInstanceConfig(const Models::DescribeDBInstanceConfigRequest &request);

      /**
       * @summary 查询实例的HA信息
       *
       * @param request DescribeDBInstanceHARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceHAResponse
       */
      Models::DescribeDBInstanceHAResponse describeDBInstanceHAWithOptions(const Models::DescribeDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例的HA信息
       *
       * @param request DescribeDBInstanceHARequest
       * @return DescribeDBInstanceHAResponse
       */
      Models::DescribeDBInstanceHAResponse describeDBInstanceHA(const Models::DescribeDBInstanceHARequest &request);

      /**
       * @param request DescribeDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(const Models::DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDBInstanceSSLRequest
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSL(const Models::DescribeDBInstanceSSLRequest &request);

      /**
       * @param request DescribeDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceTDEResponse
       */
      Models::DescribeDBInstanceTDEResponse describeDBInstanceTDEWithOptions(const Models::DescribeDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDBInstanceTDERequest
       * @return DescribeDBInstanceTDEResponse
       */
      Models::DescribeDBInstanceTDEResponse describeDBInstanceTDE(const Models::DescribeDBInstanceTDERequest &request);

      /**
       * @summary 查询实例拓扑
       *
       * @param request DescribeDBInstanceTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceTopologyResponse
       */
      Models::DescribeDBInstanceTopologyResponse describeDBInstanceTopologyWithOptions(const Models::DescribeDBInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例拓扑
       *
       * @param request DescribeDBInstanceTopologyRequest
       * @return DescribeDBInstanceTopologyResponse
       */
      Models::DescribeDBInstanceTopologyResponse describeDBInstanceTopology(const Models::DescribeDBInstanceTopologyRequest &request);

      /**
       * @summary 通过Endpoint查询实例
       *
       * @param request DescribeDBInstanceViaEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceViaEndpointResponse
       */
      Models::DescribeDBInstanceViaEndpointResponse describeDBInstanceViaEndpointWithOptions(const Models::DescribeDBInstanceViaEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过Endpoint查询实例
       *
       * @param request DescribeDBInstanceViaEndpointRequest
       * @return DescribeDBInstanceViaEndpointResponse
       */
      Models::DescribeDBInstanceViaEndpointResponse describeDBInstanceViaEndpoint(const Models::DescribeDBInstanceViaEndpointRequest &request);

      /**
       * @summary 获取PolarDB-X实例列表
       *
       * @param request DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取PolarDB-X实例列表
       *
       * @param request DescribeDBInstancesRequest
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstances(const Models::DescribeDBInstancesRequest &request);

      /**
       * @summary 性能监控数据接口
       *
       * @param request DescribeDBNodePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBNodePerformanceResponse
       */
      Models::DescribeDBNodePerformanceResponse describeDBNodePerformanceWithOptions(const Models::DescribeDBNodePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 性能监控数据接口
       *
       * @param request DescribeDBNodePerformanceRequest
       * @return DescribeDBNodePerformanceResponse
       */
      Models::DescribeDBNodePerformanceResponse describeDBNodePerformance(const Models::DescribeDBNodePerformanceRequest &request);

      /**
       * @summary 导入任务详情
       *
       * @param request DescribeDataImportTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataImportTaskInfoResponse
       */
      Models::DescribeDataImportTaskInfoResponse describeDataImportTaskInfoWithOptions(const Models::DescribeDataImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入任务详情
       *
       * @param request DescribeDataImportTaskInfoRequest
       * @return DescribeDataImportTaskInfoResponse
       */
      Models::DescribeDataImportTaskInfoResponse describeDataImportTaskInfo(const Models::DescribeDataImportTaskInfoRequest &request);

      /**
       * @param request DescribeDbListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDbListResponse
       */
      Models::DescribeDbListResponse describeDbListWithOptions(const Models::DescribeDbListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDbListRequest
       * @return DescribeDbListResponse
       */
      Models::DescribeDbListResponse describeDbList(const Models::DescribeDbListRequest &request);

      /**
       * @param request DescribeDistributeTableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDistributeTableListResponse
       */
      Models::DescribeDistributeTableListResponse describeDistributeTableListWithOptions(const Models::DescribeDistributeTableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDistributeTableListRequest
       * @return DescribeDistributeTableListResponse
       */
      Models::DescribeDistributeTableListResponse describeDistributeTableList(const Models::DescribeDistributeTableListRequest &request);

      /**
       * @summary 获取已开启跨地域备份的地域
       *
       * @param request DescribeEnabledCrossRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnabledCrossRegionsResponse
       */
      Models::DescribeEnabledCrossRegionsResponse describeEnabledCrossRegionsWithOptions(const Models::DescribeEnabledCrossRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取已开启跨地域备份的地域
       *
       * @param request DescribeEnabledCrossRegionsRequest
       * @return DescribeEnabledCrossRegionsResponse
       */
      Models::DescribeEnabledCrossRegionsResponse describeEnabledCrossRegions(const Models::DescribeEnabledCrossRegionsRequest &request);

      /**
       * @summary 查询单个评估迁移任务详情
       *
       * @param request DescribeEvaluateAndImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEvaluateAndImportTaskResponse
       */
      Models::DescribeEvaluateAndImportTaskResponse describeEvaluateAndImportTaskWithOptions(const Models::DescribeEvaluateAndImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个评估迁移任务详情
       *
       * @param request DescribeEvaluateAndImportTaskRequest
       * @return DescribeEvaluateAndImportTaskResponse
       */
      Models::DescribeEvaluateAndImportTaskResponse describeEvaluateAndImportTask(const Models::DescribeEvaluateAndImportTaskRequest &request);

      /**
       * @summary 请求评估导入任务列表
       *
       * @param request DescribeEvaluateAndImportTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEvaluateAndImportTasksResponse
       */
      Models::DescribeEvaluateAndImportTasksResponse describeEvaluateAndImportTasksWithOptions(const Models::DescribeEvaluateAndImportTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 请求评估导入任务列表
       *
       * @param request DescribeEvaluateAndImportTasksRequest
       * @return DescribeEvaluateAndImportTasksResponse
       */
      Models::DescribeEvaluateAndImportTasksResponse describeEvaluateAndImportTasks(const Models::DescribeEvaluateAndImportTasksRequest &request);

      /**
       * @summary 历史事件
       *
       * @param request DescribeEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 历史事件
       *
       * @param request DescribeEventsRequest
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEvents(const Models::DescribeEventsRequest &request);

      /**
       * @summary 获取GDN实例列表
       *
       * @param request DescribeGdnInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGdnInstancesResponse
       */
      Models::DescribeGdnInstancesResponse describeGdnInstancesWithOptions(const Models::DescribeGdnInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取GDN实例列表
       *
       * @param request DescribeGdnInstancesRequest
       * @return DescribeGdnInstancesResponse
       */
      Models::DescribeGdnInstancesResponse describeGdnInstances(const Models::DescribeGdnInstancesRequest &request);

      /**
       * @summary 开放商业备份集
       *
       * @param request DescribeOpenBackupSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOpenBackupSetResponse
       */
      Models::DescribeOpenBackupSetResponse describeOpenBackupSetWithOptions(const Models::DescribeOpenBackupSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开放商业备份集
       *
       * @param request DescribeOpenBackupSetRequest
       * @return DescribeOpenBackupSetResponse
       */
      Models::DescribeOpenBackupSetResponse describeOpenBackupSet(const Models::DescribeOpenBackupSetRequest &request);

      /**
       * @summary 查询参数模版列表
       *
       * @param request DescribeParameterGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroupsWithOptions(const Models::DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询参数模版列表
       *
       * @param request DescribeParameterGroupsRequest
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroups(const Models::DescribeParameterGroupsRequest &request);

      /**
       * @param request DescribeParameterTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(const Models::DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeParameterTemplatesRequest
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplates(const Models::DescribeParameterTemplatesRequest &request);

      /**
       * @param request DescribeParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParametersWithOptions(const Models::DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeParametersRequest
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParameters(const Models::DescribeParametersRequest &request);

      /**
       * @summary 查询数据节点列表
       *
       * @param request DescribePolarxDataNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarxDataNodesResponse
       */
      Models::DescribePolarxDataNodesResponse describePolarxDataNodesWithOptions(const Models::DescribePolarxDataNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据节点列表
       *
       * @param request DescribePolarxDataNodesRequest
       * @return DescribePolarxDataNodesResponse
       */
      Models::DescribePolarxDataNodesResponse describePolarxDataNodes(const Models::DescribePolarxDataNodesRequest &request);

      /**
       * @param request DescribeRdsVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVpcsResponse
       */
      Models::DescribeRdsVpcsResponse describeRdsVpcsWithOptions(const Models::DescribeRdsVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRdsVpcsRequest
       * @return DescribeRdsVpcsResponse
       */
      Models::DescribeRdsVpcsResponse describeRdsVpcs(const Models::DescribeRdsVpcsRequest &request);

      /**
       * @summary 查询Vswitch信息
       *
       * @param request DescribeRdsVswitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVswitchesResponse
       */
      Models::DescribeRdsVswitchesResponse describeRdsVswitchesWithOptions(const Models::DescribeRdsVswitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Vswitch信息
       *
       * @param request DescribeRdsVswitchesRequest
       * @return DescribeRdsVswitchesResponse
       */
      Models::DescribeRdsVswitchesResponse describeRdsVswitches(const Models::DescribeRdsVswitchesRequest &request);

      /**
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary 查询预检任务结果
       *
       * @param request DescribeRplInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRplInspectionTaskResponse
       */
      Models::DescribeRplInspectionTaskResponse describeRplInspectionTaskWithOptions(const Models::DescribeRplInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询预检任务结果
       *
       * @param request DescribeRplInspectionTaskRequest
       * @return DescribeRplInspectionTaskResponse
       */
      Models::DescribeRplInspectionTaskResponse describeRplInspectionTask(const Models::DescribeRplInspectionTaskRequest &request);

      /**
       * @param request DescribeScaleOutMigrateTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScaleOutMigrateTaskListResponse
       */
      Models::DescribeScaleOutMigrateTaskListResponse describeScaleOutMigrateTaskListWithOptions(const Models::DescribeScaleOutMigrateTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeScaleOutMigrateTaskListRequest
       * @return DescribeScaleOutMigrateTaskListResponse
       */
      Models::DescribeScaleOutMigrateTaskListResponse describeScaleOutMigrateTaskList(const Models::DescribeScaleOutMigrateTaskListRequest &request);

      /**
       * @param request DescribeSecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityIpsResponse
       */
      Models::DescribeSecurityIpsResponse describeSecurityIpsWithOptions(const Models::DescribeSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeSecurityIpsRequest
       * @return DescribeSecurityIpsResponse
       */
      Models::DescribeSecurityIpsResponse describeSecurityIps(const Models::DescribeSecurityIpsRequest &request);

      /**
       * @summary 查询 PolarDB-X 存储节点信息
       *
       * @param request DescribeShowStorageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeShowStorageInfoResponse
       */
      Models::DescribeShowStorageInfoResponse describeShowStorageInfoWithOptions(const Models::DescribeShowStorageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 PolarDB-X 存储节点信息
       *
       * @param request DescribeShowStorageInfoRequest
       * @return DescribeShowStorageInfoResponse
       */
      Models::DescribeShowStorageInfoResponse describeShowStorageInfo(const Models::DescribeShowStorageInfoRequest &request);

      /**
       * @summary 慢SQL明细
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 慢SQL明细
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @param request DescribeSqlAuditInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSqlAuditInfoResponse
       */
      Models::DescribeSqlAuditInfoResponse describeSqlAuditInfoWithOptions(const Models::DescribeSqlAuditInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeSqlAuditInfoRequest
       * @return DescribeSqlAuditInfoResponse
       */
      Models::DescribeSqlAuditInfoResponse describeSqlAuditInfo(const Models::DescribeSqlAuditInfoRequest &request);

      /**
       * @summary SQL闪回任务列表查询
       *
       * @param request DescribeSqlFlashbackTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSqlFlashbackTaskListResponse
       */
      Models::DescribeSqlFlashbackTaskListResponse describeSqlFlashbackTaskListWithOptions(const Models::DescribeSqlFlashbackTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SQL闪回任务列表查询
       *
       * @param request DescribeSqlFlashbackTaskListRequest
       * @return DescribeSqlFlashbackTaskListResponse
       */
      Models::DescribeSqlFlashbackTaskListResponse describeSqlFlashbackTaskList(const Models::DescribeSqlFlashbackTaskListRequest &request);

      /**
       * @summary 查询 PolarDB-X 存储资源池信息
       *
       * @param request DescribeStoragePoolInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStoragePoolInfoResponse
       */
      Models::DescribeStoragePoolInfoResponse describeStoragePoolInfoWithOptions(const Models::DescribeStoragePoolInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 PolarDB-X 存储资源池信息
       *
       * @param request DescribeStoragePoolInfoRequest
       * @return DescribeStoragePoolInfoResponse
       */
      Models::DescribeStoragePoolInfoResponse describeStoragePoolInfo(const Models::DescribeStoragePoolInfoRequest &request);

      /**
       * @summary 查询结构迁移任务结果
       *
       * @param request DescribeStructureImportTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStructureImportTaskInfoResponse
       */
      Models::DescribeStructureImportTaskInfoResponse describeStructureImportTaskInfoWithOptions(const Models::DescribeStructureImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询结构迁移任务结果
       *
       * @param request DescribeStructureImportTaskInfoRequest
       * @return DescribeStructureImportTaskInfoResponse
       */
      Models::DescribeStructureImportTaskInfoResponse describeStructureImportTaskInfo(const Models::DescribeStructureImportTaskInfoRequest &request);

      /**
       * @summary 标签列表查询
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标签列表查询
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary 查询标准版迁移到企业版的任务状态
       *
       * @param request DescribeTransformStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransformStatusResponse
       */
      Models::DescribeTransformStatusResponse describeTransformStatusWithOptions(const Models::DescribeTransformStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询标准版迁移到企业版的任务状态
       *
       * @param request DescribeTransformStatusRequest
       * @return DescribeTransformStatusResponse
       */
      Models::DescribeTransformStatusResponse describeTransformStatus(const Models::DescribeTransformStatusRequest &request);

      /**
       * @param request DescribeUserEncryptionKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(const Models::DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeUserEncryptionKeyListRequest
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(const Models::DescribeUserEncryptionKeyListRequest &request);

      /**
       * @param request DisableRightsSeparationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableRightsSeparationResponse
       */
      Models::DisableRightsSeparationResponse disableRightsSeparationWithOptions(const Models::DisableRightsSeparationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableRightsSeparationRequest
       * @return DisableRightsSeparationResponse
       */
      Models::DisableRightsSeparationResponse disableRightsSeparation(const Models::DisableRightsSeparationRequest &request);

      /**
       * @param request DisableSqlAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSqlAuditResponse
       */
      Models::DisableSqlAuditResponse disableSqlAuditWithOptions(const Models::DisableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableSqlAuditRequest
       * @return DisableSqlAuditResponse
       */
      Models::DisableSqlAuditResponse disableSqlAudit(const Models::DisableSqlAuditRequest &request);

      /**
       * @summary 开启三权分立
       *
       * @param request EnableRightsSeparationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableRightsSeparationResponse
       */
      Models::EnableRightsSeparationResponse enableRightsSeparationWithOptions(const Models::EnableRightsSeparationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启三权分立
       *
       * @param request EnableRightsSeparationRequest
       * @return EnableRightsSeparationResponse
       */
      Models::EnableRightsSeparationResponse enableRightsSeparation(const Models::EnableRightsSeparationRequest &request);

      /**
       * @param request EnableSqlAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSqlAuditResponse
       */
      Models::EnableSqlAuditResponse enableSqlAuditWithOptions(const Models::EnableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableSqlAuditRequest
       * @return EnableSqlAuditResponse
       */
      Models::EnableSqlAuditResponse enableSqlAudit(const Models::EnableSqlAuditRequest &request);

      /**
       * @summary 查标签接口
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查标签接口
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @param request MigrateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateDBInstanceResponse
       */
      Models::MigrateDBInstanceResponse migrateDBInstanceWithOptions(const Models::MigrateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MigrateDBInstanceRequest
       * @return MigrateDBInstanceResponse
       */
      Models::MigrateDBInstanceResponse migrateDBInstance(const Models::MigrateDBInstanceRequest &request);

      /**
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @param request ModifyAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountPrivilegeResponse
       */
      Models::ModifyAccountPrivilegeResponse modifyAccountPrivilegeWithOptions(const Models::ModifyAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAccountPrivilegeRequest
       * @return ModifyAccountPrivilegeResponse
       */
      Models::ModifyAccountPrivilegeResponse modifyAccountPrivilege(const Models::ModifyAccountPrivilegeRequest &request);

      /**
       * @summary 修改全局运维窗口信息
       *
       * @param request ModifyActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationMaintainConfResponse
       */
      Models::ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConfWithOptions(const Models::ModifyActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改全局运维窗口信息
       *
       * @param request ModifyActiveOperationMaintainConfRequest
       * @return ModifyActiveOperationMaintainConfResponse
       */
      Models::ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConf(const Models::ModifyActiveOperationMaintainConfRequest &request);

      /**
       * @summary 修改主动运维任务
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改主动运维任务
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary CDC变配
       *
       * @description ****
       *
       * @param request ModifyCdcClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCdcClassResponse
       */
      Models::ModifyCdcClassResponse modifyCdcClassWithOptions(const Models::ModifyCdcClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CDC变配
       *
       * @description ****
       *
       * @param request ModifyCdcClassRequest
       * @return ModifyCdcClassResponse
       */
      Models::ModifyCdcClassResponse modifyCdcClass(const Models::ModifyCdcClassRequest &request);

      /**
       * @summary Columnar变配
       *
       * @description ****
       *
       * @param request ModifyColumnarClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyColumnarClassResponse
       */
      Models::ModifyColumnarClassResponse modifyColumnarClassWithOptions(const Models::ModifyColumnarClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Columnar变配
       *
       * @description ****
       *
       * @param request ModifyColumnarClassRequest
       * @return ModifyColumnarClassResponse
       */
      Models::ModifyColumnarClassResponse modifyColumnarClass(const Models::ModifyColumnarClassRequest &request);

      /**
       * @summary 修复自定连接基本信息
       *
       * @param request ModifyCustomEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomEndpointResponse
       */
      Models::ModifyCustomEndpointResponse modifyCustomEndpointWithOptions(const Models::ModifyCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修复自定连接基本信息
       *
       * @param request ModifyCustomEndpointRequest
       * @return ModifyCustomEndpointResponse
       */
      Models::ModifyCustomEndpointResponse modifyCustomEndpoint(const Models::ModifyCustomEndpointRequest &request);

      /**
       * @summary 修复自定连接的网络信息
       *
       * @param request ModifyCustomEndpointNetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomEndpointNetResponse
       */
      Models::ModifyCustomEndpointNetResponse modifyCustomEndpointNetWithOptions(const Models::ModifyCustomEndpointNetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修复自定连接的网络信息
       *
       * @param request ModifyCustomEndpointNetRequest
       * @return ModifyCustomEndpointNetResponse
       */
      Models::ModifyCustomEndpointNetResponse modifyCustomEndpointNet(const Models::ModifyCustomEndpointNetRequest &request);

      /**
       * @param request ModifyDBInstanceClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceClassResponse
       */
      Models::ModifyDBInstanceClassResponse modifyDBInstanceClassWithOptions(const Models::ModifyDBInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDBInstanceClassRequest
       * @return ModifyDBInstanceClassResponse
       */
      Models::ModifyDBInstanceClassResponse modifyDBInstanceClass(const Models::ModifyDBInstanceClassRequest &request);

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
       * @summary 修改实例链接串
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例链接串
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @param request ModifyDBInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(const Models::ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDBInstanceDescriptionRequest
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(const Models::ModifyDBInstanceDescriptionRequest &request);

      /**
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTimeWithOptions(const Models::ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTime(const Models::ModifyDBInstanceMaintainTimeRequest &request);

      /**
       * @description ****
       *
       * @param request ModifyDBInstanceVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceVipResponse
       */
      Models::ModifyDBInstanceVipResponse modifyDBInstanceVipWithOptions(const Models::ModifyDBInstanceVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description ****
       *
       * @param request ModifyDBInstanceVipRequest
       * @return ModifyDBInstanceVipResponse
       */
      Models::ModifyDBInstanceVipResponse modifyDBInstanceVip(const Models::ModifyDBInstanceVipRequest &request);

      /**
       * @param request ModifyDatabaseDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatabaseDescriptionResponse
       */
      Models::ModifyDatabaseDescriptionResponse modifyDatabaseDescriptionWithOptions(const Models::ModifyDatabaseDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDatabaseDescriptionRequest
       * @return ModifyDatabaseDescriptionResponse
       */
      Models::ModifyDatabaseDescriptionResponse modifyDatabaseDescription(const Models::ModifyDatabaseDescriptionRequest &request);

      /**
       * @summary ModifyEngineMigration
       *
       * @description ****
       *
       * @param request ModifyEngineMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEngineMigrationResponse
       */
      Models::ModifyEngineMigrationResponse modifyEngineMigrationWithOptions(const Models::ModifyEngineMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyEngineMigration
       *
       * @description ****
       *
       * @param request ModifyEngineMigrationRequest
       * @return ModifyEngineMigrationResponse
       */
      Models::ModifyEngineMigrationResponse modifyEngineMigration(const Models::ModifyEngineMigrationRequest &request);

      /**
       * @param request ModifyParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterResponse
       */
      Models::ModifyParameterResponse modifyParameterWithOptions(const Models::ModifyParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyParameterRequest
       * @return ModifyParameterResponse
       */
      Models::ModifyParameterResponse modifyParameter(const Models::ModifyParameterRequest &request);

      /**
       * @param request ModifySecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIpsWithOptions(const Models::ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifySecurityIpsRequest
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIps(const Models::ModifySecurityIpsRequest &request);

      /**
       * @summary SQL闪回任务预检
       *
       * @param request PreCheckSqlFlashbackTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreCheckSqlFlashbackTaskResponse
       */
      Models::PreCheckSqlFlashbackTaskResponse preCheckSqlFlashbackTaskWithOptions(const Models::PreCheckSqlFlashbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SQL闪回任务预检
       *
       * @param request PreCheckSqlFlashbackTaskRequest
       * @return PreCheckSqlFlashbackTaskResponse
       */
      Models::PreCheckSqlFlashbackTaskResponse preCheckSqlFlashbackTask(const Models::PreCheckSqlFlashbackTaskRequest &request);

      /**
       * @summary 刷新评估升级任务的导入元数据
       *
       * @param request RefreshImportMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshImportMetaResponse
       */
      Models::RefreshImportMetaResponse refreshImportMetaWithOptions(const Models::RefreshImportMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 刷新评估升级任务的导入元数据
       *
       * @param request RefreshImportMetaRequest
       * @return RefreshImportMetaResponse
       */
      Models::RefreshImportMetaResponse refreshImportMeta(const Models::RefreshImportMetaRequest &request);

      /**
       * @summary 关闭冷存储
       *
       * @param request ReleaseColdDataVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseColdDataVolumeResponse
       */
      Models::ReleaseColdDataVolumeResponse releaseColdDataVolumeWithOptions(const Models::ReleaseColdDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭冷存储
       *
       * @param request ReleaseColdDataVolumeRequest
       * @return ReleaseColdDataVolumeResponse
       */
      Models::ReleaseColdDataVolumeResponse releaseColdDataVolume(const Models::ReleaseColdDataVolumeRequest &request);

      /**
       * @param request ReleaseInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(const Models::ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReleaseInstancePublicConnectionRequest
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(const Models::ReleaseInstancePublicConnectionRequest &request);

      /**
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @description ****
       *
       * @param request ResetAccountPasswordRestrictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordRestrictResponse
       */
      Models::ResetAccountPasswordRestrictResponse resetAccountPasswordRestrictWithOptions(const Models::ResetAccountPasswordRestrictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description ****
       *
       * @param request ResetAccountPasswordRestrictRequest
       * @return ResetAccountPasswordRestrictResponse
       */
      Models::ResetAccountPasswordRestrictResponse resetAccountPasswordRestrict(const Models::ResetAccountPasswordRestrictRequest &request);

      /**
       * @param request RestartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstanceWithOptions(const Models::RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RestartDBInstanceRequest
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstance(const Models::RestartDBInstanceRequest &request);

      /**
       * @summary 重启数据导入任务
       *
       * @param request RestartDataImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDataImportTaskResponse
       */
      Models::RestartDataImportTaskResponse restartDataImportTaskWithOptions(const Models::RestartDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启数据导入任务
       *
       * @param request RestartDataImportTaskRequest
       * @return RestartDataImportTaskResponse
       */
      Models::RestartDataImportTaskResponse restartDataImportTask(const Models::RestartDataImportTaskRequest &request);

      /**
       * @summary 跳过评估迁移的当前步骤
       *
       * @param request SkipCurrentStepRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipCurrentStepResponse
       */
      Models::SkipCurrentStepResponse skipCurrentStepWithOptions(const Models::SkipCurrentStepRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 跳过评估迁移的当前步骤
       *
       * @param request SkipCurrentStepRequest
       * @return SkipCurrentStepResponse
       */
      Models::SkipCurrentStepResponse skipCurrentStep(const Models::SkipCurrentStepRequest &request);

      /**
       * @summary 开始评估迁移切换
       *
       * @param request StartSwitchDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSwitchDatabaseResponse
       */
      Models::StartSwitchDatabaseResponse startSwitchDatabaseWithOptions(const Models::StartSwitchDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开始评估迁移切换
       *
       * @param request StartSwitchDatabaseRequest
       * @return StartSwitchDatabaseResponse
       */
      Models::StartSwitchDatabaseResponse startSwitchDatabase(const Models::StartSwitchDatabaseRequest &request);

      /**
       * @summary 暂停数据导入任务
       *
       * @param request StopDataImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDataImportTaskResponse
       */
      Models::StopDataImportTaskResponse stopDataImportTaskWithOptions(const Models::StopDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停数据导入任务
       *
       * @param request StopDataImportTaskRequest
       * @return StopDataImportTaskResponse
       */
      Models::StopDataImportTaskResponse stopDataImportTask(const Models::StopDataImportTaskRequest &request);

      /**
       * @summary 提交SQL闪回任务
       *
       * @param request SubmitSqlFlashbackTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSqlFlashbackTaskResponse
       */
      Models::SubmitSqlFlashbackTaskResponse submitSqlFlashbackTaskWithOptions(const Models::SubmitSqlFlashbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交SQL闪回任务
       *
       * @param request SubmitSqlFlashbackTaskRequest
       * @return SubmitSqlFlashbackTaskResponse
       */
      Models::SubmitSqlFlashbackTaskResponse submitSqlFlashbackTask(const Models::SubmitSqlFlashbackTaskRequest &request);

      /**
       * @param request SwitchDBInstanceHARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHAWithOptions(const Models::SwitchDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SwitchDBInstanceHARequest
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHA(const Models::SwitchDBInstanceHARequest &request);

      /**
       * @summary GDN主备切换
       *
       * @param request SwitchGdnMemberRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchGdnMemberRoleResponse
       */
      Models::SwitchGdnMemberRoleResponse switchGdnMemberRoleWithOptions(const Models::SwitchGdnMemberRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GDN主备切换
       *
       * @param request SwitchGdnMemberRoleRequest
       * @return SwitchGdnMemberRoleResponse
       */
      Models::SwitchGdnMemberRoleResponse switchGdnMemberRole(const Models::SwitchGdnMemberRoleRequest &request);

      /**
       * @summary 打标签接口
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打标签接口
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 删标签接口
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删标签接口
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 更新备份策略
       *
       * @param request UpdateBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBackupPolicyResponse
       */
      Models::UpdateBackupPolicyResponse updateBackupPolicyWithOptions(const Models::UpdateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新备份策略
       *
       * @param request UpdateBackupPolicyRequest
       * @return UpdateBackupPolicyResponse
       */
      Models::UpdateBackupPolicyResponse updateBackupPolicy(const Models::UpdateBackupPolicyRequest &request);

      /**
       * @param request UpdateDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDBInstanceSSLResponse
       */
      Models::UpdateDBInstanceSSLResponse updateDBInstanceSSLWithOptions(const Models::UpdateDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateDBInstanceSSLRequest
       * @return UpdateDBInstanceSSLResponse
       */
      Models::UpdateDBInstanceSSLResponse updateDBInstanceSSL(const Models::UpdateDBInstanceSSLRequest &request);

      /**
       * @param request UpdateDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDBInstanceTDEResponse
       */
      Models::UpdateDBInstanceTDEResponse updateDBInstanceTDEWithOptions(const Models::UpdateDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateDBInstanceTDERequest
       * @return UpdateDBInstanceTDEResponse
       */
      Models::UpdateDBInstanceTDEResponse updateDBInstanceTDE(const Models::UpdateDBInstanceTDERequest &request);

      /**
       * @summary 扩缩容实例节点数
       *
       * @param request UpdatePolarDBXInstanceNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolarDBXInstanceNodeResponse
       */
      Models::UpdatePolarDBXInstanceNodeResponse updatePolarDBXInstanceNodeWithOptions(const Models::UpdatePolarDBXInstanceNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 扩缩容实例节点数
       *
       * @param request UpdatePolarDBXInstanceNodeRequest
       * @return UpdatePolarDBXInstanceNodeResponse
       */
      Models::UpdatePolarDBXInstanceNodeResponse updatePolarDBXInstanceNode(const Models::UpdatePolarDBXInstanceNodeRequest &request);

      /**
       * @summary 升级CDC版本
       *
       * @param request UpgradeCDCVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeCDCVersionResponse
       */
      Models::UpgradeCDCVersionResponse upgradeCDCVersionWithOptions(const Models::UpgradeCDCVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级CDC版本
       *
       * @param request UpgradeCDCVersionRequest
       * @return UpgradeCDCVersionResponse
       */
      Models::UpgradeCDCVersionResponse upgradeCDCVersion(const Models::UpgradeCDCVersionRequest &request);

      /**
       * @summary 升级Columnar版本
       *
       * @param request UpgradeColumnarVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeColumnarVersionResponse
       */
      Models::UpgradeColumnarVersionResponse upgradeColumnarVersionWithOptions(const Models::UpgradeColumnarVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级Columnar版本
       *
       * @param request UpgradeColumnarVersionRequest
       * @return UpgradeColumnarVersionResponse
       */
      Models::UpgradeColumnarVersionResponse upgradeColumnarVersion(const Models::UpgradeColumnarVersionRequest &request);

      /**
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersionWithOptions(const Models::UpgradeDBInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersion(const Models::UpgradeDBInstanceKernelVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
