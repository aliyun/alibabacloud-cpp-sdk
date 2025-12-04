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
       * @summary Creates a public endpoint for an ApsaraDB for ClickHouse cluster.
       *
       * @param request AllocateClusterPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateClusterPublicConnectionResponse
       */
      Models::AllocateClusterPublicConnectionResponse allocateClusterPublicConnectionWithOptions(const Models::AllocateClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a public endpoint for an ApsaraDB for ClickHouse cluster.
       *
       * @param request AllocateClusterPublicConnectionRequest
       * @return AllocateClusterPublicConnectionResponse
       */
      Models::AllocateClusterPublicConnectionResponse allocateClusterPublicConnection(const Models::AllocateClusterPublicConnectionRequest &request);

      /**
       * @summary 取消预约重启
       *
       * @param request CancelRestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRestartInstanceResponse
       */
      Models::CancelRestartInstanceResponse cancelRestartInstanceWithOptions(const Models::CancelRestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消预约重启
       *
       * @param request CancelRestartInstanceRequest
       * @return CancelRestartInstanceResponse
       */
      Models::CancelRestartInstanceResponse cancelRestartInstance(const Models::CancelRestartInstanceRequest &request);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Checks the connectivity between an ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
       *
       * @param request CheckClickhouseToRDSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckClickhouseToRDSResponse
       */
      Models::CheckClickhouseToRDSResponse checkClickhouseToRDSWithOptions(const Models::CheckClickhouseToRDSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the connectivity between an ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
       *
       * @param request CheckClickhouseToRDSRequest
       * @return CheckClickhouseToRDSResponse
       */
      Models::CheckClickhouseToRDSResponse checkClickhouseToRDS(const Models::CheckClickhouseToRDSRequest &request);

      /**
       * @summary Queries whether an ApsaraDB for ClickHouse cluster needs to be restarted after you change the values of the configuration parameters in XML mode.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
       *
       * @param request CheckModifyConfigNeedRestartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckModifyConfigNeedRestartResponse
       */
      Models::CheckModifyConfigNeedRestartResponse checkModifyConfigNeedRestartWithOptions(const Models::CheckModifyConfigNeedRestartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether an ApsaraDB for ClickHouse cluster needs to be restarted after you change the values of the configuration parameters in XML mode.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
       *
       * @param request CheckModifyConfigNeedRestartRequest
       * @return CheckModifyConfigNeedRestartResponse
       */
      Models::CheckModifyConfigNeedRestartResponse checkModifyConfigNeedRestart(const Models::CheckModifyConfigNeedRestartRequest &request);

      /**
       * @summary Checks whether the monitoring and alerting feature that is provided by Application Real-Time Monitoring Service (ARMS) is enabled for an ApsaraDB for ClickHouse cluster.
       *
       * @param request CheckMonitorAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckMonitorAlertResponse
       */
      Models::CheckMonitorAlertResponse checkMonitorAlertWithOptions(const Models::CheckMonitorAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the monitoring and alerting feature that is provided by Application Real-Time Monitoring Service (ARMS) is enabled for an ApsaraDB for ClickHouse cluster.
       *
       * @param request CheckMonitorAlertRequest
       * @return CheckMonitorAlertResponse
       */
      Models::CheckMonitorAlertResponse checkMonitorAlert(const Models::CheckMonitorAlertRequest &request);

      /**
       * @summary Performs migration and scale-out detection on an ApsaraDB for ClickHouse cluster.
       *
       * @param request CheckScaleOutBalancedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckScaleOutBalancedResponse
       */
      Models::CheckScaleOutBalancedResponse checkScaleOutBalancedWithOptions(const Models::CheckScaleOutBalancedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs migration and scale-out detection on an ApsaraDB for ClickHouse cluster.
       *
       * @param request CheckScaleOutBalancedRequest
       * @return CheckScaleOutBalancedResponse
       */
      Models::CheckScaleOutBalancedResponse checkScaleOutBalanced(const Models::CheckScaleOutBalancedRequest &request);

      /**
       * @summary Queries the service-linked role of ApsaraDB for ClickHouse.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the service-linked role of ApsaraDB for ClickHouse.
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
       * @summary Creates an account and grants permissions to the account.
       *
       * @param request CreateAccountAndAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountAndAuthorityResponse
       */
      Models::CreateAccountAndAuthorityResponse createAccountAndAuthorityWithOptions(const Models::CreateAccountAndAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account and grants permissions to the account.
       *
       * @param request CreateAccountAndAuthorityRequest
       * @return CreateAccountAndAuthorityResponse
       */
      Models::CreateAccountAndAuthorityResponse createAccountAndAuthority(const Models::CreateAccountAndAuthorityRequest &request);

      /**
       * @summary Creates a backup policy.
       *
       * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
       *
       * @param request CreateBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupPolicyResponse
       */
      Models::CreateBackupPolicyResponse createBackupPolicyWithOptions(const Models::CreateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup policy.
       *
       * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
       *
       * @param request CreateBackupPolicyRequest
       * @return CreateBackupPolicyResponse
       */
      Models::CreateBackupPolicyResponse createBackupPolicy(const Models::CreateBackupPolicyRequest &request);

      /**
       * @summary Creates an ApsaraDB for ClickHouse cluster.
       *
       * @description Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://help.aliyun.com/document_detail/167450.html) of ApsaraDB for ClickHouse.
       *
       * @param request CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraDB for ClickHouse cluster.
       *
       * @description Before you call this operation, make sure that you are familiar with the billing methods and [pricing](https://help.aliyun.com/document_detail/167450.html) of ApsaraDB for ClickHouse.
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary Creates a monitoring data report for an ApsaraDB for ClickHouse cluster.
       *
       * @param request CreateMonitorDataReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorDataReportResponse
       */
      Models::CreateMonitorDataReportResponse createMonitorDataReportWithOptions(const Models::CreateMonitorDataReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a monitoring data report for an ApsaraDB for ClickHouse cluster.
       *
       * @param request CreateMonitorDataReportRequest
       * @return CreateMonitorDataReportResponse
       */
      Models::CreateMonitorDataReportResponse createMonitorDataReport(const Models::CreateMonitorDataReportRequest &request);

      /**
       * @summary Creates a storage task for cold data.
       *
       * @description Only an ApsaraDB for ClickHouse cluster of V20.8 or later supports tiered storage of hot data and cold data. If your data is in an ApsaraDB for ClickHouse cluster of a version earlier than V20.8 and you want to use tiered storage of hot data and cold data to store the data, you can migrate the data to an ApsaraDB for ClickHouse cluster of V20.8 or later and use tiered storage of hot data and cold data. For more information about how to migrate data between ApsaraDB for ClickHouse clusters, see [Migrate data between ApsaraDB for ClickHouse clusters](https://help.aliyun.com/document_detail/276926.html).
       *
       * @param request CreateOSSStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOSSStorageResponse
       */
      Models::CreateOSSStorageResponse createOSSStorageWithOptions(const Models::CreateOSSStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a storage task for cold data.
       *
       * @description Only an ApsaraDB for ClickHouse cluster of V20.8 or later supports tiered storage of hot data and cold data. If your data is in an ApsaraDB for ClickHouse cluster of a version earlier than V20.8 and you want to use tiered storage of hot data and cold data to store the data, you can migrate the data to an ApsaraDB for ClickHouse cluster of V20.8 or later and use tiered storage of hot data and cold data. For more information about how to migrate data between ApsaraDB for ClickHouse clusters, see [Migrate data between ApsaraDB for ClickHouse clusters](https://help.aliyun.com/document_detail/276926.html).
       *
       * @param request CreateOSSStorageRequest
       * @return CreateOSSStorageResponse
       */
      Models::CreateOSSStorageResponse createOSSStorage(const Models::CreateOSSStorageRequest &request);

      /**
       * @summary Enables the MySQL port for an ApsaraDB for ClickHouse cluster.
       *
       * @description >  For an ApsaraDB for ClickHouse cluster of V20.8 or later that was created before December 1, 2021, you must manually enable the MySQL port. For an ApsaraDB for ClickHouse cluster of V20.8 or later that was created after December 1, 2021, the MySQL port is automatically enabled.
       *
       * @param request CreatePortsForClickHouseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePortsForClickHouseResponse
       */
      Models::CreatePortsForClickHouseResponse createPortsForClickHouseWithOptions(const Models::CreatePortsForClickHouseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the MySQL port for an ApsaraDB for ClickHouse cluster.
       *
       * @description >  For an ApsaraDB for ClickHouse cluster of V20.8 or later that was created before December 1, 2021, you must manually enable the MySQL port. For an ApsaraDB for ClickHouse cluster of V20.8 or later that was created after December 1, 2021, the MySQL port is automatically enabled.
       *
       * @param request CreatePortsForClickHouseRequest
       * @return CreatePortsForClickHouseResponse
       */
      Models::CreatePortsForClickHouseResponse createPortsForClickHouse(const Models::CreatePortsForClickHouseRequest &request);

      /**
       * @summary Creates a task to synchronize data from an ApsaraDB RDS for MySQL instance to an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is only applicable to ApsaraDB for ClickHouse clusters.
       *
       * @param request CreateRDSToClickhouseDbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRDSToClickhouseDbResponse
       */
      Models::CreateRDSToClickhouseDbResponse createRDSToClickhouseDbWithOptions(const Models::CreateRDSToClickhouseDbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to synchronize data from an ApsaraDB RDS for MySQL instance to an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is only applicable to ApsaraDB for ClickHouse clusters.
       *
       * @param request CreateRDSToClickhouseDbRequest
       * @return CreateRDSToClickhouseDbResponse
       */
      Models::CreateRDSToClickhouseDbResponse createRDSToClickhouseDb(const Models::CreateRDSToClickhouseDbRequest &request);

      /**
       * @summary Mounts a Server Load Balancer (SLB) instance to an ApsaraDB for ClickHouse cluster.
       *
       * @description ## [](#)Description
       * An ApsaraDB for ClickHouse cluster is dependent on an SLB instance at the network layer. You can bind a domain name to the IP address of an ApsaraDB for ClickHouse node to provide external connectivity service and provide failover capabilities. The SLB instance forwards requests to the nodes in the ApsaraDB for ClickHouse cluster and balances the request traffic among the nodes. The SLB instance checks the availability of backend nodes. If the SLB instance detects that a node is unavailable by checking the health status of all nodes, the SLB instance automatically isolates the unavailable node. This ensures that the request traffic is balanced among available nodes.
       *
       * @param request CreateSLBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSLBResponse
       */
      Models::CreateSLBResponse createSLBWithOptions(const Models::CreateSLBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mounts a Server Load Balancer (SLB) instance to an ApsaraDB for ClickHouse cluster.
       *
       * @description ## [](#)Description
       * An ApsaraDB for ClickHouse cluster is dependent on an SLB instance at the network layer. You can bind a domain name to the IP address of an ApsaraDB for ClickHouse node to provide external connectivity service and provide failover capabilities. The SLB instance forwards requests to the nodes in the ApsaraDB for ClickHouse cluster and balances the request traffic among the nodes. The SLB instance checks the availability of backend nodes. If the SLB instance detects that a node is unavailable by checking the health status of all nodes, the SLB instance automatically isolates the unavailable node. This ensures that the request traffic is balanced among available nodes.
       *
       * @param request CreateSLBRequest
       * @return CreateSLBResponse
       */
      Models::CreateSLBResponse createSLB(const Models::CreateSLBRequest &request);

      /**
       * @summary Creates a privileged account or a standard account for an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is applicable only to ApsaraDB for ClickHouse clusters of V20.8 or later that were created after December 1, 2021,
       *
       * @param request CreateSQLAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSQLAccountResponse
       */
      Models::CreateSQLAccountResponse createSQLAccountWithOptions(const Models::CreateSQLAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a privileged account or a standard account for an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is applicable only to ApsaraDB for ClickHouse clusters of V20.8 or later that were created after December 1, 2021,
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
       * @summary Deletes a database account of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  After you delete a database account, you cannot use the account to log on to the ApsaraDB for ClickHouse cluster. Exercise caution when performing this operation.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database account of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  After you delete a database account, you cannot use the account to log on to the ApsaraDB for ClickHouse cluster. Exercise caution when performing this operation.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary 删除备份策略
       *
       * @param request DeleteBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicyWithOptions(const Models::DeleteBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除备份策略
       *
       * @param request DeleteBackupPolicyRequest
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicy(const Models::DeleteBackupPolicyRequest &request);

      /**
       * @summary Releases a pay-as-you-go ApsaraDB for ClickHouse cluster.
       *
       * @description **Warning** After an ApsaraDB for ClickHouse cluster is deleted, all data in the cluster is deleted and cannot be recovered. Exercise caution when performing this operation.
       *
       * @param request DeleteDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBClusterWithOptions(const Models::DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go ApsaraDB for ClickHouse cluster.
       *
       * @description **Warning** After an ApsaraDB for ClickHouse cluster is deleted, all data in the cluster is deleted and cannot be recovered. Exercise caution when performing this operation.
       *
       * @param request DeleteDBClusterRequest
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBCluster(const Models::DeleteDBClusterRequest &request);

      /**
       * @summary Removes a Server Load Balancer (SLB) instance from an ApsaraDB for ClickHouse cluster.
       *
       * @description ## [](#)Description
       * After an SLB instance is released, simple load balancing is performed on inbound traffic based on the domain name. The health status of all nodes is no longer checked. As a result, unavailable nodes may fail to be detected, and normal requests may be routed to the unavailable nodes. This causes the failures of some read and write requests.
       *
       * @param request DeleteSLBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSLBResponse
       */
      Models::DeleteSLBResponse deleteSLBWithOptions(const Models::DeleteSLBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a Server Load Balancer (SLB) instance from an ApsaraDB for ClickHouse cluster.
       *
       * @description ## [](#)Description
       * After an SLB instance is released, simple load balancing is performed on inbound traffic based on the domain name. The health status of all nodes is no longer checked. As a result, unavailable nodes may fail to be detected, and normal requests may be routed to the unavailable nodes. This causes the failures of some read and write requests.
       *
       * @param request DeleteSLBRequest
       * @return DeleteSLBResponse
       */
      Models::DeleteSLBResponse deleteSLB(const Models::DeleteSLBRequest &request);

      /**
       * @summary Deletes a database used for data synchronization.
       *
       * @param request DeleteSyndbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSyndbResponse
       */
      Models::DeleteSyndbResponse deleteSyndbWithOptions(const Models::DeleteSyndbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database used for data synchronization.
       *
       * @param request DeleteSyndbRequest
       * @return DeleteSyndbResponse
       */
      Models::DeleteSyndbResponse deleteSyndb(const Models::DeleteSyndbRequest &request);

      /**
       * @summary Queries the permissions of an account.
       *
       * @param request DescribeAccountAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountAuthorityResponse
       */
      Models::DescribeAccountAuthorityResponse describeAccountAuthorityWithOptions(const Models::DescribeAccountAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions of an account.
       *
       * @param request DescribeAccountAuthorityRequest
       * @return DescribeAccountAuthorityResponse
       */
      Models::DescribeAccountAuthorityResponse describeAccountAuthority(const Models::DescribeAccountAuthorityRequest &request);

      /**
       * @summary Queries the information about the database accounts of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the database accounts of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries a list of databases, tables, and columns in an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAllDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllDataSourceResponse
       */
      Models::DescribeAllDataSourceResponse describeAllDataSourceWithOptions(const Models::DescribeAllDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of databases, tables, and columns in an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAllDataSourceRequest
       * @return DescribeAllDataSourceResponse
       */
      Models::DescribeAllDataSourceResponse describeAllDataSource(const Models::DescribeAllDataSourceRequest &request);

      /**
       * @summary Queries the data sources of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAllDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllDataSourcesResponse
       */
      Models::DescribeAllDataSourcesResponse describeAllDataSourcesWithOptions(const Models::DescribeAllDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data sources of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAllDataSourcesRequest
       * @return DescribeAllDataSourcesResponse
       */
      Models::DescribeAllDataSourcesResponse describeAllDataSources(const Models::DescribeAllDataSourcesRequest &request);

      /**
       * @param request DescribeAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoRenewAttributeResponse
       */
      Models::DescribeAutoRenewAttributeResponse describeAutoRenewAttributeWithOptions(const Models::DescribeAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeAutoRenewAttributeRequest
       * @return DescribeAutoRenewAttributeResponse
       */
      Models::DescribeAutoRenewAttributeResponse describeAutoRenewAttribute(const Models::DescribeAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the backup settings of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup settings of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the backup sets of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is available only for ApsaraDB for ClickHouse clusters of version 21.8 and later.
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup sets of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is available only for ApsaraDB for ClickHouse clusters of version 21.8 and later.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Queries information about columns.
       *
       * @param request DescribeColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumnsWithOptions(const Models::DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about columns.
       *
       * @param request DescribeColumnsRequest
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumns(const Models::DescribeColumnsRequest &request);

      /**
       * @summary Queries the change records of the configuration parameters of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
       *
       * @param request DescribeConfigHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigHistoryResponse
       */
      Models::DescribeConfigHistoryResponse describeConfigHistoryWithOptions(const Models::DescribeConfigHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the change records of the configuration parameters of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
       *
       * @param request DescribeConfigHistoryRequest
       * @return DescribeConfigHistoryResponse
       */
      Models::DescribeConfigHistoryResponse describeConfigHistory(const Models::DescribeConfigHistoryRequest &request);

      /**
       * @summary Queries the values of the configuration parameters of an ApsaraDB for ClickHouse cluster before and after the values of the configuration parameters are changed.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
       *
       * @param request DescribeConfigVersionDifferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigVersionDifferenceResponse
       */
      Models::DescribeConfigVersionDifferenceResponse describeConfigVersionDifferenceWithOptions(const Models::DescribeConfigVersionDifferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the values of the configuration parameters of an ApsaraDB for ClickHouse cluster before and after the values of the configuration parameters are changed.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
       *
       * @param request DescribeConfigVersionDifferenceRequest
       * @return DescribeConfigVersionDifferenceResponse
       */
      Models::DescribeConfigVersionDifferenceResponse describeConfigVersionDifference(const Models::DescribeConfigVersionDifferenceRequest &request);

      /**
       * @summary Queries the IP address whitelist of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterAccessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAccessWhiteListResponse
       */
      Models::DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteListWithOptions(const Models::DescribeDBClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address whitelist of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterAccessWhiteListRequest
       * @return DescribeDBClusterAccessWhiteListResponse
       */
      Models::DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteList(const Models::DescribeDBClusterAccessWhiteListRequest &request);

      /**
       * @summary Queries the information about an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(const Models::DescribeDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterAttributeRequest
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttribute(const Models::DescribeDBClusterAttributeRequest &request);

      /**
       * @summary Queries information about the parameter settings of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterConfigResponse
       */
      Models::DescribeDBClusterConfigResponse describeDBClusterConfigWithOptions(const Models::DescribeDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the parameter settings of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterConfigRequest
       * @return DescribeDBClusterConfigResponse
       */
      Models::DescribeDBClusterConfigResponse describeDBClusterConfig(const Models::DescribeDBClusterConfigRequest &request);

      /**
       * @summary Queries the values of the configuration parameters in the config.xml file of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
       *
       * @param request DescribeDBClusterConfigInXMLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterConfigInXMLResponse
       */
      Models::DescribeDBClusterConfigInXMLResponse describeDBClusterConfigInXMLWithOptions(const Models::DescribeDBClusterConfigInXMLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the values of the configuration parameters in the config.xml file of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
       *
       * @param request DescribeDBClusterConfigInXMLRequest
       * @return DescribeDBClusterConfigInXMLResponse
       */
      Models::DescribeDBClusterConfigInXMLResponse describeDBClusterConfigInXML(const Models::DescribeDBClusterConfigInXMLRequest &request);

      /**
       * @summary Queries the network information about an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterNetInfoItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterNetInfoItemsResponse
       */
      Models::DescribeDBClusterNetInfoItemsResponse describeDBClusterNetInfoItemsWithOptions(const Models::DescribeDBClusterNetInfoItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network information about an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBClusterNetInfoItemsRequest
       * @return DescribeDBClusterNetInfoItemsResponse
       */
      Models::DescribeDBClusterNetInfoItemsResponse describeDBClusterNetInfoItems(const Models::DescribeDBClusterNetInfoItemsRequest &request);

      /**
       * @summary Queries performance data about an ApsaraDB for ClickHouse cluster.
       *
       * @description You can query the performance data of a specified cluster over a specific time range based on the performance metrics. The data is collected every 30 seconds.
       * >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created before December 1, 2021.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(const Models::DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries performance data about an ApsaraDB for ClickHouse cluster.
       *
       * @description You can query the performance data of a specified cluster over a specific time range based on the performance metrics. The data is collected every 30 seconds.
       * >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created before December 1, 2021.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformance(const Models::DescribeDBClusterPerformanceRequest &request);

      /**
       * @summary Queries the information about ApsaraDB for ClickHouse clusters in a region.
       *
       * @param request DescribeDBClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClustersWithOptions(const Models::DescribeDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about ApsaraDB for ClickHouse clusters in a region.
       *
       * @param request DescribeDBClustersRequest
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClusters(const Models::DescribeDBClustersRequest &request);

      /**
       * @summary Queries configuration information about an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBConfigResponse
       */
      Models::DescribeDBConfigResponse describeDBConfigWithOptions(const Models::DescribeDBConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configuration information about an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeDBConfigRequest
       * @return DescribeDBConfigResponse
       */
      Models::DescribeDBConfigResponse describeDBConfig(const Models::DescribeDBConfigRequest &request);

      /**
       * @summary Queries the storage of cold data.
       *
       * @param request DescribeOSSStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOSSStorageResponse
       */
      Models::DescribeOSSStorageResponse describeOSSStorageWithOptions(const Models::DescribeOSSStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage of cold data.
       *
       * @param request DescribeOSSStorageRequest
       * @return DescribeOSSStorageResponse
       */
      Models::DescribeOSSStorageResponse describeOSSStorage(const Models::DescribeOSSStorageRequest &request);

      /**
       * @summary Queries the details of queries that are being executed in an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeProcessListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessListWithOptions(const Models::DescribeProcessListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of queries that are being executed in an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeProcessListRequest
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessList(const Models::DescribeProcessListRequest &request);

      /**
       * @summary Queries the information about all regions and zones of ApsaraDB for ClickHouse clusters.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all regions and zones of ApsaraDB for ClickHouse clusters.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries a list of all databases in an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSchemasResponse
       */
      Models::DescribeSchemasResponse describeSchemasWithOptions(const Models::DescribeSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of all databases in an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeSchemasRequest
       * @return DescribeSchemasResponse
       */
      Models::DescribeSchemasResponse describeSchemas(const Models::DescribeSchemasRequest &request);

      /**
       * @summary Queries the details about slow query logs.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about slow query logs.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @param request DescribeSlowLogTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogTrendResponse
       */
      Models::DescribeSlowLogTrendResponse describeSlowLogTrendWithOptions(const Models::DescribeSlowLogTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeSlowLogTrendRequest
       * @return DescribeSlowLogTrendResponse
       */
      Models::DescribeSlowLogTrendResponse describeSlowLogTrend(const Models::DescribeSlowLogTrendRequest &request);

      /**
       * @summary Queries information about tables that are synchronized from an ApsaraDB RDS for MySQL instance to an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeSynDbTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynDbTablesResponse
       */
      Models::DescribeSynDbTablesResponse describeSynDbTablesWithOptions(const Models::DescribeSynDbTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about tables that are synchronized from an ApsaraDB RDS for MySQL instance to an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeSynDbTablesRequest
       * @return DescribeSynDbTablesResponse
       */
      Models::DescribeSynDbTablesResponse describeSynDbTables(const Models::DescribeSynDbTablesRequest &request);

      /**
       * @summary Queries the information about data synchronization between an ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
       *
       * @param request DescribeSynDbsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynDbsResponse
       */
      Models::DescribeSynDbsResponse describeSynDbsWithOptions(const Models::DescribeSynDbsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about data synchronization between an ApsaraDB for ClickHouse cluster and an ApsaraDB RDS for MySQL instance.
       *
       * @param request DescribeSynDbsRequest
       * @return DescribeSynDbsResponse
       */
      Models::DescribeSynDbsResponse describeSynDbs(const Models::DescribeSynDbsRequest &request);

      /**
       * @summary Queries the information about tables in a database of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTablesWithOptions(const Models::DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about tables in a database of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeTablesRequest
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTables(const Models::DescribeTablesRequest &request);

      /**
       * @summary Queries information about data migration from an ApsaraDB for ClickHouse cluster of an earlier version to an ApsaraDB for ClickHouse cluster of a later version
       *
       * @description >  You can call this operation to query information about only data migration from an ApsaraDB for ClickHouse cluster of an earlier version to an ApsaraDB for ClickHouse cluster of a later version.
       *
       * @param request DescribeTransferHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransferHistoryResponse
       */
      Models::DescribeTransferHistoryResponse describeTransferHistoryWithOptions(const Models::DescribeTransferHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about data migration from an ApsaraDB for ClickHouse cluster of an earlier version to an ApsaraDB for ClickHouse cluster of a later version
       *
       * @description >  You can call this operation to query information about only data migration from an ApsaraDB for ClickHouse cluster of an earlier version to an ApsaraDB for ClickHouse cluster of a later version.
       *
       * @param request DescribeTransferHistoryRequest
       * @return DescribeTransferHistoryResponse
       */
      Models::DescribeTransferHistoryResponse describeTransferHistory(const Models::DescribeTransferHistoryRequest &request);

      /**
       * @summary Terminates an ongoing task.
       *
       * @param request KillProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KillProcessResponse
       */
      Models::KillProcessResponse killProcessWithOptions(const Models::KillProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates an ongoing task.
       *
       * @param request KillProcessRequest
       * @return KillProcessResponse
       */
      Models::KillProcessResponse killProcess(const Models::KillProcessRequest &request);

      /**
       * @summary Modifies the permissions of an account.
       *
       * @param request ModifyAccountAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountAuthorityResponse
       */
      Models::ModifyAccountAuthorityResponse modifyAccountAuthorityWithOptions(const Models::ModifyAccountAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of an account.
       *
       * @param request ModifyAccountAuthorityRequest
       * @return ModifyAccountAuthorityResponse
       */
      Models::ModifyAccountAuthorityResponse modifyAccountAuthority(const Models::ModifyAccountAuthorityRequest &request);

      /**
       * @summary Modifies the description of a database account of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database account of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @param request ModifyAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoRenewAttributeResponse
       */
      Models::ModifyAutoRenewAttributeResponse modifyAutoRenewAttributeWithOptions(const Models::ModifyAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAutoRenewAttributeRequest
       * @return ModifyAutoRenewAttributeResponse
       */
      Models::ModifyAutoRenewAttributeResponse modifyAutoRenewAttribute(const Models::ModifyAutoRenewAttributeRequest &request);

      /**
       * @summary Modifies the backup settings of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup settings of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is available only for the ApsaraDB for ClickHouse clusters of versions 20.3, 20.8, and 21.8.
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Upgrades or downgrades an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBClusterWithOptions(const Models::ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterRequest
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBCluster(const Models::ModifyDBClusterRequest &request);

      /**
       * @summary Modifies the IP address whitelist of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterAccessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterAccessWhiteListResponse
       */
      Models::ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteListWithOptions(const Models::ModifyDBClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelist of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterAccessWhiteListRequest
       * @return ModifyDBClusterAccessWhiteListResponse
       */
      Models::ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteList(const Models::ModifyDBClusterAccessWhiteListRequest &request);

      /**
       * @summary Modifies the configurations of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterConfigResponse
       */
      Models::ModifyDBClusterConfigResponse modifyDBClusterConfigWithOptions(const Models::ModifyDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterConfigRequest
       * @return ModifyDBClusterConfigResponse
       */
      Models::ModifyDBClusterConfigResponse modifyDBClusterConfig(const Models::ModifyDBClusterConfigRequest &request);

      /**
       * @summary Changes the configuration parameters of an ApsaraDB for ClickHouse cluster that runs Community-compatible Edition.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
       *
       * @param request ModifyDBClusterConfigInXMLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterConfigInXMLResponse
       */
      Models::ModifyDBClusterConfigInXMLResponse modifyDBClusterConfigInXMLWithOptions(const Models::ModifyDBClusterConfigInXMLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the configuration parameters of an ApsaraDB for ClickHouse cluster that runs Community-compatible Edition.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were created after December 1, 2021.
       *
       * @param request ModifyDBClusterConfigInXMLRequest
       * @return ModifyDBClusterConfigInXMLResponse
       */
      Models::ModifyDBClusterConfigInXMLResponse modifyDBClusterConfigInXML(const Models::ModifyDBClusterConfigInXMLRequest &request);

      /**
       * @summary Changes the name of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(const Models::ModifyDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescription(const Models::ModifyDBClusterDescriptionRequest &request);

      /**
       * @summary Modifies the maintenance window of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(const Models::ModifyDBClusterMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(const Models::ModifyDBClusterMaintainTimeRequest &request);

      /**
       * @summary Modifies the dictionary configuration of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBConfigResponse
       */
      Models::ModifyDBConfigResponse modifyDBConfigWithOptions(const Models::ModifyDBConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the dictionary configuration of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBConfigRequest
       * @return ModifyDBConfigResponse
       */
      Models::ModifyDBConfigResponse modifyDBConfig(const Models::ModifyDBConfigRequest &request);

      /**
       * @summary Modifies the type of a minor version update in ApsaraDB for ClickHouse.
       *
       * @param request ModifyMinorVersionGreadeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMinorVersionGreadeTypeResponse
       */
      Models::ModifyMinorVersionGreadeTypeResponse modifyMinorVersionGreadeTypeWithOptions(const Models::ModifyMinorVersionGreadeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the type of a minor version update in ApsaraDB for ClickHouse.
       *
       * @param request ModifyMinorVersionGreadeTypeRequest
       * @return ModifyMinorVersionGreadeTypeResponse
       */
      Models::ModifyMinorVersionGreadeTypeResponse modifyMinorVersionGreadeType(const Models::ModifyMinorVersionGreadeTypeRequest &request);

      /**
       * @summary Modifies the synchronization task of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is applicable only to ApsaraDB for ClickHouse clusters.
       *
       * @param request ModifyRDSToClickhouseDbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRDSToClickhouseDbResponse
       */
      Models::ModifyRDSToClickhouseDbResponse modifyRDSToClickhouseDbWithOptions(const Models::ModifyRDSToClickhouseDbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the synchronization task of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  This operation is applicable only to ApsaraDB for ClickHouse clusters.
       *
       * @param request ModifyRDSToClickhouseDbRequest
       * @return ModifyRDSToClickhouseDbResponse
       */
      Models::ModifyRDSToClickhouseDbResponse modifyRDSToClickhouseDb(const Models::ModifyRDSToClickhouseDbRequest &request);

      /**
       * @summary Releases the public endpoint of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ReleaseClusterPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseClusterPublicConnectionResponse
       */
      Models::ReleaseClusterPublicConnectionResponse releaseClusterPublicConnectionWithOptions(const Models::ReleaseClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ReleaseClusterPublicConnectionRequest
       * @return ReleaseClusterPublicConnectionResponse
       */
      Models::ReleaseClusterPublicConnectionResponse releaseClusterPublicConnection(const Models::ReleaseClusterPublicConnectionRequest &request);

      /**
       * @summary Resets the password of a database account for an ApsaraDB for ClickHouse cluster.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a database account for an ApsaraDB for ClickHouse cluster.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Restarts an ApsaraDB for ClickHouse cluster.
       *
       * @param request RestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an ApsaraDB for ClickHouse cluster.
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary Migrates the data of a source ApsaraDB for ClickHouse cluster to a destination ApsaraDB for ClickHouse cluster.
       *
       * @description ## [](#)Prerequisites
       * *   The IP address of the source ApsaraDB for ClickHouse cluster is added to the IP address whitelist of the destination ApsaraDB for ClickHouse cluster.
       * *   The IP address of the destination ApsaraDB for ClickHouse cluster is added to the IP address whitelist of the source ApsaraDB for ClickHouse cluster.
       * >  You can execute the `select * from system.clusters;` statement to query the IP address of an ApsaraDB for ClickHouse cluster.
       *
       * @param request TransferVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferVersionResponse
       */
      Models::TransferVersionResponse transferVersionWithOptions(const Models::TransferVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates the data of a source ApsaraDB for ClickHouse cluster to a destination ApsaraDB for ClickHouse cluster.
       *
       * @description ## [](#)Prerequisites
       * *   The IP address of the source ApsaraDB for ClickHouse cluster is added to the IP address whitelist of the destination ApsaraDB for ClickHouse cluster.
       * *   The IP address of the destination ApsaraDB for ClickHouse cluster is added to the IP address whitelist of the source ApsaraDB for ClickHouse cluster.
       * >  You can execute the `select * from system.clusters;` statement to query the IP address of an ApsaraDB for ClickHouse cluster.
       *
       * @param request TransferVersionRequest
       * @return TransferVersionResponse
       */
      Models::TransferVersionResponse transferVersion(const Models::TransferVersionRequest &request);

      /**
       * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were purchased after December 1, 2021.
       *
       * @param request UpgradeMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersionWithOptions(const Models::UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster.
       *
       * @description >  You can call this operation only for ApsaraDB for ClickHouse clusters that were purchased after December 1, 2021.
       *
       * @param request UpgradeMinorVersionRequest
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersion(const Models::UpgradeMinorVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
