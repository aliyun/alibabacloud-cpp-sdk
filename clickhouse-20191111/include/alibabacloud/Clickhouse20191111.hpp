// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLICKHOUSE20191111_HPP_
#define ALIBABACLOUD_CLICKHOUSE20191111_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Clickhouse20191111Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Clickhouse20191111.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Allocates a public endpoint for a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request AllocateClusterPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateClusterPublicConnectionResponse
       */
      Models::AllocateClusterPublicConnectionResponse allocateClusterPublicConnectionWithOptions(const Models::AllocateClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allocates a public endpoint for a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request AllocateClusterPublicConnectionRequest
       * @return AllocateClusterPublicConnectionResponse
       */
      Models::AllocateClusterPublicConnectionResponse allocateClusterPublicConnection(const Models::AllocateClusterPublicConnectionRequest &request);

      /**
       * @summary Cancels tasks for O&M events.
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels tasks for O&M events.
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Cancels a scheduled ZooKeeper leader switchover on a community-compatible ClickHouse instance.
       *
       * @param request CancelAppointmentElectZookeeperLeaderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAppointmentElectZookeeperLeaderResponse
       */
      Models::CancelAppointmentElectZookeeperLeaderResponse cancelAppointmentElectZookeeperLeaderWithOptions(const Models::CancelAppointmentElectZookeeperLeaderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a scheduled ZooKeeper leader switchover on a community-compatible ClickHouse instance.
       *
       * @param request CancelAppointmentElectZookeeperLeaderRequest
       * @return CancelAppointmentElectZookeeperLeaderResponse
       */
      Models::CancelAppointmentElectZookeeperLeaderResponse cancelAppointmentElectZookeeperLeader(const Models::CancelAppointmentElectZookeeperLeaderRequest &request);

      /**
       * @summary Cancels the scheduled restart on the specified ClickHouse nodes.
       *
       * @param request CancelAppointmentRestartInstanceNodeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAppointmentRestartInstanceNodeListResponse
       */
      Models::CancelAppointmentRestartInstanceNodeListResponse cancelAppointmentRestartInstanceNodeListWithOptions(const Models::CancelAppointmentRestartInstanceNodeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the scheduled restart on the specified ClickHouse nodes.
       *
       * @param request CancelAppointmentRestartInstanceNodeListRequest
       * @return CancelAppointmentRestartInstanceNodeListResponse
       */
      Models::CancelAppointmentRestartInstanceNodeListResponse cancelAppointmentRestartInstanceNodeList(const Models::CancelAppointmentRestartInstanceNodeListRequest &request);

      /**
       * @summary Cancels a scheduled restart for a specific community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @param request CancelRestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRestartInstanceResponse
       */
      Models::CancelRestartInstanceResponse cancelRestartInstanceWithOptions(const Models::CancelRestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a scheduled restart for a specific community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @param request CancelRestartInstanceRequest
       * @return CancelRestartInstanceResponse
       */
      Models::CancelRestartInstanceResponse cancelRestartInstance(const Models::CancelRestartInstanceRequest &request);

      /**
       * @summary Changes the resource group of a community-edition compatible ClickHouse cluster.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group of a community-edition compatible ClickHouse cluster.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Call the CheckClickhouseToRDS operation to verify the connectivity between a community-compatible ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
       *
       * @param request CheckClickhouseToRDSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckClickhouseToRDSResponse
       */
      Models::CheckClickhouseToRDSResponse checkClickhouseToRDSWithOptions(const Models::CheckClickhouseToRDSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the CheckClickhouseToRDS operation to verify the connectivity between a community-compatible ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
       *
       * @param request CheckClickhouseToRDSRequest
       * @return CheckClickhouseToRDSResponse
       */
      Models::CheckClickhouseToRDSResponse checkClickhouseToRDS(const Models::CheckClickhouseToRDSRequest &request);

      /**
       * @summary Queries whether changing the configuration parameters of an ApsaraDB for ClickHouse community-compatible cluster in XML mode requires a restart.
       *
       * @description > 该接口仅支持 2021 年 12 月 01 日之后创建的社区兼容版集群。
       *
       * @param request CheckModifyConfigNeedRestartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckModifyConfigNeedRestartResponse
       */
      Models::CheckModifyConfigNeedRestartResponse checkModifyConfigNeedRestartWithOptions(const Models::CheckModifyConfigNeedRestartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether changing the configuration parameters of an ApsaraDB for ClickHouse community-compatible cluster in XML mode requires a restart.
       *
       * @description > 该接口仅支持 2021 年 12 月 01 日之后创建的社区兼容版集群。
       *
       * @param request CheckModifyConfigNeedRestartRequest
       * @return CheckModifyConfigNeedRestartResponse
       */
      Models::CheckModifyConfigNeedRestartResponse checkModifyConfigNeedRestart(const Models::CheckModifyConfigNeedRestartRequest &request);

      /**
       * @summary Call the CheckMonitorAlert operation to check whether the alert monitoring feature of Application Real-Time Monitoring Service (ARMS) is enabled for a specified ApsaraDB for ClickHouse cluster.
       *
       * @description > This operation applies only to community-compatible clusters of version 20.8 or later that were created after December 1, 2021.
       *
       * @param request CheckMonitorAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckMonitorAlertResponse
       */
      Models::CheckMonitorAlertResponse checkMonitorAlertWithOptions(const Models::CheckMonitorAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the CheckMonitorAlert operation to check whether the alert monitoring feature of Application Real-Time Monitoring Service (ARMS) is enabled for a specified ApsaraDB for ClickHouse cluster.
       *
       * @description > This operation applies only to community-compatible clusters of version 20.8 or later that were created after December 1, 2021.
       *
       * @param request CheckMonitorAlertRequest
       * @return CheckMonitorAlertResponse
       */
      Models::CheckMonitorAlertResponse checkMonitorAlert(const Models::CheckMonitorAlertRequest &request);

      /**
       * @summary Performs a migration scale-out check on a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request CheckScaleOutBalancedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckScaleOutBalancedResponse
       */
      Models::CheckScaleOutBalancedResponse checkScaleOutBalancedWithOptions(const Models::CheckScaleOutBalancedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a migration scale-out check on a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request CheckScaleOutBalancedRequest
       * @return CheckScaleOutBalancedResponse
       */
      Models::CheckScaleOutBalancedResponse checkScaleOutBalanced(const Models::CheckScaleOutBalancedRequest &request);

      /**
       * @summary Queries the service-linked role for ApsaraDB for ClickHouse.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the service-linked role for ApsaraDB for ClickHouse.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary Creates a database account for an ApsaraDB for ClickHouse cluster.
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account for an ApsaraDB for ClickHouse cluster.
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates a database account and grants permissions.
       *
       * @description This API is available only for cluster versions 21.8 and earlier. For newer versions, use a high-privilege account and SQL statements to modify user permissions.
       *
       * @param request CreateAccountAndAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountAndAuthorityResponse
       */
      Models::CreateAccountAndAuthorityResponse createAccountAndAuthorityWithOptions(const Models::CreateAccountAndAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account and grants permissions.
       *
       * @description This API is available only for cluster versions 21.8 and earlier. For newer versions, use a high-privilege account and SQL statements to modify user permissions.
       *
       * @param request CreateAccountAndAuthorityRequest
       * @return CreateAccountAndAuthorityResponse
       */
      Models::CreateAccountAndAuthorityResponse createAccountAndAuthority(const Models::CreateAccountAndAuthorityRequest &request);

      /**
       * @summary Creates a backup policy.
       *
       * @description > ApsaraDB for ClickHouse supports data backup for clusters that run version 20.3, 20.8, or 21.8.
       *
       * @param request CreateBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupPolicyResponse
       */
      Models::CreateBackupPolicyResponse createBackupPolicyWithOptions(const Models::CreateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup policy.
       *
       * @description > ApsaraDB for ClickHouse supports data backup for clusters that run version 20.3, 20.8, or 21.8.
       *
       * @param request CreateBackupPolicyRequest
       * @return CreateBackupPolicyResponse
       */
      Models::CreateBackupPolicyResponse createBackupPolicy(const Models::CreateBackupPolicyRequest &request);

      /**
       * @summary Create an Alibaba Cloud ClickHouse cluster.
       *
       * @description Before you call this API, make sure that you understand the billing method and [price](https://help.aliyun.com/document_detail/167450.html) of ApsaraDB for ClickHouse.
       *
       * @param request CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an Alibaba Cloud ClickHouse cluster.
       *
       * @description Before you call this API, make sure that you understand the billing method and [price](https://help.aliyun.com/document_detail/167450.html) of ApsaraDB for ClickHouse.
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary Creates a monitoring data report.
       *
       * @param request CreateMonitorDataReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorDataReportResponse
       */
      Models::CreateMonitorDataReportResponse createMonitorDataReportWithOptions(const Models::CreateMonitorDataReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a monitoring data report.
       *
       * @param request CreateMonitorDataReportRequest
       * @return CreateMonitorDataReportResponse
       */
      Models::CreateMonitorDataReportResponse createMonitorDataReport(const Models::CreateMonitorDataReportRequest &request);

      /**
       * @summary Creates a cold storage space.
       *
       * @description The tiered storage of hot and cold data feature is supported only by community-compatible clusters that run version 20.8 or later. For clusters that run an earlier version, you must migrate data to a cluster that runs version 20.8 or later before you can configure tiered storage. For more information about data migration, see [Data migration between ApsaraDB for ClickHouse instances](https://help.aliyun.com/document_detail/276926.html).
       *
       * @param request CreateOSSStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOSSStorageResponse
       */
      Models::CreateOSSStorageResponse createOSSStorageWithOptions(const Models::CreateOSSStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cold storage space.
       *
       * @description The tiered storage of hot and cold data feature is supported only by community-compatible clusters that run version 20.8 or later. For clusters that run an earlier version, you must migrate data to a cluster that runs version 20.8 or later before you can configure tiered storage. For more information about data migration, see [Data migration between ApsaraDB for ClickHouse instances](https://help.aliyun.com/document_detail/276926.html).
       *
       * @param request CreateOSSStorageRequest
       * @return CreateOSSStorageResponse
       */
      Models::CreateOSSStorageResponse createOSSStorage(const Models::CreateOSSStorageRequest &request);

      /**
       * @summary Enables the MySQL or HTTPS port for a specified ApsaraDB for ClickHouse cluster.
       *
       * @description > You must manually enable the MySQL port for community-compatible clusters of version 20.8 or later that were created before December 1, 2021. For clusters created on or after this date, the MySQL port is enabled automatically.
       *
       * @param request CreatePortsForClickHouseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePortsForClickHouseResponse
       */
      Models::CreatePortsForClickHouseResponse createPortsForClickHouseWithOptions(const Models::CreatePortsForClickHouseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the MySQL or HTTPS port for a specified ApsaraDB for ClickHouse cluster.
       *
       * @description > You must manually enable the MySQL port for community-compatible clusters of version 20.8 or later that were created before December 1, 2021. For clusters created on or after this date, the MySQL port is enabled automatically.
       *
       * @param request CreatePortsForClickHouseRequest
       * @return CreatePortsForClickHouseResponse
       */
      Models::CreatePortsForClickHouseResponse createPortsForClickHouse(const Models::CreatePortsForClickHouseRequest &request);

      /**
       * @summary You can call the CreateRDSToClickhouseDb operation to create a sync task for an ApsaraDB for ClickHouse Community-Compatible Edition cluster.
       *
       * @description > This operation applies only to ApsaraDB for ClickHouse Community-Compatible Edition clusters.
       *
       * @param request CreateRDSToClickhouseDbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRDSToClickhouseDbResponse
       */
      Models::CreateRDSToClickhouseDbResponse createRDSToClickhouseDbWithOptions(const Models::CreateRDSToClickhouseDbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CreateRDSToClickhouseDb operation to create a sync task for an ApsaraDB for ClickHouse Community-Compatible Edition cluster.
       *
       * @description > This operation applies only to ApsaraDB for ClickHouse Community-Compatible Edition clusters.
       *
       * @param request CreateRDSToClickhouseDbRequest
       * @return CreateRDSToClickhouseDbResponse
       */
      Models::CreateRDSToClickhouseDbResponse createRDSToClickhouseDb(const Models::CreateRDSToClickhouseDbRequest &request);

      /**
       * @summary Calls the CreateSLB operation to attach a Server Load Balancer (SLB) instance to a specified ApsaraDB for ClickHouse Community-Compatible Edition cluster.
       *
       * @description ## Usage notes
       * An SLB instance is a network-layer dependency that provides services for external connections and supports failover. It attaches a domain name to the IP addresses of ClickHouse nodes. The SLB instance balances and forwards cluster requests to internal nodes to distribute traffic in a multi-node deployment. It also performs health checks on backend nodes. If a node becomes unavailable, the SLB instance checks its health status and automatically isolates it. This ensures that request traffic is distributed to active nodes.
       *
       * @param request CreateSLBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSLBResponse
       */
      Models::CreateSLBResponse createSLBWithOptions(const Models::CreateSLBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateSLB operation to attach a Server Load Balancer (SLB) instance to a specified ApsaraDB for ClickHouse Community-Compatible Edition cluster.
       *
       * @description ## Usage notes
       * An SLB instance is a network-layer dependency that provides services for external connections and supports failover. It attaches a domain name to the IP addresses of ClickHouse nodes. The SLB instance balances and forwards cluster requests to internal nodes to distribute traffic in a multi-node deployment. It also performs health checks on backend nodes. If a node becomes unavailable, the SLB instance checks its health status and automatically isolates it. This ensures that request traffic is distributed to active nodes.
       *
       * @param request CreateSLBRequest
       * @return CreateSLBResponse
       */
      Models::CreateSLBResponse createSLB(const Models::CreateSLBRequest &request);

      /**
       * @summary Call the CreateSQLAccount operation to create a privileged or standard account for an ApsaraDB for ClickHouse cluster.
       *
       * @description > This operation applies only to community-compatible clusters that run version 20.8 or later and were created after December 1, 2021.
       *
       * @param request CreateSQLAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSQLAccountResponse
       */
      Models::CreateSQLAccountResponse createSQLAccountWithOptions(const Models::CreateSQLAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the CreateSQLAccount operation to create a privileged or standard account for an ApsaraDB for ClickHouse cluster.
       *
       * @description > This operation applies only to community-compatible clusters that run version 20.8 or later and were created after December 1, 2021.
       *
       * @param request CreateSQLAccountRequest
       * @return CreateSQLAccountResponse
       */
      Models::CreateSQLAccountResponse createSQLAccount(const Models::CreateSQLAccountRequest &request);

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
       * @summary Deletes a database account from an ApsaraDB for ClickHouse cluster.
       *
       * @description > After a database account is deleted, you cannot use it to connect to ApsaraDB for ClickHouse. Proceed with caution.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database account from an ApsaraDB for ClickHouse cluster.
       *
       * @description > After a database account is deleted, you cannot use it to connect to ApsaraDB for ClickHouse. Proceed with caution.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes the backup policy for a community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @description > The data backup feature is available only for ApsaraDB for ClickHouse clusters running version 21.8 or later.
       *
       * @param request DeleteBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicyWithOptions(const Models::DeleteBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the backup policy for a community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @description > The data backup feature is available only for ApsaraDB for ClickHouse clusters running version 21.8 or later.
       *
       * @param request DeleteBackupPolicyRequest
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicy(const Models::DeleteBackupPolicyRequest &request);

      /**
       * @summary Deletes a specified pay-as-you-go ApsaraDB for ClickHouse cluster.
       *
       * @description >Warning: 
       * After a cluster is deleted, all data in the cluster is deleted and cannot be recovered. Proceed with caution.
       *
       * @param request DeleteDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBClusterWithOptions(const Models::DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified pay-as-you-go ApsaraDB for ClickHouse cluster.
       *
       * @description >Warning: 
       * After a cluster is deleted, all data in the cluster is deleted and cannot be recovered. Proceed with caution.
       *
       * @param request DeleteDBClusterRequest
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBCluster(const Models::DeleteDBClusterRequest &request);

      /**
       * @summary Releases a Server Load Balancer (SLB) instance for a specified ApsaraDB for ClickHouse Community-Compatible cluster.
       *
       * @description ## Usage notes
       * After you release the SLB instance, the system performs simple load balancing based on the domain name. Health checks are no longer performed on nodes at the request routing layer. This may cause normal requests to be routed to unavailable nodes, which can result in read and write failures.
       *
       * @param request DeleteSLBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSLBResponse
       */
      Models::DeleteSLBResponse deleteSLBWithOptions(const Models::DeleteSLBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a Server Load Balancer (SLB) instance for a specified ApsaraDB for ClickHouse Community-Compatible cluster.
       *
       * @description ## Usage notes
       * After you release the SLB instance, the system performs simple load balancing based on the domain name. Health checks are no longer performed on nodes at the request routing layer. This may cause normal requests to be routed to unavailable nodes, which can result in read and write failures.
       *
       * @param request DeleteSLBRequest
       * @return DeleteSLBResponse
       */
      Models::DeleteSLBResponse deleteSLB(const Models::DeleteSLBRequest &request);

      /**
       * @summary Deletes a database synchronization task.
       *
       * @param request DeleteSyndbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSyndbResponse
       */
      Models::DeleteSyndbResponse deleteSyndbWithOptions(const Models::DeleteSyndbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database synchronization task.
       *
       * @param request DeleteSyndbRequest
       * @return DeleteSyndbResponse
       */
      Models::DeleteSyndbResponse deleteSyndb(const Models::DeleteSyndbRequest &request);

      /**
       * @summary Queries the permissions of a database account.
       *
       * @description This API applies only to clusters of v21.8 or earlier. For clusters running a later version, you must use a privileged account and execute SQL statements to modify the permissions of a regular user.
       *
       * @param request DescribeAccountAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountAuthorityResponse
       */
      Models::DescribeAccountAuthorityResponse describeAccountAuthorityWithOptions(const Models::DescribeAccountAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions of a database account.
       *
       * @description This API applies only to clusters of v21.8 or earlier. For clusters running a later version, you must use a privileged account and execute SQL statements to modify the permissions of a regular user.
       *
       * @param request DescribeAccountAuthorityRequest
       * @return DescribeAccountAuthorityResponse
       */
      Models::DescribeAccountAuthorityResponse describeAccountAuthority(const Models::DescribeAccountAuthorityRequest &request);

      /**
       * @summary Describes the database accounts of a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the database accounts of a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries the active Operations and Maintenance (O&M) configuration of a ClickHouse instance.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConfWithOptions(const Models::DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the active Operations and Maintenance (O&M) configuration of a ClickHouse instance.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConf(const Models::DescribeActiveOperationMaintainConfRequest &request);

      /**
       * @summary Queries the active operation tasks of a ClickHouse instance.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the active operation tasks of a ClickHouse instance.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary Describes all databases, tables, and columns in an instance.
       *
       * @param request DescribeAllDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllDataSourceResponse
       */
      Models::DescribeAllDataSourceResponse describeAllDataSourceWithOptions(const Models::DescribeAllDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes all databases, tables, and columns in an instance.
       *
       * @param request DescribeAllDataSourceRequest
       * @return DescribeAllDataSourceResponse
       */
      Models::DescribeAllDataSourceResponse describeAllDataSource(const Models::DescribeAllDataSourceRequest &request);

      /**
       * @summary Queries the details of all data sources.
       *
       * @param request DescribeAllDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllDataSourcesResponse
       */
      Models::DescribeAllDataSourcesResponse describeAllDataSourcesWithOptions(const Models::DescribeAllDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all data sources.
       *
       * @param request DescribeAllDataSourcesRequest
       * @return DescribeAllDataSourcesResponse
       */
      Models::DescribeAllDataSourcesResponse describeAllDataSources(const Models::DescribeAllDataSourcesRequest &request);

      /**
       * @summary Queries the auto-renewal status of a ClickHouse Community-Compatible cluster.
       *
       * @param request DescribeAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoRenewAttributeResponse
       */
      Models::DescribeAutoRenewAttributeResponse describeAutoRenewAttributeWithOptions(const Models::DescribeAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal status of a ClickHouse Community-Compatible cluster.
       *
       * @param request DescribeAutoRenewAttributeRequest
       * @return DescribeAutoRenewAttributeResponse
       */
      Models::DescribeAutoRenewAttributeResponse describeAutoRenewAttribute(const Models::DescribeAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the backup settings for a specified ApsaraDB for ClickHouse cluster.
       *
       * @description > Data backup is supported for ApsaraDB for ClickHouse clusters running version 20.3, 20.8, or 21.8.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup settings for a specified ApsaraDB for ClickHouse cluster.
       *
       * @description > Data backup is supported for ApsaraDB for ClickHouse clusters running version 20.3, 20.8, or 21.8.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the backup sets of a specified ApsaraDB for ClickHouse cluster.
       *
       * @description > The data backup feature is available only on ApsaraDB for ClickHouse clusters running version 21.8 or later.
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup sets of a specified ApsaraDB for ClickHouse cluster.
       *
       * @description > The data backup feature is available only on ApsaraDB for ClickHouse clusters running version 21.8 or later.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary You can view columns.
       *
       * @param request DescribeColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumnsWithOptions(const Models::DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can view columns.
       *
       * @param request DescribeColumnsRequest
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumns(const Models::DescribeColumnsRequest &request);

      /**
       * @summary Call the DescribeConfigHistory operation to view the configuration parameter change history of a community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @description > This operation supports only community-compatible clusters that are created after December 1, 2021.
       *
       * @param request DescribeConfigHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigHistoryResponse
       */
      Models::DescribeConfigHistoryResponse describeConfigHistoryWithOptions(const Models::DescribeConfigHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeConfigHistory operation to view the configuration parameter change history of a community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @description > This operation supports only community-compatible clusters that are created after December 1, 2021.
       *
       * @param request DescribeConfigHistoryRequest
       * @return DescribeConfigHistoryResponse
       */
      Models::DescribeConfigHistoryResponse describeConfigHistory(const Models::DescribeConfigHistoryRequest &request);

      /**
       * @summary Call the DescribeConfigVersionDifference operation to compare the parameter values of an ApsaraDB for ClickHouse community-compatible cluster before and after a configuration change.
       *
       * @description > This operation applies only to community-compatible clusters that were created after December 1, 2021.
       *
       * @param request DescribeConfigVersionDifferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigVersionDifferenceResponse
       */
      Models::DescribeConfigVersionDifferenceResponse describeConfigVersionDifferenceWithOptions(const Models::DescribeConfigVersionDifferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeConfigVersionDifference operation to compare the parameter values of an ApsaraDB for ClickHouse community-compatible cluster before and after a configuration change.
       *
       * @description > This operation applies only to community-compatible clusters that were created after December 1, 2021.
       *
       * @param request DescribeConfigVersionDifferenceRequest
       * @return DescribeConfigVersionDifferenceResponse
       */
      Models::DescribeConfigVersionDifferenceResponse describeConfigVersionDifference(const Models::DescribeConfigVersionDifferenceRequest &request);

      /**
       * @summary Queries the IP address whitelist of a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterAccessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAccessWhiteListResponse
       */
      Models::DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteListWithOptions(const Models::DescribeDBClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address whitelist of a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterAccessWhiteListRequest
       * @return DescribeDBClusterAccessWhiteListResponse
       */
      Models::DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteList(const Models::DescribeDBClusterAccessWhiteListRequest &request);

      /**
       * @summary Retrieves details for a specific ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(const Models::DescribeDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a specific ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterAttributeRequest
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttribute(const Models::DescribeDBClusterAttributeRequest &request);

      /**
       * @summary The DescribeDBClusterConfig operation queries the parameter configuration of a community-compatible ClickHouse cluster.
       *
       * @param request DescribeDBClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterConfigResponse
       */
      Models::DescribeDBClusterConfigResponse describeDBClusterConfigWithOptions(const Models::DescribeDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DescribeDBClusterConfig operation queries the parameter configuration of a community-compatible ClickHouse cluster.
       *
       * @param request DescribeDBClusterConfigRequest
       * @return DescribeDBClusterConfigResponse
       */
      Models::DescribeDBClusterConfigResponse describeDBClusterConfig(const Models::DescribeDBClusterConfigRequest &request);

      /**
       * @summary You can call the DescribeDBClusterConfigInXML operation to query the configuration parameters of an ApsaraDB for ClickHouse Community-Compatible Edition cluster in XML format.
       *
       * @description > This operation supports only Community-Compatible Edition clusters that are created after December 1, 2021.
       *
       * @param request DescribeDBClusterConfigInXMLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterConfigInXMLResponse
       */
      Models::DescribeDBClusterConfigInXMLResponse describeDBClusterConfigInXMLWithOptions(const Models::DescribeDBClusterConfigInXMLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeDBClusterConfigInXML operation to query the configuration parameters of an ApsaraDB for ClickHouse Community-Compatible Edition cluster in XML format.
       *
       * @description > This operation supports only Community-Compatible Edition clusters that are created after December 1, 2021.
       *
       * @param request DescribeDBClusterConfigInXMLRequest
       * @return DescribeDBClusterConfigInXMLResponse
       */
      Models::DescribeDBClusterConfigInXMLResponse describeDBClusterConfigInXML(const Models::DescribeDBClusterConfigInXMLRequest &request);

      /**
       * @summary Queries the network information for a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterNetInfoItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterNetInfoItemsResponse
       */
      Models::DescribeDBClusterNetInfoItemsResponse describeDBClusterNetInfoItemsWithOptions(const Models::DescribeDBClusterNetInfoItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network information for a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterNetInfoItemsRequest
       * @return DescribeDBClusterNetInfoItemsResponse
       */
      Models::DescribeDBClusterNetInfoItemsResponse describeDBClusterNetInfoItems(const Models::DescribeDBClusterNetInfoItemsRequest &request);

      /**
       * @summary Queries node information for a ClickHouse Community-Compatible instance.
       *
       * @param request DescribeDBClusterNodeInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterNodeInfosResponse
       */
      Models::DescribeDBClusterNodeInfosResponse describeDBClusterNodeInfosWithOptions(const Models::DescribeDBClusterNodeInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries node information for a ClickHouse Community-Compatible instance.
       *
       * @param request DescribeDBClusterNodeInfosRequest
       * @return DescribeDBClusterNodeInfosResponse
       */
      Models::DescribeDBClusterNodeInfosResponse describeDBClusterNodeInfos(const Models::DescribeDBClusterNodeInfosRequest &request);

      /**
       * @summary Views the performance data of an ApsaraDB for ClickHouse Community-Compatible Edition cluster.
       *
       * @description You can view the performance monitoring data for a specified cluster within a time range based on performance metrics. The data is collected every 30 seconds.
       * > This operation supports only ApsaraDB for ClickHouse Community-Compatible Edition clusters that were created before December 1, 2021.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(const Models::DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views the performance data of an ApsaraDB for ClickHouse Community-Compatible Edition cluster.
       *
       * @description You can view the performance monitoring data for a specified cluster within a time range based on performance metrics. The data is collected every 30 seconds.
       * > This operation supports only ApsaraDB for ClickHouse Community-Compatible Edition clusters that were created before December 1, 2021.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformance(const Models::DescribeDBClusterPerformanceRequest &request);

      /**
       * @summary This operation queries the status set of a ClickHouse Community-Compatible Edition cluster.
       *
       * @param request DescribeDBClusterStatusSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterStatusSetResponse
       */
      Models::DescribeDBClusterStatusSetResponse describeDBClusterStatusSetWithOptions(const Models::DescribeDBClusterStatusSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries the status set of a ClickHouse Community-Compatible Edition cluster.
       *
       * @param request DescribeDBClusterStatusSetRequest
       * @return DescribeDBClusterStatusSetResponse
       */
      Models::DescribeDBClusterStatusSetResponse describeDBClusterStatusSet(const Models::DescribeDBClusterStatusSetRequest &request);

      /**
       * @summary Describes ApsaraDB for ClickHouse clusters in a specified region.
       *
       * @param request DescribeDBClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClustersWithOptions(const Models::DescribeDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes ApsaraDB for ClickHouse clusters in a specified region.
       *
       * @param request DescribeDBClustersRequest
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClusters(const Models::DescribeDBClustersRequest &request);

      /**
       * @summary The DescribeDBConfig operation queries the configuration of a community-compatible cluster.
       *
       * @param request DescribeDBConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBConfigResponse
       */
      Models::DescribeDBConfigResponse describeDBConfigWithOptions(const Models::DescribeDBConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DescribeDBConfig operation queries the configuration of a community-compatible cluster.
       *
       * @param request DescribeDBConfigRequest
       * @return DescribeDBConfigResponse
       */
      Models::DescribeDBConfigResponse describeDBConfig(const Models::DescribeDBConfigRequest &request);

      /**
       * @summary Queries the metadata of Operations and Maintenance (O&M) events for a ClickHouse-compatible cluster.
       *
       * @param request DescribeEventMetaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventMetaInfoResponse
       */
      Models::DescribeEventMetaInfoResponse describeEventMetaInfoWithOptions(const Models::DescribeEventMetaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of Operations and Maintenance (O&M) events for a ClickHouse-compatible cluster.
       *
       * @param request DescribeEventMetaInfoRequest
       * @return DescribeEventMetaInfoResponse
       */
      Models::DescribeEventMetaInfoResponse describeEventMetaInfo(const Models::DescribeEventMetaInfoRequest &request);

      /**
       * @summary Queries cold storage information.
       *
       * @param request DescribeOSSStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOSSStorageResponse
       */
      Models::DescribeOSSStorageResponse describeOSSStorageWithOptions(const Models::DescribeOSSStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cold storage information.
       *
       * @param request DescribeOSSStorageRequest
       * @return DescribeOSSStorageResponse
       */
      Models::DescribeOSSStorageResponse describeOSSStorage(const Models::DescribeOSSStorageRequest &request);

      /**
       * @summary Call the DescribeProcessList operation to retrieve running queries on an ApsaraDB for ClickHouse Community-Compatible cluster.
       *
       * @param request DescribeProcessListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessListWithOptions(const Models::DescribeProcessListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeProcessList operation to retrieve running queries on an ApsaraDB for ClickHouse Community-Compatible cluster.
       *
       * @param request DescribeProcessListRequest
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessList(const Models::DescribeProcessListRequest &request);

      /**
       * @summary Queries the available regions and zones for ApsaraDB for ClickHouse.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available regions and zones for ApsaraDB for ClickHouse.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries all databases in an instance.
       *
       * @param request DescribeSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSchemasResponse
       */
      Models::DescribeSchemasResponse describeSchemasWithOptions(const Models::DescribeSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all databases in an instance.
       *
       * @param request DescribeSchemasRequest
       * @return DescribeSchemasResponse
       */
      Models::DescribeSchemasResponse describeSchemas(const Models::DescribeSchemasRequest &request);

      /**
       * @summary Queries the details of slow query logs.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of slow query logs.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries statistics about the slow log trends for a cluster.
       *
       * @param request DescribeSlowLogTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogTrendResponse
       */
      Models::DescribeSlowLogTrendResponse describeSlowLogTrendWithOptions(const Models::DescribeSlowLogTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics about the slow log trends for a cluster.
       *
       * @param request DescribeSlowLogTrendRequest
       * @return DescribeSlowLogTrendResponse
       */
      Models::DescribeSlowLogTrendResponse describeSlowLogTrend(const Models::DescribeSlowLogTrendRequest &request);

      /**
       * @summary Queries synchronized databases and tables.
       *
       * @param request DescribeSynDbTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynDbTablesResponse
       */
      Models::DescribeSynDbTablesResponse describeSynDbTablesWithOptions(const Models::DescribeSynDbTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries synchronized databases and tables.
       *
       * @param request DescribeSynDbTablesRequest
       * @return DescribeSynDbTablesResponse
       */
      Models::DescribeSynDbTablesResponse describeSynDbTables(const Models::DescribeSynDbTablesRequest &request);

      /**
       * @summary Queries information about synchronized databases.
       *
       * @param request DescribeSynDbsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynDbsResponse
       */
      Models::DescribeSynDbsResponse describeSynDbsWithOptions(const Models::DescribeSynDbsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about synchronized databases.
       *
       * @param request DescribeSynDbsRequest
       * @return DescribeSynDbsResponse
       */
      Models::DescribeSynDbsResponse describeSynDbs(const Models::DescribeSynDbsRequest &request);

      /**
       * @summary You can call the DescribeTables operation to query tables in a community-compatible cluster.
       *
       * @param request DescribeTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTablesWithOptions(const Models::DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeTables operation to query tables in a community-compatible cluster.
       *
       * @param request DescribeTablesRequest
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTables(const Models::DescribeTablesRequest &request);

      /**
       * @summary View migration history.
       *
       * @description > This API operation is used only to query data migrations between Alibaba Cloud ClickHouse clusters during version upgrades.
       *
       * @param request DescribeTransferHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransferHistoryResponse
       */
      Models::DescribeTransferHistoryResponse describeTransferHistoryWithOptions(const Models::DescribeTransferHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View migration history.
       *
       * @description > This API operation is used only to query data migrations between Alibaba Cloud ClickHouse clusters during version upgrades.
       *
       * @param request DescribeTransferHistoryRequest
       * @return DescribeTransferHistoryResponse
       */
      Models::DescribeTransferHistoryResponse describeTransferHistory(const Models::DescribeTransferHistoryRequest &request);

      /**
       * @summary Retrieves a list of your KMS keys.
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(const Models::DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of your KMS keys.
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(const Models::DescribeUserEncryptionKeyListRequest &request);

      /**
       * @summary Switches the ZooKeeper leader for a community-compatible ClickHouse instance.
       *
       * @param request ElectZookeeperLeaderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ElectZookeeperLeaderResponse
       */
      Models::ElectZookeeperLeaderResponse electZookeeperLeaderWithOptions(const Models::ElectZookeeperLeaderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the ZooKeeper leader for a community-compatible ClickHouse instance.
       *
       * @param request ElectZookeeperLeaderRequest
       * @return ElectZookeeperLeaderResponse
       */
      Models::ElectZookeeperLeaderResponse electZookeeperLeader(const Models::ElectZookeeperLeaderRequest &request);

      /**
       * @summary Stops ongoing tasks.
       *
       * @param request KillProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KillProcessResponse
       */
      Models::KillProcessResponse killProcessWithOptions(const Models::KillProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops ongoing tasks.
       *
       * @param request KillProcessRequest
       * @return KillProcessResponse
       */
      Models::KillProcessResponse killProcess(const Models::KillProcessRequest &request);

      /**
       * @summary Lists the tags that are attached to ApsaraDB for ClickHouse clusters.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the tags that are attached to ApsaraDB for ClickHouse clusters.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the permissions of a database account.
       *
       * @description This API operation applies only to cluster versions 21.8 and earlier. For cluster versions later than 21.8, you must use a high-privilege account to run SQL statements to modify the permissions of standard users.
       *
       * @param request ModifyAccountAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountAuthorityResponse
       */
      Models::ModifyAccountAuthorityResponse modifyAccountAuthorityWithOptions(const Models::ModifyAccountAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of a database account.
       *
       * @description This API operation applies only to cluster versions 21.8 and earlier. For cluster versions later than 21.8, you must use a high-privilege account to run SQL statements to modify the permissions of standard users.
       *
       * @param request ModifyAccountAuthorityRequest
       * @return ModifyAccountAuthorityResponse
       */
      Models::ModifyAccountAuthorityResponse modifyAccountAuthority(const Models::ModifyAccountAuthorityRequest &request);

      /**
       * @summary Modifies the description of a database account in an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database account in an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Modifies the configuration of active O&M tasks on a community-compatible ClickHouse cluster.
       *
       * @param request ModifyActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationMaintainConfResponse
       */
      Models::ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConfWithOptions(const Models::ModifyActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of active O&M tasks on a community-compatible ClickHouse cluster.
       *
       * @param request ModifyActiveOperationMaintainConfRequest
       * @return ModifyActiveOperationMaintainConfResponse
       */
      Models::ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConf(const Models::ModifyActiveOperationMaintainConfRequest &request);

      /**
       * @summary Modifies the switch time for operations and maintenance (O&M) events on a ClickHouse Community-compatible cluster.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the switch time for operations and maintenance (O&M) events on a ClickHouse Community-compatible cluster.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary Modifies the auto-renewal status of a ClickHouse Community-Compatible cluster.
       *
       * @param request ModifyAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoRenewAttributeResponse
       */
      Models::ModifyAutoRenewAttributeResponse modifyAutoRenewAttributeWithOptions(const Models::ModifyAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal status of a ClickHouse Community-Compatible cluster.
       *
       * @param request ModifyAutoRenewAttributeRequest
       * @return ModifyAutoRenewAttributeResponse
       */
      Models::ModifyAutoRenewAttributeResponse modifyAutoRenewAttribute(const Models::ModifyAutoRenewAttributeRequest &request);

      /**
       * @summary Modifies the backup settings of a specified ApsaraDB for ClickHouse cluster.
       *
       * @description > Data backup is supported for ApsaraDB for ClickHouse clusters that run version 20.3, 20.8, or 21.8.
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup settings of a specified ApsaraDB for ClickHouse cluster.
       *
       * @description > Data backup is supported for ApsaraDB for ClickHouse clusters that run version 20.3, 20.8, or 21.8.
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Modifies the specifications of a cluster.
       *
       * @param request ModifyDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBClusterWithOptions(const Models::ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications of a cluster.
       *
       * @param request ModifyDBClusterRequest
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBCluster(const Models::ModifyDBClusterRequest &request);

      /**
       * @summary Modifies the IP address whitelist for a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterAccessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterAccessWhiteListResponse
       */
      Models::ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteListWithOptions(const Models::ModifyDBClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelist for a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterAccessWhiteListRequest
       * @return ModifyDBClusterAccessWhiteListResponse
       */
      Models::ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteList(const Models::ModifyDBClusterAccessWhiteListRequest &request);

      /**
       * @summary Modifies the configuration of a cluster.
       *
       * @param request ModifyDBClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterConfigResponse
       */
      Models::ModifyDBClusterConfigResponse modifyDBClusterConfigWithOptions(const Models::ModifyDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a cluster.
       *
       * @param request ModifyDBClusterConfigRequest
       * @return ModifyDBClusterConfigResponse
       */
      Models::ModifyDBClusterConfigResponse modifyDBClusterConfig(const Models::ModifyDBClusterConfigRequest &request);

      /**
       * @summary Modifies the configuration parameters of a specified community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @description > This operation supports only community-compatible clusters created after December 1, 2021.
       *
       * @param request ModifyDBClusterConfigInXMLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterConfigInXMLResponse
       */
      Models::ModifyDBClusterConfigInXMLResponse modifyDBClusterConfigInXMLWithOptions(const Models::ModifyDBClusterConfigInXMLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration parameters of a specified community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @description > This operation supports only community-compatible clusters created after December 1, 2021.
       *
       * @param request ModifyDBClusterConfigInXMLRequest
       * @return ModifyDBClusterConfigInXMLResponse
       */
      Models::ModifyDBClusterConfigInXMLResponse modifyDBClusterConfigInXML(const Models::ModifyDBClusterConfigInXMLRequest &request);

      /**
       * @summary Changes the description of a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(const Models::ModifyDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the description of a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescription(const Models::ModifyDBClusterDescriptionRequest &request);

      /**
       * @summary Modifies the maintenance window for a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(const Models::ModifyDBClusterMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window for a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(const Models::ModifyDBClusterMaintainTimeRequest &request);

      /**
       * @summary The ModifyDBConfig operation modifies the dictionary configuration of a community-compatible cluster.
       *
       * @description >Notice: 
       * This API applies only to clusters with a kernel version of 20.8 or earlier.
       *
       * @param request ModifyDBConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBConfigResponse
       */
      Models::ModifyDBConfigResponse modifyDBConfigWithOptions(const Models::ModifyDBConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ModifyDBConfig operation modifies the dictionary configuration of a community-compatible cluster.
       *
       * @description >Notice: 
       * This API applies only to clusters with a kernel version of 20.8 or earlier.
       *
       * @param request ModifyDBConfigRequest
       * @return ModifyDBConfigResponse
       */
      Models::ModifyDBConfigResponse modifyDBConfig(const Models::ModifyDBConfigRequest &request);

      /**
       * @summary Modifies the upgrade type for a ClickHouse minor version to automatic or manual.
       *
       * @param request ModifyMinorVersionGreadeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMinorVersionGreadeTypeResponse
       */
      Models::ModifyMinorVersionGreadeTypeResponse modifyMinorVersionGreadeTypeWithOptions(const Models::ModifyMinorVersionGreadeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the upgrade type for a ClickHouse minor version to automatic or manual.
       *
       * @param request ModifyMinorVersionGreadeTypeRequest
       * @return ModifyMinorVersionGreadeTypeResponse
       */
      Models::ModifyMinorVersionGreadeTypeResponse modifyMinorVersionGreadeType(const Models::ModifyMinorVersionGreadeTypeRequest &request);

      /**
       * @summary Modifies the sync task of a community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @description > This operation applies only to community-compatible ApsaraDB for ClickHouse clusters.
       *
       * @param request ModifyRDSToClickhouseDbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRDSToClickhouseDbResponse
       */
      Models::ModifyRDSToClickhouseDbResponse modifyRDSToClickhouseDbWithOptions(const Models::ModifyRDSToClickhouseDbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the sync task of a community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @description > This operation applies only to community-compatible ApsaraDB for ClickHouse clusters.
       *
       * @param request ModifyRDSToClickhouseDbRequest
       * @return ModifyRDSToClickhouseDbResponse
       */
      Models::ModifyRDSToClickhouseDbResponse modifyRDSToClickhouseDb(const Models::ModifyRDSToClickhouseDbRequest &request);

      /**
       * @summary Releases the public endpoint of a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request ReleaseClusterPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseClusterPublicConnectionResponse
       */
      Models::ReleaseClusterPublicConnectionResponse releaseClusterPublicConnectionWithOptions(const Models::ReleaseClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request ReleaseClusterPublicConnectionRequest
       * @return ReleaseClusterPublicConnectionResponse
       */
      Models::ReleaseClusterPublicConnectionResponse releaseClusterPublicConnection(const Models::ReleaseClusterPublicConnectionRequest &request);

      /**
       * @summary Resets the password of a database account in a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a database account in a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Restarts a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request RestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a specified ApsaraDB for ClickHouse cluster.
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary Batch restart nodes of a ClickHouse Community-compatible Edition instance.
       *
       * @param tmpReq RestartInstanceNodeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceNodeListResponse
       */
      Models::RestartInstanceNodeListResponse restartInstanceNodeListWithOptions(const Models::RestartInstanceNodeListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch restart nodes of a ClickHouse Community-compatible Edition instance.
       *
       * @param request RestartInstanceNodeListRequest
       * @return RestartInstanceNodeListResponse
       */
      Models::RestartInstanceNodeListResponse restartInstanceNodeList(const Models::RestartInstanceNodeListRequest &request);

      /**
       * @summary Creates and attaches tags to one or more ApsaraDB for ClickHouse clusters.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches tags to one or more ApsaraDB for ClickHouse clusters.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Migration between versions.
       *
       * @description ## Prerequisites
       * - Add the IP addresses of the source cluster to the whitelist of the destination cluster.
       * - Add the IP addresses of the destination cluster to the whitelist of the source cluster.
       * > You can execute the `select * from system.clusters;` statement to retrieve the IP addresses of an ApsaraDB for ClickHouse cluster.
       *
       * @param request TransferVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferVersionResponse
       */
      Models::TransferVersionResponse transferVersionWithOptions(const Models::TransferVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migration between versions.
       *
       * @description ## Prerequisites
       * - Add the IP addresses of the source cluster to the whitelist of the destination cluster.
       * - Add the IP addresses of the destination cluster to the whitelist of the source cluster.
       * > You can execute the `select * from system.clusters;` statement to retrieve the IP addresses of an ApsaraDB for ClickHouse cluster.
       *
       * @param request TransferVersionRequest
       * @return TransferVersionResponse
       */
      Models::TransferVersionResponse transferVersion(const Models::TransferVersionRequest &request);

      /**
       * @summary Removes tags from ApsaraDB for ClickHouse clusters.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from ApsaraDB for ClickHouse clusters.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary The UpgradeMinorVersion operation upgrades the minor engine version of a specified community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @description > Minor engine version upgrades are supported only for community-compatible clusters that are purchased after December 1, 2021.
       *
       * @param request UpgradeMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersionWithOptions(const Models::UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The UpgradeMinorVersion operation upgrades the minor engine version of a specified community-compatible ApsaraDB for ClickHouse cluster.
       *
       * @description > Minor engine version upgrades are supported only for community-compatible clusters that are purchased after December 1, 2021.
       *
       * @param request UpgradeMinorVersionRequest
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersion(const Models::UpgradeMinorVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
