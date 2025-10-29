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
       * @summary 更新数据目录
       *
       * @param request AlterCatalogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterCatalogResponse
       */
      Models::AlterCatalogResponse alterCatalogWithOptions(const string &catalog, const Models::AlterCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据目录
       *
       * @param request AlterCatalogRequest
       * @return AlterCatalogResponse
       */
      Models::AlterCatalogResponse alterCatalog(const string &catalog, const Models::AlterCatalogRequest &request);

      /**
       * @summary 更新数据库
       *
       * @param request AlterDatabaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterDatabaseResponse
       */
      Models::AlterDatabaseResponse alterDatabaseWithOptions(const string &catalogId, const string &database, const Models::AlterDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据库
       *
       * @param request AlterDatabaseRequest
       * @return AlterDatabaseResponse
       */
      Models::AlterDatabaseResponse alterDatabase(const string &catalogId, const string &database, const Models::AlterDatabaseRequest &request);

      /**
       * @summary 更新接收者
       *
       * @param request AlterReceiverRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterReceiverResponse
       */
      Models::AlterReceiverResponse alterReceiverWithOptions(const string &receiver, const Models::AlterReceiverRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新接收者
       *
       * @param request AlterReceiverRequest
       * @return AlterReceiverResponse
       */
      Models::AlterReceiverResponse alterReceiver(const string &receiver, const Models::AlterReceiverRequest &request);

      /**
       * @summary 更新共享
       *
       * @param request AlterShareRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterShareResponse
       */
      Models::AlterShareResponse alterShareWithOptions(const string &share, const Models::AlterShareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新共享
       *
       * @param request AlterShareRequest
       * @return AlterShareResponse
       */
      Models::AlterShareResponse alterShare(const string &share, const Models::AlterShareRequest &request);

      /**
       * @summary 更新共享中的接收者
       *
       * @param request AlterShareReceiversRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterShareReceiversResponse
       */
      Models::AlterShareReceiversResponse alterShareReceiversWithOptions(const string &share, const Models::AlterShareReceiversRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新共享中的接收者
       *
       * @param request AlterShareReceiversRequest
       * @return AlterShareReceiversResponse
       */
      Models::AlterShareReceiversResponse alterShareReceivers(const string &share, const Models::AlterShareReceiversRequest &request);

      /**
       * @summary 更改共享资源
       *
       * @param request AlterShareResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterShareResourcesResponse
       */
      Models::AlterShareResourcesResponse alterShareResourcesWithOptions(const string &share, const Models::AlterShareResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更改共享资源
       *
       * @param request AlterShareResourcesRequest
       * @return AlterShareResourcesResponse
       */
      Models::AlterShareResourcesResponse alterShareResources(const string &share, const Models::AlterShareResourcesRequest &request);

      /**
       * @summary 更改Table
       *
       * @param request AlterTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterTableResponse
       */
      Models::AlterTableResponse alterTableWithOptions(const string &catalogId, const string &database, const string &table, const Models::AlterTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更改Table
       *
       * @param request AlterTableRequest
       * @return AlterTableResponse
       */
      Models::AlterTableResponse alterTable(const string &catalogId, const string &database, const string &table, const Models::AlterTableRequest &request);

      /**
       * @summary 批量授权
       *
       * @param request BatchGrantPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGrantPermissionsResponse
       */
      Models::BatchGrantPermissionsResponse batchGrantPermissionsWithOptions(const string &catalogId, const Models::BatchGrantPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量授权
       *
       * @param request BatchGrantPermissionsRequest
       * @return BatchGrantPermissionsResponse
       */
      Models::BatchGrantPermissionsResponse batchGrantPermissions(const string &catalogId, const Models::BatchGrantPermissionsRequest &request);

      /**
       * @summary 批量取消授权
       *
       * @param request BatchRevokePermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRevokePermissionsResponse
       */
      Models::BatchRevokePermissionsResponse batchRevokePermissionsWithOptions(const string &catalogId, const Models::BatchRevokePermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量取消授权
       *
       * @param request BatchRevokePermissionsRequest
       * @return BatchRevokePermissionsResponse
       */
      Models::BatchRevokePermissionsResponse batchRevokePermissions(const string &catalogId, const Models::BatchRevokePermissionsRequest &request);

      /**
       * @summary 创建数据目录
       *
       * @param request CreateCatalogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCatalogResponse
       */
      Models::CreateCatalogResponse createCatalogWithOptions(const Models::CreateCatalogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据目录
       *
       * @param request CreateCatalogRequest
       * @return CreateCatalogResponse
       */
      Models::CreateCatalogResponse createCatalog(const Models::CreateCatalogRequest &request);

      /**
       * @summary 创建数据库
       *
       * @param request CreateDatabaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabaseWithOptions(const string &catalogId, const Models::CreateDatabaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据库
       *
       * @param request CreateDatabaseRequest
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabase(const string &catalogId, const Models::CreateDatabaseRequest &request);

      /**
       * @summary 创建接收者
       *
       * @param request CreateReceiverRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReceiverResponse
       */
      Models::CreateReceiverResponse createReceiverWithOptions(const Models::CreateReceiverRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建接收者
       *
       * @param request CreateReceiverRequest
       * @return CreateReceiverResponse
       */
      Models::CreateReceiverResponse createReceiver(const Models::CreateReceiverRequest &request);

      /**
       * @summary 创建角色
       *
       * @param request CreateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const Models::CreateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建角色
       *
       * @param request CreateRoleRequest
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRole(const Models::CreateRoleRequest &request);

      /**
       * @summary 创建共享
       *
       * @param request CreateShareRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateShareResponse
       */
      Models::CreateShareResponse createShareWithOptions(const Models::CreateShareRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建共享
       *
       * @param request CreateShareRequest
       * @return CreateShareResponse
       */
      Models::CreateShareResponse createShare(const Models::CreateShareRequest &request);

      /**
       * @summary 创建表
       *
       * @param request CreateTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTableResponse
       */
      Models::CreateTableResponse createTableWithOptions(const string &catalogId, const string &database, const Models::CreateTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建表
       *
       * @param request CreateTableRequest
       * @return CreateTableResponse
       */
      Models::CreateTableResponse createTable(const string &catalogId, const string &database, const Models::CreateTableRequest &request);

      /**
       * @summary 删除角色
       *
       * @param request DeleteRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const Models::DeleteRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除角色
       *
       * @param request DeleteRoleRequest
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRole(const Models::DeleteRoleRequest &request);

      /**
       * @summary 查询 DLF 开通地域
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 DLF 开通地域
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary 创建数据湖Catalog
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropCatalogResponse
       */
      Models::DropCatalogResponse dropCatalogWithOptions(const string &catalog, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据湖Catalog
       *
       * @return DropCatalogResponse
       */
      Models::DropCatalogResponse dropCatalog(const string &catalog);

      /**
       * @summary 删除数据库
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropDatabaseResponse
       */
      Models::DropDatabaseResponse dropDatabaseWithOptions(const string &catalogId, const string &database, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据库
       *
       * @return DropDatabaseResponse
       */
      Models::DropDatabaseResponse dropDatabase(const string &catalogId, const string &database);

      /**
       * @summary 删除接收者
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropReceiverResponse
       */
      Models::DropReceiverResponse dropReceiverWithOptions(const string &receiver, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除接收者
       *
       * @return DropReceiverResponse
       */
      Models::DropReceiverResponse dropReceiver(const string &receiver);

      /**
       * @summary 删除共享
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropShareResponse
       */
      Models::DropShareResponse dropShareWithOptions(const string &share, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除共享
       *
       * @return DropShareResponse
       */
      Models::DropShareResponse dropShare(const string &share);

      /**
       * @summary 删除表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropTableResponse
       */
      Models::DropTableResponse dropTableWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除表
       *
       * @return DropTableResponse
       */
      Models::DropTableResponse dropTable(const string &catalogId, const string &database, const string &table);

      /**
       * @summary 查看数据湖Catalog
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogResponse
       */
      Models::GetCatalogResponse getCatalogWithOptions(const string &catalog, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看数据湖Catalog
       *
       * @return GetCatalogResponse
       */
      Models::GetCatalogResponse getCatalog(const string &catalog);

      /**
       * @summary 查看数据湖Catalog
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogByIdResponse
       */
      Models::GetCatalogByIdResponse getCatalogByIdWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看数据湖Catalog
       *
       * @return GetCatalogByIdResponse
       */
      Models::GetCatalogByIdResponse getCatalogById(const string &id);

      /**
       * @summary 查看表
       *
       * @param request GetCatalogSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogSummaryResponse
       */
      Models::GetCatalogSummaryResponse getCatalogSummaryWithOptions(const string &catalogId, const Models::GetCatalogSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表
       *
       * @param request GetCatalogSummaryRequest
       * @return GetCatalogSummaryResponse
       */
      Models::GetCatalogSummaryResponse getCatalogSummary(const string &catalogId, const Models::GetCatalogSummaryRequest &request);

      /**
       * @summary 查看表
       *
       * @param request GetCatalogSummaryTrendRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogSummaryTrendResponse
       */
      Models::GetCatalogSummaryTrendResponse getCatalogSummaryTrendWithOptions(const string &catalogId, const Models::GetCatalogSummaryTrendRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表
       *
       * @param request GetCatalogSummaryTrendRequest
       * @return GetCatalogSummaryTrendResponse
       */
      Models::GetCatalogSummaryTrendResponse getCatalogSummaryTrend(const string &catalogId, const Models::GetCatalogSummaryTrendRequest &request);

      /**
       * @summary 获取数据湖Catalog的临时访问凭证
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogTokenResponse
       */
      Models::GetCatalogTokenResponse getCatalogTokenWithOptions(const string &catalog, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖Catalog的临时访问凭证
       *
       * @return GetCatalogTokenResponse
       */
      Models::GetCatalogTokenResponse getCatalogToken(const string &catalog);

      /**
       * @summary 查看数据库
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabaseWithOptions(const string &catalogId, const string &database, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看数据库
       *
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabase(const string &catalogId, const string &database);

      /**
       * @summary 查看表
       *
       * @param request GetDatabaseSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseSummaryResponse
       */
      Models::GetDatabaseSummaryResponse getDatabaseSummaryWithOptions(const string &catalogId, const string &database, const Models::GetDatabaseSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表
       *
       * @param request GetDatabaseSummaryRequest
       * @return GetDatabaseSummaryResponse
       */
      Models::GetDatabaseSummaryResponse getDatabaseSummary(const string &catalogId, const string &database, const Models::GetDatabaseSummaryRequest &request);

      /**
       * @summary 查看iceberg数据库
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIcebergNamespaceResponse
       */
      Models::GetIcebergNamespaceResponse getIcebergNamespaceWithOptions(const string &catalogId, const string &_namespace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看iceberg数据库
       *
       * @return GetIcebergNamespaceResponse
       */
      Models::GetIcebergNamespaceResponse getIcebergNamespace(const string &catalogId, const string &_namespace);

      /**
       * @summary 查看表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIcebergTableResponse
       */
      Models::GetIcebergTableResponse getIcebergTableWithOptions(const string &catalogId, const string &_namespace, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表
       *
       * @return GetIcebergTableResponse
       */
      Models::GetIcebergTableResponse getIcebergTable(const string &catalogId, const string &_namespace, const string &table);

      /**
       * @summary 获取接收者
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReceiverResponse
       */
      Models::GetReceiverResponse getReceiverWithOptions(const string &receiver, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取接收者
       *
       * @return GetReceiverResponse
       */
      Models::GetReceiverResponse getReceiver(const string &receiver);

      /**
       * @summary 查询 DLF 当前地域开通状态
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegionStatusResponse
       */
      Models::GetRegionStatusResponse getRegionStatusWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 DLF 当前地域开通状态
       *
       * @return GetRegionStatusResponse
       */
      Models::GetRegionStatusResponse getRegionStatus();

      /**
       * @summary 获取角色
       *
       * @param request GetRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRoleWithOptions(const Models::GetRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取角色
       *
       * @param request GetRoleRequest
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRole(const Models::GetRoleRequest &request);

      /**
       * @summary 获取共享
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetShareResponse
       */
      Models::GetShareResponse getShareWithOptions(const string &share, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取共享
       *
       * @return GetShareResponse
       */
      Models::GetShareResponse getShare(const string &share);

      /**
       * @summary 查看表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableResponse
       */
      Models::GetTableResponse getTableWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表
       *
       * @return GetTableResponse
       */
      Models::GetTableResponse getTable(const string &catalogId, const string &database, const string &table);

      /**
       * @summary 查看表Compaction详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableCompactionResponse
       */
      Models::GetTableCompactionResponse getTableCompactionWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表Compaction详情
       *
       * @return GetTableCompactionResponse
       */
      Models::GetTableCompactionResponse getTableCompaction(const string &catalogId, const string &database, const string &table);

      /**
       * @summary 查看表快照
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableSnapshotResponse
       */
      Models::GetTableSnapshotResponse getTableSnapshotWithOptions(const string &catalogId, const string &database, const string &table, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表快照
       *
       * @return GetTableSnapshotResponse
       */
      Models::GetTableSnapshotResponse getTableSnapshot(const string &catalogId, const string &database, const string &table);

      /**
       * @summary 查看表
       *
       * @param request GetTableSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableSummaryResponse
       */
      Models::GetTableSummaryResponse getTableSummaryWithOptions(const string &catalogId, const string &database, const string &table, const Models::GetTableSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表
       *
       * @param request GetTableSummaryRequest
       * @return GetTableSummaryResponse
       */
      Models::GetTableSummaryResponse getTableSummary(const string &catalogId, const string &database, const string &table, const Models::GetTableSummaryRequest &request);

      /**
       * @summary 获取数据湖表的临时访问凭证
       *
       * @param request GetTableTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableTokenResponse
       */
      Models::GetTableTokenResponse getTableTokenWithOptions(const string &catalogId, const string &database, const string &table, const Models::GetTableTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖表的临时访问凭证
       *
       * @param request GetTableTokenRequest
       * @return GetTableTokenResponse
       */
      Models::GetTableTokenResponse getTableToken(const string &catalogId, const string &database, const string &table, const Models::GetTableTokenRequest &request);

      /**
       * @summary 获取用户
       *
       * @param request GetUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary 批量授予角色权限给用户
       *
       * @param request GrantRoleToUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantRoleToUsersResponse
       */
      Models::GrantRoleToUsersResponse grantRoleToUsersWithOptions(const Models::GrantRoleToUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量授予角色权限给用户
       *
       * @param request GrantRoleToUsersRequest
       * @return GrantRoleToUsersResponse
       */
      Models::GrantRoleToUsersResponse grantRoleToUsers(const Models::GrantRoleToUsersRequest &request);

      /**
       * @summary 查看数据目录列表
       *
       * @param request ListCatalogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogsWithOptions(const Models::ListCatalogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看数据目录列表
       *
       * @param request ListCatalogsRequest
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogs(const Models::ListCatalogsRequest &request);

      /**
       * @summary 查看数据库列表
       *
       * @param request ListDatabaseDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabaseDetailsResponse
       */
      Models::ListDatabaseDetailsResponse listDatabaseDetailsWithOptions(const string &catalogId, const Models::ListDatabaseDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看数据库列表
       *
       * @param request ListDatabaseDetailsRequest
       * @return ListDatabaseDetailsResponse
       */
      Models::ListDatabaseDetailsResponse listDatabaseDetails(const string &catalogId, const Models::ListDatabaseDetailsRequest &request);

      /**
       * @summary 查看数据库列表
       *
       * @param request ListDatabasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabasesWithOptions(const string &catalogId, const Models::ListDatabasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看数据库列表
       *
       * @param request ListDatabasesRequest
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabases(const string &catalogId, const Models::ListDatabasesRequest &request);

      /**
       * @summary 查看iceberg数据库列表
       *
       * @param request ListIcebergNamespaceDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIcebergNamespaceDetailsResponse
       */
      Models::ListIcebergNamespaceDetailsResponse listIcebergNamespaceDetailsWithOptions(const string &catalogId, const Models::ListIcebergNamespaceDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看iceberg数据库列表
       *
       * @param request ListIcebergNamespaceDetailsRequest
       * @return ListIcebergNamespaceDetailsResponse
       */
      Models::ListIcebergNamespaceDetailsResponse listIcebergNamespaceDetails(const string &catalogId, const Models::ListIcebergNamespaceDetailsRequest &request);

      /**
       * @summary 查看iceberg表快照列表
       *
       * @param request ListIcebergSnapshotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIcebergSnapshotsResponse
       */
      Models::ListIcebergSnapshotsResponse listIcebergSnapshotsWithOptions(const string &catalogId, const string &_namespace, const string &table, const Models::ListIcebergSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看iceberg表快照列表
       *
       * @param request ListIcebergSnapshotsRequest
       * @return ListIcebergSnapshotsResponse
       */
      Models::ListIcebergSnapshotsResponse listIcebergSnapshots(const string &catalogId, const string &_namespace, const string &table, const Models::ListIcebergSnapshotsRequest &request);

      /**
       * @summary 查看iceberg表详情列表
       *
       * @param request ListIcebergTableDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIcebergTableDetailsResponse
       */
      Models::ListIcebergTableDetailsResponse listIcebergTableDetailsWithOptions(const string &catalogId, const string &_namespace, const Models::ListIcebergTableDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看iceberg表详情列表
       *
       * @param request ListIcebergTableDetailsRequest
       * @return ListIcebergTableDetailsResponse
       */
      Models::ListIcebergTableDetailsResponse listIcebergTableDetails(const string &catalogId, const string &_namespace, const Models::ListIcebergTableDetailsRequest &request);

      /**
       * @summary 查看表
       *
       * @param request ListPartitionSummariesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionSummariesResponse
       */
      Models::ListPartitionSummariesResponse listPartitionSummariesWithOptions(const string &catalogId, const string &database, const string &table, const Models::ListPartitionSummariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表
       *
       * @param request ListPartitionSummariesRequest
       * @return ListPartitionSummariesResponse
       */
      Models::ListPartitionSummariesResponse listPartitionSummaries(const string &catalogId, const string &database, const string &table, const Models::ListPartitionSummariesRequest &request);

      /**
       * @summary listPartitions
       *
       * @param request ListPartitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionsResponse
       */
      Models::ListPartitionsResponse listPartitionsWithOptions(const string &catalogId, const string &database, const string &table, const Models::ListPartitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary listPartitions
       *
       * @param request ListPartitionsRequest
       * @return ListPartitionsResponse
       */
      Models::ListPartitionsResponse listPartitions(const string &catalogId, const string &database, const string &table, const Models::ListPartitionsRequest &request);

      /**
       * @summary 获取指定资源或指定Principal的权限信息
       *
       * @param request ListPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissionsWithOptions(const string &catalogId, const Models::ListPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定资源或指定Principal的权限信息
       *
       * @param request ListPermissionsRequest
       * @return ListPermissionsResponse
       */
      Models::ListPermissionsResponse listPermissions(const string &catalogId, const Models::ListPermissionsRequest &request);

      /**
       * @summary 获取提供的共享列表
       *
       * @param request ListProvidedSharesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProvidedSharesResponse
       */
      Models::ListProvidedSharesResponse listProvidedSharesWithOptions(const Models::ListProvidedSharesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取提供的共享列表
       *
       * @param request ListProvidedSharesRequest
       * @return ListProvidedSharesResponse
       */
      Models::ListProvidedSharesResponse listProvidedShares(const Models::ListProvidedSharesRequest &request);

      /**
       * @summary 获取接收的共享列表
       *
       * @param request ListReceivedSharesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReceivedSharesResponse
       */
      Models::ListReceivedSharesResponse listReceivedSharesWithOptions(const Models::ListReceivedSharesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取接收的共享列表
       *
       * @param request ListReceivedSharesRequest
       * @return ListReceivedSharesResponse
       */
      Models::ListReceivedSharesResponse listReceivedShares(const Models::ListReceivedSharesRequest &request);

      /**
       * @summary 获取接收者列表
       *
       * @param request ListReceiversRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReceiversResponse
       */
      Models::ListReceiversResponse listReceiversWithOptions(const Models::ListReceiversRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取接收者列表
       *
       * @param request ListReceiversRequest
       * @return ListReceiversResponse
       */
      Models::ListReceiversResponse listReceivers(const Models::ListReceiversRequest &request);

      /**
       * @summary 获取角色用户列表
       *
       * @param request ListRoleUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoleUsersResponse
       */
      Models::ListRoleUsersResponse listRoleUsersWithOptions(const Models::ListRoleUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取角色用户列表
       *
       * @param request ListRoleUsersRequest
       * @return ListRoleUsersResponse
       */
      Models::ListRoleUsersResponse listRoleUsers(const Models::ListRoleUsersRequest &request);

      /**
       * @summary 获取角色列表
       *
       * @param request ListRolesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取角色列表
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary 获取共享中的接收者列表
       *
       * @param request ListShareReceiversRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListShareReceiversResponse
       */
      Models::ListShareReceiversResponse listShareReceiversWithOptions(const string &share, const Models::ListShareReceiversRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取共享中的接收者列表
       *
       * @param request ListShareReceiversRequest
       * @return ListShareReceiversResponse
       */
      Models::ListShareReceiversResponse listShareReceivers(const string &share, const Models::ListShareReceiversRequest &request);

      /**
       * @summary 获取共享资源列表
       *
       * @param request ListShareResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListShareResourcesResponse
       */
      Models::ListShareResourcesResponse listShareResourcesWithOptions(const string &share, const Models::ListShareResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取共享资源列表
       *
       * @param request ListShareResourcesRequest
       * @return ListShareResourcesResponse
       */
      Models::ListShareResourcesResponse listShareResources(const string &share, const Models::ListShareResourcesRequest &request);

      /**
       * @summary 查看表快照列表
       *
       * @param request ListSnapshotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshotsWithOptions(const string &catalogId, const string &database, const string &table, const Models::ListSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表快照列表
       *
       * @param request ListSnapshotsRequest
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshots(const string &catalogId, const string &database, const string &table, const Models::ListSnapshotsRequest &request);

      /**
       * @summary 查看表详情列表
       *
       * @param request ListTableDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableDetailsResponse
       */
      Models::ListTableDetailsResponse listTableDetailsWithOptions(const string &catalogId, const string &database, const Models::ListTableDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表详情列表
       *
       * @param request ListTableDetailsRequest
       * @return ListTableDetailsResponse
       */
      Models::ListTableDetailsResponse listTableDetails(const string &catalogId, const string &database, const Models::ListTableDetailsRequest &request);

      /**
       * @summary 查看表详情列表
       *
       * @param request ListTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const string &catalogId, const string &database, const Models::ListTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看表详情列表
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const string &catalogId, const string &database, const Models::ListTablesRequest &request);

      /**
       * @summary 获取用户角色列表
       *
       * @param request ListUserRolesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserRolesResponse
       */
      Models::ListUserRolesResponse listUserRolesWithOptions(const Models::ListUserRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户角色列表
       *
       * @param request ListUserRolesRequest
       * @return ListUserRolesResponse
       */
      Models::ListUserRolesResponse listUserRoles(const Models::ListUserRolesRequest &request);

      /**
       * @summary 获取用户列表
       *
       * @param request ListUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户列表
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary 刷新用户同步
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshUserSyncResponse
       */
      Models::RefreshUserSyncResponse refreshUserSyncWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 刷新用户同步
       *
       * @return RefreshUserSyncResponse
       */
      Models::RefreshUserSyncResponse refreshUserSync();

      /**
       * @summary 批量取消授予角色权限给用户
       *
       * @param request RevokeRoleFromUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeRoleFromUsersResponse
       */
      Models::RevokeRoleFromUsersResponse revokeRoleFromUsersWithOptions(const Models::RevokeRoleFromUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量取消授予角色权限给用户
       *
       * @param request RevokeRoleFromUsersRequest
       * @return RevokeRoleFromUsersResponse
       */
      Models::RevokeRoleFromUsersResponse revokeRoleFromUsers(const Models::RevokeRoleFromUsersRequest &request);

      /**
       * @summary 回滚表
       *
       * @param request RollbackTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackTableResponse
       */
      Models::RollbackTableResponse rollbackTableWithOptions(const string &catalogId, const string &database, const string &table, const Models::RollbackTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 回滚表
       *
       * @param request RollbackTableRequest
       * @return RollbackTableResponse
       */
      Models::RollbackTableResponse rollbackTable(const string &catalogId, const string &database, const string &table, const Models::RollbackTableRequest &request);

      /**
       * @summary 订阅当前地域的 DLF
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribeResponse
       */
      Models::SubscribeResponse subscribeWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订阅当前地域的 DLF
       *
       * @return SubscribeResponse
       */
      Models::SubscribeResponse subscribe();

      /**
       * @summary 更新角色
       *
       * @param request UpdateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRoleWithOptions(const Models::UpdateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新角色
       *
       * @param request UpdateRoleRequest
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRole(const Models::UpdateRoleRequest &request);

      /**
       * @summary 更新角色用户
       *
       * @param request UpdateRoleUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleUsersResponse
       */
      Models::UpdateRoleUsersResponse updateRoleUsersWithOptions(const Models::UpdateRoleUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新角色用户
       *
       * @param request UpdateRoleUsersRequest
       * @return UpdateRoleUsersResponse
       */
      Models::UpdateRoleUsersResponse updateRoleUsers(const Models::UpdateRoleUsersRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
