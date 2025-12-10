// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DATALAKE20200710_HPP_
#define ALIBABACLOUD_DATALAKE20200710_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DataLake20200710Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DataLake20200710.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Aborts the specified metadata lock.
       *
       * @param request AbortLockRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortLockResponse
       */
      Models::AbortLockResponse abortLockWithOptions(const Models::AbortLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Aborts the specified metadata lock.
       *
       * @param request AbortLockRequest
       * @return AbortLockResponse
       */
      Models::AbortLockResponse abortLock(const Models::AbortLockRequest &request);

      /**
       * @summary Add multiple partitions to a data table in a data lake at a time.
       *
       * @param request BatchCreatePartitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreatePartitionsResponse
       */
      Models::BatchCreatePartitionsResponse batchCreatePartitionsWithOptions(const Models::BatchCreatePartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add multiple partitions to a data table in a data lake at a time.
       *
       * @param request BatchCreatePartitionsRequest
       * @return BatchCreatePartitionsResponse
       */
      Models::BatchCreatePartitionsResponse batchCreatePartitions(const Models::BatchCreatePartitionsRequest &request);

      /**
       * @summary Add data tables to a data lake at a time.
       *
       * @param request BatchCreateTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateTablesResponse
       */
      Models::BatchCreateTablesResponse batchCreateTablesWithOptions(const Models::BatchCreateTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add data tables to a data lake at a time.
       *
       * @param request BatchCreateTablesRequest
       * @return BatchCreateTablesResponse
       */
      Models::BatchCreateTablesResponse batchCreateTables(const Models::BatchCreateTablesRequest &request);

      /**
       * @summary Deletes multiple partitions of a data table in the data lake.
       *
       * @param request BatchDeletePartitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeletePartitionsResponse
       */
      Models::BatchDeletePartitionsResponse batchDeletePartitionsWithOptions(const Models::BatchDeletePartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple partitions of a data table in the data lake.
       *
       * @param request BatchDeletePartitionsRequest
       * @return BatchDeletePartitionsResponse
       */
      Models::BatchDeletePartitionsResponse batchDeletePartitions(const Models::BatchDeletePartitionsRequest &request);

      /**
       * @summary Deletes a specified version of a data table in a data lake at a time.
       *
       * @param request BatchDeleteTableVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteTableVersionsResponse
       */
      Models::BatchDeleteTableVersionsResponse batchDeleteTableVersionsWithOptions(const Models::BatchDeleteTableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified version of a data table in a data lake at a time.
       *
       * @param request BatchDeleteTableVersionsRequest
       * @return BatchDeleteTableVersionsResponse
       */
      Models::BatchDeleteTableVersionsResponse batchDeleteTableVersions(const Models::BatchDeleteTableVersionsRequest &request);

      /**
       * @summary Deletes multiple data tables in a data lake by name.
       *
       * @param request BatchDeleteTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteTablesResponse
       */
      Models::BatchDeleteTablesResponse batchDeleteTablesWithOptions(const Models::BatchDeleteTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple data tables in a data lake by name.
       *
       * @param request BatchDeleteTablesRequest
       * @return BatchDeleteTablesResponse
       */
      Models::BatchDeleteTablesResponse batchDeleteTables(const Models::BatchDeleteTablesRequest &request);

      /**
       * @summary Obtains the field statistics of data table partitions in a data lake at a time.
       *
       * @param request BatchGetPartitionColumnStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetPartitionColumnStatisticsResponse
       */
      Models::BatchGetPartitionColumnStatisticsResponse batchGetPartitionColumnStatisticsWithOptions(const Models::BatchGetPartitionColumnStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the field statistics of data table partitions in a data lake at a time.
       *
       * @param request BatchGetPartitionColumnStatisticsRequest
       * @return BatchGetPartitionColumnStatisticsResponse
       */
      Models::BatchGetPartitionColumnStatisticsResponse batchGetPartitionColumnStatistics(const Models::BatchGetPartitionColumnStatisticsRequest &request);

      /**
       * @summary Obtains the details of database partitions in a data lake in batches.
       *
       * @param request BatchGetPartitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetPartitionsResponse
       */
      Models::BatchGetPartitionsResponse batchGetPartitionsWithOptions(const Models::BatchGetPartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of database partitions in a data lake in batches.
       *
       * @param request BatchGetPartitionsRequest
       * @return BatchGetPartitionsResponse
       */
      Models::BatchGetPartitionsResponse batchGetPartitions(const Models::BatchGetPartitionsRequest &request);

      /**
       * @summary Obtain detailed information about data tables in the data lake in batches.
       *
       * @param request BatchGetTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetTablesResponse
       */
      Models::BatchGetTablesResponse batchGetTablesWithOptions(const Models::BatchGetTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain detailed information about data tables in the data lake in batches.
       *
       * @param request BatchGetTablesRequest
       * @return BatchGetTablesResponse
       */
      Models::BatchGetTablesResponse batchGetTables(const Models::BatchGetTablesRequest &request);

      /**
       * @summary Grant the operation permissions on resources to a user or a data lake role at a time.
       *
       * @param request BatchGrantPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGrantPermissionsResponse
       */
      Models::BatchGrantPermissionsResponse batchGrantPermissionsWithOptions(const Models::BatchGrantPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grant the operation permissions on resources to a user or a data lake role at a time.
       *
       * @param request BatchGrantPermissionsRequest
       * @return BatchGrantPermissionsResponse
       */
      Models::BatchGrantPermissionsResponse batchGrantPermissions(const Models::BatchGrantPermissionsRequest &request);

      /**
       * @summary You can call this operation to revoke permissions on resources from a user or data lake role at a time.
       *
       * @param request BatchRevokePermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRevokePermissionsResponse
       */
      Models::BatchRevokePermissionsResponse batchRevokePermissionsWithOptions(const Models::BatchRevokePermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to revoke permissions on resources from a user or data lake role at a time.
       *
       * @param request BatchRevokePermissionsRequest
       * @return BatchRevokePermissionsResponse
       */
      Models::BatchRevokePermissionsResponse batchRevokePermissions(const Models::BatchRevokePermissionsRequest &request);

      /**
       * @summary Batch update multiple partitions for a data table in a data lake.
       *
       * @param request BatchUpdatePartitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdatePartitionsResponse
       */
      Models::BatchUpdatePartitionsResponse batchUpdatePartitionsWithOptions(const Models::BatchUpdatePartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch update multiple partitions for a data table in a data lake.
       *
       * @param request BatchUpdatePartitionsRequest
       * @return BatchUpdatePartitionsResponse
       */
      Models::BatchUpdatePartitionsResponse batchUpdatePartitions(const Models::BatchUpdatePartitionsRequest &request);

      /**
       * @summary Update the details of data tables in the data lake in batches.
       *
       * @param request BatchUpdateTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateTablesResponse
       */
      Models::BatchUpdateTablesResponse batchUpdateTablesWithOptions(const Models::BatchUpdateTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the details of data tables in the data lake in batches.
       *
       * @param request BatchUpdateTablesRequest
       * @return BatchUpdateTablesResponse
       */
      Models::BatchUpdateTablesResponse batchUpdateTables(const Models::BatchUpdateTablesRequest &request);

      /**
       * @summary Cancel a query request.
       *
       * @param request CancelQueryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelQueryResponse
       */
      Models::CancelQueryResponse cancelQueryWithOptions(const Models::CancelQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel a query request.
       *
       * @param request CancelQueryRequest
       * @return CancelQueryResponse
       */
      Models::CancelQueryResponse cancelQuery(const Models::CancelQueryRequest &request);

      /**
       * @summary Verify user permissions.
       *
       * @param request CheckPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckPermissionsResponse
       */
      Models::CheckPermissionsResponse checkPermissionsWithOptions(const Models::CheckPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verify user permissions.
       *
       * @param request CheckPermissionsRequest
       * @return CheckPermissionsResponse
       */
      Models::CheckPermissionsResponse checkPermissions(const Models::CheckPermissionsRequest &request);

      /**
       * @summary Create a Data Catalog for Data Lake.
       *
       * @param request CreateCatalogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCatalogResponse
       */
      Models::CreateCatalogResponse createCatalogWithOptions(const Models::CreateCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a Data Catalog for Data Lake.
       *
       * @param request CreateCatalogRequest
       * @return CreateCatalogResponse
       */
      Models::CreateCatalogResponse createCatalog(const Models::CreateCatalogRequest &request);

      /**
       * @summary Create a metadabase in the data lake metadata.
       *
       * @param request CreateDatabaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabaseWithOptions(const Models::CreateDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a metadabase in the data lake metadata.
       *
       * @param request CreateDatabaseRequest
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabase(const Models::CreateDatabaseRequest &request);

      /**
       * @summary Added user-defined functions for databases in the data lake.
       *
       * @param request CreateFunctionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFunctionResponse
       */
      Models::CreateFunctionResponse createFunctionWithOptions(const Models::CreateFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Added user-defined functions for databases in the data lake.
       *
       * @param request CreateFunctionRequest
       * @return CreateFunctionResponse
       */
      Models::CreateFunctionResponse createFunction(const Models::CreateFunctionRequest &request);

      /**
       * @summary Creates a specified metadata lock.
       *
       * @param request CreateLockRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLockResponse
       */
      Models::CreateLockResponse createLockWithOptions(const Models::CreateLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a specified metadata lock.
       *
       * @param request CreateLockRequest
       * @return CreateLockResponse
       */
      Models::CreateLockResponse createLock(const Models::CreateLockRequest &request);

      /**
       * @summary Add a partition to the data table of the data lake.
       *
       * @param request CreatePartitionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePartitionResponse
       */
      Models::CreatePartitionResponse createPartitionWithOptions(const Models::CreatePartitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a partition to the data table of the data lake.
       *
       * @param request CreatePartitionRequest
       * @return CreatePartitionResponse
       */
      Models::CreatePartitionResponse createPartition(const Models::CreatePartitionRequest &request);

      /**
       * @summary In the Data Lake Permissions section, add a role.
       *
       * @param request CreateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const Models::CreateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary In the Data Lake Permissions section, add a role.
       *
       * @param request CreateRoleRequest
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRole(const Models::CreateRoleRequest &request);

      /**
       * @summary Add a data table for the data lake.
       *
       * @param request CreateTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTableResponse
       */
      Models::CreateTableResponse createTableWithOptions(const Models::CreateTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a data table for the data lake.
       *
       * @param request CreateTableRequest
       * @return CreateTableResponse
       */
      Models::CreateTableResponse createTable(const Models::CreateTableRequest &request);

      /**
       * @summary Deletes a data directory.
       *
       * @param request DeleteCatalogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCatalogResponse
       */
      Models::DeleteCatalogResponse deleteCatalogWithOptions(const Models::DeleteCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data directory.
       *
       * @param request DeleteCatalogRequest
       * @return DeleteCatalogResponse
       */
      Models::DeleteCatalogResponse deleteCatalog(const Models::DeleteCatalogRequest &request);

      /**
       * @summary Deletes a database in the data lake by name.
       *
       * @param request DeleteDatabaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabaseWithOptions(const Models::DeleteDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database in the data lake by name.
       *
       * @param request DeleteDatabaseRequest
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabase(const Models::DeleteDatabaseRequest &request);

      /**
       * @summary Deletes a user-defined function for a database in the data lake by name.
       *
       * @param request DeleteFunctionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFunctionResponse
       */
      Models::DeleteFunctionResponse deleteFunctionWithOptions(const Models::DeleteFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user-defined function for a database in the data lake by name.
       *
       * @param request DeleteFunctionRequest
       * @return DeleteFunctionResponse
       */
      Models::DeleteFunctionResponse deleteFunction(const Models::DeleteFunctionRequest &request);

      /**
       * @summary Deletes a specified partition from a data table in the data lake.
       *
       * @param request DeletePartitionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePartitionResponse
       */
      Models::DeletePartitionResponse deletePartitionWithOptions(const Models::DeletePartitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified partition from a data table in the data lake.
       *
       * @param request DeletePartitionRequest
       * @return DeletePartitionResponse
       */
      Models::DeletePartitionResponse deletePartition(const Models::DeletePartitionRequest &request);

      /**
       * @summary Reclaim the field statistics of data table partitions in the data lake.
       *
       * @param tmpReq DeletePartitionColumnStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePartitionColumnStatisticsResponse
       */
      Models::DeletePartitionColumnStatisticsResponse deletePartitionColumnStatisticsWithOptions(const Models::DeletePartitionColumnStatisticsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reclaim the field statistics of data table partitions in the data lake.
       *
       * @param request DeletePartitionColumnStatisticsRequest
       * @return DeletePartitionColumnStatisticsResponse
       */
      Models::DeletePartitionColumnStatisticsResponse deletePartitionColumnStatistics(const Models::DeletePartitionColumnStatisticsRequest &request);

      /**
       * @summary Delete a role from Data Lake Permissions.
       *
       * @param request DeleteRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const Models::DeleteRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a role from Data Lake Permissions.
       *
       * @param request DeleteRoleRequest
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRole(const Models::DeleteRoleRequest &request);

      /**
       * @summary Deletes a data table in a data lake by name.
       *
       * @param request DeleteTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTableResponse
       */
      Models::DeleteTableResponse deleteTableWithOptions(const Models::DeleteTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data table in a data lake by name.
       *
       * @param request DeleteTableRequest
       * @return DeleteTableResponse
       */
      Models::DeleteTableResponse deleteTable(const Models::DeleteTableRequest &request);

      /**
       * @summary Recycle field statistics for data tables in the data lake.
       *
       * @param tmpReq DeleteTableColumnStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTableColumnStatisticsResponse
       */
      Models::DeleteTableColumnStatisticsResponse deleteTableColumnStatisticsWithOptions(const Models::DeleteTableColumnStatisticsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recycle field statistics for data tables in the data lake.
       *
       * @param request DeleteTableColumnStatisticsRequest
       * @return DeleteTableColumnStatisticsResponse
       */
      Models::DeleteTableColumnStatisticsResponse deleteTableColumnStatistics(const Models::DeleteTableColumnStatisticsRequest &request);

      /**
       * @summary Deletes a specified version of a data table in the data lake.
       *
       * @param request DeleteTableVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTableVersionResponse
       */
      Models::DeleteTableVersionResponse deleteTableVersionWithOptions(const Models::DeleteTableVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified version of a data table in the data lake.
       *
       * @param request DeleteTableVersionRequest
       * @return DeleteTableVersionResponse
       */
      Models::DeleteTableVersionResponse deleteTableVersion(const Models::DeleteTableVersionRequest &request);

      /**
       * @summary Cancel Location registration.
       *
       * @param request DeregisterLocationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterLocationResponse
       */
      Models::DeregisterLocationResponse deregisterLocationWithOptions(const Models::DeregisterLocationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel Location registration.
       *
       * @param request DeregisterLocationRequest
       * @return DeregisterLocationResponse
       */
      Models::DeregisterLocationResponse deregisterLocation(const Models::DeregisterLocationRequest &request);

      /**
       * @summary Obtains the list of open regions.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the list of open regions.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Used in metadata-related asynchronous APIs to check the status of asynchronous execution tasks.
       *
       * @param request GetAsyncTaskStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncTaskStatusResponse
       */
      Models::GetAsyncTaskStatusResponse getAsyncTaskStatusWithOptions(const Models::GetAsyncTaskStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used in metadata-related asynchronous APIs to check the status of asynchronous execution tasks.
       *
       * @param request GetAsyncTaskStatusRequest
       * @return GetAsyncTaskStatusResponse
       */
      Models::GetAsyncTaskStatusResponse getAsyncTaskStatus(const Models::GetAsyncTaskStatusRequest &request);

      /**
       * @summary Obtains the details of a data directory.
       *
       * @param request GetCatalogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogResponse
       */
      Models::GetCatalogResponse getCatalogWithOptions(const Models::GetCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a data directory.
       *
       * @param request GetCatalogRequest
       * @return GetCatalogResponse
       */
      Models::GetCatalogResponse getCatalog(const Models::GetCatalogRequest &request);

      /**
       * @summary To obtain the configurations of Data Lake Catalog, you must assume the admin role or above.
       *
       * @param request GetCatalogSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogSettingsResponse
       */
      Models::GetCatalogSettingsResponse getCatalogSettingsWithOptions(const Models::GetCatalogSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To obtain the configurations of Data Lake Catalog, you must assume the admin role or above.
       *
       * @param request GetCatalogSettingsRequest
       * @return GetCatalogSettingsResponse
       */
      Models::GetCatalogSettingsResponse getCatalogSettings(const Models::GetCatalogSettingsRequest &request);

      /**
       * @summary Obtains the details of a database in a data lake.
       *
       * @param request GetDatabaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabaseWithOptions(const Models::GetDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a database in a data lake.
       *
       * @param request GetDatabaseRequest
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabase(const Models::GetDatabaseRequest &request);

      /**
       * @summary Gets the details of the database data profile.
       *
       * @description To use a data profile, you must first host the OSS bucket of the database.
       *
       * @param request GetDatabaseProfileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseProfileResponse
       */
      Models::GetDatabaseProfileResponse getDatabaseProfileWithOptions(const Models::GetDatabaseProfileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of the database data profile.
       *
       * @description To use a data profile, you must first host the OSS bucket of the database.
       *
       * @param request GetDatabaseProfileRequest
       * @return GetDatabaseProfileResponse
       */
      Models::GetDatabaseProfileResponse getDatabaseProfile(const Models::GetDatabaseProfileRequest &request);

      /**
       * @summary Obtain the user-defined function of the database in the data lake based on the function name.
       *
       * @param request GetFunctionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionResponse
       */
      Models::GetFunctionResponse getFunctionWithOptions(const Models::GetFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the user-defined function of the database in the data lake based on the function name.
       *
       * @param request GetFunctionRequest
       * @return GetFunctionResponse
       */
      Models::GetFunctionResponse getFunction(const Models::GetFunctionRequest &request);

      /**
       * @summary Obtains the lifecycle rules of a database and table.
       *
       * @param request GetLifecycleRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLifecycleRuleResponse
       */
      Models::GetLifecycleRuleResponse getLifecycleRuleWithOptions(const Models::GetLifecycleRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the lifecycle rules of a database and table.
       *
       * @param request GetLifecycleRuleRequest
       * @return GetLifecycleRuleResponse
       */
      Models::GetLifecycleRuleResponse getLifecycleRule(const Models::GetLifecycleRuleRequest &request);

      /**
       * @summary Queries the specified metadata lock.
       *
       * @param request GetLockRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLockResponse
       */
      Models::GetLockResponse getLockWithOptions(const Models::GetLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specified metadata lock.
       *
       * @param request GetLockRequest
       * @return GetLockResponse
       */
      Models::GetLockResponse getLock(const Models::GetLockRequest &request);

      /**
       * @summary Get details about the database partitions in the data lake.
       *
       * @param request GetPartitionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPartitionResponse
       */
      Models::GetPartitionResponse getPartitionWithOptions(const Models::GetPartitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get details about the database partitions in the data lake.
       *
       * @param request GetPartitionRequest
       * @return GetPartitionResponse
       */
      Models::GetPartitionResponse getPartition(const Models::GetPartitionRequest &request);

      /**
       * @summary Obtains the statistics of a specified field for a data partition in a data lake.
       *
       * @param tmpReq GetPartitionColumnStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPartitionColumnStatisticsResponse
       */
      Models::GetPartitionColumnStatisticsResponse getPartitionColumnStatisticsWithOptions(const Models::GetPartitionColumnStatisticsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the statistics of a specified field for a data partition in a data lake.
       *
       * @param request GetPartitionColumnStatisticsRequest
       * @return GetPartitionColumnStatisticsResponse
       */
      Models::GetPartitionColumnStatisticsResponse getPartitionColumnStatistics(const Models::GetPartitionColumnStatisticsRequest &request);

      /**
       * @summary Obtains the results of a data exploration query.
       *
       * @param request GetQueryResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueryResultResponse
       */
      Models::GetQueryResultResponse getQueryResultWithOptions(const Models::GetQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the results of a data exploration query.
       *
       * @param request GetQueryResultRequest
       * @return GetQueryResultResponse
       */
      Models::GetQueryResultResponse getQueryResult(const Models::GetQueryResultRequest &request);

      /**
       * @summary You can Data Lake Formation the activation status of the service in the specified region.
       *
       * @param request GetRegionStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegionStatusResponse
       */
      Models::GetRegionStatusResponse getRegionStatusWithOptions(const Models::GetRegionStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can Data Lake Formation the activation status of the service in the specified region.
       *
       * @param request GetRegionStatusRequest
       * @return GetRegionStatusResponse
       */
      Models::GetRegionStatusResponse getRegionStatus(const Models::GetRegionStatusRequest &request);

      /**
       * @summary Obtain the role in Data Lake Permissions based on the role name.
       *
       * @param request GetRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRoleWithOptions(const Models::GetRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the role in Data Lake Permissions based on the role name.
       *
       * @param request GetRoleRequest
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRole(const Models::GetRoleRequest &request);

      /**
       * @summary Obtains the service activation status of a Data Lake Formation user.
       *
       * @param request GetServiceStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceStatusResponse
       */
      Models::GetServiceStatusResponse getServiceStatusWithOptions(const Models::GetServiceStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the service activation status of a Data Lake Formation user.
       *
       * @param request GetServiceStatusRequest
       * @return GetServiceStatusResponse
       */
      Models::GetServiceStatusResponse getServiceStatus(const Models::GetServiceStatusRequest &request);

      /**
       * @summary Get detailed information about the data tables in the data lake.
       *
       * @param request GetTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableResponse
       */
      Models::GetTableResponse getTableWithOptions(const Models::GetTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get detailed information about the data tables in the data lake.
       *
       * @param request GetTableRequest
       * @return GetTableResponse
       */
      Models::GetTableResponse getTable(const Models::GetTableRequest &request);

      /**
       * @summary You can call this operation to obtain statistics about a specified field in a data table in a data lake.
       *
       * @param tmpReq GetTableColumnStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableColumnStatisticsResponse
       */
      Models::GetTableColumnStatisticsResponse getTableColumnStatisticsWithOptions(const Models::GetTableColumnStatisticsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to obtain statistics about a specified field in a data table in a data lake.
       *
       * @param request GetTableColumnStatisticsRequest
       * @return GetTableColumnStatisticsResponse
       */
      Models::GetTableColumnStatisticsResponse getTableColumnStatistics(const Models::GetTableColumnStatisticsRequest &request);

      /**
       * @summary Obtains the details of a table data profile.
       *
       * @description To use a data profile, you must first host the OSS bucket of the table.
       *
       * @param request GetTableProfileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableProfileResponse
       */
      Models::GetTableProfileResponse getTableProfileWithOptions(const Models::GetTableProfileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a table data profile.
       *
       * @description To use a data profile, you must first host the OSS bucket of the table.
       *
       * @param request GetTableProfileRequest
       * @return GetTableProfileResponse
       */
      Models::GetTableProfileResponse getTableProfile(const Models::GetTableProfileRequest &request);

      /**
       * @summary Gets a specified version of a data table in the data lake.
       *
       * @param request GetTableVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableVersionResponse
       */
      Models::GetTableVersionResponse getTableVersionWithOptions(const Models::GetTableVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a specified version of a data table in the data lake.
       *
       * @param request GetTableVersionRequest
       * @return GetTableVersionResponse
       */
      Models::GetTableVersionResponse getTableVersion(const Models::GetTableVersionRequest &request);

      /**
       * @summary Grant the operation permissions on resources to the User /Data Lake role.
       *
       * @param request GrantPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantPermissionsResponse
       */
      Models::GrantPermissionsResponse grantPermissionsWithOptions(const Models::GrantPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grant the operation permissions on resources to the User /Data Lake role.
       *
       * @param request GrantPermissionsRequest
       * @return GrantPermissionsResponse
       */
      Models::GrantPermissionsResponse grantPermissions(const Models::GrantPermissionsRequest &request);

      /**
       * @summary Grant a Data Lake role to multiple users.
       *
       * @param request GrantRoleToUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantRoleToUsersResponse
       */
      Models::GrantRoleToUsersResponse grantRoleToUsersWithOptions(const Models::GrantRoleToUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grant a Data Lake role to multiple users.
       *
       * @param request GrantRoleToUsersRequest
       * @return GrantRoleToUsersResponse
       */
      Models::GrantRoleToUsersResponse grantRoleToUsers(const Models::GrantRoleToUsersRequest &request);

      /**
       * @summary Grant multiple roles to a single user.
       *
       * @param request GrantRolesToUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantRolesToUserResponse
       */
      Models::GrantRolesToUserResponse grantRolesToUserWithOptions(const Models::GrantRolesToUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grant multiple roles to a single user.
       *
       * @param request GrantRolesToUserRequest
       * @return GrantRolesToUserResponse
       */
      Models::GrantRolesToUserResponse grantRolesToUser(const Models::GrantRolesToUserRequest &request);

      /**
       * @summary You can call this operation to query the list of metabase namespaces (catalogs).
       *
       * @param request ListCatalogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogsWithOptions(const Models::ListCatalogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query the list of metabase namespaces (catalogs).
       *
       * @param request ListCatalogsRequest
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogs(const Models::ListCatalogsRequest &request);

      /**
       * @summary Obtains a list of databases in the data lake and queries them by page. You can match them based on the database name.
       *
       * @param request ListDatabasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabasesWithOptions(const Models::ListDatabasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of databases in the data lake and queries them by page. You can match them based on the database name.
       *
       * @param request ListDatabasesRequest
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabases(const Models::ListDatabasesRequest &request);

      /**
       * @summary Paged query to obtain the list of function names of the database.
       *
       * @param request ListFunctionNamesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionNamesResponse
       */
      Models::ListFunctionNamesResponse listFunctionNamesWithOptions(const Models::ListFunctionNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paged query to obtain the list of function names of the database.
       *
       * @param request ListFunctionNamesRequest
       * @return ListFunctionNamesResponse
       */
      Models::ListFunctionNamesResponse listFunctionNames(const Models::ListFunctionNamesRequest &request);

      /**
       * @summary Obtains a list of user-defined functions for databases in the data lake in bulk.
       *
       * @param request ListFunctionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctionsWithOptions(const Models::ListFunctionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of user-defined functions for databases in the data lake in bulk.
       *
       * @param request ListFunctionsRequest
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctions(const Models::ListFunctionsRequest &request);

      /**
       * @summary You can call this operation to obtain a list of partition names of data tables in a data lake. This method is usually used for multi-level partitioning.
       *
       * @param request ListPartitionNamesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionNamesResponse
       */
      Models::ListPartitionNamesResponse listPartitionNamesWithOptions(const Models::ListPartitionNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to obtain a list of partition names of data tables in a data lake. This method is usually used for multi-level partitioning.
       *
       * @param request ListPartitionNamesRequest
       * @return ListPartitionNamesResponse
       */
      Models::ListPartitionNamesResponse listPartitionNames(const Models::ListPartitionNamesRequest &request);

      /**
       * @summary Obtains a list of database partition details in the data lake.
       *
       * @param request ListPartitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionsResponse
       */
      Models::ListPartitionsResponse listPartitionsWithOptions(const Models::ListPartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of database partition details in the data lake.
       *
       * @param request ListPartitionsRequest
       * @return ListPartitionsResponse
       */
      Models::ListPartitionsResponse listPartitions(const Models::ListPartitionsRequest &request);

      /**
       * @summary Obtains a list of data table partitions in the data lake and queries them by condition.
       *
       * @description You cannot specify expr to filter partitions. Currently, you need to call the listpartitionsbyfilter to complete the corresponding function.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionsByExprResponse
       */
      Models::ListPartitionsByExprResponse listPartitionsByExprWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of data table partitions in the data lake and queries them by condition.
       *
       * @description You cannot specify expr to filter partitions. Currently, you need to call the listpartitionsbyfilter to complete the corresponding function.
       *
       * @return ListPartitionsByExprResponse
       */
      Models::ListPartitionsByExprResponse listPartitionsByExpr();

      /**
       * @summary Obtain the list of data table partitions in the data lake and query them by filter condition.
       *
       * @param request ListPartitionsByFilterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionsByFilterResponse
       */
      Models::ListPartitionsByFilterResponse listPartitionsByFilterWithOptions(const Models::ListPartitionsByFilterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the list of data table partitions in the data lake and query them by filter condition.
       *
       * @param request ListPartitionsByFilterRequest
       * @return ListPartitionsByFilterResponse
       */
      Models::ListPartitionsByFilterResponse listPartitionsByFilter(const Models::ListPartitionsByFilterRequest &request);

      /**
       * @summary Obtains the details of a partition data profile.
       *
       * @description To use a data profile, you must first host the OSS bucket of the table.
       *
       * @param tmpReq ListPartitionsProfileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionsProfileResponse
       */
      Models::ListPartitionsProfileResponse listPartitionsProfileWithOptions(const Models::ListPartitionsProfileRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a partition data profile.
       *
       * @description To use a data profile, you must first host the OSS bucket of the table.
       *
       * @param request ListPartitionsProfileRequest
       * @return ListPartitionsProfileResponse
       */
      Models::ListPartitionsProfileResponse listPartitionsProfile(const Models::ListPartitionsProfileRequest &request);

      /**
       * @summary Queries permissions.
       *
       * @param request ListPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissionsWithOptions(const Models::ListPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries permissions.
       *
       * @param request ListPermissionsRequest
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissions(const Models::ListPermissionsRequest &request);

      /**
       * @summary Gets the list of users for a single role.
       *
       * @param request ListRoleUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoleUsersResponse
       */
      Models::ListRoleUsersResponse listRoleUsersWithOptions(const Models::ListRoleUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the list of users for a single role.
       *
       * @param request ListRoleUsersRequest
       * @return ListRoleUsersResponse
       */
      Models::ListRoleUsersResponse listRoleUsers(const Models::ListRoleUsersRequest &request);

      /**
       * @summary You can query the list of data lake roles.
       *
       * @param request ListRolesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can query the list of data lake roles.
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary This function is used only to query the names of data tables in Data Lake.
       *
       * @param request ListTableNamesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableNamesResponse
       */
      Models::ListTableNamesResponse listTableNamesWithOptions(const Models::ListTableNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This function is used only to query the names of data tables in Data Lake.
       *
       * @param request ListTableNamesRequest
       * @return ListTableNamesResponse
       */
      Models::ListTableNamesResponse listTableNames(const Models::ListTableNamesRequest &request);

      /**
       * @summary Queries the list of specified versions of data tables in a data lake by page.
       *
       * @param request ListTableVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableVersionsResponse
       */
      Models::ListTableVersionsResponse listTableVersionsWithOptions(const Models::ListTableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of specified versions of data tables in a data lake by page.
       *
       * @param request ListTableVersionsRequest
       * @return ListTableVersionsResponse
       */
      Models::ListTableVersionsResponse listTableVersions(const Models::ListTableVersionsRequest &request);

      /**
       * @summary You can call this operation to obtain a list of data tables in the data lake.
       *
       * @param request ListTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const Models::ListTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to obtain a list of data tables in the data lake.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const Models::ListTablesRequest &request);

      /**
       * @summary Obtains the list of data lake roles for a single user.
       *
       * @param request ListUserRolesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserRolesResponse
       */
      Models::ListUserRolesResponse listUserRolesWithOptions(const Models::ListUserRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the list of data lake roles for a single user.
       *
       * @param request ListUserRolesRequest
       * @return ListUserRolesResponse
       */
      Models::ListUserRolesResponse listUserRoles(const Models::ListUserRolesRequest &request);

      /**
       * @summary Refreshes the specified metadata lock.
       *
       * @param request RefreshLockRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshLockResponse
       */
      Models::RefreshLockResponse refreshLockWithOptions(const Models::RefreshLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the specified metadata lock.
       *
       * @param request RefreshLockRequest
       * @return RefreshLockResponse
       */
      Models::RefreshLockResponse refreshLock(const Models::RefreshLockRequest &request);

      /**
       * @summary Register the OSS path to be managed by DLF.
       *
       * @param request RegisterLocationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterLocationResponse
       */
      Models::RegisterLocationResponse registerLocationWithOptions(const Models::RegisterLocationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Register the OSS path to be managed by DLF.
       *
       * @param request RegisterLocationRequest
       * @return RegisterLocationResponse
       */
      Models::RegisterLocationResponse registerLocation(const Models::RegisterLocationRequest &request);

      /**
       * @summary Update the partition name of the data table in the data lake.
       *
       * @param request RenamePartitionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenamePartitionResponse
       */
      Models::RenamePartitionResponse renamePartitionWithOptions(const Models::RenamePartitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the partition name of the data table in the data lake.
       *
       * @param request RenamePartitionRequest
       * @return RenamePartitionResponse
       */
      Models::RenamePartitionResponse renamePartition(const Models::RenamePartitionRequest &request);

      /**
       * @summary is used only to update the name of a data table in the data lake.
       *
       * @param request RenameTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameTableResponse
       */
      Models::RenameTableResponse renameTableWithOptions(const Models::RenameTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary is used only to update the name of a data table in the data lake.
       *
       * @param request RenameTableRequest
       * @return RenameTableResponse
       */
      Models::RenameTableResponse renameTable(const Models::RenameTableRequest &request);

      /**
       * @summary Cancels the operation permissions on resources granted to a User /Data Lake role.
       *
       * @param request RevokePermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokePermissionsResponse
       */
      Models::RevokePermissionsResponse revokePermissionsWithOptions(const Models::RevokePermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the operation permissions on resources granted to a User /Data Lake role.
       *
       * @param request RevokePermissionsRequest
       * @return RevokePermissionsResponse
       */
      Models::RevokePermissionsResponse revokePermissions(const Models::RevokePermissionsRequest &request);

      /**
       * @summary Removes multiple users from a single data lake role.
       *
       * @param request RevokeRoleFromUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeRoleFromUsersResponse
       */
      Models::RevokeRoleFromUsersResponse revokeRoleFromUsersWithOptions(const Models::RevokeRoleFromUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes multiple users from a single data lake role.
       *
       * @param request RevokeRoleFromUsersRequest
       * @return RevokeRoleFromUsersResponse
       */
      Models::RevokeRoleFromUsersResponse revokeRoleFromUsers(const Models::RevokeRoleFromUsersRequest &request);

      /**
       * @summary Removes multiple roles from a single user.
       *
       * @param request RevokeRolesFromUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeRolesFromUserResponse
       */
      Models::RevokeRolesFromUserResponse revokeRolesFromUserWithOptions(const Models::RevokeRolesFromUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes multiple roles from a single user.
       *
       * @param request RevokeRolesFromUserRequest
       * @return RevokeRolesFromUserResponse
       */
      Models::RevokeRolesFromUserResponse revokeRolesFromUser(const Models::RevokeRolesFromUserRequest &request);

      /**
       * @summary Runs a metadata migration task.
       *
       * @param request RunMigrationWorkflowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMigrationWorkflowResponse
       */
      Models::RunMigrationWorkflowResponse runMigrationWorkflowWithOptions(const Models::RunMigrationWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a metadata migration task.
       *
       * @param request RunMigrationWorkflowRequest
       * @return RunMigrationWorkflowResponse
       */
      Models::RunMigrationWorkflowResponse runMigrationWorkflow(const Models::RunMigrationWorkflowRequest &request);

      /**
       * @summary Metadata retrieval.
       *
       * @description Metadata search
       *
       * @param request SearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchResponse
       */
      Models::SearchResponse searchWithOptions(const Models::SearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Metadata retrieval.
       *
       * @description Metadata search
       *
       * @param request SearchRequest
       * @return SearchResponse
       */
      Models::SearchResponse search(const Models::SearchRequest &request);

      /**
       * @summary Search across catalogs for content such as libraries, tables, and fields.
       *
       * @param request SearchAcrossCatalogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAcrossCatalogResponse
       */
      Models::SearchAcrossCatalogResponse searchAcrossCatalogWithOptions(const Models::SearchAcrossCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search across catalogs for content such as libraries, tables, and fields.
       *
       * @param request SearchAcrossCatalogRequest
       * @return SearchAcrossCatalogResponse
       */
      Models::SearchAcrossCatalogResponse searchAcrossCatalog(const Models::SearchAcrossCatalogRequest &request);

      /**
       * @summary Stop the metadata migration task.
       *
       * @param request StopMigrationWorkflowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMigrationWorkflowResponse
       */
      Models::StopMigrationWorkflowResponse stopMigrationWorkflowWithOptions(const Models::StopMigrationWorkflowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stop the metadata migration task.
       *
       * @param request StopMigrationWorkflowRequest
       * @return StopMigrationWorkflowResponse
       */
      Models::StopMigrationWorkflowResponse stopMigrationWorkflow(const Models::StopMigrationWorkflowRequest &request);

      /**
       * @summary Submit an SQL query task.
       *
       * @description *   Only suitable for submitting small and medium-sized queries. The execution time cannot exceed 1 hour.
       * *   A maximum of 10000 query results can be returned.
       * *   There are limits on concurrent execution under a single master account. If multiple queries are submitted at the same time, they will be queued.
       *
       * @param request SubmitQueryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitQueryResponse
       */
      Models::SubmitQueryResponse submitQueryWithOptions(const Models::SubmitQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit an SQL query task.
       *
       * @description *   Only suitable for submitting small and medium-sized queries. The execution time cannot exceed 1 hour.
       * *   A maximum of 10000 query results can be returned.
       * *   There are limits on concurrent execution under a single master account. If multiple queries are submitted at the same time, they will be queued.
       *
       * @param request SubmitQueryRequest
       * @return SubmitQueryResponse
       */
      Models::SubmitQueryResponse submitQuery(const Models::SubmitQueryRequest &request);

      /**
       * @summary Unlocks the specified metadata lock.
       *
       * @param request UnLockRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnLockResponse
       */
      Models::UnLockResponse unLockWithOptions(const Models::UnLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks the specified metadata lock.
       *
       * @param request UnLockRequest
       * @return UnLockResponse
       */
      Models::UnLockResponse unLock(const Models::UnLockRequest &request);

      /**
       * @summary Updates the contents of the Data Catalog.
       *
       * @param request UpdateCatalogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCatalogResponse
       */
      Models::UpdateCatalogResponse updateCatalogWithOptions(const Models::UpdateCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the contents of the Data Catalog.
       *
       * @param request UpdateCatalogRequest
       * @return UpdateCatalogResponse
       */
      Models::UpdateCatalogResponse updateCatalog(const Models::UpdateCatalogRequest &request);

      /**
       * @summary To update the configurations of Data Lake Catalog, you must assume the admin role or more.
       *
       * @param request UpdateCatalogSettingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCatalogSettingsResponse
       */
      Models::UpdateCatalogSettingsResponse updateCatalogSettingsWithOptions(const Models::UpdateCatalogSettingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To update the configurations of Data Lake Catalog, you must assume the admin role or more.
       *
       * @param request UpdateCatalogSettingsRequest
       * @return UpdateCatalogSettingsResponse
       */
      Models::UpdateCatalogSettingsResponse updateCatalogSettings(const Models::UpdateCatalogSettingsRequest &request);

      /**
       * @summary Update the details of a database in the data lake.
       *
       * @param request UpdateDatabaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatabaseResponse
       */
      Models::UpdateDatabaseResponse updateDatabaseWithOptions(const Models::UpdateDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the details of a database in the data lake.
       *
       * @param request UpdateDatabaseRequest
       * @return UpdateDatabaseResponse
       */
      Models::UpdateDatabaseResponse updateDatabase(const Models::UpdateDatabaseRequest &request);

      /**
       * @summary Updates the user-defined function information for a database in the data lake by name.
       *
       * @param request UpdateFunctionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFunctionResponse
       */
      Models::UpdateFunctionResponse updateFunctionWithOptions(const Models::UpdateFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the user-defined function information for a database in the data lake by name.
       *
       * @param request UpdateFunctionRequest
       * @return UpdateFunctionResponse
       */
      Models::UpdateFunctionResponse updateFunction(const Models::UpdateFunctionRequest &request);

      /**
       * @summary Creates or updates the field statistics of a data table partition.
       *
       * @param request UpdatePartitionColumnStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePartitionColumnStatisticsResponse
       */
      Models::UpdatePartitionColumnStatisticsResponse updatePartitionColumnStatisticsWithOptions(const Models::UpdatePartitionColumnStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates the field statistics of a data table partition.
       *
       * @param request UpdatePartitionColumnStatisticsRequest
       * @return UpdatePartitionColumnStatisticsResponse
       */
      Models::UpdatePartitionColumnStatisticsResponse updatePartitionColumnStatistics(const Models::UpdatePartitionColumnStatisticsRequest &request);

      /**
       * @summary Update the permissions of the User /Data Lake role.
       *
       * @param request UpdatePermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePermissionsResponse
       */
      Models::UpdatePermissionsResponse updatePermissionsWithOptions(const Models::UpdatePermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the permissions of the User /Data Lake role.
       *
       * @param request UpdatePermissionsRequest
       * @return UpdatePermissionsResponse
       */
      Models::UpdatePermissionsResponse updatePermissions(const Models::UpdatePermissionsRequest &request);

      /**
       * @summary Edit a Registered Location.
       *
       * @param request UpdateRegisteredLocationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRegisteredLocationResponse
       */
      Models::UpdateRegisteredLocationResponse updateRegisteredLocationWithOptions(const Models::UpdateRegisteredLocationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit a Registered Location.
       *
       * @param request UpdateRegisteredLocationRequest
       * @return UpdateRegisteredLocationResponse
       */
      Models::UpdateRegisteredLocationResponse updateRegisteredLocation(const Models::UpdateRegisteredLocationRequest &request);

      /**
       * @summary Updates a role that has the data lake permissions.
       *
       * @param request UpdateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRoleWithOptions(const Models::UpdateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a role that has the data lake permissions.
       *
       * @param request UpdateRoleRequest
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRole(const Models::UpdateRoleRequest &request);

      /**
       * @summary Update the user in the role to include ram user/ram role.
       *
       * @param request UpdateRoleUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleUsersResponse
       */
      Models::UpdateRoleUsersResponse updateRoleUsersWithOptions(const Models::UpdateRoleUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the user in the role to include ram user/ram role.
       *
       * @param request UpdateRoleUsersRequest
       * @return UpdateRoleUsersResponse
       */
      Models::UpdateRoleUsersResponse updateRoleUsers(const Models::UpdateRoleUsersRequest &request);

      /**
       * @summary Update the data table information in the data lake based on the name.
       *
       * @param request UpdateTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableResponse
       */
      Models::UpdateTableResponse updateTableWithOptions(const Models::UpdateTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the data table information in the data lake based on the name.
       *
       * @param request UpdateTableRequest
       * @return UpdateTableResponse
       */
      Models::UpdateTableResponse updateTable(const Models::UpdateTableRequest &request);

      /**
       * @summary Creates or updates field statistics for a data table.
       *
       * @param request UpdateTableColumnStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableColumnStatisticsResponse
       */
      Models::UpdateTableColumnStatisticsResponse updateTableColumnStatisticsWithOptions(const Models::UpdateTableColumnStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates field statistics for a data table.
       *
       * @param request UpdateTableColumnStatisticsRequest
       * @return UpdateTableColumnStatisticsResponse
       */
      Models::UpdateTableColumnStatisticsResponse updateTableColumnStatistics(const Models::UpdateTableColumnStatisticsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
