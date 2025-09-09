// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DRDS20190123_HPP_
#define ALIBABACLOUD_DRDS20190123_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Drds20190123Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Drds20190123.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request ChangeAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeAccountPasswordResponse
       */
      Models::ChangeAccountPasswordResponse changeAccountPasswordWithOptions(const Models::ChangeAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeAccountPasswordRequest
       * @return ChangeAccountPasswordResponse
       */
      Models::ChangeAccountPasswordResponse changeAccountPassword(const Models::ChangeAccountPasswordRequest &request);

      /**
       * @param request ChangeInstanceAzoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeInstanceAzoneResponse
       */
      Models::ChangeInstanceAzoneResponse changeInstanceAzoneWithOptions(const Models::ChangeInstanceAzoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeInstanceAzoneRequest
       * @return ChangeInstanceAzoneResponse
       */
      Models::ChangeInstanceAzoneResponse changeInstanceAzone(const Models::ChangeInstanceAzoneRequest &request);

      /**
       * @param request CheckDrdsDbNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDrdsDbNameResponse
       */
      Models::CheckDrdsDbNameResponse checkDrdsDbNameWithOptions(const Models::CheckDrdsDbNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckDrdsDbNameRequest
       * @return CheckDrdsDbNameResponse
       */
      Models::CheckDrdsDbNameResponse checkDrdsDbName(const Models::CheckDrdsDbNameRequest &request);

      /**
       * @summary Verifies whether scale-out operations such as smooth scale-out can be performed on a PolarDB-X database.
       *
       * @param request CheckExpandStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckExpandStatusResponse
       */
      Models::CheckExpandStatusResponse checkExpandStatusWithOptions(const Models::CheckExpandStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether scale-out operations such as smooth scale-out can be performed on a PolarDB-X database.
       *
       * @param request CheckExpandStatusRequest
       * @return CheckExpandStatusResponse
       */
      Models::CheckExpandStatusResponse checkExpandStatus(const Models::CheckExpandStatusRequest &request);

      /**
       * @summary Checks whether the SQL audit feature is enabled for the logical database of a PolarDB-X 1.0 instance.
       *
       * @param request CheckSqlAuditEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSqlAuditEnableStatusResponse
       */
      Models::CheckSqlAuditEnableStatusResponse checkSqlAuditEnableStatusWithOptions(const Models::CheckSqlAuditEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the SQL audit feature is enabled for the logical database of a PolarDB-X 1.0 instance.
       *
       * @param request CheckSqlAuditEnableStatusRequest
       * @return CheckSqlAuditEnableStatusResponse
       */
      Models::CheckSqlAuditEnableStatusResponse checkSqlAuditEnableStatus(const Models::CheckSqlAuditEnableStatusRequest &request);

      /**
       * @param request CreateDrdsDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDrdsDBResponse
       */
      Models::CreateDrdsDBResponse createDrdsDBWithOptions(const Models::CreateDrdsDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDrdsDBRequest
       * @return CreateDrdsDBResponse
       */
      Models::CreateDrdsDBResponse createDrdsDB(const Models::CreateDrdsDBRequest &request);

      /**
       * @param request CreateDrdsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDrdsInstanceResponse
       */
      Models::CreateDrdsInstanceResponse createDrdsInstanceWithOptions(const Models::CreateDrdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDrdsInstanceRequest
       * @return CreateDrdsInstanceResponse
       */
      Models::CreateDrdsInstanceResponse createDrdsInstance(const Models::CreateDrdsInstanceRequest &request);

      /**
       * @param request CreateInstanceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceAccountResponse
       */
      Models::CreateInstanceAccountResponse createInstanceAccountWithOptions(const Models::CreateInstanceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateInstanceAccountRequest
       * @return CreateInstanceAccountResponse
       */
      Models::CreateInstanceAccountResponse createInstanceAccount(const Models::CreateInstanceAccountRequest &request);

      /**
       * @param request CreateInstanceInternetAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceInternetAddressResponse
       */
      Models::CreateInstanceInternetAddressResponse createInstanceInternetAddressWithOptions(const Models::CreateInstanceInternetAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateInstanceInternetAddressRequest
       * @return CreateInstanceInternetAddressResponse
       */
      Models::CreateInstanceInternetAddressResponse createInstanceInternetAddress(const Models::CreateInstanceInternetAddressRequest &request);

      /**
       * @summary Creates an order to purchase an ApsaraDB RDS for MySQL instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and pricing of PolarDB-X 1.0. For more information, visit the [pricing page](https://www.aliyun.com/price/product#/rds/detail).
       *
       * @param request CreateOrderForRdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderForRdsResponse
       */
      Models::CreateOrderForRdsResponse createOrderForRdsWithOptions(const Models::CreateOrderForRdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an order to purchase an ApsaraDB RDS for MySQL instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and pricing of PolarDB-X 1.0. For more information, visit the [pricing page](https://www.aliyun.com/price/product#/rds/detail).
       *
       * @param request CreateOrderForRdsRequest
       * @return CreateOrderForRdsResponse
       */
      Models::CreateOrderForRdsResponse createOrderForRds(const Models::CreateOrderForRdsRequest &request);

      /**
       * @param request CreateShardTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateShardTaskResponse
       */
      Models::CreateShardTaskResponse createShardTaskWithOptions(const Models::CreateShardTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateShardTaskRequest
       * @return CreateShardTaskResponse
       */
      Models::CreateShardTaskResponse createShardTask(const Models::CreateShardTaskRequest &request);

      /**
       * @param request DescribeBackMenuRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackMenuResponse
       */
      Models::DescribeBackMenuResponse describeBackMenuWithOptions(const Models::DescribeBackMenuRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBackMenuRequest
       * @return DescribeBackMenuResponse
       */
      Models::DescribeBackMenuResponse describeBackMenu(const Models::DescribeBackMenuRequest &request);

      /**
       * @param request DescribeBackupDbsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupDbsResponse
       */
      Models::DescribeBackupDbsResponse describeBackupDbsWithOptions(const Models::DescribeBackupDbsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBackupDbsRequest
       * @return DescribeBackupDbsResponse
       */
      Models::DescribeBackupDbsResponse describeBackupDbs(const Models::DescribeBackupDbsRequest &request);

      /**
       * @summary Queries the backup settings of local logs.
       *
       * @param request DescribeBackupLocalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupLocalResponse
       */
      Models::DescribeBackupLocalResponse describeBackupLocalWithOptions(const Models::DescribeBackupLocalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup settings of local logs.
       *
       * @param request DescribeBackupLocalRequest
       * @return DescribeBackupLocalResponse
       */
      Models::DescribeBackupLocalResponse describeBackupLocal(const Models::DescribeBackupLocalRequest &request);

      /**
       * @summary Queries the information about a backup policy.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a backup policy.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @param request DescribeBackupSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupSetsResponse
       */
      Models::DescribeBackupSetsResponse describeBackupSetsWithOptions(const Models::DescribeBackupSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBackupSetsRequest
       * @return DescribeBackupSetsResponse
       */
      Models::DescribeBackupSetsResponse describeBackupSets(const Models::DescribeBackupSetsRequest &request);

      /**
       * @param request DescribeBackupTimesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupTimesResponse
       */
      Models::DescribeBackupTimesResponse describeBackupTimesWithOptions(const Models::DescribeBackupTimesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBackupTimesRequest
       * @return DescribeBackupTimesResponse
       */
      Models::DescribeBackupTimesResponse describeBackupTimes(const Models::DescribeBackupTimesRequest &request);

      /**
       * @param request DescribeBroadcastTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBroadcastTablesResponse
       */
      Models::DescribeBroadcastTablesResponse describeBroadcastTablesWithOptions(const Models::DescribeBroadcastTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeBroadcastTablesRequest
       * @return DescribeBroadcastTablesResponse
       */
      Models::DescribeBroadcastTablesResponse describeBroadcastTables(const Models::DescribeBroadcastTablesRequest &request);

      /**
       * @param request DescribeDbInstanceDbsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDbInstanceDbsResponse
       */
      Models::DescribeDbInstanceDbsResponse describeDbInstanceDbsWithOptions(const Models::DescribeDbInstanceDbsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDbInstanceDbsRequest
       * @return DescribeDbInstanceDbsResponse
       */
      Models::DescribeDbInstanceDbsResponse describeDbInstanceDbs(const Models::DescribeDbInstanceDbsRequest &request);

      /**
       * @summary Queries DescribeDbInstances of the storage layer, such as RDS or PolarDB.
       *
       * @param request DescribeDbInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDbInstancesResponse
       */
      Models::DescribeDbInstancesResponse describeDbInstancesWithOptions(const Models::DescribeDbInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries DescribeDbInstances of the storage layer, such as RDS or PolarDB.
       *
       * @param request DescribeDbInstancesRequest
       * @return DescribeDbInstancesResponse
       */
      Models::DescribeDbInstancesResponse describeDbInstances(const Models::DescribeDbInstancesRequest &request);

      /**
       * @param request DescribeDrdsDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsDBResponse
       */
      Models::DescribeDrdsDBResponse describeDrdsDBWithOptions(const Models::DescribeDrdsDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDrdsDBRequest
       * @return DescribeDrdsDBResponse
       */
      Models::DescribeDrdsDBResponse describeDrdsDB(const Models::DescribeDrdsDBRequest &request);

      /**
       * @summary You can call this operation to query the information of the PolarDB cluster in the DRDS logical database.
       *
       * @param request DescribeDrdsDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsDBClusterResponse
       */
      Models::DescribeDrdsDBClusterResponse describeDrdsDBClusterWithOptions(const Models::DescribeDrdsDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query the information of the PolarDB cluster in the DRDS logical database.
       *
       * @param request DescribeDrdsDBClusterRequest
       * @return DescribeDrdsDBClusterResponse
       */
      Models::DescribeDrdsDBClusterResponse describeDrdsDBCluster(const Models::DescribeDrdsDBClusterRequest &request);

      /**
       * @param request DescribeDrdsDBIpWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsDBIpWhiteListResponse
       */
      Models::DescribeDrdsDBIpWhiteListResponse describeDrdsDBIpWhiteListWithOptions(const Models::DescribeDrdsDBIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDrdsDBIpWhiteListRequest
       * @return DescribeDrdsDBIpWhiteListResponse
       */
      Models::DescribeDrdsDBIpWhiteListResponse describeDrdsDBIpWhiteList(const Models::DescribeDrdsDBIpWhiteListRequest &request);

      /**
       * @param request DescribeDrdsDBsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsDBsResponse
       */
      Models::DescribeDrdsDBsResponse describeDrdsDBsWithOptions(const Models::DescribeDrdsDBsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDrdsDBsRequest
       * @return DescribeDrdsDBsResponse
       */
      Models::DescribeDrdsDBsResponse describeDrdsDBs(const Models::DescribeDrdsDBsRequest &request);

      /**
       * @param request DescribeDrdsDbInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsDbInstanceResponse
       */
      Models::DescribeDrdsDbInstanceResponse describeDrdsDbInstanceWithOptions(const Models::DescribeDrdsDbInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDrdsDbInstanceRequest
       * @return DescribeDrdsDbInstanceResponse
       */
      Models::DescribeDrdsDbInstanceResponse describeDrdsDbInstance(const Models::DescribeDrdsDbInstanceRequest &request);

      /**
       * @summary Queries ApsaraDB RDS for MySQL instances that are used to store the data of a database.
       *
       * @param request DescribeDrdsDbInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsDbInstancesResponse
       */
      Models::DescribeDrdsDbInstancesResponse describeDrdsDbInstancesWithOptions(const Models::DescribeDrdsDbInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries ApsaraDB RDS for MySQL instances that are used to store the data of a database.
       *
       * @param request DescribeDrdsDbInstancesRequest
       * @return DescribeDrdsDbInstancesResponse
       */
      Models::DescribeDrdsDbInstancesResponse describeDrdsDbInstances(const Models::DescribeDrdsDbInstancesRequest &request);

      /**
       * @summary 查询存储实例列表
       *
       * @param request DescribeDrdsDbRdsNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsDbRdsNameListResponse
       */
      Models::DescribeDrdsDbRdsNameListResponse describeDrdsDbRdsNameListWithOptions(const Models::DescribeDrdsDbRdsNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询存储实例列表
       *
       * @param request DescribeDrdsDbRdsNameListRequest
       * @return DescribeDrdsDbRdsNameListResponse
       */
      Models::DescribeDrdsDbRdsNameListResponse describeDrdsDbRdsNameList(const Models::DescribeDrdsDbRdsNameListRequest &request);

      /**
       * @summary Queries the details of a PolarDB-X 1.0 instance.
       *
       * @param request DescribeDrdsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsInstanceResponse
       */
      Models::DescribeDrdsInstanceResponse describeDrdsInstanceWithOptions(const Models::DescribeDrdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a PolarDB-X 1.0 instance.
       *
       * @param request DescribeDrdsInstanceRequest
       * @return DescribeDrdsInstanceResponse
       */
      Models::DescribeDrdsInstanceResponse describeDrdsInstance(const Models::DescribeDrdsInstanceRequest &request);

      /**
       * @param request DescribeDrdsInstanceDbMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsInstanceDbMonitorResponse
       */
      Models::DescribeDrdsInstanceDbMonitorResponse describeDrdsInstanceDbMonitorWithOptions(const Models::DescribeDrdsInstanceDbMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDrdsInstanceDbMonitorRequest
       * @return DescribeDrdsInstanceDbMonitorResponse
       */
      Models::DescribeDrdsInstanceDbMonitorResponse describeDrdsInstanceDbMonitor(const Models::DescribeDrdsInstanceDbMonitorRequest &request);

      /**
       * @param request DescribeDrdsInstanceLevelTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsInstanceLevelTasksResponse
       */
      Models::DescribeDrdsInstanceLevelTasksResponse describeDrdsInstanceLevelTasksWithOptions(const Models::DescribeDrdsInstanceLevelTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDrdsInstanceLevelTasksRequest
       * @return DescribeDrdsInstanceLevelTasksResponse
       */
      Models::DescribeDrdsInstanceLevelTasksResponse describeDrdsInstanceLevelTasks(const Models::DescribeDrdsInstanceLevelTasksRequest &request);

      /**
       * @summary 查询监控数据
       *
       * @param request DescribeDrdsInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsInstanceMonitorResponse
       */
      Models::DescribeDrdsInstanceMonitorResponse describeDrdsInstanceMonitorWithOptions(const Models::DescribeDrdsInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询监控数据
       *
       * @param request DescribeDrdsInstanceMonitorRequest
       * @return DescribeDrdsInstanceMonitorResponse
       */
      Models::DescribeDrdsInstanceMonitorResponse describeDrdsInstanceMonitor(const Models::DescribeDrdsInstanceMonitorRequest &request);

      /**
       * @param request DescribeDrdsInstanceVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsInstanceVersionResponse
       */
      Models::DescribeDrdsInstanceVersionResponse describeDrdsInstanceVersionWithOptions(const Models::DescribeDrdsInstanceVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDrdsInstanceVersionRequest
       * @return DescribeDrdsInstanceVersionResponse
       */
      Models::DescribeDrdsInstanceVersionResponse describeDrdsInstanceVersion(const Models::DescribeDrdsInstanceVersionRequest &request);

      /**
       * @summary Queries instances that meet the specified conditions.
       *
       * @param request DescribeDrdsInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsInstancesResponse
       */
      Models::DescribeDrdsInstancesResponse describeDrdsInstancesWithOptions(const Models::DescribeDrdsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instances that meet the specified conditions.
       *
       * @param request DescribeDrdsInstancesRequest
       * @return DescribeDrdsInstancesResponse
       */
      Models::DescribeDrdsInstancesResponse describeDrdsInstances(const Models::DescribeDrdsInstancesRequest &request);

      /**
       * @param request DescribeDrdsParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsParamsResponse
       */
      Models::DescribeDrdsParamsResponse describeDrdsParamsWithOptions(const Models::DescribeDrdsParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDrdsParamsRequest
       * @return DescribeDrdsParamsResponse
       */
      Models::DescribeDrdsParamsResponse describeDrdsParams(const Models::DescribeDrdsParamsRequest &request);

      /**
       * @summary Queries the information about all custom ApsaraDB RDS for MySQL instances in a PolarDB-X instance.
       *
       * @param request DescribeDrdsRdsInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsRdsInstancesResponse
       */
      Models::DescribeDrdsRdsInstancesResponse describeDrdsRdsInstancesWithOptions(const Models::DescribeDrdsRdsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all custom ApsaraDB RDS for MySQL instances in a PolarDB-X instance.
       *
       * @param request DescribeDrdsRdsInstancesRequest
       * @return DescribeDrdsRdsInstancesResponse
       */
      Models::DescribeDrdsRdsInstancesResponse describeDrdsRdsInstances(const Models::DescribeDrdsRdsInstancesRequest &request);

      /**
       * @summary Queries the database shards of an PolarDB-X 1.0 instance.
       *
       * @param request DescribeDrdsShardingDbsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsShardingDbsResponse
       */
      Models::DescribeDrdsShardingDbsResponse describeDrdsShardingDbsWithOptions(const Models::DescribeDrdsShardingDbsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database shards of an PolarDB-X 1.0 instance.
       *
       * @param request DescribeDrdsShardingDbsRequest
       * @return DescribeDrdsShardingDbsResponse
       */
      Models::DescribeDrdsShardingDbsResponse describeDrdsShardingDbs(const Models::DescribeDrdsShardingDbsRequest &request);

      /**
       * @summary Queries a slow SQL query.
       *
       * @param request DescribeDrdsSlowSqlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsSlowSqlsResponse
       */
      Models::DescribeDrdsSlowSqlsResponse describeDrdsSlowSqlsWithOptions(const Models::DescribeDrdsSlowSqlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a slow SQL query.
       *
       * @param request DescribeDrdsSlowSqlsRequest
       * @return DescribeDrdsSlowSqlsResponse
       */
      Models::DescribeDrdsSlowSqlsResponse describeDrdsSlowSqls(const Models::DescribeDrdsSlowSqlsRequest &request);

      /**
       * @summary Queries the SQL audit details of a PolarDB-X 1.0 instance.
       *
       * @param request DescribeDrdsSqlAuditStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsSqlAuditStatusResponse
       */
      Models::DescribeDrdsSqlAuditStatusResponse describeDrdsSqlAuditStatusWithOptions(const Models::DescribeDrdsSqlAuditStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SQL audit details of a PolarDB-X 1.0 instance.
       *
       * @param request DescribeDrdsSqlAuditStatusRequest
       * @return DescribeDrdsSqlAuditStatusResponse
       */
      Models::DescribeDrdsSqlAuditStatusResponse describeDrdsSqlAuditStatus(const Models::DescribeDrdsSqlAuditStatusRequest &request);

      /**
       * @param request DescribeDrdsTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDrdsTasksResponse
       */
      Models::DescribeDrdsTasksResponse describeDrdsTasksWithOptions(const Models::DescribeDrdsTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDrdsTasksRequest
       * @return DescribeDrdsTasksResponse
       */
      Models::DescribeDrdsTasksResponse describeDrdsTasks(const Models::DescribeDrdsTasksRequest &request);

      /**
       * @param request DescribeExpandLogicTableInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpandLogicTableInfoListResponse
       */
      Models::DescribeExpandLogicTableInfoListResponse describeExpandLogicTableInfoListWithOptions(const Models::DescribeExpandLogicTableInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeExpandLogicTableInfoListRequest
       * @return DescribeExpandLogicTableInfoListResponse
       */
      Models::DescribeExpandLogicTableInfoListResponse describeExpandLogicTableInfoList(const Models::DescribeExpandLogicTableInfoListRequest &request);

      /**
       * @summary Queries the information about databases on which hots-pot scale-out is performed.
       *
       * @param request DescribeHotDbListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHotDbListResponse
       */
      Models::DescribeHotDbListResponse describeHotDbListWithOptions(const Models::DescribeHotDbListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about databases on which hots-pot scale-out is performed.
       *
       * @param request DescribeHotDbListRequest
       * @return DescribeHotDbListResponse
       */
      Models::DescribeHotDbListResponse describeHotDbList(const Models::DescribeHotDbListRequest &request);

      /**
       * @param request DescribeInstDbLogInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstDbLogInfoResponse
       */
      Models::DescribeInstDbLogInfoResponse describeInstDbLogInfoWithOptions(const Models::DescribeInstDbLogInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeInstDbLogInfoRequest
       * @return DescribeInstDbLogInfoResponse
       */
      Models::DescribeInstDbLogInfoResponse describeInstDbLogInfo(const Models::DescribeInstDbLogInfoRequest &request);

      /**
       * @summary Queries the names of the Log Service project and the Logstore used by the SQL audit feature.
       *
       * @param request DescribeInstDbSlsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstDbSlsInfoResponse
       */
      Models::DescribeInstDbSlsInfoResponse describeInstDbSlsInfoWithOptions(const Models::DescribeInstDbSlsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the names of the Log Service project and the Logstore used by the SQL audit feature.
       *
       * @param request DescribeInstDbSlsInfoRequest
       * @return DescribeInstDbSlsInfoResponse
       */
      Models::DescribeInstDbSlsInfoResponse describeInstDbSlsInfo(const Models::DescribeInstDbSlsInfoRequest &request);

      /**
       * @summary Queries information about an instance account.
       *
       * @param request DescribeInstanceAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAccountsResponse
       */
      Models::DescribeInstanceAccountsResponse describeInstanceAccountsWithOptions(const Models::DescribeInstanceAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an instance account.
       *
       * @param request DescribeInstanceAccountsRequest
       * @return DescribeInstanceAccountsResponse
       */
      Models::DescribeInstanceAccountsResponse describeInstanceAccounts(const Models::DescribeInstanceAccountsRequest &request);

      /**
       * @summary Check whether zone switching is enabled
       *
       * @param request DescribeInstanceSwitchAzoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSwitchAzoneResponse
       */
      Models::DescribeInstanceSwitchAzoneResponse describeInstanceSwitchAzoneWithOptions(const Models::DescribeInstanceSwitchAzoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check whether zone switching is enabled
       *
       * @param request DescribeInstanceSwitchAzoneRequest
       * @return DescribeInstanceSwitchAzoneResponse
       */
      Models::DescribeInstanceSwitchAzoneResponse describeInstanceSwitchAzone(const Models::DescribeInstanceSwitchAzoneRequest &request);

      /**
       * @summary Queries whether you can change the network type of a PolarDB-X 1.0 instance.
       *
       * @description ****
       *
       * @param request DescribeInstanceSwitchNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSwitchNetworkResponse
       */
      Models::DescribeInstanceSwitchNetworkResponse describeInstanceSwitchNetworkWithOptions(const Models::DescribeInstanceSwitchNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether you can change the network type of a PolarDB-X 1.0 instance.
       *
       * @description ****
       *
       * @param request DescribeInstanceSwitchNetworkRequest
       * @return DescribeInstanceSwitchNetworkResponse
       */
      Models::DescribeInstanceSwitchNetworkResponse describeInstanceSwitchNetwork(const Models::DescribeInstanceSwitchNetworkRequest &request);

      /**
       * @param request DescribePreCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreCheckResultResponse
       */
      Models::DescribePreCheckResultResponse describePreCheckResultWithOptions(const Models::DescribePreCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribePreCheckResultRequest
       * @return DescribePreCheckResultResponse
       */
      Models::DescribePreCheckResultResponse describePreCheckResult(const Models::DescribePreCheckResultRequest &request);

      /**
       * @param request DescribeRDSPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRDSPerformanceResponse
       */
      Models::DescribeRDSPerformanceResponse describeRDSPerformanceWithOptions(const Models::DescribeRDSPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRDSPerformanceRequest
       * @return DescribeRDSPerformanceResponse
       */
      Models::DescribeRDSPerformanceResponse describeRDSPerformance(const Models::DescribeRDSPerformanceRequest &request);

      /**
       * @param request DescribeRdsCommodityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsCommodityResponse
       */
      Models::DescribeRdsCommodityResponse describeRdsCommodityWithOptions(const Models::DescribeRdsCommodityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRdsCommodityRequest
       * @return DescribeRdsCommodityResponse
       */
      Models::DescribeRdsCommodityResponse describeRdsCommodity(const Models::DescribeRdsCommodityRequest &request);

      /**
       * @param request DescribeRdsPerformanceSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsPerformanceSummaryResponse
       */
      Models::DescribeRdsPerformanceSummaryResponse describeRdsPerformanceSummaryWithOptions(const Models::DescribeRdsPerformanceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRdsPerformanceSummaryRequest
       * @return DescribeRdsPerformanceSummaryResponse
       */
      Models::DescribeRdsPerformanceSummaryResponse describeRdsPerformanceSummary(const Models::DescribeRdsPerformanceSummaryRequest &request);

      /**
       * @param request DescribeRdsSuperAccountInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsSuperAccountInstancesResponse
       */
      Models::DescribeRdsSuperAccountInstancesResponse describeRdsSuperAccountInstancesWithOptions(const Models::DescribeRdsSuperAccountInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRdsSuperAccountInstancesRequest
       * @return DescribeRdsSuperAccountInstancesResponse
       */
      Models::DescribeRdsSuperAccountInstancesResponse describeRdsSuperAccountInstances(const Models::DescribeRdsSuperAccountInstancesRequest &request);

      /**
       * @summary Queries the status of the table recycle bin.
       *
       * @param request DescribeRecycleBinStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecycleBinStatusResponse
       */
      Models::DescribeRecycleBinStatusResponse describeRecycleBinStatusWithOptions(const Models::DescribeRecycleBinStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the table recycle bin.
       *
       * @param request DescribeRecycleBinStatusRequest
       * @return DescribeRecycleBinStatusResponse
       */
      Models::DescribeRecycleBinStatusResponse describeRecycleBinStatus(const Models::DescribeRecycleBinStatusRequest &request);

      /**
       * @summary Queries the tables that can be restored in the recycle bin.
       *
       * @param request DescribeRecycleBinTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecycleBinTablesResponse
       */
      Models::DescribeRecycleBinTablesResponse describeRecycleBinTablesWithOptions(const Models::DescribeRecycleBinTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tables that can be restored in the recycle bin.
       *
       * @param request DescribeRecycleBinTablesRequest
       * @return DescribeRecycleBinTablesResponse
       */
      Models::DescribeRecycleBinTablesResponse describeRecycleBinTables(const Models::DescribeRecycleBinTablesRequest &request);

      /**
       * @summary You can call the DescribeRestoreOrder operation to view the details of the order.
       *
       * @param request DescribeRestoreOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreOrderResponse
       */
      Models::DescribeRestoreOrderResponse describeRestoreOrderWithOptions(const Models::DescribeRestoreOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeRestoreOrder operation to view the details of the order.
       *
       * @param request DescribeRestoreOrderRequest
       * @return DescribeRestoreOrderResponse
       */
      Models::DescribeRestoreOrderResponse describeRestoreOrder(const Models::DescribeRestoreOrderRequest &request);

      /**
       * @param request DescribeShardTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeShardTaskInfoResponse
       */
      Models::DescribeShardTaskInfoResponse describeShardTaskInfoWithOptions(const Models::DescribeShardTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeShardTaskInfoRequest
       * @return DescribeShardTaskInfoResponse
       */
      Models::DescribeShardTaskInfoResponse describeShardTaskInfo(const Models::DescribeShardTaskInfoRequest &request);

      /**
       * @summary Queries the flashback tasks that are performed on a PolarDB-X 1.0 instance.
       *
       * @param request DescribeSqlFlashbakTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSqlFlashbakTaskResponse
       */
      Models::DescribeSqlFlashbakTaskResponse describeSqlFlashbakTaskWithOptions(const Models::DescribeSqlFlashbakTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the flashback tasks that are performed on a PolarDB-X 1.0 instance.
       *
       * @param request DescribeSqlFlashbakTaskRequest
       * @return DescribeSqlFlashbakTaskResponse
       */
      Models::DescribeSqlFlashbakTaskResponse describeSqlFlashbakTask(const Models::DescribeSqlFlashbakTaskRequest &request);

      /**
       * @summary Queries information about the schema of a table.
       *
       * @param request DescribeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableResponse
       */
      Models::DescribeTableResponse describeTableWithOptions(const Models::DescribeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the schema of a table.
       *
       * @param request DescribeTableRequest
       * @return DescribeTableResponse
       */
      Models::DescribeTableResponse describeTable(const Models::DescribeTableRequest &request);

      /**
       * @param request DescribeTableListByTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableListByTypeResponse
       */
      Models::DescribeTableListByTypeResponse describeTableListByTypeWithOptions(const Models::DescribeTableListByTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTableListByTypeRequest
       * @return DescribeTableListByTypeResponse
       */
      Models::DescribeTableListByTypeResponse describeTableListByType(const Models::DescribeTableListByTypeRequest &request);

      /**
       * @summary DescribeTables文档变更
       *
       * @param request DescribeTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTablesWithOptions(const Models::DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeTables文档变更
       *
       * @param request DescribeTablesRequest
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTables(const Models::DescribeTablesRequest &request);

      /**
       * @summary Disables the SQL audit feature for a database.
       *
       * @param request DisableSqlAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSqlAuditResponse
       */
      Models::DisableSqlAuditResponse disableSqlAuditWithOptions(const Models::DisableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the SQL audit feature for a database.
       *
       * @param request DisableSqlAuditRequest
       * @return DisableSqlAuditResponse
       */
      Models::DisableSqlAuditResponse disableSqlAudit(const Models::DisableSqlAuditRequest &request);

      /**
       * @summary Creates an IPv6 address.
       *
       * @param request EnableInstanceIpv6AddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInstanceIpv6AddressResponse
       */
      Models::EnableInstanceIpv6AddressResponse enableInstanceIpv6AddressWithOptions(const Models::EnableInstanceIpv6AddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPv6 address.
       *
       * @param request EnableInstanceIpv6AddressRequest
       * @return EnableInstanceIpv6AddressResponse
       */
      Models::EnableInstanceIpv6AddressResponse enableInstanceIpv6Address(const Models::EnableInstanceIpv6AddressRequest &request);

      /**
       * @summary Enables the SQL audit feature for a database.
       *
       * @param request EnableSqlAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSqlAuditResponse
       */
      Models::EnableSqlAuditResponse enableSqlAuditWithOptions(const Models::EnableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the SQL audit feature for a database.
       *
       * @param request EnableSqlAuditRequest
       * @return EnableSqlAuditResponse
       */
      Models::EnableSqlAuditResponse enableSqlAudit(const Models::EnableSqlAuditRequest &request);

      /**
       * @param request EnableSqlFlashbackMatchSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSqlFlashbackMatchSwitchResponse
       */
      Models::EnableSqlFlashbackMatchSwitchResponse enableSqlFlashbackMatchSwitchWithOptions(const Models::EnableSqlFlashbackMatchSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableSqlFlashbackMatchSwitchRequest
       * @return EnableSqlFlashbackMatchSwitchResponse
       */
      Models::EnableSqlFlashbackMatchSwitchResponse enableSqlFlashbackMatchSwitch(const Models::EnableSqlFlashbackMatchSwitchRequest &request);

      /**
       * @summary Restores a logical table that is deleted.
       *
       * @param request FlashbackRecycleBinTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlashbackRecycleBinTableResponse
       */
      Models::FlashbackRecycleBinTableResponse flashbackRecycleBinTableWithOptions(const Models::FlashbackRecycleBinTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a logical table that is deleted.
       *
       * @param request FlashbackRecycleBinTableRequest
       * @return FlashbackRecycleBinTableResponse
       */
      Models::FlashbackRecycleBinTableResponse flashbackRecycleBinTable(const Models::FlashbackRecycleBinTableRequest &request);

      /**
       * @param request GetDrdsDbRdsRelationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDrdsDbRdsRelationInfoResponse
       */
      Models::GetDrdsDbRdsRelationInfoResponse getDrdsDbRdsRelationInfoWithOptions(const Models::GetDrdsDbRdsRelationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetDrdsDbRdsRelationInfoRequest
       * @return GetDrdsDbRdsRelationInfoResponse
       */
      Models::GetDrdsDbRdsRelationInfoResponse getDrdsDbRdsRelationInfo(const Models::GetDrdsDbRdsRelationInfoRequest &request);

      /**
       * @summary 查看Tag标签
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看Tag标签
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Manages a custom ApsaraDB RDS instance at the storage layer.
       *
       * @param request ManagePrivateRdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManagePrivateRdsResponse
       */
      Models::ManagePrivateRdsResponse managePrivateRdsWithOptions(const Models::ManagePrivateRdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages a custom ApsaraDB RDS instance at the storage layer.
       *
       * @param request ManagePrivateRdsRequest
       * @return ManagePrivateRdsResponse
       */
      Models::ManagePrivateRdsResponse managePrivateRds(const Models::ManagePrivateRdsRequest &request);

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
       * @param request ModifyDrdsInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDrdsInstanceDescriptionResponse
       */
      Models::ModifyDrdsInstanceDescriptionResponse modifyDrdsInstanceDescriptionWithOptions(const Models::ModifyDrdsInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDrdsInstanceDescriptionRequest
       * @return ModifyDrdsInstanceDescriptionResponse
       */
      Models::ModifyDrdsInstanceDescriptionResponse modifyDrdsInstanceDescription(const Models::ModifyDrdsInstanceDescriptionRequest &request);

      /**
       * @param request ModifyDrdsIpWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDrdsIpWhiteListResponse
       */
      Models::ModifyDrdsIpWhiteListResponse modifyDrdsIpWhiteListWithOptions(const Models::ModifyDrdsIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDrdsIpWhiteListRequest
       * @return ModifyDrdsIpWhiteListResponse
       */
      Models::ModifyDrdsIpWhiteListResponse modifyDrdsIpWhiteList(const Models::ModifyDrdsIpWhiteListRequest &request);

      /**
       * @param request ModifyPolarDbReadWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPolarDbReadWeightResponse
       */
      Models::ModifyPolarDbReadWeightResponse modifyPolarDbReadWeightWithOptions(const Models::ModifyPolarDbReadWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyPolarDbReadWeightRequest
       * @return ModifyPolarDbReadWeightResponse
       */
      Models::ModifyPolarDbReadWeightResponse modifyPolarDbReadWeight(const Models::ModifyPolarDbReadWeightRequest &request);

      /**
       * @param request ModifyRdsReadWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRdsReadWeightResponse
       */
      Models::ModifyRdsReadWeightResponse modifyRdsReadWeightWithOptions(const Models::ModifyRdsReadWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyRdsReadWeightRequest
       * @return ModifyRdsReadWeightResponse
       */
      Models::ModifyRdsReadWeightResponse modifyRdsReadWeight(const Models::ModifyRdsReadWeightRequest &request);

      /**
       * @param request PutStartBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutStartBackupResponse
       */
      Models::PutStartBackupResponse putStartBackupWithOptions(const Models::PutStartBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PutStartBackupRequest
       * @return PutStartBackupResponse
       */
      Models::PutStartBackupResponse putStartBackup(const Models::PutStartBackupRequest &request);

      /**
       * @param request RefreshDrdsAtomUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshDrdsAtomUrlResponse
       */
      Models::RefreshDrdsAtomUrlResponse refreshDrdsAtomUrlWithOptions(const Models::RefreshDrdsAtomUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RefreshDrdsAtomUrlRequest
       * @return RefreshDrdsAtomUrlResponse
       */
      Models::RefreshDrdsAtomUrlResponse refreshDrdsAtomUrl(const Models::RefreshDrdsAtomUrlRequest &request);

      /**
       * @param request ReleaseInstanceInternetAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceInternetAddressResponse
       */
      Models::ReleaseInstanceInternetAddressResponse releaseInstanceInternetAddressWithOptions(const Models::ReleaseInstanceInternetAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReleaseInstanceInternetAddressRequest
       * @return ReleaseInstanceInternetAddressResponse
       */
      Models::ReleaseInstanceInternetAddressResponse releaseInstanceInternetAddress(const Models::ReleaseInstanceInternetAddressRequest &request);

      /**
       * @param request RemoveBackupsSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveBackupsSetResponse
       */
      Models::RemoveBackupsSetResponse removeBackupsSetWithOptions(const Models::RemoveBackupsSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveBackupsSetRequest
       * @return RemoveBackupsSetResponse
       */
      Models::RemoveBackupsSetResponse removeBackupsSet(const Models::RemoveBackupsSetRequest &request);

      /**
       * @param request RemoveDrdsDbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDrdsDbResponse
       */
      Models::RemoveDrdsDbResponse removeDrdsDbWithOptions(const Models::RemoveDrdsDbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveDrdsDbRequest
       * @return RemoveDrdsDbResponse
       */
      Models::RemoveDrdsDbResponse removeDrdsDb(const Models::RemoveDrdsDbRequest &request);

      /**
       * @param request RemoveDrdsDbFailedRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDrdsDbFailedRecordResponse
       */
      Models::RemoveDrdsDbFailedRecordResponse removeDrdsDbFailedRecordWithOptions(const Models::RemoveDrdsDbFailedRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveDrdsDbFailedRecordRequest
       * @return RemoveDrdsDbFailedRecordResponse
       */
      Models::RemoveDrdsDbFailedRecordResponse removeDrdsDbFailedRecord(const Models::RemoveDrdsDbFailedRecordRequest &request);

      /**
       * @summary Releases an instance.
       *
       * @description > *   You can call this operation to release an instance that is charged based on only the pay-as-you-go billing method.
       * >*   If the specifications of the instance are being changed, or one or more databases exist in the instance, you cannot call this operation to release the instance.
       *
       * @param request RemoveDrdsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDrdsInstanceResponse
       */
      Models::RemoveDrdsInstanceResponse removeDrdsInstanceWithOptions(const Models::RemoveDrdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an instance.
       *
       * @description > *   You can call this operation to release an instance that is charged based on only the pay-as-you-go billing method.
       * >*   If the specifications of the instance are being changed, or one or more databases exist in the instance, you cannot call this operation to release the instance.
       *
       * @param request RemoveDrdsInstanceRequest
       * @return RemoveDrdsInstanceResponse
       */
      Models::RemoveDrdsInstanceResponse removeDrdsInstance(const Models::RemoveDrdsInstanceRequest &request);

      /**
       * @param request RemoveInstanceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveInstanceAccountResponse
       */
      Models::RemoveInstanceAccountResponse removeInstanceAccountWithOptions(const Models::RemoveInstanceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveInstanceAccountRequest
       * @return RemoveInstanceAccountResponse
       */
      Models::RemoveInstanceAccountResponse removeInstanceAccount(const Models::RemoveInstanceAccountRequest &request);

      /**
       * @summary Deletes a table in the recycle bin.
       *
       * @param request RemoveRecycleBinTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveRecycleBinTableResponse
       */
      Models::RemoveRecycleBinTableResponse removeRecycleBinTableWithOptions(const Models::RemoveRecycleBinTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a table in the recycle bin.
       *
       * @param request RemoveRecycleBinTableRequest
       * @return RemoveRecycleBinTableResponse
       */
      Models::RemoveRecycleBinTableResponse removeRecycleBinTable(const Models::RemoveRecycleBinTableRequest &request);

      /**
       * @param request RestartDrdsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDrdsInstanceResponse
       */
      Models::RestartDrdsInstanceResponse restartDrdsInstanceWithOptions(const Models::RestartDrdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RestartDrdsInstanceRequest
       * @return RestartDrdsInstanceResponse
       */
      Models::RestartDrdsInstanceResponse restartDrdsInstance(const Models::RestartDrdsInstanceRequest &request);

      /**
       * @param request RollbackInstanceVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackInstanceVersionResponse
       */
      Models::RollbackInstanceVersionResponse rollbackInstanceVersionWithOptions(const Models::RollbackInstanceVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RollbackInstanceVersionRequest
       * @return RollbackInstanceVersionResponse
       */
      Models::RollbackInstanceVersionResponse rollbackInstanceVersion(const Models::RollbackInstanceVersionRequest &request);

      /**
       * @summary Modifies a backup policy.
       *
       * @param request SetBackupLocalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetBackupLocalResponse
       */
      Models::SetBackupLocalResponse setBackupLocalWithOptions(const Models::SetBackupLocalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a backup policy.
       *
       * @param request SetBackupLocalRequest
       * @return SetBackupLocalResponse
       */
      Models::SetBackupLocalResponse setBackupLocal(const Models::SetBackupLocalRequest &request);

      /**
       * @param request SetBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetBackupPolicyResponse
       */
      Models::SetBackupPolicyResponse setBackupPolicyWithOptions(const Models::SetBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetBackupPolicyRequest
       * @return SetBackupPolicyResponse
       */
      Models::SetBackupPolicyResponse setBackupPolicy(const Models::SetBackupPolicyRequest &request);

      /**
       * @summary Configures a broadcast table for a database.
       *
       * @param request SetupBroadcastTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetupBroadcastTablesResponse
       */
      Models::SetupBroadcastTablesResponse setupBroadcastTablesWithOptions(const Models::SetupBroadcastTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a broadcast table for a database.
       *
       * @param request SetupBroadcastTablesRequest
       * @return SetupBroadcastTablesResponse
       */
      Models::SetupBroadcastTablesResponse setupBroadcastTables(const Models::SetupBroadcastTablesRequest &request);

      /**
       * @param request SetupDrdsParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetupDrdsParamsResponse
       */
      Models::SetupDrdsParamsResponse setupDrdsParamsWithOptions(const Models::SetupDrdsParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetupDrdsParamsRequest
       * @return SetupDrdsParamsResponse
       */
      Models::SetupDrdsParamsResponse setupDrdsParams(const Models::SetupDrdsParamsRequest &request);

      /**
       * @summary Enables the table recycle bin for a database.
       *
       * @param request SetupRecycleBinStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetupRecycleBinStatusResponse
       */
      Models::SetupRecycleBinStatusResponse setupRecycleBinStatusWithOptions(const Models::SetupRecycleBinStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the table recycle bin for a database.
       *
       * @param request SetupRecycleBinStatusRequest
       * @return SetupRecycleBinStatusResponse
       */
      Models::SetupRecycleBinStatusResponse setupRecycleBinStatus(const Models::SetupRecycleBinStatusRequest &request);

      /**
       * @param request SetupTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetupTableResponse
       */
      Models::SetupTableResponse setupTableWithOptions(const Models::SetupTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetupTableRequest
       * @return SetupTableResponse
       */
      Models::SetupTableResponse setupTable(const Models::SetupTableRequest &request);

      /**
       * @param request StartRestoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRestoreResponse
       */
      Models::StartRestoreResponse startRestoreWithOptions(const Models::StartRestoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartRestoreRequest
       * @return StartRestoreResponse
       */
      Models::StartRestoreResponse startRestore(const Models::StartRestoreRequest &request);

      /**
       * @summary Submits a cleanup task for the scale-out of a PolarDB-X database.
       *
       * @param request SubmitCleanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCleanTaskResponse
       */
      Models::SubmitCleanTaskResponse submitCleanTaskWithOptions(const Models::SubmitCleanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a cleanup task for the scale-out of a PolarDB-X database.
       *
       * @param request SubmitCleanTaskRequest
       * @return SubmitCleanTaskResponse
       */
      Models::SubmitCleanTaskResponse submitCleanTask(const Models::SubmitCleanTaskRequest &request);

      /**
       * @summary Submits a precheck task for the hot-spot scale-out of a PolarDB-X database. The task is used to check the table that does not contain the primary key.
       *
       * @param request SubmitHotExpandPreCheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitHotExpandPreCheckTaskResponse
       */
      Models::SubmitHotExpandPreCheckTaskResponse submitHotExpandPreCheckTaskWithOptions(const Models::SubmitHotExpandPreCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a precheck task for the hot-spot scale-out of a PolarDB-X database. The task is used to check the table that does not contain the primary key.
       *
       * @param request SubmitHotExpandPreCheckTaskRequest
       * @return SubmitHotExpandPreCheckTaskResponse
       */
      Models::SubmitHotExpandPreCheckTaskResponse submitHotExpandPreCheckTask(const Models::SubmitHotExpandPreCheckTaskRequest &request);

      /**
       * @summary Submits a hot-spot scale-out task for a database.
       *
       * @param request SubmitHotExpandTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitHotExpandTaskResponse
       */
      Models::SubmitHotExpandTaskResponse submitHotExpandTaskWithOptions(const Models::SubmitHotExpandTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a hot-spot scale-out task for a database.
       *
       * @param request SubmitHotExpandTaskRequest
       * @return SubmitHotExpandTaskResponse
       */
      Models::SubmitHotExpandTaskResponse submitHotExpandTask(const Models::SubmitHotExpandTaskRequest &request);

      /**
       * @summary Submits a precheck task for the smooth scale-out of a PolarDB-X database.
       *
       * @param request SubmitSmoothExpandPreCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmoothExpandPreCheckResponse
       */
      Models::SubmitSmoothExpandPreCheckResponse submitSmoothExpandPreCheckWithOptions(const Models::SubmitSmoothExpandPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a precheck task for the smooth scale-out of a PolarDB-X database.
       *
       * @param request SubmitSmoothExpandPreCheckRequest
       * @return SubmitSmoothExpandPreCheckResponse
       */
      Models::SubmitSmoothExpandPreCheckResponse submitSmoothExpandPreCheck(const Models::SubmitSmoothExpandPreCheckRequest &request);

      /**
       * @summary Submits a precheck task for the smooth scale-out of a PolarDB-X 1.0 database.
       *
       * @param request SubmitSmoothExpandPreCheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmoothExpandPreCheckTaskResponse
       */
      Models::SubmitSmoothExpandPreCheckTaskResponse submitSmoothExpandPreCheckTaskWithOptions(const Models::SubmitSmoothExpandPreCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a precheck task for the smooth scale-out of a PolarDB-X 1.0 database.
       *
       * @param request SubmitSmoothExpandPreCheckTaskRequest
       * @return SubmitSmoothExpandPreCheckTaskResponse
       */
      Models::SubmitSmoothExpandPreCheckTaskResponse submitSmoothExpandPreCheckTask(const Models::SubmitSmoothExpandPreCheckTaskRequest &request);

      /**
       * @param request SubmitSqlFlashbackTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSqlFlashbackTaskResponse
       */
      Models::SubmitSqlFlashbackTaskResponse submitSqlFlashbackTaskWithOptions(const Models::SubmitSqlFlashbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitSqlFlashbackTaskRequest
       * @return SubmitSqlFlashbackTaskResponse
       */
      Models::SubmitSqlFlashbackTaskResponse submitSqlFlashbackTask(const Models::SubmitSqlFlashbackTaskRequest &request);

      /**
       * @summary Switches the mode of broadcast tables from the multi-write mode to the asynchronous link mode.
       *
       * @param request SwitchGlobalBroadcastTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchGlobalBroadcastTypeResponse
       */
      Models::SwitchGlobalBroadcastTypeResponse switchGlobalBroadcastTypeWithOptions(const Models::SwitchGlobalBroadcastTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the mode of broadcast tables from the multi-write mode to the asynchronous link mode.
       *
       * @param request SwitchGlobalBroadcastTypeRequest
       * @return SwitchGlobalBroadcastTypeResponse
       */
      Models::SwitchGlobalBroadcastTypeResponse switchGlobalBroadcastType(const Models::SwitchGlobalBroadcastTypeRequest &request);

      /**
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Changes the network type of a PolarDB-X 1.0 instance.
       *
       * @param request UpdateInstanceNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceNetworkResponse
       */
      Models::UpdateInstanceNetworkResponse updateInstanceNetworkWithOptions(const Models::UpdateInstanceNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the network type of a PolarDB-X 1.0 instance.
       *
       * @param request UpdateInstanceNetworkRequest
       * @return UpdateInstanceNetworkResponse
       */
      Models::UpdateInstanceNetworkResponse updateInstanceNetwork(const Models::UpdateInstanceNetworkRequest &request);

      /**
       * @summary Updates the specifications of a custom ApsaraDB RDS instance at the storage layer.
       *
       * @param request UpdatePrivateRdsClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrivateRdsClassResponse
       */
      Models::UpdatePrivateRdsClassResponse updatePrivateRdsClassWithOptions(const Models::UpdatePrivateRdsClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the specifications of a custom ApsaraDB RDS instance at the storage layer.
       *
       * @param request UpdatePrivateRdsClassRequest
       * @return UpdatePrivateRdsClassResponse
       */
      Models::UpdatePrivateRdsClassResponse updatePrivateRdsClass(const Models::UpdatePrivateRdsClassRequest &request);

      /**
       * @param request UpdateResourceGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceGroupAttributeResponse
       */
      Models::UpdateResourceGroupAttributeResponse updateResourceGroupAttributeWithOptions(const Models::UpdateResourceGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateResourceGroupAttributeRequest
       * @return UpdateResourceGroupAttributeResponse
       */
      Models::UpdateResourceGroupAttributeResponse updateResourceGroupAttribute(const Models::UpdateResourceGroupAttributeRequest &request);

      /**
       * @summary Upgrades the version of a column-oriented storage instance of a PolarDB-X 1.0 instance.
       *
       * @param request UpgradeHiStoreInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeHiStoreInstanceResponse
       */
      Models::UpgradeHiStoreInstanceResponse upgradeHiStoreInstanceWithOptions(const Models::UpgradeHiStoreInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the version of a column-oriented storage instance of a PolarDB-X 1.0 instance.
       *
       * @param request UpgradeHiStoreInstanceRequest
       * @return UpgradeHiStoreInstanceResponse
       */
      Models::UpgradeHiStoreInstanceResponse upgradeHiStoreInstance(const Models::UpgradeHiStoreInstanceRequest &request);

      /**
       * @param request UpgradeInstanceVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeInstanceVersionResponse
       */
      Models::UpgradeInstanceVersionResponse upgradeInstanceVersionWithOptions(const Models::UpgradeInstanceVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpgradeInstanceVersionRequest
       * @return UpgradeInstanceVersionResponse
       */
      Models::UpgradeInstanceVersionResponse upgradeInstanceVersion(const Models::UpgradeInstanceVersionRequest &request);

      /**
       * @param request ValidateShardTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateShardTaskResponse
       */
      Models::ValidateShardTaskResponse validateShardTaskWithOptions(const Models::ValidateShardTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ValidateShardTaskRequest
       * @return ValidateShardTaskResponse
       */
      Models::ValidateShardTaskResponse validateShardTask(const Models::ValidateShardTaskRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
