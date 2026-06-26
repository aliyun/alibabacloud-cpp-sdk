// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DLFNEXT20250310_HPP_
#define ALIBABACLOUD_DLFNEXT20250310_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DlfNext20250310Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DlfNext20250310.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Updates a catalog.
       *
       * @param request AlterCatalogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterCatalogResponse
       */
      Models::AlterCatalogResponse alterCatalogWithOptions(const string &catalog, const Models::AlterCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a catalog.
       *
       * @param request AlterCatalogRequest
       * @return AlterCatalogResponse
       */
      Models::AlterCatalogResponse alterCatalog(const string &catalog, const Models::AlterCatalogRequest &request);

      /**
       * @summary Updates a database.
       *
       * @param request AlterDatabaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterDatabaseResponse
       */
      Models::AlterDatabaseResponse alterDatabaseWithOptions(const string &catalogId, const string &database, const Models::AlterDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a database.
       *
       * @param request AlterDatabaseRequest
       * @return AlterDatabaseResponse
       */
      Models::AlterDatabaseResponse alterDatabase(const string &catalogId, const string &database, const Models::AlterDatabaseRequest &request);

      /**
       * @summary Updates a sink.
       *
       * @param request AlterReceiverRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterReceiverResponse
       */
      Models::AlterReceiverResponse alterReceiverWithOptions(const string &receiver, const Models::AlterReceiverRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a sink.
       *
       * @param request AlterReceiverRequest
       * @return AlterReceiverResponse
       */
      Models::AlterReceiverResponse alterReceiver(const string &receiver, const Models::AlterReceiverRequest &request);

      /**
       * @summary Updates a share.
       *
       * @param request AlterShareRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterShareResponse
       */
      Models::AlterShareResponse alterShareWithOptions(const string &share, const Models::AlterShareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a share.
       *
       * @param request AlterShareRequest
       * @return AlterShareResponse
       */
      Models::AlterShareResponse alterShare(const string &share, const Models::AlterShareRequest &request);

      /**
       * @summary Updates the receivers of a share.
       *
       * @param request AlterShareReceiversRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterShareReceiversResponse
       */
      Models::AlterShareReceiversResponse alterShareReceiversWithOptions(const string &share, const Models::AlterShareReceiversRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the receivers of a share.
       *
       * @param request AlterShareReceiversRequest
       * @return AlterShareReceiversResponse
       */
      Models::AlterShareReceiversResponse alterShareReceivers(const string &share, const Models::AlterShareReceiversRequest &request);

      /**
       * @summary Modifies shared resources.
       *
       * @param request AlterShareResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterShareResourcesResponse
       */
      Models::AlterShareResourcesResponse alterShareResourcesWithOptions(const string &share, const Models::AlterShareResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies shared resources.
       *
       * @param request AlterShareResourcesRequest
       * @return AlterShareResourcesResponse
       */
      Models::AlterShareResourcesResponse alterShareResources(const string &share, const Models::AlterShareResourcesRequest &request);

      /**
       * @summary Updates a table.
       *
       * @param request AlterTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterTableResponse
       */
      Models::AlterTableResponse alterTableWithOptions(const string &catalogId, const string &database, const string &table, const Models::AlterTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a table.
       *
       * @param request AlterTableRequest
       * @return AlterTableResponse
       */
      Models::AlterTableResponse alterTable(const string &catalogId, const string &database, const string &table, const Models::AlterTableRequest &request);

      /**
       * @summary Changes the table schema.
       *
       * @param request AlterTableSchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterTableSchemaResponse
       */
      Models::AlterTableSchemaResponse alterTableSchemaWithOptions(const string &catalogId, const string &database, const string &table, const Models::AlterTableSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the table schema.
       *
       * @param request AlterTableSchemaRequest
       * @return AlterTableSchemaResponse
       */
      Models::AlterTableSchemaResponse alterTableSchema(const string &catalogId, const string &database, const string &table, const Models::AlterTableSchemaRequest &request);

      /**
       * @summary Grants permissions to one or more DLF users or roles.
       *
       * @param request BatchGrantPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGrantPermissionsResponse
       */
      Models::BatchGrantPermissionsResponse batchGrantPermissionsWithOptions(const string &catalogId, const Models::BatchGrantPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to one or more DLF users or roles.
       *
       * @param request BatchGrantPermissionsRequest
       * @return BatchGrantPermissionsResponse
       */
      Models::BatchGrantPermissionsResponse batchGrantPermissions(const string &catalogId, const Models::BatchGrantPermissionsRequest &request);

      /**
       * @summary Revokes permissions in a batch.
       *
       * @param request BatchRevokePermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRevokePermissionsResponse
       */
      Models::BatchRevokePermissionsResponse batchRevokePermissionsWithOptions(const string &catalogId, const Models::BatchRevokePermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions in a batch.
       *
       * @param request BatchRevokePermissionsRequest
       * @return BatchRevokePermissionsResponse
       */
      Models::BatchRevokePermissionsResponse batchRevokePermissions(const string &catalogId, const Models::BatchRevokePermissionsRequest &request);

      /**
       * @summary Creates a catalog.
       *
       * @param request CreateCatalogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCatalogResponse
       */
      Models::CreateCatalogResponse createCatalogWithOptions(const Models::CreateCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a catalog.
       *
       * @param request CreateCatalogRequest
       * @return CreateCatalogResponse
       */
      Models::CreateCatalogResponse createCatalog(const Models::CreateCatalogRequest &request);

      /**
       * @summary Creates a database.
       *
       * @param request CreateDatabaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabaseWithOptions(const string &catalogId, const Models::CreateDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database.
       *
       * @param request CreateDatabaseRequest
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabase(const string &catalogId, const Models::CreateDatabaseRequest &request);

      /**
       * @summary Creates a receiver.
       *
       * @param request CreateReceiverRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReceiverResponse
       */
      Models::CreateReceiverResponse createReceiverWithOptions(const Models::CreateReceiverRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a receiver.
       *
       * @param request CreateReceiverRequest
       * @return CreateReceiverResponse
       */
      Models::CreateReceiverResponse createReceiver(const Models::CreateReceiverRequest &request);

      /**
       * @summary Creates a DLF role.
       *
       * @param request CreateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const Models::CreateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a DLF role.
       *
       * @param request CreateRoleRequest
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRole(const Models::CreateRoleRequest &request);

      /**
       * @summary Creates a share.
       *
       * @param request CreateShareRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateShareResponse
       */
      Models::CreateShareResponse createShareWithOptions(const Models::CreateShareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a share.
       *
       * @param request CreateShareRequest
       * @return CreateShareResponse
       */
      Models::CreateShareResponse createShare(const Models::CreateShareRequest &request);

      /**
       * @summary Creates a table.
       *
       * @param request CreateTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTableResponse
       */
      Models::CreateTableResponse createTableWithOptions(const string &catalogId, const string &database, const Models::CreateTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a table.
       *
       * @param request CreateTableRequest
       * @return CreateTableResponse
       */
      Models::CreateTableResponse createTable(const string &catalogId, const string &database, const Models::CreateTableRequest &request);

      /**
       * @summary Deletes a DLF role.
       *
       * @param request DeleteRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const Models::DeleteRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DLF role.
       *
       * @param request DeleteRoleRequest
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRole(const Models::DeleteRoleRequest &request);

      /**
       * @summary Retrieves the regions where DLF is activated.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the regions where DLF is activated.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Deletes a data lake data catalog. The following conditions must be met, otherwise the deletion will fail: all tables and user-created databases under the catalog have been deleted; the databases and tables have been deleted for at least 24 hours.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropCatalogResponse
       */
      Models::DropCatalogResponse dropCatalogWithOptions(const string &catalog, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data lake data catalog. The following conditions must be met, otherwise the deletion will fail: all tables and user-created databases under the catalog have been deleted; the databases and tables have been deleted for at least 24 hours.
       *
       * @return DropCatalogResponse
       */
      Models::DropCatalogResponse dropCatalog(const string &catalog);

      /**
       * @summary Drops a database.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropDatabaseResponse
       */
      Models::DropDatabaseResponse dropDatabaseWithOptions(const string &catalogId, const string &database, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Drops a database.
       *
       * @return DropDatabaseResponse
       */
      Models::DropDatabaseResponse dropDatabase(const string &catalogId, const string &database);

      /**
       * @summary Removes a receiver.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropReceiverResponse
       */
      Models::DropReceiverResponse dropReceiverWithOptions(const string &receiver, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a receiver.
       *
       * @return DropReceiverResponse
       */
      Models::DropReceiverResponse dropReceiver(const string &receiver);

      /**
       * @summary Deletes a share.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropShareResponse
       */
      Models::DropShareResponse dropShareWithOptions(const string &share, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a share.
       *
       * @return DropShareResponse
       */
      Models::DropShareResponse dropShare(const string &share);

      /**
       * @summary Drops a table.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropTableResponse
       */
      Models::DropTableResponse dropTableWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Drops a table.
       *
       * @return DropTableResponse
       */
      Models::DropTableResponse dropTable(const string &catalogId, const string &database, const string &table);

      /**
       * @summary Retrieves the details of a catalog.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogResponse
       */
      Models::GetCatalogResponse getCatalogWithOptions(const string &catalog, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a catalog.
       *
       * @return GetCatalogResponse
       */
      Models::GetCatalogResponse getCatalog(const string &catalog);

      /**
       * @summary Retrieves the details of a catalog.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogByIdResponse
       */
      Models::GetCatalogByIdResponse getCatalogByIdWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a catalog.
       *
       * @return GetCatalogByIdResponse
       */
      Models::GetCatalogByIdResponse getCatalogById(const string &id);

      /**
       * @summary Retrieves the storage overview of a data catalog.
       *
       * @param request GetCatalogSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogSummaryResponse
       */
      Models::GetCatalogSummaryResponse getCatalogSummaryWithOptions(const string &catalogId, const Models::GetCatalogSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the storage overview of a data catalog.
       *
       * @param request GetCatalogSummaryRequest
       * @return GetCatalogSummaryResponse
       */
      Models::GetCatalogSummaryResponse getCatalogSummary(const string &catalogId, const Models::GetCatalogSummaryRequest &request);

      /**
       * @summary Retrieves the storage overview trend for a catalog.
       *
       * @param request GetCatalogSummaryTrendRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogSummaryTrendResponse
       */
      Models::GetCatalogSummaryTrendResponse getCatalogSummaryTrendWithOptions(const string &catalogId, const Models::GetCatalogSummaryTrendRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the storage overview trend for a catalog.
       *
       * @param request GetCatalogSummaryTrendRequest
       * @return GetCatalogSummaryTrendResponse
       */
      Models::GetCatalogSummaryTrendResponse getCatalogSummaryTrend(const string &catalogId, const Models::GetCatalogSummaryTrendRequest &request);

      /**
       * @summary Obtains a temporary access credential (token) for a catalog.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogTokenResponse
       */
      Models::GetCatalogTokenResponse getCatalogTokenWithOptions(const string &catalog, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a temporary access credential (token) for a catalog.
       *
       * @return GetCatalogTokenResponse
       */
      Models::GetCatalogTokenResponse getCatalogToken(const string &catalog);

      /**
       * @summary Retrieves the details of a database.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabaseWithOptions(const string &catalogId, const string &database, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a database.
       *
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabase(const string &catalogId, const string &database);

      /**
       * @summary You can view an inventory overview.
       *
       * @param request GetDatabaseSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseSummaryResponse
       */
      Models::GetDatabaseSummaryResponse getDatabaseSummaryWithOptions(const string &catalogId, const string &database, const Models::GetDatabaseSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can view an inventory overview.
       *
       * @param request GetDatabaseSummaryRequest
       * @return GetDatabaseSummaryResponse
       */
      Models::GetDatabaseSummaryResponse getDatabaseSummary(const string &catalogId, const string &database, const Models::GetDatabaseSummaryRequest &request);

      /**
       * @summary Retrieves information about an Iceberg namespace.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIcebergNamespaceResponse
       */
      Models::GetIcebergNamespaceResponse getIcebergNamespaceWithOptions(const string &catalogId, const string &_namespace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about an Iceberg namespace.
       *
       * @return GetIcebergNamespaceResponse
       */
      Models::GetIcebergNamespaceResponse getIcebergNamespace(const string &catalogId, const string &_namespace);

      /**
       * @summary Retrieves the details of a table.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIcebergTableResponse
       */
      Models::GetIcebergTableResponse getIcebergTableWithOptions(const string &catalogId, const string &_namespace, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a table.
       *
       * @return GetIcebergTableResponse
       */
      Models::GetIcebergTableResponse getIcebergTable(const string &catalogId, const string &_namespace, const string &table);

      /**
       * @summary Retrieves a receiver.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReceiverResponse
       */
      Models::GetReceiverResponse getReceiverWithOptions(const string &receiver, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a receiver.
       *
       * @return GetReceiverResponse
       */
      Models::GetReceiverResponse getReceiver(const string &receiver);

      /**
       * @summary Queries the DLF activation status of in a region.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegionStatusResponse
       */
      Models::GetRegionStatusResponse getRegionStatusWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DLF activation status of in a region.
       *
       * @return GetRegionStatusResponse
       */
      Models::GetRegionStatusResponse getRegionStatus();

      /**
       * @summary Retrieves a role.
       *
       * @param request GetRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRoleWithOptions(const Models::GetRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a role.
       *
       * @param request GetRoleRequest
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRole(const Models::GetRoleRequest &request);

      /**
       * @summary Retrieves the details of a share.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetShareResponse
       */
      Models::GetShareResponse getShareWithOptions(const string &share, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a share.
       *
       * @return GetShareResponse
       */
      Models::GetShareResponse getShare(const string &share);

      /**
       * @summary Retrieves the details of a table in a data lake.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableResponse
       */
      Models::GetTableResponse getTableWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a table in a data lake.
       *
       * @return GetTableResponse
       */
      Models::GetTableResponse getTable(const string &catalogId, const string &database, const string &table);

      /**
       * @summary Retrieves the compaction details of a table.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableCompactionResponse
       */
      Models::GetTableCompactionResponse getTableCompactionWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the compaction details of a table.
       *
       * @return GetTableCompactionResponse
       */
      Models::GetTableCompactionResponse getTableCompaction(const string &catalogId, const string &database, const string &table);

      /**
       * @summary Queries a table snapshot.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableSnapshotResponse
       */
      Models::GetTableSnapshotResponse getTableSnapshotWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a table snapshot.
       *
       * @return GetTableSnapshotResponse
       */
      Models::GetTableSnapshotResponse getTableSnapshot(const string &catalogId, const string &database, const string &table);

      /**
       * @summary Retrieves the storage summary for a table.
       *
       * @param request GetTableSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableSummaryResponse
       */
      Models::GetTableSummaryResponse getTableSummaryWithOptions(const string &catalogId, const string &database, const string &table, const Models::GetTableSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the storage summary for a table.
       *
       * @param request GetTableSummaryRequest
       * @return GetTableSummaryResponse
       */
      Models::GetTableSummaryResponse getTableSummary(const string &catalogId, const string &database, const string &table, const Models::GetTableSummaryRequest &request);

      /**
       * @summary Obtains a temporary access credential for a data lake table.
       *
       * @param request GetTableTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableTokenResponse
       */
      Models::GetTableTokenResponse getTableTokenWithOptions(const string &catalogId, const string &database, const string &table, const Models::GetTableTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a temporary access credential for a data lake table.
       *
       * @param request GetTableTokenRequest
       * @return GetTableTokenResponse
       */
      Models::GetTableTokenResponse getTableToken(const string &catalogId, const string &database, const string &table, const Models::GetTableTokenRequest &request);

      /**
       * @summary Retrieves a user.
       *
       * @param request GetUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a user.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary Obtain the VPC configuration.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpcConfigResponse
       */
      Models::GetVpcConfigResponse getVpcConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the VPC configuration.
       *
       * @return GetVpcConfigResponse
       */
      Models::GetVpcConfigResponse getVpcConfig();

      /**
       * @summary Grants a role to one or more users.
       *
       * @param request GrantRoleToUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantRoleToUsersResponse
       */
      Models::GrantRoleToUsersResponse grantRoleToUsersWithOptions(const Models::GrantRoleToUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a role to one or more users.
       *
       * @param request GrantRoleToUsersRequest
       * @return GrantRoleToUsersResponse
       */
      Models::GrantRoleToUsersResponse grantRoleToUsers(const Models::GrantRoleToUsersRequest &request);

      /**
       * @summary Lists catalogs.
       *
       * @param request ListCatalogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogsWithOptions(const Models::ListCatalogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists catalogs.
       *
       * @param request ListCatalogsRequest
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogs(const Models::ListCatalogsRequest &request);

      /**
       * @summary Retrieves database details.
       *
       * @param request ListDatabaseDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabaseDetailsResponse
       */
      Models::ListDatabaseDetailsResponse listDatabaseDetailsWithOptions(const string &catalogId, const Models::ListDatabaseDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves database details.
       *
       * @param request ListDatabaseDetailsRequest
       * @return ListDatabaseDetailsResponse
       */
      Models::ListDatabaseDetailsResponse listDatabaseDetails(const string &catalogId, const Models::ListDatabaseDetailsRequest &request);

      /**
       * @summary Retrieves databases.
       *
       * @param request ListDatabasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabasesWithOptions(const string &catalogId, const Models::ListDatabasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves databases.
       *
       * @param request ListDatabasesRequest
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabases(const string &catalogId, const Models::ListDatabasesRequest &request);

      /**
       * @summary Lists functions.
       *
       * @param request ListFunctionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctionsWithOptions(const string &catalogId, const string &database, const Models::ListFunctionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists functions.
       *
       * @param request ListFunctionsRequest
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctions(const string &catalogId, const string &database, const Models::ListFunctionsRequest &request);

      /**
       * @summary Lists Iceberg namespaces.
       *
       * @param request ListIcebergNamespaceDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIcebergNamespaceDetailsResponse
       */
      Models::ListIcebergNamespaceDetailsResponse listIcebergNamespaceDetailsWithOptions(const string &catalogId, const Models::ListIcebergNamespaceDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists Iceberg namespaces.
       *
       * @param request ListIcebergNamespaceDetailsRequest
       * @return ListIcebergNamespaceDetailsResponse
       */
      Models::ListIcebergNamespaceDetailsResponse listIcebergNamespaceDetails(const string &catalogId, const Models::ListIcebergNamespaceDetailsRequest &request);

      /**
       * @summary Lists the snapshots of an Iceberg table.
       *
       * @param request ListIcebergSnapshotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIcebergSnapshotsResponse
       */
      Models::ListIcebergSnapshotsResponse listIcebergSnapshotsWithOptions(const string &catalogId, const string &_namespace, const string &table, const Models::ListIcebergSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the snapshots of an Iceberg table.
       *
       * @param request ListIcebergSnapshotsRequest
       * @return ListIcebergSnapshotsResponse
       */
      Models::ListIcebergSnapshotsResponse listIcebergSnapshots(const string &catalogId, const string &_namespace, const string &table, const Models::ListIcebergSnapshotsRequest &request);

      /**
       * @summary Lists the details of Iceberg tables.
       *
       * @param request ListIcebergTableDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIcebergTableDetailsResponse
       */
      Models::ListIcebergTableDetailsResponse listIcebergTableDetailsWithOptions(const string &catalogId, const string &_namespace, const Models::ListIcebergTableDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the details of Iceberg tables.
       *
       * @param request ListIcebergTableDetailsRequest
       * @return ListIcebergTableDetailsResponse
       */
      Models::ListIcebergTableDetailsResponse listIcebergTableDetails(const string &catalogId, const string &_namespace, const Models::ListIcebergTableDetailsRequest &request);

      /**
       * @summary Retrieves storage overview for partitions.
       *
       * @param request ListPartitionSummariesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionSummariesResponse
       */
      Models::ListPartitionSummariesResponse listPartitionSummariesWithOptions(const string &catalogId, const string &database, const string &table, const Models::ListPartitionSummariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves storage overview for partitions.
       *
       * @param request ListPartitionSummariesRequest
       * @return ListPartitionSummariesResponse
       */
      Models::ListPartitionSummariesResponse listPartitionSummaries(const string &catalogId, const string &database, const string &table, const Models::ListPartitionSummariesRequest &request);

      /**
       * @summary Lists partitions.
       *
       * @param request ListPartitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionsResponse
       */
      Models::ListPartitionsResponse listPartitionsWithOptions(const string &catalogId, const string &database, const string &table, const Models::ListPartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists partitions.
       *
       * @param request ListPartitionsRequest
       * @return ListPartitionsResponse
       */
      Models::ListPartitionsResponse listPartitions(const string &catalogId, const string &database, const string &table, const Models::ListPartitionsRequest &request);

      /**
       * @summary Retrieves a list of partitions by their names.
       *
       * @param request ListPartitionsByNamesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionsByNamesResponse
       */
      Models::ListPartitionsByNamesResponse listPartitionsByNamesWithOptions(const string &catalogId, const string &database, const string &table, const Models::ListPartitionsByNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of partitions by their names.
       *
       * @param request ListPartitionsByNamesRequest
       * @return ListPartitionsByNamesResponse
       */
      Models::ListPartitionsByNamesResponse listPartitionsByNames(const string &catalogId, const string &database, const string &table, const Models::ListPartitionsByNamesRequest &request);

      /**
       * @summary Retrieves the permissions for a resource or principal.
       *
       * @param request ListPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissionsWithOptions(const string &catalogId, const Models::ListPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the permissions for a resource or principal.
       *
       * @param request ListPermissionsRequest
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissions(const string &catalogId, const Models::ListPermissionsRequest &request);

      /**
       * @summary Retrieves shares.
       *
       * @param request ListProvidedSharesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProvidedSharesResponse
       */
      Models::ListProvidedSharesResponse listProvidedSharesWithOptions(const Models::ListProvidedSharesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves shares.
       *
       * @param request ListProvidedSharesRequest
       * @return ListProvidedSharesResponse
       */
      Models::ListProvidedSharesResponse listProvidedShares(const Models::ListProvidedSharesRequest &request);

      /**
       * @summary Retrieves received shares.
       *
       * @param request ListReceivedSharesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReceivedSharesResponse
       */
      Models::ListReceivedSharesResponse listReceivedSharesWithOptions(const Models::ListReceivedSharesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves received shares.
       *
       * @param request ListReceivedSharesRequest
       * @return ListReceivedSharesResponse
       */
      Models::ListReceivedSharesResponse listReceivedShares(const Models::ListReceivedSharesRequest &request);

      /**
       * @summary Queries a list of receivers.
       *
       * @param request ListReceiversRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReceiversResponse
       */
      Models::ListReceiversResponse listReceiversWithOptions(const Models::ListReceiversRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of receivers.
       *
       * @param request ListReceiversRequest
       * @return ListReceiversResponse
       */
      Models::ListReceiversResponse listReceivers(const Models::ListReceiversRequest &request);

      /**
       * @summary Retrieves the users for a role.
       *
       * @param request ListRoleUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoleUsersResponse
       */
      Models::ListRoleUsersResponse listRoleUsersWithOptions(const Models::ListRoleUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the users for a role.
       *
       * @param request ListRoleUsersRequest
       * @return ListRoleUsersResponse
       */
      Models::ListRoleUsersResponse listRoleUsers(const Models::ListRoleUsersRequest &request);

      /**
       * @summary Retrieves roles.
       *
       * @param request ListRolesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves roles.
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary Gets the receivers of a share.
       *
       * @param request ListShareReceiversRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListShareReceiversResponse
       */
      Models::ListShareReceiversResponse listShareReceiversWithOptions(const string &share, const Models::ListShareReceiversRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the receivers of a share.
       *
       * @param request ListShareReceiversRequest
       * @return ListShareReceiversResponse
       */
      Models::ListShareReceiversResponse listShareReceivers(const string &share, const Models::ListShareReceiversRequest &request);

      /**
       * @summary Retrieves shared resources.
       *
       * @param request ListShareResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListShareResourcesResponse
       */
      Models::ListShareResourcesResponse listShareResourcesWithOptions(const string &share, const Models::ListShareResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves shared resources.
       *
       * @param request ListShareResourcesRequest
       * @return ListShareResourcesResponse
       */
      Models::ListShareResourcesResponse listShareResources(const string &share, const Models::ListShareResourcesRequest &request);

      /**
       * @summary Returns a list of table snapshots.
       *
       * @param request ListSnapshotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshotsWithOptions(const string &catalogId, const string &database, const string &table, const Models::ListSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of table snapshots.
       *
       * @param request ListSnapshotsRequest
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshots(const string &catalogId, const string &database, const string &table, const Models::ListSnapshotsRequest &request);

      /**
       * @summary Lists the details of one or more tables.
       *
       * @param request ListTableDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableDetailsResponse
       */
      Models::ListTableDetailsResponse listTableDetailsWithOptions(const string &catalogId, const string &database, const Models::ListTableDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the details of one or more tables.
       *
       * @param request ListTableDetailsRequest
       * @return ListTableDetailsResponse
       */
      Models::ListTableDetailsResponse listTableDetails(const string &catalogId, const string &database, const Models::ListTableDetailsRequest &request);

      /**
       * @summary Retrieves a list of tables.
       *
       * @param request ListTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const string &catalogId, const string &database, const Models::ListTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of tables.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const string &catalogId, const string &database, const Models::ListTablesRequest &request);

      /**
       * @summary Retrieves the roles assigned to a user.
       *
       * @param request ListUserRolesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserRolesResponse
       */
      Models::ListUserRolesResponse listUserRolesWithOptions(const Models::ListUserRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the roles assigned to a user.
       *
       * @param request ListUserRolesRequest
       * @return ListUserRolesResponse
       */
      Models::ListUserRolesResponse listUserRoles(const Models::ListUserRolesRequest &request);

      /**
       * @summary Retrieves a list of users.
       *
       * @param request ListUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of users.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Lists the details of one or more views.
       *
       * @param request ListViewDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListViewDetailsResponse
       */
      Models::ListViewDetailsResponse listViewDetailsWithOptions(const string &catalogId, const string &database, const Models::ListViewDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the details of one or more views.
       *
       * @param request ListViewDetailsRequest
       * @return ListViewDetailsResponse
       */
      Models::ListViewDetailsResponse listViewDetails(const string &catalogId, const string &database, const Models::ListViewDetailsRequest &request);

      /**
       * @summary Returns the names of views.
       *
       * @param request ListViewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListViewsResponse
       */
      Models::ListViewsResponse listViewsWithOptions(const string &catalogId, const string &database, const Models::ListViewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the names of views.
       *
       * @param request ListViewsRequest
       * @return ListViewsResponse
       */
      Models::ListViewsResponse listViews(const string &catalogId, const string &database, const Models::ListViewsRequest &request);

      /**
       * @summary Syncs users.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshUserSyncResponse
       */
      Models::RefreshUserSyncResponse refreshUserSyncWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Syncs users.
       *
       * @return RefreshUserSyncResponse
       */
      Models::RefreshUserSyncResponse refreshUserSync();

      /**
       * @summary Revokes a role from one or more users.
       *
       * @param request RevokeRoleFromUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeRoleFromUsersResponse
       */
      Models::RevokeRoleFromUsersResponse revokeRoleFromUsersWithOptions(const Models::RevokeRoleFromUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes a role from one or more users.
       *
       * @param request RevokeRoleFromUsersRequest
       * @return RevokeRoleFromUsersResponse
       */
      Models::RevokeRoleFromUsersResponse revokeRoleFromUsers(const Models::RevokeRoleFromUsersRequest &request);

      /**
       * @summary Rolls back a table.
       *
       * @param request RollbackTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackTableResponse
       */
      Models::RollbackTableResponse rollbackTableWithOptions(const string &catalogId, const string &database, const string &table, const Models::RollbackTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a table.
       *
       * @param request RollbackTableRequest
       * @return RollbackTableResponse
       */
      Models::RollbackTableResponse rollbackTable(const string &catalogId, const string &database, const string &table, const Models::RollbackTableRequest &request);

      /**
       * @summary Subscribes to DLF in the current region.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribeResponse
       */
      Models::SubscribeResponse subscribeWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Subscribes to DLF in the current region.
       *
       * @return SubscribeResponse
       */
      Models::SubscribeResponse subscribe();

      /**
       * @summary Updates a DLF role.
       *
       * @param request UpdateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRoleWithOptions(const Models::UpdateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a DLF role.
       *
       * @param request UpdateRoleRequest
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRole(const Models::UpdateRoleRequest &request);

      /**
       * @summary Updates the users for a role.
       *
       * @param request UpdateRoleUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleUsersResponse
       */
      Models::UpdateRoleUsersResponse updateRoleUsersWithOptions(const Models::UpdateRoleUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the users for a role.
       *
       * @param request UpdateRoleUsersRequest
       * @return UpdateRoleUsersResponse
       */
      Models::UpdateRoleUsersResponse updateRoleUsers(const Models::UpdateRoleUsersRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
