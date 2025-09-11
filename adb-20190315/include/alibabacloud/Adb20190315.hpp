// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ADB20190315_HPP_
#define ALIBABACLOUD_ADB20190315_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Adb20190315Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Adb20190315.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 申请公网链接
       *
       * @param request AllocateClusterPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateClusterPublicConnectionResponse
       */
      Models::AllocateClusterPublicConnectionResponse allocateClusterPublicConnectionWithOptions(const Models::AllocateClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请公网链接
       *
       * @param request AllocateClusterPublicConnectionRequest
       * @return AllocateClusterPublicConnectionResponse
       */
      Models::AllocateClusterPublicConnectionResponse allocateClusterPublicConnection(const Models::AllocateClusterPublicConnectionRequest &request);

      /**
       * @summary ApplyAdviceById
       *
       * @param request ApplyAdviceByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAdviceByIdResponse
       */
      Models::ApplyAdviceByIdResponse applyAdviceByIdWithOptions(const Models::ApplyAdviceByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ApplyAdviceById
       *
       * @param request ApplyAdviceByIdRequest
       * @return ApplyAdviceByIdResponse
       */
      Models::ApplyAdviceByIdResponse applyAdviceById(const Models::ApplyAdviceByIdRequest &request);

      /**
       * @summary 打通用户ENI
       *
       * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition.
       *
       * @param request AttachUserENIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachUserENIResponse
       */
      Models::AttachUserENIResponse attachUserENIWithOptions(const Models::AttachUserENIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打通用户ENI
       *
       * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition.
       *
       * @param request AttachUserENIRequest
       * @return AttachUserENIResponse
       */
      Models::AttachUserENIResponse attachUserENI(const Models::AttachUserENIRequest &request);

      /**
       * @summary BatchApplyAdviceByIdList
       *
       * @param request BatchApplyAdviceByIdListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchApplyAdviceByIdListResponse
       */
      Models::BatchApplyAdviceByIdListResponse batchApplyAdviceByIdListWithOptions(const Models::BatchApplyAdviceByIdListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary BatchApplyAdviceByIdList
       *
       * @param request BatchApplyAdviceByIdListRequest
       * @return BatchApplyAdviceByIdListResponse
       */
      Models::BatchApplyAdviceByIdListResponse batchApplyAdviceByIdList(const Models::BatchApplyAdviceByIdListRequest &request);

      /**
       * @summary Associates a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster with a database account.
       *
       * @description ## Precautions
       * *   This operation is applicable only for elastic clusters of 32 cores or more.
       * *   The default resource group USER_DEFAULT cannot be associated with a database account.
       *
       * @param request BindDBResourceGroupWithUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindDBResourceGroupWithUserResponse
       */
      Models::BindDBResourceGroupWithUserResponse bindDBResourceGroupWithUserWithOptions(const Models::BindDBResourceGroupWithUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster with a database account.
       *
       * @description ## Precautions
       * *   This operation is applicable only for elastic clusters of 32 cores or more.
       * *   The default resource group USER_DEFAULT cannot be associated with a database account.
       *
       * @param request BindDBResourceGroupWithUserRequest
       * @return BindDBResourceGroupWithUserResponse
       */
      Models::BindDBResourceGroupWithUserResponse bindDBResourceGroupWithUser(const Models::BindDBResourceGroupWithUserRequest &request);

      /**
       * @summary 绑定资源组用户
       *
       * @description *   This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
       * *   The default resource group USER_DEFAULT cannot be associated with a database account.
       *
       * @param request BindDBResourcePoolWithUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindDBResourcePoolWithUserResponse
       */
      Models::BindDBResourcePoolWithUserResponse bindDBResourcePoolWithUserWithOptions(const Models::BindDBResourcePoolWithUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定资源组用户
       *
       * @description *   This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
       * *   The default resource group USER_DEFAULT cannot be associated with a database account.
       *
       * @param request BindDBResourcePoolWithUserRequest
       * @return BindDBResourcePoolWithUserResponse
       */
      Models::BindDBResourcePoolWithUserResponse bindDBResourcePoolWithUser(const Models::BindDBResourcePoolWithUserRequest &request);

      /**
       * @summary Cancels O\\&M events.
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels O\\&M events.
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Checks whether a service-linked role is created.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a service-linked role is created.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary Creates a database account for an AnalyticDB for MySQL cluster.
       *
       * @param tmpReq CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account for an AnalyticDB for MySQL cluster.
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates an AnalyticDB for MySQL Data Warehouse Edition cluster.
       *
       * @description After you create a cluster, you are billed for the cluster specifications that you select. For more information about the billable items and pricing for Data Warehouse Edition  clusters, see [Billable items of Data Warehouse Edition](https://help.aliyun.com/document_detail/303131.html) and [Pricing for Data Warehouse Edition](https://help.aliyun.com/document_detail/135229.html).
       *
       * @param request CreateDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBClusterWithOptions(const Models::CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AnalyticDB for MySQL Data Warehouse Edition cluster.
       *
       * @description After you create a cluster, you are billed for the cluster specifications that you select. For more information about the billable items and pricing for Data Warehouse Edition  clusters, see [Billable items of Data Warehouse Edition](https://help.aliyun.com/document_detail/303131.html) and [Pricing for Data Warehouse Edition](https://help.aliyun.com/document_detail/135229.html).
       *
       * @param request CreateDBClusterRequest
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBCluster(const Models::CreateDBClusterRequest &request);

      /**
       * @summary Creates a resource group for an AnalyticDB for MySQL cluster.
       *
       * @description This operation is suitable for the following editions:
       * *   **Enterprise Edition**.
       * *   **Basic Edition**.
       * *   **Data Lakehouse Edition**.
       * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more.
       *
       * @param tmpReq CreateDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBResourceGroupResponse
       */
      Models::CreateDBResourceGroupResponse createDBResourceGroupWithOptions(const Models::CreateDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource group for an AnalyticDB for MySQL cluster.
       *
       * @description This operation is suitable for the following editions:
       * *   **Enterprise Edition**.
       * *   **Basic Edition**.
       * *   **Data Lakehouse Edition**.
       * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more.
       *
       * @param request CreateDBResourceGroupRequest
       * @return CreateDBResourceGroupResponse
       */
      Models::CreateDBResourceGroupResponse createDBResourceGroup(const Models::CreateDBResourceGroupRequest &request);

      /**
       * @summary 创建资源组
       *
       * @description This operation is applicable only for elastic clusters of 32 cores or more.
       *
       * @param request CreateDBResourcePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBResourcePoolResponse
       */
      Models::CreateDBResourcePoolResponse createDBResourcePoolWithOptions(const Models::CreateDBResourcePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资源组
       *
       * @description This operation is applicable only for elastic clusters of 32 cores or more.
       *
       * @param request CreateDBResourcePoolRequest
       * @return CreateDBResourcePoolResponse
       */
      Models::CreateDBResourcePoolResponse createDBResourcePool(const Models::CreateDBResourcePoolRequest &request);

      /**
       * @summary Creates a scheduled scaling plan. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
       *
       * @description ###
       * You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
       *
       * @param request CreateElasticPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateElasticPlanResponse
       */
      Models::CreateElasticPlanResponse createElasticPlanWithOptions(const Models::CreateElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled scaling plan. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
       *
       * @description ###
       * You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
       *
       * @param request CreateElasticPlanRequest
       * @return CreateElasticPlanResponse
       */
      Models::CreateElasticPlanResponse createElasticPlan(const Models::CreateElasticPlanRequest &request);

      /**
       * @summary Creates a service-linked role.
       *
       * @param request CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role.
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary 删除高权限帐号
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除高权限帐号
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Manually deletes backup sets.
       *
       * @description *   Deleting backup sets is an asynchronous operation and may require 10 to 20 minutes to complete.
       * *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
       * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
       *
       * @param request DeleteBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupsResponse
       */
      Models::DeleteBackupsResponse deleteBackupsWithOptions(const Models::DeleteBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually deletes backup sets.
       *
       * @description *   Deleting backup sets is an asynchronous operation and may require 10 to 20 minutes to complete.
       * *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
       * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
       *
       * @param request DeleteBackupsRequest
       * @return DeleteBackupsResponse
       */
      Models::DeleteBackupsResponse deleteBackups(const Models::DeleteBackupsRequest &request);

      /**
       * @summary Deletes an AnalyticDB for MySQL cluster.
       *
       * @description *   You cannot delete subscription clusters by calling API operations. After expiration, subscription clusters are automatically released. If you no longer need a cluster, you can unsubscribe from the cluster in the Expenses and Costs console. For information about cluster refunds, see [Refund policy](https://help.aliyun.com/document_detail/471477.html).
       * *   After you delete a cluster, resources of the cluster are immediately released, and data of the cluster is no longer retained and cannot be restored. Proceed with caution.
       * *   The cluster that you want to delete must be in the Running state.
       *
       * @param request DeleteDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBClusterWithOptions(const Models::DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AnalyticDB for MySQL cluster.
       *
       * @description *   You cannot delete subscription clusters by calling API operations. After expiration, subscription clusters are automatically released. If you no longer need a cluster, you can unsubscribe from the cluster in the Expenses and Costs console. For information about cluster refunds, see [Refund policy](https://help.aliyun.com/document_detail/471477.html).
       * *   After you delete a cluster, resources of the cluster are immediately released, and data of the cluster is no longer retained and cannot be restored. Proceed with caution.
       * *   The cluster that you want to delete must be in the Running state.
       *
       * @param request DeleteDBClusterRequest
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBCluster(const Models::DeleteDBClusterRequest &request);

      /**
       * @summary Deletes a resource group from an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @description ### Precautions
       * *   You can call this operation only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
       * *   The default resource group USER_DEFAULT cannot be deleted.
       *
       * @param request DeleteDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBResourceGroupResponse
       */
      Models::DeleteDBResourceGroupResponse deleteDBResourceGroupWithOptions(const Models::DeleteDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource group from an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @description ### Precautions
       * *   You can call this operation only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
       * *   The default resource group USER_DEFAULT cannot be deleted.
       *
       * @param request DeleteDBResourceGroupRequest
       * @return DeleteDBResourceGroupResponse
       */
      Models::DeleteDBResourceGroupResponse deleteDBResourceGroup(const Models::DeleteDBResourceGroupRequest &request);

      /**
       * @summary 删除资源组
       *
       * @description **Precautions**
       * *   This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
       * *   The default resource group USER_DEFAULT cannot be deleted.
       *
       * @param request DeleteDBResourcePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBResourcePoolResponse
       */
      Models::DeleteDBResourcePoolResponse deleteDBResourcePoolWithOptions(const Models::DeleteDBResourcePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源组
       *
       * @description **Precautions**
       * *   This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
       * *   The default resource group USER_DEFAULT cannot be deleted.
       *
       * @param request DeleteDBResourcePoolRequest
       * @return DeleteDBResourcePoolResponse
       */
      Models::DeleteDBResourcePoolResponse deleteDBResourcePool(const Models::DeleteDBResourcePoolRequest &request);

      /**
       * @summary Deletes a scheduled scaling plan. You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition clusters in elastic mode for Cluster Edition.
       *
       * @param request DeleteElasticPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteElasticPlanResponse
       */
      Models::DeleteElasticPlanResponse deleteElasticPlanWithOptions(const Models::DeleteElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduled scaling plan. You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition clusters in elastic mode for Cluster Edition.
       *
       * @param request DeleteElasticPlanRequest
       * @return DeleteElasticPlanResponse
       */
      Models::DeleteElasticPlanResponse deleteElasticPlan(const Models::DeleteElasticPlanRequest &request);

      /**
       * @summary Queries abnormal SQL patterns within a time range.
       *
       * @param request DescribeAbnormalPatternDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAbnormalPatternDetectionResponse
       */
      Models::DescribeAbnormalPatternDetectionResponse describeAbnormalPatternDetectionWithOptions(const Models::DescribeAbnormalPatternDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries abnormal SQL patterns within a time range.
       *
       * @param request DescribeAbnormalPatternDetectionRequest
       * @return DescribeAbnormalPatternDetectionResponse
       */
      Models::DescribeAbnormalPatternDetectionResponse describeAbnormalPatternDetection(const Models::DescribeAbnormalPatternDetectionRequest &request);

      /**
       * @summary Queries a list of database accounts for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of database accounts for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries the configuration information about O\\&M tasks.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConfWithOptions(const Models::DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information about O\\&M tasks.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConf(const Models::DescribeActiveOperationMaintainConfRequest &request);

      /**
       * @summary Queries the information about O\\&M tasks.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about O\\&M tasks.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary Queries whether the suggestion feature is enabled for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAdviceServiceEnabledRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdviceServiceEnabledResponse
       */
      Models::DescribeAdviceServiceEnabledResponse describeAdviceServiceEnabledWithOptions(const Models::DescribeAdviceServiceEnabledRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the suggestion feature is enabled for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAdviceServiceEnabledRequest
       * @return DescribeAdviceServiceEnabledResponse
       */
      Models::DescribeAdviceServiceEnabledResponse describeAdviceServiceEnabled(const Models::DescribeAdviceServiceEnabledRequest &request);

      /**
       * @summary Queries the information about an account or the list of accounts of a specific database within an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAllAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllAccountsResponse
       */
      Models::DescribeAllAccountsResponse describeAllAccountsWithOptions(const Models::DescribeAllAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an account or the list of accounts of a specific database within an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAllAccountsRequest
       * @return DescribeAllAccountsResponse
       */
      Models::DescribeAllAccountsResponse describeAllAccounts(const Models::DescribeAllAccountsRequest &request);

      /**
       * @summary Queries a list of databases, tables, and columns in a cluster.
       *
       * @param request DescribeAllDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllDataSourceResponse
       */
      Models::DescribeAllDataSourceResponse describeAllDataSourceWithOptions(const Models::DescribeAllDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of databases, tables, and columns in a cluster.
       *
       * @param request DescribeAllDataSourceRequest
       * @return DescribeAllDataSourceResponse
       */
      Models::DescribeAllDataSourceResponse describeAllDataSource(const Models::DescribeAllDataSourceRequest &request);

      /**
       * @summary Queries the applied optimization suggestions for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAppliedAdvicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppliedAdvicesResponse
       */
      Models::DescribeAppliedAdvicesResponse describeAppliedAdvicesWithOptions(const Models::DescribeAppliedAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applied optimization suggestions for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAppliedAdvicesRequest
       * @return DescribeAppliedAdvicesResponse
       */
      Models::DescribeAppliedAdvicesResponse describeAppliedAdvices(const Models::DescribeAppliedAdvicesRequest &request);

      /**
       * @summary Queries the SQL audit settings of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAuditLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditLogConfigResponse
       */
      Models::DescribeAuditLogConfigResponse describeAuditLogConfigWithOptions(const Models::DescribeAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SQL audit settings of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAuditLogConfigRequest
       * @return DescribeAuditLogConfigResponse
       */
      Models::DescribeAuditLogConfigResponse describeAuditLogConfig(const Models::DescribeAuditLogConfigRequest &request);

      /**
       * @summary Queries the SQL audit logs of an AnalyticDB for MySQL cluster.
       *
       * @description Before you call the DescribeAuditLogRecords operation to query the SQL audit logs of an AnalyticDB for MySQL cluster, you must enable SQL audit for the cluster. You can call the [DescribeAuditLogConfig](https://help.aliyun.com/document_detail/190628.html) operation to query the status of SQL audit. If SQL audit is disabled, you can call the [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/190629.html) operation to enable SQL audit.
       * SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL audit was disabled and re-enabled, only SQL audit logs from the time when SQL audit was re-enabled can be queried. The following operations are not recorded in SQL audit logs: **INSERT INTO VALUES**, **REPLACE INTO VALUES**, and **UPSERT INTO VALUES**.
       *
       * @param request DescribeAuditLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditLogRecordsResponse
       */
      Models::DescribeAuditLogRecordsResponse describeAuditLogRecordsWithOptions(const Models::DescribeAuditLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SQL audit logs of an AnalyticDB for MySQL cluster.
       *
       * @description Before you call the DescribeAuditLogRecords operation to query the SQL audit logs of an AnalyticDB for MySQL cluster, you must enable SQL audit for the cluster. You can call the [DescribeAuditLogConfig](https://help.aliyun.com/document_detail/190628.html) operation to query the status of SQL audit. If SQL audit is disabled, you can call the [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/190629.html) operation to enable SQL audit.
       * SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL audit was disabled and re-enabled, only SQL audit logs from the time when SQL audit was re-enabled can be queried. The following operations are not recorded in SQL audit logs: **INSERT INTO VALUES**, **REPLACE INTO VALUES**, and **UPSERT INTO VALUES**.
       *
       * @param request DescribeAuditLogRecordsRequest
       * @return DescribeAuditLogRecordsResponse
       */
      Models::DescribeAuditLogRecordsResponse describeAuditLogRecords(const Models::DescribeAuditLogRecordsRequest &request);

      /**
       * @summary Queries the auto-renewal status of a subscription AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoRenewAttributeResponse
       */
      Models::DescribeAutoRenewAttributeResponse describeAutoRenewAttributeWithOptions(const Models::DescribeAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal status of a subscription AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAutoRenewAttributeRequest
       * @return DescribeAutoRenewAttributeResponse
       */
      Models::DescribeAutoRenewAttributeResponse describeAutoRenewAttribute(const Models::DescribeAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the available suggestions for cluster optimization.
       *
       * @param request DescribeAvailableAdvicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableAdvicesResponse
       */
      Models::DescribeAvailableAdvicesResponse describeAvailableAdvicesWithOptions(const Models::DescribeAvailableAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available suggestions for cluster optimization.
       *
       * @param request DescribeAvailableAdvicesRequest
       * @return DescribeAvailableAdvicesResponse
       */
      Models::DescribeAvailableAdvicesResponse describeAvailableAdvices(const Models::DescribeAvailableAdvicesRequest &request);

      /**
       * @summary Queries the resources of clusters within zones of a region.
       *
       * @param request DescribeAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResourceWithOptions(const Models::DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources of clusters within zones of a region.
       *
       * @param request DescribeAvailableResourceRequest
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResource(const Models::DescribeAvailableResourceRequest &request);

      /**
       * @summary 查看备份策略
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看备份策略
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries a list of backup sets for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of backup sets for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Queries the bad SQL statements that affect cluster stability within a time range.
       *
       * @param request DescribeBadSqlDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBadSqlDetectionResponse
       */
      Models::DescribeBadSqlDetectionResponse describeBadSqlDetectionWithOptions(const Models::DescribeBadSqlDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bad SQL statements that affect cluster stability within a time range.
       *
       * @param request DescribeBadSqlDetectionRequest
       * @return DescribeBadSqlDetectionResponse
       */
      Models::DescribeBadSqlDetectionResponse describeBadSqlDetection(const Models::DescribeBadSqlDetectionRequest &request);

      /**
       * @summary Queries a list of columns in a table within an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumnsWithOptions(const Models::DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of columns in a table within an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeColumnsRequest
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumns(const Models::DescribeColumnsRequest &request);

      /**
       * @summary Queries the specifications of computing resources for AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
       *
       * @param request DescribeComputeResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComputeResourceResponse
       */
      Models::DescribeComputeResourceResponse describeComputeResourceWithOptions(const Models::DescribeComputeResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of computing resources for AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
       *
       * @param request DescribeComputeResourceRequest
       * @return DescribeComputeResourceResponse
       */
      Models::DescribeComputeResourceResponse describeComputeResource(const Models::DescribeComputeResourceRequest &request);

      /**
       * @summary Queries the current number of connections to an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeConnectionCountRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConnectionCountRecordsResponse
       */
      Models::DescribeConnectionCountRecordsResponse describeConnectionCountRecordsWithOptions(const Models::DescribeConnectionCountRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current number of connections to an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeConnectionCountRecordsRequest
       * @return DescribeConnectionCountRecordsResponse
       */
      Models::DescribeConnectionCountRecordsResponse describeConnectionCountRecords(const Models::DescribeConnectionCountRecordsRequest &request);

      /**
       * @summary Queries the diagnostic results of the access layer.
       *
       * @param request DescribeControllerDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeControllerDetectionResponse
       */
      Models::DescribeControllerDetectionResponse describeControllerDetectionWithOptions(const Models::DescribeControllerDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic results of the access layer.
       *
       * @param request DescribeControllerDetectionRequest
       * @return DescribeControllerDetectionResponse
       */
      Models::DescribeControllerDetectionResponse describeControllerDetection(const Models::DescribeControllerDetectionRequest &request);

      /**
       * @summary Queries a list of IP address whitelists for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDBClusterAccessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAccessWhiteListResponse
       */
      Models::DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteListWithOptions(const Models::DescribeDBClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of IP address whitelists for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDBClusterAccessWhiteListRequest
       * @return DescribeDBClusterAccessWhiteListResponse
       */
      Models::DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteList(const Models::DescribeDBClusterAccessWhiteListRequest &request);

      /**
       * @summary Queries the information about an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDBClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(const Models::DescribeDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDBClusterAttributeRequest
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttribute(const Models::DescribeDBClusterAttributeRequest &request);

      /**
       * @summary 查询集群健康检查状态
       *
       * @param request DescribeDBClusterHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterHealthStatusResponse
       */
      Models::DescribeDBClusterHealthStatusResponse describeDBClusterHealthStatusWithOptions(const Models::DescribeDBClusterHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询集群健康检查状态
       *
       * @param request DescribeDBClusterHealthStatusRequest
       * @return DescribeDBClusterHealthStatusResponse
       */
      Models::DescribeDBClusterHealthStatusResponse describeDBClusterHealthStatus(const Models::DescribeDBClusterHealthStatusRequest &request);

      /**
       * @summary Queries the network information about an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDBClusterNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterNetInfoResponse
       */
      Models::DescribeDBClusterNetInfoResponse describeDBClusterNetInfoWithOptions(const Models::DescribeDBClusterNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network information about an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDBClusterNetInfoRequest
       * @return DescribeDBClusterNetInfoResponse
       */
      Models::DescribeDBClusterNetInfoResponse describeDBClusterNetInfo(const Models::DescribeDBClusterNetInfoRequest &request);

      /**
       * @summary Queries the performance data of an AnalyticDB for MySQL cluster.
       *
       * @description You can call this operation to query the performance data of a cluster over a time range based on its performance metrics. The data is collected every 30 seconds. This operation allows you to query information about slow queries, such as the SQL query duration, number of scanned rows, and amount of scanned data.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(const Models::DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of an AnalyticDB for MySQL cluster.
       *
       * @description You can call this operation to query the performance data of a cluster over a time range based on its performance metrics. The data is collected every 30 seconds. This operation allows you to query information about slow queries, such as the SQL query duration, number of scanned rows, and amount of scanned data.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformance(const Models::DescribeDBClusterPerformanceRequest &request);

      /**
       * @summary Queries the monitoring information about resource groups within an AnalyticDB for MySQL cluster.
       *
       * @description > You can also view the monitoring information about resource groups within an AnalyticDB for MySQL cluster in elastic mode for Cluster Edition in the form of graphs in the console. For more information, see [View monitoring information](https://help.aliyun.com/document_detail/188721.html).
       *
       * @param request DescribeDBClusterResourcePoolPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterResourcePoolPerformanceResponse
       */
      Models::DescribeDBClusterResourcePoolPerformanceResponse describeDBClusterResourcePoolPerformanceWithOptions(const Models::DescribeDBClusterResourcePoolPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring information about resource groups within an AnalyticDB for MySQL cluster.
       *
       * @description > You can also view the monitoring information about resource groups within an AnalyticDB for MySQL cluster in elastic mode for Cluster Edition in the form of graphs in the console. For more information, see [View monitoring information](https://help.aliyun.com/document_detail/188721.html).
       *
       * @param request DescribeDBClusterResourcePoolPerformanceRequest
       * @return DescribeDBClusterResourcePoolPerformanceResponse
       */
      Models::DescribeDBClusterResourcePoolPerformanceResponse describeDBClusterResourcePoolPerformance(const Models::DescribeDBClusterResourcePoolPerformanceRequest &request);

      /**
       * @summary Queries the SSL configurations of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @param request DescribeDBClusterSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterSSLResponse
       */
      Models::DescribeDBClusterSSLResponse describeDBClusterSSLWithOptions(const Models::DescribeDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL configurations of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @param request DescribeDBClusterSSLRequest
       * @return DescribeDBClusterSSLResponse
       */
      Models::DescribeDBClusterSSLResponse describeDBClusterSSL(const Models::DescribeDBClusterSSLRequest &request);

      /**
       * @summary Queries the number of shards in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDBClusterShardNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterShardNumberResponse
       */
      Models::DescribeDBClusterShardNumberResponse describeDBClusterShardNumberWithOptions(const Models::DescribeDBClusterShardNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of shards in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDBClusterShardNumberRequest
       * @return DescribeDBClusterShardNumberResponse
       */
      Models::DescribeDBClusterShardNumberResponse describeDBClusterShardNumber(const Models::DescribeDBClusterShardNumberRequest &request);

      /**
       * @summary Queries the storage overview information of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster, such as the total data size, hot data size, cold data size, and data growth.
       *
       * @param request DescribeDBClusterSpaceSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterSpaceSummaryResponse
       */
      Models::DescribeDBClusterSpaceSummaryResponse describeDBClusterSpaceSummaryWithOptions(const Models::DescribeDBClusterSpaceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage overview information of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster, such as the total data size, hot data size, cold data size, and data growth.
       *
       * @param request DescribeDBClusterSpaceSummaryRequest
       * @return DescribeDBClusterSpaceSummaryResponse
       */
      Models::DescribeDBClusterSpaceSummaryResponse describeDBClusterSpaceSummary(const Models::DescribeDBClusterSpaceSummaryRequest &request);

      /**
       * @summary Queries the status of AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
       *
       * @param request DescribeDBClusterStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterStatusResponse
       */
      Models::DescribeDBClusterStatusResponse describeDBClusterStatusWithOptions(const Models::DescribeDBClusterStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
       *
       * @param request DescribeDBClusterStatusRequest
       * @return DescribeDBClusterStatusResponse
       */
      Models::DescribeDBClusterStatusResponse describeDBClusterStatus(const Models::DescribeDBClusterStatusRequest &request);

      /**
       * @summary Queries a list of AnalyticDB for MySQL clusters within a region.
       *
       * @param request DescribeDBClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClustersWithOptions(const Models::DescribeDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AnalyticDB for MySQL clusters within a region.
       *
       * @param request DescribeDBClustersRequest
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClusters(const Models::DescribeDBClustersRequest &request);

      /**
       * @summary Queries the information about a resource group for an AnalyticDB for MySQL cluster.
       *
       * @description This operation is suitable for the following editions:
       * *   **Enterprise Edition**.
       * *   **Basic Edition**.
       * *   **Data Lakehouse Edition**.
       * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more.
       *
       * @param request DescribeDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBResourceGroupResponse
       */
      Models::DescribeDBResourceGroupResponse describeDBResourceGroupWithOptions(const Models::DescribeDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a resource group for an AnalyticDB for MySQL cluster.
       *
       * @description This operation is suitable for the following editions:
       * *   **Enterprise Edition**.
       * *   **Basic Edition**.
       * *   **Data Lakehouse Edition**.
       * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more.
       *
       * @param request DescribeDBResourceGroupRequest
       * @return DescribeDBResourceGroupResponse
       */
      Models::DescribeDBResourceGroupResponse describeDBResourceGroup(const Models::DescribeDBResourceGroupRequest &request);

      /**
       * @summary 查询资源组详情
       *
       * @description This operation is applicable only for elastic clusters of 32 cores or more.
       *
       * @param request DescribeDBResourcePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBResourcePoolResponse
       */
      Models::DescribeDBResourcePoolResponse describeDBResourcePoolWithOptions(const Models::DescribeDBResourcePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资源组详情
       *
       * @description This operation is applicable only for elastic clusters of 32 cores or more.
       *
       * @param request DescribeDBResourcePoolRequest
       * @return DescribeDBResourcePoolResponse
       */
      Models::DescribeDBResourcePoolResponse describeDBResourcePool(const Models::DescribeDBResourcePoolRequest &request);

      /**
       * @summary Queries the deduplicated statistics of SQL statements that meet a condition of the resource group, database, username, and source IP address in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDiagnosisDimensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisDimensionsResponse
       */
      Models::DescribeDiagnosisDimensionsResponse describeDiagnosisDimensionsWithOptions(const Models::DescribeDiagnosisDimensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deduplicated statistics of SQL statements that meet a condition of the resource group, database, username, and source IP address in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDiagnosisDimensionsRequest
       * @return DescribeDiagnosisDimensionsResponse
       */
      Models::DescribeDiagnosisDimensionsResponse describeDiagnosisDimensions(const Models::DescribeDiagnosisDimensionsRequest &request);

      /**
       * @summary Queries the monitoring information about queries within a time range.
       *
       * @param request DescribeDiagnosisMonitorPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisMonitorPerformanceResponse
       */
      Models::DescribeDiagnosisMonitorPerformanceResponse describeDiagnosisMonitorPerformanceWithOptions(const Models::DescribeDiagnosisMonitorPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring information about queries within a time range.
       *
       * @param request DescribeDiagnosisMonitorPerformanceRequest
       * @return DescribeDiagnosisMonitorPerformanceResponse
       */
      Models::DescribeDiagnosisMonitorPerformanceResponse describeDiagnosisMonitorPerformance(const Models::DescribeDiagnosisMonitorPerformanceRequest &request);

      /**
       * @summary Queries the diagnostic information about SQL statements that meet a condition in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDiagnosisRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisRecordsResponse
       */
      Models::DescribeDiagnosisRecordsResponse describeDiagnosisRecordsWithOptions(const Models::DescribeDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic information about SQL statements that meet a condition in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDiagnosisRecordsRequest
       * @return DescribeDiagnosisRecordsResponse
       */
      Models::DescribeDiagnosisRecordsResponse describeDiagnosisRecords(const Models::DescribeDiagnosisRecordsRequest &request);

      /**
       * @summary Queries the execution information about an SQL statement, including the execution plan, execution information, resource usage, and self-diagnostics results.
       *
       * @param request DescribeDiagnosisSQLInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisSQLInfoResponse
       */
      Models::DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfoWithOptions(const Models::DescribeDiagnosisSQLInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution information about an SQL statement, including the execution plan, execution information, resource usage, and self-diagnostics results.
       *
       * @param request DescribeDiagnosisSQLInfoRequest
       * @return DescribeDiagnosisSQLInfoResponse
       */
      Models::DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfo(const Models::DescribeDiagnosisSQLInfoRequest &request);

      /**
       * @summary Queries the execution information about distributed tasks in a stage of a query.
       *
       * @param request DescribeDiagnosisTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisTasksResponse
       */
      Models::DescribeDiagnosisTasksResponse describeDiagnosisTasksWithOptions(const Models::DescribeDiagnosisTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution information about distributed tasks in a stage of a query.
       *
       * @param request DescribeDiagnosisTasksRequest
       * @return DescribeDiagnosisTasksResponse
       */
      Models::DescribeDiagnosisTasksResponse describeDiagnosisTasks(const Models::DescribeDiagnosisTasksRequest &request);

      /**
       * @summary Queries a list of download tasks for the last five SQL queries of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDownloadRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadRecordsResponse
       */
      Models::DescribeDownloadRecordsResponse describeDownloadRecordsWithOptions(const Models::DescribeDownloadRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of download tasks for the last five SQL queries of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeDownloadRecordsRequest
       * @return DescribeDownloadRecordsResponse
       */
      Models::DescribeDownloadRecordsResponse describeDownloadRecords(const Models::DescribeDownloadRecordsRequest &request);

      /**
       * @summary Queries the range for the number of elastic I/O units (EIUs) for an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @param request DescribeEIURangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEIURangeResponse
       */
      Models::DescribeEIURangeResponse describeEIURangeWithOptions(const Models::DescribeEIURangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the range for the number of elastic I/O units (EIUs) for an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @param request DescribeEIURangeRequest
       * @return DescribeEIURangeResponse
       */
      Models::DescribeEIURangeResponse describeEIURange(const Models::DescribeEIURangeRequest &request);

      /**
       * @summary 查看日资源弹性
       *
       * @description This operation is available only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
       *
       * @param request DescribeElasticDailyPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticDailyPlanResponse
       */
      Models::DescribeElasticDailyPlanResponse describeElasticDailyPlanWithOptions(const Models::DescribeElasticDailyPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看日资源弹性
       *
       * @description This operation is available only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
       *
       * @param request DescribeElasticDailyPlanRequest
       * @return DescribeElasticDailyPlanResponse
       */
      Models::DescribeElasticDailyPlanResponse describeElasticDailyPlan(const Models::DescribeElasticDailyPlanRequest &request);

      /**
       * @summary Queries scaling plans of an AnalyticDB for MySQL cluster. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
       *
       * @description ###
       * You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
       *
       * @param request DescribeElasticPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticPlanResponse
       */
      Models::DescribeElasticPlanResponse describeElasticPlanWithOptions(const Models::DescribeElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scaling plans of an AnalyticDB for MySQL cluster. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
       *
       * @description ###
       * You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
       *
       * @param request DescribeElasticPlanRequest
       * @return DescribeElasticPlanResponse
       */
      Models::DescribeElasticPlanResponse describeElasticPlan(const Models::DescribeElasticPlanRequest &request);

      /**
       * @summary Queries the tables that have excessive primary key fields in an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @param request DescribeExcessivePrimaryKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExcessivePrimaryKeysResponse
       */
      Models::DescribeExcessivePrimaryKeysResponse describeExcessivePrimaryKeysWithOptions(const Models::DescribeExcessivePrimaryKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tables that have excessive primary key fields in an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @param request DescribeExcessivePrimaryKeysRequest
       * @return DescribeExcessivePrimaryKeysResponse
       */
      Models::DescribeExcessivePrimaryKeysResponse describeExcessivePrimaryKeys(const Models::DescribeExcessivePrimaryKeysRequest &request);

      /**
       * @summary Queries the diagnostic results of the compute layer.
       *
       * @param request DescribeExecutorDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExecutorDetectionResponse
       */
      Models::DescribeExecutorDetectionResponse describeExecutorDetectionWithOptions(const Models::DescribeExecutorDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic results of the compute layer.
       *
       * @param request DescribeExecutorDetectionRequest
       * @return DescribeExecutorDetectionResponse
       */
      Models::DescribeExecutorDetectionResponse describeExecutorDetection(const Models::DescribeExecutorDetectionRequest &request);

      /**
       * @summary Queries the information about historical events in the event center.
       *
       * @param request DescribeHistoryEventsStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStatWithOptions(const Models::DescribeHistoryEventsStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about historical events in the event center.
       *
       * @param request DescribeHistoryEventsStatRequest
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStat(const Models::DescribeHistoryEventsStatRequest &request);

      /**
       * @summary Queries the disk usage of all storage nodes.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeInclinedNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInclinedNodesResponse
       */
      Models::DescribeInclinedNodesResponse describeInclinedNodesWithOptions(const Models::DescribeInclinedNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the disk usage of all storage nodes.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeInclinedNodesRequest
       * @return DescribeInclinedNodesResponse
       */
      Models::DescribeInclinedNodesResponse describeInclinedNodes(const Models::DescribeInclinedNodesRequest &request);

      /**
       * @summary Queries the information about skewed tables for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeInclinedTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInclinedTablesResponse
       */
      Models::DescribeInclinedTablesResponse describeInclinedTablesWithOptions(const Models::DescribeInclinedTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about skewed tables for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeInclinedTablesRequest
       * @return DescribeInclinedTablesResponse
       */
      Models::DescribeInclinedTablesResponse describeInclinedTables(const Models::DescribeInclinedTablesRequest &request);

      /**
       * @summary Queries the information about the minor version of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKernelVersionResponse
       */
      Models::DescribeKernelVersionResponse describeKernelVersionWithOptions(const Models::DescribeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the minor version of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeKernelVersionRequest
       * @return DescribeKernelVersionResponse
       */
      Models::DescribeKernelVersionResponse describeKernelVersion(const Models::DescribeKernelVersionRequest &request);

      /**
       * @summary Queries a list of Key Management Service (KMS) keys.
       *
       * @param request DescribeKmsKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKmsKeysResponse
       */
      Models::DescribeKmsKeysResponse describeKmsKeysWithOptions(const Models::DescribeKmsKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Key Management Service (KMS) keys.
       *
       * @param request DescribeKmsKeysRequest
       * @return DescribeKmsKeysResponse
       */
      Models::DescribeKmsKeysResponse describeKmsKeys(const Models::DescribeKmsKeysRequest &request);

      /**
       * @summary Queries the information about asynchronous import and export tasks of an AnalyticDB for MySQL cluster.
       *
       * @description For information about how to asynchronously submit import and export tasks, see [Asynchronously submit an import or export task](https://help.aliyun.com/document_detail/160291.html).
       *
       * @param request DescribeLoadTasksRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadTasksRecordsResponse
       */
      Models::DescribeLoadTasksRecordsResponse describeLoadTasksRecordsWithOptions(const Models::DescribeLoadTasksRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about asynchronous import and export tasks of an AnalyticDB for MySQL cluster.
       *
       * @description For information about how to asynchronously submit import and export tasks, see [Asynchronously submit an import or export task](https://help.aliyun.com/document_detail/160291.html).
       *
       * @param request DescribeLoadTasksRecordsRequest
       * @return DescribeLoadTasksRecordsResponse
       */
      Models::DescribeLoadTasksRecordsResponse describeLoadTasksRecords(const Models::DescribeLoadTasksRecordsRequest &request);

      /**
       * @summary Queries the information about a log shipping job.
       *
       * @param request DescribeLogHubAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogHubAttributeResponse
       */
      Models::DescribeLogHubAttributeResponse describeLogHubAttributeWithOptions(const Models::DescribeLogHubAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a log shipping job.
       *
       * @param request DescribeLogHubAttributeRequest
       * @return DescribeLogHubAttributeResponse
       */
      Models::DescribeLogHubAttributeResponse describeLogHubAttribute(const Models::DescribeLogHubAttributeRequest &request);

      /**
       * @summary Queries a list of log keywords in a Logstore.
       *
       * @param request DescribeLogStoreKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogStoreKeysResponse
       */
      Models::DescribeLogStoreKeysResponse describeLogStoreKeysWithOptions(const Models::DescribeLogStoreKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of log keywords in a Logstore.
       *
       * @param request DescribeLogStoreKeysRequest
       * @return DescribeLogStoreKeysResponse
       */
      Models::DescribeLogStoreKeysResponse describeLogStoreKeys(const Models::DescribeLogStoreKeysRequest &request);

      /**
       * @summary Queries the log collection information.
       *
       * @param request DescribeLoghubDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoghubDetailResponse
       */
      Models::DescribeLoghubDetailResponse describeLoghubDetailWithOptions(const Models::DescribeLoghubDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log collection information.
       *
       * @param request DescribeLoghubDetailRequest
       * @return DescribeLoghubDetailResponse
       */
      Models::DescribeLoghubDetailResponse describeLoghubDetail(const Models::DescribeLoghubDetailRequest &request);

      /**
       * @summary Queries the information about O&M events.
       *
       * @param request DescribeMaintenanceActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMaintenanceActionResponse
       */
      Models::DescribeMaintenanceActionResponse describeMaintenanceActionWithOptions(const Models::DescribeMaintenanceActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about O&M events.
       *
       * @param request DescribeMaintenanceActionRequest
       * @return DescribeMaintenanceActionResponse
       */
      Models::DescribeMaintenanceActionResponse describeMaintenanceAction(const Models::DescribeMaintenanceActionRequest &request);

      /**
       * @summary Queries the details of the permissions granted to the service account of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOperatorPermissionResponse
       */
      Models::DescribeOperatorPermissionResponse describeOperatorPermissionWithOptions(const Models::DescribeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the permissions granted to the service account of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeOperatorPermissionRequest
       * @return DescribeOperatorPermissionResponse
       */
      Models::DescribeOperatorPermissionResponse describeOperatorPermission(const Models::DescribeOperatorPermissionRequest &request);

      /**
       * @summary Queries the information about oversized non-partitioned tables in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeOversizeNonPartitionTableInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOversizeNonPartitionTableInfosResponse
       */
      Models::DescribeOversizeNonPartitionTableInfosResponse describeOversizeNonPartitionTableInfosWithOptions(const Models::DescribeOversizeNonPartitionTableInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about oversized non-partitioned tables in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeOversizeNonPartitionTableInfosRequest
       * @return DescribeOversizeNonPartitionTableInfosResponse
       */
      Models::DescribeOversizeNonPartitionTableInfosResponse describeOversizeNonPartitionTableInfos(const Models::DescribeOversizeNonPartitionTableInfosRequest &request);

      /**
       * @summary Queries the metrics of an SQL pattern such as the query duration and average memory usage within a period of time.
       *
       * @param request DescribePatternPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePatternPerformanceResponse
       */
      Models::DescribePatternPerformanceResponse describePatternPerformanceWithOptions(const Models::DescribePatternPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metrics of an SQL pattern such as the query duration and average memory usage within a period of time.
       *
       * @param request DescribePatternPerformanceRequest
       * @return DescribePatternPerformanceResponse
       */
      Models::DescribePatternPerformanceResponse describePatternPerformance(const Models::DescribePatternPerformanceRequest &request);

      /**
       * @summary Queries the queries that are being executed on a cluster.
       *
       * @param request DescribeProcessListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessListWithOptions(const Models::DescribeProcessListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the queries that are being executed on a cluster.
       *
       * @param request DescribeProcessListRequest
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessList(const Models::DescribeProcessListRequest &request);

      /**
       * @summary Queries the information about specifications of MySQL analytic instances.
       *
       * @param request DescribeRdsAnalysisResourceQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsAnalysisResourceQuotasResponse
       */
      Models::DescribeRdsAnalysisResourceQuotasResponse describeRdsAnalysisResourceQuotasWithOptions(const Models::DescribeRdsAnalysisResourceQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about specifications of MySQL analytic instances.
       *
       * @param request DescribeRdsAnalysisResourceQuotasRequest
       * @return DescribeRdsAnalysisResourceQuotasResponse
       */
      Models::DescribeRdsAnalysisResourceQuotasResponse describeRdsAnalysisResourceQuotas(const Models::DescribeRdsAnalysisResourceQuotasRequest &request);

      /**
       * @summary Queries a list of available regions and zones for AnalyticDB for MySQL.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of available regions and zones for AnalyticDB for MySQL.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries information about regions.
       *
       * @param request DescribeRegionsMixedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsMixedResponse
       */
      Models::DescribeRegionsMixedResponse describeRegionsMixedWithOptions(const Models::DescribeRegionsMixedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about regions.
       *
       * @param request DescribeRegionsMixedRequest
       * @return DescribeRegionsMixedResponse
       */
      Models::DescribeRegionsMixedResponse describeRegionsMixed(const Models::DescribeRegionsMixedRequest &request);

      /**
       * @summary 查询Resubmit配置
       *
       * @param request DescribeResubmitConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResubmitConfigResponse
       */
      Models::DescribeResubmitConfigResponse describeResubmitConfigWithOptions(const Models::DescribeResubmitConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Resubmit配置
       *
       * @param request DescribeResubmitConfigRequest
       * @return DescribeResubmitConfigResponse
       */
      Models::DescribeResubmitConfigResponse describeResubmitConfig(const Models::DescribeResubmitConfigRequest &request);

      /**
       * @summary 查询SQA状态
       *
       * @param request DescribeSQAConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQAConfigResponse
       */
      Models::DescribeSQAConfigResponse describeSQAConfigWithOptions(const Models::DescribeSQAConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询SQA状态
       *
       * @param request DescribeSQAConfigRequest
       * @return DescribeSQAConfigResponse
       */
      Models::DescribeSQAConfigResponse describeSQAConfig(const Models::DescribeSQAConfigRequest &request);

      /**
       * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL cluster within a period of time.
       *
       * @param request DescribeSQLPatternsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLPatternsResponse
       */
      Models::DescribeSQLPatternsResponse describeSQLPatternsWithOptions(const Models::DescribeSQLPatternsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL cluster within a period of time.
       *
       * @param request DescribeSQLPatternsRequest
       * @return DescribeSQLPatternsResponse
       */
      Models::DescribeSQLPatternsResponse describeSQLPatterns(const Models::DescribeSQLPatternsRequest &request);

      /**
       * @summary Queries the plan information about an SQL statement such as a query statement or an extract-transform-load (ETL) task statement.
       *
       * @param request DescribeSQLPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLPlanResponse
       */
      Models::DescribeSQLPlanResponse describeSQLPlanWithOptions(const Models::DescribeSQLPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the plan information about an SQL statement such as a query statement or an extract-transform-load (ETL) task statement.
       *
       * @param request DescribeSQLPlanRequest
       * @return DescribeSQLPlanResponse
       */
      Models::DescribeSQLPlanResponse describeSQLPlan(const Models::DescribeSQLPlanRequest &request);

      /**
       * @summary Queries the information about a task.
       *
       * @param request DescribeSQLPlanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLPlanTaskResponse
       */
      Models::DescribeSQLPlanTaskResponse describeSQLPlanTaskWithOptions(const Models::DescribeSQLPlanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a task.
       *
       * @param request DescribeSQLPlanTaskRequest
       * @return DescribeSQLPlanTaskResponse
       */
      Models::DescribeSQLPlanTaskResponse describeSQLPlanTask(const Models::DescribeSQLPlanTaskRequest &request);

      /**
       * @summary Queries a list of databases in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSchemasResponse
       */
      Models::DescribeSchemasResponse describeSchemasWithOptions(const Models::DescribeSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of databases in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeSchemasRequest
       * @return DescribeSchemasResponse
       */
      Models::DescribeSchemasResponse describeSchemas(const Models::DescribeSchemasRequest &request);

      /**
       * @summary 查看慢日志
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看慢日志
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL cluster within a time range.
       *
       * @param request DescribeSqlPatternRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSqlPatternResponse
       */
      Models::DescribeSqlPatternResponse describeSqlPatternWithOptions(const Models::DescribeSqlPatternRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL cluster within a time range.
       *
       * @param request DescribeSqlPatternRequest
       * @return DescribeSqlPatternResponse
       */
      Models::DescribeSqlPatternResponse describeSqlPattern(const Models::DescribeSqlPatternRequest &request);

      /**
       * @summary Queries a list of instances or clusters that are available for data synchronization.
       *
       * @param request DescribeSyncAvailableDBClusterListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSyncAvailableDBClusterListResponse
       */
      Models::DescribeSyncAvailableDBClusterListResponse describeSyncAvailableDBClusterListWithOptions(const Models::DescribeSyncAvailableDBClusterListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances or clusters that are available for data synchronization.
       *
       * @param request DescribeSyncAvailableDBClusterListRequest
       * @return DescribeSyncAvailableDBClusterListResponse
       */
      Models::DescribeSyncAvailableDBClusterListResponse describeSyncAvailableDBClusterList(const Models::DescribeSyncAvailableDBClusterListRequest &request);

      /**
       * @summary Queries a list of synchronization jobs in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeSyncJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSyncJobListResponse
       */
      Models::DescribeSyncJobListResponse describeSyncJobListWithOptions(const Models::DescribeSyncJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of synchronization jobs in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeSyncJobListRequest
       * @return DescribeSyncJobListResponse
       */
      Models::DescribeSyncJobListResponse describeSyncJobList(const Models::DescribeSyncJobListRequest &request);

      /**
       * @summary 查询表访问统计信息
       *
       * @param request DescribeTableAccessCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableAccessCountResponse
       */
      Models::DescribeTableAccessCountResponse describeTableAccessCountWithOptions(const Models::DescribeTableAccessCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询表访问统计信息
       *
       * @param request DescribeTableAccessCountRequest
       * @return DescribeTableAccessCountResponse
       */
      Models::DescribeTableAccessCountResponse describeTableAccessCount(const Models::DescribeTableAccessCountRequest &request);

      /**
       * @summary 查询表详情
       *
       * @param request DescribeTableDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableDetailResponse
       */
      Models::DescribeTableDetailResponse describeTableDetailWithOptions(const Models::DescribeTableDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询表详情
       *
       * @param request DescribeTableDetailRequest
       * @return DescribeTableDetailResponse
       */
      Models::DescribeTableDetailResponse describeTableDetail(const Models::DescribeTableDetailRequest &request);

      /**
       * @summary Queries the information about partition diagnostics.
       *
       * @param request DescribeTablePartitionDiagnoseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTablePartitionDiagnoseResponse
       */
      Models::DescribeTablePartitionDiagnoseResponse describeTablePartitionDiagnoseWithOptions(const Models::DescribeTablePartitionDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about partition diagnostics.
       *
       * @param request DescribeTablePartitionDiagnoseRequest
       * @return DescribeTablePartitionDiagnoseResponse
       */
      Models::DescribeTablePartitionDiagnoseResponse describeTablePartitionDiagnose(const Models::DescribeTablePartitionDiagnoseRequest &request);

      /**
       * @summary Queries the information about table statistics for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeTableStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableStatisticsResponse
       */
      Models::DescribeTableStatisticsResponse describeTableStatisticsWithOptions(const Models::DescribeTableStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about table statistics for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeTableStatisticsRequest
       * @return DescribeTableStatisticsResponse
       */
      Models::DescribeTableStatisticsResponse describeTableStatistics(const Models::DescribeTableStatisticsRequest &request);

      /**
       * @summary Queries a list of tables in a database of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTablesWithOptions(const Models::DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tables in a database of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeTablesRequest
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTables(const Models::DescribeTablesRequest &request);

      /**
       * @summary Queries the information about a task.
       *
       * @param request DescribeTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskInfoResponse
       */
      Models::DescribeTaskInfoResponse describeTaskInfoWithOptions(const Models::DescribeTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a task.
       *
       * @param request DescribeTaskInfoRequest
       * @return DescribeTaskInfoResponse
       */
      Models::DescribeTaskInfoResponse describeTaskInfo(const Models::DescribeTaskInfoRequest &request);

      /**
       * @summary Queries the vSwitches.
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the vSwitches.
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Queries a list of available vSwitches.
       *
       * @param request DescribeVSwitchsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchsResponse
       */
      Models::DescribeVSwitchsResponse describeVSwitchsWithOptions(const Models::DescribeVSwitchsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of available vSwitches.
       *
       * @param request DescribeVSwitchsRequest
       * @return DescribeVSwitchsResponse
       */
      Models::DescribeVSwitchsResponse describeVSwitchs(const Models::DescribeVSwitchsRequest &request);

      /**
       * @summary Queries a list of available virtual private clouds (VPCs).
       *
       * @param request DescribeVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcsWithOptions(const Models::DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of available virtual private clouds (VPCs).
       *
       * @param request DescribeVpcsRequest
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcs(const Models::DescribeVpcsRequest &request);

      /**
       * @summary Queries the diagnostic results of the storage layer.
       *
       * @param request DescribeWorkerDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWorkerDetectionResponse
       */
      Models::DescribeWorkerDetectionResponse describeWorkerDetectionWithOptions(const Models::DescribeWorkerDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic results of the storage layer.
       *
       * @param request DescribeWorkerDetectionRequest
       * @return DescribeWorkerDetectionResponse
       */
      Models::DescribeWorkerDetectionResponse describeWorkerDetection(const Models::DescribeWorkerDetectionRequest &request);

      /**
       * @summary 关闭用户ENI
       *
       * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition.
       *
       * @param request DetachUserENIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachUserENIResponse
       */
      Models::DetachUserENIResponse detachUserENIWithOptions(const Models::DetachUserENIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭用户ENI
       *
       * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition.
       *
       * @param request DetachUserENIRequest
       * @return DetachUserENIResponse
       */
      Models::DetachUserENIResponse detachUserENI(const Models::DetachUserENIRequest &request);

      /**
       * @summary Disables the suggestion feature.
       *
       * @param request DisableAdviceServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAdviceServiceResponse
       */
      Models::DisableAdviceServiceResponse disableAdviceServiceWithOptions(const Models::DisableAdviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the suggestion feature.
       *
       * @param request DisableAdviceServiceRequest
       * @return DisableAdviceServiceResponse
       */
      Models::DisableAdviceServiceResponse disableAdviceService(const Models::DisableAdviceServiceRequest &request);

      /**
       * @summary Downloads the diagnostic information about SQL statements that meet a condition for an AnalyticDB for MySQL cluster.
       *
       * @param request DownloadDiagnosisRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadDiagnosisRecordsResponse
       */
      Models::DownloadDiagnosisRecordsResponse downloadDiagnosisRecordsWithOptions(const Models::DownloadDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads the diagnostic information about SQL statements that meet a condition for an AnalyticDB for MySQL cluster.
       *
       * @param request DownloadDiagnosisRecordsRequest
       * @return DownloadDiagnosisRecordsResponse
       */
      Models::DownloadDiagnosisRecordsResponse downloadDiagnosisRecords(const Models::DownloadDiagnosisRecordsRequest &request);

      /**
       * @summary 开通建议服务
       *
       * @param request EnableAdviceServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAdviceServiceResponse
       */
      Models::EnableAdviceServiceResponse enableAdviceServiceWithOptions(const Models::EnableAdviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通建议服务
       *
       * @param request EnableAdviceServiceRequest
       * @return EnableAdviceServiceResponse
       */
      Models::EnableAdviceServiceResponse enableAdviceService(const Models::EnableAdviceServiceRequest &request);

      /**
       * @summary Queries the table creation statement for tables.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request GetCreateTableSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreateTableSQLResponse
       */
      Models::GetCreateTableSQLResponse getCreateTableSQLWithOptions(const Models::GetCreateTableSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the table creation statement for tables.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request GetCreateTableSQLRequest
       * @return GetCreateTableSQLResponse
       */
      Models::GetCreateTableSQLResponse getCreateTableSQL(const Models::GetCreateTableSQLRequest &request);

      /**
       * @summary Grants permissions to the service account of an AnalyticDB for MySQL cluster.
       *
       * @description ###
       * If you need Alibaba Cloud technical support to perform operations on your AnalyticDB for MySQL cluster, you must grant permissions to the service account of your cluster. When the validity period of the authorization ends, the granted permissions are automatically revoked.
       *
       * @param request GrantOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantOperatorPermissionResponse
       */
      Models::GrantOperatorPermissionResponse grantOperatorPermissionWithOptions(const Models::GrantOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to the service account of an AnalyticDB for MySQL cluster.
       *
       * @description ###
       * If you need Alibaba Cloud technical support to perform operations on your AnalyticDB for MySQL cluster, you must grant permissions to the service account of your cluster. When the validity period of the authorization ends, the granted permissions are automatically revoked.
       *
       * @param request GrantOperatorPermissionRequest
       * @return GrantOperatorPermissionResponse
       */
      Models::GrantOperatorPermissionResponse grantOperatorPermission(const Models::GrantOperatorPermissionRequest &request);

      /**
       * @summary Terminates an ongoing query.
       *
       * @param request KillProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KillProcessResponse
       */
      Models::KillProcessResponse killProcessWithOptions(const Models::KillProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates an ongoing query.
       *
       * @param request KillProcessRequest
       * @return KillProcessResponse
       */
      Models::KillProcessResponse killProcess(const Models::KillProcessRequest &request);

      /**
       * @summary Queries the tags that are added to AnalyticDB for MySQL clusters, or the AnalyticDB for MySQL clusters that have tags added.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to AnalyticDB for MySQL clusters, or the AnalyticDB for MySQL clusters that have tags added.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Migrates data from a Data Warehouse Edition cluster to a Data Lakehouse Edition cluster in AnalyticDB for MySQL.
       *
       * @param request MigrateDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateDBClusterResponse
       */
      Models::MigrateDBClusterResponse migrateDBClusterWithOptions(const Models::MigrateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates data from a Data Warehouse Edition cluster to a Data Lakehouse Edition cluster in AnalyticDB for MySQL.
       *
       * @param request MigrateDBClusterRequest
       * @return MigrateDBClusterResponse
       */
      Models::MigrateDBClusterResponse migrateDBCluster(const Models::MigrateDBClusterRequest &request);

      /**
       * @summary Modifies the description of a database account for an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database account for an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Changes the time configuration of O\\&M events.
       *
       * @param request ModifyActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationMaintainConfResponse
       */
      Models::ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConfWithOptions(const Models::ModifyActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the time configuration of O\\&M events.
       *
       * @param request ModifyActiveOperationMaintainConfRequest
       * @return ModifyActiveOperationMaintainConfResponse
       */
      Models::ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConf(const Models::ModifyActiveOperationMaintainConfRequest &request);

      /**
       * @summary Changes the execution time of O&M events.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the execution time of O&M events.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary 修改审计日志设置
       *
       * @param request ModifyAuditLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAuditLogConfigResponse
       */
      Models::ModifyAuditLogConfigResponse modifyAuditLogConfigWithOptions(const Models::ModifyAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改审计日志设置
       *
       * @param request ModifyAuditLogConfigRequest
       * @return ModifyAuditLogConfigResponse
       */
      Models::ModifyAuditLogConfigResponse modifyAuditLogConfig(const Models::ModifyAuditLogConfigRequest &request);

      /**
       * @summary Modifies the auto-renewal status of a subscription AnalyticDB for MySQL cluster.
       *
       * @param request ModifyAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoRenewAttributeResponse
       */
      Models::ModifyAutoRenewAttributeResponse modifyAutoRenewAttributeWithOptions(const Models::ModifyAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal status of a subscription AnalyticDB for MySQL cluster.
       *
       * @param request ModifyAutoRenewAttributeRequest
       * @return ModifyAutoRenewAttributeResponse
       */
      Models::ModifyAutoRenewAttributeResponse modifyAutoRenewAttribute(const Models::ModifyAutoRenewAttributeRequest &request);

      /**
       * @summary 修改全量备份策略
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改全量备份策略
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Changes the endpoint of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyClusterConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterConnectionStringResponse
       */
      Models::ModifyClusterConnectionStringResponse modifyClusterConnectionStringWithOptions(const Models::ModifyClusterConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the endpoint of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyClusterConnectionStringRequest
       * @return ModifyClusterConnectionStringResponse
       */
      Models::ModifyClusterConnectionStringResponse modifyClusterConnectionString(const Models::ModifyClusterConnectionStringRequest &request);

      /**
       * @summary Changes the specifications of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBClusterWithOptions(const Models::ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the specifications of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterRequest
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBCluster(const Models::ModifyDBClusterRequest &request);

      /**
       * @summary Modifies the IP address whitelists of a cluster.
       *
       * @param request ModifyDBClusterAccessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterAccessWhiteListResponse
       */
      Models::ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteListWithOptions(const Models::ModifyDBClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelists of a cluster.
       *
       * @param request ModifyDBClusterAccessWhiteListRequest
       * @return ModifyDBClusterAccessWhiteListResponse
       */
      Models::ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteList(const Models::ModifyDBClusterAccessWhiteListRequest &request);

      /**
       * @summary 修改备注
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(const Models::ModifyDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改备注
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescription(const Models::ModifyDBClusterDescriptionRequest &request);

      /**
       * @summary Changes the maintenance window of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(const Models::ModifyDBClusterMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the maintenance window of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(const Models::ModifyDBClusterMaintainTimeRequest &request);

      /**
       * @summary Changes the billing method of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterPayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterPayTypeResponse
       */
      Models::ModifyDBClusterPayTypeResponse modifyDBClusterPayTypeWithOptions(const Models::ModifyDBClusterPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterPayTypeRequest
       * @return ModifyDBClusterPayTypeResponse
       */
      Models::ModifyDBClusterPayTypeResponse modifyDBClusterPayType(const Models::ModifyDBClusterPayTypeRequest &request);

      /**
       * @summary Modifies the resource group of an AnalyticDB for MySQL cluster.
       *
       * @description Resource Management enables you to build an organizational structure for resources based on your business needs. You can use a resource directory, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](~~94475#concept-zyn-3p1-dhb~~ "Resource Management provides a collection of resource management services that support enterprise IT administration. The services include Resource Directory, Resource Group, and Tag. Resource Directory allows you to build an organizational structure for resources based on your business requirements. Resource Group and Tag allow you to hierarchically manage the resources. Resource Sharing allows you to share the resources among your accounts.")
       *
       * @param request ModifyDBClusterResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResourceGroupResponse
       */
      Models::ModifyDBClusterResourceGroupResponse modifyDBClusterResourceGroupWithOptions(const Models::ModifyDBClusterResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group of an AnalyticDB for MySQL cluster.
       *
       * @description Resource Management enables you to build an organizational structure for resources based on your business needs. You can use a resource directory, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](~~94475#concept-zyn-3p1-dhb~~ "Resource Management provides a collection of resource management services that support enterprise IT administration. The services include Resource Directory, Resource Group, and Tag. Resource Directory allows you to build an organizational structure for resources based on your business requirements. Resource Group and Tag allow you to hierarchically manage the resources. Resource Sharing allows you to share the resources among your accounts.")
       *
       * @param request ModifyDBClusterResourceGroupRequest
       * @return ModifyDBClusterResourceGroupResponse
       */
      Models::ModifyDBClusterResourceGroupResponse modifyDBClusterResourceGroup(const Models::ModifyDBClusterResourceGroupRequest &request);

      /**
       * @summary Modifies the SSL configurations of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @param request ModifyDBClusterSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterSSLResponse
       */
      Models::ModifyDBClusterSSLResponse modifyDBClusterSSLWithOptions(const Models::ModifyDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SSL configurations of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @param request ModifyDBClusterSSLRequest
       * @return ModifyDBClusterSSLResponse
       */
      Models::ModifyDBClusterSSLResponse modifyDBClusterSSL(const Models::ModifyDBClusterSSLRequest &request);

      /**
       * @summary Changes the number of shards for an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterShardNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterShardNumberResponse
       */
      Models::ModifyDBClusterShardNumberResponse modifyDBClusterShardNumberWithOptions(const Models::ModifyDBClusterShardNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the number of shards for an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterShardNumberRequest
       * @return ModifyDBClusterShardNumberResponse
       */
      Models::ModifyDBClusterShardNumberResponse modifyDBClusterShardNumber(const Models::ModifyDBClusterShardNumberRequest &request);

      /**
       * @summary Changes the virtual IP address (VIP) that is used to connect to an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterVipResponse
       */
      Models::ModifyDBClusterVipResponse modifyDBClusterVipWithOptions(const Models::ModifyDBClusterVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the virtual IP address (VIP) that is used to connect to an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterVipRequest
       * @return ModifyDBClusterVipResponse
       */
      Models::ModifyDBClusterVipResponse modifyDBClusterVip(const Models::ModifyDBClusterVipRequest &request);

      /**
       * @summary Modifies the number of nodes or the query execution mode for a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @description This operation is suitable for the following editions:
       * *   **Enterprise Edition**.
       * *   **Basic Edition**.
       * *   **Data Lakehouse Edition**.
       * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more. The number of nodes cannot be modified for the default resource group USER_DEFAULT.
       *
       * @param tmpReq ModifyDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBResourceGroupResponse
       */
      Models::ModifyDBResourceGroupResponse modifyDBResourceGroupWithOptions(const Models::ModifyDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the number of nodes or the query execution mode for a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
       *
       * @description This operation is suitable for the following editions:
       * *   **Enterprise Edition**.
       * *   **Basic Edition**.
       * *   **Data Lakehouse Edition**.
       * *   **Data Warehouse Edition in elastic mode**: 32 cores and 128 GB or more. The number of nodes cannot be modified for the default resource group USER_DEFAULT.
       *
       * @param request ModifyDBResourceGroupRequest
       * @return ModifyDBResourceGroupResponse
       */
      Models::ModifyDBResourceGroupResponse modifyDBResourceGroup(const Models::ModifyDBResourceGroupRequest &request);

      /**
       * @summary Modifies the resources of a resource group. This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
       *
       * @description ###
       * *   You can call this operation only for elastic clusters of 32 cores or more.
       * *   You cannot change the number of nodes for the USER_DEFAULT resource group.
       *
       * @param request ModifyDBResourcePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBResourcePoolResponse
       */
      Models::ModifyDBResourcePoolResponse modifyDBResourcePoolWithOptions(const Models::ModifyDBResourcePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resources of a resource group. This operation is available only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
       *
       * @description ###
       * *   You can call this operation only for elastic clusters of 32 cores or more.
       * *   You cannot change the number of nodes for the USER_DEFAULT resource group.
       *
       * @param request ModifyDBResourcePoolRequest
       * @return ModifyDBResourcePoolResponse
       */
      Models::ModifyDBResourcePoolResponse modifyDBResourcePool(const Models::ModifyDBResourcePoolRequest &request);

      /**
       * @summary Modifies a scheduled scaling plan. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
       *
       * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
       *
       * @param request ModifyElasticPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticPlanResponse
       */
      Models::ModifyElasticPlanResponse modifyElasticPlanWithOptions(const Models::ModifyElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scheduled scaling plan. This operation can be used only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
       *
       * @description You can call this operation only for AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters in elastic mode for Cluster Edition that have 32 cores or more.
       *
       * @param request ModifyElasticPlanRequest
       * @return ModifyElasticPlanResponse
       */
      Models::ModifyElasticPlanResponse modifyElasticPlan(const Models::ModifyElasticPlanRequest &request);

      /**
       * @summary Modifies the log backup settings of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyLogBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLogBackupPolicyResponse
       */
      Models::ModifyLogBackupPolicyResponse modifyLogBackupPolicyWithOptions(const Models::ModifyLogBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the log backup settings of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyLogBackupPolicyRequest
       * @return ModifyLogBackupPolicyResponse
       */
      Models::ModifyLogBackupPolicyResponse modifyLogBackupPolicy(const Models::ModifyLogBackupPolicyRequest &request);

      /**
       * @summary Changes the status of a log shipping job.
       *
       * @param request ModifyLogHubStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLogHubStatusResponse
       */
      Models::ModifyLogHubStatusResponse modifyLogHubStatusWithOptions(const Models::ModifyLogHubStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of a log shipping job.
       *
       * @param request ModifyLogHubStatusRequest
       * @return ModifyLogHubStatusResponse
       */
      Models::ModifyLogHubStatusResponse modifyLogHubStatus(const Models::ModifyLogHubStatusRequest &request);

      /**
       * @summary Changes the switchover time of O&M events.
       *
       * @param request ModifyMaintenanceActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaintenanceActionResponse
       */
      Models::ModifyMaintenanceActionResponse modifyMaintenanceActionWithOptions(const Models::ModifyMaintenanceActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the switchover time of O&M events.
       *
       * @param request ModifyMaintenanceActionRequest
       * @return ModifyMaintenanceActionResponse
       */
      Models::ModifyMaintenanceActionResponse modifyMaintenanceAction(const Models::ModifyMaintenanceActionRequest &request);

      /**
       * @summary 修改Resubmit配置
       *
       * @param tmpReq ModifyResubmitConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResubmitConfigResponse
       */
      Models::ModifyResubmitConfigResponse modifyResubmitConfigWithOptions(const Models::ModifyResubmitConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Resubmit配置
       *
       * @param request ModifyResubmitConfigRequest
       * @return ModifyResubmitConfigResponse
       */
      Models::ModifyResubmitConfigResponse modifyResubmitConfig(const Models::ModifyResubmitConfigRequest &request);

      /**
       * @summary 修改SQA配置
       *
       * @param request ModifySQAConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySQAConfigResponse
       */
      Models::ModifySQAConfigResponse modifySQAConfigWithOptions(const Models::ModifySQAConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改SQA配置
       *
       * @param request ModifySQAConfigRequest
       * @return ModifySQAConfigResponse
       */
      Models::ModifySQAConfigResponse modifySQAConfig(const Models::ModifySQAConfigRequest &request);

      /**
       * @summary Modifies the synchronization jobs for an AnalyticDB for MySQL cluster.
       *
       * @param request ModifySyncJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySyncJobResponse
       */
      Models::ModifySyncJobResponse modifySyncJobWithOptions(const Models::ModifySyncJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the synchronization jobs for an AnalyticDB for MySQL cluster.
       *
       * @param request ModifySyncJobRequest
       * @return ModifySyncJobResponse
       */
      Models::ModifySyncJobResponse modifySyncJob(const Models::ModifySyncJobRequest &request);

      /**
       * @summary 修改LogHub投递规则
       *
       * @param request OperateLogHubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateLogHubResponse
       */
      Models::OperateLogHubResponse operateLogHubWithOptions(const Models::OperateLogHubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改LogHub投递规则
       *
       * @param request OperateLogHubRequest
       * @return OperateLogHubResponse
       */
      Models::OperateLogHubResponse operateLogHub(const Models::OperateLogHubRequest &request);

      /**
       * @summary Releases the public endpoint of an AnalyticDB for MySQL cluster.
       *
       * @param request ReleaseClusterPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseClusterPublicConnectionResponse
       */
      Models::ReleaseClusterPublicConnectionResponse releaseClusterPublicConnectionWithOptions(const Models::ReleaseClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an AnalyticDB for MySQL cluster.
       *
       * @param request ReleaseClusterPublicConnectionRequest
       * @return ReleaseClusterPublicConnectionResponse
       */
      Models::ReleaseClusterPublicConnectionResponse releaseClusterPublicConnection(const Models::ReleaseClusterPublicConnectionRequest &request);

      /**
       * @summary Resets the password of a database account for an AnalyticDB for MySQL cluster.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a database account for an AnalyticDB for MySQL cluster.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary 取消服务帐号授权
       *
       * @param request RevokeOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeOperatorPermissionResponse
       */
      Models::RevokeOperatorPermissionResponse revokeOperatorPermissionWithOptions(const Models::RevokeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消服务帐号授权
       *
       * @param request RevokeOperatorPermissionRequest
       * @return RevokeOperatorPermissionResponse
       */
      Models::RevokeOperatorPermissionResponse revokeOperatorPermission(const Models::RevokeOperatorPermissionRequest &request);

      /**
       * @summary Adds tags to an AnalyticDB for MySQL cluster.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to an AnalyticDB for MySQL cluster.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Disassociates a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster from a database account.
       *
       * @param request UnbindDBResourceGroupWithUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDBResourceGroupWithUserResponse
       */
      Models::UnbindDBResourceGroupWithUserResponse unbindDBResourceGroupWithUserWithOptions(const Models::UnbindDBResourceGroupWithUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a resource group of an AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster from a database account.
       *
       * @param request UnbindDBResourceGroupWithUserRequest
       * @return UnbindDBResourceGroupWithUserResponse
       */
      Models::UnbindDBResourceGroupWithUserResponse unbindDBResourceGroupWithUser(const Models::UnbindDBResourceGroupWithUserRequest &request);

      /**
       * @summary Disassociates a database account from a resource group. This operation can be called only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
       *
       * @param request UnbindDBResourcePoolWithUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDBResourcePoolWithUserResponse
       */
      Models::UnbindDBResourcePoolWithUserResponse unbindDBResourcePoolWithUserWithOptions(const Models::UnbindDBResourcePoolWithUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a database account from a resource group. This operation can be called only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition.
       *
       * @param request UnbindDBResourcePoolWithUserRequest
       * @return UnbindDBResourcePoolWithUserResponse
       */
      Models::UnbindDBResourcePoolWithUserResponse unbindDBResourcePoolWithUser(const Models::UnbindDBResourcePoolWithUserRequest &request);

      /**
       * @summary Removes all tags from AnalyticDB for MySQL clusters.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes all tags from AnalyticDB for MySQL clusters.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the minor version of an AnalyticDB for MySQL cluster.
       *
       * @param request UpgradeKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeKernelVersionResponse
       */
      Models::UpgradeKernelVersionResponse upgradeKernelVersionWithOptions(const Models::UpgradeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the minor version of an AnalyticDB for MySQL cluster.
       *
       * @param request UpgradeKernelVersionRequest
       * @return UpgradeKernelVersionResponse
       */
      Models::UpgradeKernelVersionResponse upgradeKernelVersion(const Models::UpgradeKernelVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
