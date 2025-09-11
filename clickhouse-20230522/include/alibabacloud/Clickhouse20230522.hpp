// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLICKHOUSE20230522_HPP_
#define ALIBABACLOUD_CLICKHOUSE20230522_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Clickhouse20230522Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Clickhouse20230522.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param tmpReq CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates a backup policy for a specified ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
       *
       * @param request CreateBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupPolicyResponse
       */
      Models::CreateBackupPolicyResponse createBackupPolicyWithOptions(const Models::CreateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup policy for a specified ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
       *
       * @param request CreateBackupPolicyRequest
       * @return CreateBackupPolicyResponse
       */
      Models::CreateBackupPolicyResponse createBackupPolicy(const Models::CreateBackupPolicyRequest &request);

      /**
       * @summary Creates an ApsaraDB for ClickHouse database.
       *
       * @param request CreateDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBResponse
       */
      Models::CreateDBResponse createDBWithOptions(const Models::CreateDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraDB for ClickHouse database.
       *
       * @param request CreateDBRequest
       * @return CreateDBResponse
       */
      Models::CreateDBResponse createDB(const Models::CreateDBRequest &request);

      /**
       * @summary Creates an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
       *
       * @param tmpReq CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary Applies for a public endpoint.
       *
       * @param request CreateEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEndpointResponse
       */
      Models::CreateEndpointResponse createEndpointWithOptions(const Models::CreateEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a public endpoint.
       *
       * @param request CreateEndpointRequest
       * @return CreateEndpointResponse
       */
      Models::CreateEndpointResponse createEndpoint(const Models::CreateEndpointRequest &request);

      /**
       * @summary Deletes a database account from an ApsaraDB for ClickHouse cluster.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database account from an ApsaraDB for ClickHouse cluster.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary 修改备份策略
       *
       * @param request DeleteBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicyWithOptions(const Models::DeleteBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改备份策略
       *
       * @param request DeleteBackupPolicyRequest
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicy(const Models::DeleteBackupPolicyRequest &request);

      /**
       * @summary Deletes an ApsaraDB for ClickHouse database.
       *
       * @param request DeleteDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBResponse
       */
      Models::DeleteDBResponse deleteDBWithOptions(const Models::DeleteDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ApsaraDB for ClickHouse database.
       *
       * @param request DeleteDBRequest
       * @return DeleteDBResponse
       */
      Models::DeleteDBResponse deleteDB(const Models::DeleteDBRequest &request);

      /**
       * @summary Releases an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

      /**
       * @summary Releases a public endpoint.
       *
       * @param request DeleteEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEndpointResponse
       */
      Models::DeleteEndpointResponse deleteEndpointWithOptions(const Models::DeleteEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a public endpoint.
       *
       * @param request DeleteEndpointRequest
       * @return DeleteEndpointResponse
       */
      Models::DeleteEndpointResponse deleteEndpoint(const Models::DeleteEndpointRequest &request);

      /**
       * @summary Queries the permissions of a database account.
       *
       * @param request DescribeAccountAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountAuthorityResponse
       */
      Models::DescribeAccountAuthorityResponse describeAccountAuthorityWithOptions(const Models::DescribeAccountAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions of a database account.
       *
       * @param request DescribeAccountAuthorityRequest
       * @return DescribeAccountAuthorityResponse
       */
      Models::DescribeAccountAuthorityResponse describeAccountAuthority(const Models::DescribeAccountAuthorityRequest &request);

      /**
       * @summary Queries database accounts for an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries database accounts for an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary 创建备份策略
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建备份策略
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary 查询备份集
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询备份集
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Queries the details of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary 查询实例参数配置
       *
       * @param request DescribeDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceConfigResponse
       */
      Models::DescribeDBInstanceConfigResponse describeDBInstanceConfigWithOptions(const Models::DescribeDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例参数配置
       *
       * @param request DescribeDBInstanceConfigRequest
       * @return DescribeDBInstanceConfigResponse
       */
      Models::DescribeDBInstanceConfigResponse describeDBInstanceConfig(const Models::DescribeDBInstanceConfigRequest &request);

      /**
       * @summary 查询实例参数配置记录
       *
       * @param request DescribeDBInstanceConfigChangeLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceConfigChangeLogResponse
       */
      Models::DescribeDBInstanceConfigChangeLogResponse describeDBInstanceConfigChangeLogWithOptions(const Models::DescribeDBInstanceConfigChangeLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例参数配置记录
       *
       * @param request DescribeDBInstanceConfigChangeLogRequest
       * @return DescribeDBInstanceConfigChangeLogResponse
       */
      Models::DescribeDBInstanceConfigChangeLogResponse describeDBInstanceConfigChangeLog(const Models::DescribeDBInstanceConfigChangeLogRequest &request);

      /**
       * @summary Queries the schema of a database or a table.
       *
       * @param request DescribeDBInstanceDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceDataSourcesResponse
       */
      Models::DescribeDBInstanceDataSourcesResponse describeDBInstanceDataSourcesWithOptions(const Models::DescribeDBInstanceDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the schema of a database or a table.
       *
       * @param request DescribeDBInstanceDataSourcesRequest
       * @return DescribeDBInstanceDataSourcesResponse
       */
      Models::DescribeDBInstanceDataSourcesResponse describeDBInstanceDataSources(const Models::DescribeDBInstanceDataSourcesRequest &request);

      /**
       * @summary Queries a list of ApsaraDB for ClickHouse clusters.
       *
       * @param request DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of ApsaraDB for ClickHouse clusters.
       *
       * @param request DescribeDBInstancesRequest
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstances(const Models::DescribeDBInstancesRequest &request);

      /**
       * @summary Queries the endpoint of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndpointsResponse
       */
      Models::DescribeEndpointsResponse describeEndpointsWithOptions(const Models::DescribeEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoint of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeEndpointsRequest
       * @return DescribeEndpointsResponse
       */
      Models::DescribeEndpointsResponse describeEndpoints(const Models::DescribeEndpointsRequest &request);

      /**
       * @summary Views running queries.
       *
       * @param request DescribeProcessListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessListWithOptions(const Models::DescribeProcessListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views running queries.
       *
       * @param request DescribeProcessListRequest
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessList(const Models::DescribeProcessListRequest &request);

      /**
       * @summary Queries the whitelist of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeSecurityIPListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityIPListResponse
       */
      Models::DescribeSecurityIPListResponse describeSecurityIPListWithOptions(const Models::DescribeSecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist of an ApsaraDB for ClickHouse cluster.
       *
       * @param request DescribeSecurityIPListRequest
       * @return DescribeSecurityIPListResponse
       */
      Models::DescribeSecurityIPListResponse describeSecurityIPList(const Models::DescribeSecurityIPListRequest &request);

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
       * @summary Queries the trend of slow query logs.
       *
       * @param request DescribeSlowLogTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogTrendResponse
       */
      Models::DescribeSlowLogTrendResponse describeSlowLogTrendWithOptions(const Models::DescribeSlowLogTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of slow query logs.
       *
       * @param request DescribeSlowLogTrendRequest
       * @return DescribeSlowLogTrendResponse
       */
      Models::DescribeSlowLogTrendResponse describeSlowLogTrend(const Models::DescribeSlowLogTrendRequest &request);

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
       * @summary Modifies the permissions of a database account.
       *
       * @param tmpReq ModifyAccountAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountAuthorityResponse
       */
      Models::ModifyAccountAuthorityResponse modifyAccountAuthorityWithOptions(const Models::ModifyAccountAuthorityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of a database account.
       *
       * @param request ModifyAccountAuthorityRequest
       * @return ModifyAccountAuthorityResponse
       */
      Models::ModifyAccountAuthorityResponse modifyAccountAuthority(const Models::ModifyAccountAuthorityRequest &request);

      /**
       * @summary Modifies the description of a database account.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database account.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary 修改备份策略
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改备份策略
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Modifies the configurations of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceAttributeResponse
       */
      Models::ModifyDBInstanceAttributeResponse modifyDBInstanceAttributeWithOptions(const Models::ModifyDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBInstanceAttributeRequest
       * @return ModifyDBInstanceAttributeResponse
       */
      Models::ModifyDBInstanceAttributeResponse modifyDBInstanceAttribute(const Models::ModifyDBInstanceAttributeRequest &request);

      /**
       * @summary Modifies the elastic scaling settings of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBInstanceClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceClassResponse
       */
      Models::ModifyDBInstanceClassResponse modifyDBInstanceClassWithOptions(const Models::ModifyDBInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the elastic scaling settings of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBInstanceClassRequest
       * @return ModifyDBInstanceClassResponse
       */
      Models::ModifyDBInstanceClassResponse modifyDBInstanceClass(const Models::ModifyDBInstanceClassRequest &request);

      /**
       * @summary 修改实例参数配置
       *
       * @param request ModifyDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(const Models::ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例参数配置
       *
       * @param request ModifyDBInstanceConfigRequest
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfig(const Models::ModifyDBInstanceConfigRequest &request);

      /**
       * @summary Modifies the endpoint of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the endpoint of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @summary Modifies the whitelist settings of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifySecurityIPListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIPListResponse
       */
      Models::ModifySecurityIPListResponse modifySecurityIPListWithOptions(const Models::ModifySecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the whitelist settings of an ApsaraDB for ClickHouse cluster.
       *
       * @param request ModifySecurityIPListRequest
       * @return ModifySecurityIPListResponse
       */
      Models::ModifySecurityIPListResponse modifySecurityIPList(const Models::ModifySecurityIPListRequest &request);

      /**
       * @summary Resets the password of a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Restarts an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request RestartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstanceWithOptions(const Models::RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request RestartDBInstanceRequest
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstance(const Models::RestartDBInstanceRequest &request);

      /**
       * @summary Starts an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request StartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDBInstanceResponse
       */
      Models::StartDBInstanceResponse startDBInstanceWithOptions(const Models::StartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request StartDBInstanceRequest
       * @return StartDBInstanceResponse
       */
      Models::StartDBInstanceResponse startDBInstance(const Models::StartDBInstanceRequest &request);

      /**
       * @summary Stops an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request StopDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDBInstanceResponse
       */
      Models::StopDBInstanceResponse stopDBInstanceWithOptions(const Models::StopDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an ApsaraDB for ClickHouse Enterprise Edition cluster.
       *
       * @param request StopDBInstanceRequest
       * @return StopDBInstanceResponse
       */
      Models::StopDBInstanceResponse stopDBInstance(const Models::StopDBInstanceRequest &request);

      /**
       * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
       *
       * @param request UpgradeMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersionWithOptions(const Models::UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
       *
       * @param request UpgradeMinorVersionRequest
       * @return UpgradeMinorVersionResponse
       */
      Models::UpgradeMinorVersionResponse upgradeMinorVersion(const Models::UpgradeMinorVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
