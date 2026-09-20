// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_HBASE20190101_HPP_
#define ALIBABACLOUD_HBASE20190101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/HBase20190101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/HBase20190101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a self-managed HDFS address to Xpack.
       *
       * @param request AddUserHdfsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserHdfsInfoResponse
       */
      Models::AddUserHdfsInfoResponse addUserHdfsInfoWithOptions(const Models::AddUserHdfsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a self-managed HDFS address to Xpack.
       *
       * @param request AddUserHdfsInfoRequest
       * @return AddUserHdfsInfoResponse
       */
      Models::AddUserHdfsInfoResponse addUserHdfsInfo(const Models::AddUserHdfsInfoRequest &request);

      /**
       * @summary Applies for a public endpoint.
       *
       * @param request AllocatePublicNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocatePublicNetworkAddressResponse
       */
      Models::AllocatePublicNetworkAddressResponse allocatePublicNetworkAddressWithOptions(const Models::AllocatePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a public endpoint.
       *
       * @param request AllocatePublicNetworkAddressRequest
       * @return AllocatePublicNetworkAddressResponse
       */
      Models::AllocatePublicNetworkAddressResponse allocatePublicNetworkAddress(const Models::AllocatePublicNetworkAddressRequest &request);

      /**
       * @summary Cancels O&M event tasks by calling the CancelActiveOperationTasks operation.
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels O&M event tasks by calling the CancelActiveOperationTasks operation.
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Checks whether the versions of components are the latest versions by calling CheckComponentsVersion.
       *
       * @param request CheckComponentsVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckComponentsVersionResponse
       */
      Models::CheckComponentsVersionResponse checkComponentsVersionWithOptions(const Models::CheckComponentsVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the versions of components are the latest versions by calling CheckComponentsVersion.
       *
       * @param request CheckComponentsVersionRequest
       * @return CheckComponentsVersionResponse
       */
      Models::CheckComponentsVersionResponse checkComponentsVersion(const Models::CheckComponentsVersionRequest &request);

      /**
       * @summary Disables the backup and recovery feature for an HBase cluster by calling CloseBackup.
       *
       * @param request CloseBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseBackupResponse
       */
      Models::CloseBackupResponse closeBackupWithOptions(const Models::CloseBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the backup and recovery feature for an HBase cluster by calling CloseBackup.
       *
       * @param request CloseBackupRequest
       * @return CloseBackupResponse
       */
      Models::CloseBackupResponse closeBackup(const Models::CloseBackupRequest &request);

      /**
       * @summary Converts an instance from pay-as-you-go to subscription billing.
       *
       * @description Note: This operation can be called only when payType is set to Postpaid.
       *
       * @param request ConvertInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertInstanceResponse
       */
      Models::ConvertInstanceResponse convertInstanceWithOptions(const Models::ConvertInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts an instance from pay-as-you-go to subscription billing.
       *
       * @description Note: This operation can be called only when payType is set to Postpaid.
       *
       * @param request ConvertInstanceRequest
       * @return ConvertInstanceResponse
       */
      Models::ConvertInstanceResponse convertInstance(const Models::ConvertInstanceRequest &request);

      /**
       * @summary Creates a wide table account.
       *
       * @description Only ApsaraDB for HBase Performance-enhanced Edition is supported.
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a wide table account.
       *
       * @description Only ApsaraDB for HBase Performance-enhanced Edition is supported.
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates a backup plan. Currently, only HBaseue is supported.
       *
       * @description Currently, this operation supports only HBaseue clusters. The EnableHBaseueBackup operation is compatible with this operation and performs automatic creation of a backup plan after a BDS cluster is created.
       *
       * @param request CreateBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupPlanResponse
       */
      Models::CreateBackupPlanResponse createBackupPlanWithOptions(const Models::CreateBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup plan. Currently, only HBaseue is supported.
       *
       * @description Currently, this operation supports only HBaseue clusters. The EnableHBaseueBackup operation is compatible with this operation and performs automatic creation of a backup plan after a BDS cluster is created.
       *
       * @param request CreateBackupPlanRequest
       * @return CreateBackupPlanResponse
       */
      Models::CreateBackupPlanResponse createBackupPlan(const Models::CreateBackupPlanRequest &request);

      /**
       * @summary Creates an ApsaraDB for HBase cluster by calling CreateCluster.
       *
       * @param request CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraDB for HBase cluster by calling CreateCluster.
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary Creates a global resource in a cluster by calling CreateGlobalResource.
       *
       * @param request CreateGlobalResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalResourceResponse
       */
      Models::CreateGlobalResourceResponse createGlobalResourceWithOptions(const Models::CreateGlobalResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a global resource in a cluster by calling CreateGlobalResource.
       *
       * @param request CreateGlobalResourceRequest
       * @return CreateGlobalResourceResponse
       */
      Models::CreateGlobalResourceResponse createGlobalResource(const Models::CreateGlobalResourceRequest &request);

      /**
       * @summary Creates a load balancing service by calling CreateHBaseSlbServer.
       *
       * @param request CreateHBaseSlbServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHBaseSlbServerResponse
       */
      Models::CreateHBaseSlbServerResponse createHBaseSlbServerWithOptions(const Models::CreateHBaseSlbServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a load balancing service by calling CreateHBaseSlbServer.
       *
       * @param request CreateHBaseSlbServerRequest
       * @return CreateHBaseSlbServerResponse
       */
      Models::CreateHBaseSlbServerResponse createHBaseSlbServer(const Models::CreateHBaseSlbServerRequest &request);

      /**
       * @summary Creates a high-availability Thrift or Phoenix service for a BDS cluster that already has a high-availability HBase setup.
       *
       * @param request CreateHbaseHaSlbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHbaseHaSlbResponse
       */
      Models::CreateHbaseHaSlbResponse createHbaseHaSlbWithOptions(const Models::CreateHbaseHaSlbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a high-availability Thrift or Phoenix service for a BDS cluster that already has a high-availability HBase setup.
       *
       * @param request CreateHbaseHaSlbRequest
       * @return CreateHbaseHaSlbResponse
       */
      Models::CreateHbaseHaSlbResponse createHbaseHaSlb(const Models::CreateHbaseHaSlbRequest &request);

      /**
       * @summary Creates a multi-zone cluster by calling CreateMultiZoneCluster.
       *
       * @description Currently, only version 2.0 of the HBaseue engine is supported.
       *
       * @param request CreateMultiZoneClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultiZoneClusterResponse
       */
      Models::CreateMultiZoneClusterResponse createMultiZoneClusterWithOptions(const Models::CreateMultiZoneClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a multi-zone cluster by calling CreateMultiZoneCluster.
       *
       * @description Currently, only version 2.0 of the HBaseue engine is supported.
       *
       * @param request CreateMultiZoneClusterRequest
       * @return CreateMultiZoneClusterResponse
       */
      Models::CreateMultiZoneClusterResponse createMultiZoneCluster(const Models::CreateMultiZoneClusterRequest &request);

      /**
       * @summary Restores backed-up data from a cluster with the backup and restore feature enabled to another ApsaraDB for HBase Performance-enhanced Edition cluster in the same region.
       *
       * @description Before calling this operation, make sure that the backup and restore feature is enabled for the ApsaraDB for HBase Performance-enhanced Edition cluster and that the target ApsaraDB for HBase Performance-enhanced Edition cluster is associated with the corresponding BDS.
       *
       * @param request CreateRestorePlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRestorePlanResponse
       */
      Models::CreateRestorePlanResponse createRestorePlanWithOptions(const Models::CreateRestorePlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores backed-up data from a cluster with the backup and restore feature enabled to another ApsaraDB for HBase Performance-enhanced Edition cluster in the same region.
       *
       * @description Before calling this operation, make sure that the backup and restore feature is enabled for the ApsaraDB for HBase Performance-enhanced Edition cluster and that the target ApsaraDB for HBase Performance-enhanced Edition cluster is associated with the corresponding BDS.
       *
       * @param request CreateRestorePlanRequest
       * @return CreateRestorePlanResponse
       */
      Models::CreateRestorePlanResponse createRestorePlan(const Models::CreateRestorePlanRequest &request);

      /**
       * @summary Creates an HBase Serverless cluster.
       *
       * @param request CreateServerlessClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServerlessClusterResponse
       */
      Models::CreateServerlessClusterResponse createServerlessClusterWithOptions(const Models::CreateServerlessClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an HBase Serverless cluster.
       *
       * @param request CreateServerlessClusterRequest
       * @return CreateServerlessClusterResponse
       */
      Models::CreateServerlessClusterResponse createServerlessCluster(const Models::CreateServerlessClusterRequest &request);

      /**
       * @summary Delete Wide Table Database Account
       *
       * @description Only supported for HBase Enhanced Edition (HBaseue).
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Wide Table Database Account
       *
       * @description Only supported for HBase Enhanced Edition (HBaseue).
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes a global resource from a cluster by calling DeleteGlobalResource.
       *
       * @param request DeleteGlobalResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalResourceResponse
       */
      Models::DeleteGlobalResourceResponse deleteGlobalResourceWithOptions(const Models::DeleteGlobalResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global resource from a cluster by calling DeleteGlobalResource.
       *
       * @param request DeleteGlobalResourceRequest
       * @return DeleteGlobalResourceResponse
       */
      Models::DeleteGlobalResourceResponse deleteGlobalResource(const Models::DeleteGlobalResourceRequest &request);

      /**
       * @summary Deletes a created HA instance.
       *
       * @param request DeleteHBaseHaDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHBaseHaDBResponse
       */
      Models::DeleteHBaseHaDBResponse deleteHBaseHaDBWithOptions(const Models::DeleteHBaseHaDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a created HA instance.
       *
       * @param request DeleteHBaseHaDBRequest
       * @return DeleteHBaseHaDBResponse
       */
      Models::DeleteHBaseHaDBResponse deleteHBaseHaDB(const Models::DeleteHBaseHaDBRequest &request);

      /**
       * @summary Calls DeleteHBaseSlbServer to delete an activated load balancing service.
       *
       * @param request DeleteHBaseSlbServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHBaseSlbServerResponse
       */
      Models::DeleteHBaseSlbServerResponse deleteHBaseSlbServerWithOptions(const Models::DeleteHBaseSlbServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DeleteHBaseSlbServer to delete an activated load balancing service.
       *
       * @param request DeleteHBaseSlbServerRequest
       * @return DeleteHBaseSlbServerResponse
       */
      Models::DeleteHBaseSlbServerResponse deleteHBaseSlbServer(const Models::DeleteHBaseSlbServerRequest &request);

      /**
       * @summary Deletes the corresponding high-availability Thrift or high-availability Phoenix configuration. This operation is the counterpart of the CreateHbaseHaSlb operation.
       *
       * @param request DeleteHbaseHaSlbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHbaseHaSlbResponse
       */
      Models::DeleteHbaseHaSlbResponse deleteHbaseHaSlbWithOptions(const Models::DeleteHbaseHaSlbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the corresponding high-availability Thrift or high-availability Phoenix configuration. This operation is the counterpart of the CreateHbaseHaSlb operation.
       *
       * @param request DeleteHbaseHaSlbRequest
       * @return DeleteHbaseHaSlbResponse
       */
      Models::DeleteHbaseHaSlbResponse deleteHbaseHaSlb(const Models::DeleteHbaseHaSlbRequest &request);

      /**
       * @summary Calls DeleteInstance to release an HBase instance.
       *
       * @description When you call this operation, the instance must meet the following conditions:
       * - The instance status is **Running**.
       * - The billing method of the instance is **pay-as-you-go**.
       * > Subscription instances cannot be deleted by calling this operation. They are automatically released upon expiration. To release a subscription instance in advance, submit a ticket.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DeleteInstance to release an HBase instance.
       *
       * @description When you call this operation, the instance must meet the following conditions:
       * - The instance status is **Running**.
       * - The billing method of the instance is **pay-as-you-go**.
       * > Subscription instances cannot be deleted by calling this operation. They are automatically released upon expiration. To release a subscription instance in advance, submit a ticket.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes a multi-zone instance by calling the DeleteMultiZoneCluster operation.
       *
       * @param request DeleteMultiZoneClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMultiZoneClusterResponse
       */
      Models::DeleteMultiZoneClusterResponse deleteMultiZoneClusterWithOptions(const Models::DeleteMultiZoneClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a multi-zone instance by calling the DeleteMultiZoneCluster operation.
       *
       * @param request DeleteMultiZoneClusterRequest
       * @return DeleteMultiZoneClusterResponse
       */
      Models::DeleteMultiZoneClusterResponse deleteMultiZoneCluster(const Models::DeleteMultiZoneClusterRequest &request);

      /**
       * @summary Deletes an HBase Serverless cluster.
       *
       * @param request DeleteServerlessClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServerlessClusterResponse
       */
      Models::DeleteServerlessClusterResponse deleteServerlessClusterWithOptions(const Models::DeleteServerlessClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an HBase Serverless cluster.
       *
       * @param request DeleteServerlessClusterRequest
       * @return DeleteServerlessClusterResponse
       */
      Models::DeleteServerlessClusterResponse deleteServerlessCluster(const Models::DeleteServerlessClusterRequest &request);

      /**
       * @summary Calls DeleteUserHdfsInfo to delete user-created HDFS information in Xpack.
       *
       * @param request DeleteUserHdfsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserHdfsInfoResponse
       */
      Models::DeleteUserHdfsInfoResponse deleteUserHdfsInfoWithOptions(const Models::DeleteUserHdfsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DeleteUserHdfsInfo to delete user-created HDFS information in Xpack.
       *
       * @param request DeleteUserHdfsInfoRequest
       * @return DeleteUserHdfsInfoResponse
       */
      Models::DeleteUserHdfsInfoResponse deleteUserHdfsInfo(const Models::DeleteUserHdfsInfoRequest &request);

      /**
       * @summary Queries the list of database accounts.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of database accounts.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Calls the DescribeActiveOperationTaskType operation to query the O&M task types, the number of tasks of each type, and the details of an HBase instance.
       *
       * @param request DescribeActiveOperationTaskTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskTypeResponse
       */
      Models::DescribeActiveOperationTaskTypeResponse describeActiveOperationTaskTypeWithOptions(const Models::DescribeActiveOperationTaskTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeActiveOperationTaskType operation to query the O&M task types, the number of tasks of each type, and the details of an HBase instance.
       *
       * @param request DescribeActiveOperationTaskTypeRequest
       * @return DescribeActiveOperationTaskTypeResponse
       */
      Models::DescribeActiveOperationTaskTypeResponse describeActiveOperationTaskType(const Models::DescribeActiveOperationTaskTypeRequest &request);

      /**
       * @summary Calls the DescribeActiveOperationTasks operation to query details of O&M tasks for HBase instances.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeActiveOperationTasks operation to query details of O&M tasks for HBase instances.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary Queries available resources by calling DescribeAvailableResource.
       *
       * @param request DescribeAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResourceWithOptions(const Models::DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available resources by calling DescribeAvailableResource.
       *
       * @param request DescribeAvailableResourceRequest
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResource(const Models::DescribeAvailableResourceRequest &request);

      /**
       * @summary Queries the configuration of a backup plan by calling the DescribeBackupPlanConfig operation.
       *
       * @description This operation currently supports only HBaseue. Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue instance.
       *
       * @param request DescribeBackupPlanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPlanConfigResponse
       */
      Models::DescribeBackupPlanConfigResponse describeBackupPlanConfigWithOptions(const Models::DescribeBackupPlanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a backup plan by calling the DescribeBackupPlanConfig operation.
       *
       * @description This operation currently supports only HBaseue. Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue instance.
       *
       * @param request DescribeBackupPlanConfigRequest
       * @return DescribeBackupPlanConfigResponse
       */
      Models::DescribeBackupPlanConfigResponse describeBackupPlanConfig(const Models::DescribeBackupPlanConfigRequest &request);

      /**
       * @summary Queries the backup policy of an HBase cluster by calling DescribeBackupPolicy.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup policy of an HBase cluster by calling DescribeBackupPolicy.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Describes the status of a backup task by calling the DescribeBackupStatus operation.
       *
       * @param request DescribeBackupStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupStatusResponse
       */
      Models::DescribeBackupStatusResponse describeBackupStatusWithOptions(const Models::DescribeBackupStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the status of a backup task by calling the DescribeBackupStatus operation.
       *
       * @param request DescribeBackupStatusRequest
       * @return DescribeBackupStatusResponse
       */
      Models::DescribeBackupStatusResponse describeBackupStatus(const Models::DescribeBackupStatusRequest &request);

      /**
       * @summary After HBase Enhanced Edition backup is enabled, you can call the DescribeBackupSummary operation to query backup details.
       *
       * @description The backup and restore feature of the HBase Enhanced Edition instance is enabled. For more information, see [Enable backup and restore](https://help.aliyun.com/document_detail/145767.html).
       *
       * @param request DescribeBackupSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupSummaryResponse
       */
      Models::DescribeBackupSummaryResponse describeBackupSummaryWithOptions(const Models::DescribeBackupSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After HBase Enhanced Edition backup is enabled, you can call the DescribeBackupSummary operation to query backup details.
       *
       * @description The backup and restore feature of the HBase Enhanced Edition instance is enabled. For more information, see [Enable backup and restore](https://help.aliyun.com/document_detail/145767.html).
       *
       * @param request DescribeBackupSummaryRequest
       * @return DescribeBackupSummaryResponse
       */
      Models::DescribeBackupSummaryResponse describeBackupSummary(const Models::DescribeBackupSummaryRequest &request);

      /**
       * @summary Queries the backup table information of a specific backup record by calling the DescribeBackupTables operation.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that backup records exist. You can call the DescribeBackupSummary operation to obtain backup records.
       *
       * @param request DescribeBackupTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupTablesResponse
       */
      Models::DescribeBackupTablesResponse describeBackupTablesWithOptions(const Models::DescribeBackupTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup table information of a specific backup record by calling the DescribeBackupTables operation.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that backup records exist. You can call the DescribeBackupSummary operation to obtain backup records.
       *
       * @param request DescribeBackupTablesRequest
       * @return DescribeBackupTablesResponse
       */
      Models::DescribeBackupTablesResponse describeBackupTables(const Models::DescribeBackupTablesRequest &request);

      /**
       * @summary Retrieves backup records of an ApsaraDB for HBase cluster by calling DescribeBackups.
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves backup records of an ApsaraDB for HBase cluster by calling DescribeBackups.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Queries the connection list of a cluster by calling DescribeClusterConnection.
       *
       * @param request DescribeClusterConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterConnectionResponse
       */
      Models::DescribeClusterConnectionResponse describeClusterConnectionWithOptions(const Models::DescribeClusterConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the connection list of a cluster by calling DescribeClusterConnection.
       *
       * @param request DescribeClusterConnectionRequest
       * @return DescribeClusterConnectionResponse
       */
      Models::DescribeClusterConnectionResponse describeClusterConnection(const Models::DescribeClusterConnectionRequest &request);

      /**
       * @summary Calls DescribeColdStorage to retrieve the cold storage information of an instance.
       *
       * @param request DescribeColdStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColdStorageResponse
       */
      Models::DescribeColdStorageResponse describeColdStorageWithOptions(const Models::DescribeColdStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeColdStorage to retrieve the cold storage information of an instance.
       *
       * @param request DescribeColdStorageRequest
       * @return DescribeColdStorageResponse
       */
      Models::DescribeColdStorageResponse describeColdStorage(const Models::DescribeColdStorageRequest &request);

      /**
       * @summary Calls DescribeDBInstanceUsage to retrieve the running watermark status of an HBase cluster by cluster ID.
       *
       * @param request DescribeDBInstanceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceUsageResponse
       */
      Models::DescribeDBInstanceUsageResponse describeDBInstanceUsageWithOptions(const Models::DescribeDBInstanceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeDBInstanceUsage to retrieve the running watermark status of an HBase cluster by cluster ID.
       *
       * @param request DescribeDBInstanceUsageRequest
       * @return DescribeDBInstanceUsageResponse
       */
      Models::DescribeDBInstanceUsageResponse describeDBInstanceUsage(const Models::DescribeDBInstanceUsageRequest &request);

      /**
       * @summary Retrieves a list of clusters that have been deleted but not fully released.
       *
       * @description By default, cluster resources are fully cleaned up 7 days after deletion. If you have called the PurgeInstance operation or set ImmediateDeleteFlag to true when calling the delete operation, the resources have already been fully cleaned up.
       *
       * @param request DescribeDeletedInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeletedInstancesResponse
       */
      Models::DescribeDeletedInstancesResponse describeDeletedInstancesWithOptions(const Models::DescribeDeletedInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of clusters that have been deleted but not fully released.
       *
       * @description By default, cluster resources are fully cleaned up 7 days after deletion. If you have called the PurgeInstance operation or set ImmediateDeleteFlag to true when calling the delete operation, the resources have already been fully cleaned up.
       *
       * @param request DescribeDeletedInstancesRequest
       * @return DescribeDeletedInstancesResponse
       */
      Models::DescribeDeletedInstancesResponse describeDeletedInstances(const Models::DescribeDeletedInstancesRequest &request);

      /**
       * @summary Currently, only HBase and HBaseue are supported.
       *
       * @param request DescribeDiskWarningLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskWarningLineResponse
       */
      Models::DescribeDiskWarningLineResponse describeDiskWarningLineWithOptions(const Models::DescribeDiskWarningLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Currently, only HBase and HBaseue are supported.
       *
       * @param request DescribeDiskWarningLineRequest
       * @return DescribeDiskWarningLineResponse
       */
      Models::DescribeDiskWarningLineResponse describeDiskWarningLine(const Models::DescribeDiskWarningLineRequest &request);

      /**
       * @summary Queries the database connection information of an ApsaraDB for HBase instance by calling DescribeEndpoints.
       *
       * @param request DescribeEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndpointsResponse
       */
      Models::DescribeEndpointsResponse describeEndpointsWithOptions(const Models::DescribeEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database connection information of an ApsaraDB for HBase instance by calling DescribeEndpoints.
       *
       * @param request DescribeEndpointsRequest
       * @return DescribeEndpointsResponse
       */
      Models::DescribeEndpointsResponse describeEndpoints(const Models::DescribeEndpointsRequest &request);

      /**
       * @summary Queries the details of an ApsaraDB for HBase instance.
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an ApsaraDB for HBase instance.
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary Queries instance specifications (CPU and memory) by calling DescribeInstanceType.
       *
       * @description The complete specification mapping table is based on the list returned by this operation.
       * If the response returns an "instanceType is not found" error, the specification has been deprecated. If you have a strong dependency on this specification, contact the Alibaba Cloud HBase management team.
       *
       * @param request DescribeInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTypeResponse
       */
      Models::DescribeInstanceTypeResponse describeInstanceTypeWithOptions(const Models::DescribeInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance specifications (CPU and memory) by calling DescribeInstanceType.
       *
       * @description The complete specification mapping table is based on the list returned by this operation.
       * If the response returns an "instanceType is not found" error, the specification has been deprecated. If you have a strong dependency on this specification, contact the Alibaba Cloud HBase management team.
       *
       * @param request DescribeInstanceTypeRequest
       * @return DescribeInstanceTypeResponse
       */
      Models::DescribeInstanceTypeResponse describeInstanceType(const Models::DescribeInstanceTypeRequest &request);

      /**
       * @summary Queries the list of ApsaraDB for HBase instances in a specified region by calling DescribeInstances.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of ApsaraDB for HBase instances in a specified region by calling DescribeInstances.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Retrieves the IP whitelist information of a cluster by cluster ID.
       *
       * @param request DescribeIpWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpWhitelistResponse
       */
      Models::DescribeIpWhitelistResponse describeIpWhitelistWithOptions(const Models::DescribeIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the IP whitelist information of a cluster by cluster ID.
       *
       * @param request DescribeIpWhitelistRequest
       * @return DescribeIpWhitelistResponse
       */
      Models::DescribeIpWhitelistResponse describeIpWhitelist(const Models::DescribeIpWhitelistRequest &request);

      /**
       * @summary Queries the available region and zone combinations for multi-zone deployment by calling DescribeMultiZoneAvailableRegions.
       *
       * @param request DescribeMultiZoneAvailableRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMultiZoneAvailableRegionsResponse
       */
      Models::DescribeMultiZoneAvailableRegionsResponse describeMultiZoneAvailableRegionsWithOptions(const Models::DescribeMultiZoneAvailableRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available region and zone combinations for multi-zone deployment by calling DescribeMultiZoneAvailableRegions.
       *
       * @param request DescribeMultiZoneAvailableRegionsRequest
       * @return DescribeMultiZoneAvailableRegionsResponse
       */
      Models::DescribeMultiZoneAvailableRegionsResponse describeMultiZoneAvailableRegions(const Models::DescribeMultiZoneAvailableRegionsRequest &request);

      /**
       * @summary Queries purchasable resources in multiple zones by calling DescribeMultiZoneAvailableResource.
       *
       * @param request DescribeMultiZoneAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMultiZoneAvailableResourceResponse
       */
      Models::DescribeMultiZoneAvailableResourceResponse describeMultiZoneAvailableResourceWithOptions(const Models::DescribeMultiZoneAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries purchasable resources in multiple zones by calling DescribeMultiZoneAvailableResource.
       *
       * @param request DescribeMultiZoneAvailableResourceRequest
       * @return DescribeMultiZoneAvailableResourceResponse
       */
      Models::DescribeMultiZoneAvailableResourceResponse describeMultiZoneAvailableResource(const Models::DescribeMultiZoneAvailableResourceRequest &request);

      /**
       * @summary Retrieves the details of a multi-zone instance.
       *
       * @param request DescribeMultiZoneClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMultiZoneClusterResponse
       */
      Models::DescribeMultiZoneClusterResponse describeMultiZoneClusterWithOptions(const Models::DescribeMultiZoneClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a multi-zone instance.
       *
       * @param request DescribeMultiZoneClusterRequest
       * @return DescribeMultiZoneClusterResponse
       */
      Models::DescribeMultiZoneClusterResponse describeMultiZoneCluster(const Models::DescribeMultiZoneClusterRequest &request);

      /**
       * @summary Retrieves the recoverable time range after backup is enabled for an HBaseue cluster.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster.
       *
       * @param request DescribeRecoverableTimeRangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecoverableTimeRangeResponse
       */
      Models::DescribeRecoverableTimeRangeResponse describeRecoverableTimeRangeWithOptions(const Models::DescribeRecoverableTimeRangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the recoverable time range after backup is enabled for an HBaseue cluster.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster.
       *
       * @param request DescribeRecoverableTimeRangeRequest
       * @return DescribeRecoverableTimeRangeResponse
       */
      Models::DescribeRecoverableTimeRangeResponse describeRecoverableTimeRange(const Models::DescribeRecoverableTimeRangeRequest &request);

      /**
       * @summary Queries available regions by calling DescribeRegions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions by calling DescribeRegions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the details of a specific full restoration for an HBaseue cluster that has backup and recovery enabled.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist. You can call DescribeRestoreSummary to obtain restoration records.
       *
       * @param request DescribeRestoreFullDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreFullDetailsResponse
       */
      Models::DescribeRestoreFullDetailsResponse describeRestoreFullDetailsWithOptions(const Models::DescribeRestoreFullDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific full restoration for an HBaseue cluster that has backup and recovery enabled.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist. You can call DescribeRestoreSummary to obtain restoration records.
       *
       * @param request DescribeRestoreFullDetailsRequest
       * @return DescribeRestoreFullDetailsResponse
       */
      Models::DescribeRestoreFullDetailsResponse describeRestoreFullDetails(const Models::DescribeRestoreFullDetailsRequest &request);

      /**
       * @summary Retrieves the details of an incremental restoration by calling the DescribeRestoreIncrDetail operation.
       *
       * @description Before you call this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist. You can call the DescribeRestoreSummary operation to obtain restoration records.
       *
       * @param request DescribeRestoreIncrDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreIncrDetailResponse
       */
      Models::DescribeRestoreIncrDetailResponse describeRestoreIncrDetailWithOptions(const Models::DescribeRestoreIncrDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an incremental restoration by calling the DescribeRestoreIncrDetail operation.
       *
       * @description Before you call this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist. You can call the DescribeRestoreSummary operation to obtain restoration records.
       *
       * @param request DescribeRestoreIncrDetailRequest
       * @return DescribeRestoreIncrDetailResponse
       */
      Models::DescribeRestoreIncrDetailResponse describeRestoreIncrDetail(const Models::DescribeRestoreIncrDetailRequest &request);

      /**
       * @summary Queries the details of schema restoration for an HBaseue cluster that has backup and recovery enabled.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist.
       *
       * @param request DescribeRestoreSchemaDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreSchemaDetailsResponse
       */
      Models::DescribeRestoreSchemaDetailsResponse describeRestoreSchemaDetailsWithOptions(const Models::DescribeRestoreSchemaDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of schema restoration for an HBaseue cluster that has backup and recovery enabled.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restoration records exist.
       *
       * @param request DescribeRestoreSchemaDetailsRequest
       * @return DescribeRestoreSchemaDetailsResponse
       */
      Models::DescribeRestoreSchemaDetailsResponse describeRestoreSchemaDetails(const Models::DescribeRestoreSchemaDetailsRequest &request);

      /**
       * @summary Retrieves the data recovery summary for an HBaseue cluster that has backup and recovery enabled by calling the DescribeRestoreSummary operation.
       *
       * @description Before calling this operation, make sure that backup and recovery is enabled for the HBaseue cluster.
       *
       * @param request DescribeRestoreSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreSummaryResponse
       */
      Models::DescribeRestoreSummaryResponse describeRestoreSummaryWithOptions(const Models::DescribeRestoreSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the data recovery summary for an HBaseue cluster that has backup and recovery enabled by calling the DescribeRestoreSummary operation.
       *
       * @description Before calling this operation, make sure that backup and recovery is enabled for the HBaseue cluster.
       *
       * @param request DescribeRestoreSummaryRequest
       * @return DescribeRestoreSummaryResponse
       */
      Models::DescribeRestoreSummaryResponse describeRestoreSummary(const Models::DescribeRestoreSummaryRequest &request);

      /**
       * @summary Retrieves the details of a restore record for a cluster that has been restored from a backup.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restore records exist. You can call DescribeRestoreSummary to obtain restore records.
       *
       * @param request DescribeRestoreTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreTablesResponse
       */
      Models::DescribeRestoreTablesResponse describeRestoreTablesWithOptions(const Models::DescribeRestoreTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a restore record for a cluster that has been restored from a backup.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster and that restore records exist. You can call DescribeRestoreSummary to obtain restore records.
       *
       * @param request DescribeRestoreTablesRequest
       * @return DescribeRestoreTablesResponse
       */
      Models::DescribeRestoreTablesResponse describeRestoreTables(const Models::DescribeRestoreTablesRequest &request);

      /**
       * @summary Calls DescribeSecurityGroups to retrieve the security group information of a cluster by cluster ID.
       *
       * @param request DescribeSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupsResponse
       */
      Models::DescribeSecurityGroupsResponse describeSecurityGroupsWithOptions(const Models::DescribeSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeSecurityGroups to retrieve the security group information of a cluster by cluster ID.
       *
       * @param request DescribeSecurityGroupsRequest
       * @return DescribeSecurityGroupsResponse
       */
      Models::DescribeSecurityGroupsResponse describeSecurityGroups(const Models::DescribeSecurityGroupsRequest &request);

      /**
       * @summary Queries the details of a serverless cluster by calling DescribeServerlessCluster.
       *
       * @param request DescribeServerlessClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServerlessClusterResponse
       */
      Models::DescribeServerlessClusterResponse describeServerlessClusterWithOptions(const Models::DescribeServerlessClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a serverless cluster by calling DescribeServerlessCluster.
       *
       * @param request DescribeServerlessClusterRequest
       * @return DescribeServerlessClusterResponse
       */
      Models::DescribeServerlessClusterResponse describeServerlessCluster(const Models::DescribeServerlessClusterRequest &request);

      /**
       * @summary Calls DescribeSubDomain to retrieve an available subdomain.
       *
       * @param request DescribeSubDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubDomainResponse
       */
      Models::DescribeSubDomainResponse describeSubDomainWithOptions(const Models::DescribeSubDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeSubDomain to retrieve an available subdomain.
       *
       * @param request DescribeSubDomainRequest
       * @return DescribeSubDomainResponse
       */
      Models::DescribeSubDomainResponse describeSubDomain(const Models::DescribeSubDomainRequest &request);

      /**
       * @summary Enables backup and recovery for an HBaseue cluster.
       *
       * @param request EnableHBaseueBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableHBaseueBackupResponse
       */
      Models::EnableHBaseueBackupResponse enableHBaseueBackupWithOptions(const Models::EnableHBaseueBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables backup and recovery for an HBaseue cluster.
       *
       * @param request EnableHBaseueBackupRequest
       * @return EnableHBaseueBackupResponse
       */
      Models::EnableHBaseueBackupResponse enableHBaseueBackup(const Models::EnableHBaseueBackupRequest &request);

      /**
       * @summary Calls the EnableHBaseueModule operation to enable an extension service.
       *
       * @param request EnableHBaseueModuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableHBaseueModuleResponse
       */
      Models::EnableHBaseueModuleResponse enableHBaseueModuleWithOptions(const Models::EnableHBaseueModuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the EnableHBaseueModule operation to enable an extension service.
       *
       * @param request EnableHBaseueModuleRequest
       * @return EnableHBaseueModuleResponse
       */
      Models::EnableHBaseueModuleResponse enableHBaseueModule(const Models::EnableHBaseueModuleRequest &request);

      /**
       * @summary Calls the EvaluateMultiZoneResource operation to evaluate whether available resources exist.
       *
       * @param request EvaluateMultiZoneResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluateMultiZoneResourceResponse
       */
      Models::EvaluateMultiZoneResourceResponse evaluateMultiZoneResourceWithOptions(const Models::EvaluateMultiZoneResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the EvaluateMultiZoneResource operation to evaluate whether available resources exist.
       *
       * @param request EvaluateMultiZoneResourceRequest
       * @return EvaluateMultiZoneResourceResponse
       */
      Models::EvaluateMultiZoneResourceResponse evaluateMultiZoneResource(const Models::EvaluateMultiZoneResourceRequest &request);

      /**
       * @summary Retrieves the monitoring URL based on the cluster ID.
       *
       * @description CloudMonitor has been migrated. This operation is no longer in use. Access monitoring from the Monitoring and Alerts page in cluster management.
       *
       * @param request GetMultimodeCmsUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultimodeCmsUrlResponse
       */
      Models::GetMultimodeCmsUrlResponse getMultimodeCmsUrlWithOptions(const Models::GetMultimodeCmsUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the monitoring URL based on the cluster ID.
       *
       * @description CloudMonitor has been migrated. This operation is no longer in use. Access monitoring from the Monitoring and Alerts page in cluster management.
       *
       * @param request GetMultimodeCmsUrlRequest
       * @return GetMultimodeCmsUrlResponse
       */
      Models::GetMultimodeCmsUrlResponse getMultimodeCmsUrl(const Models::GetMultimodeCmsUrlRequest &request);

      /**
       * @summary Grants permissions to an account.
       *
       * @param request GrantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantResponse
       */
      Models::GrantResponse grantWithOptions(const Models::GrantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to an account.
       *
       * @param request GrantRequest
       * @return GrantResponse
       */
      Models::GrantResponse grant(const Models::GrantRequest &request);

      /**
       * @summary Calls ListHBaseInstances to retrieve ApsaraDB for HBase instances within the same VPC.
       *
       * @param request ListHBaseInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHBaseInstancesResponse
       */
      Models::ListHBaseInstancesResponse listHBaseInstancesWithOptions(const Models::ListHBaseInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ListHBaseInstances to retrieve ApsaraDB for HBase instances within the same VPC.
       *
       * @param request ListHBaseInstancesRequest
       * @return ListHBaseInstancesResponse
       */
      Models::ListHBaseInstancesResponse listHBaseInstances(const Models::ListHBaseInstancesRequest &request);

      /**
       * @summary Retrieves the modification history of cluster parameters by calling ListInstanceServiceConfigHistories.
       *
       * @param request ListInstanceServiceConfigHistoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceServiceConfigHistoriesResponse
       */
      Models::ListInstanceServiceConfigHistoriesResponse listInstanceServiceConfigHistoriesWithOptions(const Models::ListInstanceServiceConfigHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the modification history of cluster parameters by calling ListInstanceServiceConfigHistories.
       *
       * @param request ListInstanceServiceConfigHistoriesRequest
       * @return ListInstanceServiceConfigHistoriesResponse
       */
      Models::ListInstanceServiceConfigHistoriesResponse listInstanceServiceConfigHistories(const Models::ListInstanceServiceConfigHistoriesRequest &request);

      /**
       * @summary Retrieves the configuration items of a cluster by calling ListInstanceServiceConfigurations.
       *
       * @param request ListInstanceServiceConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceServiceConfigurationsResponse
       */
      Models::ListInstanceServiceConfigurationsResponse listInstanceServiceConfigurationsWithOptions(const Models::ListInstanceServiceConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration items of a cluster by calling ListInstanceServiceConfigurations.
       *
       * @param request ListInstanceServiceConfigurationsRequest
       * @return ListInstanceServiceConfigurationsResponse
       */
      Models::ListInstanceServiceConfigurationsResponse listInstanceServiceConfigurations(const Models::ListInstanceServiceConfigurationsRequest &request);

      /**
       * @summary Retrieves a list of tags by ResourceId or Tag (query by Key only, or by both Key and Value).
       *
       * @description You must specify at least one of the ResourceId and Tag parameters. Otherwise, an error is returned.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of tags by ResourceId or Tag (query by Key only, or by both Key and Value).
       *
       * @description You must specify at least one of the ResourceId and Tag parameters. Otherwise, an error is returned.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Retrieves all labels in a specified region.
       *
       * @param request ListTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTagsWithOptions(const Models::ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all labels in a specified region.
       *
       * @param request ListTagsRequest
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTags(const Models::ListTagsRequest &request);

      /**
       * @summary Changes the password of a database access account.
       *
       * @param request ModifyAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountPasswordResponse
       */
      Models::ModifyAccountPasswordResponse modifyAccountPasswordWithOptions(const Models::ModifyAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the password of a database access account.
       *
       * @param request ModifyAccountPasswordRequest
       * @return ModifyAccountPasswordResponse
       */
      Models::ModifyAccountPasswordResponse modifyAccountPassword(const Models::ModifyAccountPasswordRequest &request);

      /**
       * @summary Calls the ModifyActiveOperationTasks operation to modify the scheduled switchover time of O&M tasks.
       *
       * @description In addition to notifications sent by text message, phone call, email, or internal message, O&M events of ApsaraDB for HBase (such as minor engine version updates) are also displayed in the console. In addition to calling this operation to modify the scheduled switchover time, you can also modify it in the console. For more information, see [Query or manage pending events](https://help.aliyun.com/document_detail/405057.html).
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyActiveOperationTasks operation to modify the scheduled switchover time of O&M tasks.
       *
       * @description In addition to notifications sent by text message, phone call, email, or internal message, O&M events of ApsaraDB for HBase (such as minor engine version updates) are also displayed in the console. In addition to calling this operation to modify the scheduled switchover time, you can also modify it in the console. For more information, see [Query or manage pending events](https://help.aliyun.com/document_detail/405057.html).
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary Modifies the backup configuration for an HBaseue cluster that has backup and recovery enabled.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster.
       *
       * @param request ModifyBackupPlanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPlanConfigResponse
       */
      Models::ModifyBackupPlanConfigResponse modifyBackupPlanConfigWithOptions(const Models::ModifyBackupPlanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup configuration for an HBaseue cluster that has backup and recovery enabled.
       *
       * @description Before calling this operation, make sure that the backup and recovery feature is enabled for the HBaseue cluster.
       *
       * @param request ModifyBackupPlanConfigRequest
       * @return ModifyBackupPlanConfigResponse
       */
      Models::ModifyBackupPlanConfigResponse modifyBackupPlanConfig(const Models::ModifyBackupPlanConfigRequest &request);

      /**
       * @summary Calls ModifyBackupPolicy to modify the backup plan of an HBase cluster.
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ModifyBackupPolicy to modify the backup plan of an HBase cluster.
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Sets the deletion protection attribute of an instance by calling ModifyClusterDeletionProtection.
       *
       * @param request ModifyClusterDeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterDeletionProtectionResponse
       */
      Models::ModifyClusterDeletionProtectionResponse modifyClusterDeletionProtectionWithOptions(const Models::ModifyClusterDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the deletion protection attribute of an instance by calling ModifyClusterDeletionProtection.
       *
       * @param request ModifyClusterDeletionProtectionRequest
       * @return ModifyClusterDeletionProtectionResponse
       */
      Models::ModifyClusterDeletionProtectionResponse modifyClusterDeletionProtection(const Models::ModifyClusterDeletionProtectionRequest &request);

      /**
       * @summary Modifies the disk capacity alert threshold for HBase Cluster Edition and HBaseue clusters. The default alert threshold is 80%.
       *
       * @param request ModifyDiskWarningLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskWarningLineResponse
       */
      Models::ModifyDiskWarningLineResponse modifyDiskWarningLineWithOptions(const Models::ModifyDiskWarningLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the disk capacity alert threshold for HBase Cluster Edition and HBaseue clusters. The default alert threshold is 80%.
       *
       * @param request ModifyDiskWarningLineRequest
       * @return ModifyDiskWarningLineResponse
       */
      Models::ModifyDiskWarningLineResponse modifyDiskWarningLine(const Models::ModifyDiskWarningLineRequest &request);

      /**
       * @summary Calls the ModifyInstanceMaintainTime operation to modify the O&M window start time of an instance.
       *
       * @param request ModifyInstanceMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMaintainTimeResponse
       */
      Models::ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTimeWithOptions(const Models::ModifyInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyInstanceMaintainTime operation to modify the O&M window start time of an instance.
       *
       * @param request ModifyInstanceMaintainTimeRequest
       * @return ModifyInstanceMaintainTimeResponse
       */
      Models::ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTime(const Models::ModifyInstanceMaintainTimeRequest &request);

      /**
       * @summary Modifies the name of an instance by calling ModifyInstanceName.
       *
       * @param request ModifyInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNameResponse
       */
      Models::ModifyInstanceNameResponse modifyInstanceNameWithOptions(const Models::ModifyInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of an instance by calling ModifyInstanceName.
       *
       * @param request ModifyInstanceNameRequest
       * @return ModifyInstanceNameResponse
       */
      Models::ModifyInstanceNameResponse modifyInstanceName(const Models::ModifyInstanceNameRequest &request);

      /**
       * @summary Calls ModifyInstanceServiceConfig to modify cluster configurations. You can call the ListInstanceServiceConfigurations operation to query the configuration items that can be modified.
       *
       * @param request ModifyInstanceServiceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceServiceConfigResponse
       */
      Models::ModifyInstanceServiceConfigResponse modifyInstanceServiceConfigWithOptions(const Models::ModifyInstanceServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ModifyInstanceServiceConfig to modify cluster configurations. You can call the ListInstanceServiceConfigurations operation to query the configuration items that can be modified.
       *
       * @param request ModifyInstanceServiceConfigRequest
       * @return ModifyInstanceServiceConfigResponse
       */
      Models::ModifyInstanceServiceConfigResponse modifyInstanceServiceConfig(const Models::ModifyInstanceServiceConfigRequest &request);

      /**
       * @summary Calls ModifyInstanceType to change the specifications of an instance.
       *
       * @param request ModifyInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceTypeResponse
       */
      Models::ModifyInstanceTypeResponse modifyInstanceTypeWithOptions(const Models::ModifyInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ModifyInstanceType to change the specifications of an instance.
       *
       * @param request ModifyInstanceTypeRequest
       * @return ModifyInstanceTypeResponse
       */
      Models::ModifyInstanceTypeResponse modifyInstanceType(const Models::ModifyInstanceTypeRequest &request);

      /**
       * @summary Modifies the IP whitelist group of an instance by calling ModifyIpWhitelist.
       *
       * @param request ModifyIpWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpWhitelistResponse
       */
      Models::ModifyIpWhitelistResponse modifyIpWhitelistWithOptions(const Models::ModifyIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP whitelist group of an instance by calling ModifyIpWhitelist.
       *
       * @param request ModifyIpWhitelistRequest
       * @return ModifyIpWhitelistResponse
       */
      Models::ModifyIpWhitelistResponse modifyIpWhitelist(const Models::ModifyIpWhitelistRequest &request);

      /**
       * @summary Modifies the node specifications of a multi-zone instance by calling ModifyMultiZoneClusterNodeType.
       *
       * @param request ModifyMultiZoneClusterNodeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMultiZoneClusterNodeTypeResponse
       */
      Models::ModifyMultiZoneClusterNodeTypeResponse modifyMultiZoneClusterNodeTypeWithOptions(const Models::ModifyMultiZoneClusterNodeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the node specifications of a multi-zone instance by calling ModifyMultiZoneClusterNodeType.
       *
       * @param request ModifyMultiZoneClusterNodeTypeRequest
       * @return ModifyMultiZoneClusterNodeTypeResponse
       */
      Models::ModifyMultiZoneClusterNodeTypeResponse modifyMultiZoneClusterNodeType(const Models::ModifyMultiZoneClusterNodeTypeRequest &request);

      /**
       * @summary Calls ModifySecurityGroups to modify the security groups associated with a cluster.
       *
       * @param request ModifySecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupsResponse
       */
      Models::ModifySecurityGroupsResponse modifySecurityGroupsWithOptions(const Models::ModifySecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ModifySecurityGroups to modify the security groups associated with a cluster.
       *
       * @param request ModifySecurityGroupsRequest
       * @return ModifySecurityGroupsResponse
       */
      Models::ModifySecurityGroupsResponse modifySecurityGroups(const Models::ModifySecurityGroupsRequest &request);

      /**
       * @summary Resets the password for accessing the cluster management UI by calling ModifyUIProxyAccountPassword.
       *
       * @param request ModifyUIAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUIAccountPasswordResponse
       */
      Models::ModifyUIAccountPasswordResponse modifyUIAccountPasswordWithOptions(const Models::ModifyUIAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password for accessing the cluster management UI by calling ModifyUIProxyAccountPassword.
       *
       * @param request ModifyUIAccountPasswordRequest
       * @return ModifyUIAccountPasswordResponse
       */
      Models::ModifyUIAccountPasswordResponse modifyUIAccountPassword(const Models::ModifyUIAccountPasswordRequest &request);

      /**
       * @summary Moves a target instance to a target resource group.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a target instance to a target resource group.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Enables the backup and recovery feature for an ApsaraDB for HBase cluster by calling OpenBackup.
       *
       * @param request OpenBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenBackupResponse
       */
      Models::OpenBackupResponse openBackupWithOptions(const Models::OpenBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the backup and recovery feature for an ApsaraDB for HBase cluster by calling OpenBackup.
       *
       * @param request OpenBackupRequest
       * @return OpenBackupResponse
       */
      Models::OpenBackupResponse openBackup(const Models::OpenBackupRequest &request);

      /**
       * @summary Completely cleans up an instance that has been deleted (within the last 7 days) but not fully cleaned up.
       *
       * @param request PurgeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurgeInstanceResponse
       */
      Models::PurgeInstanceResponse purgeInstanceWithOptions(const Models::PurgeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Completely cleans up an instance that has been deleted (within the last 7 days) but not fully cleaned up.
       *
       * @param request PurgeInstanceRequest
       * @return PurgeInstanceResponse
       */
      Models::PurgeInstanceResponse purgeInstance(const Models::PurgeInstanceRequest &request);

      /**
       * @summary Queries the high-availability HBase list for a BDS cluster. This operation corresponds to CreateHaCluster and CreateHbaseHaSlb. It returns the corresponding high-availability list.
       *
       * @param request QueryHBaseHaDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryHBaseHaDBResponse
       */
      Models::QueryHBaseHaDBResponse queryHBaseHaDBWithOptions(const Models::QueryHBaseHaDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the high-availability HBase list for a BDS cluster. This operation corresponds to CreateHaCluster and CreateHbaseHaSlb. It returns the corresponding high-availability list.
       *
       * @param request QueryHBaseHaDBRequest
       * @return QueryHBaseHaDBResponse
       */
      Models::QueryHBaseHaDBResponse queryHBaseHaDB(const Models::QueryHBaseHaDBRequest &request);

      /**
       * @summary Queries the list of databases that can be associated with the current instance by calling QueryXpackRelateDB.
       *
       * @param request QueryXpackRelateDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryXpackRelateDBResponse
       */
      Models::QueryXpackRelateDBResponse queryXpackRelateDBWithOptions(const Models::QueryXpackRelateDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of databases that can be associated with the current instance by calling QueryXpackRelateDB.
       *
       * @param request QueryXpackRelateDBRequest
       * @return QueryXpackRelateDBResponse
       */
      Models::QueryXpackRelateDBResponse queryXpackRelateDB(const Models::QueryXpackRelateDBRequest &request);

      /**
       * @summary Adds an active-active instance pair to a BDS cluster.
       *
       * @param request RelateDbForHBaseHaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RelateDbForHBaseHaResponse
       */
      Models::RelateDbForHBaseHaResponse relateDbForHBaseHaWithOptions(const Models::RelateDbForHBaseHaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an active-active instance pair to a BDS cluster.
       *
       * @param request RelateDbForHBaseHaRequest
       * @return RelateDbForHBaseHaResponse
       */
      Models::RelateDbForHBaseHaResponse relateDbForHBaseHa(const Models::RelateDbForHBaseHaRequest &request);

      /**
       * @summary Releases the public endpoint of an instance.
       *
       * @param request ReleasePublicNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleasePublicNetworkAddressResponse
       */
      Models::ReleasePublicNetworkAddressResponse releasePublicNetworkAddressWithOptions(const Models::ReleasePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an instance.
       *
       * @param request ReleasePublicNetworkAddressRequest
       * @return ReleasePublicNetworkAddressResponse
       */
      Models::ReleasePublicNetworkAddressResponse releasePublicNetworkAddress(const Models::ReleasePublicNetworkAddressRequest &request);

      /**
       * @summary Renews a subscription for an HBase instance.
       *
       * @description This operation applies only to subscription HBase instances.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription for an HBase instance.
       *
       * @description This operation applies only to subscription HBase instances.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Changes the cold storage size.
       *
       * @param request ResizeColdStorageSizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeColdStorageSizeResponse
       */
      Models::ResizeColdStorageSizeResponse resizeColdStorageSizeWithOptions(const Models::ResizeColdStorageSizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the cold storage size.
       *
       * @param request ResizeColdStorageSizeRequest
       * @return ResizeColdStorageSizeResponse
       */
      Models::ResizeColdStorageSizeResponse resizeColdStorageSize(const Models::ResizeColdStorageSizeRequest &request);

      /**
       * @summary Calls ResizeDiskSize to resize a disk.
       *
       * @param request ResizeDiskSizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeDiskSizeResponse
       */
      Models::ResizeDiskSizeResponse resizeDiskSizeWithOptions(const Models::ResizeDiskSizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ResizeDiskSize to resize a disk.
       *
       * @param request ResizeDiskSizeRequest
       * @return ResizeDiskSizeResponse
       */
      Models::ResizeDiskSizeResponse resizeDiskSize(const Models::ResizeDiskSizeRequest &request);

      /**
       * @summary Calls the ResizeMultiZoneClusterDiskSize operation to modify the disk size of a multi-zone instance.
       *
       * @param request ResizeMultiZoneClusterDiskSizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeMultiZoneClusterDiskSizeResponse
       */
      Models::ResizeMultiZoneClusterDiskSizeResponse resizeMultiZoneClusterDiskSizeWithOptions(const Models::ResizeMultiZoneClusterDiskSizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ResizeMultiZoneClusterDiskSize operation to modify the disk size of a multi-zone instance.
       *
       * @param request ResizeMultiZoneClusterDiskSizeRequest
       * @return ResizeMultiZoneClusterDiskSizeResponse
       */
      Models::ResizeMultiZoneClusterDiskSizeResponse resizeMultiZoneClusterDiskSize(const Models::ResizeMultiZoneClusterDiskSizeRequest &request);

      /**
       * @summary Scales out nodes for a multi-zone instance by calling the ResizeMultiZoneClusterNodeCount operation.
       *
       * @param request ResizeMultiZoneClusterNodeCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeMultiZoneClusterNodeCountResponse
       */
      Models::ResizeMultiZoneClusterNodeCountResponse resizeMultiZoneClusterNodeCountWithOptions(const Models::ResizeMultiZoneClusterNodeCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales out nodes for a multi-zone instance by calling the ResizeMultiZoneClusterNodeCount operation.
       *
       * @param request ResizeMultiZoneClusterNodeCountRequest
       * @return ResizeMultiZoneClusterNodeCountResponse
       */
      Models::ResizeMultiZoneClusterNodeCountResponse resizeMultiZoneClusterNodeCount(const Models::ResizeMultiZoneClusterNodeCountRequest &request);

      /**
       * @summary Calls ResizeNodeCount to adjust the number of nodes for an instance.
       *
       * @description Scales up the number of core nodes in a cluster. You can add up to 50 nodes at a time, and the total number of nodes can be scaled up to 250. If you have additional requirements, submit a ticket.
       *
       * @param request ResizeNodeCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeNodeCountResponse
       */
      Models::ResizeNodeCountResponse resizeNodeCountWithOptions(const Models::ResizeNodeCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ResizeNodeCount to adjust the number of nodes for an instance.
       *
       * @description Scales up the number of core nodes in a cluster. You can add up to 50 nodes at a time, and the total number of nodes can be scaled up to 250. If you have additional requirements, submit a ticket.
       *
       * @param request ResizeNodeCountRequest
       * @return ResizeNodeCountResponse
       */
      Models::ResizeNodeCountResponse resizeNodeCount(const Models::ResizeNodeCountRequest &request);

      /**
       * @summary Restarts an HBase cluster by calling RestartInstance.
       *
       * @param request RestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an HBase cluster by calling RestartInstance.
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary Revokes permissions from a wide table account.
       *
       * @param request RevokeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResponse
       */
      Models::RevokeResponse revokeWithOptions(const Models::RevokeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions from a wide table account.
       *
       * @param request RevokeRequest
       * @return RevokeResponse
       */
      Models::RevokeResponse revoke(const Models::RevokeRequest &request);

      /**
       * @summary Performs a primary/secondary switchover for high-availability Thrift or high-availability Phoenix. This operation corresponds to the CreateHbaseHaSlb operation.
       *
       * @param request SwitchHbaseHaSlbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchHbaseHaSlbResponse
       */
      Models::SwitchHbaseHaSlbResponse switchHbaseHaSlbWithOptions(const Models::SwitchHbaseHaSlbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a primary/secondary switchover for high-availability Thrift or high-availability Phoenix. This operation corresponds to the CreateHbaseHaSlb operation.
       *
       * @param request SwitchHbaseHaSlbRequest
       * @return SwitchHbaseHaSlbResponse
       */
      Models::SwitchHbaseHaSlbResponse switchHbaseHaSlb(const Models::SwitchHbaseHaSlbRequest &request);

      /**
       * @summary Enable or disable an extension service
       *
       * @description Extension service  
       * For example: the Lindorm service compatible with the HBaseProxy protocol.
       *
       * @param request SwitchServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchServiceResponse
       */
      Models::SwitchServiceResponse switchServiceWithOptions(const Models::SwitchServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable or disable an extension service
       *
       * @description Extension service  
       * For example: the Lindorm service compatible with the HBaseProxy protocol.
       *
       * @param request SwitchServiceRequest
       * @return SwitchServiceResponse
       */
      Models::SwitchServiceResponse switchService(const Models::SwitchServiceRequest &request);

      /**
       * @summary Adds tags to instances.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to instances.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Untags resources. This operation is the counterpart of TagResources.
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Untags resources. This operation is the counterpart of TagResources.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Upgrades the minor version of a cluster by calling UpgradeMinorVersion.
       *
       * @param request UpgradeMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersionWithOptions(const Models::UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the minor version of a cluster by calling UpgradeMinorVersion.
       *
       * @param request UpgradeMinorVersionRequest
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersion(const Models::UpgradeMinorVersionRequest &request);

      /**
       * @summary Upgrades the minor version of components for a multi-zone instance by calling the UpgradeMultiZoneCluster operation.
       *
       * @param request UpgradeMultiZoneClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeMultiZoneClusterResponse
       */
      Models::UpgradeMultiZoneClusterResponse upgradeMultiZoneClusterWithOptions(const Models::UpgradeMultiZoneClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the minor version of components for a multi-zone instance by calling the UpgradeMultiZoneCluster operation.
       *
       * @param request UpgradeMultiZoneClusterRequest
       * @return UpgradeMultiZoneClusterResponse
       */
      Models::UpgradeMultiZoneClusterResponse upgradeMultiZoneCluster(const Models::UpgradeMultiZoneClusterRequest &request);

      /**
       * @summary Associates a database by calling XpackRelateDB.
       *
       * @param request XpackRelateDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return XpackRelateDBResponse
       */
      Models::XpackRelateDBResponse xpackRelateDBWithOptions(const Models::XpackRelateDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a database by calling XpackRelateDB.
       *
       * @param request XpackRelateDBRequest
       * @return XpackRelateDBResponse
       */
      Models::XpackRelateDBResponse xpackRelateDB(const Models::XpackRelateDBRequest &request);
  };
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
