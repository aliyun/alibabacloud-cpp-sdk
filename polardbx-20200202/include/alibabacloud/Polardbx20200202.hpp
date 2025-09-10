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
       * @summary 创建实例
       *
       * @param tmpReq CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

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
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

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
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request UpdateBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBackupPolicyResponse
       */
      Models::UpdateBackupPolicyResponse updateBackupPolicyWithOptions(const Models::UpdateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
